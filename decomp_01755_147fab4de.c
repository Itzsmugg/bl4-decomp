// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147fab4de FUN_147fab4de body=257 status=ok
// SIG undefined FUN_147fab4de(void)

void FUN_147fab4de(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_1459cb585(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 147fab5e0 FUN_147fab5e0 body=222 status=ok
// SIG undefined FUN_147fab5e0(void)

longlong * FUN_147fab5e0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_147faafae(*param_4,&local_40);
  uVar3 = *local_40;
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
  lVar4 = *param_1;
  param_1[3] = *(longlong *)(lVar4 + 200);
  param_1[4] = *(longlong *)(lVar4 + 0xc0);
  param_1[2] = *(longlong *)(lVar4 + 0xd0);
  *(undefined8 **)(lVar4 + 200) = param_4;
  *(undefined8 *)(*param_1 + 0xc0) = param_3;
  *(undefined8 *)(*param_1 + 0xd0) = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fab6c0 FUN_147fab6c0 body=109 status=ok
// SIG undefined FUN_147fab6c0(void)

void FUN_147fab6c0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147fb534c(param_1,iVar1);
    }
    FUN_147fb5339((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147fb53a2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147fab72e FUN_147fab72e body=737 status=ok
// SIG undefined FUN_147fab72e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147fab72e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  undefined4 uVar17;
  undefined1 auVar16 [16];
  longlong lVar18;
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar29 [16];
  
  *param_1 = &PTR_FUN_14aceedb0;
  auVar10 = _DAT_149931e80;
  lVar11 = (longlong)*(int *)(*(longlong *)param_1[3] + 0x18);
  if (lVar11 != 0) {
    uVar12 = lVar11 * 0x30 - 0x30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar12;
    uVar15 = SUB164(auVar19 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
    uVar17 = (undefined4)(uVar12 / 0x180000000);
    auVar20._0_8_ = CONCAT44(uVar17,uVar15);
    auVar20._8_4_ = uVar15;
    auVar20._12_4_ = uVar17;
    auVar16._0_8_ = auVar20._0_8_ >> 5;
    auVar16._8_8_ = auVar20._8_8_ >> 5;
    puVar14 = (undefined2 *)(*(longlong *)(*(longlong *)param_1[3] + 0x10) + 0x16c);
    uVar13 = 0;
    auVar19 = pmovsxbq(in_XMM1,0x706);
    auVar20 = pmovsxbq(in_XMM2,0x504);
    auVar21 = pmovsxbq(in_XMM3,0x302);
    auVar22 = pmovsxbq(in_XMM4,0x100);
    auVar16 = auVar16 | _DAT_149931e80;
    do {
      auVar23._8_4_ = (int)uVar13;
      auVar23._0_8_ = uVar13;
      auVar23._12_4_ = (int)(uVar13 >> 0x20);
      auVar25 = (auVar23 | auVar22) ^ auVar10;
      lVar11 = auVar16._0_8_;
      auVar26._0_8_ = -(ulonglong)(lVar11 < auVar25._0_8_);
      lVar18 = auVar16._8_8_;
      auVar26._8_8_ = -(ulonglong)(lVar18 < auVar25._8_8_);
      auVar29 = pshuflw(unaff_XMM9,auVar26,0xe8);
      auVar25._8_4_ = 0xffffffff;
      auVar25._0_8_ = 0xffffffffffffffff;
      auVar25._12_4_ = 0xffffffff;
      auVar25 = packssdw(auVar29 ^ auVar25,auVar29 ^ auVar25);
      if ((auVar25._0_4_ & 1) != 0) {
        puVar14[-0xa8] = 0xffff;
      }
      auVar26 = packssdw(auVar26,auVar26);
      auVar29._8_4_ = 0xffffffff;
      auVar29._0_8_ = 0xffffffffffffffff;
      auVar29._12_4_ = 0xffffffff;
      auVar26 = packssdw(auVar26 ^ auVar29,auVar26 ^ auVar29);
      if ((auVar26[2] & 1) != 0) {
        puVar14[-0x90] = 0xffff;
      }
      auVar26 = (auVar23 | auVar21) ^ auVar10;
      auVar27._0_8_ = -(ulonglong)(lVar11 < auVar26._0_8_);
      auVar27._8_8_ = -(ulonglong)(lVar18 < auVar26._8_8_);
      auVar25 = packssdw(auVar25,auVar27);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar25 = packssdw(auVar25 ^ auVar4,auVar25 ^ auVar4);
      if ((auVar25[4] & 1) != 0) {
        puVar14[-0x78] = 0xffff;
      }
      auVar26 = pshufhw(auVar27,auVar27,0x84);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar26 = packssdw(auVar26 ^ auVar5,auVar26 ^ auVar5);
      if ((auVar26[6] & 1) != 0) {
        puVar14[-0x60] = 0xffff;
      }
      auVar26 = (auVar23 | auVar20) ^ auVar10;
      auVar28._0_8_ = -(ulonglong)(lVar11 < auVar26._0_8_);
      auVar28._8_8_ = -(ulonglong)(lVar18 < auVar26._8_8_);
      auVar25 = pshuflw(auVar25,auVar28,0xe8);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      unaff_XMM9 = packssdw(auVar25 ^ auVar6,auVar25 ^ auVar6);
      if ((unaff_XMM9[8] & 1) != 0) {
        puVar14[-0x48] = 0xffff;
      }
      auVar25 = packssdw(auVar28,auVar28);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar25 = packssdw(auVar25 ^ auVar7,auVar25 ^ auVar7);
      if ((auVar25[10] & 1) != 0) {
        puVar14[-0x30] = 0xffff;
      }
      auVar23 = (auVar23 | auVar19) ^ auVar10;
      auVar24._0_8_ = -(ulonglong)(lVar11 < auVar23._0_8_);
      auVar24._8_8_ = -(ulonglong)(lVar18 < auVar23._8_8_);
      auVar25 = packssdw(auVar25,auVar24);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar25 = packssdw(auVar25 ^ auVar8,auVar25 ^ auVar8);
      if ((auVar25[0xc] & 1) != 0) {
        puVar14[-0x18] = 0xffff;
      }
      auVar25 = pshufhw(auVar24,auVar24,0x84);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar25 = packssdw(auVar25 ^ auVar9,auVar25 ^ auVar9);
      if ((auVar25[0xe] & 1) != 0) {
        *puVar14 = 0xffff;
      }
      uVar13 = uVar13 + 8;
      puVar14 = puVar14 + 0xc0;
    } while ((uVar12 / 0x30 + 8 & 0xfffffffffffffff8) != uVar13);
  }
  FUN_147fb5313(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_147fa6ed6(param_1 + 0xf);
  FUN_1438d29e8(param_1 + 0xc);
  FUN_1449db362(param_1 + 10);
  FUN_1438d2984(param_1 + 8);
  plVar3 = (longlong *)param_1[6];
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
                    /* WARNING: Could not recover jumptable at 0x000147fab9ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147faba10 FUN_147faba10 body=9 status=ok
// SIG undefined FUN_147faba10(void)

void FUN_147faba10(longlong param_1)

{
  FUN_147fb5290(param_1 + 0x50);
  return;
}



// FUNCTION 147faba1a FUN_147faba1a body=177 status=ok
// SIG undefined FUN_147faba1a(void)

undefined8 FUN_147faba1a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong lVar8;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*param_2 + 0x38)) &&
     (*(longlong *)(*(longlong *)(*param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),1);
  }
  lVar3 = FUN_144a797b2();
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(lVar1 + 0x10);
  if (lVar4 == 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38)) {
    return 0;
  }
  lVar8 = lVar3 + 0x30;
  if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar8) {
    return 0;
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar4 = FUN_144a797b2();
    lVar8 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
       (lVar8 = *(longlong *)(lVar8 + 0x30),
       *(longlong *)(lVar8 + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
      uVar5 = FUN_144a7ff9e(lVar3,lVar1);
      bVar7 = (byte)uVar5;
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
      bVar2 = 1;
      goto LAB_147fabab2;
    }
  }
  bVar7 = (byte)lVar8;
  bVar2 = 0;
  uVar6 = 0;
LAB_147fabab2:
  return CONCAT71(uVar6,bVar2 & bVar7);
}



// FUNCTION 147fabacc FUN_147fabacc body=78 status=ok
// SIG undefined FUN_147fabacc(void)

undefined8 FUN_147fabacc(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0xb0);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa8);
    lVar4 = lVar4 * 0x18;
    do {
      if (*(longlong *)(lVar3 + 8) == param_2) {
        if (lVar3 == 0) {
          return 0;
        }
        lVar4 = (ulonglong)*(ushort *)(lVar3 + 0x12) * 0x10;
        uVar2 = param_3[1];
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar4);
        *puVar1 = *param_3;
        puVar1[1] = uVar2;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147fabb1a FUN_147fabb1a body=76 status=ok
// SIG undefined FUN_147fabb1a(void)

bool FUN_147fabb1a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145814b44(*(longlong *)(param_1 + 0x10) + 0x160);
  lVar2 = FUN_145814b44(param_2);
  if (lVar1 == lVar2) {
    FUN_147fb67e4(*(undefined8 *)(param_1 + 0x20),param_2);
  }
  return lVar1 == lVar2;
}



// FUNCTION 147fabb66 FUN_147fabb66 body=63 status=ok
// SIG undefined FUN_147fabb66(void)

longlong FUN_147fabb66(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147fb5440(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_147fb53ed(lVar2);
  return lVar2;
}



// FUNCTION 147fabba6 FUN_147fabba6 body=3141 status=ok
// SIG undefined FUN_147fabba6(void)

void FUN_147fabba6(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  ushort uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  ushort *puVar11;
  longlong lVar12;
  undefined7 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong *in_R10;
  ulonglong uVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined1 auStack_208 [42];
  undefined2 local_1de;
  undefined2 local_1dc;
  char local_1d9;
  undefined4 local_1d8;
  undefined1 local_1d1;
  ulonglong local_1d0;
  int local_1c4;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined2 local_1ba;
  longlong *local_1b8;
  int local_1ac;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  int local_18c;
  undefined4 *local_188;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  longlong local_168;
  int local_160;
  longlong local_158;
  int local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  undefined8 *local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8 [16];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar23 = (int)param_3[1];
  local_1b8 = param_3;
  local_1a0 = param_2;
  if (0 < (longlong)iVar23) {
    lVar25 = *param_3;
    lVar14 = lVar25 + 10;
    lVar21 = 0;
    iVar19 = 0;
    do {
      in_R10 = (longlong *)(lVar25 + lVar21 * 0x30);
      if ((*(byte *)(lVar25 + 0x2f + lVar21 * 0x30) & 1) != 0) {
        iVar19 = iVar19 + (uint)*(ushort *)(*in_R10 + 0x172);
      }
      pbVar1 = (byte *)((longlong)in_R10 + 0x1a);
      if ((ulonglong)*pbVar1 != 0) {
        in_R10 = *(longlong **)(*in_R10 + 0x40);
        uVar22 = 0;
        do {
          iVar19 = iVar19 + (uint)*(byte *)(in_R10 + (ulonglong)*(ushort *)(lVar14 + uVar22 * 2) *
                                                     0xb + 9);
          uVar22 = uVar22 + 1;
        } while (*pbVar1 != uVar22);
      }
      lVar21 = lVar21 + 1;
      lVar14 = lVar14 + 0x30;
    } while (lVar21 != iVar23);
    local_f8 = 0;
    uStack_f0 = 0;
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar19);
    }
    if (iVar19 != 0) {
      FUN_147fb54d4(&local_f8,iVar19);
      local_108 = 0;
      uStack_100 = 0;
      FUN_147fb54e2(&local_108,iVar19);
      iVar23 = (int)local_1b8[1];
      goto LAB_147fabcb6;
    }
  }
  uStack_f0 = 0;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
LAB_147fabcb6:
  local_68 = 0x800000000;
  local_118 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x48);
  local_120 = &local_118;
  local_110 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x50);
  iVar19 = 0;
  local_1a8 = param_1;
  if (0 < iVar23) {
    local_1d9 = '\t';
    local_1dc = 0xffff;
    uVar22 = CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
    lVar14 = 0;
    local_1ac = 0;
    local_1c4 = 0;
    local_1de = 0xffff;
    local_1c0 = 0;
    local_1d8 = 0;
    local_1ba = 0xffff;
    local_1bc = 0xffff;
    do {
      local_198 = lVar14;
      if (lVar14 < (int)local_1a0[1]) {
        lVar14 = lVar14 * 0x30;
        lVar25 = *local_1a0;
        lVar21 = *local_1b8;
        lVar12 = *(longlong *)(lVar21 + lVar14);
        if ((lVar12 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar12);
        }
        if (*(longlong *)(lVar25 + lVar14) == lVar12) {
          if ((short)((longlong *)(lVar25 + lVar14))[1] != *(short *)(lVar21 + lVar14 + 8))
          goto LAB_147fabdc1;
          lVar14 = local_198 * 0x30 + *local_1a0;
        }
        else {
          uVar22 = 0;
          lVar14 = 0;
        }
      }
      else {
LAB_147fabdc1:
        uVar22 = 0;
        lVar14 = 0;
      }
      plVar2 = (longlong *)(*local_1b8 + local_198 * 0x30);
      iVar23 = (int)uStack_f0;
      if ((*(byte *)(*local_1b8 + 0x2f + local_198 * 0x30) & 1) != 0) {
        if ((char)local_1d8 != '\0') {
          local_1d1 = (undefined1)local_1c0;
          local_1bc = local_1de;
          local_1ba = local_1dc;
          local_1c0 = 0;
          local_1de = 0xffff;
          local_1dc = 0xffff;
          local_1d9 = (char)local_1d8;
        }
        local_1d0 = uVar22;
        FUN_147fac922(&local_f8);
        uVar6 = *(ushort *)(*plVar2 + 0x172);
        iVar19 = (int)uStack_100;
        lVar25 = (longlong)(int)uStack_100;
        uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + (uint)uVar6);
        if ((uint)(uStack_100._4_4_ - iVar19) < (uint)uVar6) {
          FUN_147fb5580(&local_108);
        }
        lVar21 = local_108;
        local_1ac = iVar23;
        lVar7 = (longlong)iVar23;
        memset((void *)(local_108 + lVar25 * 8),0,(ulonglong)uVar6 << 3);
        lVar12 = local_f8;
        lVar25 = *plVar2;
        uVar22 = local_1d0;
        if (*(short *)(lVar25 + 0x176) != 0) {
          uVar20 = (uint)*(ushort *)(lVar25 + 0x174);
          iVar23 = ~uVar20 << 4;
          do {
            lVar18 = *(longlong *)(lVar25 + 0x60);
            lVar9 = (longlong)*(int *)(lVar18 + 8 + (longlong)(*(int *)(lVar25 + 0x68) + iVar23));
            lVar4 = **(longlong **)(lVar25 + 0x70);
            lVar25 = (longlong)
                     (int)((uint)*(ushort *)(lVar18 + 0x12 + lVar9) * -0x10 +
                           (int)(*(longlong **)(lVar25 + 0x70))[1] + -0x10);
            iVar19 = *(int *)(lVar4 + 8 + lVar25);
            lVar15 = ((ulonglong)*(ushort *)(lVar18 + 0x16 + lVar9) + lVar7) * 0x10;
            *(undefined8 *)(lVar12 + lVar15) = *(undefined8 *)(lVar4 + lVar25);
            *(longlong *)(lVar12 + 8 + lVar15) = iVar19 + lVar4;
            if ((uVar22 & 1) == 0) {
              lVar18 = lVar18 + lVar9;
              local_124 = *(undefined2 *)(lVar18 + 0x18);
              local_128 = *(undefined4 *)(lVar18 + 0x14);
              uVar8 = FUN_1438cf6e6(&local_120,plVar2,&local_128);
              *(undefined8 *)(lVar21 + ((ulonglong)*(ushort *)(lVar18 + 0x16) + lVar7) * 8) = uVar8;
              uVar22 = local_1d0;
            }
            uVar20 = uVar20 + 1;
            lVar25 = *plVar2;
            iVar23 = iVar23 + -0x10;
          } while (uVar20 < (uint)*(ushort *)(lVar25 + 0x176) + (uint)*(ushort *)(lVar25 + 0x174));
        }
        lVar12 = local_f8;
        if (*(short *)(lVar25 + 0x17a) != 0) {
          uVar20 = (uint)*(ushort *)(lVar25 + 0x178);
          iVar23 = ~(uint)*(ushort *)(lVar25 + 0x178) << 4;
          do {
            lVar18 = *(longlong *)(lVar25 + 0x60);
            lVar9 = (longlong)*(int *)(lVar18 + 8 + (longlong)(*(int *)(lVar25 + 0x68) + iVar23));
            lVar4 = **(longlong **)(lVar25 + 0x70);
            lVar25 = (longlong)
                     (int)((uint)*(ushort *)(lVar18 + 0x12 + lVar9) * -0x10 +
                           (int)(*(longlong **)(lVar25 + 0x70))[1] + -0x10);
            iVar19 = *(int *)(lVar4 + 8 + lVar25);
            lVar15 = ((ulonglong)*(ushort *)(lVar18 + 0x16 + lVar9) + lVar7) * 0x10;
            *(undefined8 *)(lVar12 + lVar15) = *(undefined8 *)(lVar4 + lVar25);
            *(longlong *)(lVar12 + 8 + lVar15) = iVar19 + lVar4;
            if ((uVar22 & 1) == 0) {
              lVar18 = lVar18 + lVar9;
              local_12c = *(undefined2 *)(lVar18 + 0x18);
              local_130 = *(undefined4 *)(lVar18 + 0x14);
              uVar8 = FUN_1438cf6e6(&local_120,plVar2,&local_130);
              *(undefined8 *)(lVar21 + ((ulonglong)*(ushort *)(lVar18 + 0x16) + lVar7) * 8) = uVar8;
              uVar22 = local_1d0;
            }
            uVar20 = uVar20 + 1;
            lVar25 = *plVar2;
            iVar23 = iVar23 + -0x10;
          } while (uVar20 < (uint)*(ushort *)(lVar25 + 0x17a) + (uint)*(ushort *)(lVar25 + 0x178));
        }
        if ((uVar22 & 1) != 0) {
          local_1c4 = (int)uStack_f0;
        }
        local_1d8 = 0;
      }
      *(char *)(plVar2 + 5) = local_1d9;
      *(undefined1 *)((longlong)plVar2 + 0x29) = local_1d1;
      *(undefined2 *)((longlong)plVar2 + 0x2a) = local_1bc;
      *(undefined2 *)((longlong)plVar2 + 0x2c) = local_1ba;
      *(short *)((longlong)plVar2 + 0x1e) = (short)local_1ac;
      *(short *)(plVar2 + 4) = (short)(int)uStack_f0;
      if (*(char *)((longlong)plVar2 + 0x1a) != '\0') {
        local_180 = lVar14 + 10;
        local_188 = (undefined4 *)((longlong)plVar2 + 0x22);
        uVar16 = 0;
        local_18c = (int)uStack_f0;
        local_178 = lVar14;
        do {
          iVar23 = local_18c;
          if ((local_178 == 0) || ((uVar22 & 1) == 0)) {
            uVar6 = *(ushort *)((longlong)plVar2 + uVar16 * 2 + 10);
            local_1d0 = 0;
          }
          else {
            puVar11 = (ushort *)(local_180 + uVar16 * 2);
            if (*(byte *)(local_178 + 0x1a) <= uVar16) {
              puVar11 = &DAT_14acfe058;
            }
            uVar6 = *(ushort *)((longlong)plVar2 + uVar16 * 2 + 10);
            local_1d0 = CONCAT71((int7)((ulonglong)puVar11 >> 8),*puVar11 == uVar6);
          }
          lVar14 = *(longlong *)(*plVar2 + 0x40);
          local_170 = uVar16;
          FUN_147fac922(&local_f8);
          bVar3 = *(byte *)(lVar14 + 0x48 + (ulonglong)uVar6 * 0x58);
          iVar19 = (int)uStack_100;
          lVar25 = (longlong)(int)uStack_100;
          uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + (uint)bVar3);
          if ((uint)(uStack_100._4_4_ - iVar19) < (uint)bVar3) {
            FUN_147fb5580(&local_108);
          }
          lVar14 = lVar14 + (ulonglong)uVar6 * 0x58;
          memset((void *)(lVar25 * 8 + local_108),0,(ulonglong)bVar3 << 3);
          lVar25 = (longlong)iVar23;
          if (*(char *)(lVar14 + 0x4a) == '\x04') {
            lVar21 = **(longlong **)(*plVar2 + 0x70);
            lVar12 = (longlong)
                     (int)((int)(*(longlong **)(*plVar2 + 0x70))[1] +
                           (uint)*(ushort *)(lVar14 + 0x38) * -0x10 + -0x10);
            iVar19 = *(int *)(lVar21 + 8 + lVar12);
            if ((char)local_1d8 == '\0') {
              lVar7 = ((ulonglong)*(ushort *)(lVar14 + 0x3c) + lVar25) * 0x10;
              *(undefined8 *)(local_f8 + lVar7) = *(undefined8 *)(lVar21 + lVar12);
              *(longlong *)(local_f8 + 8 + lVar7) = iVar19 + lVar21;
              *(undefined2 *)(local_188 + 1) = *(undefined2 *)(lVar14 + 0x3e);
              *local_188 = *(undefined4 *)(lVar14 + 0x3a);
              local_1d8 = 0;
LAB_147fabf8f:
              if ((char)local_1d0 == '\0') {
                local_13c = *(undefined2 *)(lVar14 + 0x3e);
                local_140 = *(undefined4 *)(lVar14 + 0x3a);
                uVar8 = FUN_1438cf6e6(&local_120,plVar2,&local_140);
                *(undefined8 *)(local_108 + ((ulonglong)*(ushort *)(lVar14 + 0x3c) + lVar25) * 8) =
                     uVar8;
              }
            }
            else {
              lVar21 = FUN_147fb3362();
              if (lVar21 != 0) {
                FUN_145814b44(lVar21);
              }
              *(char *)((longlong)plVar2 + 0x22) = (char)local_1d8;
              *(char *)((longlong)plVar2 + 0x23) = (char)local_1c0;
              *(undefined2 *)((longlong)plVar2 + 0x24) = local_1de;
              *(undefined2 *)((longlong)plVar2 + 0x26) = local_1dc;
              local_1dc = 0xffff;
              local_1c0 = 0;
              local_1de = 0xffff;
              local_1d8 = 0;
            }
          }
          else if (*(short *)(lVar14 + 0x38) != -1) {
            local_134 = *(undefined2 *)(lVar14 + 0x3e);
            local_138 = *(undefined4 *)(lVar14 + 0x3a);
            plVar10 = (longlong *)FUN_1438cf6e6(&local_120,plVar2,&local_138);
            if (plVar10 == (longlong *)0x0) {
              if (((*(char *)(lVar14 + 0x4a) == '\x03') &&
                  (plVar10 = *(longlong **)(local_1a8 + 0x38), plVar10 != (longlong *)0x0)) &&
                 ((longlong)(int)plVar10[1] != 0)) {
                lVar21 = *plVar10;
                lVar12 = 0;
                do {
                  if (*(longlong *)(lVar21 + lVar12) == *(longlong *)(lVar14 + 0x18)) {
                    lVar7 = lVar21 + lVar12 + 8;
                    cVar5 = FUN_147fbaace(lVar7);
                    if (cVar5 != '\0') {
                      FUN_147fba96c(lVar7);
                    }
                    uVar22 = local_68;
                    lVar7 = (longlong)(int)local_68;
                    uVar20 = (int)local_68 + 1;
                    local_68 = CONCAT44(local_68._4_4_,uVar20);
                    if (local_68._4_4_ < uVar20) {
                      FUN_147fb55d6(local_e8,uVar22 & 0xffffffff);
                    }
                    puVar24 = local_e8 + lVar7 * 2;
                    *puVar24 = 0;
                    local_e8[lVar7 * 2 + 1] = 0;
                    FUN_1401fa0f0(puVar24,*(undefined8 *)(lVar21 + 0x10 + lVar12),
                                  *(undefined8 *)(lVar21 + 0x18 + lVar12));
                    lVar21 = FUN_1464543dc();
                    if (puVar24 != (undefined8 *)0x0 && lVar21 != 0) goto LAB_147fac53c;
                    break;
                  }
                  lVar12 = lVar12 + 0x30;
                } while ((longlong)(int)plVar10[1] * 0x30 != lVar12);
              }
              lVar21 = **(longlong **)(*plVar2 + 0x70);
              lVar12 = (longlong)
                       (int)((int)(*(longlong **)(*plVar2 + 0x70))[1] +
                             (uint)*(ushort *)(lVar14 + 0x38) * -0x10 + -0x10);
              puVar24 = (undefined8 *)(*(int *)(lVar21 + 8 + lVar12) + lVar21);
              lVar21 = *(longlong *)(lVar21 + lVar12);
LAB_147fac53c:
              lVar12 = ((ulonglong)*(ushort *)(lVar14 + 0x3c) + lVar25) * 0x10;
              *(longlong *)(local_f8 + lVar12) = lVar21;
              *(undefined8 **)(local_f8 + 8 + lVar12) = puVar24;
            }
            else {
              lVar21 = ((ulonglong)*(ushort *)(lVar14 + 0x3c) + lVar25) * 0x10;
              *(longlong *)(local_f8 + lVar21) = *plVar10;
              *(undefined8 *)(local_f8 + 8 + lVar21) = 0;
              lVar21 = *plVar10;
              puVar24 = (undefined8 *)plVar10[1];
            }
            lVar12 = FUN_147fb3362(lVar21,puVar24);
            uVar22 = CONCAT71((int7)((ulonglong)lVar21 >> 8),*(undefined1 *)(lVar14 + 0x4a)) &
                     0xfffffffffffffffe;
            if ((char)uVar22 == '\x02') {
              uVar13 = (undefined7)(uVar22 >> 8);
              local_1d8 = (undefined4)CONCAT71(uVar13,*(undefined1 *)(lVar14 + 0x3a));
              local_1c0 = (undefined4)CONCAT71(uVar13,*(undefined1 *)(lVar14 + 0x3b));
              local_1de = *(undefined2 *)(lVar14 + 0x3c);
              local_1dc = *(undefined2 *)(lVar14 + 0x3e);
              if (lVar12 != 0) {
                FUN_145814b44(lVar12);
              }
            }
            goto LAB_147fabf8f;
          }
          uVar6 = *(ushort *)(lVar14 + 0x42);
          if (uVar6 != 0xffff) {
            if (DAT_14cb28478 == 0) {
              uVar8 = FUN_140bffa48();
              DAT_14cb28478 = FUN_140002ddd(FUN_146452951,uVar8,L"StateTreeSharedEvent");
              uVar6 = *(ushort *)(lVar14 + 0x42);
            }
            lVar21 = (longlong)(int)((uint)uVar6 + iVar23) * 0x10;
            *(longlong *)(local_f8 + lVar21) = DAT_14cb28478;
            *(undefined8 *)(local_f8 + 8 + lVar21) = 0;
          }
          lVar12 = local_f8;
          lVar21 = local_108;
          uVar22 = local_1d0;
          if (*(char *)(lVar14 + 0x47) != '\0') {
            uVar20 = (uint)*(ushort *)(lVar14 + 0x36);
            iVar23 = ~(uint)*(ushort *)(lVar14 + 0x36) << 4;
            do {
              lVar7 = *plVar2;
              lVar18 = *(longlong *)(lVar7 + 0x60);
              lVar9 = (longlong)*(int *)(lVar18 + 8 + (longlong)(*(int *)(lVar7 + 0x68) + iVar23));
              lVar4 = **(longlong **)(lVar7 + 0x70);
              lVar7 = (longlong)
                      (int)((uint)*(ushort *)(lVar18 + 0x12 + lVar9) * -0x10 +
                            (int)(*(longlong **)(lVar7 + 0x70))[1] + -0x10);
              iVar19 = *(int *)(lVar4 + 8 + lVar7);
              lVar15 = ((ulonglong)*(ushort *)(lVar18 + 0x16 + lVar9) + lVar25) * 0x10;
              *(undefined8 *)(lVar12 + lVar15) = *(undefined8 *)(lVar4 + lVar7);
              *(longlong *)(lVar12 + 8 + lVar15) = iVar19 + lVar4;
              if ((char)uVar22 == '\0') {
                lVar18 = lVar18 + lVar9;
                local_144 = *(undefined2 *)(lVar18 + 0x18);
                local_148 = *(undefined4 *)(lVar18 + 0x14);
                uVar8 = FUN_1438cf6e6(&local_120,plVar2,&local_148);
                *(undefined8 *)(lVar21 + ((ulonglong)*(ushort *)(lVar18 + 0x16) + lVar25) * 8) =
                     uVar8;
                uVar22 = local_1d0;
              }
              uVar20 = uVar20 + 1;
              iVar23 = iVar23 + -0x10;
            } while (uVar20 < (uint)*(byte *)(lVar14 + 0x47) + (uint)*(ushort *)(lVar14 + 0x36));
          }
          if ((char)uVar22 != '\0') {
            local_1c4 = (int)uStack_f0;
          }
          uVar16 = local_170 + 1;
        } while (uVar16 < *(byte *)((longlong)plVar2 + 0x1a));
      }
      lVar25 = local_1a8;
      lVar14 = local_198 + 1;
    } while (lVar14 < (int)local_1b8[1]);
    iVar19 = local_1c4;
    if (0 < local_1c4) {
      iVar17 = -0x10;
      iVar23 = local_1c4;
      do {
        lVar14 = *(longlong *)**(longlong **)(lVar25 + 0x18);
        lVar21 = (longlong)((int)((longlong *)**(longlong **)(lVar25 + 0x18))[1] + iVar17);
        lVar12 = *(int *)(lVar14 + 8 + lVar21) + lVar14;
        uVar8 = *(undefined8 *)(lVar14 + lVar21);
        FUN_147fb33b7(uVar8,lVar12);
        FUN_147fb33b7(uVar8,lVar12);
        iVar17 = iVar17 + -0x10;
        iVar23 = iVar23 + -1;
        iVar19 = local_1c4;
      } while (iVar23 != 0);
    }
  }
  lVar14 = local_1a8;
  FUN_147fb6e06(*(undefined8 *)(local_1a8 + 0x18),iVar19);
  local_150 = (int)uStack_100 - iVar19;
  local_158 = (longlong)iVar19 * 8 + local_108;
  local_160 = (int)uStack_f0 - iVar19;
  local_168 = (longlong)iVar19 * 0x10 + local_f8;
  FUN_147fb6cd4(*(undefined8 *)(lVar14 + 0x18),*(undefined8 *)(lVar14 + 8));
  FUN_147fb67a2(**(undefined8 **)(lVar14 + 0x18));
  FUN_147fb54f0(local_e8,local_68 & 0xffffffff);
  FUN_1438d2e34(&local_108);
  FUN_1438d2c0e(&local_f8);
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fac7ee FUN_147fac7ee body=250 status=ok
// SIG undefined FUN_147fac7ee(void)

ulonglong FUN_147fac7ee(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  short sVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_78 [46];
  short local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 0x70) == '\0') {
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    if (lVar6 != 0) {
      lVar6 = lVar6 * 0x30;
      bVar2 = true;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x10);
      plVar8 = (longlong *)0x0;
      do {
        plVar5 = plVar3;
        if (plVar8 == (longlong *)0x0) {
LAB_147fac8ae:
          FUN_147fad998(param_1,&local_4a,*plVar5);
          sVar4 = local_4a;
        }
        else {
          lVar1 = *plVar5;
          if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
            FUN_1456cec3c(lVar1);
          }
          if (*plVar8 != lVar1) goto LAB_147fac8ae;
          sVar4 = *(short *)((longlong)plVar8 + 0x1c);
        }
        *(short *)((longlong)plVar5 + 0x1c) = sVar4;
        bVar2 = (bool)(bVar2 & sVar4 != -1);
        lVar6 = lVar6 + -0x30;
        plVar3 = plVar5 + 6;
        plVar8 = plVar5;
      } while (lVar6 != 0);
      if (!bVar2) {
        uVar7 = 0;
        goto LAB_147fac816;
      }
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
LAB_147fac816:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fac8ea FUN_147fac8ea body=56 status=ok
// SIG undefined FUN_147fac8ea(void)

void FUN_147fac8ea(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_147fb3c46(param_1,0);
  }
  *(undefined1 *)(param_1 + 0x20) = 4;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 147fac922 FUN_147fac922 body=65 status=ok
// SIG undefined FUN_147fac922(void)

void FUN_147fac922(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147fb552a(param_1,iVar1);
  }
  FUN_147fb5516((longlong)iVar1 * 0x10 + *param_1,param_2);
  return;
}



// FUNCTION 147fac964 FUN_147fac964 body=358 status=ok
// SIG undefined FUN_147fac964(void)

longlong *
FUN_147fac964(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 *local_30;
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(*(undefined1 *)param_5) {
  case 7:
    puVar1 = (undefined4 *)
             (*(longlong *)(param_1 + 0x40) + (ulonglong)*(ushort *)((longlong)param_5 + 2) * 0x10);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    break;
  case 8:
    puVar1 = (undefined4 *)
             ((ulonglong)*(ushort *)((longlong)param_4 + 0x1c) * 0x10 +
             (ulonglong)*(ushort *)((longlong)param_5 + 2) * 0x10 + *(longlong *)(param_1 + 0x40));
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    break;
  default:
    uVar4 = *(undefined2 *)(param_5 + 1);
    local_30 = local_28;
    goto LAB_147faca90;
  case 0xc:
    lVar3 = *(longlong *)(param_1 + 0xe0);
LAB_147fac9c5:
    if (lVar3 != 0) {
      if (DAT_14cb28460 == 0) {
        uVar2 = FUN_140bffa48();
        DAT_14cb28460 = FUN_140002ddd(FUN_1464528bd,uVar2,L"StateTreeEvent");
      }
      *param_2 = DAT_14cb28460;
      param_2[1] = lVar3;
      goto LAB_147faca03;
    }
LAB_147faca50:
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    break;
  case 0xd:
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      if (((int)(uint)*(ushort *)(param_5 + 1) < *(int *)(*param_4 + 0x48)) &&
         (lVar3 = (ulonglong)*(ushort *)(param_5 + 1) * 0x58 + *(longlong *)(*param_4 + 0x40),
         lVar3 != 0)) {
        lVar3 = *(longlong *)
                 (*(longlong *)(param_1 + 0xe8) + (ulonglong)*(byte *)(lVar3 + 0x49) * 0x10);
        goto LAB_147fac9c5;
      }
      goto LAB_147faca50;
    }
    uVar4 = *(undefined2 *)(param_5 + 1);
    local_30 = local_20;
LAB_147faca90:
    *(undefined2 *)(local_30 + 1) = uVar4;
    *local_30 = *param_5;
    local_38 = param_4;
    FUN_147facacc(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0xd0),param_3);
LAB_147faca03:
    if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  *(undefined4 *)param_2 = uVar5;
  *(undefined4 *)((longlong)param_2 + 4) = uVar6;
  *(undefined4 *)(param_2 + 1) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 147facacc FUN_147facacc body=512 status=ok
// SIG undefined FUN_147facacc(void)

longlong *
FUN_147facacc(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
             longlong param_5,undefined1 *param_6)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 *local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(*param_6) {
  default:
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  case 1:
    uVar2 = *(ushort *)(param_5 + 0x1e);
    break;
  case 2:
    uVar2 = *(ushort *)(param_5 + 0x1e);
    goto LAB_147facb85;
  case 3:
    uVar2 = *(ushort *)(param_5 + 0x20);
    break;
  case 4:
    uVar2 = *(ushort *)(param_5 + 0x20);
LAB_147facb85:
    iVar6 = (int)param_2[1] + ((uint)*(ushort *)(param_6 + 2) + (uint)uVar2) * -0x10;
    lVar4 = *param_2;
LAB_147facb99:
    lVar4 = *(longlong *)(lVar4 + *(int *)(lVar4 + 8 + (longlong)(iVar6 + -0x10)));
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar4 + 0x10);
    }
    *param_1 = lVar7;
    param_1[1] = lVar4;
    goto LAB_147facc48;
  case 5:
    iVar6 = (uint)*(ushort *)(param_6 + 2) * -0x10 + (int)param_3[1];
    lVar4 = *param_3;
    goto LAB_147facc33;
  case 6:
    iVar6 = (int)param_3[1] + (uint)*(ushort *)(param_6 + 2) * -0x10;
    lVar4 = *param_3;
    goto LAB_147facb99;
  case 9:
    if (param_4 != 0) {
      local_1c = *(undefined2 *)(param_5 + 0x2c);
      local_30 = &local_20;
      uVar8 = *(undefined4 *)(param_5 + 0x28);
LAB_147faccb5:
      *local_30 = uVar8;
      local_38 = param_4;
      FUN_147facacc(param_1,param_2,param_3,0);
      goto LAB_147facc48;
    }
    uVar8 = (undefined4)param_2[0x10];
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x84);
    uVar10 = (undefined4)param_2[0x11];
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x8c);
    goto LAB_147facb5e;
  case 10:
    if (param_4 != 0) {
      local_24 = *(undefined2 *)(param_5 + 0x26);
      local_30 = &local_28;
      uVar8 = *(undefined4 *)(param_5 + 0x22);
      goto LAB_147faccb5;
    }
  case 0xb:
    puVar1 = (undefined4 *)
             (*param_2 +
             (longlong)
             *(int *)(*param_2 + 8 +
                     (longlong)
                     (int)(((uint)*(ushort *)(param_6 + 2) + (uint)*(ushort *)(param_5 + 0x20)) *
                           -0x10 + (int)param_2[1] + -0x10)));
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
LAB_147facb5e:
    *(undefined4 *)param_1 = uVar8;
    *(undefined4 *)((longlong)param_1 + 4) = uVar9;
    *(undefined4 *)(param_1 + 1) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar11;
    goto LAB_147facc48;
  case 0xd:
    lVar4 = *(longlong *)
             (*param_2 +
             (longlong)
             *(int *)(*param_2 + 8 +
                     (longlong)
                     (int)((int)param_2[1] +
                           ((uint)*(ushort *)(param_6 + 2) + (uint)*(ushort *)(param_5 + 0x20)) *
                           -0x10 + -0x10)));
    if (DAT_14cb28460 == 0) {
      uVar5 = FUN_140bffa48();
      DAT_14cb28460 = FUN_140002ddd(FUN_1464528bd,uVar5,L"StateTreeEvent");
    }
    *param_1 = DAT_14cb28460;
    param_1[1] = lVar4;
    goto LAB_147facc48;
  }
  iVar6 = ((uint)*(ushort *)(param_6 + 2) + (uint)uVar2) * -0x10 + (int)param_2[1];
  lVar4 = *param_2;
LAB_147facc33:
  iVar3 = *(int *)(lVar4 + 8 + (longlong)(iVar6 + -0x10));
  *param_1 = *(longlong *)(lVar4 + (iVar6 + -0x10));
  param_1[1] = iVar3 + lVar4;
LAB_147facc48:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147faccd2 FUN_147faccd2 body=140 status=ok
// SIG undefined FUN_147faccd2(void)

longlong FUN_147faccd2(longlong param_1,short param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_3[1] != 0) {
    lVar3 = *param_3;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar3 + lVar4) == param_1) && (*(short *)(lVar3 + 8 + lVar4) == param_2)) {
        uVar2 = (int)(lVar4 >> 4) * -0x55555555;
        if (uVar2 != 0xffffffff) {
          if (0 < (int)uVar2) {
            *param_4 = (ulonglong)(uVar2 & 0x7fffffff) * 0x30 + lVar3 + -0x30;
            lVar3 = *param_3;
          }
          return (longlong)(int)uVar2 * 0x30 + lVar3;
        }
        break;
      }
      lVar1 = lVar3 + lVar4;
      lVar4 = lVar4 + 0x30;
    } while (lVar1 + 0x30 != (longlong)(int)param_3[1] * 0x30 + lVar3);
  }
  *param_4 = 0;
  return 0;
}



// FUNCTION 147facd5e FUN_147facd5e body=565 status=ok
// SIG undefined FUN_147facd5e(void)

undefined8 FUN_147facd5e(longlong param_1,longlong param_2,longlong param_3,byte *param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined7 uVar8;
  undefined8 uVar7;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined2 local_14;
  ulonglong local_10;
  
  puVar10 = auStack_48;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0xd < *param_4) goto LAB_147faced2;
  uVar8 = (undefined7)(local_10 >> 8);
  uVar7 = CONCAT71(uVar8,1);
  switch(*param_4) {
  default:
    goto switchD_147facd93_caseD_0;
  case 1:
  case 2:
    if (*(ushort *)(param_3 + 0x1e) != 0xffff) {
      iVar9 = (uint)*(ushort *)(param_4 + 2) + (uint)*(ushort *)(param_3 + 0x1e);
      uVar11 = *(ulonglong *)(param_1 + 0x20);
      iVar3 = *(int *)(uVar11 + 0xc);
      bVar14 = SBORROW4(iVar3,iVar9);
      bVar13 = iVar3 - iVar9 < 0;
      bVar12 = iVar3 == iVar9;
LAB_147facdb3:
      uVar7 = CONCAT71((int7)(uVar11 >> 8),!bVar12 && bVar14 == bVar13);
      goto switchD_147facd93_caseD_0;
    }
    break;
  case 3:
  case 4:
    uVar5 = (uint)*(ushort *)(param_3 + 0x20);
    if (*(ushort *)(param_3 + 0x20) != 0xffff) {
      bVar1 = *(byte *)(param_3 + 0x2e);
      if (*(byte *)(param_3 + 0x1a) < *(byte *)(param_3 + 0x2e)) {
        bVar1 = *(byte *)(param_3 + 0x1a);
      }
      if (bVar1 != 0) {
        uVar11 = 0;
        uVar7 = 0;
        do {
          if (*(short *)(param_3 + 10 + uVar11 * 2) == *(short *)(param_4 + 4)) goto LAB_147facf48;
          uVar11 = uVar11 + 1;
        } while (bVar1 != uVar11);
        goto switchD_147facd93_caseD_0;
      }
    }
    break;
  case 8:
    uVar2 = *(ushort *)(param_3 + 0x1c);
    uVar11 = (ulonglong)uVar2;
    if (uVar2 != 0xffff) {
      iVar9 = (uint)*(ushort *)(param_4 + 2) + (uint)uVar2;
      iVar3 = *(int *)(param_1 + 0x48);
      bVar14 = SBORROW4(iVar3,iVar9);
      bVar13 = iVar3 - iVar9 < 0;
      bVar12 = iVar3 == iVar9;
      goto LAB_147facdb3;
    }
    break;
  case 9:
    if (param_2 != 0) {
      local_14 = *(undefined2 *)(param_3 + 0x2c);
      uVar6 = *(undefined4 *)(param_3 + 0x28);
LAB_147facf6d:
      *(undefined4 *)((longlong)register0x00000020 + -0x18) = uVar6;
      uVar7 = FUN_147facd5e(param_1,0,param_2);
      goto switchD_147facd93_caseD_0;
    }
    bVar12 = *(char *)(param_3 + 0x28) == '\0';
    goto LAB_147face60;
  case 10:
    uVar5 = (uint)*(ushort *)(param_3 + 0x20);
    if (param_2 == 0) {
      if (uVar5 != 0xffff) {
        bVar1 = *(byte *)(param_3 + 0x2e);
        if (*(byte *)(param_3 + 0x1a) < *(byte *)(param_3 + 0x2e)) {
          bVar1 = *(byte *)(param_3 + 0x1a);
        }
        if (bVar1 != 0) {
          uVar11 = 0;
          uVar7 = 0;
          do {
            if (*(short *)(param_3 + 10 + uVar11 * 2) == *(short *)(param_4 + 4))
            goto LAB_147facf48;
            uVar11 = uVar11 + 1;
          } while (bVar1 != uVar11);
          goto switchD_147facd93_caseD_0;
        }
      }
    }
    else if (uVar5 != 0xffff) {
      local_1c = *(undefined2 *)(param_3 + 0x26);
      uVar6 = *(undefined4 *)(param_3 + 0x22);
      register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
      goto LAB_147facf6d;
    }
    break;
  case 0xb:
    uVar5 = (uint)*(ushort *)(param_3 + 0x20);
    if (*(ushort *)(param_3 + 0x20) != 0xffff) {
      bVar1 = *(byte *)(param_3 + 0x2e);
      if (*(byte *)(param_3 + 0x1a) < *(byte *)(param_3 + 0x2e)) {
        bVar1 = *(byte *)(param_3 + 0x1a);
      }
      if (bVar1 != 0) {
        uVar11 = 0;
        uVar7 = 0;
        do {
          if (*(short *)(param_3 + 10 + uVar11 * 2) == *(short *)(param_4 + 4)) goto LAB_147facf48;
          uVar11 = uVar11 + 1;
        } while (bVar1 != uVar11);
        goto switchD_147facd93_caseD_0;
      }
    }
    break;
  case 0xc:
    bVar12 = *(longlong *)(param_1 + 0xe0) == 0;
LAB_147face60:
    uVar7 = CONCAT71(uVar8,!bVar12);
    goto switchD_147facd93_caseD_0;
  case 0xd:
    if (*(longlong *)(param_1 + 0xe8) != 0) goto switchD_147facd93_caseD_0;
    uVar5 = (uint)*(ushort *)(param_3 + 0x20);
    if ((*(ushort *)(param_3 + 0x20) != 0xffff) && (*(byte *)(param_3 + 0x1a) != 0)) {
      uVar11 = 0;
      uVar7 = 0;
      do {
        if (*(short *)(param_3 + 10 + uVar11) == *(short *)(param_4 + 4)) goto LAB_147facf48;
        uVar11 = uVar11 + 2;
      } while ((uint)*(byte *)(param_3 + 0x1a) * 2 != uVar11);
      goto switchD_147facd93_caseD_0;
    }
  }
LAB_147faced2:
  uVar7 = 0;
switchD_147facd93_caseD_0:
  if ((local_10 ^ (ulonglong)puVar10) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
LAB_147facf48:
  uVar5 = *(ushort *)(param_4 + 2) + uVar5;
  uVar11 = (ulonglong)uVar5;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xc);
  bVar14 = SBORROW4(uVar4,uVar5);
  bVar13 = (int)(uVar4 - uVar5) < 0;
  bVar12 = uVar4 == uVar5;
  goto LAB_147facdb3;
}



// FUNCTION 147facf94 FUN_147facf94 body=585 status=ok
// SIG undefined FUN_147facf94(void)

undefined8 *
FUN_147facf94(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined4 local_98 [2];
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = *param_5;
  local_3c = *(undefined2 *)(param_5 + 1);
  cVar1 = FUN_147facd5e(param_1,param_3,param_4);
  if (cVar1 != '\0') {
    local_44 = *(undefined2 *)(param_5 + 1);
    local_a8 = &local_48;
    local_48 = *param_5;
    FUN_147fac964(param_1,param_2,param_3,param_4);
    goto LAB_147fad081;
  }
  switch(*(undefined1 *)param_5) {
  case 1:
  case 3:
    local_5c = *(undefined2 *)(param_5 + 1);
    local_60 = *param_5;
    FUN_147fb663c(*(undefined8 *)(param_1 + 0x20),&local_58,param_4);
    *param_2 = local_58;
    break;
  case 2:
  case 4:
    local_64 = *(undefined2 *)(param_5 + 1);
    local_68 = *param_5;
    local_50 = FUN_147fb66f0(*(undefined8 *)(param_1 + 0x20),param_4);
    if (local_50 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(local_50 + 0x10);
    }
    *param_2 = uVar4;
    break;
  default:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
  case 9:
    if (param_3 != 0) {
      local_7c = *(undefined2 *)(param_4 + 0x2c);
      local_80 = *(undefined4 *)(param_4 + 0x28);
      FUN_147fb663c(*(undefined8 *)(param_1 + 0x20),&local_78,param_3);
      goto LAB_147fad15b;
    }
    goto LAB_147fad0b8;
  case 10:
    if (param_3 == 0) {
LAB_147fad118:
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined2 *)(param_5 + 1);
      puVar3 = local_90;
      goto LAB_147fad138;
    }
    local_84 = *(undefined2 *)(param_4 + 0x26);
    local_88 = *(undefined4 *)(param_4 + 0x22);
    FUN_147fb663c(*(undefined8 *)(param_1 + 0x20),&local_78,param_3);
    puVar3 = (undefined4 *)FUN_147fb55fc(local_78,local_70);
    if (puVar3 == (undefined4 *)0x0) goto LAB_147fad118;
LAB_147fad169:
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    goto LAB_147fad0bb;
  case 0xb:
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined2 *)(param_5 + 1);
    puVar3 = local_98;
LAB_147fad138:
    *(undefined2 *)(puVar3 + 1) = uVar2;
    *puVar3 = *param_5;
    FUN_147fb663c(uVar4,&local_78,param_4);
LAB_147fad15b:
    puVar3 = (undefined4 *)FUN_147fb55fc(local_78,local_70);
    if (puVar3 != (undefined4 *)0x0) goto LAB_147fad169;
LAB_147fad0b8:
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
LAB_147fad0bb:
    *(undefined4 *)param_2 = uVar5;
    *(undefined4 *)((longlong)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
    goto LAB_147fad081;
  }
  param_2[1] = local_50;
LAB_147fad081:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fad1e0 FUN_147fad1e0 body=206 status=ok
// SIG undefined FUN_147fad1e0(void)

undefined8 *
FUN_147fad1e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined2 param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined2 local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_6;
  uStack_34 = param_6[1];
  uStack_30 = param_6[2];
  uStack_2c = param_6[3];
  local_48 = &local_38;
  local_40 = *param_5;
  local_50 = &local_40;
  local_3c = *(undefined2 *)(param_5 + 1);
  local_58 = param_4;
  FUN_147fb6410(*(undefined8 *)(param_1 + 0x20),&local_28,*(undefined8 *)(param_1 + 8),param_3);
  plVar1 = (longlong *)FUN_147fb5651(local_28,local_20);
  if (plVar1 != (longlong *)0x0) {
    local_20 = *plVar1;
    if (local_20 == 0) {
      local_28 = 0;
      local_20 = 0;
    }
    else {
      local_28 = *(undefined8 *)(local_20 + 0x10);
    }
  }
  *param_2 = local_28;
  param_2[1] = local_20;
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147fad2b0 FUN_147fad2b0 body=308 status=ok
// SIG undefined FUN_147fad2b0(void)

void FUN_147fad2b0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  ushort param_5)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(*param_3 + 200);
  lVar6 = (ulonglong)param_5 * 0x20;
  sVar1 = *(short *)(lVar5 + 0x1c + lVar6);
  sVar2 = *(short *)(lVar5 + 0x1e + lVar6);
  if (sVar2 != sVar1) {
    local_98 = (undefined4 *)CONCAT62(local_98._2_6_,sVar2 - sVar1);
    FUN_147fad3e6(param_1,param_2,param_3);
  }
  uVar3 = *(ushort *)(lVar5 + lVar6 + 0x1a);
  uVar4 = *(ushort *)(lVar5 + lVar6 + 0x18);
  if (uVar3 != uVar4) {
    lVar6 = *(longlong *)(*param_3 + 0xe8) + (ulonglong)uVar4 * 0x58;
    lVar5 = (ulonglong)uVar3 * 0x58 + (ulonglong)uVar4 * -0x58;
    do {
      local_60 = *(undefined4 *)(lVar6 + 0x4c);
      local_5c = *(undefined2 *)(lVar6 + 0x50);
      local_98 = &local_60;
      FUN_147fac964(param_1,&local_58,param_2,param_3);
      local_78 = *param_4;
      uStack_70 = param_4[1];
      local_88 = local_58;
      uStack_84 = uStack_54;
      uStack_80 = uStack_50;
      uStack_7c = uStack_4c;
      FUN_147fb9392(*param_3 + 0xb8,lVar6,&local_88,&local_78);
      lVar6 = lVar6 + 0x58;
      lVar5 = lVar5 + -0x58;
    } while (lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fad3e6 FUN_147fad3e6 body=555 status=ok
// SIG undefined FUN_147fad3e6(void)

void FUN_147fad3e6(longlong param_1,undefined8 param_2,longlong *param_3,ushort param_4,
                  ushort param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined2 local_c2;
  longlong *local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c0 = param_3;
  local_b0 = param_2;
  if (param_5 != 0) {
    uVar9 = (uint)param_4;
    local_b4 = (uint)param_5 + (uint)param_4;
    local_a0 = (undefined4 *)(param_1 + 0xf2);
    local_a8 = (undefined4 *)(param_1 + 0xf8);
    iVar10 = ~(uint)param_4 << 4;
    do {
      lVar6 = *(longlong *)(*local_c0 + 0x60);
      lVar7 = (longlong)*(int *)(lVar6 + 8 + (longlong)(*(int *)(*local_c0 + 0x68) + iVar10));
      local_60 = *(undefined4 *)(lVar6 + 0x14 + lVar7);
      local_5c = *(undefined2 *)(lVar6 + 0x18 + lVar7);
      local_d8 = &local_60;
      FUN_147fac964(param_1,&local_58,local_b0);
      uVar1 = *(undefined1 *)(param_1 + 0xf2);
      uVar2 = *(undefined1 *)(param_1 + 0xf3);
      local_c2 = *(undefined2 *)(param_1 + 0xf4);
      uVar3 = *(undefined2 *)(param_1 + 0xf6);
      local_90 = *(undefined8 *)(param_1 + 0xf8);
      local_98 = *(undefined8 *)(param_1 + 0x100);
      uVar5 = *(undefined4 *)(lVar6 + 0x14 + lVar7);
      *(undefined2 *)(local_a0 + 1) = *(undefined2 *)(lVar6 + 0x18 + lVar7);
      *local_a0 = uVar5;
      *local_a8 = local_58;
      local_a8[1] = uStack_54;
      local_a8[2] = uStack_50;
      local_a8[3] = uStack_4c;
      sVar4 = *(short *)(lVar6 + 0x10 + lVar7);
      if (sVar4 != -1) {
        local_78 = local_58;
        uStack_74 = uStack_54;
        uStack_70 = uStack_50;
        uStack_6c = uStack_4c;
        local_d8 = (undefined4 *)CONCAT62(local_d8._2_6_,sVar4);
        FUN_147fad2b0(param_1,local_b0,local_c0,&local_78);
      }
      plVar8 = (longlong *)(lVar6 + lVar7);
      (**(code **)(*plVar8 + 0x28))(plVar8,param_1);
      if ((short)plVar8[2] != -1) {
        local_88 = local_58;
        uStack_84 = uStack_54;
        uStack_80 = uStack_50;
        uStack_7c = uStack_4c;
        FUN_147fb95a6(*local_c0 + 0xb8,(short)plVar8[2],&local_88);
      }
      *(undefined1 *)(param_1 + 0xf2) = uVar1;
      *(undefined1 *)(param_1 + 0xf3) = uVar2;
      *(undefined2 *)(param_1 + 0xf4) = local_c2;
      *(undefined2 *)(param_1 + 0xf6) = uVar3;
      *(undefined8 *)(param_1 + 0xf8) = local_90;
      *(undefined8 *)(param_1 + 0x100) = local_98;
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + -0x10;
    } while (uVar9 < local_b4);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fad612 FUN_147fad612 body=344 status=ok
// SIG undefined FUN_147fad612(void)

ulonglong FUN_147fad612(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                       ushort param_5)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined7 uVar7;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = *(longlong *)(*param_3 + 200);
  lVar9 = (ulonglong)param_5 * 0x20;
  sVar1 = *(short *)(lVar8 + 0x1c + lVar9);
  sVar2 = *(short *)(lVar8 + 0x1e + lVar9);
  if (sVar2 != sVar1) {
    local_98 = (undefined4 *)CONCAT62(local_98._2_6_,sVar2 - sVar1);
    FUN_147fad76c(param_1,param_2,param_3);
  }
  uVar3 = *(ushort *)(lVar8 + lVar9 + 0x1a);
  uVar4 = *(ushort *)(lVar8 + lVar9 + 0x18);
  uVar7 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (uVar3 != uVar4) {
    lVar9 = *(longlong *)(*param_3 + 0xe8) + (ulonglong)uVar4 * 0x58;
    lVar8 = (ulonglong)uVar3 * 0x58 + (ulonglong)uVar4 * -0x58;
    uVar6 = CONCAT71(uVar7,1);
    do {
      local_60 = *(undefined4 *)(lVar9 + 0x4c);
      local_5c = *(undefined2 *)(lVar9 + 0x50);
      local_98 = &local_60;
      FUN_147facf94(param_1,&local_58,param_2,param_3);
      if ((CONCAT44(uStack_4c,uStack_50) == 0) || (CONCAT44(uStack_54,local_58) == 0)) {
        uVar6 = 0;
        break;
      }
      local_78 = *param_4;
      uStack_70 = param_4[1];
      local_88 = local_58;
      uStack_84 = uStack_54;
      uStack_80 = uStack_50;
      uStack_7c = uStack_4c;
      bVar5 = FUN_147fb9392(*param_3 + 0xb8,lVar9,&local_88,&local_78);
      uVar6 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 & bVar5);
      lVar9 = lVar9 + 0x58;
      lVar8 = lVar8 + -0x58;
    } while (lVar8 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147fad76c FUN_147fad76c body=555 status=ok
// SIG undefined FUN_147fad76c(void)

void FUN_147fad76c(longlong param_1,undefined8 param_2,longlong *param_3,ushort param_4,
                  ushort param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined2 local_c2;
  longlong *local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c0 = param_3;
  local_b0 = param_2;
  if (param_5 != 0) {
    uVar9 = (uint)param_4;
    local_b4 = (uint)param_5 + (uint)param_4;
    local_a0 = (undefined4 *)(param_1 + 0xf2);
    local_a8 = (undefined4 *)(param_1 + 0xf8);
    iVar10 = ~(uint)param_4 << 4;
    do {
      lVar6 = *(longlong *)(*local_c0 + 0x60);
      lVar7 = (longlong)*(int *)(lVar6 + 8 + (longlong)(*(int *)(*local_c0 + 0x68) + iVar10));
      local_60 = *(undefined4 *)(lVar6 + 0x14 + lVar7);
      local_5c = *(undefined2 *)(lVar6 + 0x18 + lVar7);
      local_d8 = &local_60;
      FUN_147fac964(param_1,&local_58,local_b0);
      uVar1 = *(undefined1 *)(param_1 + 0xf2);
      uVar2 = *(undefined1 *)(param_1 + 0xf3);
      local_c2 = *(undefined2 *)(param_1 + 0xf4);
      uVar3 = *(undefined2 *)(param_1 + 0xf6);
      local_90 = *(undefined8 *)(param_1 + 0xf8);
      local_98 = *(undefined8 *)(param_1 + 0x100);
      uVar5 = *(undefined4 *)(lVar6 + 0x14 + lVar7);
      *(undefined2 *)(local_a0 + 1) = *(undefined2 *)(lVar6 + 0x18 + lVar7);
      *local_a0 = uVar5;
      *local_a8 = local_58;
      local_a8[1] = uStack_54;
      local_a8[2] = uStack_50;
      local_a8[3] = uStack_4c;
      sVar4 = *(short *)(lVar6 + 0x10 + lVar7);
      if (sVar4 != -1) {
        local_78 = local_58;
        uStack_74 = uStack_54;
        uStack_70 = uStack_50;
        uStack_6c = uStack_4c;
        local_d8 = (undefined4 *)CONCAT62(local_d8._2_6_,sVar4);
        FUN_147fad612(param_1,local_b0,local_c0,&local_78);
      }
      plVar8 = (longlong *)(lVar6 + lVar7);
      (**(code **)(*plVar8 + 0x28))(plVar8,param_1);
      if ((short)plVar8[2] != -1) {
        local_88 = local_58;
        uStack_84 = uStack_54;
        uStack_80 = uStack_50;
        uStack_7c = uStack_4c;
        FUN_147fb95a6(*local_c0 + 0xb8,(short)plVar8[2],&local_88);
      }
      *(undefined1 *)(param_1 + 0xf2) = uVar1;
      *(undefined1 *)(param_1 + 0xf3) = uVar2;
      *(undefined2 *)(param_1 + 0xf4) = local_c2;
      *(undefined2 *)(param_1 + 0xf6) = uVar3;
      *(undefined8 *)(param_1 + 0xf8) = local_90;
      *(undefined8 *)(param_1 + 0x100) = local_98;
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + -0x10;
    } while (uVar9 < local_b4);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fad998 FUN_147fad998 body=480 status=ok
// SIG undefined FUN_147fad998(void)

undefined2 * FUN_147fad998(longlong param_1,undefined2 *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar7 = 0xffff;
  if (param_3 != 0) {
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar6) == param_3) {
          uVar7 = *(undefined2 *)(*(longlong *)(param_1 + 0x60) + 8 + lVar6);
          goto LAB_147fada3a;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar6);
    }
    uVar2 = *(uint *)(param_3 + 0x188);
    uVar9 = (ulonglong)uVar2;
    plVar5 = (longlong *)(param_1 + 0x40);
    iVar8 = *(int *)(param_1 + 0x48);
    if (0 < (int)uVar2) {
      lVar6 = *(longlong *)(param_3 + 0x180);
      local_78 = plVar5;
      FUN_147fadb7a(plVar5,uVar9);
      lVar10 = (longlong)iVar8 * 0x10;
      plVar5 = local_78;
      if ((*(int *)(param_1 + 0x58) != 0) && (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) {
        local_70 = *(longlong *)(param_1 + 0x40) + lVar10;
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))();
        plVar5 = local_78;
        if (cVar4 != '\0') {
          local_68 = *(undefined8 *)(param_3 + 0x180);
          local_60 = *(undefined4 *)(param_3 + 0x188);
          if (*(int *)(param_1 + 0x58) == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = *(longlong **)(param_1 + 0x50);
          }
          local_88 = &local_58;
          local_58 = local_70;
          local_50 = uVar2;
          cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,param_1,param_3);
          plVar5 = local_78;
          if (cVar4 == '\0') goto LAB_147fada3a;
        }
      }
      do {
        plVar1 = (longlong *)(*plVar5 + lVar10);
        lVar3 = *(longlong *)(*plVar5 + 8 + lVar10);
        if (*(char *)(lVar6 + 0x16) == '\0') {
          if ((lVar3 == 0) || (*plVar1 == 0)) goto LAB_147fadb51;
LAB_147fadb40:
          cVar4 = FUN_147faba1a(lVar6);
          plVar5 = local_78;
          if (cVar4 == '\0') goto LAB_147fadb51;
        }
        else if ((lVar3 != 0) && (*plVar1 != 0)) goto LAB_147fadb40;
        lVar10 = lVar10 + 0x10;
        lVar6 = lVar6 + 0x18;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if ((short)iVar8 == -1) {
LAB_147fadb51:
      FUN_147fab6c0(plVar5,iVar8);
      iVar8 = 0xffff;
    }
    uVar7 = (undefined2)iVar8;
    iVar8 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar8 + 1U) {
      FUN_147fb56a6((longlong *)(param_1 + 0x60),iVar8);
    }
    lVar6 = *(longlong *)(param_1 + 0x60);
    *(longlong *)(lVar6 + (longlong)iVar8 * 0x10) = param_3;
    *(undefined2 *)(lVar6 + 8 + (longlong)iVar8 * 0x10) = uVar7;
  }
LAB_147fada3a:
  *param_2 = uVar7;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147fadb7a FUN_147fadb7a body=65 status=ok
// SIG undefined FUN_147fadb7a(void)

void FUN_147fadb7a(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147fb534c(param_1,iVar1);
  }
  FUN_147fb5339((longlong)iVar1 * 0x10 + *param_1,param_2);
  return;
}



// FUNCTION 147fadbbc FUN_147fadbbc body=916 status=ok
// SIG undefined FUN_147fadbbc(void)

void FUN_147fadbbc(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  ushort *puVar19;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  longlong *local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x28);
  local_188 = param_2;
  local_180 = param_3;
  local_178 = param_1;
  local_170 = param_4;
  if (lVar9 != 0) {
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
    lVar11 = 0;
    do {
      uVar12 = local_50;
      lVar14 = *(longlong *)(lVar16 + 0x10 + lVar11);
      if (lVar14 != 0) {
        lVar17 = (longlong)(int)local_50;
        uVar8 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar8);
        if (local_50._4_4_ < uVar8) {
          FUN_147fb56fc(local_158,uVar12 & 0xffffffff);
          lVar14 = *(longlong *)(lVar16 + 0x10 + lVar11);
          param_2 = local_188;
          param_3 = local_180;
        }
        puVar10 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar10 = local_158;
        }
        *(longlong *)(puVar10 + lVar17 * 0x10) = lVar14;
        lVar14 = *(longlong *)(lVar16 + 0x18 + lVar11);
        *(longlong *)(puVar10 + lVar17 * 0x10 + 8) = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
      }
      lVar11 = lVar11 + 0x28;
    } while (lVar9 * 0x28 != lVar11);
  }
  if (0 < (int)param_3[1]) {
    lVar16 = 10;
    lVar9 = 0;
    do {
      lVar11 = *param_3;
      lVar14 = lVar9 * 0x30;
      plVar3 = (longlong *)(lVar11 + lVar14);
      puVar19 = (ushort *)(lVar11 + lVar14 + 10);
      if ((lVar9 < (int)param_2[1]) &&
         (lVar17 = *param_2, *(short *)(lVar17 + 8 + lVar14) == (short)plVar3[1])) {
        lVar6 = *plVar3;
        if ((lVar6 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar6);
          param_2 = local_188;
          param_3 = local_180;
        }
        if ((*(longlong *)(lVar14 + lVar17) == lVar6) &&
           (bVar4 = *(byte *)((longlong)plVar3 + 0x1a), bVar4 != 0)) {
          bVar5 = *(byte *)(lVar14 + lVar17 + 0x1a);
          uVar12 = (ulonglong)bVar5;
          uVar8 = (uint)bVar5;
          uVar15 = 0;
          do {
            if (uVar12 == uVar15) {
LAB_147fadcc7:
              iVar7 = bVar4 - uVar8;
              if (iVar7 == 0) goto LAB_147fade10;
              puVar19 = puVar19 + uVar12;
              puVar13 = puVar19 + iVar7;
              goto LAB_147fadde1;
            }
            if (*(short *)(lVar17 + lVar16 + uVar15 * 2) != *(short *)(lVar11 + lVar16 + uVar15 * 2)
               ) {
              uVar8 = (uint)uVar15;
              uVar12 = uVar15;
              goto LAB_147fadcc7;
            }
            uVar15 = uVar15 + 1;
          } while ((uint)bVar4 != uVar15);
        }
      }
      puVar13 = (ushort *)((longlong)plVar3 + 0x1a);
LAB_147fadde1:
      do {
        if ((((int)(uint)*puVar19 < *(int *)(*plVar3 + 0x48)) &&
            (lVar11 = (ulonglong)*puVar19 * 0x58 + *(longlong *)(*plVar3 + 0x40), lVar11 != 0)) &&
           (*(ushort *)(lVar11 + 0x42) != 0xffff)) {
          lVar14 = **(longlong **)(local_178 + 0x20);
          lVar14 = *(int *)(lVar14 + 8 +
                           (longlong)
                           (int)((int)(*(longlong **)(local_178 + 0x20))[1] +
                                 ((uint)*(ushort *)(plVar3 + 4) + (uint)*(ushort *)(lVar11 + 0x42))
                                 * -0x10 + -0x10)) + lVar14;
          plVar18 = (longlong *)
                    ((ulonglong)*(byte *)(lVar11 + 0x49) * 0x10 + lVar9 * 0x80 + *local_170);
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_158;
          }
          if ((longlong)(int)local_50 != 0) {
            lVar11 = 0;
            do {
              if (*(longlong *)(puVar10 + lVar11) == *plVar18) {
                FUN_147fadf52(local_168);
                FUN_147fadfec(lVar14,local_168);
                plVar18 = local_160;
                param_2 = local_188;
                param_3 = local_180;
                if (local_160 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_160 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_160)(local_160);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar18 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    param_2 = local_188;
                    param_3 = local_180;
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                      param_2 = local_188;
                      param_3 = local_180;
                    }
                  }
                }
                goto LAB_147fade07;
              }
              lVar11 = lVar11 + 0x10;
            } while ((longlong)(int)local_50 * 0x10 != lVar11);
          }
          FUN_147fa66b6(lVar14,plVar18);
          uVar12 = local_50;
          lVar11 = (longlong)(int)local_50;
          uVar8 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar8);
          if (local_50._4_4_ < uVar8) {
            FUN_147fb56fc(local_158,uVar12 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_158;
          }
          *(longlong *)(puVar10 + lVar11 * 0x10) = *plVar18;
          lVar14 = plVar18[1];
          *(longlong *)(puVar10 + lVar11 * 0x10 + 8) = lVar14;
          param_2 = local_188;
          param_3 = local_180;
          if (lVar14 != 0) {
            LOCK();
            *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
            UNLOCK();
          }
        }
LAB_147fade07:
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar13);
LAB_147fade10:
      lVar9 = lVar9 + 1;
      lVar16 = lVar16 + 0x30;
    } while (lVar9 < (int)param_3[1]);
  }
  FUN_147fae04c(local_158);
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fadf52 FUN_147fadf52 body=153 status=ok
// SIG undefined FUN_147fadf52(void)

longlong * FUN_147fadf52(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14494321d(0x30);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14acf2e30;
  plVar3[2] = *param_2;
  plVar3[3] = 0;
  plVar3[4] = 0;
  FUN_1401fa0f0(plVar3 + 3,param_2[1],param_2[2]);
  plVar3[5] = param_2[3];
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 147fadfec FUN_147fadfec body=96 status=ok
// SIG undefined FUN_147fadfec(void)

undefined8 * FUN_147fadfec(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 147fae04c FUN_147fae04c body=62 status=ok
// SIG undefined FUN_147fae04c(void)

void FUN_147fae04c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  FUN_1459cb585(lVar1,*(undefined4 *)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fae08a FUN_147fae08a body=205 status=ok
// SIG undefined FUN_147fae08a(void)

undefined8 * FUN_147fae08a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147fa6b62(param_1,iVar1,0);
    FUN_147fa6bd5(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_147faa3b0(param_1 + 2,iVar1,0);
    FUN_147faa412(param_1[2],uVar2,iVar1);
  }
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  param_1[4] = param_2[4];
  lVar3 = param_2[6];
  param_1[6] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 147fae158 FUN_147fae158 body=74 status=ok
// SIG undefined FUN_147fae158(void)

undefined8 * FUN_147fae158(undefined8 *param_1,undefined8 *param_2)

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
    FUN_147fb5892(param_1,iVar1);
    FUN_147fa6bd5(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147fae1a2 FUN_147fae1a2 body=76 status=ok
// SIG undefined FUN_147fae1a2(void)

longlong FUN_147fae1a2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  if ((((lVar1 == 0 || lVar3 == 0) || (lVar2 = FUN_146452f9c(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 147fae1ee FUN_147fae1ee body=241 status=ok
// SIG undefined FUN_147fae1ee(void)

void FUN_147fae1ee(longlong param_1,longlong *param_2,short param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x34);
  *(undefined2 *)(param_1 + 0x9a) = *(undefined2 *)(param_1 + 0xd8);
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0xa8) = lVar2;
  *(ushort *)(param_1 + 0xb0) =
       -(ushort)(*(char *)((longlong)param_2 + 0x1a) == '\0') | *(ushort *)((longlong)param_2 + 10);
  *(short *)(param_1 + 0x9c) = param_3;
  *(undefined1 *)(param_1 + 0xa1) = param_4;
  plVar1 = (longlong *)FUN_147fabb66(param_1 + 0x78);
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *plVar1 = lVar2;
  *(short *)(plVar1 + 1) = (short)param_2[1];
  if (param_3 == -1) {
    *(undefined4 *)((longlong)plVar1 + 10) = 0xffffffff;
    *(undefined4 *)((longlong)plVar1 + 0xe) = 0xffffffff;
    *(undefined4 *)((longlong)plVar1 + 0x12) = 0xffffffff;
    *(undefined4 *)((longlong)plVar1 + 0x16) = 0xffffffff;
    *(undefined1 *)((longlong)plVar1 + 0x1b) = 0;
  }
  else {
    *(short *)((longlong)plVar1 + 10) = param_3;
    *(undefined8 *)((longlong)plVar1 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)plVar1 + 0x12) = 0xffffffffffffffff;
  }
  *(bool *)((longlong)plVar1 + 0x1a) = param_3 != -1;
  return;
}



// FUNCTION 147fae2e0 FUN_147fae2e0 body=247 status=ok
// SIG undefined FUN_147fae2e0(void)

longlong FUN_147fae2e0(longlong param_1,longlong param_2,longlong param_3,short param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0x800000000;
  iVar3 = *(int *)(param_1 + 0x18);
  if (0 < iVar3) {
    plVar1 = (longlong *)(param_1 + 0x10);
    uVar6 = 0;
    do {
      iVar5 = (int)uVar6;
      if (((*(float *)(*plVar1 + 0xc + uVar6 * 0x28) <= 0.0) &&
          (plVar2 = (longlong *)(*plVar1 + uVar6 * 0x28), *plVar2 == param_3)) &&
         ((short)plVar2[1] == param_4)) {
        iVar3 = *(int *)(param_2 + 0x148);
        *(uint *)(param_2 + 0x148) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0x14c) < iVar3 + 1U) {
          FUN_147fb3584(param_2,iVar3);
        }
        lVar4 = *(longlong *)(param_2 + 0x140);
        if (*(longlong *)(param_2 + 0x140) == 0) {
          lVar4 = param_2;
        }
        FUN_147fb352c(lVar4 + (longlong)iVar3 * 0x28,plVar2);
        FUN_147fb36a4(plVar1,uVar6);
        FUN_147fb3730(plVar1);
        iVar5 = iVar5 + -1;
        iVar3 = *(int *)(param_1 + 0x18);
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < iVar3);
  }
  return param_2;
}



// FUNCTION 147fae3d8 FUN_147fae3d8 body=62 status=ok
// SIG undefined FUN_147fae3d8(void)

void FUN_147fae3d8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar1 = param_1;
  }
  FUN_1459cb7cc(lVar1,*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fae416 FUN_147fae416 body=63 status=ok
// SIG undefined FUN_147fae416(void)

longlong FUN_147fae416(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147fb59c4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_147fb59ac(lVar2);
  return lVar2;
}



// FUNCTION 147fae456 FUN_147fae456 body=102 status=ok
// SIG undefined FUN_147fae456(void)

longlong FUN_147fae456(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x180) = 0x800000000;
  *(undefined8 *)(param_1 + 0x588) = 0x800000000;
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  FUN_147fb390c(param_1,uVar1,8);
  FUN_147fa6bd5(param_1,uVar2,uVar1);
  FUN_147fb383e(param_1 + 0x188,*(undefined4 *)(param_1 + 0x180));
  return param_1;
}



// FUNCTION 147fae4bc FUN_147fae4bc body=133 status=ok
// SIG undefined FUN_147fae4bc(void)

void FUN_147fae4bc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar2 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar2 + 1U) {
    FUN_147fb3a98(param_1,iVar2);
  }
  lVar1 = param_1 + (longlong)iVar2 * 0x30;
  lVar3 = *param_2;
  *(longlong *)(param_1 + (longlong)iVar2 * 0x30) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(lVar1 + 0x28) = param_2[5];
  lVar3 = param_2[1];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar8 = param_2[2];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar9 = param_2[4];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(lVar1 + 0x18) = (int)param_2[3];
  *(undefined4 *)(lVar1 + 0x1c) = uVar6;
  *(int *)(lVar1 + 0x20) = (int)lVar9;
  *(undefined4 *)(lVar1 + 0x24) = uVar7;
  *(int *)(lVar1 + 8) = (int)lVar3;
  *(undefined4 *)(lVar1 + 0xc) = uVar4;
  *(int *)(lVar1 + 0x10) = (int)lVar8;
  *(undefined4 *)(lVar1 + 0x14) = uVar5;
  FUN_147fb3a52(param_1 + 0x188);
  return;
}



// FUNCTION 147fae542 FUN_147fae542 body=148 status=ok
// SIG undefined FUN_147fae542(void)

void FUN_147fae542(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_e8 [24];
  longlong lStack_d0;
  undefined1 local_c8 [128];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_147fb3abe(param_1,local_48);
  FUN_147fb3b32(param_1 + 0x188,local_c8);
  lVar4 = 0x80;
  do {
    plVar3 = *(longlong **)(local_c8 + lVar4 + -8);
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
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fae5d8 FUN_147fae5d8 body=155 status=ok
// SIG undefined FUN_147fae5d8(void)

undefined8 FUN_147fae5d8(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,&DAT_149e0625e,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147fae674 FUN_147fae674 body=34 status=ok
// SIG undefined FUN_147fae674(void)

undefined8 FUN_147fae674(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147fae69a FUN_147fae69a body=43 status=ok
// SIG undefined FUN_147fae69a(void)

undefined8 FUN_147fae69a(undefined8 param_1,int param_2)

{
  FUN_147fab72e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 147fae71c FUN_147fae71c body=59 status=ok
// SIG undefined FUN_147fae71c(void)

undefined8 FUN_147fae71c(longlong *param_1)

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



// FUNCTION 147fae8d4 FUN_147fae8d4 body=59 status=ok
// SIG undefined FUN_147fae8d4(void)

undefined8 FUN_147fae8d4(longlong *param_1)

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



// FUNCTION 147fae974 FUN_147fae974 body=34 status=ok
// SIG undefined FUN_147fae974(void)

undefined8 FUN_147fae974(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147fae996 FUN_147fae996 body=55 status=ok
// SIG undefined FUN_147fae996(void)

void FUN_147fae996(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28070 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28070 = FUN_140002ddd(FUN_146451163,uVar1,L"StateTreeCompareIntConditionInstanceData");
  }
  return;
}



// FUNCTION 147fae9ce FUN_147fae9ce body=34 status=ok
// SIG undefined FUN_147fae9ce(void)

undefined8 FUN_147fae9ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147fae9f4 FUN_147fae9f4 body=34 status=ok
// SIG undefined FUN_147fae9f4(void)

undefined8 FUN_147fae9f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147faea6c FUN_147faea6c body=59 status=ok
// SIG undefined FUN_147faea6c(void)

undefined8 FUN_147faea6c(longlong *param_1)

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



// FUNCTION 147faec24 FUN_147faec24 body=59 status=ok
// SIG undefined FUN_147faec24(void)

undefined8 FUN_147faec24(longlong *param_1)

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



// FUNCTION 147faecc4 FUN_147faecc4 body=34 status=ok
// SIG undefined FUN_147faecc4(void)

undefined8 FUN_147faecc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147faece6 FUN_147faece6 body=55 status=ok
// SIG undefined FUN_147faece6(void)

void FUN_147faece6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb280a0 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb280a0 = FUN_140002ddd(FUN_1464512b9,uVar1,L"StateTreeCompareFloatConditionInstanceData")
    ;
  }
  return;
}



// FUNCTION 147faed6e FUN_147faed6e body=59 status=ok
// SIG undefined FUN_147faed6e(void)

undefined8 FUN_147faed6e(longlong *param_1)

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



// FUNCTION 147faef20 FUN_147faef20 body=59 status=ok
// SIG undefined FUN_147faef20(void)

undefined8 FUN_147faef20(longlong *param_1)

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



// FUNCTION 147faefc0 FUN_147faefc0 body=34 status=ok
// SIG undefined FUN_147faefc0(void)

undefined8 FUN_147faefc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147faefe2 FUN_147faefe2 body=55 status=ok
// SIG undefined FUN_147faefe2(void)

void FUN_147faefe2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb280d0 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb280d0 = FUN_140002ddd(FUN_1464513dd,uVar1,L"StateTreeCompareBoolConditionInstanceData");
  }
  return;
}



// FUNCTION 147faf07a FUN_147faf07a body=59 status=ok
// SIG undefined FUN_147faf07a(void)

undefined8 FUN_147faf07a(longlong *param_1)

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



// FUNCTION 147faf22c FUN_147faf22c body=59 status=ok
// SIG undefined FUN_147faf22c(void)

undefined8 FUN_147faf22c(longlong *param_1)

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



// FUNCTION 147faf2cc FUN_147faf2cc body=34 status=ok
// SIG undefined FUN_147faf2cc(void)

undefined8 FUN_147faf2cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147faf2ee FUN_147faf2ee body=55 status=ok
// SIG undefined FUN_147faf2ee(void)

void FUN_147faf2ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28100 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28100 = FUN_140002ddd(FUN_146451501,uVar1,L"StateTreeCompareEnumConditionInstanceData");
  }
  return;
}



// FUNCTION 147faf39a FUN_147faf39a body=59 status=ok
// SIG undefined FUN_147faf39a(void)

undefined8 FUN_147faf39a(longlong *param_1)

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



// FUNCTION 147faf552 FUN_147faf552 body=59 status=ok
// SIG undefined FUN_147faf552(void)

undefined8 FUN_147faf552(longlong *param_1)

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



// FUNCTION 147faf5f2 FUN_147faf5f2 body=34 status=ok
// SIG undefined FUN_147faf5f2(void)

undefined8 FUN_147faf5f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147faf614 FUN_147faf614 body=55 status=ok
// SIG undefined FUN_147faf614(void)

void FUN_147faf614(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28130 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28130 =
         FUN_140002ddd(FUN_146451625,uVar1,L"StateTreeCompareDistanceConditionInstanceData");
  }
  return;
}



// FUNCTION 147faf6a0 FUN_147faf6a0 body=59 status=ok
// SIG undefined FUN_147faf6a0(void)

undefined8 FUN_147faf6a0(longlong *param_1)

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



// FUNCTION 147faf842 FUN_147faf842 body=59 status=ok
// SIG undefined FUN_147faf842(void)

undefined8 FUN_147faf842(longlong *param_1)

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



// FUNCTION 147faf8e2 FUN_147faf8e2 body=34 status=ok
// SIG undefined FUN_147faf8e2(void)

undefined8 FUN_147faf8e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147faf904 FUN_147faf904 body=55 status=ok
// SIG undefined FUN_147faf904(void)

void FUN_147faf904(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28160 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28160 = FUN_140002ddd(FUN_146451749,uVar1,L"StateTreeRandomConditionInstanceData");
  }
  return;
}



// FUNCTION 147faf964 FUN_147faf964 body=47 status=ok
// SIG undefined FUN_147faf964(void)

void FUN_147faf964(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147faf9aa FUN_147faf9aa body=62 status=ok
// SIG undefined FUN_147faf9aa(void)

undefined8 FUN_147faf9aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403de7ba(param_2,param_3);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 147fafa10 FUN_147fafa10 body=59 status=ok
// SIG undefined FUN_147fafa10(void)

undefined8 FUN_147fafa10(longlong *param_1)

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



// FUNCTION 147fafaae FUN_147fafaae body=51 status=ok
// SIG undefined FUN_147fafaae(void)

void FUN_147fafaae(longlong *param_1)

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



// FUNCTION 147fafbf4 FUN_147fafbf4 body=59 status=ok
// SIG undefined FUN_147fafbf4(void)

undefined8 FUN_147fafbf4(longlong *param_1)

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



// FUNCTION 147fafc94 FUN_147fafc94 body=34 status=ok
// SIG undefined FUN_147fafc94(void)

undefined8 FUN_147fafc94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147fafcb6 FUN_147fafcb6 body=55 status=ok
// SIG undefined FUN_147fafcb6(void)

void FUN_147fafcb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28190 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28190 = FUN_140002ddd(FUN_14645186d,uVar1,L"GameplayTagMatchConditionInstanceData");
  }
  return;
}



// FUNCTION 147fafd34 FUN_147fafd34 body=67 status=ok
// SIG undefined FUN_147fafd34(void)

undefined1 FUN_147fafd34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403de7ba(param_2,param_3);
    FUN_1403de7ba(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 147fafda0 FUN_147fafda0 body=59 status=ok
// SIG undefined FUN_147fafda0(void)

undefined8 FUN_147fafda0(longlong *param_1)

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



// FUNCTION 147fafde6 FUN_147fafde6 body=34 status=ok
// SIG undefined FUN_147fafde6(void)

void FUN_147fafde6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_147fafe56(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147fafe56 FUN_147fafe56 body=75 status=ok
// SIG undefined FUN_147fafe56(void)

void FUN_147fafe56(longlong *param_1)

{
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



// FUNCTION 147faffc4 FUN_147faffc4 body=59 status=ok
// SIG undefined FUN_147faffc4(void)

undefined8 FUN_147faffc4(longlong *param_1)

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



// FUNCTION 147fb0064 FUN_147fb0064 body=34 status=ok
// SIG undefined FUN_147fb0064(void)

undefined8 FUN_147fb0064(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147fb0086 FUN_147fb0086 body=55 status=ok
// SIG undefined FUN_147fb0086(void)

void FUN_147fb0086(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb281c0 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb281c0 =
         FUN_140002ddd(FUN_146451991,uVar1,L"GameplayTagContainerMatchConditionInstanceData");
  }
  return;
}



// FUNCTION 147fb00d6 FUN_147fb00d6 body=47 status=ok
// SIG undefined FUN_147fb00d6(void)

void FUN_147fb00d6(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147fb011c FUN_147fb011c body=54 status=ok
// SIG undefined FUN_147fb011c(void)

undefined1 FUN_147fb011c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403de7ba(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147fb017a FUN_147fb017a body=59 status=ok
// SIG undefined FUN_147fb017a(void)

undefined8 FUN_147fb017a(longlong *param_1)

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



// FUNCTION 147fb0218 FUN_147fb0218 body=51 status=ok
// SIG undefined FUN_147fb0218(void)

void FUN_147fb0218(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147fb024c FUN_147fb024c body=107 status=ok
// SIG undefined FUN_147fb024c(void)

void FUN_147fb024c(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffff0000;
  *(undefined2 *)(param_2 + 3) = 0xffff;
  *(undefined1 *)(param_2 + 4) = 1;
  *(undefined1 *)((longlong)param_2 + 0x23) = 2;
  *param_2 = &PTR_FUN_14acf09c0;
  FUN_140fbcb60(param_2 + 5);
  *(undefined1 *)(param_2 + 0xe) = 0;
  return;
}



// FUNCTION 147fb02b8 FUN_147fb02b8 body=96 status=ok
// SIG undefined FUN_147fb02b8(void)

void FUN_147fb02b8(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffff0000;
  *(undefined2 *)(param_2 + 3) = 0xffff;
  *(undefined2 *)(param_2 + 4) = 1;
  *(undefined1 *)((longlong)param_2 + 0x22) = 0;
  *(byte *)((longlong)param_2 + 0x23) = *(byte *)((longlong)param_2 + 0x23) & 0xfc | 2;
  *param_2 = &PTR_FUN_14acf09c0;
  FUN_140fbcb60(param_2 + 5);
  *(undefined1 *)(param_2 + 0xe) = 0;
  return;
}



// FUNCTION 147fb033c FUN_147fb033c body=125 status=ok
// SIG undefined FUN_147fb033c(void)

undefined8 FUN_147fb033c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      *(undefined2 *)(param_2 + 0x18 + lVar6) = *(undefined2 *)(param_3 + 0x18 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 8 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined4 *)(param_2 + 0x20 + lVar6) = *(undefined4 *)(param_3 + 0x20 + lVar6);
      FUN_140c19bee(param_2 + 0x28 + lVar6,param_3 + 0x28 + lVar6);
      *(undefined1 *)(param_2 + 0x70 + lVar6) = *(undefined1 *)(param_3 + 0x70 + lVar6);
      lVar6 = lVar6 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fb03e2 FUN_147fb03e2 body=59 status=ok
// SIG undefined FUN_147fb03e2(void)

undefined8 FUN_147fb03e2(longlong *param_1)

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



// FUNCTION 147fb0428 FUN_147fb0428 body=43 status=ok
// SIG undefined FUN_147fb0428(void)

void FUN_147fb0428(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14acf09c0;
    FUN_1412dafa6(param_2 + 5);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147fb04a2 FUN_147fb04a2 body=57 status=ok
// SIG undefined FUN_147fb04a2(void)

undefined8 * FUN_147fb04a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acf09c0;
  FUN_1412dafa6(param_1 + 5);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 147fb04dc FUN_147fb04dc body=55 status=ok
// SIG undefined FUN_147fb04dc(void)

void FUN_147fb04dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb281f0 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb281f0 = FUN_140002ddd(FUN_146451ab5,uVar1,L"GameplayTagQueryConditionInstanceData");
  }
  return;
}



// FUNCTION 147fb053c FUN_147fb053c body=90 status=ok
// SIG undefined FUN_147fb053c(void)

undefined1 FUN_147fb053c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fb05be FUN_147fb05be body=59 status=ok
// SIG undefined FUN_147fb05be(void)

undefined8 FUN_147fb05be(longlong *param_1)

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



// FUNCTION 147fb0770 FUN_147fb0770 body=59 status=ok
// SIG undefined FUN_147fb0770(void)

undefined8 FUN_147fb0770(longlong *param_1)

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



// FUNCTION 147fb0810 FUN_147fb0810 body=34 status=ok
// SIG undefined FUN_147fb0810(void)

undefined8 FUN_147fb0810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147fb0832 FUN_147fb0832 body=55 status=ok
// SIG undefined FUN_147fb0832(void)

void FUN_147fb0832(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28220 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28220 =
         FUN_140002ddd(FUN_146451bd9,uVar1,L"StateTreeObjectIsValidConditionInstanceData");
  }
  return;
}



// FUNCTION 147fb0892 FUN_147fb0892 body=54 status=ok
// SIG undefined FUN_147fb0892(void)

undefined1 FUN_147fb0892(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fb0990(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147fb08f0 FUN_147fb08f0 body=59 status=ok
// SIG undefined FUN_147fb08f0(void)

undefined8 FUN_147fb08f0(longlong *param_1)

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



// FUNCTION 147fb0990 FUN_147fb0990 body=91 status=ok
// SIG undefined FUN_147fb0990(void)

longlong * FUN_147fb0990(longlong *param_1,longlong *param_2)

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
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 147fb0afc FUN_147fb0afc body=59 status=ok
// SIG undefined FUN_147fb0afc(void)

undefined8 FUN_147fb0afc(longlong *param_1)

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



// FUNCTION 147fb0b9c FUN_147fb0b9c body=34 status=ok
// SIG undefined FUN_147fb0b9c(void)

undefined8 FUN_147fb0b9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147fb0bbe FUN_147fb0bbe body=55 status=ok
// SIG undefined FUN_147fb0bbe(void)

void FUN_147fb0bbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28250 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28250 = FUN_140002ddd(FUN_146451cfd,uVar1,L"StateTreeObjectEqualsConditionInstanceData")
    ;
  }
  return;
}



// FUNCTION 147fb0c1e FUN_147fb0c1e body=54 status=ok
// SIG undefined FUN_147fb0c1e(void)

undefined1 FUN_147fb0c1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fb0d1c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147fb0c7c FUN_147fb0c7c body=59 status=ok
// SIG undefined FUN_147fb0c7c(void)

undefined8 FUN_147fb0c7c(longlong *param_1)

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



// FUNCTION 147fb0d1c FUN_147fb0d1c body=91 status=ok
// SIG undefined FUN_147fb0d1c(void)

longlong * FUN_147fb0d1c(longlong *param_1,longlong *param_2)

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
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 147fb0e88 FUN_147fb0e88 body=59 status=ok
// SIG undefined FUN_147fb0e88(void)

undefined8 FUN_147fb0e88(longlong *param_1)

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



// FUNCTION 147fb0f28 FUN_147fb0f28 body=34 status=ok
// SIG undefined FUN_147fb0f28(void)

undefined8 FUN_147fb0f28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147fb0f4a FUN_147fb0f4a body=55 status=ok
// SIG undefined FUN_147fb0f4a(void)

void FUN_147fb0f4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28280 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28280 =
         FUN_140002ddd(FUN_146451e21,uVar1,L"StateTreeObjectIsChildOfClassConditionInstanceData");
  }
  return;
}



// FUNCTION 147fb0fee FUN_147fb0fee body=59 status=ok
// SIG undefined FUN_147fb0fee(void)

undefined8 FUN_147fb0fee(longlong *param_1)

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



// FUNCTION 147fb1180 FUN_147fb1180 body=59 status=ok
// SIG undefined FUN_147fb1180(void)

undefined8 FUN_147fb1180(longlong *param_1)

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



// FUNCTION 147fb1220 FUN_147fb1220 body=34 status=ok
// SIG undefined FUN_147fb1220(void)

undefined8 FUN_147fb1220(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147fb1242 FUN_147fb1242 body=55 status=ok
// SIG undefined FUN_147fb1242(void)

void FUN_147fb1242(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb282b0 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb282b0 = FUN_140002ddd(FUN_146451f45,uVar1,L"StateTreeConstantConsiderationInstanceData")
    ;
  }
  return;
}



// FUNCTION 147fb127a FUN_147fb127a body=34 status=ok
// SIG undefined FUN_147fb127a(void)

undefined8 FUN_147fb127a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147fb129e FUN_147fb129e body=37 status=ok
// SIG undefined FUN_147fb129e(void)

void FUN_147fb129e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  FUN_14109baa4(param_2);
  return;
}



// FUNCTION 147fb12cc FUN_147fb12cc body=59 status=ok
// SIG undefined FUN_147fb12cc(void)

void FUN_147fb12cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_14a176f00;
  if (param_2[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 1);
  return;
}



// FUNCTION 147fb131e FUN_147fb131e body=63 status=ok
// SIG undefined FUN_147fb131e(void)

undefined1 FUN_147fb131e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14115e0ba(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 147fb1386 FUN_147fb1386 body=59 status=ok
// SIG undefined FUN_147fb1386(void)

undefined8 FUN_147fb1386(longlong *param_1)

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



// FUNCTION 147fb142a FUN_147fb142a body=73 status=ok
// SIG undefined FUN_147fb142a(void)

void FUN_147fb142a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *param_1 = &DAT_14a176f00;
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 1);
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}



// FUNCTION 147fb14f8 FUN_147fb14f8 body=59 status=ok
// SIG undefined FUN_147fb14f8(void)

undefined8 FUN_147fb14f8(longlong *param_1)

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



// FUNCTION 147fb159a FUN_147fb159a body=91 status=ok
// SIG undefined FUN_147fb159a(void)

void FUN_147fb159a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 3,0,0x98);
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffff0000;
  *(undefined2 *)(param_2 + 3) = 0xffff;
  *(undefined1 *)(param_2 + 4) = 1;
  *param_2 = &PTR_FUN_14acf1a80;
  FUN_14109baa4(param_2 + 5);
  return;
}



// FUNCTION 147fb1656 FUN_147fb1656 body=94 status=ok
// SIG undefined FUN_147fb1656(void)

undefined8 FUN_147fb1656(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined2 *)(param_2 + -0x10) = *(undefined2 *)(param_3 + -0x10);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_14115e0ba(param_2,param_3);
      param_3 = param_3 + 0xb0;
      param_2 = param_2 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fb16dc FUN_147fb16dc body=59 status=ok
// SIG undefined FUN_147fb16dc(void)

undefined8 FUN_147fb16dc(longlong *param_1)

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



// FUNCTION 147fb177e FUN_147fb177e body=96 status=ok
// SIG undefined FUN_147fb177e(void)

undefined8 * FUN_147fb177e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acf1a80;
  param_1[5] = &DAT_14a176f00;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  param_1[5] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 6);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 147fb17de FUN_147fb17de body=55 status=ok
// SIG undefined FUN_147fb17de(void)

void FUN_147fb17de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb282f8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb282f8 =
         FUN_140002ddd(FUN_14645212d,uVar1,L"StateTreeFloatInputConsiderationInstanceData");
  }
  return;
}



// FUNCTION 147fb1816 FUN_147fb1816 body=88 status=ok
// SIG undefined FUN_147fb1816(void)

void FUN_147fb1816(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x16) == '\x01') {
    *param_1 = &PTR_FUN_14acf1a80;
    param_1[5] = &DAT_14a176f00;
    if (param_1[0x13] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 6);
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  return;
}



// FUNCTION 147fb18e2 FUN_147fb18e2 body=59 status=ok
// SIG undefined FUN_147fb18e2(void)

undefined8 FUN_147fb18e2(longlong *param_1)

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



// FUNCTION 147fb19b8 FUN_147fb19b8 body=54 status=ok
// SIG undefined FUN_147fb19b8(void)

undefined1 FUN_147fb19b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fb1ad0(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147fb1a16 FUN_147fb1a16 body=59 status=ok
// SIG undefined FUN_147fb1a16(void)

undefined8 FUN_147fb1a16(longlong *param_1)

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



// FUNCTION 147fb1a5c FUN_147fb1a5c body=37 status=ok
// SIG undefined FUN_147fb1a5c(void)

void FUN_147fb1a5c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147fb1ad0 FUN_147fb1ad0 body=88 status=ok
// SIG undefined FUN_147fb1ad0(void)

undefined8 * FUN_147fb1ad0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fb1b28(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147fb1b28 FUN_147fb1b28 body=98 status=ok
// SIG undefined FUN_147fb1b28(void)

void FUN_147fb1b28(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fb1bbc FUN_147fb1bbc body=101 status=ok
// SIG undefined FUN_147fb1bbc(void)

undefined1 FUN_147fb1bbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_3 + lVar3);
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



// FUNCTION 147fb1c4a FUN_147fb1c4a body=59 status=ok
// SIG undefined FUN_147fb1c4a(void)

undefined8 FUN_147fb1c4a(longlong *param_1)

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



// FUNCTION 147fb1d8a FUN_147fb1d8a body=86 status=ok
// SIG undefined FUN_147fb1d8a(void)

undefined8 FUN_147fb1d8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined2 *)(param_2 + -0x10) = *(undefined2 *)(param_3 + -0x10);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_147fb1ad0(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fb1e08 FUN_147fb1e08 body=59 status=ok
// SIG undefined FUN_147fb1e08(void)

undefined8 FUN_147fb1e08(longlong *param_1)

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



// FUNCTION 147fb1e4e FUN_147fb1e4e body=48 status=ok
// SIG undefined FUN_147fb1e4e(void)

void FUN_147fb1e4e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14acf2040;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 147fb1ecc FUN_147fb1ecc body=62 status=ok
// SIG undefined FUN_147fb1ecc(void)

undefined8 * FUN_147fb1ecc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acf2040;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 147fb1f0a FUN_147fb1f0a body=55 status=ok
// SIG undefined FUN_147fb1f0a(void)

void FUN_147fb1f0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28358 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28358 =
         FUN_140002ddd(FUN_146452375,uVar1,L"StateTreeEnumInputConsiderationInstanceData");
  }
  return;
}



// FUNCTION 147fb1f42 FUN_147fb1f42 body=83 status=ok
// SIG undefined FUN_147fb1f42(void)

longlong FUN_147fb1f42(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != 0 && param_2 != 0) {
    lVar1 = FUN_14644fe1c();
    if (lVar1 == param_1) {
      return param_2;
    }
    lVar1 = FUN_14644fe1c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 147fb1f95 FUN_147fb1f95 body=160 status=ok
// SIG undefined FUN_147fb1f95(void)

longlong FUN_147fb1f95(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0 && param_2 != 0) {
    if (DAT_14cb283b8 == 0) {
      uVar1 = FUN_140bffa48();
      DAT_14cb283b8 = FUN_140002ddd(FUN_14645257d,uVar1,L"StateTreeConditionBase");
    }
    if (DAT_14cb283b8 == param_1) {
      return param_2;
    }
    if (DAT_14cb283b8 == 0) {
      uVar1 = FUN_140bffa48();
      DAT_14cb283b8 = FUN_140002ddd(FUN_14645257d,uVar1,L"StateTreeConditionBase");
      if (DAT_14cb283b8 == 0) {
        return 0;
      }
    }
    if ((*(int *)(DAT_14cb283b8 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cb283b8 + 0x38) * 8)
        == DAT_14cb283b8 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 147fb2035 FUN_147fb2035 body=160 status=ok
// SIG undefined FUN_147fb2035(void)

longlong FUN_147fb2035(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0 && param_2 != 0) {
    if (DAT_14cb283e8 == 0) {
      uVar1 = FUN_140bffa48();
      DAT_14cb283e8 = FUN_140002ddd(FUN_146452675,uVar1,L"StateTreeConsiderationBase");
    }
    if (DAT_14cb283e8 == param_1) {
      return param_2;
    }
    if (DAT_14cb283e8 == 0) {
      uVar1 = FUN_140bffa48();
      DAT_14cb283e8 = FUN_140002ddd(FUN_146452675,uVar1,L"StateTreeConsiderationBase");
      if (DAT_14cb283e8 == 0) {
        return 0;
      }
    }
    if ((*(int *)(DAT_14cb283e8 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cb283e8 + 0x38) * 8)
        == DAT_14cb283e8 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 147fb20d5 FUN_147fb20d5 body=85 status=ok
// SIG undefined FUN_147fb20d5(void)

longlong FUN_147fb20d5(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 == 0 || param_2 == 0) ||
     ((lVar1 = FUN_146453aea(), lVar1 != param_1 &&
      (((lVar1 = FUN_146453aea(), lVar1 == 0 || (*(int *)(param_1 + 0x38) < *(int *)(lVar1 + 0x38)))
       || (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
           lVar1 + 0x30)))))) {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 147fb212a FUN_147fb212a body=105 status=ok
// SIG undefined FUN_147fb212a(void)

int FUN_147fb212a(longlong *param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if (((*(char *)(lVar3 + lVar5 * 0x14) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x14, *(short *)(lVar1 + 2) == *(short *)(param_3 + 2))) &&
           (*(short *)(lVar1 + 4) == *(short *)(param_3 + 4))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0xc + lVar5 * 0x14);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 147fb2194 FUN_147fb2194 body=105 status=ok
// SIG undefined FUN_147fb2194(void)

int FUN_147fb2194(longlong *param_1,uint param_2,char *param_3)

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
        lVar4 = (longlong)iVar1 * 0x20;
        if (((*(char *)(lVar2 + lVar4) == *param_3) &&
            (*(short *)(lVar2 + lVar4 + 2) == *(short *)(param_3 + 2))) &&
           (*(short *)(lVar2 + lVar4 + 4) == *(short *)(param_3 + 4))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147fb21fe FUN_147fb21fe body=52 status=ok
// SIG undefined FUN_147fb21fe(void)

void FUN_147fb21fe(longlong *param_1)

{
  FUN_147fb2232();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fb2232 FUN_147fb2232 body=89 status=ok
// SIG undefined FUN_147fb2232(void)

void FUN_147fb2232(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 147fb228c FUN_147fb228c body=52 status=ok
// SIG undefined FUN_147fb228c(void)

void FUN_147fb228c(longlong *param_1)

{
  FUN_147fb22c0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fb22c0 FUN_147fb22c0 body=89 status=ok
// SIG undefined FUN_147fb22c0(void)

void FUN_147fb22c0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 147fb231a FUN_147fb231a body=52 status=ok
// SIG undefined FUN_147fb231a(void)

void FUN_147fb231a(longlong *param_1)

{
  FUN_147fb234e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fb234e FUN_147fb234e body=89 status=ok
// SIG undefined FUN_147fb234e(void)

void FUN_147fb234e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 147fb24a8 FUN_147fb24a8 body=59 status=ok
// SIG undefined FUN_147fb24a8(void)

undefined8 FUN_147fb24a8(longlong *param_1)

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



// FUNCTION 147fb264a FUN_147fb264a body=59 status=ok
// SIG undefined FUN_147fb264a(void)

undefined8 FUN_147fb264a(longlong *param_1)

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



// FUNCTION 147fb27d6 FUN_147fb27d6 body=59 status=ok
// SIG undefined FUN_147fb27d6(void)

undefined8 FUN_147fb27d6(longlong *param_1)

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



// FUNCTION 147fb2968 FUN_147fb2968 body=59 status=ok
// SIG undefined FUN_147fb2968(void)

undefined8 FUN_147fb2968(longlong *param_1)

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



// FUNCTION 147fb2ade FUN_147fb2ade body=59 status=ok
// SIG undefined FUN_147fb2ade(void)

undefined8 FUN_147fb2ade(longlong *param_1)

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



// FUNCTION 147fb2b7e FUN_147fb2b7e body=34 status=ok
// SIG undefined FUN_147fb2b7e(void)

undefined8 FUN_147fb2b7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fb2c7a FUN_147fb2c7a body=59 status=ok
// SIG undefined FUN_147fb2c7a(void)

undefined8 FUN_147fb2c7a(longlong *param_1)

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



// FUNCTION 147fb2d1a FUN_147fb2d1a body=34 status=ok
// SIG undefined FUN_147fb2d1a(void)

undefined8 FUN_147fb2d1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fb2d3e FUN_147fb2d3e body=41 status=ok
// SIG undefined FUN_147fb2d3e(void)

void FUN_147fb2d3e(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141215e22(param_2 + 1);
  param_2[3] = 0;
  return;
}



// FUNCTION 147fb2d68 FUN_147fb2d68 body=34 status=ok
// SIG undefined FUN_147fb2d68(void)

void FUN_147fb2d68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_141215e22(param_2 + 1);
  param_2[3] = 0;
  return;
}



// FUNCTION 147fb2daa FUN_147fb2daa body=95 status=ok
// SIG undefined FUN_147fb2daa(void)

undefined8 FUN_147fb2daa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    puVar1 = (undefined8 *)(param_3 + 0x10);
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = puVar1[-2];
      if ((undefined8 *)(param_2 + -8) != puVar1 + -2) {
        FUN_1401fa0f0(param_2,puVar1[-1],*puVar1);
      }
      *(undefined8 *)(param_2 + 0x10) = puVar1[1];
      puVar1 = puVar1 + 4;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fb2e32 FUN_147fb2e32 body=175 status=ok
// SIG undefined FUN_147fb2e32(void)

uint FUN_147fb2e32(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = *param_2;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar3 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4);
  if ((longlong *)param_2[1] != (longlong *)0x0 && param_2[2] != 0) {
    iVar2 = (**(code **)(*(longlong *)param_2[1] + 0x360))();
    uVar3 = iVar2 + (uVar3 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb2eec FUN_147fb2eec body=33 status=ok
// SIG undefined FUN_147fb2eec(void)

void FUN_147fb2eec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1401f9f5c(param_2 + 8);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147fb2f6e FUN_147fb2f6e body=56 status=ok
// SIG undefined FUN_147fb2f6e(void)

void FUN_147fb2f6e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147fb2f9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147fb2fbc FUN_147fb2fbc body=54 status=ok
// SIG undefined FUN_147fb2fbc(void)

undefined1 FUN_147fb2fbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fa66b6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147fb301a FUN_147fb301a body=59 status=ok
// SIG undefined FUN_147fb301a(void)

undefined8 FUN_147fb301a(longlong *param_1)

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



// FUNCTION 147fb3060 FUN_147fb3060 body=64 status=ok
// SIG undefined FUN_147fb3060(void)

void FUN_147fb3060(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 147fb3104 FUN_147fb3104 body=44 status=ok
// SIG undefined FUN_147fb3104(void)

void FUN_147fb3104(undefined8 param_1,longlong *param_2)

{
  FUN_1459cb585(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fb3146 FUN_147fb3146 body=54 status=ok
// SIG undefined FUN_147fb3146(void)

undefined1 FUN_147fb3146(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fb3240(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147fb31a4 FUN_147fb31a4 body=59 status=ok
// SIG undefined FUN_147fb31a4(void)

undefined8 FUN_147fb31a4(longlong *param_1)

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



// FUNCTION 147fb3240 FUN_147fb3240 body=95 status=ok
// SIG undefined FUN_147fb3240(void)

undefined8 * FUN_147fb3240(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459cb585(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fb32a0(param_1,iVar1);
      FUN_147fb3302(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fb32a0 FUN_147fb32a0 body=98 status=ok
// SIG undefined FUN_147fb32a0(void)

void FUN_147fb32a0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fb3302 FUN_147fb3302 body=45 status=ok
// SIG undefined FUN_147fb3302(void)

void FUN_147fb3302(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fb3330 FUN_147fb3330 body=50 status=ok
// SIG undefined FUN_147fb3330(void)

void FUN_147fb3330(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1459cb585(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147fb3362 FUN_147fb3362 body=85 status=ok
// SIG undefined FUN_147fb3362(void)

longlong FUN_147fb3362(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 == 0 || param_2 == 0) ||
     ((lVar1 = FUN_1464543dc(), lVar1 != param_1 &&
      (((lVar1 = FUN_1464543dc(), lVar1 == 0 || (*(int *)(param_1 + 0x38) < *(int *)(lVar1 + 0x38)))
       || (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
           lVar1 + 0x30)))))) {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 147fb33b7 FUN_147fb33b7 body=85 status=ok
// SIG undefined FUN_147fb33b7(void)

longlong FUN_147fb33b7(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 == 0 || param_2 == 0) ||
     ((lVar1 = FUN_146452f9c(), lVar1 != param_1 &&
      (((lVar1 = FUN_146452f9c(), lVar1 == 0 || (*(int *)(param_1 + 0x38) < *(int *)(lVar1 + 0x38)))
       || (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
           lVar1 + 0x30)))))) {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 147fb340c FUN_147fb340c body=9 status=ok
// SIG undefined FUN_147fb340c(void)

void FUN_147fb340c(longlong param_1)

{
  FUN_1401f9f5c(param_1 + 0x18);
  return;
}



// FUNCTION 147fb3416 FUN_147fb3416 body=34 status=ok
// SIG undefined FUN_147fb3416(void)

undefined8 FUN_147fb3416(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147fb3438 FUN_147fb3438 body=83 status=ok
// SIG undefined FUN_147fb3438(void)

longlong FUN_147fb3438(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != 0 && param_2 != 0) {
    lVar1 = FUN_146453e04();
    if (lVar1 == param_1) {
      return param_2;
    }
    lVar1 = FUN_146453e04();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 147fb348b FUN_147fb348b body=160 status=ok
// SIG undefined FUN_147fb348b(void)

longlong FUN_147fb348b(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0 && param_2 != 0) {
    if (DAT_14cb28418 == 0) {
      uVar1 = FUN_140bffa48();
      DAT_14cb28418 = FUN_140002ddd(FUN_14645276b,uVar1,L"StateTreeEvaluatorBase");
    }
    if (DAT_14cb28418 == param_1) {
      return param_2;
    }
    if (DAT_14cb28418 == 0) {
      uVar1 = FUN_140bffa48();
      DAT_14cb28418 = FUN_140002ddd(FUN_14645276b,uVar1,L"StateTreeEvaluatorBase");
      if (DAT_14cb28418 == 0) {
        return 0;
      }
    }
    if ((*(int *)(DAT_14cb28418 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cb28418 + 0x38) * 8)
        == DAT_14cb28418 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 147fb352c FUN_147fb352c body=88 status=ok
// SIG undefined FUN_147fb352c(void)

longlong * FUN_147fb352c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  *(int *)(param_1 + 4) = (int)param_2[4];
  return param_1;
}



// FUNCTION 147fb3584 FUN_147fb3584 body=136 status=ok
// SIG undefined FUN_147fb3584(void)

void FUN_147fb3584(longlong param_1,int param_2)

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
    FUN_147fb360e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147fb360e FUN_147fb360e body=149 status=ok
// SIG undefined FUN_147fb360e(void)

void FUN_147fb360e(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147fb36a4 FUN_147fb36a4 body=139 status=ok
// SIG undefined FUN_147fb36a4(void)

void FUN_147fb36a4(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x18 + (longlong)(int)param_2 * 0x28);
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
  iVar5 = (int)param_1[1];
  iVar6 = ~param_2 + iVar5;
  if (iVar6 != 0) {
    iVar7 = 1;
    if (iVar6 < 1) {
      iVar7 = iVar6;
    }
    memmove((void *)(lVar3 + (longlong)(int)param_2 * 0x28),
            (void *)(lVar3 + (longlong)(iVar5 - iVar7) * 0x28),(longlong)iVar7 * 0x28);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147fb3730 FUN_147fb3730 body=62 status=ok
// SIG undefined FUN_147fb3730(void)

void FUN_147fb3730(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147fb376e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 147fb376e FUN_147fb376e body=112 status=ok
// SIG undefined FUN_147fb376e(void)

ulonglong FUN_147fb376e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147fb37a8;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_147fb37a8:
  return param_2 & 0xffffffff;
}



// FUNCTION 147fb37de FUN_147fb37de body=96 status=ok
// SIG undefined FUN_147fb37de(void)

void FUN_147fb37de(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147fb383e FUN_147fb383e body=204 status=ok
// SIG undefined FUN_147fb383e(void)

void FUN_147fb383e(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar3 = *(int *)(param_1 + 0x400);
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 0x400) = param_2;
    if ((uint)(*(int *)(param_1 + 0x404) - iVar3) < param_2 - iVar3) {
      FUN_147fb3938(param_1,iVar3);
    }
    FUN_147fb3924(param_1 + (longlong)iVar3 * 0x80,param_2 - iVar3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 0x80 + param_1);
    FUN_147fa6f11(_Dst,iVar2);
    iVar1 = *(int *)(param_1 + 0x400) - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)iVar2 * 0x80 + (longlong)_Dst),(longlong)iVar1 << 7);
      iVar3 = *(int *)(param_1 + 0x400);
    }
    *(int *)(param_1 + 0x400) = iVar3 - iVar2;
    FUN_147fb395e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147fb390c FUN_147fb390c body=24 status=ok
// SIG undefined FUN_147fb390c(void)

void FUN_147fb390c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 != 0) * 8;
  if (iVar1 <= param_3) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x184) = iVar1;
  return;
}



// FUNCTION 147fb3924 FUN_147fb3924 body=19 status=ok
// SIG undefined FUN_147fb3924(void)

void FUN_147fb3924(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 7);
    return;
  }
  return;
}



// FUNCTION 147fb3938 FUN_147fb3938 body=37 status=ok
// SIG undefined FUN_147fb3938(void)

void FUN_147fb3938(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x400)) {
    *(undefined4 *)(param_1 + 0x404) = 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fb395e FUN_147fb395e body=20 status=ok
// SIG undefined FUN_147fb395e(void)

void FUN_147fb395e(longlong param_1)

{
  if (*(int *)(param_1 + 0x404) != 8) {
    *(undefined4 *)(param_1 + 0x404) = 8;
  }
  return;
}



// FUNCTION 147fb3972 FUN_147fb3972 body=91 status=ok
// SIG undefined FUN_147fb3972(void)

longlong FUN_147fb3972(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x180);
    *(int *)(param_1 + 0x180) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x184) == 0) {
      *(undefined4 *)(param_1 + 0x184) = 8;
    }
    else {
      FUN_147fb390c(param_1,iVar1);
      FUN_147fa6bd5(param_1,param_2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fb39ce FUN_147fb39ce body=107 status=ok
// SIG undefined FUN_147fb39ce(void)

longlong FUN_147fb39ce(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    FUN_147fa6f11(param_1,*(undefined4 *)(param_1 + 0x400));
    iVar1 = *(int *)(param_2 + 0x400);
    *(int *)(param_1 + 0x400) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x404) == 0) {
      *(undefined4 *)(param_1 + 0x404) = 8;
    }
    else {
      FUN_147fb3a3a(param_1,iVar1);
      FUN_147faa412(param_1,param_2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fb3a3a FUN_147fb3a3a body=24 status=ok
// SIG undefined FUN_147fb3a3a(void)

void FUN_147fb3a3a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 != 0) * 8;
  if (iVar1 <= param_3) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x404) = iVar1;
  return;
}



// FUNCTION 147fb3a52 FUN_147fb3a52 body=69 status=ok
// SIG undefined FUN_147fb3a52(void)

void FUN_147fb3a52(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x400);
  *(uint *)(param_1 + 0x400) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x404) < iVar1 + 1U) {
    FUN_147fb3938(param_1,iVar1);
  }
  FUN_147fb3924(param_1 + (longlong)iVar1 * 0x80,1);
  return;
}



// FUNCTION 147fb3a98 FUN_147fb3a98 body=37 status=ok
// SIG undefined FUN_147fb3a98(void)

void FUN_147fb3a98(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x180)) {
    *(undefined4 *)(param_1 + 0x184) = 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fb3abe FUN_147fb3abe body=116 status=ok
// SIG undefined FUN_147fb3abe(void)

longlong * FUN_147fb3abe(longlong param_1,longlong *param_2)

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
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 0x180);
  lVar1 = param_1 + (longlong)iVar10 * 0x30;
  lVar2 = *(longlong *)(param_1 + -0x30 + (longlong)iVar10 * 0x30);
  *param_2 = lVar2;
  if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
    FUN_1456cec3c();
    iVar10 = *(int *)(param_1 + 0x180);
  }
  param_2[5] = *(longlong *)(lVar1 + -8);
  uVar3 = *(undefined4 *)(lVar1 + -0x28);
  uVar4 = *(undefined4 *)(lVar1 + -0x24);
  uVar5 = *(undefined4 *)(lVar1 + -0x20);
  uVar6 = *(undefined4 *)(lVar1 + -0x1c);
  uVar7 = *(undefined4 *)(lVar1 + -0x14);
  uVar8 = *(undefined4 *)(lVar1 + -0x10);
  uVar9 = *(undefined4 *)(lVar1 + -0xc);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar1 + -0x18);
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar7;
  *(undefined4 *)(param_2 + 4) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar9;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  *(undefined4 *)(param_2 + 2) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
  *(int *)(param_1 + 0x180) = iVar10 + -1;
  FUN_147fb3b9a(param_1);
  return param_2;
}



// FUNCTION 147fb3b32 FUN_147fb3b32 body=104 status=ok
// SIG undefined FUN_147fb3b32(void)

longlong FUN_147fb3b32(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x400) * 0x80 + param_1;
  lVar3 = lVar2 + -0x80;
  lVar4 = 0;
  do {
    *(undefined8 *)(param_2 + lVar4) = *(undefined8 *)(lVar3 + lVar4);
    *(undefined8 *)(param_2 + 8 + lVar4) = *(undefined8 *)(lVar2 + -0x78 + lVar4);
    puVar1 = (undefined8 *)(lVar3 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x80);
  FUN_147fb3bae(param_1,*(int *)(param_1 + 0x400) + -1);
  FUN_147fb395e(param_1);
  return param_2;
}



// FUNCTION 147fb3b9a FUN_147fb3b9a body=20 status=ok
// SIG undefined FUN_147fb3b9a(void)

void FUN_147fb3b9a(longlong param_1)

{
  if (*(int *)(param_1 + 0x184) != 8) {
    *(undefined4 *)(param_1 + 0x184) = 8;
  }
  return;
}



// FUNCTION 147fb3bae FUN_147fb3bae body=151 status=ok
// SIG undefined FUN_147fb3bae(void)

void FUN_147fb3bae(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  _Dst = (void *)(param_1 + (longlong)(int)param_2 * 0x80);
  lVar5 = 0x80;
  do {
    plVar3 = *(longlong **)((longlong)_Dst + lVar5 + -8);
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
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0);
  iVar4 = *(int *)(param_1 + 0x400);
  if (~param_2 + iVar4 != 0) {
    memmove(_Dst,(void *)(param_1 + (longlong)(int)param_2 * 0x80 + 0x80),
            (longlong)(int)(~param_2 + iVar4) << 7);
    iVar4 = *(int *)(param_1 + 0x400);
  }
  *(int *)(param_1 + 0x400) = iVar4 + -1;
  return;
}



// FUNCTION 147fb3c46 FUN_147fb3c46 body=113 status=ok
// SIG undefined FUN_147fb3c46(void)

void FUN_147fb3c46(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 147fb3cb8 FUN_147fb3cb8 body=96 status=ok
// SIG undefined FUN_147fb3cb8(void)

void FUN_147fb3cb8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147fb3d18 FUN_147fb3d18 body=9 status=ok
// SIG undefined FUN_147fb3d18(void)

void FUN_147fb3d18(longlong param_1)

{
  FUN_1459cb468(param_1 + 0x10);
  return;
}



// FUNCTION 147fb3d22 FUN_147fb3d22 body=34 status=ok
// SIG undefined FUN_147fb3d22(void)

undefined8 FUN_147fb3d22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fb3d44 FUN_147fb3d44 body=132 status=ok
// SIG undefined FUN_147fb3d44(void)

void FUN_147fb3d44(longlong param_1,int param_2)

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



// FUNCTION 147fb3dc9 FUN_147fb3dc9 body=83 status=ok
// SIG undefined FUN_147fb3dc9(void)

longlong FUN_147fb3dc9(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != 0 && param_2 != 0) {
    lVar1 = FUN_14644fe1c();
    if (lVar1 == param_1) {
      return param_2;
    }
    lVar1 = FUN_14644fe1c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 147fb3e1c FUN_147fb3e1c body=48 status=ok
// SIG undefined FUN_147fb3e1c(void)

void FUN_147fb3e1c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147fb3e4c FUN_147fb3e4c body=115 status=ok
// SIG undefined FUN_147fb3e4c(void)

void FUN_147fb3e4c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fb3ec0 FUN_147fb3ec0 body=348 status=ok
// SIG undefined FUN_147fb3ec0(void)

undefined4 * FUN_147fb3ec0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147fb401e(param_1,local_48);
  puVar2 = (undefined4 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  *(undefined2 *)(local_40 + 4) = *(undefined2 *)(puVar2 + 1);
  *(undefined4 *)local_40 = *puVar2;
  *(undefined4 *)(local_40 + 8) = *puVar3;
  local_40[0xc] = 0xff;
  local_40[0xd] = 0xff;
  local_40[0xe] = 0xff;
  local_40[0xf] = 0xff;
  local_4c = local_48[0];
  uVar1 = *(ushort *)(local_40 + 2);
  uVar7 = (uVar1 >> 2) + 0x9e3779b9 + (uint)uVar1 * 0x40 + (uint)*local_40 ^ (uint)uVar1;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + (uint)*(ushort *)(local_40 + 4) ^ uVar7;
  cVar5 = FUN_147fb4104(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)(local_40 + 0x10) = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147fb41d4(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb401e FUN_147fb401e body=230 status=ok
// SIG undefined FUN_147fb401e(void)

int * FUN_147fb401e(longlong *param_1,int *param_2)

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



// FUNCTION 147fb4104 FUN_147fb4104 body=93 status=ok
// SIG undefined FUN_147fb4104(void)

undefined8 FUN_147fb4104(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_147fb212a(), iVar3 != -1)) {
    lVar1 = *param_1;
    uVar2 = *param_3;
    *(undefined4 *)(lVar1 + 8 + (longlong)iVar3 * 0x14) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar1 + (longlong)iVar3 * 0x14) = uVar2;
    FUN_147fb4162(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 147fb4162 FUN_147fb4162 body=114 status=ok
// SIG undefined FUN_147fb4162(void)

void FUN_147fb4162(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 147fb41d4 FUN_147fb41d4 body=496 status=ok
// SIG undefined FUN_147fb41d4(void)

void FUN_147fb41d4(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
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
  uVar11 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar11 != uVar8);
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
        uVar2 = *(ushort *)(lVar3 + 2 + lVar6 * 0x14);
        uVar11 = (uVar2 >> 2) + 0x9e3779b9 +
                 (uint)uVar2 * 0x40 + (uint)*(byte *)(lVar3 + lVar6 * 0x14) ^ (uint)uVar2;
        uVar10 = (longlong)
                 (int)((uVar11 >> 2) + 0x9e3779b9 +
                       uVar11 * 0x40 + (uint)*(ushort *)(lVar3 + 4 + lVar6 * 0x14) ^ uVar11) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 147fb43c6 FUN_147fb43c6 body=350 status=ok
// SIG undefined FUN_147fb43c6(void)

undefined4 * FUN_147fb43c6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147fb4526(param_1,local_48);
  puVar2 = (undefined4 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  *(undefined2 *)(local_40 + 4) = *(undefined2 *)(puVar2 + 1);
  *(undefined4 *)local_40 = *puVar2;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)(local_40 + 8) = *puVar3;
  *(undefined4 *)(local_40 + 0xc) = uVar4;
  *(undefined4 *)(local_40 + 0x10) = uVar5;
  *(undefined4 *)(local_40 + 0x14) = uVar6;
  local_40[0x18] = 0xff;
  local_40[0x19] = 0xff;
  local_40[0x1a] = 0xff;
  local_40[0x1b] = 0xff;
  local_4c = local_48[0];
  uVar1 = *(ushort *)(local_40 + 2);
  uVar9 = (uVar1 >> 2) + 0x9e3779b9 + (uint)uVar1 * 0x40 + (uint)*local_40 ^ (uint)uVar1;
  uVar9 = (uVar9 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + (uint)*(ushort *)(local_40 + 4) ^ uVar9;
  cVar7 = FUN_147fb460c(param_1,uVar9,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar7 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar8) {
      uVar10 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 0x1c) = uVar9;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_147fb46dc(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb4526 FUN_147fb4526 body=229 status=ok
// SIG undefined FUN_147fb4526(void)

int * FUN_147fb4526(longlong *param_1,int *param_2)

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



// FUNCTION 147fb460c FUN_147fb460c body=93 status=ok
// SIG undefined FUN_147fb460c(void)

undefined8 FUN_147fb460c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147fb2194(), iVar7 != -1)) {
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
    FUN_147fb466a(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147fb466a FUN_147fb466a body=114 status=ok
// SIG undefined FUN_147fb466a(void)

void FUN_147fb466a(longlong *param_1,int param_2)

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



// FUNCTION 147fb46dc FUN_147fb46dc body=499 status=ok
// SIG undefined FUN_147fb46dc(void)

void FUN_147fb46dc(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
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
  uVar11 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar11 != uVar8);
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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar2 = *(ushort *)(lVar3 + 2 + lVar7);
        uVar11 = (uVar2 >> 2) + 0x9e3779b9 + (uint)uVar2 * 0x40 + (uint)*(byte *)(lVar3 + lVar7) ^
                 (uint)uVar2;
        uVar10 = (longlong)
                 (int)((uVar11 >> 2) + 0x9e3779b9 +
                       uVar11 * 0x40 + (uint)*(ushort *)(lVar3 + 4 + lVar7) ^ uVar11) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 147fb48d0 FUN_147fb48d0 body=350 status=ok
// SIG undefined FUN_147fb48d0(void)

undefined4 * FUN_147fb48d0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147fb4526(param_1,local_48);
  puVar2 = (undefined4 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  *(undefined2 *)(local_40 + 4) = *(undefined2 *)(puVar2 + 1);
  *(undefined4 *)local_40 = *puVar2;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)(local_40 + 8) = *puVar3;
  *(undefined4 *)(local_40 + 0xc) = uVar4;
  *(undefined4 *)(local_40 + 0x10) = uVar5;
  *(undefined4 *)(local_40 + 0x14) = uVar6;
  local_40[0x18] = 0xff;
  local_40[0x19] = 0xff;
  local_40[0x1a] = 0xff;
  local_40[0x1b] = 0xff;
  local_4c = local_48[0];
  uVar1 = *(ushort *)(local_40 + 2);
  uVar9 = (uVar1 >> 2) + 0x9e3779b9 + (uint)uVar1 * 0x40 + (uint)*local_40 ^ (uint)uVar1;
  uVar9 = (uVar9 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + (uint)*(ushort *)(local_40 + 4) ^ uVar9;
  cVar7 = FUN_147fb460c(param_1,uVar9,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar7 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar8) {
      uVar10 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 0x1c) = uVar9;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_147fb46dc(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb4a30 FUN_147fb4a30 body=283 status=ok
// SIG undefined FUN_147fb4a30(void)

undefined4 * FUN_147fb4a30(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ushort *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147fb4b4c(param_1,local_48);
  puVar2 = (undefined4 *)param_3[1];
  uVar1 = *(ushort *)*param_3;
  *local_40 = uVar1;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(local_40 + 4) = *puVar2;
  *(undefined4 *)(local_40 + 6) = uVar3;
  *(undefined4 *)(local_40 + 8) = uVar4;
  *(undefined4 *)(local_40 + 10) = uVar5;
  local_40[0xc] = 0xffff;
  local_40[0xd] = 0xffff;
  local_4c = local_48[0];
  cVar6 = FUN_147fb4c32(param_1,uVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_40 + 0xe) = uVar8;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar8) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar8) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147fb4d2c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb4b4c FUN_147fb4b4c body=229 status=ok
// SIG undefined FUN_147fb4b4c(void)

int * FUN_147fb4b4c(longlong *param_1,int *param_2)

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



// FUNCTION 147fb4c32 FUN_147fb4c32 body=136 status=ok
// SIG undefined FUN_147fb4c32(void)

undefined8 FUN_147fb4c32(longlong *param_1,uint param_2,short *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(short *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 2);
          uVar4 = *(undefined4 *)(param_3 + 4);
          uVar5 = *(undefined4 *)(param_3 + 6);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 8);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_147fb4cba(uVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147fb4cba FUN_147fb4cba body=114 status=ok
// SIG undefined FUN_147fb4cba(void)

void FUN_147fb4cba(longlong *param_1,int param_2)

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



// FUNCTION 147fb4d2c FUN_147fb4d2c body=413 status=ok
// SIG undefined FUN_147fb4d2c(void)

void FUN_147fb4d2c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 147fb4eca FUN_147fb4eca body=350 status=ok
// SIG undefined FUN_147fb4eca(void)

undefined4 * FUN_147fb4eca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147fb4526(param_1,local_48);
  puVar2 = (undefined4 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  *(undefined2 *)(local_40 + 4) = *(undefined2 *)(puVar2 + 1);
  *(undefined4 *)local_40 = *puVar2;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)(local_40 + 8) = *puVar3;
  *(undefined4 *)(local_40 + 0xc) = uVar4;
  *(undefined4 *)(local_40 + 0x10) = uVar5;
  *(undefined4 *)(local_40 + 0x14) = uVar6;
  local_40[0x18] = 0xff;
  local_40[0x19] = 0xff;
  local_40[0x1a] = 0xff;
  local_40[0x1b] = 0xff;
  local_4c = local_48[0];
  uVar1 = *(ushort *)(local_40 + 2);
  uVar9 = (uVar1 >> 2) + 0x9e3779b9 + (uint)uVar1 * 0x40 + (uint)*local_40 ^ (uint)uVar1;
  uVar9 = (uVar9 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + (uint)*(ushort *)(local_40 + 4) ^ uVar9;
  cVar7 = FUN_147fb460c(param_1,uVar9,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar7 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar8) {
      uVar10 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 0x1c) = uVar9;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_147fb46dc(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb502a FUN_147fb502a body=283 status=ok
// SIG undefined FUN_147fb502a(void)

undefined4 * FUN_147fb502a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ushort *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147fb4b4c(param_1,local_48);
  puVar2 = (undefined4 *)param_3[1];
  uVar1 = *(ushort *)*param_3;
  *local_40 = uVar1;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(local_40 + 4) = *puVar2;
  *(undefined4 *)(local_40 + 6) = uVar3;
  *(undefined4 *)(local_40 + 8) = uVar4;
  *(undefined4 *)(local_40 + 10) = uVar5;
  local_40[0xc] = 0xffff;
  local_40[0xd] = 0xffff;
  local_4c = local_48[0];
  cVar6 = FUN_147fb4c32(param_1,uVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_40 + 0xe) = uVar8;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar8) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar8) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147fb4d2c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb5146 FUN_147fb5146 body=194 status=ok
// SIG undefined FUN_147fb5146(void)

longlong * FUN_147fb5146(longlong *param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14494321d(0x30);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14acf2e30;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  plVar3[2] = param_2;
  FUN_14688bdf4(plVar3 + 3);
  plVar3[5] = param_4;
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb520a FUN_147fb520a body=132 status=ok
// SIG undefined FUN_147fb520a(void)

void FUN_147fb520a(longlong param_1,int param_2)

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



// FUNCTION 147fb5290 FUN_147fb5290 body=130 status=ok
// SIG undefined FUN_147fb5290(void)

void FUN_147fb5290(longlong *param_1,longlong *param_2)

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



// FUNCTION 147fb5313 FUN_147fb5313 body=38 status=ok
// SIG undefined FUN_147fb5313(void)

void FUN_147fb5313(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147fa7290(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 147fb5339 FUN_147fb5339 body=19 status=ok
// SIG undefined FUN_147fb5339(void)

void FUN_147fb5339(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 147fb534c FUN_147fb534c body=85 status=ok
// SIG undefined FUN_147fb534c(void)

void FUN_147fb534c(longlong param_1,int param_2)

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
  FUN_1438d2a4c();
  return;
}



// FUNCTION 147fb53a2 FUN_147fb53a2 body=75 status=ok
// SIG undefined FUN_147fb53a2(void)

void FUN_147fb53a2(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0xffffffffffffc00U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1438d2a4c();
      return;
    }
  }
  return;
}



// FUNCTION 147fb53ed FUN_147fb53ed body=83 status=ok
// SIG undefined FUN_147fb53ed(void)

void FUN_147fb53ed(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = DAT_14cb28a80;
  *(undefined4 *)((longlong)param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x22) = 0xffff0000;
  *(undefined2 *)((longlong)param_1 + 0x26) = 0xffff;
  *(undefined4 *)(param_1 + 5) = 0xffff0000;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  *(byte *)((longlong)param_1 + 0x2f) = *(byte *)((longlong)param_1 + 0x2f) & 0xfe;
  return;
}



// FUNCTION 147fb5440 FUN_147fb5440 body=147 status=ok
// SIG undefined FUN_147fb5440(void)

void FUN_147fb5440(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
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



// FUNCTION 147fb54d4 FUN_147fb54d4 body=14 status=ok
// SIG undefined FUN_147fb54d4(void)

void FUN_147fb54d4(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_1438d2c72();
  return;
}



// FUNCTION 147fb54e2 FUN_147fb54e2 body=14 status=ok
// SIG undefined FUN_147fb54e2(void)

void FUN_147fb54e2(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_1438d2e98();
  return;
}



// FUNCTION 147fb54f0 FUN_147fb54f0 body=38 status=ok
// SIG undefined FUN_147fb54f0(void)

void FUN_147fb54f0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1401f9f5c(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 147fb5516 FUN_147fb5516 body=19 status=ok
// SIG undefined FUN_147fb5516(void)

void FUN_147fb5516(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 147fb552a FUN_147fb552a body=85 status=ok
// SIG undefined FUN_147fb552a(void)

void FUN_147fb552a(longlong param_1,int param_2)

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
  FUN_1438d2c72();
  return;
}



// FUNCTION 147fb5580 FUN_147fb5580 body=85 status=ok
// SIG undefined FUN_147fb5580(void)

void FUN_147fb5580(longlong param_1,int param_2)

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
  FUN_1438d2e98();
  return;
}



// FUNCTION 147fb55d6 FUN_147fb55d6 body=37 status=ok
// SIG undefined FUN_147fb55d6(void)

void FUN_147fb55d6(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x80)) {
    *(undefined4 *)(param_1 + 0x84) = 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fb55fc FUN_147fb55fc body=85 status=ok
// SIG undefined FUN_147fb55fc(void)

longlong FUN_147fb55fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 == 0 || param_2 == 0) ||
     ((lVar1 = FUN_1464543dc(), lVar1 != param_1 &&
      (((lVar1 = FUN_1464543dc(), lVar1 == 0 || (*(int *)(param_1 + 0x38) < *(int *)(lVar1 + 0x38)))
       || (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
           lVar1 + 0x30)))))) {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 147fb5651 FUN_147fb5651 body=85 status=ok
// SIG undefined FUN_147fb5651(void)

longlong FUN_147fb5651(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 == 0 || param_2 == 0) ||
     ((lVar1 = FUN_146452f9c(), lVar1 != param_1 &&
      (((lVar1 = FUN_146452f9c(), lVar1 == 0 || (*(int *)(param_1 + 0x38) < *(int *)(lVar1 + 0x38)))
       || (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
           lVar1 + 0x30)))))) {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 147fb56a6 FUN_147fb56a6 body=85 status=ok
// SIG undefined FUN_147fb56a6(void)

void FUN_147fb56a6(longlong param_1,int param_2)

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
  FUN_1438d305a();
  return;
}



// FUNCTION 147fb56fc FUN_147fb56fc body=119 status=ok
// SIG undefined FUN_147fb56fc(void)

void FUN_147fb56fc(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_147fb5774(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147fb5774 FUN_147fb5774 body=141 status=ok
// SIG undefined FUN_147fb5774(void)

void FUN_147fb5774(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x10);
  return;
}


