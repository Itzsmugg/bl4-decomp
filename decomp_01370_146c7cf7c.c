// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146c7cf7c FUN_146c7cf7c body=1543 status=ok
// SIG undefined FUN_146c7cf7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146c7cf7c(uint *param_1,longlong param_2,int param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  void *_Dst;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  longlong lVar22;
  longlong lVar24;
  undefined1 auVar23 [16];
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
  undefined1 unaff_XMM9 [16];
  
  if ((longlong)*(int *)(param_2 + 0x10) != 0) {
    piVar18 = *(int **)(param_2 + 8);
    piVar8 = piVar18 + (longlong)*(int *)(param_2 + 0x10) * 2;
    puVar1 = param_1 + 2;
    do {
      uVar16 = param_1[4];
      if (0 < (int)uVar16) {
        lVar3 = *(longlong *)puVar1;
        uVar13 = *piVar18 + param_3;
        uVar12 = 0;
        do {
          uVar17 = *(uint *)(lVar3 + uVar12 * 8);
          if (uVar17 <= uVar13) {
            iVar2 = *(int *)(lVar3 + 4 + uVar12 * 8);
            uVar7 = iVar2 + uVar17;
            if (uVar13 < uVar7) {
              _Dst = (void *)(lVar3 + uVar12 * 8);
              iVar14 = (int)uVar12;
              if (iVar2 == 1) {
                if (uVar16 - 1 != iVar14) {
                  iVar14 = (uVar16 - 1) - iVar14;
                  if (0 < iVar14) {
                    iVar14 = 1;
                  }
                  memmove(_Dst,(void *)(lVar3 + (ulonglong)(uVar16 - iVar14) * 8),
                          (longlong)iVar14 << 3);
                  uVar16 = param_1[4];
                }
                param_1[4] = uVar16 - 1;
                FUN_146c811c8(puVar1);
              }
              else {
                uVar9 = *piVar18 + piVar18[1];
                if (param_4 <= uVar9) {
                  uVar9 = param_4;
                }
                if (uVar16 - 1 != iVar14) {
                  iVar14 = (uVar16 - 1) - iVar14;
                  if (0 < iVar14) {
                    iVar14 = 1;
                  }
                  memmove(_Dst,(void *)(lVar3 + (ulonglong)(uVar16 - iVar14) * 8),
                          (longlong)iVar14 << 3);
                  uVar16 = param_1[4];
                }
                param_1[4] = uVar16 - 1;
                FUN_146c811c8(puVar1);
                if (uVar13 != uVar17) {
                  uVar16 = param_1[4];
                  param_1[4] = uVar16 + 1;
                  if (param_1[5] < uVar16 + 1) {
                    FUN_146c81142(puVar1,(longlong)(int)uVar16);
                  }
                  *(ulonglong *)(*(longlong *)puVar1 + (longlong)(int)uVar16 * 8) =
                       CONCAT44(uVar13 - uVar17,uVar17);
                }
                uVar9 = uVar9 + param_3;
                if (uVar7 != uVar9) {
                  uVar16 = param_1[4];
                  param_1[4] = uVar16 + 1;
                  if (param_1[5] < uVar16 + 1) {
                    FUN_146c81142(puVar1,uVar16);
                  }
                  *(ulonglong *)(*(longlong *)puVar1 + (longlong)(int)uVar16 * 8) =
                       CONCAT44(uVar7 - uVar9,uVar9);
                }
              }
              break;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar16 != uVar12);
      }
      piVar18 = piVar18 + 2;
    } while (piVar18 != piVar8);
  }
  FUN_146c81263(*(undefined8 *)(param_1 + 2),param_1[4]);
  auVar19._0_8_ = FUN_140d04a4c(param_1 + 6,param_5,1);
  auVar19._8_8_ = extraout_XMM0_Qb;
  *param_1 = 0;
  auVar4 = _DAT_149931e80;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar16 = param_1[4];
  if ((int)uVar16 < 1) {
    uVar13 = 0;
    lVar6 = 0;
  }
  else {
    lVar15 = *(longlong *)(param_1 + 2);
    lVar6 = 0;
    auVar19 = pmovsxbq(auVar19,0x706);
    in_XMM1 = pmovsxbq(in_XMM1,0x504);
    in_XMM2 = pmovsxbq(in_XMM2,0x302);
    in_XMM3 = pmovsxbq(in_XMM3,0x100);
    auVar20._8_4_ = 0xffffffff;
    auVar20._0_8_ = 0xffffffffffffffff;
    auVar20._12_4_ = 0xffffffff;
    uVar17 = 0;
    do {
      uVar13 = *(uint *)(lVar15 + 4 + lVar6 * 8);
      if (*param_1 < uVar13) {
        *param_1 = uVar13;
        uVar13 = *(uint *)(lVar15 + 4 + lVar6 * 8);
      }
      uVar13 = uVar13 + *(int *)(lVar15 + lVar6 * 8);
      if (uVar17 < uVar13) {
        lVar10 = (ulonglong)uVar13 - (ulonglong)uVar17;
        lVar11 = lVar10 + -1;
        auVar21._8_4_ = (int)lVar11;
        auVar21._0_8_ = lVar11;
        auVar21._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
        lVar11 = lVar3 + 0xe + (ulonglong)uVar17 * 2;
        uVar12 = 0;
        do {
          auVar25._8_4_ = (int)uVar12;
          auVar25._0_8_ = uVar12;
          auVar25._12_4_ = (int)(uVar12 >> 0x20);
          auVar29 = (auVar25 | in_XMM3) ^ auVar4;
          lVar22 = SUB168(auVar21 ^ auVar4,0);
          auVar30._0_8_ = -(ulonglong)(lVar22 < auVar29._0_8_);
          lVar24 = SUB168(auVar21 ^ auVar4,8);
          auVar30._8_8_ = -(ulonglong)(lVar24 < auVar29._8_8_);
          auVar29 = pshuflw(unaff_XMM9,auVar30,0xe8);
          auVar29 = packssdw(auVar29 ^ auVar20,auVar29 ^ auVar20);
          uVar5 = (undefined2)lVar6;
          if ((auVar29._0_4_ & 1) != 0) {
            *(undefined2 *)(lVar11 + -0xe + uVar12 * 2) = uVar5;
          }
          auVar30 = packssdw(auVar30,auVar30);
          auVar30 = packssdw(auVar30 ^ auVar20,auVar30 ^ auVar20);
          if ((auVar30[2] & 1) != 0) {
            *(undefined2 *)(lVar11 + -0xc + uVar12 * 2) = uVar5;
          }
          auVar30 = (auVar25 | in_XMM2) ^ auVar4;
          auVar33._0_8_ = -(ulonglong)(lVar22 < auVar30._0_8_);
          auVar33._8_8_ = -(ulonglong)(lVar24 < auVar30._8_8_);
          auVar29 = packssdw(auVar29,auVar33);
          auVar29 = packssdw(auVar29 ^ auVar20,auVar29 ^ auVar20);
          if ((auVar29[4] & 1) != 0) {
            *(undefined2 *)(lVar11 + -10 + uVar12 * 2) = uVar5;
          }
          auVar30 = pshufhw(auVar33,auVar33,0x84);
          auVar30 = packssdw(auVar30 ^ auVar20,auVar30 ^ auVar20);
          if ((auVar30[6] & 1) != 0) {
            *(undefined2 *)(lVar11 + -8 + uVar12 * 2) = uVar5;
          }
          auVar30 = (auVar25 | in_XMM1) ^ auVar4;
          auVar31._0_8_ = -(ulonglong)(lVar22 < auVar30._0_8_);
          auVar31._8_8_ = -(ulonglong)(lVar24 < auVar30._8_8_);
          auVar29 = pshuflw(auVar29,auVar31,0xe8);
          unaff_XMM9 = packssdw(auVar29 ^ auVar20,auVar29 ^ auVar20);
          if ((unaff_XMM9[8] & 1) != 0) {
            *(undefined2 *)(lVar11 + -6 + uVar12 * 2) = uVar5;
          }
          auVar29 = packssdw(auVar31,auVar31);
          auVar29 = packssdw(auVar29 ^ auVar20,auVar29 ^ auVar20);
          if ((auVar29[10] & 1) != 0) {
            *(undefined2 *)(lVar11 + -4 + uVar12 * 2) = uVar5;
          }
          auVar25 = (auVar25 | auVar19) ^ auVar4;
          auVar26._0_8_ = -(ulonglong)(lVar22 < auVar25._0_8_);
          auVar26._8_8_ = -(ulonglong)(lVar24 < auVar25._8_8_);
          auVar25 = packssdw(auVar29,auVar26);
          auVar25 = packssdw(auVar25 ^ auVar20,auVar25 ^ auVar20);
          if ((auVar25[0xc] & 1) != 0) {
            *(undefined2 *)(lVar11 + -2 + uVar12 * 2) = uVar5;
          }
          auVar25 = pshufhw(auVar26,auVar26,0x84);
          auVar25 = packssdw(auVar25 ^ auVar20,auVar25 ^ auVar20);
          if ((auVar25[0xe] & 1) != 0) {
            *(undefined2 *)(lVar11 + uVar12 * 2) = uVar5;
          }
          uVar12 = uVar12 + 8;
        } while ((lVar10 + 7U & 0xfffffffffffffff8) != uVar12);
        uVar16 = param_1[4];
      }
      lVar6 = lVar6 + 1;
      in_XMM4 = auVar4;
      uVar17 = uVar13;
    } while (lVar6 < (int)uVar16);
  }
  auVar4 = _DAT_149931e80;
  if (uVar13 < param_5) {
    lVar15 = (ulonglong)param_5 - (ulonglong)uVar13;
    lVar11 = lVar15 + -1;
    auVar29._8_4_ = (int)lVar11;
    auVar29._0_8_ = lVar11;
    auVar29._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
    lVar3 = lVar3 + (ulonglong)uVar13 * 2;
    uVar12 = 0;
    auVar19 = pmovsxbq(in_XMM1,0x706);
    auVar20 = pmovsxbq(in_XMM2,0x504);
    auVar21 = pmovsxbq(in_XMM3,0x302);
    auVar25 = pmovsxbq(in_XMM4,0x100);
    auVar29 = auVar29 ^ _DAT_149931e80;
    auVar23._8_4_ = 0xffffffff;
    auVar23._0_8_ = 0xffffffffffffffff;
    auVar23._12_4_ = 0xffffffff;
    do {
      auVar27._8_4_ = (int)uVar12;
      auVar27._0_8_ = uVar12;
      auVar27._12_4_ = (int)(uVar12 >> 0x20);
      auVar30 = (auVar27 | auVar25) ^ auVar4;
      lVar11 = auVar29._0_8_;
      auVar32._0_8_ = -(ulonglong)(lVar11 < auVar30._0_8_);
      lVar10 = auVar29._8_8_;
      auVar32._8_8_ = -(ulonglong)(lVar10 < auVar30._8_8_);
      auVar30 = pshuflw(unaff_XMM9,auVar32,0xe8);
      auVar30 = packssdw(auVar30 ^ auVar23,auVar30 ^ auVar23);
      uVar5 = (undefined2)lVar6;
      if ((auVar30._0_4_ & 1) != 0) {
        *(undefined2 *)(lVar3 + uVar12 * 2) = uVar5;
      }
      auVar33 = packssdw(auVar32,auVar32);
      auVar33 = packssdw(auVar33 ^ auVar23,auVar33 ^ auVar23);
      if ((auVar33[2] & 1) != 0) {
        *(undefined2 *)(lVar3 + 2 + uVar12 * 2) = uVar5;
      }
      auVar33 = (auVar27 | auVar21) ^ auVar4;
      auVar34._0_8_ = -(ulonglong)(lVar11 < auVar33._0_8_);
      auVar34._8_8_ = -(ulonglong)(lVar10 < auVar33._8_8_);
      auVar30 = packssdw(auVar30,auVar34);
      auVar30 = packssdw(auVar30 ^ auVar23,auVar30 ^ auVar23);
      if ((auVar30[4] & 1) != 0) {
        *(undefined2 *)(lVar3 + 4 + uVar12 * 2) = uVar5;
      }
      auVar33 = pshufhw(auVar34,auVar34,0x84);
      auVar33 = packssdw(auVar33 ^ auVar23,auVar33 ^ auVar23);
      if ((auVar33[6] & 1) != 0) {
        *(undefined2 *)(lVar3 + 6 + uVar12 * 2) = uVar5;
      }
      auVar33 = (auVar27 | auVar20) ^ auVar4;
      auVar35._0_8_ = -(ulonglong)(lVar11 < auVar33._0_8_);
      auVar35._8_8_ = -(ulonglong)(lVar10 < auVar33._8_8_);
      auVar30 = pshuflw(auVar30,auVar35,0xe8);
      unaff_XMM9 = packssdw(auVar30 ^ auVar23,auVar30 ^ auVar23);
      if ((unaff_XMM9[8] & 1) != 0) {
        *(undefined2 *)(lVar3 + 8 + uVar12 * 2) = uVar5;
      }
      auVar30 = packssdw(auVar35,auVar35);
      auVar30 = packssdw(auVar30 ^ auVar23,auVar30 ^ auVar23);
      if ((auVar30[10] & 1) != 0) {
        *(undefined2 *)(lVar3 + 10 + uVar12 * 2) = uVar5;
      }
      auVar33 = (auVar27 | auVar19) ^ auVar4;
      auVar28._0_8_ = -(ulonglong)(lVar11 < auVar33._0_8_);
      auVar28._8_8_ = -(ulonglong)(lVar10 < auVar33._8_8_);
      auVar30 = packssdw(auVar30,auVar28);
      auVar30 = packssdw(auVar30 ^ auVar23,auVar30 ^ auVar23);
      if ((auVar30[0xc] & 1) != 0) {
        *(undefined2 *)(lVar3 + 0xc + uVar12 * 2) = uVar5;
      }
      auVar30 = pshufhw(auVar28,auVar28,0x84);
      auVar30 = packssdw(auVar30 ^ auVar23,auVar30 ^ auVar23);
      if ((auVar30[0xe] & 1) != 0) {
        *(undefined2 *)(lVar3 + 0xe + uVar12 * 2) = uVar5;
      }
      uVar12 = uVar12 + 8;
    } while ((lVar15 + 7U & 0xfffffffffffffff8) != uVar12);
  }
  return;
}



// FUNCTION 146c7d584 FUN_146c7d584 body=38 status=ok
// SIG undefined FUN_146c7d584(void)

undefined8 FUN_146c7d584(undefined8 param_1,int param_2)

{
  FUN_146bd8050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c7d5aa FUN_146c7d5aa body=38 status=ok
// SIG undefined FUN_146c7d5aa(void)

undefined8 FUN_146c7d5aa(undefined8 param_1,int param_2)

{
  FUN_146bd8050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c7d5d0 FUN_146c7d5d0 body=38 status=ok
// SIG undefined FUN_146c7d5d0(void)

undefined8 FUN_146c7d5d0(undefined8 param_1,int param_2)

{
  FUN_146c5f080();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c7d5f6 FUN_146c7d5f6 body=38 status=ok
// SIG undefined FUN_146c7d5f6(void)

undefined8 FUN_146c7d5f6(undefined8 param_1,int param_2)

{
  FUN_146c5fd6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c7d61c FUN_146c7d61c body=38 status=ok
// SIG undefined FUN_146c7d61c(void)

undefined8 FUN_146c7d61c(undefined8 param_1,int param_2)

{
  FUN_146bd8050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c7d642 FUN_146c7d642 body=154 status=ok
// SIG undefined FUN_146c7d642(void)

double * FUN_146c7d642(longlong param_1,double *param_2,undefined8 param_3,double param_4,
                      double param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_48 [32];
  double local_28 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0.0;
  local_28[1] = 0.0;
  local_28[2] = 0.0;
  local_28[*(int *)(param_1 + 0xe4)] = param_4;
  local_28[*(int *)(param_1 + 0xe8)] = param_5;
  dVar1 = *(double *)(param_1 + 0xb0);
  dVar2 = *(double *)(param_1 + 0xa8);
  *param_2 = *(double *)(param_1 + 0xa0) + local_28[0];
  param_2[1] = dVar2 + local_28[1];
  param_2[2] = dVar1 + local_28[2];
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c7d6de FUN_146c7d6de body=38 status=ok
// SIG undefined FUN_146c7d6de(void)

undefined8 FUN_146c7d6de(undefined8 param_1,int param_2)

{
  FUN_146bd8050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c7d706 FUN_146c7d706 body=38 status=ok
// SIG undefined FUN_146c7d706(void)

undefined8 FUN_146c7d706(undefined8 param_1,int param_2)

{
  FUN_146c611c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c7d72c FUN_146c7d72c body=38 status=ok
// SIG undefined FUN_146c7d72c(void)

void FUN_146c7d72c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146c7d752(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 146c7d752 FUN_146c7d752 body=62 status=ok
// SIG undefined FUN_146c7d752(void)

void FUN_146c7d752(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c7d790 FUN_146c7d790 body=57 status=ok
// SIG undefined FUN_146c7d790(void)

undefined8 * FUN_146c7d790(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3c670;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c7d7ca FUN_146c7d7ca body=19 status=ok
// SIG undefined FUN_146c7d7ca(void)

byte FUN_146c7d7ca(void)

{
  byte bVar1;
  
  bVar1 = FUN_146c6e4ea();
  return bVar1 ^ 1;
}



// FUNCTION 146c7d7de FUN_146c7d7de body=459 status=ok
// SIG undefined FUN_146c7d7de(void)

void FUN_146c7d7de(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b463b8((longlong *)(param_1 + 0xb0),
                *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144),1);
  uVar8 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar5 = 0;
  if ((uVar8 != 0) &&
     (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar6 = 1;
    uVar3 = 1;
    if (1 < (int)uVar8) {
      uVar6 = uVar8;
    }
    do {
      uVar5 = uVar6;
      if (uVar6 == uVar3) break;
      uVar4 = uVar3 >> 9;
      uVar7 = uVar3 & 0x1ff;
      uVar5 = uVar3;
      uVar3 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar4] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  if (uVar5 != uVar8) {
    do {
      FUN_146c13dec(param_2,&local_50,uVar5);
      lVar2 = *(longlong *)(param_1 + 0xb0);
      *(undefined8 *)(lVar2 + 0x10 + (longlong)(int)uVar5 * 0x18) = local_40;
      puVar1 = (undefined4 *)(lVar2 + (longlong)(int)uVar5 * 0x18);
      *puVar1 = local_50;
      puVar1[1] = uStack_4c;
      puVar1[2] = uStack_48;
      puVar1[3] = uStack_44;
      uVar6 = uVar5 + 1;
      if ((int)(uVar5 + 1) < (int)uVar8) {
        uVar6 = uVar8;
      }
      do {
        uVar3 = uVar6;
        if (uVar6 - 1 == uVar5) break;
        uVar5 = uVar5 + 1;
        uVar3 = uVar5;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar5 >> 9) * 8) +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
      uVar5 = uVar3;
    } while (uVar5 != uVar8);
  }
  FUN_146c7d9aa(param_1 + 0x10);
  FUN_146c7d9aa(param_1 + 0x60);
  if (*(int *)(param_1 + 0xcc) < 0) {
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_146c7d9ee(param_1 + 0xc0);
  }
  else {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xdc) < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_146c7da1e(param_1 + 0xd0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c7d9aa FUN_146c7d9aa body=68 status=ok
// SIG undefined FUN_146c7d9aa(void)

void FUN_146c7d9aa(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146bf253c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146c7d9ee FUN_146c7d9ee body=48 status=ok
// SIG undefined FUN_146c7d9ee(void)

void FUN_146c7d9ee(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 146c7da1e FUN_146c7da1e body=48 status=ok
// SIG undefined FUN_146c7da1e(void)

void FUN_146c7da1e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 146c7da4e FUN_146c7da4e body=71 status=ok
// SIG undefined FUN_146c7da4e(void)

void FUN_146c7da4e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c7dc3e();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146c7dcd2();
      return;
    }
  }
  return;
}



// FUNCTION 146c7da96 FUN_146c7da96 body=199 status=ok
// SIG undefined FUN_146c7da96(void)

ulonglong FUN_146c7da96(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [56];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = (undefined4)*(undefined8 *)(param_1 + 8);
  uVar8 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar3 = 0xffffffff;
  lVar4 = param_2;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar2 = 0;
    if (uVar5 != 2) {
      uVar2 = uVar1;
    }
    FUN_146bd9232(local_a0,lVar4,param_2 + uVar2 * 0x18);
    dVar6 = (double)FUN_146c7eea6(local_a0,param_3,local_68);
    if (dVar6 <= (double)CONCAT44(uVar8,uVar7) && (double)CONCAT44(uVar8,uVar7) != dVar6) {
      uVar3 = uVar5 & 0xffffffff;
    }
    if ((double)CONCAT44(uVar8,uVar7) <= dVar6) {
      dVar6 = (double)CONCAT44(uVar8,uVar7);
    }
    lVar4 = lVar4 + 0x18;
    uVar7 = SUB84(dVar6,0);
    uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
    uVar5 = uVar1;
  } while (uVar1 != 3);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c7db5e FUN_146c7db5e body=222 status=ok
// SIG undefined FUN_146c7db5e(void)

ulonglong FUN_146c7db5e(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [56];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = (undefined4)*(undefined8 *)(param_1 + 8);
  uVar6 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar2 = 0xffffffff;
  uVar3 = 0;
  do {
    uVar1 = (ulonglong)param_4 + 1;
    if (uVar3 != param_4) {
      uVar1 = 0;
      if (uVar3 != 2) {
        uVar1 = uVar3 + 1 & 0xffffffff;
      }
      FUN_146bd9232(local_a0,param_2 + uVar3 * 0x18,param_2 + uVar1 * 0x18);
      dVar4 = (double)FUN_146c7eea6(local_a0,param_3,local_68);
      if (dVar4 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != dVar4) {
        uVar2 = uVar3 & 0xffffffff;
      }
      if ((double)CONCAT44(uVar6,uVar5) <= dVar4) {
        dVar4 = (double)CONCAT44(uVar6,uVar5);
      }
      uVar5 = SUB84(dVar4,0);
      uVar6 = (undefined4)((ulonglong)dVar4 >> 0x20);
      uVar1 = uVar3 + 1;
    }
    uVar3 = uVar1;
  } while (uVar1 != 3);
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146c7dc3e FUN_146c7dc3e body=147 status=ok
// SIG undefined FUN_146c7dc3e(void)

void FUN_146c7dc3e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c7dcd2 FUN_146c7dcd2 body=62 status=ok
// SIG undefined FUN_146c7dcd2(void)

void FUN_146c7dcd2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c7dd10(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 146c7dd10 FUN_146c7dd10 body=112 status=ok
// SIG undefined FUN_146c7dd10(void)

ulonglong FUN_146c7dd10(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c7dd4a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_146c7dd4a:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c7dd80 FUN_146c7dd80 body=132 status=ok
// SIG undefined FUN_146c7dd80(void)

void FUN_146c7dd80(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c7de05 FUN_146c7de05 body=413 status=ok
// SIG undefined FUN_146c7de05(void)

void FUN_146c7de05(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
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
  
  dVar7 = param_5[2];
  dVar4 = param_3[2] - dVar7;
  dVar5 = *param_5;
  dVar12 = param_5[1];
  dVar9 = param_3[1] - dVar12;
  dVar8 = *param_3 - dVar5;
  dVar10 = param_4[2] - dVar7;
  dVar3 = param_4[1] - dVar12;
  dVar2 = *param_4 - dVar5;
  dVar6 = dVar4 * dVar4 + dVar8 * dVar8 + dVar9 * dVar9;
  dVar1 = dVar4 * dVar10 + dVar8 * dVar2 + dVar9 * dVar3;
  dVar11 = dVar10 * dVar10 + dVar2 * dVar2 + dVar3 * dVar3;
  dVar4 = dVar4 * (param_2[2] - dVar7) + dVar8 * (*param_2 - dVar5) + dVar9 * (param_2[1] - dVar12);
  dVar5 = (param_2[2] - dVar7) * dVar10 + (*param_2 - dVar5) * dVar2 + (param_2[1] - dVar12) * dVar3
  ;
  dVar7 = 1.0 / (dVar6 * dVar11 - dVar1 * dVar1);
  dVar12 = (dVar11 * dVar4 - dVar5 * dVar1) * dVar7;
  dVar7 = (dVar6 * dVar5 - dVar4 * dVar1) * dVar7;
  *param_1 = dVar12;
  param_1[1] = dVar7;
  param_1[2] = (1.0 - dVar12) - dVar7;
  return;
}



// FUNCTION 146c7dfa2 FUN_146c7dfa2 body=315 status=ok
// SIG undefined FUN_146c7dfa2(void)

void FUN_146c7dfa2(longlong *param_1,double *param_2,ulonglong param_3,undefined8 *param_4,
                  longlong param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  uVar2 = (uint)param_3;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (param_3 >> 9 & 0x7fffff) * 8);
  uVar4 = (ulonglong)(uVar2 & 0x1ff);
  dVar6 = *(double *)(lVar5 + uVar4 * 0x18) - *param_2;
  dVar7 = *(double *)(lVar5 + 8 + uVar4 * 0x18) - param_2[1];
  dVar8 = *(double *)(lVar5 + 0x10 + uVar4 * 0x18) - param_2[2];
  if ((double)param_1[1] <= dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7) {
    local_38 = *(undefined4 *)(param_4 + 1);
    local_40 = *param_4;
    uVar2 = FUN_146c7e0de(param_1,&local_40,param_2);
    if ((int)uVar2 < 0) {
      lVar5 = 0;
      do {
        cVar1 = FUN_146c7e338(param_1,*(undefined4 *)(param_5 + lVar5 * 4),param_2);
        if (cVar1 != '\0') {
          uVar2 = *(uint *)(param_5 + lVar5 * 4);
          goto LAB_146c7e025;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      local_48 = *(undefined4 *)(param_4 + 1);
      local_50 = *param_4;
      iVar3 = FUN_146c7e0de(param_1,&local_50,param_2,0x7fefffffffffffff);
      *(undefined4 *)(param_2 + 3) = 1;
      uVar4 = (ulonglong)iVar3;
    }
    else {
      *(undefined4 *)(param_2 + 3) = 1;
      uVar4 = (ulonglong)uVar2;
    }
    uVar2 = *(uint *)((longlong)param_4 + uVar4 * 4);
  }
  else {
    *(undefined4 *)(param_2 + 3) = 0;
  }
LAB_146c7e025:
  *(uint *)((longlong)param_2 + 0x1c) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c7e0de FUN_146c7e0de body=600 status=ok
// SIG undefined FUN_146c7e0de(void)

ulonglong FUN_146c7e0de(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [8];
  ulonglong local_b0;
  
  uVar14 = (undefined4)param_4;
  uVar15 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar8 = 0xffffffff;
  uVar9 = 0;
  do {
    uVar3 = *(uint *)(param_2 + uVar9 * 4);
    uVar6 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
             (ulonglong)((uVar3 & 0x1ff) << 4));
    lVar4 = *(longlong *)(*param_1 + 0x10);
    lVar5 = *(longlong *)(lVar4 + (uVar6 >> 0x29) * 8);
    uVar7 = uVar6 >> 0x20 & 0x1ff;
    dVar10 = *(double *)(lVar5 + uVar7 * 0x18);
    dVar11 = *(double *)(lVar5 + 8 + uVar7 * 0x18);
    dVar12 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
    lVar4 = *(longlong *)(lVar4 + (uVar6 >> 9 & 0x7fffff) * 8);
    uVar6 = uVar6 & 0x1ff;
    dVar13 = *(double *)(lVar4 + uVar6 * 0x18);
    dVar1 = *(double *)(lVar4 + 8 + uVar6 * 0x18);
    dVar2 = *(double *)(lVar4 + 0x10 + uVar6 * 0x18);
    local_e0 = (dVar12 + dVar2) * 0.5;
    local_e8 = (dVar11 + dVar1) * 0.5;
    local_f0 = (dVar10 + dVar13) * 0.5;
    dVar12 = dVar12 - dVar2;
    dVar11 = dVar11 - dVar1;
    dVar10 = dVar10 - dVar13;
    dVar13 = SQRT(dVar12 * dVar12 + dVar10 * dVar10 + dVar11 * dVar11);
    local_d8 = 0.0;
    local_d0 = 0.0;
    local_c8 = 0.0;
    local_c0 = 0.0;
    if (0.0 < dVar13) {
      local_c8 = 1.0 / dVar13;
      local_d8 = dVar10 * local_c8;
      local_d0 = dVar11 * local_c8;
      local_c8 = dVar12 * local_c8;
      local_c0 = dVar13 * 0.5;
    }
    dVar10 = (double)FUN_146c7eea6(&local_f0,param_3,local_b8);
    if (dVar10 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar10) {
      uVar8 = uVar9 & 0xffffffff;
    }
    if ((double)CONCAT44(uVar15,uVar14) <= dVar10) {
      dVar10 = (double)CONCAT44(uVar15,uVar14);
    }
    uVar9 = uVar9 + 1;
    uVar14 = SUB84(dVar10,0);
    uVar15 = (undefined4)((ulonglong)dVar10 >> 0x20);
  } while (uVar9 != 3);
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c7e338 FUN_146c7e338 body=353 status=ok
// SIG undefined FUN_146c7e338(void)

undefined4 FUN_146c7e338(longlong *param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = &local_38;
  lVar4 = *(longlong *)(*param_1 + 0x10);
  lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar7 = (ulonglong)(param_2 & 0x1ff);
  uVar3 = *(uint *)(lVar5 + uVar7 * 0xc);
  lVar6 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
  uVar8 = (ulonglong)uVar3 & 0x1ff;
  local_58 = *(undefined8 *)(lVar6 + 0x10 + uVar8 * 0x18);
  puVar1 = (undefined8 *)(lVar6 + uVar8 * 0x18);
  local_68 = *puVar1;
  uStack_60 = puVar1[1];
  uVar3 = *(uint *)(lVar5 + 4 + uVar7 * 0xc);
  lVar6 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
  uVar8 = (ulonglong)uVar3 & 0x1ff;
  local_40 = *(undefined8 *)(lVar6 + 0x10 + uVar8 * 0x18);
  puVar1 = (undefined8 *)(lVar6 + uVar8 * 0x18);
  local_50 = *puVar1;
  uStack_48 = puVar1[1];
  uVar3 = *(uint *)(lVar5 + 8 + uVar7 * 0xc);
  lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
  uVar7 = (ulonglong)uVar3 & 0x1ff;
  local_28 = *(undefined8 *)(lVar4 + 0x10 + uVar7 * 0x18);
  puVar2 = (undefined4 *)(lVar4 + uVar7 * 0x18);
  local_38 = *puVar2;
  uStack_34 = puVar2[1];
  uStack_30 = puVar2[2];
  uStack_2c = puVar2[3];
  FUN_146c7de05(&local_80,param_3,&local_68);
  iVar9 = -(uint)(0.0 <= local_78 && 0.0 <= local_80);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT31((int3)((uint)iVar9 >> 8),
                    local_70 <= 1.0 &
                    (local_78 <= 1.0 && (local_80 < 1.0 && 0.0 <= local_70)) & (byte)iVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c7e49a FUN_146c7e49a body=148 status=ok
// SIG undefined FUN_146c7e49a(void)

void FUN_146c7e49a(longlong *param_1,double *param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(param_3 >> 9) * 8);
  uVar3 = (ulonglong)(param_3 & 0x1ff);
  dVar4 = *(double *)(lVar1 + uVar3 * 0x18) - *param_2;
  dVar5 = *(double *)(lVar1 + 8 + uVar3 * 0x18) - param_2[1];
  dVar6 = *(double *)(lVar1 + 0x10 + uVar3 * 0x18) - param_2[2];
  if ((double)param_1[1] <= dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5) {
    iVar2 = FUN_146c7e52e(param_1[1],*param_4,param_2);
    *(undefined4 *)(param_2 + 3) = 1;
    param_3 = *(uint *)((longlong)param_4 + (longlong)iVar2 * 4);
  }
  else {
    *(undefined4 *)(param_2 + 3) = 0;
  }
  *(uint *)((longlong)param_2 + 0x1c) = param_3;
  return;
}



// FUNCTION 146c7e52e FUN_146c7e52e body=617 status=ok
// SIG undefined FUN_146c7e52e(void)

undefined4 FUN_146c7e52e(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [8];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar16 = 0xffffffff;
  uVar17 = 0x7fefffff;
  uVar10 = 0xffffffff;
  uVar9 = 0;
  uVar7 = param_2;
  bVar5 = true;
  do {
    bVar11 = bVar5;
    uVar7 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (uVar7 >> 9 & 0x7fffff) * 8) +
             (ulonglong)(((uint)uVar7 & 0x1ff) << 4));
    lVar3 = *(longlong *)(*param_1 + 0x10);
    lVar4 = *(longlong *)(lVar3 + (uVar7 >> 0x29) * 8);
    uVar8 = uVar7 >> 0x20 & 0x1ff;
    dVar12 = *(double *)(lVar4 + uVar8 * 0x18);
    dVar13 = *(double *)(lVar4 + 8 + uVar8 * 0x18);
    dVar14 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
    lVar3 = *(longlong *)(lVar3 + (uVar7 >> 9 & 0x7fffff) * 8);
    uVar7 = uVar7 & 0x1ff;
    dVar15 = *(double *)(lVar3 + uVar7 * 0x18);
    dVar1 = *(double *)(lVar3 + 8 + uVar7 * 0x18);
    dVar2 = *(double *)(lVar3 + 0x10 + uVar7 * 0x18);
    local_e0 = (dVar14 + dVar2) * 0.5;
    local_e8 = (dVar13 + dVar1) * 0.5;
    local_f0 = (dVar12 + dVar15) * 0.5;
    dVar14 = dVar14 - dVar2;
    dVar13 = dVar13 - dVar1;
    dVar12 = dVar12 - dVar15;
    dVar15 = SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13);
    local_d8 = 0.0;
    local_d0 = 0.0;
    local_c8 = 0.0;
    local_c0 = 0.0;
    if (0.0 < dVar15) {
      local_c8 = 1.0 / dVar15;
      local_d8 = dVar12 * local_c8;
      local_d0 = dVar13 * local_c8;
      local_c8 = dVar14 * local_c8;
      local_c0 = dVar15 * 0.5;
    }
    dVar12 = (double)FUN_146c7eea6(&local_f0,param_3,local_b8);
    bVar5 = (double)CONCAT44(uVar17,uVar16) != dVar12;
    bVar6 = dVar12 <= (double)CONCAT44(uVar17,uVar16);
    if ((double)CONCAT44(uVar17,uVar16) <= dVar12) {
      dVar12 = (double)CONCAT44(uVar17,uVar16);
    }
    if (bVar6 && bVar5) {
      uVar10 = uVar9;
    }
    uVar9 = 1;
    uVar16 = SUB84(dVar12,0);
    uVar17 = (undefined4)((ulonglong)dVar12 >> 0x20);
    uVar7 = param_2 >> 0x20;
    bVar5 = false;
  } while (bVar11);
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c7e798 FUN_146c7e798 body=483 status=ok
// SIG undefined FUN_146c7e798(void)

double * FUN_146c7e798(double *param_1,longlong param_2,uint param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_b8 [16];
  double adStack_a8 [6];
  undefined8 uStack_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar11 = *(longlong *)(param_2 + 0x10);
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar12 = (ulonglong)(param_3 & 0x1ff);
  uVar4 = *(uint *)(lVar5 + uVar12 * 0xc);
  lVar6 = *(longlong *)(lVar11 + (ulonglong)(uVar4 >> 9) * 8);
  uVar13 = (ulonglong)uVar4 & 0x1ff;
  adStack_a8[4] = (double)*(undefined8 *)(lVar6 + 0x10 + uVar13 * 0x18);
  puVar1 = (undefined8 *)(lVar6 + uVar13 * 0x18);
  adStack_a8[2] = (double)*puVar1;
  adStack_a8[3] = (double)puVar1[1];
  uVar4 = *(uint *)(lVar5 + 4 + uVar12 * 0xc);
  lVar6 = *(longlong *)(lVar11 + (ulonglong)(uVar4 >> 9) * 8);
  uVar13 = (ulonglong)uVar4 & 0x1ff;
  local_70 = *(undefined8 *)(lVar6 + 0x10 + uVar13 * 0x18);
  puVar1 = (undefined8 *)(lVar6 + uVar13 * 0x18);
  adStack_a8[5] = (double)*puVar1;
  uStack_78 = puVar1[1];
  uVar4 = *(uint *)(lVar5 + 8 + uVar12 * 0xc);
  lVar11 = *(longlong *)(lVar11 + (ulonglong)(uVar4 >> 9) * 8);
  uVar12 = (ulonglong)uVar4 & 0x1ff;
  local_58 = *(double *)(lVar11 + 0x10 + uVar12 * 0x18);
  pdVar2 = (double *)(lVar11 + uVar12 * 0x18);
  local_68 = *pdVar2;
  dStack_60 = pdVar2[1];
  lVar11 = 0x10;
  dVar16 = local_58;
  dVar15 = local_68;
  dVar17 = dStack_60;
  do {
    dVar14 = *(double *)((longlong)adStack_a8 + lVar11 + 0x10);
    dVar16 = dVar14 - dVar16;
    pdVar2 = (double *)((longlong)adStack_a8 + lVar11);
    dVar3 = *(double *)((longlong)adStack_a8 + lVar11 + 8);
    dVar17 = dVar3 - dVar17;
    dVar15 = *pdVar2 - dVar15;
    dVar7 = dVar16 * dVar16 + dVar15 * dVar15 + dVar17 * dVar17;
    if (9.99999993922529e-09 < dVar7) {
      dVar14 = 1.0 / SQRT(dVar7);
      *param_1 = dVar15 * dVar14;
      param_1[1] = dVar17 * dVar14;
      param_1[2] = dVar16 * dVar14;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
    }
    lVar11 = lVar11 + 0x18;
    dVar16 = dVar14;
    dVar15 = *pdVar2;
    dVar17 = dVar3;
  } while (lVar11 != 0x58);
  param_1[2] = *(double *)(param_4 + 4);
  uVar8 = param_4[1];
  uVar9 = param_4[2];
  uVar10 = param_4[3];
  *(undefined4 *)param_1 = *param_4;
  *(undefined4 *)((longlong)param_1 + 4) = uVar8;
  *(undefined4 *)(param_1 + 1) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar10;
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146c7e97c FUN_146c7e97c body=52 status=ok
// SIG undefined FUN_146c7e97c(void)

void FUN_146c7e97c(longlong *param_1)

{
  FUN_146c7e9b0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c7e9b0 FUN_146c7e9b0 body=89 status=ok
// SIG undefined FUN_146c7e9b0(void)

void FUN_146c7e9b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 146c7ea09 FUN_146c7ea09 body=61 status=ok
// SIG undefined FUN_146c7ea09(void)

void FUN_146c7ea09(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
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



// FUNCTION 146c7ea46 FUN_146c7ea46 body=88 status=ok
// SIG undefined FUN_146c7ea46(void)

undefined8 * FUN_146c7ea46(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146c7ea9e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 146c7ea9e FUN_146c7ea9e body=98 status=ok
// SIG undefined FUN_146c7ea9e(void)

void FUN_146c7ea9e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146c7eb00 FUN_146c7eb00 body=95 status=ok
// SIG undefined FUN_146c7eb00(void)

void FUN_146c7eb00(longlong param_1,uint param_2)

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



// FUNCTION 146c7eb60 FUN_146c7eb60 body=132 status=ok
// SIG undefined FUN_146c7eb60(void)

void FUN_146c7eb60(longlong param_1,int param_2)

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



// FUNCTION 146c7ebe6 FUN_146c7ebe6 body=111 status=ok
// SIG undefined FUN_146c7ebe6(void)

void FUN_146c7ebe6(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146c7ec56 FUN_146c7ec56 body=109 status=ok
// SIG undefined FUN_146c7ec56(void)

void FUN_146c7ec56(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 146c7ecc3 FUN_146c7ecc3 body=19 status=ok
// SIG undefined FUN_146c7ecc3(void)

void FUN_146c7ecc3(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 146c7ecd6 FUN_146c7ecd6 body=63 status=ok
// SIG undefined FUN_146c7ecd6(void)

void FUN_146c7ecd6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c7ed16(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146c7ed16 FUN_146c7ed16 body=97 status=ok
// SIG undefined FUN_146c7ed16(void)

ulonglong FUN_146c7ed16(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146c7ed78 FUN_146c7ed78 body=31 status=ok
// SIG undefined FUN_146c7ed78(void)

undefined8 FUN_146c7ed78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c7edb4 FUN_146c7edb4 body=93 status=ok
// SIG undefined FUN_146c7edb4(void)

void FUN_146c7edb4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f3c6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146c7ee12 FUN_146c7ee12 body=126 status=ok
// SIG undefined FUN_146c7ee12(void)

void FUN_146c7ee12(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f3c6e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c7ee81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146c7ee90 FUN_146c7ee90 body=21 status=ok
// SIG undefined FUN_146c7ee90(void)

undefined8 FUN_146c7ee90(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146c7eea6 FUN_146c7eea6 body=345 status=ok
// SIG undefined FUN_146c7eea6(void)

double FUN_146c7eea6(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_2[2] - param_1[2]) * param_1[5] +
          (*param_2 - *param_1) * param_1[3] + (param_2[1] - param_1[1]) * param_1[4];
  *param_3 = dVar1;
  dVar2 = param_1[6];
  if (dVar2 <= dVar1) {
    *param_3 = dVar2;
    dVar2 = param_1[6];
    dVar1 = (dVar2 * param_1[3] + *param_1) - *param_2;
    dVar3 = (param_1[4] * dVar2 + param_1[1]) - param_2[1];
    dVar2 = (param_1[5] * dVar2 + param_1[2]) - param_2[2];
    return dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  }
  if (-dVar2 < dVar1) {
    dVar3 = *param_2 - (dVar1 * param_1[3] + *param_1);
    dVar4 = param_2[1] - (param_1[4] * dVar1 + param_1[1]);
    dVar2 = param_2[2] - (param_1[5] * dVar1 + param_1[2]);
    return dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
  }
  *param_3 = -dVar2;
  dVar2 = param_1[6];
  dVar3 = (*param_1 - dVar2 * param_1[3]) - *param_2;
  dVar1 = (param_1[1] - param_1[4] * dVar2) - param_2[1];
  dVar2 = (param_1[2] - param_1[5] * dVar2) - param_2[2];
  return dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1;
}



// FUNCTION 146c7f000 FUN_146c7f000 body=202 status=ok
// SIG undefined FUN_146c7f000(void)

double FUN_146c7f000(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (*param_2 - *param_1) * param_1[2] + (param_2[1] - param_1[1]) * param_1[3];
  *param_3 = dVar2;
  dVar1 = param_1[4];
  if (dVar1 <= dVar2) {
    *param_3 = dVar1;
    dVar2 = param_1[3] * param_1[4] + param_1[1];
    dVar1 = param_1[4] * param_1[2] + *param_1;
  }
  else {
    if (-dVar1 < dVar2) {
      dVar1 = *param_2 - (dVar2 * param_1[2] + *param_1);
      dVar2 = param_2[1] - (param_1[3] * dVar2 + param_1[1]);
      goto LAB_146c7f092;
    }
    *param_3 = -dVar1;
    dVar1 = *param_1 - param_1[4] * param_1[2];
    dVar2 = param_1[1] - param_1[3] * param_1[4];
  }
  dVar1 = dVar1 - *param_2;
  dVar2 = dVar2 - param_2[1];
LAB_146c7f092:
  return dVar1 * dVar1 + dVar2 * dVar2;
}



// FUNCTION 146c7f0ca FUN_146c7f0ca body=96 status=ok
// SIG undefined FUN_146c7f0ca(void)

void FUN_146c7f0ca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
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



// FUNCTION 146c7f12a FUN_146c7f12a body=96 status=ok
// SIG undefined FUN_146c7f12a(void)

void FUN_146c7f12a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
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



// FUNCTION 146c7f18a FUN_146c7f18a body=132 status=ok
// SIG undefined FUN_146c7f18a(void)

void FUN_146c7f18a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c7f210 FUN_146c7f210 body=255 status=ok
// SIG undefined FUN_146c7f210(void)

undefined8 * FUN_146c7f210(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 146c7f310 FUN_146c7f310 body=255 status=ok
// SIG undefined FUN_146c7f310(void)

undefined8 * FUN_146c7f310(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 146c7f410 FUN_146c7f410 body=132 status=ok
// SIG undefined FUN_146c7f410(void)

void FUN_146c7f410(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c7f495 FUN_146c7f495 body=31 status=ok
// SIG undefined FUN_146c7f495(void)

void FUN_146c7f495(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x29) = 0;
    *(undefined8 *)((longlong)param_1 + 0x31) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 146c7f4b4 FUN_146c7f4b4 body=95 status=ok
// SIG undefined FUN_146c7f4b4(void)

void FUN_146c7f4b4(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x40 + *param_1);
  FUN_146be9485(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c7f514 FUN_146c7f514 body=63 status=ok
// SIG undefined FUN_146c7f514(void)

void FUN_146c7f514(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c7f554(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 146c7f554 FUN_146c7f554 body=97 status=ok
// SIG undefined FUN_146c7f554(void)

ulonglong FUN_146c7f554(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 146c7f5b6 FUN_146c7f5b6 body=313 status=ok
// SIG undefined FUN_146c7f5b6(void)

undefined4 *
FUN_146c7f5b6(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_146c7f6f0(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 1) = *puVar1;
  local_48[3] = *(uint *)(puVar1 + 1);
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_146c7f7d6(param_1,uVar4,local_48);
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
      FUN_146c7f8f4(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c7f6f0 FUN_146c7f6f0 body=230 status=ok
// SIG undefined FUN_146c7f6f0(void)

int * FUN_146c7f6f0(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 146c7f7d6 FUN_146c7f7d6 body=148 status=ok
// SIG undefined FUN_146c7f7d6(void)

void FUN_146c7f7d6(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146c7f86a(iVar2,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_146c7f840;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_146c7f840:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 146c7f86a FUN_146c7f86a body=138 status=ok
// SIG undefined FUN_146c7f86a(void)

void FUN_146c7f86a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146c7f8f4 FUN_146c7f8f4 body=419 status=ok
// SIG undefined FUN_146c7f8f4(void)

void FUN_146c7f8f4(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 146c7fa98 FUN_146c7fa98 body=113 status=ok
// SIG undefined FUN_146c7fa98(void)

void FUN_146c7fa98(longlong param_1,int param_2)

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



// FUNCTION 146c7fb0a FUN_146c7fb0a body=147 status=ok
// SIG undefined FUN_146c7fb0a(void)

void FUN_146c7fb0a(longlong param_1,int param_2)

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



// FUNCTION 146c7fb9e FUN_146c7fb9e body=363 status=ok
// SIG undefined FUN_146c7fb9e(void)

void FUN_146c7fb9e(longlong *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = (undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar3 + 4);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *param_2 = *puVar3;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  iVar11 = 0;
  iVar12 = (int)param_1[1] + -1;
  if (iVar12 != 0) {
    iVar11 = 1;
    if (iVar12 < 1) {
      iVar11 = iVar12;
    }
    memmove((void *)*param_1,(void *)(*param_1 + (longlong)((int)param_1[1] - iVar11) * 0x18),
            (longlong)iVar11 * 0x18);
    iVar11 = (int)param_1[1] + -1;
  }
  *(int *)(param_1 + 1) = iVar11;
  FUN_146c7fd0a(param_1);
  iVar11 = (int)param_1[1];
  if (1 < iVar11) {
    lVar4 = *param_1;
    iVar12 = 0;
    iVar15 = 1;
    iVar17 = 0;
    do {
      iVar12 = iVar12 + 2;
      iVar14 = iVar15;
      if ((iVar12 < iVar11) &&
         (*(double *)(lVar4 + 8 + (longlong)iVar12 * 0x18) +
          *(double *)(lVar4 + 0x10 + (longlong)iVar12 * 0x18) <=
          *(double *)(lVar4 + 8 + (longlong)iVar15 * 0x18) +
          *(double *)(lVar4 + 0x10 + (longlong)iVar15 * 0x18))) {
        iVar14 = iVar12;
      }
      lVar13 = (longlong)iVar17;
      lVar16 = (longlong)iVar14;
      if (*(double *)(lVar4 + 8 + lVar13 * 0x18) + *(double *)(lVar4 + 0x10 + lVar13 * 0x18) <=
          *(double *)(lVar4 + 8 + lVar16 * 0x18) + *(double *)(lVar4 + 0x10 + lVar16 * 0x18)) break;
      puVar1 = (undefined8 *)(lVar4 + lVar13 * 0x18);
      puVar2 = (undefined8 *)(lVar4 + lVar16 * 0x18);
      local_18 = puVar1[2];
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1[2] = puVar2[2];
      uVar10 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar10;
      puVar2[2] = local_18;
      local_28._0_4_ = (undefined4)uVar8;
      local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar9;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      iVar12 = iVar14 * 2;
      iVar15 = iVar14 * 2 + 1;
      iVar17 = iVar14;
      local_28 = uVar8;
      uStack_20 = uVar9;
    } while (iVar15 < iVar11);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c7fd0a FUN_146c7fd0a body=62 status=ok
// SIG undefined FUN_146c7fd0a(void)

void FUN_146c7fd0a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c7fd48(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146c7fd48 FUN_146c7fd48 body=112 status=ok
// SIG undefined FUN_146c7fd48(void)

ulonglong FUN_146c7fd48(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c7fd82;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_146c7fd82:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c7fdb8 FUN_146c7fdb8 body=245 status=ok
// SIG undefined FUN_146c7fdb8(void)

void FUN_146c7fdb8(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_146c7fb0a(param_1,iVar4);
  }
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar4 * 0x18) = *(undefined8 *)(param_2 + 4);
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  puVar1 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  if (1 < (int)param_1[1]) {
    lVar5 = *param_1;
    uVar13 = (ulonglong)((int)param_1[1] - 1);
    do {
      uVar14 = (int)uVar13 - 1;
      uVar6 = (ulonglong)(uVar14 >> 1);
      if (*(double *)(lVar5 + 8 + uVar6 * 0x18) + *(double *)(lVar5 + 0x10 + uVar6 * 0x18) <=
          *(double *)(lVar5 + 8 + uVar13 * 0x18) + *(double *)(lVar5 + 0x10 + uVar13 * 0x18)) break;
      puVar2 = (undefined8 *)(lVar5 + uVar6 * 0x18);
      puVar3 = (undefined8 *)(lVar5 + uVar13 * 0x18);
      local_28 = puVar3[2];
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar3[2] = puVar2[2];
      uVar12 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2[2] = local_28;
      local_38._0_4_ = (undefined4)uVar10;
      local_38._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar11;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      uVar13 = uVar6;
      local_38 = uVar10;
      uStack_30 = uVar11;
    } while (1 < uVar14);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c7feae FUN_146c7feae body=147 status=ok
// SIG undefined FUN_146c7feae(void)

void FUN_146c7feae(longlong param_1,int param_2)

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



// FUNCTION 146c7ff42 FUN_146c7ff42 body=62 status=ok
// SIG undefined FUN_146c7ff42(void)

void FUN_146c7ff42(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c7ff80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 146c7ff80 FUN_146c7ff80 body=112 status=ok
// SIG undefined FUN_146c7ff80(void)

ulonglong FUN_146c7ff80(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c7ffba;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_146c7ffba:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c7fff0 FUN_146c7fff0 body=31 status=ok
// SIG undefined FUN_146c7fff0(void)

undefined8
FUN_146c7fff0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  (*(code *)*param_2)(param_1,*param_3,*param_4);
  return param_1;
}



// FUNCTION 146c80010 FUN_146c80010 body=24 status=ok
// SIG undefined FUN_146c80010(void)

longlong FUN_146c80010(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_149f3c790;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 146c8002e FUN_146c8002e body=12 status=ok
// SIG undefined FUN_146c8002e(void)

void FUN_146c8002e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146c80037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146c8003a FUN_146c8003a body=29 status=ok
// SIG undefined FUN_146c8003a(void)

undefined8 FUN_146c8003a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c80058 FUN_146c80058 body=733 status=ok
// SIG undefined FUN_146c80058(void)

int * FUN_146c80058(longlong param_1,int *param_2,double *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_f8 [36];
  int local_d4;
  int local_d0;
  int local_cc;
  int *local_c8;
  longlong local_c0;
  ulonglong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  longlong local_98;
  int *local_90;
  double *local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_6c;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x34)) {
    *param_2 = *(int *)(param_1 + 0x80);
    param_2[2] = -1;
    param_2[3] = 0x7fefffff;
  }
  else {
    dVar7 = in_XMM3._0_8_;
    uVar17 = in_XMM3._8_4_;
    uVar18 = in_XMM3._12_4_;
    local_68 = dVar7 * dVar7;
    local_88 = &local_68;
    local_6c = *(int *)(param_1 + 0x80);
    local_90 = &local_6c;
    local_80 = param_5;
    local_78 = param_6;
    dVar8 = *(double *)(param_1 + 0x78);
    auVar9._0_8_ = param_3[2] / dVar8;
    auVar9._8_8_ = 0;
    auVar9 = roundsd(auVar9,auVar9,9);
    auVar13._0_8_ = param_3[1] / dVar8;
    auVar13._8_8_ = 0;
    auVar13 = roundsd(auVar13,auVar13,9);
    auVar10._0_8_ = *param_3 / dVar8;
    auVar10._8_8_ = 0;
    auVar10 = roundsd(auVar10,auVar10,9);
    local_a4 = (int)auVar10._0_8_;
    local_a0 = (int)auVar13._0_8_;
    local_9c = (int)auVar9._0_8_;
    local_98 = param_1;
    cVar2 = FUN_146c80336();
    if (cVar2 != '\0') {
      if (local_68 < 0.0) {
        dVar7 = sqrt(local_68);
        uVar17 = (undefined4)extraout_XMM0_Qb;
        uVar18 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      }
      else {
        uVar17 = 0;
        uVar18 = 0;
        dVar7 = SQRT(local_68);
      }
    }
    dVar8 = *(double *)(param_1 + 0x78);
    auVar15._0_8_ = (param_3[2] - DAT_14c846520 * dVar7) / dVar8;
    auVar15._8_8_ = 0;
    auVar15 = roundsd(auVar15,auVar15,9);
    auVar11._0_8_ = (DAT_14c846520 * dVar7 + param_3[2]) / dVar8;
    auVar11._8_8_ = 0;
    auVar11 = roundsd(auVar11,auVar11,9);
    local_cc = (int)auVar11._0_8_;
    local_c8 = param_2;
    local_c0 = param_1;
    if ((int)auVar15._0_8_ <= local_cc) {
      auVar16._0_8_ = (param_3[1] - DAT_14c846518 * dVar7) / dVar8;
      auVar16._8_8_ = 0;
      auVar11 = roundsd(auVar16,auVar16,9);
      local_d0 = (int)auVar11._0_8_;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (*param_3 - dVar7 * DAT_14c846510) / dVar8;
      auVar16 = roundsd(ZEXT816(0),auVar14,9);
      auVar1._8_4_ = uVar17;
      auVar1._0_8_ = (dVar7 * DAT_14c846510 + *param_3) / dVar8;
      auVar1._12_4_ = uVar18;
      auVar14 = roundsd(ZEXT816(0),auVar1,9);
      local_b8 = (ulonglong)(uint)(int)auVar14._0_8_;
      auVar12._0_8_ = (DAT_14c846518 * dVar7 + param_3[1]) / dVar8;
      auVar12._8_8_ = 0;
      auVar11 = roundsd(ZEXT816(0),auVar12,9);
      local_d4 = (int)auVar11._0_8_;
      iVar5 = (int)auVar15._0_8_;
      do {
        iVar4 = local_d0;
        if (local_d0 <= local_d4) {
          do {
            iVar3 = (int)auVar16._0_8_;
            if ((int)auVar16._0_8_ <= (int)local_b8) {
              do {
                if ((((int)auVar10._0_8_ != iVar3) || (iVar4 != (int)auVar13._0_8_)) ||
                   (iVar5 != (int)auVar9._0_8_)) {
                  local_b0 = iVar3;
                  local_ac = iVar4;
                  local_a8 = iVar5;
                  FUN_146c80336(&local_98,&local_b0);
                }
                iVar3 = iVar3 + 1;
              } while ((int)auVar14._0_8_ + 1U != iVar3);
            }
            bVar6 = iVar4 != local_d4;
            iVar4 = iVar4 + 1;
          } while (bVar6);
        }
        bVar6 = iVar5 != local_cc;
        iVar5 = iVar5 + 1;
      } while (bVar6);
    }
    dVar8 = local_68;
    if (local_6c == *(int *)(local_c0 + 0x80)) {
      dVar8 = 1.79769313486232e+308;
    }
    *local_c8 = local_6c;
    *(double *)(local_c8 + 2) = dVar8;
    param_2 = local_c8;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146c80336 FUN_146c80336 body=303 status=ok
// SIG undefined FUN_146c80336(void)

undefined8 FUN_146c80336(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  double dVar10;
  
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[9] != 0) {
    iVar3 = FUN_1448eb174(param_2,0xc,0);
    plVar5 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + ((longlong)iVar3 & (longlong)(int)plVar1[9] - 1U) * 4);
    if (iVar3 == -1) {
      return 0;
    }
    lVar4 = *plVar1;
    do {
      lVar8 = (longlong)iVar3;
      iVar7 = *(int *)(lVar4 + 0x10 + lVar8 * 0x18);
      if (((*(int *)(lVar4 + lVar8 * 0x18) == *param_2) &&
          (lVar8 = lVar4 + lVar8 * 0x18, *(int *)(lVar8 + 4) == param_2[1])) &&
         (*(int *)(lVar8 + 8) == param_2[2])) {
        uVar6 = 0;
        while( true ) {
          puVar9 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18 + 0xc);
          cVar2 = (**(code **)param_1[4])(((undefined8 *)param_1[4])[1],puVar9);
          if ((cVar2 == '\0') &&
             (dVar10 = (double)(**(code **)param_1[3])(((undefined8 *)param_1[3])[1],puVar9),
             dVar10 < *(double *)param_1[2])) {
            *(undefined4 *)param_1[1] = *puVar9;
            *(double *)param_1[2] = dVar10;
            uVar6 = 1;
          }
          if (iVar7 == -1) break;
          lVar4 = *plVar1;
          iVar3 = iVar7;
          while( true ) {
            lVar8 = (longlong)iVar3;
            iVar7 = *(int *)(lVar4 + 0x10 + lVar8 * 0x18);
            if (((*(int *)(lVar4 + lVar8 * 0x18) == *param_2) &&
                (lVar8 = lVar4 + lVar8 * 0x18, *(int *)(lVar8 + 4) == param_2[1])) &&
               (*(int *)(lVar8 + 8) == param_2[2])) break;
            iVar3 = iVar7;
            if (iVar7 == -1) {
              return uVar6;
            }
          }
        }
        return uVar6;
      }
      iVar3 = iVar7;
    } while (iVar7 != -1);
  }
  return 0;
}



// FUNCTION 146c80469 FUN_146c80469 body=50 status=ok
// SIG undefined FUN_146c80469(void)

void FUN_146c80469(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146c8049c FUN_146c8049c body=117 status=ok
// SIG undefined FUN_146c8049c(void)

void FUN_146c8049c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    iVar2 = (int)(uVar1 / 0xb8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146c80511 FUN_146c80511 body=180 status=ok
// SIG undefined FUN_146c80511(void)

void FUN_146c80511(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_144a06ca8(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 << 2);
      }
      memcpy((void *)(param_1 + 0x18 + lVar2),(void *)(param_2 + lVar2 + 0x18),0xa0);
      lVar2 = lVar2 + 0xb8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146c805c6 FUN_146c805c6 body=91 status=ok
// SIG undefined FUN_146c805c6(void)

void FUN_146c805c6(longlong *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)param_1[2];
  plVar4 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1[10] + 0x80) = uVar2;
  FUN_140b576f0();
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c80616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 146c80622 FUN_146c80622 body=1 status=ok
// SIG undefined FUN_146c80622(void)

void FUN_146c80622(void)

{
  return;
}



// FUNCTION 146c80624 FUN_146c80624 body=38 status=ok
// SIG undefined FUN_146c80624(void)

undefined8 FUN_146c80624(undefined8 param_1,int param_2)

{
  FUN_146c8064a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c8064a FUN_146c8064a body=138 status=ok
// SIG undefined FUN_146c8064a(void)

void FUN_146c8064a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = TAsyncQueuedWork<bool>::vftable;
  plVar4 = (longlong *)param_1[0xb];
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
  if (param_1[2] != 0) {
    plVar4 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = IQueuedWork::vftable;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146c806c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 146c806d4 FUN_146c806d4 body=114 status=ok
// SIG undefined FUN_146c806d4(void)

int FUN_146c806d4(longlong *param_1,uint param_2,char *param_3)

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
        if (*(char *)(lVar2 + lVar4) == *param_3) {
          if (*param_3 == '\0') {
            return iVar1;
          }
          if (*(undefined1 (*) [16])(param_3 + 1) == *(undefined1 (*) [16])(lVar2 + lVar4 + 1)) {
            return iVar1;
          }
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146c80746 FUN_146c80746 body=51 status=ok
// SIG undefined FUN_146c80746(void)

void FUN_146c80746(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000146c80776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 146c8077a FUN_146c8077a body=307 status=ok
// SIG undefined FUN_146c8077a(void)

undefined4 * FUN_146c8077a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146c808ae(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined1 *)(local_40 + 2) = *(undefined1 *)(puVar1 + 2);
  uVar6 = puVar1[1];
  *local_40 = *puVar1;
  local_40[1] = uVar6;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(local_40 + 3) = *puVar2;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar3;
  *(undefined4 *)(local_40 + 4) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar5;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar12 = *(uint *)((longlong)local_40 + 5) ^ *(uint *)((longlong)local_40 + 1) ^
           *(uint *)((longlong)local_40 + 9) ^ *(uint *)((longlong)local_40 + 0xd);
  cVar7 = FUN_146c8099c(param_1,uVar12,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar7 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar12 = *(int *)(param_1 + 0x48) - 1U & uVar12;
      *(uint *)((longlong)local_40 + 0x2c) = uVar12;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar12) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar12) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146c80a80(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c808ae FUN_146c808ae body=238 status=ok
// SIG undefined FUN_146c808ae(void)

int * FUN_146c808ae(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 146c8099c FUN_146c8099c body=106 status=ok
// SIG undefined FUN_146c8099c(void)

undefined8 FUN_146c8099c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar11 = FUN_146c806d4(), iVar11 != -1)) {
    lVar2 = *param_1;
    lVar12 = (longlong)iVar11 * 0x30;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *(undefined8 *)(lVar2 + 0x20 + lVar12) = *(undefined8 *)(param_3 + 8);
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar12);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar12);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146c80a06(param_1,*param_4);
    *param_4 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 146c80a06 FUN_146c80a06 body=122 status=ok
// SIG undefined FUN_146c80a06(void)

void FUN_146c80a06(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 146c80a80 FUN_146c80a80 body=446 status=ok
// SIG undefined FUN_146c80a80(void)

void FUN_146c80a80(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)(*(uint *)(lVar3 + 5 + lVar7) ^ *(uint *)(lVar3 + 1 + lVar7) ^
                       *(uint *)(lVar3 + 9 + lVar7) ^ *(uint *)(lVar3 + 0xd + lVar7)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146c80c3f FUN_146c80c3f body=26 status=ok
// SIG undefined FUN_146c80c3f(void)

void FUN_146c80c3f(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146c80c5a FUN_146c80c5a body=149 status=ok
// SIG undefined FUN_146c80c5a(void)

void FUN_146c80c5a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c80cf0 FUN_146c80cf0 body=98 status=ok
// SIG undefined FUN_146c80cf0(void)

void FUN_146c80cf0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xb8 + *param_1);
  FUN_146c80469(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xb8 + (longlong)_Dst),(longlong)iVar2 * 0xb8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c80d52 FUN_146c80d52 body=62 status=ok
// SIG undefined FUN_146c80d52(void)

void FUN_146c80d52(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c80d90(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb8,8);
  }
  return;
}



// FUNCTION 146c80d90 FUN_146c80d90 body=113 status=ok
// SIG undefined FUN_146c80d90(void)

ulonglong FUN_146c80d90(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xb8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c80dc9;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xb8,8);
      param_2 = param_2 / 0xb8;
    }
  }
LAB_146c80dc9:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c80e01 FUN_146c80e01 body=48 status=ok
// SIG undefined FUN_146c80e01(void)

void FUN_146c80e01(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x7fefffffffffffff;
    param_1[1] = 0x7fefffffffffffff;
    param_1[2] = 0xffefffffffffffff;
    param_1[3] = 0xffefffffffffffff;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 146c80e32 FUN_146c80e32 body=132 status=ok
// SIG undefined FUN_146c80e32(void)

void FUN_146c80e32(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c80eb8 FUN_146c80eb8 body=62 status=ok
// SIG undefined FUN_146c80eb8(void)

void FUN_146c80eb8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c80ef6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 146c80ef6 FUN_146c80ef6 body=93 status=ok
// SIG undefined FUN_146c80ef6(void)

ulonglong FUN_146c80ef6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146c80f53 FUN_146c80f53 body=27 status=ok
// SIG undefined FUN_146c80f53(void)

void FUN_146c80f53(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146c80f6e FUN_146c80f6e body=147 status=ok
// SIG undefined FUN_146c80f6e(void)

void FUN_146c80f6e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c81002 FUN_146c81002 body=98 status=ok
// SIG undefined FUN_146c81002(void)

void FUN_146c81002(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
  FUN_146c7ea09(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c81064 FUN_146c81064 body=62 status=ok
// SIG undefined FUN_146c81064(void)

void FUN_146c81064(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c810a2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 146c810a2 FUN_146c810a2 body=112 status=ok
// SIG undefined FUN_146c810a2(void)

ulonglong FUN_146c810a2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c810dc;
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
LAB_146c810dc:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c81112 FUN_146c81112 body=48 status=ok
// SIG undefined FUN_146c81112(void)

void FUN_146c81112(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 146c81142 FUN_146c81142 body=132 status=ok
// SIG undefined FUN_146c81142(void)

void FUN_146c81142(longlong param_1,int param_2)

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



// FUNCTION 146c811c8 FUN_146c811c8 body=62 status=ok
// SIG undefined FUN_146c811c8(void)

void FUN_146c811c8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c81206(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146c81206 FUN_146c81206 body=93 status=ok
// SIG undefined FUN_146c81206(void)

ulonglong FUN_146c81206(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146c81263 FUN_146c81263 body=559 status=ok
// SIG undefined FUN_146c81263(void)

void FUN_146c81263(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  longlong *plVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar10 = &local_348;
    do {
      puVar4 = (uint *)*plVar10;
      puVar11 = (uint *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 3);
      puVar9 = puVar4;
      puVar15 = puVar11;
      if (iVar13 != 0) {
LAB_146c81324:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = (ulonglong)(iVar6 + 1U >> 1);
          uVar2 = *(undefined8 *)(puVar4 + uVar7 * 2);
          *(undefined8 *)(puVar4 + uVar7 * 2) = *(undefined8 *)puVar4;
          *(undefined8 *)puVar4 = uVar2;
          puVar8 = puVar11 + 2;
          puVar5 = puVar4;
          do {
            puVar3 = puVar5 + 2;
            puVar12 = puVar5 + 2;
            do {
              puVar5 = puVar12;
              puVar16 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar16 + 2;
              puVar12 = puVar5 + 2;
            } while (*puVar5 <= *puVar4);
            puVar3 = puVar8 + -4;
            do {
              puVar12 = puVar8;
              puVar17 = puVar3;
              puVar8 = puVar12 + -2;
              if (puVar8 <= puVar4) break;
              puVar3 = puVar17 + -2;
            } while (*puVar4 <= *puVar8);
            if (puVar8 < puVar5) goto LAB_146c8139e;
            uVar2 = *(undefined8 *)puVar5;
            *(undefined8 *)puVar5 = *(undefined8 *)puVar8;
            *(undefined8 *)puVar8 = uVar2;
          } while( true );
        }
        if (puVar4 < puVar11) {
          do {
            puVar9 = puVar4;
            if (puVar4 + 2 <= puVar11) {
              uVar14 = *puVar4;
              puVar15 = puVar4 + 2;
              do {
                uVar1 = *puVar15;
                bVar18 = uVar14 < uVar1;
                if (uVar14 <= uVar1) {
                  uVar14 = uVar1;
                }
                if (bVar18) {
                  puVar9 = puVar15;
                }
                puVar15 = puVar15 + 2;
              } while (puVar15 <= puVar11);
            }
            uVar2 = *(undefined8 *)puVar9;
            *(undefined8 *)puVar9 = *(undefined8 *)puVar11;
            *(undefined8 *)puVar11 = uVar2;
            puVar11 = puVar11 + -2;
          } while (puVar4 < puVar11);
        }
        goto LAB_146c81471;
      }
LAB_146c81486:
      FUN_146c81493(puVar4);
LAB_146c81471:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146c8139e:
  uVar2 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar4 = *(undefined8 *)puVar8;
  *(undefined8 *)puVar8 = uVar2;
  iVar13 = iVar13 + -1;
  puVar12 = puVar12 + -4;
  if ((longlong)puVar17 - (longlong)puVar9 < (longlong)puVar15 - (longlong)puVar16) {
    if (puVar5 < puVar11) {
      *plVar10 = (longlong)puVar5;
      plVar10[1] = (longlong)puVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar16 = puVar4;
    if (puVar8 <= puVar4 + 2) goto LAB_146c81471;
  }
  else {
    if (puVar4 + 2 < puVar8) {
      *plVar10 = (longlong)puVar4;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar4 = puVar5;
    puVar12 = puVar11;
    puVar17 = puVar11;
    if (puVar11 <= puVar5) goto LAB_146c81471;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar17 - (longlong)puVar16) >> 3);
  puVar9 = puVar16;
  puVar11 = puVar12;
  puVar15 = puVar17;
  if (iVar13 == 0) goto LAB_146c81486;
  goto LAB_146c81324;
}



// FUNCTION 146c81493 FUN_146c81493 body=297 status=ok
// SIG undefined FUN_146c81493(void)

void FUN_146c81493(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x000146c814b4:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && (*(uint *)(param_1 + iVar5) <= *(uint *)(param_1 + iVar6))) {
          iVar5 = iVar6;
        }
        if (*(uint *)(param_1 + iVar2) < *(uint *)(param_1 + iVar5)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x000146c814b4;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(uint *)(param_1 + iVar5) <= *(uint *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(uint *)(param_1 + iVar6) <= *(uint *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 146c815bc FUN_146c815bc body=1111 status=ok
// SIG undefined FUN_146c815bc(void)

void FUN_146c815bc(double *param_1,longlong param_2,char *param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  char cVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148;
  char *local_140;
  undefined4 local_138;
  char *local_130;
  double *local_128;
  double *local_120;
  char *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong local_d8;
  double *pdStack_d0;
  undefined8 local_c8;
  code *local_b8;
  double **local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98 [2];
  double *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plStack_60 = (longlong *)0x0;
  uStack_58 = 0;
  uStack_70 = 0;
  puStack_68 = (undefined1 *)0x0;
  local_78 = CONCAT44(local_78._4_4_,1);
  *(undefined4 *)(param_1 + 0xb) = 1;
  FUN_146c8b436(param_1 + 0xc,&uStack_70);
  FUN_146c8b486(param_1 + 0xe,&plStack_60);
  FUN_146c81a14(&local_78);
  local_128 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) < 0) {
    FUN_146c7ec56(local_128,0);
  }
  if (*(int *)((longlong)param_1 + 0x9c) < 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    FUN_140cb0586(param_1 + 0x12,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  local_120 = param_1 + 0x14;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) < 0) {
    FUN_14481578e(local_120,0);
  }
  pdVar1 = param_1 + 0x16;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (*(int *)((longlong)param_1 + 0xbc) < 0) {
    FUN_1447a8aa0(pdVar1,0);
  }
  local_88 = param_1;
  local_80 = param_2;
  if (param_1[4] <= *param_1) {
    local_148 = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_158 = (undefined4 *)param_1[2];
    local_b0 = &local_88;
    local_b8 = FUN_1429854dc;
    local_150 = CONCAT44(local_150._4_4_,*(undefined4 *)(param_1 + 3));
    local_140 = param_3;
    FUN_142983726(param_2,&local_b8,FUN_1429854dc,*(undefined4 *)(param_1 + 1));
  }
  else {
    puStack_68 = (undefined1 *)0x0;
    plStack_60 = (longlong *)0x0;
    uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(param_1 + 10));
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 5));
    dVar3 = param_1[6];
    uVar19 = SUB84(dVar3,0);
    uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (10.0 <= dVar3) {
      uVar19 = 0;
      uVar20 = 0x40240000;
    }
    if ((double)CONCAT44(uVar20,uVar19) <= 1.0) {
      uVar19 = 0;
      uVar20 = 0x3ff00000;
    }
    uStack_70 = CONCAT44(uVar20,uVar19);
    if ((*(char *)(param_1 + 7) == '\x01') &&
       (*(int *)(param_1 + 9) == *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) {
      plStack_60 = &local_d8;
      puStack_68 = &LAB_142985448;
      local_138 = *(undefined4 *)((longlong)param_1 + 0x1c);
      local_148 = *(undefined4 *)(param_1 + 3);
      uVar20 = SUB84(param_1[2],0);
      uVar21 = (undefined4)((ulonglong)param_1[2] >> 0x20);
      uVar19 = *(undefined4 *)(param_1 + 1);
      puVar13 = local_98;
      local_d8 = param_2;
      pdStack_d0 = param_1;
    }
    else {
      local_138 = *(undefined4 *)((longlong)param_1 + 0x1c);
      local_148 = *(undefined4 *)(param_1 + 3);
      uVar20 = SUB84(param_1[2],0);
      uVar21 = (undefined4)((ulonglong)param_1[2] >> 0x20);
      uVar19 = *(undefined4 *)(param_1 + 1);
      puVar13 = local_a8;
    }
    puVar13[1] = &local_88;
    *puVar13 = FUN_1429854dc;
    local_150 = CONCAT44(uVar21,uVar20);
    local_158 = (undefined4 *)CONCAT44(local_158._4_4_,uVar19);
    local_140 = (char *)&local_78;
    local_130 = param_3;
    FUN_142982898(param_2);
  }
  if (*(char *)((longlong)param_1 + 0x55) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x11);
    local_118 = param_3;
    FUN_14051b394(pdVar1,iVar4,1);
    param_3 = local_118;
    if (0 < (longlong)iVar4) {
      lVar15 = 0;
      lVar18 = 0;
      lVar17 = 0;
      do {
        uVar5 = *(uint *)((longlong)*local_120 + lVar17 * 4);
        lVar6 = *(longlong *)(param_2 + 0x10);
        lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
        uVar14 = (ulonglong)uVar5 & 0x1ff;
        uVar5 = *(uint *)(lVar7 + uVar14 * 0xc);
        lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
        uVar16 = (ulonglong)uVar5 & 0x1ff;
        puStack_68 = *(undefined1 **)(lVar8 + 0x10 + uVar16 * 0x18);
        puVar13 = (undefined8 *)(lVar8 + uVar16 * 0x18);
        local_78 = *puVar13;
        uStack_70 = puVar13[1];
        uVar5 = *(uint *)(lVar7 + 4 + uVar14 * 0xc);
        lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
        uVar16 = (ulonglong)uVar5 & 0x1ff;
        local_c8 = *(undefined8 *)(lVar8 + 0x10 + uVar16 * 0x18);
        plVar12 = (longlong *)(lVar8 + uVar16 * 0x18);
        local_d8 = *plVar12;
        pdStack_d0 = (double *)plVar12[1];
        uVar5 = *(uint *)(lVar7 + 8 + uVar14 * 0xc);
        lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
        uVar14 = (ulonglong)uVar5 & 0x1ff;
        local_e8 = *(undefined8 *)(lVar6 + 0x10 + uVar14 * 0x18);
        puVar2 = (undefined4 *)(lVar6 + uVar14 * 0x18);
        local_f8 = *puVar2;
        uStack_f4 = puVar2[1];
        uStack_f0 = puVar2[2];
        uStack_ec = puVar2[3];
        local_158 = &local_f8;
        FUN_146c7de05(&local_110,(longlong)*local_128 + lVar15,&local_78,&local_d8);
        dVar3 = *pdVar1;
        *(undefined8 *)((longlong)dVar3 + 0x10 + lVar18) = local_100;
        puVar2 = (undefined4 *)((longlong)dVar3 + lVar18);
        *puVar2 = local_110;
        puVar2[1] = uStack_10c;
        puVar2[2] = uStack_108;
        puVar2[3] = uStack_104;
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 0x18;
        lVar15 = lVar15 + 0x38;
        param_3 = local_118;
      } while (iVar4 != lVar17);
    }
  }
  if (param_3 != (char *)0x0) {
    uVar19 = 2;
    if (*param_3 != '\0') goto LAB_146c819d2;
    pcVar9 = *(code **)(param_3 + 0x70);
    plVar12 = (longlong *)(param_3 + 0x90);
    if (*(longlong **)(param_3 + 0x80) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_3 + 0x80);
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    cVar10 = (*pcVar9)(uVar11);
    *param_3 = cVar10;
    if (cVar10 != '\0') goto LAB_146c819d2;
  }
  uVar19 = 0;
LAB_146c819d2:
  *(undefined4 *)(param_1 + 0xb) = uVar19;
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c81a14 FUN_146c81a14 body=72 status=ok
// SIG undefined FUN_146c81a14(void)

void FUN_146c81a14(longlong param_1)

{
  FUN_146c8b514(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_146c8b4d6(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c81a5c FUN_146c81a5c body=68 status=ok
// SIG undefined FUN_146c81a5c(void)

ulonglong FUN_146c81a5c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((ulonglong)uVar1 == 0) {
    return 0xffffffff;
  }
  uVar3 = 0;
  if (1 < (int)uVar1) {
    iVar4 = *(int *)(**(longlong **)(param_1 + 8) + 8);
    uVar3 = 0;
    uVar5 = 1;
    do {
      iVar2 = *(int *)((*(longlong **)(param_1 + 8))[uVar5] + 8);
      if (iVar4 < iVar2) {
        uVar3 = uVar5 & 0xffffffff;
        iVar4 = iVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return uVar3;
}



// FUNCTION 146c81aa0 FUN_146c81aa0 body=480 status=ok
// SIG undefined FUN_146c81aa0(void)

ulonglong FUN_146c81aa0(longlong *param_1,longlong *param_2,char param_3,char param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if ((param_4 != '\0') && ((longlong)(int)param_2[1] != 0)) {
    plVar4 = (longlong *)*param_2;
    plVar2 = plVar4 + (longlong)(int)param_2[1] * 2;
    do {
      if ((longlong)(int)plVar4[1] != 0) {
        lVar9 = *param_1;
        lVar7 = 0;
        do {
          uVar1 = *(uint *)(*plVar4 + lVar7);
          if ((((int)uVar1 < 0) ||
              (*(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144) <= (int)uVar1)) ||
             (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            (*(longlong *)(lVar9 + 0x148) +
                                            (ulonglong)(uVar1 >> 9) * 8) +
                                          (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) {
            uVar6 = 0;
            goto LAB_146c81c60;
          }
          lVar7 = lVar7 + 4;
        } while ((longlong)(int)plVar4[1] * 4 != lVar7);
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar2);
  }
  plVar4 = param_1 + 1;
  FUN_146be943e(plVar4);
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) < 0) {
    FUN_1447ab16c(plVar4,0);
  }
  iVar5 = (int)param_2[1];
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_1 + 0x14) < iVar5) {
    FUN_1447ab16c(plVar4);
    iVar5 = (int)param_2[1];
  }
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (iVar5 != 0) {
    puVar8 = (undefined8 *)*param_2;
    lVar9 = (longlong)iVar5 << 4;
    do {
      if (*(int *)(puVar8 + 1) != 0) {
        puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar3 = 0;
        puVar3[1] = 0;
        if (param_3 == '\0') {
          iVar5 = *(int *)(puVar8 + 1);
          if ((longlong)iVar5 != 0) {
            *(int *)(puVar3 + 1) = iVar5;
            FUN_1446f48e2(puVar3,0);
            memcpy((void *)*puVar3,(void *)*puVar8,(longlong)iVar5 << 2);
          }
        }
        else if (puVar8 != puVar3) {
          *puVar3 = *puVar8;
          *puVar8 = 0;
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar8 + 1);
          *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
          puVar8[1] = 0;
        }
        iVar5 = (int)param_1[2];
        *(uint *)(param_1 + 2) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x14) < iVar5 + 1U) {
          FUN_1456bd870(plVar4,iVar5);
        }
        *(undefined8 **)(*plVar4 + (longlong)iVar5 * 8) = puVar3;
      }
      puVar8 = puVar8 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
LAB_146c81c60:
  return uVar6 & 0xffffffff;
}



// FUNCTION 146c81c82 FUN_146c81c82 body=634 status=ok
// SIG undefined FUN_146c81c82(void)

void FUN_146c81c82(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_138 [40];
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  uint local_f8;
  uint local_f4 [3];
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8 [3];
  undefined4 local_c0;
  uint local_bc;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_4 == (longlong *)0x0) {
    param_4 = local_d8;
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  local_108 = param_1;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_14481578e(param_4,0);
  }
  FUN_146c81efe(param_4,param_2,0);
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  plVar8 = param_5;
  if (param_5 == (longlong *)0x0) {
    plVar8 = local_b8;
  }
  FUN_1402226aa(plVar8);
  local_e8 = *param_2;
  local_e0 = *(undefined4 *)(param_2 + 1);
  FUN_146bc855c(plVar8);
  uVar3 = *(uint *)(param_4 + 1);
  if (0 < (int)uVar3) {
    plVar6 = local_b8;
    if (param_5 != (longlong *)0x0) {
      plVar6 = param_5;
    }
    local_100 = plVar6 + 7;
    local_110 = param_3;
    do {
      plVar4 = local_110;
      uVar1 = *(undefined4 *)(*param_4 + -4 + (ulonglong)uVar3 * 4);
      *(uint *)(param_4 + 1) = uVar3 - 1;
      iVar5 = (int)local_110[1];
      *(uint *)(local_110 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)local_110 + 0xc) < iVar5 + 1U) {
        FUN_1446f48e2(local_110,iVar5);
      }
      *(undefined4 *)(*plVar4 + (longlong)iVar5 * 4) = uVar1;
      FUN_146c03f0e(local_108,local_f4,uVar1);
      lVar7 = 0;
      do {
        local_f8 = local_f4[lVar7];
        if (local_f8 != 0xffffffff) {
          if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
            plVar4 = (longlong *)plVar6[8];
            if ((longlong *)plVar6[8] == (longlong *)0x0) {
              plVar4 = local_100;
            }
            iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar6[9] - 1U & local_f8) * 4);
            if (iVar5 != -1) {
              do {
                if (*(uint *)(*plVar8 + (longlong)iVar5 * 0xc) == local_f8) goto LAB_146c81e37;
                iVar5 = *(int *)(*plVar8 + (longlong)iVar5 * 0xc + 4);
              } while (iVar5 != -1);
            }
          }
          local_c0 = uVar1;
          local_bc = local_f8;
          cVar2 = (*(code *)*param_6)(param_6[1],&local_c0,&local_bc);
          if (cVar2 != '\0') {
            iVar5 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
              FUN_1446f48e2(param_4,iVar5);
            }
            *(uint *)(*param_4 + (longlong)iVar5 * 4) = local_f8;
            FUN_1447cbafe(plVar8,&local_bc,&local_f8,0);
          }
        }
LAB_146c81e37:
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      uVar3 = *(uint *)(param_4 + 1);
    } while (0 < (int)uVar3);
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_b8);
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c81efe FUN_146c81efe body=136 status=ok
// SIG undefined FUN_146c81efe(void)

int FUN_146c81efe(longlong *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)(param_2 + 1);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1446f48e2(param_1,iVar2);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 4);
  memmove((void *)((longlong)_Src + (longlong)(int)uVar1 * 4),_Src,
          (ulonglong)(uint)(iVar2 - param_3) << 2);
  if (uVar1 != 0) {
    memcpy((void *)((longlong)param_3 * 4 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 2);
  }
  return param_3;
}



// FUNCTION 146c81f86 FUN_146c81f86 body=469 status=ok
// SIG undefined FUN_146c81f86(void)

void FUN_146c81f86(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint local_8c;
  uint local_88 [4];
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68 [3];
  undefined4 local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 == (longlong *)0x0) {
    param_4 = local_68;
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  local_98 = param_1;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_14481578e(param_4,0);
  }
  FUN_146c81efe(param_4,param_2,0);
  FUN_1402226aa(param_3);
  local_78 = *param_2;
  local_70 = *(undefined4 *)(param_2 + 1);
  FUN_146bc855c(param_3);
  uVar2 = *(uint *)(param_4 + 1);
  if (0 < (int)uVar2) {
    do {
      local_88[3] = *(undefined4 *)(*param_4 + -4 + (ulonglong)uVar2 * 4);
      *(uint *)(param_4 + 1) = uVar2 - 1;
      FUN_1447cbafe(param_3,local_88,local_88 + 3,0);
      FUN_146c03f0e(local_98,local_88,local_88[3]);
      lVar5 = 0;
      do {
        local_8c = local_88[lVar5];
        if (local_8c != 0xffffffff) {
          if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
            plVar3 = (longlong *)param_3[8];
            if ((longlong *)param_3[8] == (longlong *)0x0) {
              plVar3 = param_3 + 7;
            }
            iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_3[9] - 1U & local_8c) * 4);
            if (iVar4 != -1) {
              do {
                if (*(uint *)(*param_3 + (longlong)iVar4 * 0xc) == local_8c) goto LAB_146c820d5;
                iVar4 = *(int *)(*param_3 + (longlong)iVar4 * 0xc + 4);
              } while (iVar4 != -1);
            }
          }
          local_50 = local_88[3];
          local_4c = local_8c;
          cVar1 = (*(code *)*param_5)(param_5[1],&local_50,&local_4c);
          if (cVar1 != '\0') {
            iVar4 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
              FUN_1446f48e2(param_4,iVar4);
            }
            *(uint *)(*param_4 + (longlong)iVar4 * 4) = local_8c;
            FUN_1447cbafe(param_3,&local_4c,&local_8c,0);
          }
        }
LAB_146c820d5:
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      uVar2 = *(uint *)(param_4 + 1);
    } while (0 < (int)uVar2);
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c8215c FUN_146c8215c body=469 status=ok
// SIG undefined FUN_146c8215c(void)

void FUN_146c8215c(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  uint *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong **local_98;
  code *local_90;
  undefined4 **local_88;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  if (param_4 == (longlong *)0x0) {
    param_4 = local_68;
  }
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68[0] = 0;
  local_68[1] = 0;
  local_50 = param_4;
  puVar6 = (uint *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_14481578e(param_4,0);
  }
  FUN_146c81efe(param_4,param_2,0);
  FUN_1402226aa(param_3);
  local_78 = *param_2;
  local_70 = *(undefined4 *)(param_2 + 1);
  FUN_146bc855c(param_3);
  uVar4 = *puVar6;
  if (0 < (int)uVar4) {
    local_b8 = param_1 + 0xb8;
    do {
      local_7c = *(uint *)(*param_4 + -4 + (ulonglong)uVar4 * 4);
      *puVar6 = uVar4 - 1;
      FUN_1447cbafe(param_3,&local_b0,&local_7c,0);
      lVar3 = local_b8;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_7c >> 9) * 8);
      uVar5 = (ulonglong)((local_7c & 0x1ff) << 4);
      uVar1 = *(undefined4 *)(lVar2 + 4 + uVar5);
      local_a0 = param_5;
      local_90 = FUN_142985684;
      local_b0 = &local_7c;
      local_a8 = param_3;
      local_98 = &local_50;
      local_88 = &local_b0;
      FUN_146bd7d34(local_b8,*(undefined4 *)(lVar2 + uVar5),&local_90);
      local_b0 = &local_7c;
      local_a0 = param_5;
      local_88 = &local_b0;
      local_90 = FUN_142985684;
      local_a8 = param_3;
      local_98 = &local_50;
      FUN_146bd7d34(lVar3,uVar1,&local_90);
      puVar6 = (uint *)(local_50 + 1);
      uVar4 = *(uint *)(local_50 + 1);
      param_4 = local_50;
    } while (0 < (int)uVar4);
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c82332 FUN_146c82332 body=561 status=ok
// SIG undefined FUN_146c82332(void)

void FUN_146c82332(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  int local_a4;
  longlong local_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = param_2 + 0x18;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = local_a0;
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar7 = *(int *)(param_2 + 0x30);
  }
  local_b0 = (longlong *)(param_2 + 8);
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = local_b0;
  if ((iStack_5c != iVar7) || (uStack_68 != local_a0)) {
    local_a4 = iVar7;
    do {
      uVar1 = *(uint *)(*local_98 + (longlong)iStack_7c * 0xc);
      lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x180) + (ulonglong)(uVar1 >> 9) * 8);
      uStack_68 = CONCAT44(uStack_68._4_4_,
                           *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar1 & 0x1ff) * 0xc));
      local_70 = *(undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
      lVar6 = 0;
      do {
        uVar2 = *(uint *)((longlong)&local_70 + lVar6 * 4);
        uVar3 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) + 8 +
                 (ulonglong)((uVar2 & 0x1ff) << 4));
        uVar4 = uVar3 >> 0x20;
        if (uVar1 != (uint)uVar3) {
          uVar4 = uVar3;
        }
        if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x3c)) {
          lVar5 = *(longlong *)(param_2 + 0x48);
          if (*(longlong *)(param_2 + 0x48) == 0) {
            lVar5 = param_2 + 0x40;
          }
          iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_2 + 0x50) - 1U & (uint)uVar4) * 4);
          if (iVar7 != -1) {
            do {
              if (*(uint *)(*local_b0 + (longlong)iVar7 * 0xc) == (uint)uVar4) goto LAB_146c82495;
              iVar7 = *(int *)(*local_b0 + (longlong)iVar7 * 0xc + 4);
            } while (iVar7 != -1);
          }
        }
        local_4c = uVar2;
        FUN_1447cbafe(param_1 + 1,local_50,&local_4c,0);
LAB_146c82495:
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while ((CONCAT44(uStack_84,uStack_88) != local_a0 || iStack_7c != local_a4) ||
             local_98 != local_b0);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c82564 FUN_146c82564 body=1815 status=ok
// SIG undefined FUN_146c82564(void)

longlong * FUN_146c82564(longlong *param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_298 [32];
  longlong *local_278;
  int local_26c;
  longlong *local_268;
  longlong *local_260;
  longlong *local_258;
  longlong local_250;
  longlong *local_248;
  undefined4 local_240;
  uint uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  ulonglong uStack_228;
  undefined1 local_220 [4];
  undefined4 local_21c;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  *param_1 = param_2;
  local_278 = param_1 + 1;
  uVar16 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  uVar13 = 3;
  if ((int)param_4 < 3) {
    uVar13 = param_4;
  }
  uVar17 = 1;
  if (1 < (int)uVar13) {
    uVar17 = uVar13;
  }
  if ((int)param_4 < 2) {
    lVar10 = param_3 + 0x18;
    local_178 = (code *)0x100000000;
    local_168 = 0xffffffff;
    uStack_160 = uStack_160 & 0xffffffff00000000;
    uStack_170 = lVar10;
    if (*(int *)(param_3 + 0x30) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_178);
      iVar8 = *(int *)(param_3 + 0x30);
    }
    plVar9 = (longlong *)(param_3 + 8);
    local_230 = local_168;
    uVar4 = local_230;
    uStack_228 = uStack_160;
    local_240 = (undefined4)local_178;
    uStack_23c = local_178._4_4_;
    uStack_238 = (int)uStack_170;
    uStack_234 = uStack_170._4_4_;
    local_230._4_4_ = (int)((ulonglong)local_168 >> 0x20);
    local_248 = plVar9;
    if ((local_230._4_4_ != iVar8) || (uStack_170 != lVar10)) {
      local_260 = local_198;
      local_258 = local_f8;
      iVar7 = local_230._4_4_;
      local_26c = iVar8;
      local_250 = lVar10;
      local_230 = uVar4;
LAB_146c826aa:
      uStack_148 = *(undefined4 *)(*local_248 + (longlong)iVar7 * 0xc);
      local_150 = *param_1;
      local_168 = 0;
      local_158 = &PTR_LAB_149f3aae0;
      local_178 = FUN_146be9588;
      local_218 = local_150 + 0xb8;
      uStack_210 = CONCAT44(uStack_210._4_4_,uStack_148);
      FUN_146be94ac(local_d8,&local_218,&local_178);
      local_128 = 0xffffffffffffffff;
      local_118[0] = 0;
      local_108 = (longlong *)0x0;
      local_158 = (undefined **)local_78;
      local_168 = local_88;
      uStack_160 = uStack_80;
      local_178 = (code *)local_98;
      uStack_170 = lStack_90;
      uStack_148 = uStack_68;
      uStack_144 = uStack_64;
      local_140 = local_60;
      uStack_13c = uStack_5c;
      uStack_138 = uStack_58;
      uStack_134 = uStack_54;
      local_130 = local_50;
      FUN_146be971a(local_118,local_d8);
      local_11c = 0;
      FUN_146bfd1f0(&local_178);
      local_1c8 = 0xffffffffffffffff;
      local_1b8[0] = 0;
      local_1a8 = (longlong *)0x0;
      local_1f8 = local_50;
      local_218 = CONCAT44(uStack_6c,local_70);
      uStack_210 = CONCAT44(uStack_64,uStack_68);
      uStack_200 = CONCAT44(uStack_54,uStack_58);
      local_1f0 = local_70;
      uStack_1ec = uStack_6c;
      uStack_1e8 = uStack_68;
      uStack_1e4 = uStack_64;
      local_1e0 = local_60;
      uStack_1dc = uStack_5c;
      uStack_1d8 = uStack_58;
      uStack_1d4 = uStack_54;
      local_1d0 = local_50;
      FUN_146be971a(local_1b8,local_d8);
      local_1bc = 0;
      plVar5 = &local_218;
      do {
        FUN_146bfd1f0(plVar5);
        if (local_178 == (code *)local_218) {
          if ((int)uStack_170 == (int)uStack_210) {
            if ((int)uStack_160 == (int)uStack_200) {
              if (uStack_160._4_4_ == uStack_200._4_4_) goto LAB_146c828a7;
            }
          }
        }
        local_21c = local_120;
        FUN_1447cbafe(local_278,local_220,&local_21c,0);
        plVar5 = &local_178;
      } while( true );
    }
  }
  else {
    uVar13 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    if ((uVar13 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar16 = 1;
      uVar1 = 1;
      if (1 < (int)uVar13) {
        uVar16 = (ulonglong)uVar13;
      }
      do {
        uVar15 = uVar1;
        if ((uint)uVar16 == uVar15) goto LAB_146c82990;
        uVar1 = uVar15 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar15 >> 9] +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      uVar16 = (ulonglong)uVar15;
    }
LAB_146c82990:
    uVar4 = local_230;
    if ((uint)uVar16 != uVar13) {
      local_268 = param_1;
      do {
        uVar14 = (uint)uVar16;
        uVar6 = (ulonglong)(uVar14 & 0x1ff);
        lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (uVar16 >> 9) * 8);
        uVar1 = *(uint *)(lVar10 + uVar6 * 0xc);
        uVar15 = *(uint *)(lVar10 + 4 + uVar6 * 0xc);
        uVar2 = *(uint *)(lVar10 + 8 + uVar6 * 0xc);
        if (param_4 == 2) {
          iVar7 = 0;
          iVar8 = 0;
          if (*(int *)(param_3 + 0x10) != *(int *)(param_3 + 0x3c)) {
            lVar10 = *(longlong *)(param_3 + 0x48);
            if (*(longlong *)(param_3 + 0x48) == 0) {
              lVar10 = param_3 + 0x40;
            }
            uVar11 = *(int *)(param_3 + 0x50) - 1;
            iVar8 = *(int *)(lVar10 + (ulonglong)(uVar11 & uVar1) * 4);
            iVar7 = 0;
            iVar12 = 0;
            if (iVar8 != -1) {
              do {
                if (*(uint *)(*(longlong *)(param_3 + 8) + (longlong)iVar8 * 0xc) == uVar1) {
                  iVar12 = 1;
                  goto LAB_146c82b47;
                }
                iVar8 = *(int *)(*(longlong *)(param_3 + 8) + (longlong)iVar8 * 0xc + 4);
              } while (iVar8 != -1);
              iVar12 = 0;
            }
LAB_146c82b47:
            iVar8 = *(int *)(lVar10 + (ulonglong)(uVar11 & uVar15) * 4);
            if (iVar8 != -1) {
              do {
                if (*(uint *)(*(longlong *)(param_3 + 8) + (longlong)iVar8 * 0xc) == uVar15) {
                  iVar7 = 1;
                  break;
                }
                iVar8 = *(int *)(*(longlong *)(param_3 + 8) + (longlong)iVar8 * 0xc + 4);
              } while (iVar8 != -1);
            }
            iVar7 = iVar7 + iVar12;
            iVar12 = *(int *)(lVar10 + (ulonglong)(uVar11 & uVar2) * 4);
            param_1 = local_268;
            iVar8 = 0;
            if (iVar12 != -1) {
              do {
                if (*(uint *)(*(longlong *)(param_3 + 8) + (longlong)iVar12 * 0xc) == uVar2) {
                  iVar8 = 1;
                  break;
                }
                iVar12 = *(int *)(*(longlong *)(param_3 + 8) + (longlong)iVar12 * 0xc + 4);
                iVar8 = 0;
              } while (iVar12 != -1);
            }
          }
          if (uVar17 <= (uint)(iVar7 + iVar8)) {
LAB_146c82a22:
            local_178 = (code *)CONCAT44(local_178._4_4_,uVar14);
            FUN_1447cbafe(local_278,&local_218,&local_178,0);
          }
        }
        else if (*(int *)(param_3 + 0x10) != *(int *)(param_3 + 0x3c)) {
          lVar10 = *(longlong *)(param_3 + 0x48);
          if (*(longlong *)(param_3 + 0x48) == 0) {
            lVar10 = param_3 + 0x40;
          }
          uVar11 = *(int *)(param_3 + 0x50) - 1;
          iVar8 = *(int *)(lVar10 + (ulonglong)(uVar11 & uVar1) * 4);
          if (iVar8 != -1) {
            lVar3 = *(longlong *)(param_3 + 8);
            do {
              if (*(uint *)(lVar3 + (longlong)iVar8 * 0xc) == uVar1) {
                iVar8 = *(int *)(lVar10 + (ulonglong)(uVar11 & uVar15) * 4);
                goto LAB_146c82b7f;
              }
              iVar8 = *(int *)(lVar3 + (longlong)iVar8 * 0xc + 4);
            } while (iVar8 != -1);
          }
        }
LAB_146c82a52:
        uVar1 = uVar14 + 1;
        if ((int)(uVar14 + 1) < (int)uVar13) {
          uVar1 = uVar13;
        }
        do {
          if (uVar1 - 1 == (int)uVar16) {
            uVar16 = (ulonglong)uVar1;
            break;
          }
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar15 >> 9) * 8) +
                                             (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
        uVar4 = local_230;
      } while ((uint)uVar16 != uVar13);
    }
  }
LAB_146c82995:
  local_230 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_146c82b7f:
  if (iVar8 == -1) goto LAB_146c82a52;
  if (*(uint *)(lVar3 + (longlong)iVar8 * 0xc) == uVar15) {
    iVar8 = *(int *)(lVar10 + (ulonglong)(uVar11 & uVar2) * 4);
    goto LAB_146c82c0a;
  }
  iVar8 = *(int *)(lVar3 + (longlong)iVar8 * 0xc + 4);
  goto LAB_146c82b7f;
LAB_146c82c0a:
  if (iVar8 == -1) goto LAB_146c82a52;
  if (*(uint *)(lVar3 + (longlong)iVar8 * 0xc) == uVar2) goto LAB_146c82a22;
  iVar8 = *(int *)(lVar3 + (longlong)iVar8 * 0xc + 4);
  goto LAB_146c82c0a;
LAB_146c828a7:
  if (local_1b8[0] != 0) {
    plVar5 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar5 = local_260;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  lVar10 = local_250;
  if (local_118[0] != 0) {
    plVar5 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar5 = local_258;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_d8[0] != 0) {
    plVar5 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar5 = local_b8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_230 = CONCAT44(local_230._4_4_,(uint)local_230 & ~uStack_23c);
  FUN_1449c0562(&local_240);
  iVar7 = local_230._4_4_;
  uVar4 = local_230;
  if ((CONCAT44(uStack_234,uStack_238) == lVar10 && local_230._4_4_ == local_26c) &&
      local_248 == plVar9) goto LAB_146c82995;
  goto LAB_146c826aa;
}



// FUNCTION 146c82c7c FUN_146c82c7c body=1143 status=ok
// SIG undefined FUN_146c82c7c(void)

void FUN_146c82c7c(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  longlong *local_138;
  ulonglong local_130;
  longlong *local_128;
  code *local_120;
  undefined8 *local_118;
  char local_10a;
  char local_109;
  undefined8 local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_ac [5];
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar4 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar5 = param_1 + 1;
  local_138 = param_1 + 3;
  local_d0 = 0x100000000;
  local_c0 = (longlong *)&DAT_ffffffff;
  local_b8 = 0;
  local_c8 = local_138;
  if ((int)param_1[6] != 0) {
    FUN_1449c0562(&local_d0);
    uVar4 = (ulonglong)*(uint *)(param_1 + 6);
  }
  local_e0 = local_c0;
  plVar2 = local_e0;
  local_d8 = local_b8;
  local_d4 = local_b4;
  local_f0 = local_d0;
  local_e8 = local_c8;
  local_e0._4_4_ = (int)((ulonglong)local_c0 >> 0x20);
  if ((local_e0._4_4_ != (int)uVar4) || (local_c8 != local_138)) {
    iVar3 = local_e0._4_4_;
    local_130 = uVar4;
    local_128 = plVar5;
    local_f8 = plVar5;
    local_e0 = plVar2;
    do {
      uVar1 = *(uint *)(*local_f8 + (longlong)iVar3 * 0xc);
      lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x180) + (ulonglong)(uVar1 >> 9) * 8);
      uVar4 = (ulonglong)(uVar1 & 0x1ff);
      local_100 = *(undefined4 *)(lVar6 + 8 + uVar4 * 0xc);
      local_108 = *(undefined8 *)(lVar6 + uVar4 * 0xc);
      local_ac[3] = 0;
      local_ac[4] = 3;
      lVar6 = 0;
      do {
        uVar1 = *(uint *)((longlong)&local_108 + lVar6 * 4);
        FUN_146c830f4(param_1,&local_10a,uVar1);
        if (local_10a != local_109) {
          local_d0 = *(undefined8 *)
                      (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8)
                      + (ulonglong)((uVar1 & 0x1ff) << 4));
          FUN_146c90f72(local_ac,&local_d0);
          FUN_146c90f72(local_ac,(longlong)&local_d0 + 4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      lVar6 = (longlong)local_ac[3];
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          local_120 = FUN_142985774;
          local_118 = &local_d0;
          local_d0 = param_2;
          local_c8 = param_1;
          local_c0 = local_98;
          FUN_146c03fd0(*param_1,*(undefined4 *)((longlong)local_ac + lVar7),&local_120);
          lVar7 = lVar7 + 4;
        } while (lVar6 * 4 != lVar7);
      }
      local_e0 = (longlong *)CONCAT44(local_e0._4_4_,(uint)local_e0 & ~local_f0._4_4_);
      FUN_1449c0562(&local_f0);
      plVar5 = local_128;
      iVar3 = local_e0._4_4_;
    } while (local_f8 != local_128 || (local_e8 != local_138 || local_e0._4_4_ != (int)local_130));
    local_c8 = (longlong *)local_88;
    local_d0 = 0x100000000;
    local_c0._0_4_ = 0xffffffff;
    local_c0._4_4_ = 0;
    local_b8 = 0;
    if (local_70 != 0) {
      FUN_1449c0562(&local_d0);
      iVar3 = local_70;
      goto LAB_146c82dd9;
    }
  }
  local_c8 = (longlong *)local_88;
  local_b8 = 0;
  local_c0._0_4_ = 0xffffffff;
  local_c0._4_4_ = 0;
  local_d0 = 0x100000000;
  iVar3 = 0;
LAB_146c82dd9:
  local_e0._0_4_ = (uint)local_c0;
  local_e0._4_4_ = local_c0._4_4_;
  local_d8 = local_b8;
  local_d4 = local_b4;
  local_f0 = local_d0;
  local_e8 = local_c8;
  local_f8 = local_98;
  if ((local_c0._4_4_ != iVar3) || (local_c8 != (longlong *)local_88)) {
    do {
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(*local_f8 + (longlong)local_e0._4_4_ * 0xc)
                         );
      FUN_1447cbafe(plVar5,local_ac,&local_d0,0);
      local_e0._0_4_ = (uint)local_e0 & ~local_f0._4_4_;
      FUN_1449c0562(&local_f0);
    } while (local_f8 != local_98 || (local_e8 != (longlong *)local_88 || local_e0._4_4_ != iVar3));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_98);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c830f4 FUN_146c830f4 body=289 status=ok
// SIG undefined FUN_146c830f4(void)

void FUN_146c830f4(longlong *param_1,undefined1 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  bool bVar11;
  
  if (((int)param_3 < 0) ||
     (lVar1 = *param_1, *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4) <= (int)param_3))
  {
LAB_146c8316e:
    uVar5 = 0;
  }
  else {
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)(param_3 >> 9) * 8)
                                    + (ulonglong)(param_3 & 0x1ff) * 2) - 1U)) goto LAB_146c8316e;
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x1c0) + (ulonglong)(param_3 >> 9) * 8) + 8 +
             (ulonglong)((param_3 & 0x1ff) << 4));
    uVar8 = (uint)((ulonglong)uVar2 >> 0x20);
    if ((int)param_1[2] == *(int *)((longlong)param_1 + 0x3c)) {
      uVar5 = 1;
      uVar4 = 1;
      if (uVar8 == 0xffffffff) goto LAB_146c83172;
      goto LAB_146c8316e;
    }
    plVar9 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[9];
    }
    uVar6 = (int)param_1[10] - 1;
    uVar10 = (uint)uVar2;
    iVar7 = *(int *)((longlong)plVar9 + (ulonglong)(uVar6 & uVar10) * 4);
    uVar5 = 1;
    bVar3 = true;
    if (iVar7 != -1) {
      do {
        bVar11 = *(uint *)(param_1[1] + (longlong)iVar7 * 0xc) == uVar10;
        bVar3 = !bVar11;
        if (bVar11) break;
        iVar7 = *(int *)(param_1[1] + (longlong)iVar7 * 0xc + 4);
      } while (iVar7 != -1);
    }
    if (uVar8 == 0xffffffff) {
      uVar4 = 1;
      goto LAB_146c83172;
    }
    iVar7 = *(int *)((longlong)plVar9 + (ulonglong)(uVar6 & uVar8) * 4);
    uVar5 = 1;
    if (iVar7 != -1) {
      do {
        if (*(uint *)(param_1[1] + (longlong)iVar7 * 0xc) == uVar8) {
          if (bVar3) goto LAB_146c83170;
          goto LAB_146c8316e;
        }
        iVar7 = *(int *)(param_1[1] + (longlong)iVar7 * 0xc + 4);
      } while (iVar7 != -1);
    }
    if (bVar3) goto LAB_146c8316e;
  }
LAB_146c83170:
  uVar4 = 0;
LAB_146c83172:
  *param_2 = uVar5;
  param_2[1] = uVar4;
  return;
}



// FUNCTION 146c83216 FUN_146c83216 body=619 status=ok
// SIG undefined FUN_146c83216(void)

void FUN_146c83216(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_118 [40];
  uint *local_f0;
  uint *local_e8;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  longlong *local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  longlong *local_b0;
  code *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [3];
  int aiStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_118;
  if (param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)local_118);
  }
  local_78[2] = 0;
  aiStack_60[0] = 0;
  aiStack_60[1] = 0;
  local_d0 = param_1 + 1;
  FUN_140619b9c(local_d0,&local_88);
  aiStack_60[2] = local_88;
  aiStack_60[3] = uStack_84;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  FUN_146c834a0();
  if (0 < (int)param_2) {
    uVar4 = 0;
    uVar2 = 1;
    uVar6 = 0;
    local_dc = param_2;
    do {
      uVar3 = (ulonglong)uVar6;
      plVar7 = local_78 + uVar3 * 2 + 2;
      aiStack_60[uVar3 * 4] = 0;
      local_d4 = uVar6;
      local_c8 = uVar4;
      if (aiStack_60[uVar3 * 4 + 1] != 0) {
        FUN_14481578e(plVar7,0);
      }
      local_d8 = uVar2;
      if ((longlong)aiStack_60[(ulonglong)uVar2 * 4] != 0) {
        local_f0 = (uint *)local_78[(ulonglong)uVar2 * 2 + 2];
        local_e8 = local_f0 + aiStack_60[(ulonglong)uVar2 * 4];
        do {
          lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*local_f0 >> 9) * 8);
          uVar4 = (ulonglong)(*local_f0 & 0x1ff);
          local_90 = *(undefined4 *)(lVar8 + 8 + uVar4 * 0xc);
          local_98 = *(undefined8 *)(lVar8 + uVar4 * 0xc);
          lVar8 = 0;
          do {
            local_a8 = FUN_14298584e;
            local_c0 = param_3;
            local_b8 = &local_88;
            local_b0 = plVar7;
            local_a0 = &local_c0;
            FUN_146c03fd0(*param_1,*(undefined4 *)((longlong)&local_98 + lVar8 * 4),&local_a8);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 3);
          local_f0 = local_f0 + 1;
        } while (local_f0 != local_e8);
      }
      plVar1 = local_d0;
      local_f0 = (uint *)(longlong)aiStack_60[uVar3 * 4];
      if (local_f0 != (uint *)0x0) {
        local_e8 = (uint *)*plVar7;
        local_f0 = (uint *)((longlong)local_f0 << 2);
        lVar8 = 0;
        do {
          local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)((longlong)local_e8 + lVar8));
          FUN_1447cbafe(plVar1,&local_98,&local_c0,0);
          lVar8 = lVar8 + 4;
        } while (local_f0 != (uint *)lVar8);
      }
      uVar5 = (int)local_c8 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar2 = local_d4;
      uVar6 = local_d8;
    } while (uVar5 != local_dc);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  lVar8 = 0x20;
  do {
    if (*(longlong *)((longlong)local_78 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != 0);
  if ((local_48 ^ (ulonglong)local_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c834a0 FUN_146c834a0 body=497 status=ok
// SIG undefined FUN_146c834a0(void)

void * FUN_146c834a0(longlong *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar8 = *(int *)(*param_1 + 0x144);
  iVar5 = *(int *)(*param_1 + 0x140) * 0x200;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x80;
  *(int *)((longlong)param_2 + 0x18) = iVar5 + iVar8;
  uVar7 = iVar5 + iVar8 + 0x1f;
  if (uVar7 < 0x20) goto LAB_146c834f5;
  pvVar6 = param_2;
  if (uVar7 < 0xa0) {
LAB_146c83645:
    uVar7 = uVar7 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(param_2,0,uVar7 >> 5,4);
    *(uint *)((longlong)param_2 + 0x1c) = uVar7 & 0xffffffe0;
    pvVar6 = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      pvVar6 = param_2;
    }
    if (uVar7 < 0x120) goto LAB_146c83645;
    uVar7 = (uVar7 >> 5) << 2;
  }
  memset(pvVar6,0,(ulonglong)uVar7);
  iVar8 = *(int *)((longlong)param_2 + 0x18);
  iVar5 = iVar8 + 0x1f;
  if (-1 < iVar8) {
    iVar5 = iVar8;
  }
  if (iVar8 % 0x20 != 0) {
    pvVar6 = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      pvVar6 = param_2;
    }
    bVar4 = -(char)(iVar8 % 0x20);
    *(uint *)((longlong)pvVar6 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
         (bVar4 & 0x1f);
  }
LAB_146c834f5:
  plVar1 = param_1 + 1;
  plVar2 = param_1 + 3;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar2;
  if ((int)param_1[6] == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar8 = (int)param_1[6];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar8) || (uStack_48 != plVar2)) {
    do {
      iVar5 = *(int *)(*local_78 + (longlong)iStack_5c * 0xc);
      pvVar6 = *(void **)((longlong)param_2 + 0x10);
      if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
        pvVar6 = param_2;
      }
      iVar9 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar9 = iVar5;
      }
      puVar3 = (uint *)((longlong)pvVar6 + (longlong)(iVar9 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)iVar5 & 0x1f);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar2 || iStack_5c != iVar8));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c83692 FUN_146c83692 body=1117 status=ok
// SIG undefined FUN_146c83692(void)

void FUN_146c83692(longlong *param_1,uint param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_158 [47];
  char local_129;
  longlong *local_128;
  uint local_11c;
  undefined8 local_118;
  ulonglong local_110;
  code *local_108;
  undefined8 *local_100;
  undefined1 local_f4 [4];
  undefined8 local_f0;
  char local_e2;
  char local_e1;
  longlong *local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98 [4];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar6 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_11c = param_2;
  if (0 < (int)param_2) {
    plVar1 = param_1 + 1;
    local_128 = param_1 + 3;
    local_129 = param_3;
    local_118 = param_4;
    do {
      cVar2 = local_129;
      local_110 = uVar6;
      FUN_1402226aa(local_98);
      local_b8 = 0x100000000;
      uStack_b0 = local_128;
      local_a8._0_4_ = 0xffffffff;
      local_a8._4_4_ = 0;
      uStack_a0 = 0;
      if ((int)param_1[6] == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_b8);
        iVar7 = (int)param_1[6];
      }
      uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
      local_c8._0_4_ = (uint)local_a8;
      local_c8._4_4_ = local_a8._4_4_;
      local_d8 = (undefined4)local_b8;
      uStack_d4 = local_b8._4_4_;
      uStack_d0 = (undefined4)uStack_b0;
      uStack_cc = uStack_b0._4_4_;
      local_e0 = plVar1;
      if ((local_a8._4_4_ != iVar7) || (uStack_b0 != local_128)) {
        do {
          uVar9 = *(uint *)(*local_e0 + (longlong)local_c8._4_4_ * 0xc);
          lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0x180) + (ulonglong)(uVar9 >> 9) * 8);
          uVar6 = (ulonglong)(uVar9 & 0x1ff);
          uStack_b0 = (longlong *)CONCAT44(uStack_b0._4_4_,*(undefined4 *)(lVar8 + 8 + uVar6 * 0xc))
          ;
          local_b8 = *(undefined8 *)(lVar8 + uVar6 * 0xc);
          lVar8 = 0;
          do {
            uVar9 = *(uint *)((longlong)&local_b8 + lVar8 * 4);
            FUN_146c830f4(param_1,&local_e2,uVar9);
            if ((local_e2 == '\x01') && ((cVar2 != '\0' || (local_e1 == '\0')))) {
              local_f0 = *(undefined8 *)
                          (*(longlong *)
                            (*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) +
                          (ulonglong)((uVar9 & 0x1ff) << 4));
              FUN_1447cbafe(local_98,local_f4,&local_f0,0);
              FUN_1447cbafe(local_98,local_f4,(longlong)&local_f0 + 4);
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 3);
          local_c8._0_4_ = (uint)local_c8 & ~uStack_d4;
          FUN_1449c0562(&local_d8);
        } while (local_e0 != plVar1 ||
                 ((longlong *)CONCAT44(uStack_cc,uStack_d0) != local_128 || local_c8._4_4_ != iVar7)
                );
      }
      local_b8 = 0x100000000;
      uStack_b0 = local_98 + 2;
      local_a8 = 0xffffffff;
      uStack_a0 = 0;
      if (local_70 == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_b8);
        iVar7 = local_70;
      }
      uVar3 = local_118;
      uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
      local_c8 = local_a8;
      uVar4 = local_c8;
      local_d8 = (undefined4)local_b8;
      uStack_d4 = local_b8._4_4_;
      uStack_d0 = (undefined4)uStack_b0;
      uStack_cc = uStack_b0._4_4_;
      local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      iVar5 = local_c8._4_4_;
      local_e0 = local_98;
      if ((local_c8._4_4_ != iVar7) || (local_c8 = uVar4, uStack_b0 != local_98 + 2)) {
        do {
          local_c8 = uVar4;
          local_b8 = uVar3;
          local_108 = FUN_14298592e;
          local_100 = &local_b8;
          uStack_b0 = param_1;
          FUN_146c03fd0(*param_1,*(undefined4 *)(*local_e0 + (longlong)iVar5 * 0xc),&local_108);
          local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~uStack_d4);
          FUN_1449c0562(&local_d8);
          iVar5 = local_c8._4_4_;
          uVar4 = local_c8;
        } while (local_e0 != local_98 ||
                 ((longlong *)CONCAT44(uStack_cc,uStack_d0) != local_98 + 2 ||
                 local_c8._4_4_ != iVar7));
      }
      uVar9 = (int)local_110 + 1;
      uVar6 = (ulonglong)uVar9;
    } while (uVar9 != local_11c);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a082e(local_98);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c83af0 FUN_146c83af0 body=501 status=ok
// SIG undefined FUN_146c83af0(void)

longlong * FUN_146c83af0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = param_2;
  param_1[5] = 0;
  iVar8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  lVar1 = param_3 + 0x18;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  local_68 = lVar1;
  if (*(int *)(param_3 + 0x30) != 0) {
    FUN_1449c0562(&local_70);
    iVar8 = *(int *)(param_3 + 0x30);
  }
  plVar2 = param_1 + 1;
  local_a0 = (longlong *)(param_3 + 8);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_78 = local_58;
  local_74 = local_54;
  local_90 = local_70;
  local_88 = local_68;
  local_98 = local_a0;
  if ((iStack_5c != iVar8) || (local_68 != lVar1)) {
    do {
      uVar3 = *(uint *)(*local_98 + (longlong)iStack_7c * 0xc);
      lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
      uVar7 = (ulonglong)(uVar3 & 0x1ff);
      uVar4 = *(undefined4 *)(lVar6 + 4 + uVar7 * 0xc);
      uVar5 = *(undefined4 *)(lVar6 + 8 + uVar7 * 0xc);
      local_70._0_4_ = *(undefined4 *)(lVar6 + uVar7 * 0xc);
      FUN_1447cbafe(plVar2,local_4c,&local_70,0);
      local_70._0_4_ = uVar4;
      FUN_1447cbafe(plVar2,local_4c,&local_70);
      local_70 = CONCAT44(local_70._4_4_,uVar5);
      FUN_1447cbafe(plVar2,local_4c,&local_70);
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while ((local_88 != lVar1 || iStack_7c != iVar8) || local_98 != local_a0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146c83ce6 FUN_146c83ce6 body=431 status=ok
// SIG undefined FUN_146c83ce6(void)

void FUN_146c83ce6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_2 + 0x18;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = lVar1;
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar8 = *(int *)(param_2 + 0x30);
  }
  local_98 = (longlong *)(param_2 + 8);
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  if ((iStack_5c != iVar8) || (uStack_68 != lVar1)) {
    plVar2 = param_1 + 1;
    local_a8 = plVar2;
    local_a0 = local_98;
    do {
      uVar3 = *(uint *)(*local_98 + (longlong)iStack_7c * 0xc);
      lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
      uVar7 = (ulonglong)(uVar3 & 0x1ff);
      uVar4 = *(undefined4 *)(lVar6 + 4 + uVar7 * 0xc);
      uVar5 = *(undefined4 *)(lVar6 + 8 + uVar7 * 0xc);
      local_70._0_4_ = *(undefined4 *)(lVar6 + uVar7 * 0xc);
      FUN_1447cbafe(plVar2,local_4c,&local_70,0);
      local_70._0_4_ = uVar4;
      FUN_1447cbafe(plVar2,local_4c,&local_70,0);
      local_70 = CONCAT44(local_70._4_4_,uVar5);
      FUN_1447cbafe(plVar2,local_4c,&local_70,0);
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while ((CONCAT44(uStack_84,uStack_88) != lVar1 || iStack_7c != iVar8) || local_98 != local_a0)
    ;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c83e96 FUN_146c83e96 body=123 status=ok
// SIG undefined FUN_146c83e96(void)

void FUN_146c83e96(longlong param_1,char param_2,char param_3)

{
  int iVar1;
  
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_146c90ff2(param_1);
    }
    FUN_1407058ce(param_1 + 0x10);
  }
  if (param_3 == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  FUN_145a454f1(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_146c91022(param_1 + 0x60);
  }
  FUN_1407058ce(param_1 + 0x70);
  return;
}



// FUNCTION 146c83f12 FUN_146c83f12 body=190 status=ok
// SIG undefined FUN_146c83f12(void)

void FUN_146c83f12(longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  int local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  int *local_50;
  undefined1 local_48 [4];
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = *(undefined8 *)(param_3 + 4);
  local_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  local_5c = param_2;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_146c91052(param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar2 * 0x20;
  *(undefined4 *)(lVar3 + lVar4) = param_2;
  puVar1 = (undefined4 *)(lVar3 + 4 + lVar4);
  *puVar1 = uStack_44;
  puVar1[1] = local_40;
  puVar1[2] = uStack_3c;
  puVar1[3] = uStack_38;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = uStack_38;
  puVar1[1] = uStack_34;
  puVar1[2] = (undefined4)local_30;
  puVar1[3] = local_30._4_4_;
  local_50 = &local_60;
  local_58 = &local_5c;
  local_60 = iVar2;
  FUN_140263e2a(param_1 + 2,local_48,&local_58,0);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c83fd2 FUN_146c83fd2 body=588 status=ok
// SIG undefined FUN_146c83fd2(void)

void FUN_146c83fd2(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_e8 [40];
  int local_c0;
  undefined4 local_bc;
  undefined4 *local_b8;
  int *local_b0;
  undefined1 local_a4 [4];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar3 + 1U;
  local_bc = param_2;
  if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
    FUN_146c910d8(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar5 = (longlong)iVar3 * 0x48;
  *(undefined4 *)(lVar4 + lVar5) = 0;
  puVar2 = (undefined8 *)(lVar4 + 8 + lVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar4 + 0x18 + lVar5) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar4 + 0x20 + lVar5) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar4 + 0x28 + lVar5) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar4 + 0x30 + lVar5) = 0xffefffffffffffff;
  *(undefined8 *)(lVar4 + 0x38 + lVar5) = 0xffefffffffffffff;
  *(undefined8 *)(lVar4 + 0x40 + lVar5) = 0xffefffffffffffff;
  lVar4 = *plVar1 + lVar5;
  *(undefined4 *)(lVar5 + *plVar1) = param_2;
  local_c0 = iVar3;
  FUN_1405b70a4();
  if ((longlong)(int)param_3[1] < 1) {
    dVar10 = 1.79769313486232e+308;
    dVar9 = -1.79769313486232e+308;
    dVar7 = -1.79769313486232e+308;
    dVar8 = -1.79769313486232e+308;
    dVar12 = 1.79769313486232e+308;
    dVar11 = 1.79769313486232e+308;
  }
  else {
    lVar5 = *param_3;
    uVar17 = 0xffffffff;
    uVar18 = 0xffefffff;
    uVar13 = 0xffffffff;
    uVar14 = 0x7fefffff;
    lVar6 = 0;
    uVar15 = uVar13;
    uVar16 = uVar14;
    uVar19 = uVar13;
    uVar20 = uVar14;
    uVar21 = uVar17;
    uVar22 = uVar18;
    uVar23 = uVar17;
    uVar24 = uVar18;
    do {
      dVar8 = *(double *)(lVar5 + lVar6);
      dVar7 = *(double *)(lVar5 + 8 + lVar6);
      dVar11 = dVar8;
      if ((double)CONCAT44(uVar16,uVar15) <= dVar8) {
        dVar11 = (double)CONCAT44(uVar16,uVar15);
      }
      if (dVar8 <= (double)CONCAT44(uVar18,uVar17)) {
        dVar8 = (double)CONCAT44(uVar18,uVar17);
      }
      dVar12 = dVar7;
      if ((double)CONCAT44(uVar20,uVar19) <= dVar7) {
        dVar12 = (double)CONCAT44(uVar20,uVar19);
      }
      if (dVar7 <= (double)CONCAT44(uVar24,uVar23)) {
        dVar7 = (double)CONCAT44(uVar24,uVar23);
      }
      dVar9 = *(double *)(lVar5 + 0x10 + lVar6);
      dVar10 = dVar9;
      if ((double)CONCAT44(uVar14,uVar13) <= dVar9) {
        dVar10 = (double)CONCAT44(uVar14,uVar13);
      }
      if (dVar9 <= (double)CONCAT44(uVar22,uVar21)) {
        dVar9 = (double)CONCAT44(uVar22,uVar21);
      }
      lVar6 = lVar6 + 0x18;
      uVar15 = SUB84(dVar11,0);
      uVar16 = (undefined4)((ulonglong)dVar11 >> 0x20);
      uVar19 = SUB84(dVar12,0);
      uVar20 = (undefined4)((ulonglong)dVar12 >> 0x20);
      uVar13 = SUB84(dVar10,0);
      uVar14 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uVar17 = SUB84(dVar8,0);
      uVar18 = (undefined4)((ulonglong)dVar8 >> 0x20);
      uVar23 = SUB84(dVar7,0);
      uVar24 = (undefined4)((ulonglong)dVar7 >> 0x20);
      uVar21 = SUB84(dVar9,0);
      uVar22 = (undefined4)((ulonglong)dVar9 >> 0x20);
    } while ((longlong)(int)param_3[1] * 0x18 != lVar6);
  }
  *(double *)(lVar4 + 0x18) = dVar11;
  *(double *)(lVar4 + 0x20) = dVar12;
  *(double *)(lVar4 + 0x28) = dVar10;
  *(double *)(lVar4 + 0x30) = dVar8;
  *(double *)(lVar4 + 0x38) = dVar7;
  *(double *)(lVar4 + 0x40) = dVar9;
  local_b8 = &local_bc;
  local_b0 = &local_c0;
  FUN_140263e2a(param_1 + 0x70,local_a4,&local_b8,0);
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c84220 FUN_146c84220 body=433 status=ok
// SIG undefined FUN_146c84220(void)

void FUN_146c84220(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    plVar5 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[10];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0xb] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *plVar1 + (longlong)iVar4 * 0x10;
        if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x10) == param_2) goto LAB_146c8426e;
        iVar4 = *(int *)(lVar6 + 8);
      } while (iVar4 != -1);
    }
  }
  lVar6 = 0;
LAB_146c8426e:
  puVar7 = (uint *)(lVar6 + 4);
  if (lVar6 == 0) {
    puVar7 = (uint *)0x0;
  }
  uVar2 = *puVar7;
  iVar4 = (int)param_1[1];
  if (~uVar2 + iVar4 != 0) {
    memmove((void *)(*param_1 + (longlong)(int)uVar2 * 0x20),
            (void *)((longlong)(int)uVar2 * 0x20 + *param_1 + 0x20),
            (longlong)(int)(~uVar2 + iVar4) << 5);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  FUN_146c9116c(param_1);
  FUN_14573a2c8(plVar1,param_2);
  plVar5 = param_1 + 4;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar5;
  if ((int)param_1[7] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar4 = (int)param_1[7];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (uStack_48 != plVar5)) {
    do {
      iVar3 = *(int *)(*local_78 + 4 + (longlong)iStack_5c * 0x10);
      if ((int)uVar2 < iVar3) {
        *(int *)((longlong)iStack_5c * 0x10 + *local_78 + 4) = iVar3 + -1;
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar5 || iStack_5c != iVar4));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c843d2 FUN_146c843d2 body=433 status=ok
// SIG undefined FUN_146c843d2(void)

void FUN_146c843d2(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
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
  plVar1 = (longlong *)(param_1 + 0x70);
  iVar6 = 0;
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar4 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xb0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xb8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x10;
        if (*(uint *)(*plVar1 + (longlong)iVar3 * 0x10) == param_2) goto LAB_146c84431;
        iVar3 = *(int *)(lVar4 + 8);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_146c84431:
  piVar5 = (int *)(lVar4 + 4);
  if (lVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  iVar3 = *piVar5;
  FUN_146c91208(param_1 + 0x60,iVar3);
  FUN_146c91262(param_1 + 0x60);
  FUN_14573a2c8(plVar1,param_2);
  lVar4 = param_1 + 0x80;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = lVar4;
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_1449c0562(&local_58);
    iVar6 = *(int *)(param_1 + 0x98);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar6) || (local_50 != lVar4)) {
    do {
      iVar2 = *(int *)(*local_80 + 4 + (longlong)iStack_64 * 0x10);
      if (iVar3 < iVar2) {
        *(int *)((longlong)iStack_64 * 0x10 + *local_80 + 4) = iVar2 + -1;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar4 || iStack_64 != iVar6));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c84584 FUN_146c84584 body=115 status=ok
// SIG undefined FUN_146c84584(void)

void FUN_146c84584(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    plVar5 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[10];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0xb] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = param_1[2] + (longlong)iVar3 * 0x10;
        if (*(uint *)(param_1[2] + (longlong)iVar3 * 0x10) == param_2) goto LAB_146c8458e;
        iVar3 = *(int *)(lVar4 + 8);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_146c8458e:
  piVar6 = (int *)(lVar4 + 4);
  if (lVar4 == 0) {
    piVar6 = (int *)0x0;
  }
  iVar3 = *piVar6;
  lVar4 = *param_1;
  *(undefined8 *)(lVar4 + 0x18 + (longlong)iVar3 * 0x20) = param_3[2];
  uVar2 = param_3[1];
  puVar1 = (undefined8 *)(lVar4 + 8 + (longlong)iVar3 * 0x20);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 146c845f8 FUN_146c845f8 body=540 status=ok
// SIG undefined FUN_146c845f8(void)

void FUN_146c845f8(longlong param_1,uint param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar7 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xb0);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xb8) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 0x10) == param_2)
        goto LAB_146c84645;
        iVar6 = *(int *)(lVar7 + 8);
      } while (iVar6 != -1);
    }
  }
  lVar7 = 0;
LAB_146c84645:
  piVar9 = (int *)(lVar7 + 4);
  if (lVar7 == 0) {
    piVar9 = (int *)0x0;
  }
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x60) + 8 + (longlong)*piVar9 * 0x48);
  iVar6 = (int)param_3[1];
  FUN_14051b394(plVar3,iVar6,0);
  if (0 < (longlong)iVar6) {
    lVar7 = 0;
    do {
      lVar8 = *param_3;
      lVar4 = *plVar3;
      *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar8 + 0x10 + lVar7);
      puVar1 = (undefined8 *)(lVar8 + lVar7);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar6 * 0x18 != lVar7);
  }
  if ((longlong)(int)param_3[1] < 1) {
    dVar13 = 1.79769313486232e+308;
    dVar12 = -1.79769313486232e+308;
    dVar10 = -1.79769313486232e+308;
    dVar11 = -1.79769313486232e+308;
    dVar15 = 1.79769313486232e+308;
    dVar14 = 1.79769313486232e+308;
  }
  else {
    lVar7 = *param_3;
    uVar20 = 0xffffffff;
    uVar21 = 0xffefffff;
    uVar16 = 0xffffffff;
    uVar17 = 0x7fefffff;
    lVar8 = 0;
    uVar18 = uVar16;
    uVar19 = uVar17;
    uVar22 = uVar16;
    uVar23 = uVar17;
    uVar24 = uVar20;
    uVar25 = uVar21;
    uVar26 = uVar20;
    uVar27 = uVar21;
    do {
      dVar11 = *(double *)(lVar7 + lVar8);
      dVar10 = *(double *)(lVar7 + 8 + lVar8);
      dVar14 = dVar11;
      if ((double)CONCAT44(uVar19,uVar18) <= dVar11) {
        dVar14 = (double)CONCAT44(uVar19,uVar18);
      }
      if (dVar11 <= (double)CONCAT44(uVar21,uVar20)) {
        dVar11 = (double)CONCAT44(uVar21,uVar20);
      }
      dVar15 = dVar10;
      if ((double)CONCAT44(uVar23,uVar22) <= dVar10) {
        dVar15 = (double)CONCAT44(uVar23,uVar22);
      }
      if (dVar10 <= (double)CONCAT44(uVar27,uVar26)) {
        dVar10 = (double)CONCAT44(uVar27,uVar26);
      }
      dVar12 = *(double *)(lVar7 + 0x10 + lVar8);
      dVar13 = dVar12;
      if ((double)CONCAT44(uVar17,uVar16) <= dVar12) {
        dVar13 = (double)CONCAT44(uVar17,uVar16);
      }
      if (dVar12 <= (double)CONCAT44(uVar25,uVar24)) {
        dVar12 = (double)CONCAT44(uVar25,uVar24);
      }
      lVar8 = lVar8 + 0x18;
      uVar18 = SUB84(dVar14,0);
      uVar19 = (undefined4)((ulonglong)dVar14 >> 0x20);
      uVar22 = SUB84(dVar15,0);
      uVar23 = (undefined4)((ulonglong)dVar15 >> 0x20);
      uVar16 = SUB84(dVar13,0);
      uVar17 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uVar20 = SUB84(dVar11,0);
      uVar21 = (undefined4)((ulonglong)dVar11 >> 0x20);
      uVar26 = SUB84(dVar10,0);
      uVar27 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uVar24 = SUB84(dVar12,0);
      uVar25 = (undefined4)((ulonglong)dVar12 >> 0x20);
    } while ((longlong)(int)param_3[1] * 0x18 != lVar8);
  }
  lVar8 = (longlong)*piVar9;
  lVar7 = *(longlong *)(param_1 + 0x60);
  *(double *)(lVar7 + 0x18 + lVar8 * 0x48) = dVar14;
  *(double *)(lVar7 + 0x20 + lVar8 * 0x48) = dVar15;
  *(double *)(lVar7 + 0x28 + lVar8 * 0x48) = dVar13;
  *(double *)(lVar7 + 0x30 + lVar8 * 0x48) = dVar11;
  *(double *)(lVar7 + 0x38 + lVar8 * 0x48) = dVar10;
  *(double *)(lVar7 + 0x40 + lVar8 * 0x48) = dVar12;
  return;
}



// FUNCTION 146c84814 FUN_146c84814 body=449 status=ok
// SIG undefined FUN_146c84814(void)

bool FUN_146c84814(longlong *param_1,double *param_2,int *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined8 *local_e8;
  longlong *local_d8;
  double *local_d0;
  longlong *local_c8;
  LPCRITICAL_SECTION local_c0;
  double *local_b8;
  int *local_b0;
  int *local_a8;
  int local_a0;
  int local_9c;
  double local_98;
  code *local_90;
  longlong **local_88;
  undefined8 local_80;
  undefined4 local_78;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = 1.79769313486232e+308;
  local_9c = -1;
  local_a0 = -1;
  InitializeCriticalSection(&local_70);
  SetCriticalSectionSpinCount(&local_70,4000);
  local_88 = &local_d8;
  local_e8 = &local_80;
  local_80 = 0;
  local_78 = 0;
  local_90 = FUN_142985ab6;
  local_f0 = 0;
  local_d8 = param_1;
  local_d0 = param_2;
  local_c8 = param_4;
  local_c0 = &local_70;
  local_b8 = &local_98;
  local_b0 = &local_a0;
  local_a8 = &local_9c;
  FUN_1401f8d10(L"ParallelFor Task",(int)param_1[1],1);
  iVar8 = local_9c;
  if (local_9c != -1) {
    *param_3 = local_9c;
    *(undefined1 *)(param_3 + 1) = 1;
    dVar2 = param_2[5];
    dVar3 = param_2[4];
    dVar4 = param_2[2];
    dVar5 = param_2[1];
    *(double *)(param_3 + 2) = param_2[3] * local_98 + *param_2;
    *(double *)(param_3 + 4) = dVar3 * local_98 + dVar5;
    *(double *)(param_3 + 6) = dVar2 * local_98 + dVar4;
    lVar6 = *param_1;
    *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(lVar6 + 0x18 + (longlong)local_a0 * 0x20);
    puVar1 = (undefined8 *)(lVar6 + 8 + (longlong)local_a0 * 0x20);
    uVar7 = puVar1[1];
    *(undefined8 *)(param_3 + 8) = *puVar1;
    *(undefined8 *)(param_3 + 10) = uVar7;
    *(double *)(param_3 + 0xe) = local_98;
  }
  DeleteCriticalSection(&local_70);
  if (*param_4 != 0) {
    plVar9 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return iVar8 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c849d6 FUN_146c849d6 body=477 status=ok
// SIG undefined FUN_146c849d6(void)

bool FUN_146c849d6(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  void **local_a8;
  longlong *local_a0;
  void *local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  code *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = param_3[1];
  uVar1 = *(uint *)(param_1 + 8);
  local_88 = 0;
  uStack_80 = (ulonglong)uVar1;
  if ((longlong)(int)uVar1 == 0) {
    local_98 = (void *)0x0;
    uStack_90 = 0;
  }
  else {
    FUN_146c913be(&local_88);
    local_98 = (void *)0x0;
    uStack_90 = (ulonglong)uVar1;
    FUN_1401c3474(&local_98);
  }
  memset(local_98,0,(longlong)(int)uVar1);
  local_68 = &local_c0;
  local_a8 = &local_98;
  local_a0 = &local_88;
  local_c8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = FUN_142985be4;
  local_d0 = 0;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b0 = param_4;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  uVar4 = uStack_80 & 0xffffffff;
  if (0 < (int)uStack_80) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      if (*(char *)((longlong)local_98 + lVar9) == '\x01') {
        puVar7 = (undefined8 *)(local_88 + lVar10);
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_146c913be(param_3,iVar2);
          uVar4 = uStack_80 & 0xffffffff;
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x50 + *param_3);
        for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x50;
    } while (lVar9 < (int)uVar4);
  }
  lVar9 = param_3[1];
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)lVar9 != (int)lVar3;
}



// FUNCTION 146c84bb4 FUN_146c84bb4 body=683 status=ok
// SIG undefined FUN_146c84bb4(void)

bool FUN_146c84bb4(double param_1,double *param_2,int *param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  int *piVar6;
  double dVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_168 [40];
  undefined4 local_140;
  undefined8 *local_138;
  double local_130;
  int *local_128;
  double local_120;
  double *local_118;
  longlong *local_110;
  LPCRITICAL_SECTION local_108;
  undefined8 *local_100;
  double *local_f8;
  int *local_f0;
  int *local_e8;
  int *local_e0;
  double *local_d8;
  undefined8 local_d0;
  double local_c8;
  int local_bc;
  int local_b8;
  int local_b4;
  double local_b0;
  code *local_a8;
  double *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  _RTL_CRITICAL_SECTION local_88;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b0 = 1.79769313486232e+308;
  local_b4 = -1;
  local_b8 = -1;
  local_bc = -1;
  bVar9 = false;
  local_c8 = 0.0;
  local_d0 = 0x7fefffffffffffff;
  local_128 = param_3;
  InitializeCriticalSection(&local_88);
  SetCriticalSectionSpinCount(&local_88,4000);
  local_a0 = &local_120;
  local_f8 = &local_b0;
  local_f0 = &local_b8;
  local_e8 = &local_b4;
  local_e0 = &local_bc;
  local_138 = &local_98;
  local_98 = 0;
  local_90 = 0;
  local_a8 = FUN_142985e12;
  local_140 = 0;
  local_130 = param_1;
  local_120 = param_1;
  local_118 = param_2;
  local_110 = param_4;
  local_108 = &local_88;
  local_100 = &local_d0;
  local_d8 = &local_c8;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)((longlong)param_1 + 0x68),1);
  dVar7 = local_c8;
  piVar6 = local_128;
  if (local_b4 != -1) {
    *local_128 = local_b4;
    *(undefined1 *)(local_128 + 1) = 0;
    dVar1 = param_2[5];
    dVar2 = param_2[4];
    dVar3 = param_2[2];
    dVar4 = param_2[1];
    *(double *)(local_128 + 2) = local_b0 * param_2[3] + *param_2;
    *(double *)(local_128 + 4) = dVar2 * local_b0 + dVar4;
    *(double *)(local_128 + 6) = dVar1 * local_b0 + dVar3;
    lVar5 = *(longlong *)(*(longlong *)((longlong)local_130 + 0x60) + 8 + (longlong)local_b8 * 0x48)
    ;
    FUN_146bd9232(&local_120,lVar5 + (longlong)local_bc * 0x18,
                  lVar5 + (longlong)local_bc * 0x18 + 0x18);
    *(double *)(piVar6 + 8) = dVar7 * (double)local_108 + local_120;
    *(double *)(piVar6 + 10) = (double)local_100 * dVar7 + (double)local_118;
    *(double *)(piVar6 + 0xc) = (double)local_f8 * dVar7 + (double)local_110;
    *(double *)(piVar6 + 0xe) = local_b0;
    piVar6[0x10] = local_bc;
    *(double *)(piVar6 + 0x12) = local_c8;
    bVar9 = local_b4 != -1;
  }
  DeleteCriticalSection(&local_88);
  if (*param_4 != 0) {
    plVar8 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c84e60 FUN_146c84e60 body=502 status=ok
// SIG undefined FUN_146c84e60(void)

bool FUN_146c84e60(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  size_t _Size;
  longlong lVar9;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  void **local_b8;
  longlong *local_b0;
  void *local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  code *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = param_3[1];
  local_98 = 0;
  uStack_90 = (ulonglong)*(uint *)(param_1 + 0x68);
  if (*(uint *)(param_1 + 0x68) == 0) {
    uStack_a0 = 0;
  }
  else {
    FUN_146c913be(&local_98);
    _Size = (size_t)(int)*(uint *)(param_1 + 0x68);
    local_a8 = (void *)0x0;
    uStack_a0 = (ulonglong)*(uint *)(param_1 + 0x68);
    if (_Size != 0) {
      FUN_1401c3474(&local_a8);
      goto LAB_146c84ebf;
    }
  }
  local_a8 = (void *)0x0;
  _Size = 0;
LAB_146c84ebf:
  memset(local_a8,0,_Size);
  local_78 = &local_d0;
  local_b8 = &local_a8;
  local_b0 = &local_98;
  local_d8 = &local_70;
  local_70 = 0;
  local_68 = 0;
  local_80 = FUN_1429861e4;
  local_e0 = 0;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_4;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x68),1);
  uVar3 = uStack_90 & 0xffffffff;
  if (0 < (int)uStack_90) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      if (*(char *)((longlong)local_a8 + lVar8) == '\x01') {
        puVar6 = (undefined8 *)(local_98 + lVar9);
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_146c913be(param_3,iVar1);
          uVar3 = uStack_90 & 0xffffffff;
        }
        puVar7 = (undefined8 *)((longlong)iVar1 * 0x50 + *param_3);
        for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x50;
    } while (lVar8 < (int)uVar3);
  }
  lVar8 = param_3[1];
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)lVar8 != (int)lVar2;
}



// FUNCTION 146c85058 FUN_146c85058 body=105 status=ok
// SIG undefined FUN_146c85058(void)

void FUN_146c85058(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_10 = 1;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_30 = param_5;
  local_18 = param_3;
  FUN_146c850c2(param_1 + 2,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c850c2 FUN_146c850c2 body=4212 status=ok
// SIG undefined FUN_146c850c2(void)

void FUN_146c850c2(longlong *param_1,longlong *param_2,longlong *param_3,int param_4,int param_5,
                  int param_6)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  size_t sVar16;
  undefined1 *puVar17;
  longlong lVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_328 [40];
  int local_300;
  int local_2fc;
  ulonglong local_2f8;
  ulonglong local_2f0;
  longlong *local_2e8;
  ulonglong local_2e0;
  int local_2d4;
  ulonglong local_2d0;
  int local_2c4;
  size_t local_2c0;
  longlong *local_2b8;
  undefined8 uStack_2b0;
  undefined1 *local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  longlong *local_290;
  uint local_288;
  longlong *local_280;
  longlong ***local_278;
  longlong **local_270;
  double *local_268;
  double *local_260;
  int *local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  int local_22c;
  longlong local_228;
  undefined8 uStack_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined4 local_208 [2];
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  ulonglong uStack_1e0;
  longlong local_1d8;
  undefined1 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  int local_184;
  undefined1 local_180 [8];
  undefined1 *local_178;
  int local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  int local_134;
  undefined1 local_130 [8];
  undefined1 *local_128;
  int local_120;
  longlong local_118 [2];
  undefined1 local_108 [16];
  undefined8 local_f8;
  int local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  iVar15 = 8;
  if (param_6 < 8) {
    iVar15 = param_6;
  }
  iVar21 = 1;
  if (1 < iVar15) {
    iVar21 = iVar15;
  }
  uVar6 = *(uint *)(param_2 + 1);
  sVar16 = (size_t)uVar6;
  FUN_144a127d2(param_1,sVar16,1);
  if (sVar16 != 0) {
    if ((int)uVar6 < 1) {
      dVar42 = -1.79769313486232e+308;
      uVar47 = 0xffffffff;
      uVar48 = 0x7fefffff;
      uVar43 = 0xffffffff;
      uVar44 = 0xffefffff;
      uVar45 = 0xffffffff;
      uVar46 = 0xffefffff;
      uVar49 = uVar47;
      uVar50 = uVar48;
      uVar51 = uVar47;
      uVar52 = uVar48;
    }
    else {
      auVar24 = ZEXT816(0x7fefffffffffffff);
      dVar33 = -1.79769313486232e+308;
      lVar7 = 0x10;
      uVar10 = 0;
      auVar26 = ZEXT816(0xffefffffffffffff);
      auVar28 = ZEXT816(0x7fefffffffffffff);
      dVar40 = 1.79769313486232e+308;
      dVar41 = -1.79769313486232e+308;
      do {
        *(int *)(*param_1 + uVar10 * 4) = (int)uVar10;
        lVar12 = *param_2;
        dVar42 = *(double *)(lVar12 + -0x10 + lVar7);
        dVar32 = *(double *)(lVar12 + -8 + lVar7);
        uVar43 = SUB84(dVar32,0);
        uVar44 = (undefined4)((ulonglong)dVar32 >> 0x20);
        uVar47 = SUB84(dVar42,0);
        uVar48 = (undefined4)((ulonglong)dVar42 >> 0x20);
        if (dVar40 <= dVar42) {
          uVar47 = SUB84(dVar40,0);
          uVar48 = (undefined4)((ulonglong)dVar40 >> 0x20);
        }
        if (dVar42 <= dVar41) {
          dVar42 = dVar41;
        }
        uVar49 = uVar43;
        uVar50 = uVar44;
        if (auVar28._0_8_ <= dVar32) {
          uVar49 = auVar28._0_4_;
          uVar50 = auVar28._4_4_;
        }
        if (dVar32 <= auVar26._0_8_) {
          uVar43 = auVar26._0_4_;
          uVar44 = auVar26._4_4_;
        }
        dVar40 = *(double *)(lVar12 + lVar7);
        uVar45 = SUB84(dVar40,0);
        uVar46 = (undefined4)((ulonglong)dVar40 >> 0x20);
        uVar51 = uVar45;
        uVar52 = uVar46;
        if (auVar24._0_8_ <= dVar40) {
          uVar51 = auVar24._0_4_;
          uVar52 = auVar24._4_4_;
        }
        if (dVar40 <= dVar33) {
          uVar45 = SUB84(dVar33,0);
          uVar46 = (undefined4)((ulonglong)dVar33 >> 0x20);
        }
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0x18;
        dVar33 = (double)CONCAT44(uVar46,uVar45);
        auVar26._4_4_ = uVar44;
        auVar26._0_4_ = uVar43;
        auVar26._8_8_ = 0;
        auVar24._4_4_ = uVar52;
        auVar24._0_4_ = uVar51;
        auVar24._8_8_ = 0;
        auVar28._4_4_ = uVar50;
        auVar28._0_4_ = uVar49;
        auVar28._8_8_ = 0;
        dVar40 = (double)CONCAT44(uVar48,uVar47);
        dVar41 = dVar42;
      } while (sVar16 != uVar10);
    }
    local_1e8 = 0;
    uStack_1e0 = (ulonglong)uVar6;
    local_2fc = iVar21;
    local_2e8 = param_3;
    local_2d4 = param_4;
    FUN_1403e3958();
    if (0 < (int)uVar6) {
      lVar7 = 0;
      do {
        lVar12 = *param_2;
        dVar33 = *(double *)(lVar12 + 0x10 + lVar7);
        dVar40 = *(double *)(lVar12 + 8 + lVar7);
        *(double *)(local_1e8 + lVar7) =
             *(double *)(lVar12 + lVar7) - ((double)CONCAT44(uVar48,uVar47) + dVar42) * 0.5;
        *(double *)(local_1e8 + 8 + lVar7) =
             dVar40 - ((double)CONCAT44(uVar50,uVar49) + (double)CONCAT44(uVar44,uVar43)) * 0.5;
        *(double *)(local_1e8 + 0x10 + lVar7) =
             dVar33 - ((double)CONCAT44(uVar52,uVar51) + (double)CONCAT44(uVar46,uVar45)) * 0.5;
        lVar7 = lVar7 + 0x18;
      } while (sVar16 * 0x18 != lVar7);
    }
    uVar10 = (ulonglong)*(uint *)(local_2e8 + 1);
    if (0 < (int)*(uint *)(local_2e8 + 1)) {
      piVar11 = (int *)(*local_2e8 + 8);
      uVar14 = 0;
      do {
        if (*piVar11 == 0) {
          uVar10 = uVar14 & 0xffffffff;
          break;
        }
        uVar14 = uVar14 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != uVar14);
    }
    iVar15 = 0x1e;
    if (param_5 < 0x1e) {
      iVar15 = param_5;
    }
    bVar19 = (byte)iVar15;
    if (iVar15 < 2) {
      bVar19 = 1;
    }
    local_2c4 = 1 << (bVar19 & 0x1f);
    uVar13 = 0;
    local_208[0] = (undefined4)uVar10;
    local_200 = local_2e8;
    local_218 = 0;
    uStack_210 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_118[0] = 0;
    local_118[1] = 0;
    local_ec = 0xffffffff00000080;
    local_e4 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_148 = 0;
    local_140 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_13c = 0xffffffff00000080;
    local_134 = 0;
    local_128 = (undefined1 *)0x0;
    local_120 = 0;
    local_198 = 0;
    local_190 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_18c = 0xffffffff00000080;
    local_184 = 0;
    local_178 = (undefined1 *)0x0;
    local_170 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_1f8 = param_1;
    local_1f0 = &local_1e8;
    if (0 < (int)uVar6) {
      dVar33 = ((double)CONCAT44(uVar44,uVar43) - (double)CONCAT44(uVar50,uVar49)) * 0.5 +
               0.0010000000474974513;
      dVar40 = ((double)CONCAT44(uVar46,uVar45) - (double)CONCAT44(uVar52,uVar51)) * 0.5 +
               0.0010000000474974513;
      dVar40 = dVar40 + dVar40;
      dVar33 = dVar33 + dVar33;
      dVar41 = (dVar42 - (double)CONCAT44(uVar48,uVar47)) * 0.5 + 0.0010000000474974513;
      dVar40 = (double)(-(ulonglong)(0.0 <= dVar40) & (ulonglong)dVar40);
      dVar33 = (double)(-(ulonglong)(0.0 <= dVar33) & (ulonglong)dVar33);
      uVar14 = -(ulonglong)(dVar40 <= dVar33);
      dVar41 = dVar41 + dVar41;
      dVar42 = (double)(~uVar14 & (ulonglong)dVar40 | uVar14 & (ulonglong)dVar33);
      dVar41 = (double)(-(ulonglong)(0.0 <= dVar41) & (ulonglong)dVar41);
      uVar14 = -(ulonglong)(dVar42 <= dVar41);
      dVar42 = (double)(uVar14 & (ulonglong)dVar41 | ~uVar14 & (ulonglong)dVar42);
      iVar15 = 2;
      uVar14 = 0;
      local_2e0 = uVar10;
      local_2c0 = sVar16;
LAB_146c8554c:
      sVar16 = local_2c0;
      iVar21 = local_2fc;
      local_300 = iVar15;
      local_2f8 = uVar14;
      FUN_146c91a08(local_118);
      FUN_146c917f4(&local_168);
      FUN_146c917f4(&local_1b8);
      local_238 = dVar42 / (double)(local_300 * iVar21);
      local_22c = local_300 * iVar21 + 2;
      local_250 = local_238 * -0.5;
      uVar6 = uStack_210._4_4_;
      iVar15 = 0;
      local_248 = local_250;
      local_240 = local_250;
      if (uStack_210 < 0) {
        uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
        FUN_144893a1c(&local_218);
        uVar6 = uStack_210._4_4_;
        iVar15 = (int)uStack_210;
      }
      uVar3 = (uint)sVar16;
      uStack_210 = CONCAT44(uStack_210._4_4_,iVar15 + uVar3);
      if (uVar6 - iVar15 < uVar3) {
        FUN_1447403be(&local_218);
      }
      iVar21 = local_300;
      dVar33 = dVar42 / (double)local_300;
      memset((void *)(iVar15 + local_218),0,sVar16);
      local_270 = &local_1f0;
      local_268 = &local_250;
      local_260 = &local_238;
      local_258 = &local_22c;
      lVar7 = (longlong)iVar21;
      uVar14 = lVar7 >> 1;
      if (0 < (int)local_2f8) {
        local_2d0 = local_2f8 & 0xffffffff;
        uVar10 = 0;
        local_2f0 = uVar14;
        do {
          lVar12 = *local_1f0;
          lVar8 = (longlong)*(int *)(*param_1 + uVar10 * 4) * 0x18;
          auVar23._0_8_ = (*(double *)(lVar12 + lVar8) - DAT_14c8464e0) / dVar33;
          auVar23._8_8_ = 0;
          auVar24 = roundpd(auVar23,auVar23,1);
          auVar25._0_8_ = (*(double *)(lVar12 + 8 + lVar8) - DAT_14c8464e8) / dVar33;
          auVar25._8_8_ = 0;
          auVar26 = roundpd(auVar25,auVar25,1);
          auVar27._0_8_ = (*(double *)(lVar12 + 0x10 + lVar8) - DAT_14c8464f0) / dVar33;
          auVar27._8_8_ = 0;
          auVar28 = roundpd(auVar27,auVar27,1);
          local_2b8 = (longlong *)
                      ((longlong)auVar28._0_8_ + local_2f0 +
                      ((longlong)auVar26._0_8_ + local_2f0 +
                      ((longlong)auVar24._0_8_ + local_2f0) * lVar7) * lVar7);
          FUN_146c91cd4(&local_168,&local_1d8,&local_2b8,0);
          iVar15 = *local_258;
          dVar40 = *local_260;
          lVar12 = **local_270;
          auVar30._0_8_ = (*(double *)(lVar12 + lVar8) - *local_268) / dVar40;
          auVar30._8_8_ = 0;
          auVar26 = roundpd(auVar30,auVar30,1);
          lVar18 = (longlong)(iVar15 / 2);
          auVar31._8_8_ = 0;
          auVar31._0_8_ = (*(double *)(lVar12 + 8 + lVar8) - local_268[1]) / dVar40;
          auVar28 = roundpd(auVar31,auVar31,1);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = (*(double *)(lVar12 + 0x10 + lVar8) - local_268[2]) / dVar40;
          auVar24 = roundpd(auVar29,auVar29,1);
          local_1d8 = (longlong)auVar24._0_8_ + lVar18 +
                      ((longlong)auVar28._0_8_ + lVar18 +
                      ((longlong)auVar26._0_8_ + lVar18) * (longlong)iVar15) * (longlong)iVar15;
          FUN_1403d55ec(&local_1b8,&local_290,&local_1d8,0);
          uVar10 = uVar10 + 1;
        } while (local_2d0 != uVar10);
      }
      uVar13 = (uint)local_2f8;
      uVar10 = local_2e0;
      if ((int)uVar13 < (int)uVar3) {
        uVar10 = (ulonglong)(int)uVar13;
        bVar19 = 1;
        dVar40 = DAT_14c8464e8;
        dVar41 = DAT_14c8464e0;
        dVar32 = DAT_14c8464f0;
        local_2f0 = uVar10;
LAB_146c858a3:
        lVar8 = (longlong)*(int *)(*param_1 + uVar10 * 4);
        lVar12 = *local_1f0;
        auVar34._0_8_ = (*(double *)(lVar12 + lVar8 * 0x18) - dVar41) / dVar33;
        auVar34._8_8_ = 0;
        auVar24 = roundpd(auVar34,auVar34,1);
        auVar35._8_8_ = 0;
        auVar35._0_8_ = (*(double *)(lVar12 + 8 + lVar8 * 0x18) - dVar40) / dVar33;
        auVar26 = roundpd(auVar35,auVar35,1);
        auVar36._0_8_ = (*(double *)(lVar12 + 0x10 + lVar8 * 0x18) - dVar32) / dVar33;
        auVar36._8_8_ = 0;
        auVar28 = roundpd(auVar36,auVar36,1);
        local_2b8 = (longlong *)
                    (((longlong)auVar26._0_8_ + uVar14 + ((longlong)auVar24._0_8_ + uVar14) * lVar7)
                     * lVar7 + (longlong)auVar28._0_8_ + uVar14);
        iVar15 = (int)((ulonglong)local_2b8 >> 0x20);
        if ((int)uStack_160 != local_134) {
          puVar17 = local_128;
          if (local_128 == (undefined1 *)0x0) {
            puVar17 = local_130;
          }
          for (iVar21 = *(int *)(puVar17 +
                                (ulonglong)(local_120 - 1U & (int)local_2b8 + iVar15 * 0x17) * 4);
              iVar21 != -1; iVar21 = *(int *)((longlong)iVar21 * 0x10 + local_168 + 8)) {
            if (*(longlong **)(local_168 + (longlong)iVar21 * 0x10) == local_2b8)
            goto LAB_146c85b3e;
          }
        }
        if ((int)uStack_1b0 != local_184) {
          iVar21 = *local_258;
          dVar1 = *local_260;
          lVar12 = **local_270;
          auVar38._0_8_ = (*(double *)(lVar12 + lVar8 * 0x18) - *local_268) / dVar1;
          auVar38._8_8_ = 0;
          auVar26 = roundpd(auVar38,auVar38,1);
          lVar18 = (longlong)(iVar21 / 2);
          auVar39._8_8_ = 0;
          auVar39._0_8_ = (*(double *)(lVar12 + 8 + lVar8 * 0x18) - local_268[1]) / dVar1;
          auVar28 = roundpd(auVar39,auVar39,1);
          auVar37._8_8_ = 0;
          auVar37._0_8_ = (*(double *)(lVar12 + 0x10 + lVar8 * 0x18) - local_268[2]) / dVar1;
          auVar24 = roundpd(auVar37,auVar37,1);
          lVar12 = (longlong)auVar24._0_8_ + lVar18 +
                   ((longlong)auVar28._0_8_ + lVar18 +
                   ((longlong)auVar26._0_8_ + lVar18) * (longlong)iVar21) * (longlong)iVar21;
          puVar17 = local_178;
          if (local_178 == (undefined1 *)0x0) {
            puVar17 = local_180;
          }
          for (iVar21 = *(int *)(puVar17 +
                                (ulonglong)
                                (local_170 - 1U &
                                (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
              iVar21 != -1; iVar21 = *(int *)((longlong)iVar21 * 0x10 + local_1b8 + 8)) {
            if (*(longlong *)(local_1b8 + (longlong)iVar21 * 0x10) == lVar12) goto LAB_146c85b3e;
          }
        }
        uVar9 = FUN_146c91e06(local_118,iVar15 * 0x17 + (int)local_2b8,&local_2b8);
        bVar4 = FUN_146c91838(local_208,uVar9,uVar10 & 0xffffffff);
        bVar19 = bVar19 != 0 & bVar4;
        dVar40 = DAT_14c8464e8;
        dVar41 = DAT_14c8464e0;
        dVar32 = DAT_14c8464f0;
        goto LAB_146c85b41;
      }
    }
LAB_146c86030:
    if ((0 < (int)uVar10) &&
       (iVar15 = (int)sVar16 - uVar13,
       (iVar15 != 0 && (int)uVar13 <= (int)sVar16) && ((int)uVar13 < local_2d4 || local_2d4 < 0))) {
      local_2b8 = *(longlong **)*local_2e8;
      uStack_2b0 = ((longlong *)*local_2e8)[1];
      FUN_146c9237b((longlong)(int)uVar13 * 4 + *param_1,iVar15);
    }
    if (local_228 != 0) {
      FUN_1400020a8();
    }
    local_170 = 0;
    if (local_178 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_145c09b70(&local_1b8);
    local_120 = 0;
    if (local_128 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_145c09b70(&local_168);
    local_d0 = 0;
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    FUN_146c92742(local_118);
    if (local_218 != 0) {
      FUN_1400020a8();
    }
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146c85b3e:
  bVar19 = 0;
LAB_146c85b41:
  uVar10 = uVar10 + 1;
  if (uVar3 == (uint)uVar10) goto code_r0x000146c85b4c;
  goto LAB_146c858a3;
code_r0x000146c85b4c:
  uVar13 = (uint)local_2f8;
  uVar10 = local_2e0;
  if (bVar19 != 0) goto LAB_146c86030;
  local_290 = &local_218;
  local_280 = &local_1b8;
  local_278 = &local_270;
  bVar22 = (longlong)uStack_220 < 0;
  uStack_220 = uStack_220 & 0xffffffff00000000;
  local_288 = uVar13;
  if (bVar22) {
    FUN_14481578e(&local_228,0);
  }
  local_1d8 = 0x100000000;
  local_1d0 = local_108;
  local_1c8 = 0xffffffff;
  local_1c0 = 0;
  uVar10 = 0;
  iVar15 = 0;
  if (local_f0 != 0) {
    FUN_1449c0562(&local_1d8);
    iVar15 = local_f0;
  }
  local_2a0 = local_1c8;
  uVar9 = local_2a0;
  local_298 = local_1c0;
  local_294 = local_1bc;
  uStack_2b0 = local_1d8;
  local_2a8 = local_1d0;
  local_2b8 = local_118;
  local_2a0._4_4_ = (int)((ulonglong)local_1c8 >> 0x20);
  if ((local_2a0._4_4_ != iVar15) || (local_1d0 != local_108)) {
    uVar10 = 0;
    iVar21 = local_2a0._4_4_;
    local_2a0 = uVar9;
    do {
      lVar7 = *local_2b8;
      cVar5 = FUN_146c918e8(&local_290,
                            *(undefined4 *)
                             (*param_1 + (longlong)*(int *)(lVar7 + 8 + (longlong)iVar21 * 0x20) * 4
                             ));
      uVar14 = uStack_220;
      if (cVar5 != '\0') {
        lVar12 = (longlong)(int)uStack_220;
        uVar6 = (int)uStack_220 + 1;
        uStack_220 = CONCAT44(uStack_220._4_4_,uVar6);
        if (uStack_220._4_4_ < uVar6) {
          FUN_1446f48e2(&local_228,uVar14 & 0xffffffff);
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(undefined4 *)(local_228 + lVar12 * 4) =
             *(undefined4 *)((longlong)iVar21 * 0x20 + lVar7 + 8);
      }
      local_2a0 = CONCAT44(local_2a0._4_4_,(uint)local_2a0 & ~uStack_2b0._4_4_);
      FUN_1449c0562(&uStack_2b0);
      iVar21 = local_2a0._4_4_;
      uVar9 = local_2a0;
    } while (local_2b8 != local_118 || (local_2a8 != local_108 || local_2a0._4_4_ != iVar15));
  }
  local_2a0 = uVar9;
  if (1 < (int)local_2e0) {
    local_1d8 = 0x100000000;
    local_1d0 = local_108;
    local_1c8 = 0xffffffff;
    local_1c0 = 0;
    iVar15 = 0;
    if (local_f0 != 0) {
      FUN_1449c0562(&local_1d8);
      iVar15 = local_f0;
    }
    local_2a0 = local_1c8;
    uVar9 = local_2a0;
    local_298 = local_1c0;
    local_294 = local_1bc;
    uStack_2b0 = local_1d8;
    local_2a8 = local_1d0;
    local_2b8 = local_118;
    local_2a0._4_4_ = (int)((ulonglong)local_1c8 >> 0x20);
    iVar21 = local_2a0._4_4_;
    if ((local_2a0._4_4_ != iVar15) || (local_2a0 = uVar9, local_1d0 != local_108)) {
      do {
        local_2a0 = uVar9;
        lVar7 = *local_2b8;
        cVar5 = FUN_146c918e8(&local_290,
                              *(undefined4 *)
                               (*param_1 +
                               (longlong)*(int *)(lVar7 + 0xc + (longlong)iVar21 * 0x20) * 4));
        uVar14 = uStack_220;
        if (cVar5 != '\0') {
          lVar12 = (longlong)(int)uStack_220;
          uVar6 = (int)uStack_220 + 1;
          uStack_220 = CONCAT44(uStack_220._4_4_,uVar6);
          if (uStack_220._4_4_ < uVar6) {
            FUN_1446f48e2(&local_228,uVar14 & 0xffffffff);
          }
          uVar10 = (ulonglong)((int)uVar10 + 1);
          *(undefined4 *)(local_228 + lVar12 * 4) =
               *(undefined4 *)((longlong)iVar21 * 0x20 + lVar7 + 0xc);
        }
        local_2a0 = CONCAT44(local_2a0._4_4_,(uint)local_2a0 & ~uStack_2b0._4_4_);
        FUN_1449c0562(&uStack_2b0);
        iVar21 = local_2a0._4_4_;
        uVar9 = local_2a0;
      } while (local_2b8 != local_118 || (local_2a8 != local_108 || local_2a0._4_4_ != iVar15));
    }
  }
  iVar15 = (int)uVar10;
  if (0 < iVar15) {
    uVar14 = 0;
    iVar21 = 0;
    do {
      lVar12 = *param_1;
      lVar7 = lVar12 + uVar14 * 4;
      iVar2 = *(int *)(lVar7 + local_2f0 * 4);
      if ((*(char *)(local_218 + iVar2) == '\0') && (iVar21 < (int)uStack_220)) {
        piVar11 = (int *)((longlong)iVar21 * 4 + local_228);
        iVar20 = iVar21;
        do {
          iVar20 = iVar20 + 1;
          iVar21 = *piVar11;
          if ((int)local_2f8 + iVar15 <= iVar21) {
            *(undefined4 *)(lVar7 + local_2f0 * 4) = *(undefined4 *)(lVar12 + (longlong)iVar21 * 4);
            *(int *)(lVar12 + (longlong)iVar21 * 4) = iVar2;
            iVar21 = iVar20;
            break;
          }
          piVar11 = piVar11 + 1;
          iVar21 = (int)uStack_220;
        } while (iVar20 != (int)uStack_220);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar10);
  }
  local_2d0 = uVar10;
  if (0 < (int)local_2e0) {
    local_2b8 = *(longlong **)*local_2e8;
    uStack_2b0 = ((longlong *)*local_2e8)[1];
    FUN_146c9237b(local_2f0 * 4 + *param_1,uVar10,&local_2b8);
  }
  uVar13 = (int)local_2f8 + iVar15;
  uVar14 = (ulonglong)uVar13;
  sVar16 = local_2c0;
  uVar10 = local_2e0;
  if ((((-1 < local_2d4) && (local_2d4 <= (int)uVar13)) || ((int)local_2c0 <= (int)uVar13)) ||
     (iVar15 = local_300 * 2, local_2c4 < iVar15)) goto LAB_146c86030;
  goto LAB_146c8554c;
}



// FUNCTION 146c86138 FUN_146c86138 body=151 status=ok
// SIG undefined FUN_146c86138(void)

void FUN_146c86138(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_38;
  local_14 = 2;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_18 = 2;
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_68 = *param_1;
  local_40 = 2;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_60 = param_6;
  FUN_146c850c2(param_1 + 2,&local_58,&local_48,param_5);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c861d0 FUN_146c861d0 body=133 status=ok
// SIG undefined FUN_146c861d0(void)

void FUN_146c861d0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_2[2];
  uVar3 = (ulonglong)uVar1;
  if (uVar3 != 0) {
    FUN_144a1a59e((longlong *)(param_1 + 8),uVar3,1);
    if (0 < (int)uVar1) {
      uVar2 = 0;
      do {
        *(int *)(*(longlong *)(param_1 + 8) + uVar2 * 4) = (int)uVar2;
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    FUN_146c9237b(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c86256 FUN_146c86256 body=655 status=ok
// SIG undefined FUN_146c86256(void)

void FUN_146c86256(double *param_1,undefined4 param_2,double *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  int local_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_146c864fc(param_1,&local_5c);
  if ((byte)uStack_58 == 0) {
    if (local_5c == -1) {
      local_68 = local_2c;
      local_78 = local_3c;
      uStack_70 = uStack_34;
      uStack_80 = uStack_44;
      local_98 = local_5c;
      uStack_94 = uStack_58;
      iStack_90 = iStack_54;
      iStack_8c = iStack_50;
      FUN_146c86860(param_1,param_2);
      goto LAB_146c864d5;
    }
  }
  else if ((byte)uStack_58 == 0xff) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_138);
  }
  dVar6 = *param_1 / (double)(1L << ((byte)uStack_58 & 0x1f));
  dVar7 = dVar6 * 0.5;
  bVar1 = (double)local_4c * dVar6 + dVar7 <= (param_3[2] + param_3[5]) * 0.5;
  bVar2 = (double)iStack_50 * dVar6 + dVar7 <= (param_3[1] + param_3[4]) * 0.5;
  bVar3 = (double)iStack_54 * dVar6 + dVar7 <= (*param_3 + param_3[3]) * 0.5;
  uVar5 = (uint)bVar3 + (uint)bVar2 * 2 + (uint)bVar1 * 4;
  if ((&iStack_48)[uVar5] == -1) {
    local_bc = (uint)bVar1 + local_4c * 2;
    iStack_c0 = (uint)bVar2 + iStack_50 * 2;
    iStack_c4 = (uint)bVar3 + iStack_54 * 2;
    local_cc = 0xffffffff;
    uStack_c8 = CONCAT31(uStack_c8._1_3_,(byte)uStack_58 + 1);
    uStack_b8 = 0xffffffff;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 0xffffffff;
    uStack_ac = 0xffffffff;
    uStack_a8 = 0xffffffff;
    uStack_a4 = 0xffffffff;
    uStack_a0 = 0xffffffff;
    uStack_9c = 0xffffffff;
    if ((int)(uint)(byte)((byte)uStack_58 + 1) <= *(int *)(param_1 + 2)) {
      cVar4 = FUN_146c868e0(param_1,&local_cc,param_3);
      if (cVar4 != '\0') {
        local_d8 = uStack_9c;
        local_f8 = CONCAT44(uStack_b8,local_bc);
        uStack_f0 = CONCAT44(uStack_b0,uStack_b4);
        local_e8 = CONCAT44(uStack_a8,uStack_ac);
        uStack_e0 = CONCAT44(uStack_a0,uStack_a4);
        local_108 = local_cc;
        uStack_104 = uStack_c8;
        iStack_100 = iStack_c4;
        iStack_fc = iStack_c0;
        local_118 = uVar5;
        FUN_146c8699c(param_1,param_2,local_5c);
        goto LAB_146c864d5;
      }
    }
  }
  FUN_146c86ab8(param_1 + 0x25,&local_5c,param_2);
  FUN_146c86b12(param_1 + 0x28,param_2);
  FUN_146c86bd4(param_1 + 0xd,local_5c,param_2);
LAB_146c864d5:
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c864fc FUN_146c864fc body=742 status=ok
// SIG undefined FUN_146c864fc(void)

undefined8 * FUN_146c864fc(double *param_1,undefined8 *param_2,double *param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_e8 [40];
  int local_c0;
  int iStack_bc;
  int local_b8;
  undefined4 local_b4;
  uint uStack_b0;
  undefined8 uStack_ac;
  int local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar2 = (param_3[5] + param_3[2]) * 0.5;
  dVar3 = (param_3[3] + *param_3) * 0.5;
  dVar11 = *param_1;
  auVar14._0_8_ = dVar3 / dVar11;
  auVar14._8_8_ = 0;
  auVar14 = roundsd(auVar14,auVar14,9);
  local_c0 = (int)auVar14._0_8_;
  dVar4 = (param_3[4] + param_3[1]) * 0.5;
  auVar15._0_8_ = dVar4 / dVar11;
  auVar15._8_8_ = 0;
  auVar14 = roundsd(auVar15,auVar15,9);
  iStack_bc = (int)auVar14._0_8_;
  auVar16._0_8_ = dVar2 / dVar11;
  auVar16._8_8_ = 0;
  auVar14 = roundsd(ZEXT816(0),auVar16,9);
  local_b8 = (int)auVar14._0_8_;
  puVar6 = (uint *)FUN_146c89490(param_1 + 0x2d);
  if (puVar6 == (uint *)0x0) {
    local_b4 = 0xffffffff;
    uStack_b0 = uStack_b0 & 0xffffff00;
    uStack_ac = CONCAT44(iStack_bc,local_c0);
    local_a4 = local_b8;
    uStack_a0 = 0xffffffff;
    uStack_9c = 0xffffffff;
    uStack_98 = 0xffffffff;
    uStack_94 = 0xffffffff;
    uStack_90 = 0xffffffff;
    uStack_8c = 0xffffffff;
    uStack_88 = 0xffffffff;
    uStack_84 = 0xffffffff;
    cVar5 = FUN_146c868e0(param_1,&local_b4,param_3);
    if (cVar5 == '\0') {
      *(undefined4 *)param_2 = 0xffffffff;
      *(undefined1 *)((longlong)param_2 + 4) = 0xff;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
      *(undefined4 *)(param_2 + 3) = 0xffffffff;
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0xffffffff;
      *(undefined4 *)(param_2 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)param_2 + 0x24) = 0xffffffff;
      *(undefined4 *)(param_2 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0xffffffff;
      *(undefined4 *)(param_2 + 6) = 0xffffffff;
      goto LAB_146c86748;
    }
    *(undefined4 *)(param_2 + 6) = uStack_84;
    uVar9 = CONCAT44(uStack_b0,local_b4);
    uVar13 = CONCAT44(uStack_a0,local_a4);
    uVar17 = CONCAT44(uStack_98,uStack_9c);
    uVar18 = uStack_94;
    uVar19 = uStack_90;
    uVar20 = uStack_8c;
    uVar21 = uStack_88;
    uVar10 = uStack_ac;
  }
  else {
    puVar7 = (undefined8 *)
             ((ulonglong)(*puVar6 & 0x1ff) * 0x34 +
             *(longlong *)((longlong)param_1[0xb] + (ulonglong)(*puVar6 >> 9) * 8));
    cVar5 = FUN_146c868e0(param_1,puVar7,param_3);
    if (cVar5 == '\0') {
      *(undefined4 *)param_2 = 0xffffffff;
      *(undefined1 *)((longlong)param_2 + 4) = 0xff;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
      *(undefined4 *)(param_2 + 3) = 0xffffffff;
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0xffffffff;
      *(undefined4 *)(param_2 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)param_2 + 0x24) = 0xffffffff;
      *(undefined4 *)(param_2 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0xffffffff;
      *(undefined4 *)(param_2 + 6) = 0xffffffff;
      goto LAB_146c86748;
    }
    do {
      puVar8 = puVar7;
      dVar11 = *param_1 / (double)(1L << (*(byte *)((longlong)puVar8 + 4) & 0x1f));
      dVar12 = dVar11 * 0.5;
      uVar1 = *(uint *)((longlong)puVar8 +
                       (ulonglong)
                       ((uint)((double)*(int *)(puVar8 + 2) * dVar11 + dVar12 <= dVar2) << 4 |
                       (uint)(dVar12 + (double)*(int *)(puVar8 + 1) * dVar11 <= dVar3) * 4 +
                       (uint)((double)*(int *)((longlong)puVar8 + 0xc) * dVar11 + dVar12 <= dVar4) *
                       8) + 0x14);
      if (uVar1 == 0xffffffff) break;
      puVar7 = (undefined8 *)
               ((ulonglong)(uVar1 & 0x1ff) * 0x34 +
               *(longlong *)((longlong)param_1[0xb] + (ulonglong)(uVar1 >> 9) * 8));
      cVar5 = FUN_146c868e0(param_1,puVar7,param_3);
    } while (cVar5 != '\0');
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar8 + 6);
    uVar9 = *puVar8;
    uVar10 = puVar8[1];
    uVar13 = puVar8[2];
    uVar17 = puVar8[3];
    uVar18 = *(undefined4 *)(puVar8 + 4);
    uVar19 = *(undefined4 *)((longlong)puVar8 + 0x24);
    uVar20 = *(undefined4 *)(puVar8 + 5);
    uVar21 = *(undefined4 *)((longlong)puVar8 + 0x2c);
  }
  *(undefined4 *)(param_2 + 4) = uVar18;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar19;
  *(undefined4 *)(param_2 + 5) = uVar20;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar21;
  param_2[2] = uVar13;
  param_2[3] = uVar17;
  *param_2 = uVar9;
  param_2[1] = uVar10;
LAB_146c86748:
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146c86860 FUN_146c86860 body=128 status=ok
// SIG undefined FUN_146c86860(void)

void FUN_146c86860(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_146c08aba(param_1 + 0x18);
  *param_3 = uVar2;
  FUN_146c86a40(param_1 + 0x50,param_3,uVar2);
  FUN_146c86ab8(param_1 + 0x128,param_3,param_2);
  FUN_146c86b12(param_1 + 0x140,param_2);
  puVar1 = (undefined4 *)FUN_146c86d86(param_1 + 0x168,param_3 + 2,1);
  *puVar1 = *param_3;
  FUN_146c86b80(param_1 + 0x68);
  FUN_146c86bd4(param_1 + 0x68,*param_3,param_2);
  return;
}



// FUNCTION 146c868e0 FUN_146c868e0 body=187 status=ok
// SIG undefined FUN_146c868e0(void)

void FUN_146c868e0(double *param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_1 / (double)(1L << (*(byte *)(param_2 + 4) & 0x1f));
  dVar1 = param_1[1] * local_20;
  local_38 = (double)*(int *)(param_2 + 8) * local_20 - dVar1;
  local_30 = (double)*(int *)(param_2 + 0xc) * local_20 - dVar1;
  local_28 = (double)*(int *)(param_2 + 0x10) * local_20 - dVar1;
  local_20 = dVar1 + dVar1 + local_20;
  local_10 = local_28 + local_20;
  local_18 = local_30 + local_20;
  local_20 = local_20 + local_38;
  FUN_146c894e0(&local_38,param_3);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8699c FUN_146c8699c body=163 status=ok
// SIG undefined FUN_146c8699c(void)

void FUN_146c8699c(longlong param_1,undefined4 param_2,uint param_3,undefined4 *param_4,uint param_5
                  )

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(param_3 >> 9) * 8);
  uVar2 = FUN_146c08aba(param_1 + 0x18);
  *param_4 = uVar2;
  FUN_146c86a40(param_1 + 0x50,param_4,uVar2);
  FUN_146c86ab8(param_1 + 0x128,param_4,param_2);
  FUN_146c86b12(param_1 + 0x140,param_2);
  FUN_146c86b80(param_1 + 0x68,*param_4);
  FUN_146c86bd4(param_1 + 0x68,*param_4,param_2);
  *(undefined4 *)((ulonglong)(param_3 & 0x1ff) * 0x34 + lVar1 + 0x14 + (ulonglong)param_5 * 4) =
       *param_4;
  return;
}



// FUNCTION 146c86a40 FUN_146c86a40 body=119 status=ok
// SIG undefined FUN_146c86a40(void)

void FUN_146c86a40(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = *param_1 * 0x200 + param_1[1];
  uVar10 = (uint)param_3;
  if (uVar8 != uVar10) {
    if (uVar10 <= uVar8) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8);
      lVar9 = (ulonglong)(uVar10 & 0x1ff) * 0x34;
      *(undefined4 *)(lVar2 + 0x30 + lVar9) = *(undefined4 *)(param_2 + 6);
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar7 = param_2[5];
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar9);
      *puVar1 = param_2[4];
      puVar1[1] = uVar7;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar9);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      *(undefined8 *)(lVar2 + lVar9) = uVar3;
      ((undefined8 *)(lVar2 + lVar9))[1] = uVar4;
      return;
    }
    FUN_146c928d4(param_1,param_3 & 0xffffffff);
  }
  FUN_146c927d0(param_1,param_2);
  return;
}



// FUNCTION 146c86ab8 FUN_146c86ab8 body=89 status=ok
// SIG undefined FUN_146c86ab8(void)

void FUN_146c86ab8(int *param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  uVar2 = (uint)param_3;
  if (uVar1 != uVar2) {
    if (uVar2 <= uVar1) {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = *param_2;
      return;
    }
    FUN_146c8be6a(param_1,param_3 & 0xffffffff);
  }
  FUN_146c8bdd4(param_1,param_2);
  return;
}



// FUNCTION 146c86b12 FUN_146c86b12 body=109 status=ok
// SIG undefined FUN_146c86b12(void)

void FUN_146c86b12(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0x20) <= param_2) {
    uVar4 = (param_2 - *(uint *)(param_1 + 0x20)) + 1;
    if (-1 < (int)uVar4) {
      uVar4 = uVar4 | 0xfff;
      uVar2 = FUN_144a54ea4(param_1,uVar4);
      FUN_1447c6044(param_1,uVar2,uVar4,0);
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar3 = param_1;
  }
  uVar4 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  puVar1 = (uint *)(lVar3 + (longlong)((int)uVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  return;
}



// FUNCTION 146c86b80 FUN_146c86b80 body=83 status=ok
// SIG undefined FUN_146c86b80(void)

void FUN_146c86b80(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  if ((int)uVar1 <= param_2) {
    FUN_146bedf4e(param_1,&DAT_149f3cc38,param_2);
    for (; (int)uVar1 < param_2; uVar1 = uVar1 + 1) {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar1 >> 9) * 8) +
       (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 146c86bd4 FUN_146c86bd4 body=432 status=ok
// SIG undefined FUN_146c86bd4(void)

void FUN_146c86bd4(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = param_2 >> 9 & 0x7fffff;
  uVar9 = (ulonglong)((uint)param_2 & 0x1ff);
  uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + uVar7 * 8) + uVar9 * 4);
  local_44 = param_3;
  if (uVar4 == 0xffffffff) {
    uVar4 = FUN_146c8b13c(param_1);
    uVar10 = (ulonglong)(uVar4 >> 9);
    uVar8 = (ulonglong)(uVar4 & 0x1ff);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar10 * 8) + uVar8 * 4) = 0;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + uVar7 * 8) + uVar9 * 4) = uVar4;
  }
  else {
    uVar10 = (ulonglong)(uVar4 >> 9);
    uVar8 = (ulonglong)(uVar4 & 0x1ff);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(*(longlong *)(lVar3 + uVar10 * 8) + uVar8 * 4);
  if (iVar2 < 8) {
    uVar4 = iVar2 + uVar4 + 1;
    *(undefined4 *)
     (*(longlong *)(lVar3 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4) = param_3
    ;
  }
  else {
    uVar9 = (ulonglong)(uVar4 + 9 >> 9);
    uVar7 = (ulonglong)(uVar4 + 9 & 0x1ff);
    local_48 = *(undefined4 *)(*(longlong *)(lVar3 + uVar9 * 8) + uVar7 * 4);
    uVar4 = *(uint *)(param_1 + 0x68);
    if ((ulonglong)uVar4 == 0xffffffff) {
      uVar4 = *(int *)(param_1 + 0x50) * 0x200 + *(int *)(param_1 + 0x54);
      FUN_146bee31c(param_1 + 0x50,&local_44);
      FUN_146bee31c(param_1 + 0x50,&local_48);
    }
    else {
      uVar5 = (ulonglong)uVar4 + 1;
      uVar6 = (ulonglong)(uint)((int)(uVar5 >> 9) << 3);
      uVar5 = (ulonglong)(((uint)uVar5 & 0x1ff) << 2);
      *(undefined4 *)(param_1 + 0x68) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar6) + uVar5);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar4 >> 9) * 8) +
       (ulonglong)(uVar4 & 0x1ff) * 4) = param_3;
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar6) + uVar5) = local_48;
    }
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar9 * 8) + uVar7 * 4) = uVar4;
  }
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar10 * 8) + uVar8 * 4);
  *piVar1 = *piVar1 + 1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c86d86 FUN_146c86d86 body=121 status=ok
// SIG undefined FUN_146c86d86(void)

longlong FUN_146c86d86(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0;
  uVar1 = FUN_1448eb174(param_2,0xc,0);
  iVar2 = FUN_146c8b7be(param_1,uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *param_1;
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x10);
    }
  }
  if (param_3 != '\x01' || lVar3 != 0) {
    return lVar3;
  }
  lVar3 = FUN_146c8c050(param_1,param_2);
  return lVar3;
}



// FUNCTION 146c86e00 FUN_146c86e00 body=255 status=ok
// SIG undefined FUN_146c86e00(void)

bool FUN_146c86e00(longlong param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_2 < *(uint *)(param_1 + 0x160)) {
    lVar4 = param_1 + 0x140;
    uVar5 = 1 << ((byte)param_2 & 0x1f);
    lVar3 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar3 = lVar4;
    }
    if ((int)param_2 < 0) {
      return false;
    }
    lVar6 = (longlong)((int)param_2 >> 5);
    if ((*(uint *)(lVar3 + lVar6 * 4) & uVar5) == 0) {
      return false;
    }
    if (param_2 < (uint)(*(int *)(param_1 + 0x128) * 0x200 + *(int *)(param_1 + 300))) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
      iVar2 = *(int *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 4);
      if (iVar2 != -1) {
        if (iVar2 == -2) {
          iVar2 = FUN_144a7cc9e(param_1 + 0xd8,param_2);
          if (param_2 < *(uint *)(param_1 + 0x160)) {
            if (*(longlong *)(param_1 + 0x150) != 0) {
              lVar4 = *(longlong *)(param_1 + 0x150);
            }
            puVar1 = (uint *)(lVar4 + lVar6 * 4);
            *puVar1 = *puVar1 & ~uVar5;
          }
          return 0 < iVar2;
        }
        *(undefined4 *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 4) = 0xffffffff;
        if (param_2 < *(uint *)(param_1 + 0x160)) {
          if (*(longlong *)(param_1 + 0x150) != 0) {
            lVar4 = *(longlong *)(param_1 + 0x150);
          }
          puVar1 = (uint *)(lVar4 + lVar6 * 4);
          *puVar1 = *puVar1 & ~uVar5;
        }
        FUN_146c86f00(param_1 + 0x68,iVar2,param_2);
        return true;
      }
    }
  }
  return false;
}



// FUNCTION 146c86f00 FUN_146c86f00 body=392 status=ok
// SIG undefined FUN_146c86f00(void)

undefined8 FUN_146c86f00(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  
  lVar8 = *(longlong *)(param_1 + 0x20);
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  iVar3 = *(int *)(*(longlong *)(lVar8 + (ulonglong)(uVar2 >> 9) * 8) +
                  (ulonglong)(uVar2 & 0x1ff) * 4);
  iVar10 = 8;
  if (iVar3 < 8) {
    iVar10 = iVar3;
  }
  uVar6 = iVar10 + uVar2;
  uVar13 = uVar2;
  uVar4 = uVar6;
  if ((int)uVar6 < (int)uVar2) {
    uVar4 = uVar2;
  }
  do {
    uVar12 = uVar13;
    if (uVar4 == uVar12) {
      if ((iVar3 < 9) || (cVar5 = FUN_146c8b1e6(param_1), cVar5 == '\0')) {
        return 0;
      }
      goto LAB_146c87055;
    }
    uVar13 = uVar12 + 1;
    iVar10 = iVar10 + -1;
  } while (*(int *)(*(longlong *)(lVar8 + (ulonglong)(uVar13 >> 9) * 8) +
                   (ulonglong)(uVar13 & 0x1ff) * 4) != param_3);
  if ((int)(uVar12 + 2) <= (int)uVar6) {
    do {
      uVar4 = uVar13 + 1;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar13 >> 9) * 8) +
       (ulonglong)(uVar13 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar4 >> 9) * 8) +
            (ulonglong)(uVar4 & 0x1ff) * 4);
      iVar10 = iVar10 + -1;
      uVar13 = uVar4;
    } while (iVar10 != 0);
    lVar8 = *(longlong *)(param_1 + 0x20);
  }
  if (8 < iVar3) {
    lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar2 + 9 >> 9) * 8);
    uVar7 = (ulonglong)(uVar2 + 9 & 0x1ff);
    uVar4 = *(uint *)(lVar8 + uVar7 * 4);
    uVar11 = (ulonglong)(uVar4 + 1 >> 9);
    uVar9 = (ulonglong)((uVar4 + 1 & 0x1ff) << 2);
    *(undefined4 *)(lVar8 + uVar7 * 4) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar11 * 8) + uVar9);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar6 & 0x1ff) * 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar4 >> 9) * 8) +
          (ulonglong)(uVar4 & 0x1ff) * 4);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar11 * 8) + uVar9) =
         *(undefined4 *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = uVar4;
LAB_146c87055:
    lVar8 = *(longlong *)(param_1 + 0x20);
  }
  lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar2 >> 9) * 8);
  piVar1 = (int *)(lVar8 + (ulonglong)(uVar2 & 0x1ff) * 4);
  *piVar1 = *piVar1 + -1;
  return CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
}



// FUNCTION 146c87088 FUN_146c87088 body=185 status=ok
// SIG undefined FUN_146c87088(void)

undefined8 FUN_146c87088(longlong param_1,uint param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  
  *param_4 = 0xffffffff;
  if (param_2 < *(uint *)(param_1 + 0x160)) {
    lVar3 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x150);
    }
    if (((-1 < (int)param_2) &&
        ((1 << ((byte)param_2 & 0x1f) & *(uint *)(lVar3 + (longlong)((int)param_2 >> 5) * 4)) != 0))
       && (param_2 < (uint)(*(int *)(param_1 + 0x128) * 0x200 + *(int *)(param_1 + 300)))) {
      uVar1 = *(uint *)(*(longlong *)
                         (*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8) +
                       (ulonglong)(param_2 & 0x1ff) * 4);
      *param_4 = uVar1;
      if ((uVar1 >> 1 < 0x7fffffff) &&
         (cVar2 = FUN_146c868e0(param_1,(ulonglong)(uVar1 & 0x1ff) * 0x34 +
                                        *(longlong *)
                                         (*(longlong *)(param_1 + 0x58) +
                                         (ulonglong)(uVar1 >> 9) * 8)), cVar2 != '\0')) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 146c87142 FUN_146c87142 body=370 status=ok
// SIG undefined FUN_146c87142(void)

undefined8 FUN_146c87142(longlong param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_4 == 0xffffffff) {
    if (*(uint *)(param_1 + 0x160) <= param_2) goto LAB_146c8729b;
    lVar4 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x150);
    }
    if ((((int)param_2 < 0) ||
        ((1 << ((byte)param_2 & 0x1f) & *(uint *)(lVar4 + (longlong)((int)param_2 >> 5) * 4)) == 0))
       || ((uint)(*(int *)(param_1 + 0x128) * 0x200 + *(int *)(param_1 + 300)) <= param_2))
    goto LAB_146c8729b;
    param_4 = *(uint *)(*(longlong *)
                         (*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8) +
                       (ulonglong)(param_2 & 0x1ff) * 4);
    if ((param_4 >> 1 < 0x7fffffff) &&
       (cVar3 = FUN_146c868e0(param_1,(ulonglong)(param_4 & 0x1ff) * 0x34 +
                                      *(longlong *)
                                       (*(longlong *)(param_1 + 0x58) +
                                       (ulonglong)(param_4 >> 9) * 8),param_3), cVar3 != '\0')) {
      return 0;
    }
  }
  if (param_4 != 0xffffffff) {
    if (param_4 == 0xfffffffe) {
      FUN_144a7cc9e(param_1 + 0xd8,param_2);
    }
    else {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8) +
       (ulonglong)(param_2 & 0x1ff) * 4) = 0xffffffff;
      FUN_146c86f00(param_1 + 0x68,param_4,param_2);
    }
    if (param_2 < *(uint *)(param_1 + 0x160)) {
      lVar4 = param_1 + 0x140;
      if (*(longlong *)(param_1 + 0x150) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x150);
      }
      uVar5 = param_2 + 0x1f;
      if (-1 < (int)param_2) {
        uVar5 = param_2;
      }
      bVar2 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)(lVar4 + (longlong)((int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    }
  }
LAB_146c8729b:
  FUN_146c86256(param_1,param_2,param_3);
  return 1;
}



// FUNCTION 146c872b4 FUN_146c872b4 body=225 status=ok
// SIG undefined FUN_146c872b4(void)

void FUN_146c872b4(double *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *param_1 / (double)(1L << (*(byte *)(param_2 + 4) & 0x1f));
  dVar2 = param_1[1] * local_20;
  local_38 = (double)*(int *)(param_2 + 8) * local_20 - dVar2;
  local_30 = (double)*(int *)(param_2 + 0xc) * local_20 - dVar2;
  local_28 = (double)*(int *)(param_2 + 0x10) * local_20 - dVar2;
  local_20 = dVar2 + dVar2 + local_20;
  local_10 = local_28 + local_20;
  local_18 = local_30 + local_20;
  local_20 = local_20 + local_38;
  local_40 = 0x7fefffffffffffff;
  cVar1 = FUN_146bd8472(param_3);
  uVar3 = local_40;
  if (cVar1 == '\0') {
    uVar3 = 0x7fefffffffffffff;
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar3);
  }
  return;
}



// FUNCTION 146c87396 FUN_146c87396 body=1546 status=ok
// SIG undefined FUN_146c87396(void)

undefined4
FUN_146c87396(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 uVar16;
  longlong lVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  uint *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  uint local_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  uint local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  undefined4 uVar12;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0xd8);
  lVar8 = param_1 + 0xe8;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  uStack_78 = 0;
  iVar9 = 0;
  local_e0 = param_2;
  lStack_88 = lVar8;
  if (*(int *)(param_1 + 0x100) != 0) {
    FUN_1449c0562(&local_90);
    iVar9 = *(int *)(param_1 + 0x100);
  }
  uVar16 = local_e0;
  uVar20 = (undefined4)param_5;
  uVar22 = (undefined4)((ulonglong)param_5 >> 0x20);
  local_a0 = local_80;
  iStack_9c = iStack_7c;
  uStack_98 = CONCAT44(uStack_74,uStack_78);
  local_b0 = local_90;
  lStack_a8 = lStack_88;
  local_e8 = param_1;
  local_b8 = plVar1;
  if (iStack_7c == iVar9) {
    uVar12 = 0xffffffff;
    uVar11 = 0xffffffff;
    if (lStack_88 == lVar8) goto LAB_146c87510;
  }
  uVar12 = 0xffffffff;
  uVar11 = 0xffffffff;
  uVar19 = uVar20;
  uVar21 = uVar22;
  do {
    uVar2 = *(undefined4 *)(*local_b8 + (longlong)iStack_9c * 0xc);
    local_90 = CONCAT44(local_90._4_4_,uVar2);
    dVar18 = (double)(*(code *)*param_4)(param_4[1],&local_90,uVar16);
    uVar20 = SUB84(dVar18,0);
    uVar22 = (int)((ulonglong)dVar18 >> 0x20);
    if ((double)CONCAT44(uVar21,uVar19) <= dVar18) {
      uVar20 = uVar19;
      uVar22 = uVar21;
    }
    if (dVar18 <= (double)CONCAT44(uVar21,uVar19) && (double)CONCAT44(uVar21,uVar19) != dVar18) {
      uVar11 = uVar2;
      uVar12 = uVar2;
    }
    local_a0 = local_a0 & ~local_b0._4_4_;
    FUN_1449c0562(&local_b0);
    uVar19 = uVar20;
    uVar21 = uVar22;
  } while (local_b8 != plVar1 || (lStack_a8 != lVar8 || iStack_9c != iVar9));
LAB_146c87510:
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_146c92a52();
  lVar10 = local_e8;
  plVar1 = (longlong *)(local_e8 + 0x168);
  lVar8 = local_e8 + 0x178;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  uStack_78 = 0;
  lStack_88 = lVar8;
  if (*(int *)(local_e8 + 400) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    iVar9 = *(int *)(lVar10 + 400);
  }
  uStack_98 = CONCAT44(uStack_74,uStack_78);
  local_a0 = local_80;
  iStack_9c = iStack_7c;
  local_b0 = local_90;
  lStack_a8 = lStack_88;
  local_b8 = plVar1;
  if ((iStack_7c != iVar9) || (lStack_88 != lVar8)) {
    do {
      puVar3 = *(uint **)(*local_b8 + 0x10 + (longlong)iStack_9c * 0x20);
      uVar13 = *puVar3;
      dVar18 = (double)FUN_146c872b4(local_e8,(ulonglong)(uVar13 & 0x1ff) * 0x34 +
                                              *(longlong *)
                                               (*(longlong *)(local_e8 + 0x58) +
                                               (ulonglong)(uVar13 >> 9) * 8),local_e0);
      uVar6 = uStack_c0;
      if (dVar18 <= (double)CONCAT44(uVar22,uVar20) && (double)CONCAT44(uVar22,uVar20) != dVar18) {
        uVar13 = *puVar3;
        lVar10 = *(longlong *)(*(longlong *)(local_e8 + 0x58) + (ulonglong)(uVar13 >> 9) * 8);
        lVar14 = (longlong)(int)(uint)uStack_c0;
        uVar7 = (uint)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
        if (uStack_c0._4_4_ < uVar7) {
          FUN_146c92ae4(&local_c8,uVar6 & 0xffffffff);
        }
        *(ulonglong *)(local_c8 + lVar14 * 8) = (ulonglong)(uVar13 & 0x1ff) * 0x34 + lVar10;
      }
      local_a0 = local_a0 & ~local_b0._4_4_;
      FUN_1449c0562(&local_b0);
    } while (local_b8 != plVar1 || (lStack_a8 != lVar8 || iStack_9c != iVar9));
  }
  lVar8 = local_e8;
  uVar16 = local_e0;
  while (0 < (int)(uint)uStack_c0) {
    local_d0 = *(uint **)(local_c8 + -8 + (ulonglong)(uint)uStack_c0 * 8);
    uStack_c0._4_4_ = (uint)(uStack_c0 >> 0x20);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 - 1);
    uVar13 = *(uint *)(*(longlong *)(*(longlong *)(lVar8 + 0x70) + (ulonglong)(*local_d0 >> 9) * 8)
                      + (ulonglong)(*local_d0 & 0x1ff) * 4);
    local_d8 = param_4;
    if (uVar13 != 0xffffffff) {
      iVar9 = *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x88) + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 4);
      if (iVar9 < 8) {
        if (0 < iVar9) {
          iVar9 = iVar9 + uVar13;
          uVar19 = uVar20;
          uVar21 = uVar22;
          do {
            uVar13 = uVar13 + 1;
            uVar20 = *(undefined4 *)
                      (*(longlong *)(*(longlong *)(local_e8 + 0x88) + (ulonglong)(uVar13 >> 9) * 8)
                      + (ulonglong)(uVar13 & 0x1ff) * 4);
            local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar20);
            dVar18 = (double)(*(code *)*param_4)(param_4[1],&local_b8,uVar16);
            if (dVar18 <= (double)CONCAT44(uVar21,uVar19) &&
                (double)CONCAT44(uVar21,uVar19) != dVar18) {
              uVar11 = uVar20;
            }
            uVar20 = SUB84(dVar18,0);
            uVar22 = (int)((ulonglong)dVar18 >> 0x20);
            if ((double)CONCAT44(uVar21,uVar19) <= dVar18) {
              uVar20 = uVar19;
              uVar22 = uVar21;
            }
            uVar19 = uVar20;
            uVar21 = uVar22;
            uVar12 = uVar11;
          } while ((int)uVar13 < iVar9);
        }
      }
      else {
        uVar7 = uVar13 + 7;
        if ((int)(uVar13 + 7) < (int)uVar13) {
          uVar7 = uVar13;
        }
        uVar19 = uVar20;
        uVar21 = uVar22;
        uVar15 = uVar13;
        uVar11 = uVar12;
        do {
          uVar15 = uVar15 + 1;
          uVar12 = *(undefined4 *)
                    (*(longlong *)(*(longlong *)(local_e8 + 0x88) + (ulonglong)(uVar15 >> 9) * 8) +
                    (ulonglong)(uVar15 & 0x1ff) * 4);
          local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar12);
          dVar18 = (double)(*(code *)*param_4)(param_4[1],&local_b8,uVar16);
          puVar5 = local_d8;
          uVar4 = local_e0;
          uVar20 = SUB84(dVar18,0);
          uVar22 = (int)((ulonglong)dVar18 >> 0x20);
          if ((double)CONCAT44(uVar21,uVar19) <= dVar18) {
            uVar20 = uVar19;
            uVar22 = uVar21;
          }
          if (dVar18 <= (double)CONCAT44(uVar21,uVar19) && (double)CONCAT44(uVar21,uVar19) != dVar18
             ) {
            uVar11 = uVar12;
          }
          uVar19 = uVar20;
          uVar21 = uVar22;
        } while (uVar15 - uVar7 != 1);
        uVar13 = *(uint *)(*(longlong *)
                            (*(longlong *)(local_e8 + 0x88) + (ulonglong)(uVar13 + 9 >> 9) * 8) +
                          (ulonglong)(uVar13 + 9 & 0x1ff) * 4);
        uVar16 = uVar4;
        uVar12 = uVar11;
        if (uVar13 != 0xffffffff) {
          lVar8 = *(longlong *)(local_e8 + 0xc0);
          do {
            uVar12 = *(undefined4 *)
                      (*(longlong *)(lVar8 + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 4);
            local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar12);
            dVar18 = (double)(*(code *)*puVar5)(puVar5[1],&local_b8,uVar4);
            uVar20 = SUB84(dVar18,0);
            uVar22 = (int)((ulonglong)dVar18 >> 0x20);
            if ((double)CONCAT44(uVar21,uVar19) <= dVar18) {
              uVar20 = uVar19;
              uVar22 = uVar21;
            }
            if (dVar18 <= (double)CONCAT44(uVar21,uVar19) &&
                (double)CONCAT44(uVar21,uVar19) != dVar18) {
              uVar11 = uVar12;
            }
            lVar8 = *(longlong *)(local_e8 + 0xc0);
            uVar13 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                              (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
            uVar19 = uVar20;
            uVar21 = uVar22;
            uVar12 = uVar11;
          } while (uVar13 != 0xffffffff);
        }
      }
    }
    puVar3 = local_d0;
    lVar8 = local_e8;
    lVar10 = 0;
    do {
      uVar13 = puVar3[lVar10 + 5];
      if (uVar13 != 0xffffffff) {
        lVar14 = (ulonglong)(uVar13 & 0x1ff) * 0x34 +
                 *(longlong *)(*(longlong *)(lVar8 + 0x58) + (ulonglong)(uVar13 >> 9) * 8);
        dVar18 = (double)FUN_146c872b4(lVar8,lVar14,uVar16);
        uVar6 = uStack_c0;
        if (dVar18 <= (double)CONCAT44(uVar22,uVar20) && (double)CONCAT44(uVar22,uVar20) != dVar18)
        {
          lVar17 = (longlong)(int)(uint)uStack_c0;
          uVar13 = (uint)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar13);
          if (uStack_c0._4_4_ < uVar13) {
            FUN_146c92ae4(&local_c8,uVar6 & 0xffffffff);
          }
          *(longlong *)(local_c8 + lVar17 * 8) = lVar14;
          uVar16 = local_e0;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 8);
    param_4 = local_d8;
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c879a2 FUN_146c879a2 body=1110 status=ok
// SIG undefined FUN_146c879a2(void)

void FUN_146c879a2(double *param_1,double *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double **ppdVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1c8 [40];
  undefined8 local_1a0;
  double *local_198;
  uint local_190;
  int iStack_18c;
  undefined4 local_188;
  undefined4 local_184;
  double *local_180;
  undefined8 local_178;
  double *local_170;
  uint local_168;
  int iStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  double **local_80;
  uint local_78;
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  pdVar2 = param_1 + 0x1b;
  pdVar1 = param_1 + 0x1d;
  local_1a0 = 0x100000000;
  local_190 = 0xffffffff;
  iStack_18c = 0;
  local_188 = 0;
  iVar5 = 0;
  local_198 = pdVar1;
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1449c0562(&local_1a0);
    iVar5 = *(int *)(param_1 + 0x20);
  }
  local_168 = local_190;
  iStack_164 = iStack_18c;
  local_160 = local_188;
  local_15c = local_184;
  local_178 = local_1a0;
  local_170 = local_198;
  local_180 = pdVar2;
  if ((iStack_18c != iVar5) || (local_198 != pdVar1)) {
    do {
      local_1a0 = CONCAT44(local_1a0._4_4_,
                           *(undefined4 *)((longlong)*local_180 + (longlong)iStack_164 * 0xc));
      (*(code *)*param_3)(param_3[1]);
      local_168 = local_168 & ~local_178._4_4_;
      FUN_1449c0562(&local_178);
    } while (local_180 != pdVar2 || (local_170 != pdVar1 || iStack_164 != iVar5));
  }
  FUN_146c87dfa(param_1,&local_180,param_2);
  while (0 < (int)local_78) {
    ppdVar4 = local_80;
    if (local_80 == (double **)0x0) {
      ppdVar4 = &local_180;
    }
    pdVar2 = ppdVar4[(ulonglong)local_78 - 1];
    local_78 = local_78 - 1;
    uVar7 = *(uint *)pdVar2;
    uVar7 = *(uint *)(*(longlong *)((longlong)param_1[0xe] + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
    if (uVar7 != 0xffffffff) {
      iVar5 = *(int *)(*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      if (iVar5 < 8) {
        if (0 < iVar5) {
          iVar5 = iVar5 + uVar7;
          do {
            uVar7 = uVar7 + 1;
            local_1a0 = CONCAT44(local_1a0._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)
                                    ((longlong)param_1[0x11] + (ulonglong)(uVar7 >> 9) * 8) +
                                  (ulonglong)(uVar7 & 0x1ff) * 4));
            (*(code *)*param_3)(param_3[1],&local_1a0);
          } while ((int)uVar7 < iVar5);
        }
      }
      else {
        uVar11 = uVar7 + 7;
        if ((int)(uVar7 + 7) < (int)uVar7) {
          uVar11 = uVar7;
        }
        uVar9 = uVar7;
        do {
          uVar9 = uVar9 + 1;
          local_1a0 = CONCAT44(local_1a0._4_4_,
                               *(undefined4 *)
                                (*(longlong *)
                                  ((longlong)param_1[0x11] + (ulonglong)(uVar9 >> 9) * 8) +
                                (ulonglong)(uVar9 & 0x1ff) * 4));
          (*(code *)*param_3)(param_3[1],&local_1a0);
        } while (uVar9 - uVar11 != 1);
        uVar7 = *(uint *)(*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar7 + 9 >> 9) * 8) +
                         (ulonglong)(uVar7 + 9 & 0x1ff) * 4);
        if (uVar7 != 0xffffffff) {
          dVar12 = param_1[0x18];
          do {
            local_1a0 = CONCAT44(local_1a0._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)((longlong)dVar12 + (ulonglong)(uVar7 >> 9) * 8) +
                                  (ulonglong)(uVar7 & 0x1ff) * 4));
            (*(code *)*param_3)(param_3[1],&local_1a0);
            dVar12 = param_1[0x18];
            uVar7 = *(uint *)(*(longlong *)((longlong)dVar12 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                             (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          } while (uVar7 != 0xffffffff);
        }
      }
    }
    lVar6 = 0;
    do {
      uVar11 = local_78;
      uVar7 = *(uint *)((longlong)pdVar2 + (lVar6 + 5) * 4);
      if (uVar7 != 0xffffffff) {
        lVar3 = *(longlong *)((longlong)param_1[0xb] + (ulonglong)(uVar7 >> 9) * 8);
        lVar10 = (ulonglong)(uVar7 & 0x1ff) * 0x34;
        dVar13 = *param_1 / (double)(1L << (*(byte *)(lVar3 + 4 + lVar10) & 0x1f));
        dVar12 = param_1[1] * dVar13;
        dVar14 = (double)*(int *)(lVar3 + 8 + lVar10) * dVar13 - dVar12;
        if (dVar14 <= *param_2) {
          dVar15 = (double)*(int *)(lVar3 + 0xc + lVar10) * dVar13 - dVar12;
          if (dVar15 <= param_2[1]) {
            dVar16 = (double)*(int *)(lVar3 + 0x10 + lVar10) * dVar13 - dVar12;
            if ((((dVar16 <= param_2[2]) &&
                 (dVar13 = dVar12 + dVar12 + dVar13, *param_2 <= dVar14 + dVar13)) &&
                (param_2[1] <= dVar15 + dVar13)) && (param_2[2] <= dVar16 + dVar13)) {
              lVar8 = (longlong)(int)local_78;
              local_78 = local_78 + 1;
              if (local_74 < local_78) {
                FUN_146c8b824(&local_180,uVar11);
              }
              ppdVar4 = local_80;
              if (local_80 == (double **)0x0) {
                ppdVar4 = &local_180;
              }
              ppdVar4[lVar8] = (double *)(lVar3 + lVar10);
            }
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 8);
  }
  if (local_80 != (double **)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c87dfa FUN_146c87dfa body=431 status=ok
// SIG undefined FUN_146c87dfa(void)

longlong FUN_146c87dfa(double *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_c8 [40];
  double *local_a0;
  double *local_98;
  longlong local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  longlong local_70;
  double *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0x2000000000;
  iVar2 = *(int *)(param_1 + 0x2e) - *(int *)((longlong)param_1 + 0x19c);
  if (10 < iVar2) {
    dVar1 = *param_1;
    dVar4 = param_1[1] * dVar1;
    auVar9._0_8_ = (*param_3 - dVar4) / dVar1;
    auVar9._8_8_ = 0;
    auVar9 = roundsd(auVar9,auVar9,9);
    auVar8._0_8_ = (param_3[1] - dVar4) / dVar1;
    auVar8._8_8_ = 0;
    auVar8 = roundsd(auVar8,auVar8,9);
    auVar7._0_8_ = (param_3[2] - dVar4) / dVar1;
    auVar7._8_8_ = 0;
    auVar7 = roundsd(auVar7,auVar7,9);
    auVar5._0_8_ = (dVar4 + *param_3) / dVar1;
    auVar5._8_8_ = 0;
    auVar5 = roundsd(auVar5,auVar5,9);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (param_3[1] + dVar4) / dVar1;
    auVar6 = roundsd(ZEXT816(0),auVar6,9);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (param_3[2] + dVar4) / dVar1;
    auVar3 = roundsd(ZEXT816(0),auVar3,9);
    if ((((int)auVar5._0_8_ - (int)auVar9._0_8_) + 1) *
        (((int)auVar6._0_8_ - (int)auVar8._0_8_) + 1) *
        (((int)auVar3._0_8_ - (int)auVar7._0_8_) + 1) < iVar2) {
      local_88 = (int)auVar9._0_8_;
      local_84 = (int)auVar8._0_8_;
      local_80 = (int)auVar7._0_8_;
      local_7c = (int)auVar5._0_8_;
      local_78 = (int)auVar6._0_8_;
      local_74 = (int)auVar3._0_8_;
      local_70 = param_2;
      local_68 = param_1;
      FUN_146c8b552();
      goto LAB_146c87f73;
    }
  }
  local_a0 = param_1;
  local_98 = param_3;
  local_90 = param_2;
  FUN_146c8b650(param_1 + 0x2d);
LAB_146c87f73:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c87faa FUN_146c87faa body=1200 status=ok
// SIG undefined FUN_146c87faa(void)

undefined8 FUN_146c87faa(double *param_1,double *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  double dVar6;
  double **ppdVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_1c8 [40];
  undefined8 local_1a0;
  undefined8 uStack_198;
  uint local_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  double *local_180;
  undefined4 local_178;
  uint uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint local_168;
  int iStack_164;
  undefined8 uStack_160;
  double **local_80;
  uint local_78;
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  pdVar2 = param_1 + 0x1b;
  pdVar1 = param_1 + 0x1d;
  local_1a0 = 0x100000000;
  local_190 = 0xffffffff;
  iStack_18c = 0;
  uStack_188 = 0;
  uStack_198 = pdVar1;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_1a0);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x20);
  }
  uStack_160 = CONCAT44(uStack_184,uStack_188);
  local_168 = local_190;
  iStack_164 = iStack_18c;
  local_178 = (undefined4)local_1a0;
  uStack_174 = local_1a0._4_4_;
  uStack_170 = (undefined4)uStack_198;
  uStack_16c = uStack_198._4_4_;
  local_180 = pdVar2;
  if ((iStack_18c != (int)uVar9) || (uStack_198 != pdVar1)) {
    do {
      local_1a0 = CONCAT44(local_1a0._4_4_,
                           *(undefined4 *)((longlong)*local_180 + (longlong)iStack_164 * 0xc));
      cVar5 = (*(code *)*param_3)(param_3[1],&local_1a0);
      if (cVar5 == '\0') {
        uVar10 = 0;
        goto LAB_146c883f9;
      }
      local_168 = local_168 & ~uStack_174;
      FUN_1449c0562(&local_178);
    } while (local_180 != pdVar2 ||
             ((double *)CONCAT44(uStack_16c,uStack_170) != pdVar1 || iStack_164 != (int)uVar9));
  }
  FUN_146c87dfa(param_1,&local_180,param_2);
  uVar10 = CONCAT71((int7)(uVar9 >> 8),1);
  if (0 < (int)local_78) {
    do {
      ppdVar7 = local_80;
      if (local_80 == (double **)0x0) {
        ppdVar7 = &local_180;
      }
      pdVar2 = ppdVar7[(ulonglong)local_78 - 1];
      local_78 = local_78 - 1;
      uVar8 = *(uint *)pdVar2;
      uVar8 = *(uint *)(*(longlong *)((longlong)param_1[0xe] + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
      if (uVar8 != 0xffffffff) {
        iVar15 = *(int *)(*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar8 >> 9) * 8) +
                         (ulonglong)(uVar8 & 0x1ff) * 4);
        if (iVar15 < 8) {
          if (iVar15 < 1) goto LAB_146c882b9;
          iVar15 = iVar15 + uVar8;
          bVar4 = true;
          do {
            uVar8 = uVar8 + 1;
            if (bVar4) {
              local_1a0 = CONCAT44(local_1a0._4_4_,
                                   *(undefined4 *)
                                    (*(longlong *)
                                      ((longlong)param_1[0x11] + (ulonglong)(uVar8 >> 9) * 8) +
                                    (ulonglong)(uVar8 & 0x1ff) * 4));
              cVar5 = (*(code *)*param_3)(param_3[1],&local_1a0);
              if (cVar5 == '\0') {
                bVar4 = false;
              }
            }
          } while ((int)uVar8 < iVar15);
        }
        else {
          uVar16 = uVar8 + 7;
          if ((int)(uVar8 + 7) < (int)uVar8) {
            uVar16 = uVar8;
          }
          bVar4 = true;
          uVar13 = uVar8;
          do {
            uVar13 = uVar13 + 1;
            if (bVar4) {
              local_1a0 = CONCAT44(local_1a0._4_4_,
                                   *(undefined4 *)
                                    (*(longlong *)
                                      ((longlong)param_1[0x11] + (ulonglong)(uVar13 >> 9) * 8) +
                                    (ulonglong)(uVar13 & 0x1ff) * 4));
              cVar5 = (*(code *)*param_3)(param_3[1],&local_1a0);
              if (cVar5 == '\0') {
                bVar4 = false;
              }
            }
          } while (uVar13 - uVar16 != 1);
          uVar8 = *(uint *)(*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar8 + 9 >> 9) * 8)
                           + (ulonglong)(uVar8 + 9 & 0x1ff) * 4);
          if (uVar8 != 0xffffffff) {
            dVar6 = param_1[0x18];
            do {
              if (bVar4) {
                local_1a0 = CONCAT44(local_1a0._4_4_,
                                     *(undefined4 *)
                                      (*(longlong *)((longlong)dVar6 + (ulonglong)(uVar8 >> 9) * 8)
                                      + (ulonglong)(uVar8 & 0x1ff) * 4));
                cVar5 = (*(code *)*param_3)(param_3[1],&local_1a0);
                if (cVar5 == '\0') {
                  bVar4 = false;
                }
                dVar6 = param_1[0x18];
              }
              uVar8 = *(uint *)(*(longlong *)((longlong)dVar6 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                               (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
            } while (uVar8 != 0xffffffff);
          }
        }
        if (!bVar4) {
          uVar10 = 0;
          goto LAB_146c88443;
        }
      }
LAB_146c882b9:
      lVar11 = 0;
      do {
        uVar16 = local_78;
        uVar8 = *(uint *)((longlong)pdVar2 + (lVar11 + 5) * 4);
        if (uVar8 != 0xffffffff) {
          lVar3 = *(longlong *)((longlong)param_1[0xb] + (ulonglong)(uVar8 >> 9) * 8);
          lVar14 = (ulonglong)(uVar8 & 0x1ff) * 0x34;
          dVar17 = *param_1 / (double)(1L << (*(byte *)(lVar3 + 4 + lVar14) & 0x1f));
          dVar6 = param_1[1] * dVar17;
          dVar18 = (double)*(int *)(lVar3 + 8 + lVar14) * dVar17 - dVar6;
          if (dVar18 <= *param_2) {
            dVar19 = (double)*(int *)(lVar3 + 0xc + lVar14) * dVar17 - dVar6;
            if (dVar19 <= param_2[1]) {
              dVar20 = (double)*(int *)(lVar3 + 0x10 + lVar14) * dVar17 - dVar6;
              if ((((dVar20 <= param_2[2]) &&
                   (dVar17 = dVar6 + dVar6 + dVar17, *param_2 <= dVar18 + dVar17)) &&
                  (param_2[1] <= dVar19 + dVar17)) && (param_2[2] <= dVar20 + dVar17)) {
                lVar12 = (longlong)(int)local_78;
                local_78 = local_78 + 1;
                if (local_74 < local_78) {
                  FUN_146c8b824(&local_180,uVar16);
                }
                ppdVar7 = local_80;
                if (local_80 == (double **)0x0) {
                  ppdVar7 = &local_180;
                }
                ppdVar7[lVar12] = (double *)(lVar3 + lVar14);
              }
            }
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != 8);
    } while (0 < (int)local_78);
    uVar10 = 1;
  }
LAB_146c88443:
  if (local_80 != (double **)0x0) {
    FUN_1400020a8();
  }
LAB_146c883f9:
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 146c8845c FUN_146c8845c body=1087 status=ok
// SIG undefined FUN_146c8845c(void)

void FUN_146c8845c(double *param_1,double *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double **ppdVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  double *local_170;
  uint local_168;
  int iStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  double *local_158;
  undefined8 local_150;
  double *local_148;
  uint local_140;
  int iStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  double **local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pdVar2 = param_1 + 0x1b;
  pdVar1 = param_1 + 0x1d;
  local_178 = 0x100000000;
  local_168 = 0xffffffff;
  iStack_164 = 0;
  local_160 = 0;
  iVar5 = 0;
  local_170 = pdVar1;
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1449c0562(&local_178);
    iVar5 = *(int *)(param_1 + 0x20);
  }
  local_140 = local_168;
  iStack_13c = iStack_164;
  local_138 = local_160;
  local_134 = local_15c;
  local_150 = local_178;
  local_148 = local_170;
  local_158 = pdVar2;
  if ((iStack_164 != iVar5) || (local_170 != pdVar1)) {
    do {
      local_178 = CONCAT44(local_178._4_4_,
                           *(undefined4 *)((longlong)*local_158 + (longlong)iStack_13c * 0xc));
      (*(code *)*param_3)(param_3[1]);
      local_140 = local_140 & ~local_150._4_4_;
      FUN_1449c0562(&local_150);
    } while (local_158 != pdVar2 || (local_148 != pdVar1 || iStack_13c != iVar5));
  }
  FUN_146c8889c(param_1,&local_158,param_2);
  while (0 < (int)local_50) {
    ppdVar4 = local_58;
    if (local_58 == (double **)0x0) {
      ppdVar4 = &local_158;
    }
    pdVar2 = ppdVar4[(ulonglong)local_50 - 1];
    local_50 = local_50 - 1;
    uVar7 = *(uint *)pdVar2;
    uVar7 = *(uint *)(*(longlong *)((longlong)param_1[0xe] + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
    if (uVar7 != 0xffffffff) {
      iVar5 = *(int *)(*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      if (iVar5 < 8) {
        if (0 < iVar5) {
          iVar5 = iVar5 + uVar7;
          do {
            uVar7 = uVar7 + 1;
            local_178 = CONCAT44(local_178._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)
                                    ((longlong)param_1[0x11] + (ulonglong)(uVar7 >> 9) * 8) +
                                  (ulonglong)(uVar7 & 0x1ff) * 4));
            (*(code *)*param_3)(param_3[1],&local_178);
          } while ((int)uVar7 < iVar5);
        }
      }
      else {
        uVar11 = uVar7 + 7;
        if ((int)(uVar7 + 7) < (int)uVar7) {
          uVar11 = uVar7;
        }
        uVar9 = uVar7;
        do {
          uVar9 = uVar9 + 1;
          local_178 = CONCAT44(local_178._4_4_,
                               *(undefined4 *)
                                (*(longlong *)
                                  ((longlong)param_1[0x11] + (ulonglong)(uVar9 >> 9) * 8) +
                                (ulonglong)(uVar9 & 0x1ff) * 4));
          (*(code *)*param_3)(param_3[1],&local_178);
        } while (uVar9 - uVar11 != 1);
        uVar7 = *(uint *)(*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar7 + 9 >> 9) * 8) +
                         (ulonglong)(uVar7 + 9 & 0x1ff) * 4);
        if (uVar7 != 0xffffffff) {
          dVar12 = param_1[0x18];
          do {
            local_178 = CONCAT44(local_178._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)((longlong)dVar12 + (ulonglong)(uVar7 >> 9) * 8) +
                                  (ulonglong)(uVar7 & 0x1ff) * 4));
            (*(code *)*param_3)(param_3[1],&local_178);
            dVar12 = param_1[0x18];
            uVar7 = *(uint *)(*(longlong *)((longlong)dVar12 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                             (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          } while (uVar7 != 0xffffffff);
        }
      }
    }
    lVar6 = 0;
    do {
      uVar11 = local_50;
      uVar7 = *(uint *)((longlong)pdVar2 + (lVar6 + 5) * 4);
      if (uVar7 != 0xffffffff) {
        lVar3 = *(longlong *)((longlong)param_1[0xb] + (ulonglong)(uVar7 >> 9) * 8);
        lVar10 = (ulonglong)(uVar7 & 0x1ff) * 0x34;
        dVar12 = *param_1 / (double)(1L << (*(byte *)(lVar3 + 4 + lVar10) & 0x1f));
        dVar13 = param_1[1] * dVar12;
        dVar15 = (double)*(int *)(lVar3 + 8 + lVar10) * dVar12 - dVar13;
        if ((((dVar15 < param_2[3]) &&
             (dVar14 = dVar13 + dVar13 + dVar12, *param_2 < dVar15 + dVar14)) &&
            (dVar15 = (double)*(int *)(lVar3 + 0xc + lVar10) * dVar12 - dVar13, dVar15 < param_2[4])
            ) && (((param_2[1] < dVar15 + dVar14 &&
                   (dVar13 = dVar12 * (double)*(int *)(lVar3 + 0x10 + lVar10) - dVar13,
                   dVar13 < param_2[5])) && (param_2[2] < dVar13 + dVar14)))) {
          lVar8 = (longlong)(int)local_50;
          local_50 = local_50 + 1;
          if (local_4c < local_50) {
            FUN_146c8b824(&local_158,uVar11);
          }
          ppdVar4 = local_58;
          if (local_58 == (double **)0x0) {
            ppdVar4 = &local_158;
          }
          ppdVar4[lVar8] = (double *)(lVar3 + lVar10);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 8);
  }
  if (local_58 != (double **)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c8889c FUN_146c8889c body=402 status=ok
// SIG undefined FUN_146c8889c(void)

longlong FUN_146c8889c(double *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_98 [32];
  double *local_78;
  double *local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  longlong local_48;
  double *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0x2000000000;
  iVar2 = *(int *)(param_1 + 0x2e) - *(int *)((longlong)param_1 + 0x19c);
  if (10 < iVar2) {
    dVar1 = *param_1;
    dVar4 = param_1[1] * dVar1;
    auVar7._0_8_ = (*param_3 - dVar4) / dVar1;
    auVar7._8_8_ = 0;
    auVar9 = roundsd(auVar7,auVar7,9);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (param_3[1] - dVar4) / dVar1;
    auVar10 = roundsd(ZEXT816(0),auVar3,9);
    auVar6._0_8_ = (param_3[2] - dVar4) / dVar1;
    auVar6._8_8_ = 0;
    auVar7 = roundsd(auVar6,auVar6,9);
    auVar5._0_8_ = (dVar4 + param_3[3]) / dVar1;
    auVar5._8_8_ = 0;
    auVar5 = roundsd(auVar5,auVar5,9);
    auVar11._0_8_ = (param_3[4] + dVar4) / dVar1;
    auVar11._8_8_ = 0;
    auVar6 = roundsd(ZEXT816(0),auVar11,9);
    auVar8._0_8_ = (param_3[5] + dVar4) / dVar1;
    auVar8._8_8_ = 0;
    auVar3 = roundsd(ZEXT816(0),auVar8,9);
    if ((((int)auVar5._0_8_ - (int)auVar9._0_8_) + 1) *
        (((int)auVar6._0_8_ - (int)auVar10._0_8_) + 1) *
        (((int)auVar3._0_8_ - (int)auVar7._0_8_) + 1) < iVar2) {
      local_60 = (int)auVar9._0_8_;
      local_5c = (int)auVar10._0_8_;
      local_58 = (int)auVar7._0_8_;
      local_54 = (int)auVar5._0_8_;
      local_50 = (int)auVar6._0_8_;
      local_4c = (int)auVar3._0_8_;
      local_48 = param_2;
      local_40 = param_1;
      FUN_146c8ba4e();
      goto LAB_146c88a08;
    }
  }
  local_78 = param_1;
  local_70 = param_3;
  local_68 = param_2;
  FUN_146c8bb4c(param_1 + 0x2d);
LAB_146c88a08:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c88a30 FUN_146c88a30 body=1162 status=ok
// SIG undefined FUN_146c88a30(void)

void FUN_146c88a30(double *param_1,double *param_2,longlong *param_3)

{
  double *pdVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  double **ppdVar5;
  uint uVar6;
  longlong lVar7;
  double *pdVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_1a8 [40];
  double *local_180;
  undefined8 local_178;
  double *local_170;
  uint local_168;
  int iStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  double *local_158;
  undefined8 local_150;
  double *local_148;
  uint local_140;
  int iStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  double **local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  pdVar8 = param_1 + 0x1b;
  pdVar1 = param_1 + 0x1d;
  local_178 = 0x100000000;
  local_168 = 0xffffffff;
  iStack_164 = 0;
  local_160 = 0;
  iVar11 = 0;
  local_170 = pdVar1;
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1449c0562(&local_178);
    iVar11 = *(int *)(param_1 + 0x20);
  }
  local_140 = local_168;
  iStack_13c = iStack_164;
  local_138 = local_160;
  local_134 = local_15c;
  local_150 = local_178;
  local_148 = local_170;
  local_158 = pdVar8;
  if ((iStack_164 != iVar11) || (local_170 != pdVar1)) {
    do {
      uVar2 = *(undefined4 *)((longlong)*local_158 + (longlong)iStack_13c * 0xc);
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1446f48e2(param_3,iVar3);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = uVar2;
      local_140 = local_140 & ~local_150._4_4_;
      FUN_1449c0562(&local_150);
    } while (local_158 != pdVar8 || (local_148 != pdVar1 || iStack_13c != iVar11));
  }
  FUN_146c8889c(param_1,&local_158,param_2);
  while (0 < (int)local_50) {
    ppdVar5 = local_58;
    if (local_58 == (double **)0x0) {
      ppdVar5 = &local_158;
    }
    local_180 = ppdVar5[(ulonglong)local_50 - 1];
    local_50 = local_50 - 1;
    uVar6 = *(uint *)(*(longlong *)
                       ((longlong)param_1[0xe] + (ulonglong)(*(uint *)local_180 >> 9) * 8) +
                     (ulonglong)(*(uint *)local_180 & 0x1ff) * 4);
    if (uVar6 != 0xffffffff) {
      iVar11 = *(int *)(*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar6 >> 9) * 8) +
                       (ulonglong)(uVar6 & 0x1ff) * 4);
      if (iVar11 < 8) {
        if (0 < iVar11) {
          iVar11 = iVar11 + uVar6;
          do {
            uVar6 = uVar6 + 1;
            uVar2 = *(undefined4 *)
                     (*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4);
            iVar3 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
              FUN_1446f48e2(param_3,iVar3);
            }
            *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = uVar2;
          } while ((int)uVar6 < iVar11);
        }
      }
      else {
        uVar12 = uVar6 + 7;
        if ((int)(uVar6 + 7) < (int)uVar6) {
          uVar12 = uVar6;
        }
        uVar9 = uVar6;
        do {
          uVar9 = uVar9 + 1;
          uVar2 = *(undefined4 *)
                   (*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar9 >> 9) * 8) +
                   (ulonglong)(uVar9 & 0x1ff) * 4);
          iVar11 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar11 + 1U) {
            FUN_1446f48e2(param_3,iVar11);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar11 * 4) = uVar2;
        } while (uVar9 - uVar12 != 1);
        uVar6 = *(uint *)(*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar6 + 9 >> 9) * 8) +
                         (ulonglong)(uVar6 + 9 & 0x1ff) * 4);
        if (uVar6 != 0xffffffff) {
          dVar14 = param_1[0x18];
          do {
            uVar2 = *(undefined4 *)
                     (*(longlong *)((longlong)dVar14 + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4);
            iVar11 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar11 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar11 + 1U) {
              FUN_1446f48e2(param_3,iVar11);
            }
            *(undefined4 *)(*param_3 + (longlong)iVar11 * 4) = uVar2;
            dVar14 = param_1[0x18];
            uVar6 = *(uint *)(*(longlong *)((longlong)dVar14 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                             (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
          } while (uVar6 != 0xffffffff);
        }
      }
    }
    lVar7 = 0;
    pdVar8 = local_180;
    do {
      uVar12 = local_50;
      uVar6 = *(uint *)((longlong)pdVar8 + (lVar7 + 5) * 4);
      if (uVar6 != 0xffffffff) {
        lVar4 = *(longlong *)((longlong)param_1[0xb] + (ulonglong)(uVar6 >> 9) * 8);
        lVar10 = (ulonglong)(uVar6 & 0x1ff) * 0x34;
        dVar14 = *param_1 / (double)(1L << (*(byte *)(lVar4 + 4 + lVar10) & 0x1f));
        dVar15 = param_1[1] * dVar14;
        dVar17 = (double)*(int *)(lVar4 + 8 + lVar10) * dVar14 - dVar15;
        if ((((dVar17 < param_2[3]) &&
             (dVar16 = dVar15 + dVar15 + dVar14, *param_2 < dVar17 + dVar16)) &&
            (dVar17 = (double)*(int *)(lVar4 + 0xc + lVar10) * dVar14 - dVar15, dVar17 < param_2[4])
            ) && (((param_2[1] < dVar17 + dVar16 &&
                   (dVar15 = dVar14 * (double)*(int *)(lVar4 + 0x10 + lVar10) - dVar15,
                   dVar15 < param_2[5])) && (param_2[2] < dVar15 + dVar16)))) {
          lVar13 = (longlong)(int)local_50;
          local_50 = local_50 + 1;
          if (local_4c < local_50) {
            FUN_146c8b824(&local_158,uVar12);
          }
          ppdVar5 = local_58;
          if (local_58 == (double **)0x0) {
            ppdVar5 = &local_158;
          }
          ppdVar5[lVar13] = (double *)(lVar4 + lVar10);
          pdVar8 = local_180;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 8);
  }
  if (local_58 != (double **)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c88ebc FUN_146c88ebc body=571 status=ok
// SIG undefined FUN_146c88ebc(void)

void FUN_146c88ebc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_208 [40];
  undefined4 local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  longlong **local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  LPCRITICAL_SECTION local_1b0;
  longlong *local_1a8;
  code *local_1a0;
  undefined8 **local_198;
  undefined8 local_190;
  undefined4 local_188;
  _RTL_CRITICAL_SECTION local_180;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  uint local_140;
  int iStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar1 = (longlong *)(param_1 + 0xd8);
  lVar2 = param_1 + 0xe8;
  local_180.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&DAT_100000000;
  local_180.OwningThread._0_4_ = 0xffffffff;
  local_180.OwningThread._4_4_ = 0;
  local_180.LockSemaphore._0_4_ = 0;
  iVar6 = 0;
  local_1d0 = param_2;
  local_180._8_8_ = lVar2;
  if (*(int *)(param_1 + 0x100) != 0) {
    FUN_1449c0562(&local_180);
    iVar6 = *(int *)(param_1 + 0x100);
  }
  local_140 = (uint)local_180.OwningThread;
  iStack_13c = local_180.OwningThread._4_4_;
  local_138 = local_180.LockSemaphore._0_4_;
  local_134 = local_180.LockSemaphore._4_4_;
  local_150 = local_180.DebugInfo;
  local_148._0_4_ = local_180.LockCount;
  local_148._4_4_ = local_180.RecursionCount;
  local_158 = plVar1;
  if ((local_180.OwningThread._4_4_ != iVar6) || (local_180._8_8_ != lVar2)) {
    do {
      uVar3 = *(undefined4 *)(*local_158 + (longlong)iStack_13c * 0xc);
      iVar4 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
        FUN_1446f48e2(param_3,iVar4);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar4 * 4) = uVar3;
      local_140 = local_140 & ~local_150._4_4_;
      FUN_1449c0562(&local_150);
    } while (local_158 != plVar1 || (local_148 != lVar2 || iStack_13c != iVar6));
  }
  uVar5 = local_1d0;
  FUN_146c8889c(param_1,&local_158);
  InitializeCriticalSection(&local_180);
  SetCriticalSectionSpinCount(&local_180,4000);
  local_198 = &local_1c8;
  local_1b8 = uVar5;
  local_1d8 = &local_190;
  local_190 = 0;
  local_188 = 0;
  local_1a0 = FUN_1429865b0;
  local_1e0 = 0;
  local_1c8 = &local_158;
  local_1c0 = param_1;
  local_1b0 = &local_180;
  local_1a8 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",local_50,1);
  DeleteCriticalSection(&local_180);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c890f8 FUN_146c890f8 body=918 status=ok
// SIG undefined FUN_146c890f8(void)

void FUN_146c890f8(double *param_1,undefined8 param_2,double *param_3,longlong *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_188 [40];
  uint *local_160;
  undefined8 local_158 [32];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined8 *)0x0;
  local_50 = 0x2000000001;
  local_158[0] = param_2;
  local_50._0_4_ = 1;
  do {
    puVar4 = local_58;
    if (local_58 == (undefined8 *)0x0) {
      puVar4 = local_158;
    }
    uVar5 = (ulonglong)(uint)local_50;
    local_50 = CONCAT44(local_50._4_4_,(uint)local_50 - 1);
    local_160 = (uint *)puVar4[uVar5 - 1];
    uVar6 = *(uint *)puVar4[uVar5 - 1];
    uVar6 = *(uint *)(*(longlong *)((longlong)param_1[0xe] + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4);
    if (uVar6 != 0xffffffff) {
      iVar11 = *(int *)(*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar6 >> 9) * 8) +
                       (ulonglong)(uVar6 & 0x1ff) * 4);
      if (iVar11 < 8) {
        if (0 < iVar11) {
          iVar11 = iVar11 + uVar6;
          do {
            uVar6 = uVar6 + 1;
            uVar1 = *(undefined4 *)
                     (*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4);
            iVar2 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
              FUN_1446f48e2(param_4,iVar2);
            }
            *(undefined4 *)(*param_4 + (longlong)iVar2 * 4) = uVar1;
          } while ((int)uVar6 < iVar11);
        }
      }
      else {
        uVar12 = uVar6 + 7;
        if ((int)(uVar6 + 7) < (int)uVar6) {
          uVar12 = uVar6;
        }
        uVar9 = uVar6;
        do {
          uVar9 = uVar9 + 1;
          uVar1 = *(undefined4 *)
                   (*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar9 >> 9) * 8) +
                   (ulonglong)(uVar9 & 0x1ff) * 4);
          iVar11 = (int)param_4[1];
          *(uint *)(param_4 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar11 + 1U) {
            FUN_1446f48e2(param_4,iVar11);
          }
          *(undefined4 *)(*param_4 + (longlong)iVar11 * 4) = uVar1;
        } while (uVar9 - uVar12 != 1);
        uVar6 = *(uint *)(*(longlong *)((longlong)param_1[0x11] + (ulonglong)(uVar6 + 9 >> 9) * 8) +
                         (ulonglong)(uVar6 + 9 & 0x1ff) * 4);
        if (uVar6 != 0xffffffff) {
          dVar14 = param_1[0x18];
          do {
            uVar1 = *(undefined4 *)
                     (*(longlong *)((longlong)dVar14 + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4);
            iVar11 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar11 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar11 + 1U) {
              FUN_1446f48e2(param_4,iVar11);
            }
            *(undefined4 *)(*param_4 + (longlong)iVar11 * 4) = uVar1;
            dVar14 = param_1[0x18];
            uVar6 = *(uint *)(*(longlong *)((longlong)dVar14 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                             (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
          } while (uVar6 != 0xffffffff);
        }
      }
    }
    lVar7 = 0;
    puVar8 = local_160;
    do {
      uVar5 = local_50;
      uVar6 = puVar8[lVar7 + 5];
      if (uVar6 != 0xffffffff) {
        lVar3 = *(longlong *)((longlong)param_1[0xb] + (ulonglong)(uVar6 >> 9) * 8);
        lVar10 = (ulonglong)(uVar6 & 0x1ff) * 0x34;
        dVar14 = *param_1 / (double)(1L << (*(byte *)(lVar3 + 4 + lVar10) & 0x1f));
        dVar15 = param_1[1] * dVar14;
        dVar17 = (double)*(int *)(lVar3 + 8 + lVar10) * dVar14 - dVar15;
        if ((((dVar17 < param_3[3]) &&
             (dVar16 = dVar15 + dVar15 + dVar14, *param_3 < dVar17 + dVar16)) &&
            (dVar17 = (double)*(int *)(lVar3 + 0xc + lVar10) * dVar14 - dVar15, dVar17 < param_3[4])
            ) && (((param_3[1] < dVar17 + dVar16 &&
                   (dVar15 = dVar14 * (double)*(int *)(lVar3 + 0x10 + lVar10) - dVar15,
                   dVar15 < param_3[5])) && (param_3[2] < dVar15 + dVar16)))) {
          lVar13 = (longlong)(int)(uint)local_50;
          uVar6 = (uint)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_146c8b824(local_158,uVar5 & 0xffffffff);
          }
          puVar4 = local_58;
          if (local_58 == (undefined8 *)0x0) {
            puVar4 = local_158;
          }
          puVar4[lVar13] = lVar3 + lVar10;
          puVar8 = local_160;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 8);
  } while (0 < (int)(uint)local_50);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c89490 FUN_146c89490 body=79 status=ok
// SIG undefined FUN_146c89490(void)

undefined8 FUN_146c89490(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar1 = FUN_1448eb174(param_2,0xc,0);
  iVar2 = FUN_146c8b7be(param_1,uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *param_1;
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
    }
  }
  return uVar4;
}



// FUNCTION 146c894e0 FUN_146c894e0 body=175 status=ok
// SIG undefined FUN_146c894e0(void)

byte FUN_146c894e0(double *param_1,double *param_2)

{
  if (*param_1 <= *param_2) {
    if (param_1[1] <= param_2[1]) {
      if ((((param_1[2] <= param_2[2]) && (*param_2 <= param_1[3])) && (param_2[1] <= param_1[4]))
         && (((param_2[2] <= param_1[5] && (*param_1 <= param_2[3])) && (param_1[1] <= param_2[4])))
         ) {
        return (param_2[5] <= param_1[5] && param_1[2] <= param_2[5]) &
               -(param_2[3] <= param_1[3]) & -(param_2[4] <= param_1[4]);
      }
    }
  }
  return 0;
}



// FUNCTION 146c89590 FUN_146c89590 body=693 status=ok
// SIG undefined FUN_146c89590(void)

void FUN_146c89590(longlong param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[10] = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0x10c);
  *param_2 = 0;
  uVar3 = *(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c);
  uVar4 = 0;
  if ((uVar3 != 0) &&
     (uVar4 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x20) - 1U))) {
    uVar6 = 1;
    uVar5 = 1;
    if (1 < (int)uVar3) {
      uVar6 = uVar3;
    }
    do {
      uVar4 = uVar6;
      if (uVar6 == uVar5) break;
      uVar9 = uVar5 >> 9;
      uVar10 = uVar5 & 0x1ff;
      uVar4 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x20))[uVar9] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  uVar6 = 1;
  if (uVar4 != uVar3) {
    uVar6 = 0;
    do {
      uVar5 = (uint)*(byte *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar4 >> 9) * 8) + 4 +
                             (ulonglong)(uVar4 & 0x1ff) * 0x34);
      if (uVar6 < uVar5) {
        uVar6 = uVar5;
      }
      *param_2 = uVar6;
      uVar5 = uVar4 + 1;
      if ((int)(uVar4 + 1) < (int)uVar3) {
        uVar5 = uVar3;
      }
      do {
        uVar9 = uVar5;
        if (uVar5 - 1 == uVar4) break;
        uVar4 = uVar4 + 1;
        uVar9 = uVar4;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x20) +
                                             (ulonglong)(uVar4 >> 9) * 8) +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
      uVar4 = uVar9;
    } while (uVar4 != uVar3);
    uVar6 = uVar6 + 1;
  }
  *param_2 = uVar6;
  local_34 = 0;
  FUN_1448156a8(param_2 + 6,&local_34);
  local_34 = 0;
  FUN_1448156a8(param_2 + 2,&local_34,*param_2);
  uVar3 = *(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c);
  uVar4 = 0;
  if ((uVar3 != 0) &&
     (uVar4 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x20) - 1U))) {
    uVar6 = 1;
    uVar5 = 1;
    if (1 < (int)uVar3) {
      uVar6 = uVar3;
    }
    do {
      uVar9 = uVar5;
      uVar4 = uVar6;
      if (uVar6 == uVar9) break;
      uVar5 = uVar9 + 1;
      uVar4 = uVar9;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x20))[uVar9 >> 9] +
                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  }
  do {
    uVar6 = uVar4;
    if (uVar6 == uVar3) {
      if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar6 >> 9) * 8);
    lVar7 = (ulonglong)(uVar6 & 0x1ff) * 0x34;
    piVar1 = (int *)(*(longlong *)(param_2 + 2) + (ulonglong)*(byte *)(lVar2 + 4 + lVar7) * 4);
    *piVar1 = *piVar1 + 1;
    uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4);
    if (uVar4 == 0xffffffff) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
    }
    piVar1 = (int *)(*(longlong *)(param_2 + 6) + (ulonglong)*(byte *)(lVar2 + lVar7 + 4) * 4);
    *piVar1 = *piVar1 + iVar8;
    uVar5 = uVar6 + 1;
    if ((int)(uVar6 + 1) < (int)uVar3) {
      uVar5 = uVar3;
    }
    do {
      uVar4 = uVar5;
      if (uVar5 - 1 == uVar6) break;
      uVar6 = uVar6 + 1;
      uVar4 = uVar6;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x20) +
                                           (ulonglong)(uVar6 >> 9) * 8) +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 146c89846 FUN_146c89846 body=99 status=ok
// SIG undefined FUN_146c89846(void)

void FUN_146c89846(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_18 = *(undefined4 *)(param_3 + 2);
  uStack_14 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_10 = *(undefined4 *)(param_3 + 3);
  uStack_c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_48 = param_4;
  FUN_146c898aa(param_1 + 2,&local_38,&local_28,*param_1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c898aa FUN_146c898aa body=761 status=ok
// SIG undefined FUN_146c898aa(void)

void FUN_146c898aa(longlong *param_1,undefined4 *param_2,double *param_3,uint param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  double dVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_148 [32];
  uint local_128;
  undefined4 *local_120;
  uint local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  int local_f0;
  double local_e8;
  double dStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a4;
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  int local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_3[2] <= *param_3 && *param_3 != param_3[2]) ||
     (param_3[3] <= param_3[1] && param_3[1] != param_3[3])) {
    local_88 = *param_2;
    uStack_84 = param_2[1];
    uStack_80 = param_2[2];
    uStack_7c = param_2[3];
    FUN_146c93a26(param_3);
  }
  iVar9 = param_2[2];
  lVar6 = param_1[1];
  FUN_144a127d2(param_1,(int)lVar6 + iVar9,1);
  lVar6 = (longlong)(int)lVar6 * 4 + *param_1;
  if (0 < (int)param_2[2]) {
    lVar3 = 0;
    do {
      *(int *)(lVar6 + lVar3 * 4) = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[2]);
  }
  if (1 < iVar9) {
    dVar2 = log((double)iVar9);
    uVar8 = (uint)(dVar2 * 1.4426950408889634);
    local_98[0] = 0;
    local_98[1] = 0;
    FUN_144a127d2(local_98,uVar8,1);
    *(int *)(local_98[0] + -4 + (longlong)(int)uVar8 * 4) = iVar9;
    uVar4 = (ulonglong)uVar8;
    if (1 < (int)uVar8) {
      do {
        uVar4 = uVar4 - 1;
        if (0 < iVar9) {
          iVar5 = 0;
          do {
            uVar7 = *(int *)(param_5 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(param_5 + 4) = uVar7;
            if ((float)(uVar7 >> 9 | 0x3f800000) + -1.0 < 0.5) {
              lVar3 = (longlong)iVar9;
              iVar9 = iVar9 + -1;
              uVar1 = *(undefined4 *)(lVar6 + (longlong)iVar5 * 4);
              *(undefined4 *)(lVar6 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar6 + -4 + lVar3 * 4)
              ;
              *(undefined4 *)(lVar6 + -4 + lVar3 * 4) = uVar1;
              iVar5 = iVar5 + -1;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar9);
        }
        *(int *)(local_98[0] + -4 + uVar4 * 4) = iVar9;
      } while (1 < (longlong)uVar4);
    }
    local_a4 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_10c = param_4;
    if (0 < (int)uVar8) {
      uVar4 = 0;
      iVar9 = 0;
      lVar3 = local_98[0];
      do {
        iVar5 = *(int *)(lVar3 + uVar4 * 4) - iVar9;
        if (iVar5 != 0) {
          FUN_146c92ba6(&local_c8);
          lVar3 = (longlong)iVar9 * 4 + lVar6;
          local_e8 = *param_3;
          dStack_e0 = param_3[1];
          local_d8 = *(undefined4 *)(param_3 + 2);
          uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x14);
          uStack_d0 = *(undefined4 *)(param_3 + 3);
          uStack_cc = *(undefined4 *)((longlong)param_3 + 0x1c);
          local_108 = *param_2;
          uStack_104 = param_2[1];
          uStack_100 = param_2[2];
          uStack_fc = param_2[3];
          local_128 = local_10c;
          local_f8 = lVar3;
          local_f0 = iVar5;
          FUN_146c93abc(&local_c8,&local_108,&local_f8,&local_e8);
          if (local_a4 == iVar5) {
            local_64 = 0;
            local_120 = &local_64;
            local_128 = CONCAT31(local_128._1_3_,(char)uVar4) & 0xffffff01;
            local_78 = lVar3;
            local_70 = iVar5;
            FUN_146c93c30(&local_c8,&local_78,local_c8,0);
          }
          iVar9 = *(int *)(local_98[0] + uVar4 * 4);
          lVar3 = local_98[0];
        }
        uVar4 = uVar4 + 1;
      } while (uVar8 != uVar4);
    }
    FUN_146c92b6a(&local_c8);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c89ba4 FUN_146c89ba4 body=89 status=ok
// SIG undefined FUN_146c89ba4(void)

void FUN_146c89ba4(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *param_3;
  uStack_10 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_38 = param_4;
  FUN_146c89bfe(param_1 + 2,&local_28,&local_18,*param_1);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c89bfe FUN_146c89bfe body=833 status=ok
// SIG undefined FUN_146c89bfe(void)

void FUN_146c89bfe(longlong *param_1,longlong *param_2,float *param_3,uint param_4,longlong param_5)

{
  undefined4 uVar1;
  double dVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined4 *local_100;
  uint local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_94;
  longlong local_88 [3];
  int local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  fVar12 = *param_3;
  fVar11 = param_3[2];
  if (((fVar11 < fVar12) || (param_3[3] <= param_3[1] && param_3[1] != param_3[3])) &&
     (lVar7 = param_2[1], (longlong)(int)lVar7 != 0)) {
    lVar3 = *param_2;
    fVar14 = param_3[1];
    fVar13 = param_3[3];
    lVar6 = 0;
    do {
      fVar15 = *(float *)(lVar3 + lVar6);
      if (fVar15 < fVar12) {
        *param_3 = fVar15;
        fVar12 = fVar15;
        fVar15 = *(float *)(lVar3 + lVar6);
      }
      if (fVar11 < fVar15) {
        param_3[2] = fVar15;
        fVar11 = fVar15;
      }
      fVar15 = *(float *)(lVar3 + 4 + lVar6);
      if (fVar15 < fVar14) {
        param_3[1] = fVar15;
        fVar14 = fVar15;
        fVar15 = *(float *)(lVar3 + 4 + lVar6);
      }
      if (fVar13 < fVar15) {
        param_3[3] = fVar15;
        fVar13 = fVar15;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar6);
  }
  iVar10 = (int)param_2[1];
  lVar7 = param_1[1];
  FUN_144a127d2(param_1,(int)lVar7 + iVar10,1);
  lVar7 = (longlong)(int)lVar7 * 4 + *param_1;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      *(int *)(lVar7 + lVar3 * 4) = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if (1 < iVar10) {
    dVar2 = log((double)iVar10);
    uVar9 = (uint)(dVar2 * 1.4426950408889634);
    local_88[0] = 0;
    local_88[1] = 0;
    FUN_144a127d2(local_88,uVar9,1);
    *(int *)(local_88[0] + -4 + (longlong)(int)uVar9 * 4) = iVar10;
    uVar4 = (ulonglong)uVar9;
    if (1 < (int)uVar9) {
      do {
        uVar4 = uVar4 - 1;
        if (0 < iVar10) {
          iVar5 = 0;
          do {
            uVar8 = *(int *)(param_5 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(param_5 + 4) = uVar8;
            if ((float)(uVar8 >> 9 | 0x3f800000) + -1.0 < 0.5) {
              lVar3 = (longlong)iVar10;
              iVar10 = iVar10 + -1;
              uVar1 = *(undefined4 *)(lVar7 + (longlong)iVar5 * 4);
              *(undefined4 *)(lVar7 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar7 + -4 + lVar3 * 4)
              ;
              *(undefined4 *)(lVar7 + -4 + lVar3 * 4) = uVar1;
              iVar5 = iVar5 + -1;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar10);
        }
        *(int *)(local_88[0] + -4 + uVar4 * 4) = iVar10;
      } while (1 < (longlong)uVar4);
    }
    local_94 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_ec = param_4;
    if (0 < (int)uVar9) {
      uVar4 = 0;
      iVar10 = 0;
      lVar3 = local_88[0];
      do {
        iVar5 = *(int *)(lVar3 + uVar4 * 4) - iVar10;
        if (iVar5 != 0) {
          FUN_146c933f2(&local_b8);
          lVar3 = (longlong)iVar10 * 4 + lVar7;
          local_c8 = *(undefined8 *)param_3;
          uStack_c0 = *(undefined8 *)(param_3 + 2);
          local_e8 = (undefined4)*param_2;
          uStack_e4 = *(undefined4 *)((longlong)param_2 + 4);
          uStack_e0 = (undefined4)param_2[1];
          uStack_dc = *(undefined4 *)((longlong)param_2 + 0xc);
          local_108 = local_ec;
          local_d8 = lVar3;
          local_d0 = iVar5;
          FUN_146c93d94(&local_b8,&local_e8,&local_d8,&local_c8);
          if (local_94 == iVar5) {
            local_64 = 0;
            local_100 = &local_64;
            local_108 = CONCAT31(local_108._1_3_,(char)uVar4) & 0xffffff01;
            local_88[2] = lVar3;
            local_70 = iVar5;
            FUN_146c93ef4(&local_b8,local_88 + 2,local_b8,0);
          }
          iVar10 = *(int *)(local_88[0] + uVar4 * 4);
          lVar3 = local_88[0];
        }
        uVar4 = uVar4 + 1;
      } while (uVar9 != uVar4);
    }
    FUN_146c933b6(&local_b8);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c89f40 FUN_146c89f40 body=229 status=ok
// SIG undefined FUN_146c89f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_146c89f40(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c992124) {
    FUN_144b3d300(&DAT_14c992124);
    if (DAT_14c992124 == -1) {
      _DAT_14c9920d0 = 0xffdda0ddff00ff7f;
      uRam000000014c9920d8 = 0xff98fb98fff0e68c;
      _DAT_14c9920e0 = 0xff7fffd4ffb0c4de;
      uRam000000014c9920e8 = 0xffdaa520fffa8072;
      _DAT_14c9920f0 = 0xffcd5c5cff20b2aa;
      uRam000000014c9920f8 = 0xffff7f50ffe9967a;
      _DAT_14c992100 = 0xffadff2fffdeb887;
      uRam000000014c992108 = 0xff66cdaaffe6e6fa;
      _DAT_14c992110 = 0xffd8bfd8;
      uRam000000014c992114 = 0xfff5deb3;
      uRam000000014c992118 = 0xff87cefa;
      uRam000000014c99211c = 0xffffb6c1;
      _DAT_14c992120 = 0xff00fa9a;
      _Init_thread_footer(&DAT_14c992124);
    }
  }
  if (param_2 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_14c9920d0 + (ulonglong)((param_2 - 1U) % 0x15) * 4);
  }
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 146c8a026 FUN_146c8a026 body=213 status=ok
// SIG undefined FUN_146c8a026(void)

void FUN_146c8a026(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  float fVar6;
  
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 8);
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar3 = (longlong *)param_2[2];
  if (plVar3 != plVar2) {
    param_2[2] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x20);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  fVar1 = *(float *)(param_1 + 0xc);
  fVar6 = *(float *)(param_1 + 8);
  uVar5 = -(uint)(*(float *)(param_1 + 0x3c) <= fVar1);
  *(uint *)(param_1 + 8) = ~uVar5 & (uint)fVar1 | (uint)*(float *)(param_1 + 0x3c) & uVar5;
  fVar6 = (fVar1 - fVar6) * param_3 + *(float *)(param_1 + 0x3c);
  uVar5 = -(uint)(fVar6 <= fVar1);
  *(uint *)(param_1 + 0xc) = ~uVar5 & (uint)fVar1 | (uint)fVar6 & uVar5;
  cVar4 = FUN_144a7c5f6(param_4);
  if (cVar4 != '\0') {
    return;
  }
  FUN_146c8a0fc(param_1,param_4);
  return;
}



// FUNCTION 146c8a0fc FUN_146c8a0fc body=165 status=ok
// SIG undefined FUN_146c8a0fc(void)

void FUN_146c8a0fc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x38) != -1) && (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x10))) {
    return;
  }
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x20) = (int)param_2[1];
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x30) = (int)param_2[1];
                    /* WARNING: Could not recover jumptable at 0x000146c8a18f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 146c8a1a2 FUN_146c8a1a2 body=250 status=ok
// SIG undefined FUN_146c8a1a2(void)

void FUN_146c8a1a2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 1) + 1) {
    fVar5 = *(float *)(param_1 + 0xc);
  }
  else {
    if (*(int *)(param_1 + 0x10) <= *(int *)(param_2 + 1)) {
      return;
    }
    fVar5 = *(float *)(param_1 + 0xc);
    if (*(float *)((longlong)param_2 + 4) <= fVar5 && fVar5 != *(float *)((longlong)param_2 + 4)) {
      return;
    }
  }
  LOCK();
  *(float *)(param_1 + 0x3c) = fVar5;
  UNLOCK();
  plVar1 = (longlong *)(param_1 + 0x18);
  cVar4 = FUN_144a7c5f6(plVar1);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 8) = *param_2;
  plVar2 = (longlong *)param_2[2];
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != plVar2) {
    *plVar1 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 3);
  if ((cVar4 != '\0') && (cVar4 = FUN_144a7c5f6(plVar1), cVar4 != '\0')) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000146c8a272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 146c8a29c FUN_146c8a29c body=102 status=ok
// SIG undefined FUN_146c8a29c(void)

longlong * FUN_146c8a29c(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_144a5dc74(param_1 + 3);
  *(undefined1 *)(param_1 + 5) = 0;
  if (param_2 != 0) {
    FUN_146c8a026(param_2,param_1 + 1,param_3,param_4);
  }
  return param_1;
}



// FUNCTION 146c8a302 FUN_146c8a302 body=214 status=ok
// SIG undefined FUN_146c8a302(void)

longlong * FUN_146c8a302(longlong *param_1,longlong param_2,float param_3,undefined8 param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_144a5dc74(param_1 + 3);
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    fVar2 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 8);
    fVar3 = 0.0;
    if (0.0 < fVar2) {
      fVar3 = param_3 * fVar2 + *(float *)(param_2 + 8);
      uVar1 = -(uint)(fVar3 <= *(float *)(param_2 + 0x3c));
      fVar3 = ((float)(uVar1 & (uint)*(float *)(param_2 + 0x3c) | ~uVar1 & (uint)fVar3) -
              *(float *)(param_2 + 0x3c)) / fVar2;
    }
    *param_1 = param_2;
    param_1[1] = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_144a5dc74(param_1 + 3);
    *(undefined1 *)(param_1 + 5) = 0;
    FUN_146c8a026(param_2,param_1 + 1,fVar3,param_4);
  }
  return param_1;
}



// FUNCTION 146c8a3d8 FUN_146c8a3d8 body=43 status=ok
// SIG undefined FUN_146c8a3d8(void)

void FUN_146c8a3d8(longlong *param_1)

{
  if (((char)param_1[5] == '\0') && (*param_1 != 0)) {
    FUN_146c8a1a2(*param_1,param_1 + 1);
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 146c8a403 FUN_146c8a403 body=724 status=ok
// SIG undefined FUN_146c8a403(void)

void FUN_146c8a403(double *param_1,double *param_2,double param_3,double param_4,double param_5,
                  int param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_178 [32];
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (0 < param_6) {
    local_148 = param_1[2];
    local_150 = *param_1;
    local_158 = param_1[1];
    dVar4 = 0.0;
    do {
      dVar11 = (param_4 * dVar4 + param_3) * 0.017453292519943295 * 0.5;
      dVar10 = sin(dVar11);
      local_f8 = cos(dVar11);
      local_110 = dVar10 * *param_2;
      local_108 = dVar10 * param_2[1];
      local_100 = dVar10 * param_2[2];
      dVar11 = dVar4 * param_5;
      local_130 = param_2[2] * dVar11 - local_148;
      local_138 = param_2[1] * dVar11 - local_158;
      local_140 = dVar11 * *param_2 - local_150;
      FUN_146bed047(&local_128,&local_110,&local_140);
      dVar8 = local_f8;
      dVar7 = local_100;
      dVar6 = local_108;
      dVar5 = local_110;
      dVar11 = local_118 + param_1[2];
      dVar10 = local_120 + param_1[1];
      dVar3 = local_128 + *param_1;
      iVar1 = (int)param_7[1];
      *(uint *)(param_7 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_7 + 0xc) < iVar1 + 1U) {
        FUN_146c8d502(param_7,iVar1);
      }
      lVar2 = *param_7;
      lVar9 = (longlong)iVar1 * 0x38;
      *(double *)(lVar2 + lVar9) = dVar3;
      *(double *)(lVar2 + 8 + lVar9) = dVar10;
      *(double *)(lVar2 + 0x10 + lVar9) = dVar11;
      *(double *)(lVar2 + 0x18 + lVar9) = dVar5;
      *(double *)(lVar2 + 0x20 + lVar9) = dVar6;
      *(double *)(lVar2 + 0x28 + lVar9) = dVar7;
      *(double *)(lVar2 + 0x30 + lVar9) = dVar8;
      dVar4 = dVar4 + 1.0;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c8a6d8 FUN_146c8a6d8 body=459 status=ok
// SIG undefined FUN_146c8a6d8(void)

void FUN_146c8a6d8(longlong *param_1,double *param_2,double *param_3,double param_4,
                  undefined8 param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [4];
  int local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a4 = 0;
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    do {
      lVar4 = *param_1;
      lVar9 = (longlong)local_a4;
      dVar2 = param_2[2];
      dVar12 = *(double *)(lVar4 + 0x10 + lVar9 * 0x18) - dVar2;
      dVar3 = param_2[1];
      dVar7 = *(double *)(lVar4 + 8 + lVar9 * 0x18) - dVar3;
      dVar6 = *(double *)(lVar4 + lVar9 * 0x18) - *param_2;
      dVar11 = param_3[2] * dVar12 + *param_3 * dVar6 + dVar7 * param_3[1];
      dVar5 = param_3[2] * dVar11;
      dVar10 = param_3[1] * dVar11;
      dVar11 = dVar11 * *param_3;
      dVar6 = dVar11 - dVar6;
      dVar7 = dVar10 - dVar7;
      dVar12 = dVar5 - dVar12;
      if (dVar12 * dVar12 + dVar6 * dVar6 + dVar7 * dVar7 < param_4 * param_4) {
        pdVar1 = (double *)(lVar4 + lVar9 * 0x18);
        *pdVar1 = *param_2 + dVar11;
        pdVar1[1] = dVar3 + dVar10;
        pdVar1[2] = dVar2 + dVar5;
        FUN_1447cbafe(param_5,local_a8,&local_a4,0);
        iVar8 = (int)param_1[1];
      }
      local_a4 = local_a4 + 1;
    } while (local_a4 < iVar8);
  }
  if ((local_a0 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8a8a4 FUN_146c8a8a4 body=830 status=ok
// SIG undefined FUN_146c8a8a4(void)

bool FUN_146c8a8a4(undefined8 *param_1,double *param_2,double *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  double *pdVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  uVar4 = *(uint *)(param_1 + 1);
  if ((int)uVar4 < 2) {
    return true;
  }
  pdVar5 = (double *)*param_1;
  dVar19 = param_2[2];
  dVar17 = *param_2;
  dVar18 = param_2[1];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar15 = (pdVar5[2] - dVar19) * dVar3 + (*pdVar5 - dVar17) * dVar1 + (pdVar5[1] - dVar18) * dVar2;
  pdVar13 = pdVar5 + 5;
  uVar12 = 0;
  uVar14 = 1;
  do {
    dVar16 = (*pdVar13 - dVar19) * dVar3 +
             (pdVar13[-2] - dVar17) * dVar1 + (pdVar13[-1] - dVar18) * dVar2;
    if (dVar16 < dVar15) {
      uVar12 = uVar14 & 0xffffffff;
      dVar15 = dVar16;
    }
    uVar14 = uVar14 + 1;
    pdVar13 = pdVar13 + 3;
  } while (uVar4 != uVar14);
  iVar11 = (int)uVar12;
  if (param_4 == '\0') {
    if (iVar11 == 0) {
      return false;
    }
    if (iVar11 == uVar4 - 1) {
      return true;
    }
  }
  lVar10 = (longlong)iVar11;
  dVar16 = dVar3 * dVar15 - (pdVar5[lVar10 * 3 + 2] - dVar19);
  dVar6 = dVar2 * dVar15 - (pdVar5[lVar10 * 3 + 1] - dVar18);
  dVar7 = dVar1 * dVar15 - (pdVar5[lVar10 * 3] - dVar17);
  dVar16 = SQRT(dVar16 * dVar16 + dVar7 * dVar7 + dVar6 * dVar6);
  lVar10 = (longlong)((int)((uVar4 - 1) + iVar11) % (int)uVar4);
  dVar6 = (pdVar5[lVar10 * 3 + 2] - dVar19) * dVar3 +
          (pdVar5[lVar10 * 3] - dVar17) * dVar1 + dVar2 * (pdVar5[lVar10 * 3 + 1] - dVar18);
  dVar9 = dVar1 * dVar6 - (pdVar5[lVar10 * 3] - dVar17);
  dVar8 = dVar2 * dVar6 - (pdVar5[lVar10 * 3 + 1] - dVar18);
  dVar7 = dVar3 * dVar6 - (pdVar5[lVar10 * 3 + 2] - dVar19);
  lVar10 = (longlong)((iVar11 + 1) % (int)uVar4);
  dVar20 = (pdVar5[lVar10 * 3 + 2] - dVar19) * dVar3 +
           (pdVar5[lVar10 * 3] - dVar17) * dVar1 + dVar2 * (pdVar5[lVar10 * 3 + 1] - dVar18);
  dVar17 = dVar1 * dVar20 - (pdVar5[lVar10 * 3] - dVar17);
  dVar18 = dVar2 * dVar20 - (pdVar5[lVar10 * 3 + 1] - dVar18);
  dVar19 = dVar3 * dVar20 - (pdVar5[lVar10 * 3 + 2] - dVar19);
  return 0.0 < (SQRT(dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8) - dVar16) * (dVar20 - dVar15) -
               (dVar6 - dVar15) *
               (SQRT(dVar19 * dVar19 + dVar17 * dVar17 + dVar18 * dVar18) - dVar16);
}



// FUNCTION 146c8abe2 FUN_146c8abe2 body=631 status=ok
// SIG undefined FUN_146c8abe2(void)

void FUN_146c8abe2(longlong *param_1,double param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar13 = tan(param_2 * 0.017453292519943295 * 0.5);
  lVar11 = param_1[1];
  if ((longlong)(int)lVar11 != 0) {
    lVar5 = *param_1;
    lVar12 = 0;
    do {
      dVar1 = *(double *)(lVar5 + 0x10 + lVar12);
      dVar7 = dVar1 - param_3[2];
      dVar2 = *(double *)(lVar5 + 8 + lVar12);
      dVar8 = dVar2 - param_3[1];
      dVar16 = *(double *)(lVar5 + lVar12) - *param_3;
      dVar17 = *param_4;
      dVar3 = param_4[1];
      dVar18 = dVar17 * dVar8 - dVar16 * dVar3;
      dVar4 = param_4[2];
      dVar6 = dVar4 * dVar16 - dVar7 * dVar17;
      dVar9 = dVar3 * dVar7 - dVar8 * dVar4;
      dVar10 = SQRT(dVar18 * dVar18 + dVar9 * dVar9 + dVar6 * dVar6);
      dVar14 = 1.0 / dVar10;
      if (0.0 < dVar10) {
        dVar18 = dVar18 * dVar14;
        dVar6 = dVar6 * dVar14;
      }
      else {
        dVar18 = 0.0;
        dVar6 = 0.0;
      }
      dVar15 = dVar7 * dVar4 + dVar16 * dVar17 + dVar8 * dVar3;
      dVar16 = dVar15 * dVar17 - dVar16;
      dVar8 = dVar3 * dVar15 - dVar8;
      dVar7 = dVar4 * dVar15 - dVar7;
      dVar17 = SQRT(dVar7 * dVar7 + dVar16 * dVar16 + dVar8 * dVar8) * dVar13;
      *(double *)(lVar5 + lVar12) =
           *(double *)(lVar5 + lVar12) -
           dVar17 * (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar14 * dVar9));
      *(double *)(lVar5 + 8 + lVar12) = dVar2 - dVar6 * dVar17;
      *(double *)(lVar5 + 0x10 + lVar12) = dVar1 - dVar18 * dVar17;
      lVar12 = lVar12 + 0x18;
    } while ((longlong)(int)lVar11 * 0x18 != lVar12);
  }
  return;
}



// FUNCTION 146c8ae5a FUN_146c8ae5a body=71 status=ok
// SIG undefined FUN_146c8ae5a(void)

void FUN_146c8ae5a(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  if ((int)uVar1 < param_2) {
    FUN_1411b328a();
    do {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar1 >> 9) * 8) +
       (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_2);
  }
  return;
}



// FUNCTION 146c8aea2 FUN_146c8aea2 body=665 status=ok
// SIG undefined FUN_146c8aea2(void)

void FUN_146c8aea2(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_a8 [44];
  int local_7c;
  int local_78;
  int local_74;
  longlong local_70 [2];
  undefined1 local_60 [8];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 < *param_1 * 0x200 + param_1[1]) {
    FUN_1411b328a(param_1);
  }
  param_1[0x12] = 0;
  FUN_141040b84(local_60);
  FUN_141040b84(&local_78);
  uVar6 = *param_1 * 0x200 + param_1[1];
  if (0 < (int)uVar6) {
    uVar7 = 0;
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      if (iVar1 != -1) {
        param_1[0x12] = param_1[0x12] + 1;
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar7 >> 9) * 8) +
                (ulonglong)(uVar7 & 0x1ff) * 4) = iVar5;
        uVar3 = iVar5 + 9;
        FUN_146bedf4e(local_60,&DAT_149f3cc38,uVar3);
        iVar4 = 0;
        do {
          *(undefined4 *)
           (*(longlong *)(local_58[0] + (ulonglong)((uint)(iVar5 + iVar4) >> 9) * 8) +
           (ulonglong)(iVar5 + iVar4 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)
                  (*(longlong *)(param_1 + 8) + (ulonglong)((uint)(iVar1 + iVar4) >> 9) * 8) +
                (ulonglong)(iVar1 + iVar4 & 0x1ff) * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 != 9);
        uVar2 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 8) + (ulonglong)(iVar1 + 9U >> 9) * 8) +
                         (ulonglong)(iVar1 + 9U & 0x1ff) * 4);
        if (uVar2 == 0xffffffff) {
          *(undefined4 *)
           (*(longlong *)(local_58[0] + (ulonglong)(uVar3 >> 9) * 8) +
           (ulonglong)(uVar3 & 0x1ff) * 4) = 0xffffffff;
        }
        else {
          *(int *)(*(longlong *)(local_58[0] + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4) = local_78 * 0x200 + local_74;
          FUN_146bee31c(&local_78,
                        (ulonglong)((uVar2 & 0x1ff) << 2) +
                        *(longlong *)(*(longlong *)(param_1 + 0x16) + (ulonglong)(uVar2 >> 9) * 8));
          for (uVar3 = *(uint *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x16) + (ulonglong)(uVar2 + 1 >> 9) * 8)
                                + (ulonglong)(uVar2 + 1 & 0x1ff) * 4); uVar3 != 0xffffffff;
              uVar3 = *(uint *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x16) + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                               (ulonglong)(uVar3 + 1 & 0x1ff) * 4)) {
            local_7c = local_78 * 0x200 + local_74 + 1;
            FUN_146bee31c(&local_78,&local_7c);
            FUN_146bee31c(&local_78,
                          (ulonglong)((uVar3 & 0x1ff) << 2) +
                          *(longlong *)(*(longlong *)(param_1 + 0x16) + (ulonglong)(uVar3 >> 9) * 8)
                         );
          }
          FUN_146bee31c(&local_78,&DAT_149f3cc38);
        }
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 10;
    } while (uVar7 != uVar6);
  }
  FUN_146c40f34(param_1 + 6,local_60);
  FUN_146c40f34(param_1 + 0x14,&local_78);
  param_1[0x1a] = -1;
  FUN_1411b3fe4(param_1 + 0xc);
  FUN_141082b5c(local_70,0);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(local_58,0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8b13c FUN_146c8b13c body=169 status=ok
// SIG undefined FUN_146c8b13c(void)

uint FUN_146c8b13c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x34);
  iVar4 = iVar3 * 0x200 + iVar1;
  if (iVar4 < 1) {
    uVar2 = *(uint *)(param_1 + 0x1c);
    iVar3 = *(int *)(param_1 + 0x18) * 0x200;
    uVar5 = iVar3 + uVar2;
    FUN_146bedf4e(param_1 + 0x18,&DAT_149f3cc38,iVar3 + uVar2 + 9);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
     (ulonglong)(uVar2 & 0x1ff) * 4) = 0;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  else {
    uVar5 = iVar4 - 1;
    uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
    if (iVar1 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = iVar1 + -1 != 0;
      *(int *)(param_1 + 0x34) = iVar1 + -1;
    }
    if (iVar3 != 0 && !bVar6) {
      *(int *)(param_1 + 0x30) = iVar3 + -1;
      *(undefined4 *)(param_1 + 0x34) = 0x200;
    }
  }
  return uVar5;
}



// FUNCTION 146c8b1e6 FUN_146c8b1e6 body=246 status=ok
// SIG undefined FUN_146c8b1e6(void)

undefined8 FUN_146c8b1e6(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(param_2 + 9U >> 9) * 8);
  uVar9 = (ulonglong)(param_2 + 9U & 0x1ff);
  uVar8 = *(uint *)(lVar1 + uVar9 * 4);
  uVar3 = (ulonglong)uVar8;
  if (uVar3 == 0xffffffff) {
LAB_146c8b2d7:
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x58);
    if (*(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 4
                ) == param_3) {
      puVar6 = (undefined4 *)(lVar1 + uVar9 * 4);
      uVar9 = uVar3 + 1 >> 9;
      uVar8 = (uint)(uVar3 + 1) & 0x1ff;
      puVar7 = (undefined4 *)((ulonglong)(uVar8 << 2) + *(longlong *)(lVar2 + uVar9 * 8));
    }
    else {
      do {
        uVar5 = (int)uVar3 + 1;
        uVar8 = *(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 4);
        uVar3 = (ulonglong)uVar8;
        if (uVar3 == 0xffffffff) goto LAB_146c8b2d7;
      } while (*(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4) != param_3);
      uVar9 = uVar3 + 1 >> 9;
      uVar8 = (uint)(uVar3 + 1) & 0x1ff;
      puVar7 = (undefined4 *)((ulonglong)(uVar8 << 2) + *(longlong *)(lVar2 + uVar9 * 8));
      puVar6 = (undefined4 *)
               ((ulonglong)((uVar5 & 0x1ff) << 2) +
               *(longlong *)(lVar2 + (ulonglong)(uVar5 >> 9) * 8));
    }
    *puVar6 = *puVar7;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar9 * 8) + (ulonglong)uVar8 * 4)
         = *(undefined4 *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = (int)uVar3;
    uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar4;
}



// FUNCTION 146c8b2dc FUN_146c8b2dc body=66 status=ok
// SIG undefined FUN_146c8b2dc(void)

void FUN_146c8b2dc(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)((param_2 & 0x1ff) << 2);
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_3 >> 9) * 8) +
   (ulonglong)(param_3 & 0x1ff) * 4) =
       *(undefined4 *)
        (*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 >> 9) * 8) + uVar1);
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 >> 9) * 8) + uVar1)
       = 0xffffffff;
  return;
}



// FUNCTION 146c8b31e FUN_146c8b31e body=279 status=ok
// SIG undefined FUN_146c8b31e(void)

void FUN_146c8b31e(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 >> 9) * 8) +
                      (ulonglong)(param_2 & 0x1ff) * 4);
  if (local_3c != 0xffffffff) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(local_3c >> 9) * 8);
    if (8 < *(int *)(lVar4 + (ulonglong)(local_3c & 0x1ff) * 4)) {
      uVar3 = (ulonglong)(local_3c + 9 >> 9);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8);
      uVar2 = (ulonglong)(local_3c + 9 & 0x1ff);
      iVar5 = *(int *)(lVar4 + uVar2 * 4);
      if (iVar5 != -1) {
        iVar6 = *(int *)(param_1 + 0x68);
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(iVar5 + 1U >> 9) * 8);
          uVar7 = (ulonglong)(iVar5 + 1U & 0x1ff);
          iVar1 = *(int *)(lVar4 + uVar7 * 4);
          *(int *)(lVar4 + uVar7 * 4) = iVar6;
          *(int *)(param_1 + 0x68) = iVar5;
          iVar6 = iVar5;
          iVar5 = iVar1;
        } while (iVar1 != -1);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8);
      }
      *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(local_3c >> 9) * 8);
    }
    *(undefined4 *)(lVar4 + (ulonglong)(local_3c & 0x1ff) * 4) = 0;
    FUN_146bee31c(param_1 + 0x30,&local_3c);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 >> 9) * 8) +
     (ulonglong)(param_2 & 0x1ff) * 4) = 0xffffffff;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8b436 FUN_146c8b436 body=80 status=ok
// SIG undefined FUN_146c8b436(void)

longlong * FUN_146c8b436(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146c8b4d6(*param_1,(int)param_1[1]);
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



// FUNCTION 146c8b486 FUN_146c8b486 body=80 status=ok
// SIG undefined FUN_146c8b486(void)

longlong * FUN_146c8b486(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146c8b514(*param_1,(int)param_1[1]);
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



// FUNCTION 146c8b4d6 FUN_146c8b4d6 body=62 status=ok
// SIG undefined FUN_146c8b4d6(void)

void FUN_146c8b4d6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-3] + 0x10))();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146c8b514 FUN_146c8b514 body=62 status=ok
// SIG undefined FUN_146c8b514(void)

void FUN_146c8b514(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-3] + 0x10))();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146c8b552 FUN_146c8b552 body=253 status=ok
// SIG undefined FUN_146c8b552(void)

void FUN_146c8b552(longlong *param_1,int *param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_78 [36];
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = param_3[2];
  if (param_2[2] <= iVar5) {
    iVar3 = param_3[1];
    iVar8 = param_2[2];
    do {
      if (param_2[1] <= iVar3) {
        iVar5 = *param_3;
        iVar9 = param_2[1];
        do {
          iVar7 = *param_2;
          if (*param_2 <= iVar5) {
            do {
              local_54 = iVar7;
              local_50 = iVar9;
              local_4c = iVar8;
              uVar4 = FUN_1448eb174(&local_54,0xc,0);
              iVar5 = FUN_146c8b7be(param_1,uVar4);
              if (((iVar5 != -1) && (lVar6 = (longlong)iVar5 * 0x20 + *param_1, lVar6 != 0)) &&
                 (puVar1 = *(undefined4 **)(lVar6 + 0x10), puVar1 != (undefined4 *)0x0)) {
                FUN_146c8b752(param_4,*puVar1);
              }
              iVar5 = *param_3;
              bVar2 = iVar7 < iVar5;
              iVar7 = iVar7 + 1;
            } while (bVar2);
            iVar3 = param_3[1];
          }
          bVar2 = iVar9 < iVar3;
          iVar9 = iVar9 + 1;
        } while (bVar2);
        iVar5 = param_3[2];
      }
      bVar2 = iVar8 < iVar5;
      iVar8 = iVar8 + 1;
    } while (bVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8b650 FUN_146c8b650 body=256 status=ok
// SIG undefined FUN_146c8b650(void)

void FUN_146c8b650(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      FUN_146c8b92a(param_2,*(undefined8 *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20));
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8b752 FUN_146c8b752 body=108 status=ok
// SIG undefined FUN_146c8b752(void)

void FUN_146c8b752(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x58) + (ulonglong)(param_2 >> 9) * 8);
  iVar1 = *(int *)(lVar2 + 0x108);
  *(uint *)(lVar2 + 0x108) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x10c) < iVar1 + 1U) {
    FUN_146c8b824(lVar2,iVar1);
  }
  lVar4 = *(longlong *)(lVar2 + 0x100);
  if (*(longlong *)(lVar2 + 0x100) == 0) {
    lVar4 = lVar2;
  }
  *(ulonglong *)(lVar4 + (longlong)iVar1 * 8) = lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x34;
  return;
}



// FUNCTION 146c8b7be FUN_146c8b7be body=101 status=ok
// SIG undefined FUN_146c8b7be(void)

int FUN_146c8b7be(longlong *param_1,uint param_2,int *param_3)

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
        if (((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 4) == param_3[1]))
           && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146c8b824 FUN_146c8b824 body=119 status=ok
// SIG undefined FUN_146c8b824(void)

void FUN_146c8b824(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_146c8b89c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146c8b89c FUN_146c8b89c body=141 status=ok
// SIG undefined FUN_146c8b89c(void)

void FUN_146c8b89c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 146c8b92a FUN_146c8b92a body=291 status=ok
// SIG undefined FUN_146c8b92a(void)

void FUN_146c8b92a(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  double *pdVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pdVar2 = (double *)*param_1;
  lVar3 = *(longlong *)((longlong)pdVar2[0xb] + (ulonglong)(*param_2 >> 9) * 8);
  lVar7 = (ulonglong)(*param_2 & 0x1ff) * 0x34;
  pdVar4 = (double *)param_1[1];
  dVar9 = *pdVar2 / (double)(1L << (*(byte *)(lVar3 + 4 + lVar7) & 0x1f));
  dVar8 = pdVar2[1] * dVar9;
  dVar10 = (double)*(int *)(lVar3 + 8 + lVar7) * dVar9 - dVar8;
  if (dVar10 <= *pdVar4) {
    dVar11 = (double)*(int *)(lVar3 + 0xc + lVar7) * dVar9 - dVar8;
    if (dVar11 <= pdVar4[1]) {
      dVar12 = (double)*(int *)(lVar3 + 0x10 + lVar7) * dVar9 - dVar8;
      if (dVar12 <= pdVar4[2]) {
        dVar9 = dVar8 + dVar8 + dVar9;
        if (((*pdVar4 <= dVar10 + dVar9) && (pdVar4[1] <= dVar11 + dVar9)) &&
           (pdVar4[2] <= dVar12 + dVar9)) {
          lVar5 = param_1[2];
          iVar1 = *(int *)(lVar5 + 0x108);
          *(uint *)(lVar5 + 0x108) = iVar1 + 1U;
          if (*(uint *)(lVar5 + 0x10c) < iVar1 + 1U) {
            FUN_146c8b824(lVar5,iVar1);
          }
          lVar6 = *(longlong *)(lVar5 + 0x100);
          if (*(longlong *)(lVar5 + 0x100) == 0) {
            lVar6 = lVar5;
          }
          *(longlong *)(lVar6 + (longlong)iVar1 * 8) = lVar3 + lVar7;
        }
      }
    }
  }
  return;
}



// FUNCTION 146c8ba4e FUN_146c8ba4e body=253 status=ok
// SIG undefined FUN_146c8ba4e(void)

void FUN_146c8ba4e(longlong *param_1,int *param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_78 [36];
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = param_3[2];
  if (param_2[2] <= iVar5) {
    iVar3 = param_3[1];
    iVar8 = param_2[2];
    do {
      if (param_2[1] <= iVar3) {
        iVar5 = *param_3;
        iVar9 = param_2[1];
        do {
          iVar7 = *param_2;
          if (*param_2 <= iVar5) {
            do {
              local_54 = iVar7;
              local_50 = iVar9;
              local_4c = iVar8;
              uVar4 = FUN_1448eb174(&local_54,0xc,0);
              iVar5 = FUN_146c8b7be(param_1,uVar4);
              if (((iVar5 != -1) && (lVar6 = (longlong)iVar5 * 0x20 + *param_1, lVar6 != 0)) &&
                 (puVar1 = *(undefined4 **)(lVar6 + 0x10), puVar1 != (undefined4 *)0x0)) {
                FUN_146c8bc4e(param_4,*puVar1);
              }
              iVar5 = *param_3;
              bVar2 = iVar7 < iVar5;
              iVar7 = iVar7 + 1;
            } while (bVar2);
            iVar3 = param_3[1];
          }
          bVar2 = iVar9 < iVar3;
          iVar9 = iVar9 + 1;
        } while (bVar2);
        iVar5 = param_3[2];
      }
      bVar2 = iVar8 < iVar5;
      iVar8 = iVar8 + 1;
    } while (bVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8bb4c FUN_146c8bb4c body=256 status=ok
// SIG undefined FUN_146c8bb4c(void)

void FUN_146c8bb4c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      FUN_146c8bcba(param_2,*(undefined8 *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20));
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8bc4e FUN_146c8bc4e body=108 status=ok
// SIG undefined FUN_146c8bc4e(void)

void FUN_146c8bc4e(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x58) + (ulonglong)(param_2 >> 9) * 8);
  iVar1 = *(int *)(lVar2 + 0x108);
  *(uint *)(lVar2 + 0x108) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x10c) < iVar1 + 1U) {
    FUN_146c8b824(lVar2,iVar1);
  }
  lVar4 = *(longlong *)(lVar2 + 0x100);
  if (*(longlong *)(lVar2 + 0x100) == 0) {
    lVar4 = lVar2;
  }
  *(ulonglong *)(lVar4 + (longlong)iVar1 * 8) = lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x34;
  return;
}



// FUNCTION 146c8bcba FUN_146c8bcba body=282 status=ok
// SIG undefined FUN_146c8bcba(void)

void FUN_146c8bcba(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  double *pdVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pdVar2 = (double *)*param_1;
  lVar3 = *(longlong *)((longlong)pdVar2[0xb] + (ulonglong)(*param_2 >> 9) * 8);
  lVar7 = (ulonglong)(*param_2 & 0x1ff) * 0x34;
  pdVar4 = (double *)param_1[1];
  dVar8 = *pdVar2 / (double)(1L << (*(byte *)(lVar3 + 4 + lVar7) & 0x1f));
  dVar9 = pdVar2[1] * dVar8;
  dVar11 = (double)*(int *)(lVar3 + 8 + lVar7) * dVar8 - dVar9;
  if ((((dVar11 < pdVar4[3]) && (dVar10 = dVar9 + dVar9 + dVar8, *pdVar4 < dVar11 + dVar10)) &&
      (dVar11 = (double)*(int *)(lVar3 + 0xc + lVar7) * dVar8 - dVar9, dVar11 < pdVar4[4])) &&
     (pdVar4[1] < dVar11 + dVar10)) {
    dVar9 = dVar8 * (double)*(int *)(lVar3 + 0x10 + lVar7) - dVar9;
    if (dVar9 < pdVar4[5]) {
      if (pdVar4[2] < dVar9 + dVar10) {
        lVar5 = param_1[2];
        iVar1 = *(int *)(lVar5 + 0x108);
        *(uint *)(lVar5 + 0x108) = iVar1 + 1U;
        if (*(uint *)(lVar5 + 0x10c) < iVar1 + 1U) {
          FUN_146c8b824(lVar5,iVar1);
        }
        lVar6 = *(longlong *)(lVar5 + 0x100);
        if (*(longlong *)(lVar5 + 0x100) == 0) {
          lVar6 = lVar5;
        }
        *(longlong *)(lVar6 + (longlong)iVar1 * 8) = lVar3 + lVar7;
      }
    }
  }
  return;
}



// FUNCTION 146c8bdd4 FUN_146c8bdd4 body=150 status=ok
// SIG undefined FUN_146c8bdd4(void)

void FUN_146c8bdd4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar3 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x800);
      memset(_Dst,0,0x800);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_14584832c(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar3 = 0;
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) + (ulonglong)uVar3 * 4) =
       *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146c8be6a FUN_146c8be6a body=218 status=ok
// SIG undefined FUN_146c8be6a(void)

void FUN_146c8be6a(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar3 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (((int)uVar3 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar3 = 1;
    if (1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    plVar1 = (longlong *)(param_1 + 2);
    puVar2 = (uint *)(param_1 + 4);
    iVar6 = uVar3 - *puVar2;
    if (iVar6 == 0 || (int)uVar3 < (int)*puVar2) {
      if (uVar3 < *puVar2) {
        FUN_146c8bf44(plVar1,uVar3,0);
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x800);
        memset(_Dst,0,0x800);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_14584832c(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    iVar5 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    *param_1 = iVar5;
    param_1[1] = iVar6;
  }
  return;
}



// FUNCTION 146c8bf44 FUN_146c8bf44 body=106 status=ok
// SIG undefined FUN_146c8bf44(void)

void FUN_146c8bf44(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar3 = (longlong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar1 = (int)param_1[1];
    } while (lVar3 < iVar1);
  }
  if ((iVar1 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146c8bfae(param_1);
    return;
  }
  return;
}



// FUNCTION 146c8bfae FUN_146c8bfae body=63 status=ok
// SIG undefined FUN_146c8bfae(void)

void FUN_146c8bfae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c8bfee(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146c8bfee FUN_146c8bfee body=97 status=ok
// SIG undefined FUN_146c8bfee(void)

ulonglong FUN_146c8bfee(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
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



// FUNCTION 146c8c050 FUN_146c8c050 body=133 status=ok
// SIG undefined FUN_146c8c050(void)

undefined4 * FUN_146c8c050(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined8 local_38;
  undefined4 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined4 *)FUN_14001cc68(4,0x10);
  *local_40 = 0;
  local_30 = &local_40;
  local_38 = param_2;
  FUN_146c8c116(param_1,local_24,&local_38,0);
  FUN_146c8c0d6(param_1 + 0x50,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8c0d6 FUN_146c8c0d6 body=63 status=ok
// SIG undefined FUN_146c8c0d6(void)

void FUN_146c8c0d6(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 < *param_1) {
    *param_1 = iVar1;
    iVar1 = *param_2;
  }
  if (param_1[3] < iVar1) {
    param_1[3] = iVar1;
  }
  iVar1 = param_2[1];
  if (iVar1 < param_1[1]) {
    param_1[1] = iVar1;
    iVar1 = param_2[1];
  }
  if (param_1[4] < iVar1) {
    param_1[4] = iVar1;
  }
  iVar1 = param_2[2];
  if (iVar1 < param_1[2]) {
    param_1[2] = iVar1;
    iVar1 = param_2[2];
  }
  if (param_1[5] < iVar1) {
    param_1[5] = iVar1;
  }
  return;
}



// FUNCTION 146c8c116 FUN_146c8c116 body=336 status=ok
// SIG undefined FUN_146c8c116(void)

undefined4 *
FUN_146c8c116(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146c8c268(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_48 = *puVar1;
  local_48[2] = *puVar2;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = FUN_1448eb174(local_48,0xc,0);
  local_68 = param_4;
  cVar3 = FUN_146c8c34e(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146c8c44c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8c268 FUN_146c8c268 body=229 status=ok
// SIG undefined FUN_146c8c268(void)

int * FUN_146c8c268(longlong *param_1,int *param_2)

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



// FUNCTION 146c8c34e FUN_146c8c34e body=116 status=ok
// SIG undefined FUN_146c8c34e(void)

void FUN_146c8c34e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_146c8b7be();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar8 * 0x20) = *(undefined8 *)(param_3 + 4);
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar8 * 0x20);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_146c8c3c2(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_146c8c36a;
    }
  }
  uVar7 = 0;
LAB_146c8c36a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 146c8c3c2 FUN_146c8c3c2 body=138 status=ok
// SIG undefined FUN_146c8c3c2(void)

void FUN_146c8c3c2(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146c8c44c FUN_146c8c44c body=452 status=ok
// SIG undefined FUN_146c8c44c(void)

void FUN_146c8c44c(longlong *param_1)

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
        iVar6 = FUN_1448eb174(lVar3 + lVar10,0xc,0);
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



// FUNCTION 146c8c611 FUN_146c8c611 body=400 status=ok
// SIG undefined FUN_146c8c611(void)

void FUN_146c8c611(undefined8 param_1,double param_2,double param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,longlong param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_146c8d108(&local_b8,param_1);
  local_d8 = param_7;
  local_c0 = (undefined8 *)0x0;
  uStack_d0 = param_1;
  FUN_146c8dab2(&local_c0);
  puVar2 = local_c0;
  param_3 = (local_78 / (param_2 * 3.141592653589793 * param_2)) * param_3;
  param_3 = param_3 + param_3;
  if ((param_6 != 0) && ((double)param_6 < param_3)) {
    param_3 = (double)param_6;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = param_7;
  local_f0 = param_5;
  local_f8 = param_4;
  FUN_146c8d228(&local_d8,param_1,&local_b8,local_78 / param_3);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_144740518(puVar2);
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_146c8d426(&local_b8);
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8c7a2 FUN_146c8c7a2 body=1375 status=ok
// SIG undefined FUN_146c8c7a2(void)

void FUN_146c8c7a2(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_218 [40];
  undefined4 local_1f0;
  ulonglong *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 *local_198;
  undefined3 *local_190;
  ulonglong local_188;
  undefined4 local_180;
  undefined3 local_178;
  undefined4 uStack_175;
  undefined4 uStack_171;
  uint uStack_16d;
  undefined1 uStack_169;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  LPCRITICAL_SECTION local_150;
  LPCRITICAL_SECTION local_148;
  _RTL_CRITICAL_SECTION local_140;
  undefined1 local_118 [44];
  uint local_ec;
  undefined1 local_e8;
  undefined1 local_e7 [7];
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((*(int *)(param_1 + 0x48) == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
    local_1a8 = (undefined1  [16])0x0;
    FUN_146c8e4e8(local_1a8);
    local_118._8_8_ = local_b8;
    local_b8._8_8_ = param_1;
    local_b8._0_8_ = local_1a8;
    local_1e8 = (ulonglong *)&local_178;
    local_178 = 0;
    uStack_175 = 0;
    uStack_171 = 0;
    uStack_16d = uStack_16d & 0xffffff00;
    local_118._0_8_ = &LAB_146c8e6ba;
    local_1f0 = 0;
    local_1e0 = param_3;
    local_a8 = param_3;
    FUN_1401f8d10(L"ParallelFor Task",param_2,1);
    local_98 = 0;
    local_90 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_1b8 = (undefined1  [16])0x0;
    local_1c8 = (undefined1  [16])0x0;
    local_140.DebugInfo._0_4_ = 0;
    local_1b8._8_4_ = 0;
    if (0 < param_2) {
      iVar8 = 0;
      do {
        local_188 = local_188 & 0xffffffff00000000;
        uVar1 = FUN_1448eb174(local_1a8._0_8_ + (longlong)(int)local_140.DebugInfo * 0x14 + 4,0xc,0)
        ;
        iVar2 = FUN_146c8e78a(local_b8,uVar1);
        lVar4 = (longlong)iVar2 * 0x18 + local_b8._0_8_;
        if (lVar4 == 0 || iVar2 == -1) {
          local_188 = CONCAT44(local_188._4_4_,iVar8);
          lVar4 = local_1a8._0_8_ + (longlong)(int)local_140.DebugInfo * 0x14 + 4;
          local_178 = (undefined3)lVar4;
          uStack_175 = (undefined4)((ulonglong)lVar4 >> 0x18);
          uStack_171._0_1_ = (undefined1)((ulonglong)lVar4 >> 0x38);
          uStack_171._1_3_ = SUB83(&local_188,0);
          uStack_16d = (uint)((ulonglong)&local_188 >> 0x18);
          uStack_169 = (undefined1)((ulonglong)&local_188 >> 0x38);
          FUN_146c8e7f0(local_b8,local_118,&local_178);
          uVar5 = FUN_14001cc68(0x18,0x10);
          FUN_141040b84(uVar5);
          uVar1 = local_1c8._8_4_;
          lVar4 = (longlong)(int)local_1c8._8_4_;
          uVar3 = local_1c8._8_4_ + 1;
          local_1c8._8_4_ = uVar3;
          if ((uint)local_1c8._12_4_ < uVar3) {
            FUN_146c8ebae(local_1c8,uVar1);
          }
          *(undefined8 *)(local_1c8._0_8_ + lVar4 * 8) = uVar5;
          lVar7 = (longlong)(int)local_140.DebugInfo;
          uVar5 = local_1a8._0_8_;
          uVar1 = local_1b8._8_4_;
          lVar4 = (longlong)(int)local_1b8._8_4_;
          uVar3 = local_1b8._8_4_ + 1;
          local_1b8._8_4_ = uVar3;
          if ((uint)local_1b8._12_4_ < uVar3) {
            FUN_146bd546c(local_1b8,uVar1);
          }
          iVar8 = iVar8 + 1;
          lVar7 = uVar5 + lVar7 * 0x14;
          *(undefined4 *)(local_1b8._0_8_ + 8 + lVar4 * 0xc) = *(undefined4 *)(lVar7 + 0xc);
          *(undefined8 *)(local_1b8._0_8_ + lVar4 * 0xc) = *(undefined8 *)(lVar7 + 4);
          iVar2 = (int)local_188;
        }
        else {
          iVar2 = *(int *)(lVar4 + 0xc);
          local_188 = CONCAT44(local_188._4_4_,iVar2);
        }
        FUN_146bee31c(*(undefined8 *)(local_1c8._0_8_ + (longlong)iVar2 * 8),&local_140);
        local_140.DebugInfo._0_4_ = (int)local_140.DebugInfo + 1;
      } while ((int)local_140.DebugInfo < param_2);
    }
    local_1d8 = (undefined1  [16])0x0;
    FUN_146c8e530(local_1d8,local_1b8._8_4_);
    if (0 < (int)local_1b8._8_4_) {
      lVar4 = 0;
      lVar7 = 0;
      do {
        uStack_16d = *(uint *)(local_1b8._0_8_ + 8 + lVar4);
        uVar5 = *(undefined8 *)(local_1b8._0_8_ + lVar4);
        uStack_175 = (undefined4)uVar5;
        uStack_171 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uVar1 = uStack_171;
        local_ec = 0xffffffff;
        local_e8 = 0;
        local_e7 = (undefined1  [7])CONCAT43(uStack_175,local_178);
        uStack_171._0_1_ = (undefined1)((ulonglong)uVar5 >> 0x20);
        uStack_df = (undefined7)(CONCAT44(uStack_16d,uVar1) >> 8);
        uStack_e0 = (undefined1)uStack_171;
        local_c8 = 0xffffffff;
        uStack_c4 = 0xffffffff;
        uStack_c0 = 0xffffffff;
        uStack_bc = 0xffffffff;
        local_d8 = 0xffffffff;
        uStack_d4 = 0xffffffff;
        uStack_d0 = 0xffffffff;
        uStack_cc = 0xffffffff;
        uStack_171 = uVar1;
        local_ec = FUN_146c08aba(param_1 + 0x10);
        FUN_146c8ed90(param_1 + 0x48,&local_ec,local_ec);
        puVar6 = (uint *)FUN_146c86d86(param_1 + 0xe0,local_e7 + 3,1);
        *puVar6 = local_ec;
        *(ulonglong *)(local_1d8._0_8_ + lVar7 * 8) =
             (ulonglong)(local_ec & 0x1ff) * 0x34 +
             *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(local_ec >> 9) * 8);
        lVar7 = lVar7 + 1;
        lVar4 = lVar4 + 0xc;
      } while (lVar7 < (int)local_1b8._8_4_);
    }
    local_1b8._8_4_ = 0;
    if (local_1b8._12_4_ != 0) {
      FUN_146bd767a(local_1b8,0);
    }
    FUN_146c8be6a(param_1 + 200,param_2);
    InitializeCriticalSection((LPCRITICAL_SECTION)local_118);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)local_118,4000);
    InitializeCriticalSection(&local_140);
    SetCriticalSectionSpinCount(&local_140,4000);
    local_178 = SUB83(local_1d8,0);
    uStack_175 = (undefined4)((ulonglong)local_1d8 >> 0x18);
    uStack_171._0_1_ = (undefined1)((ulonglong)local_1d8 >> 0x38);
    uStack_171._1_3_ = (undefined3)param_1;
    uStack_16d = (uint)((ulonglong)param_1 >> 0x18);
    uStack_169 = (undefined1)((ulonglong)param_1 >> 0x38);
    local_168 = local_1c8;
    local_160 = local_1a8;
    local_158 = local_1e0;
    local_188 = 0;
    local_180 = 0;
    local_198 = &LAB_146c8f93c;
    local_190 = &local_178;
    local_1e8 = &local_188;
    local_1f0 = 2;
    local_150 = (LPCRITICAL_SECTION)local_118;
    local_148 = &local_140;
    FUN_1401f8d10(L"ParallelFor Task",local_1d8._8_4_,1);
    DeleteCriticalSection(&local_140);
    DeleteCriticalSection((LPCRITICAL_SECTION)local_118);
    if (local_1d8._0_8_ != 0) {
      FUN_1400020a8();
    }
    FUN_146c908cf(local_1c8._0_8_,local_1c8._8_4_);
    if (local_1c8._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (local_1b8._0_8_ != 0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_146be6714(local_b8);
    if (local_1a8._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8cd02 FUN_146c8cd02 body=104 status=ok
// SIG undefined FUN_146c8cd02(void)

void * FUN_146c8cd02(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  _Src = (void *)*param_2;
  uVar2 = param_2[1] - (longlong)_Src;
  iVar1 = (int)(uVar2 >> 3);
  *(int *)((longlong)param_1 + 0x58) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 10;
  }
  else {
    FUN_146c9091c(param_1);
    _Dst = *(void **)((longlong)param_1 + 0x50);
    if (*(void **)((longlong)param_1 + 0x50) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)(uVar2 * 0x20000000) >> 0x1d & 0xfffffffffffffff8);
  }
  return param_1;
}



// FUNCTION 146c8cd6a FUN_146c8cd6a body=85 status=ok
// SIG undefined FUN_146c8cd6a(void)

void FUN_146c8cd6a(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 200) * 0x200 + *(int *)(param_1 + 0xcc);
  if (((ulonglong)(longlong)(int)param_2 < (ulonglong)uVar2) && (param_2 < uVar2)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)(param_2 >> 9) * 8);
    if (*(int *)(lVar1 + (ulonglong)(param_2 & 0x1ff) * 4) != -1) {
      *(undefined4 *)(lVar1 + (ulonglong)(param_2 & 0x1ff) * 4) = 0xffffffff;
      FUN_146c9099a(param_1 + 0x60);
      return;
    }
  }
  return;
}



// FUNCTION 146c8cdc0 FUN_146c8cdc0 body=777 status=ok
// SIG undefined FUN_146c8cdc0(void)

void FUN_146c8cdc0(double *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_c8 [32];
  double *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  double *local_68;
  longlong *local_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_5 == (longlong *)0x0) {
    param_5 = local_58;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  iVar3 = *(int *)((longlong)param_5 + 0xc);
  *(undefined4 *)(param_5 + 1) = 0;
  local_a0 = param_3;
  local_98 = param_4;
  if (iVar3 < 0) {
    FUN_146c90c54(param_5,0);
    iVar3 = *(int *)((longlong)param_5 + 0xc);
  }
  if (iVar3 < 0x80) {
    FUN_146c90c54(param_5,0x80);
  }
  dVar7 = *param_1;
  auVar9._0_8_ = *param_2 / dVar7;
  auVar9._8_8_ = 0;
  auVar10 = roundsd(auVar9,auVar9,9);
  local_80 = (int)auVar10._0_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[1] / dVar7;
  auVar10 = roundsd(ZEXT816(0),auVar10,9);
  local_7c = (int)auVar10._0_8_;
  auVar11._0_8_ = param_2[2] / dVar7;
  auVar11._8_8_ = 0;
  auVar10 = roundsd(auVar11,auVar11,9);
  local_78 = (int)auVar10._0_8_;
  auVar12._0_8_ = param_2[3] / dVar7;
  auVar12._8_8_ = 0;
  auVar10 = roundsd(auVar12,auVar12,9);
  local_74 = (int)auVar10._0_8_;
  auVar13._0_8_ = param_2[4] / dVar7;
  auVar13._8_8_ = 0;
  auVar10 = roundsd(auVar13,auVar13,9);
  local_70 = (int)auVar10._0_8_;
  auVar14._0_8_ = param_2[5] / dVar7;
  auVar14._8_8_ = 0;
  auVar10 = roundsd(ZEXT816(0),auVar14,9);
  local_6c = (int)auVar10._0_8_;
  local_68 = param_1;
  local_60 = param_5;
  FUN_146c90aa0(param_1 + 0x1c);
  uVar4 = *(uint *)(param_5 + 1);
  if (0 < (int)uVar4) {
    local_a8 = param_1 + 0xc;
    do {
      puVar1 = *(uint **)(*param_5 + -8 + (ulonglong)uVar4 * 8);
      *(uint *)(param_5 + 1) = uVar4 - 1;
      uVar4 = *puVar1;
      if (((-1 < (int)uVar4) &&
          ((int)uVar4 < *(int *)(param_1 + 0x16) * 0x200 + *(int *)((longlong)param_1 + 0xb4))) &&
         (*(longlong *)
           (*(longlong *)((longlong)param_1[0x17] + (ulonglong)(uVar4 >> 9) * 8) + 0x50 +
           (ulonglong)((uVar4 & 0x1ff) * 0x60)) != 0)) {
        local_90 = local_a0;
        local_88 = local_98;
        FUN_146c90b9e(local_a8,*puVar1,&local_90);
      }
      lVar5 = 0;
      do {
        uVar4 = puVar1[lVar5 + 5];
        if (uVar4 != 0xffffffff) {
          lVar2 = *(longlong *)((longlong)param_1[10] + (ulonglong)(uVar4 >> 9) * 8);
          lVar6 = (ulonglong)(uVar4 & 0x1ff) * 0x34;
          dVar7 = *param_1 / (double)(1L << (*(byte *)(lVar2 + 4 + lVar6) & 0x1f));
          dVar8 = (double)*(int *)(lVar2 + 8 + lVar6) * dVar7;
          if ((((dVar8 < param_2[3]) && (*param_2 < dVar8 + dVar7)) &&
              ((dVar8 = (double)*(int *)(lVar2 + 0xc + lVar6) * dVar7, dVar8 < param_2[4] &&
               ((param_2[1] < dVar8 + dVar7 &&
                (dVar8 = (double)*(int *)(lVar2 + 0x10 + lVar6) * dVar7, dVar8 < param_2[5])))))) &&
             (param_2[2] < dVar7 + dVar8)) {
            iVar3 = (int)param_5[1];
            *(uint *)(param_5 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
              FUN_146c90d7e(param_5,iVar3);
            }
            *(longlong *)(*param_5 + (longlong)iVar3 * 8) = lVar2 + lVar6;
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 8);
      uVar4 = *(uint *)(param_5 + 1);
    } while (0 < (int)uVar4);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c8d0ca FUN_146c8d0ca body=61 status=ok
// SIG undefined FUN_146c8d0ca(void)

void FUN_146c8d0ca(longlong *param_1)

{
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



// FUNCTION 146c8d108 FUN_146c8d108 body=286 status=ok
// SIG undefined FUN_146c8d108(void)

void FUN_146c8d108(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_48;
  longlong local_40;
  undefined1 *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b463b8(param_1,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144),1);
  FUN_146be4e92(param_1 + 0x10,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144),1);
  FUN_146c8d472(param_1 + 0x20,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  FUN_146c8d4ba(param_1 + 0x30,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  local_30 = &local_48;
  local_58 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_38 = &LAB_146c8d782;
  local_60 = 0;
  local_48 = param_2;
  local_40 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144),1)
  ;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    dVar2 = 0.0;
    lVar1 = 0;
    do {
      dVar2 = dVar2 + *(double *)(*(longlong *)(param_1 + 0x10) + lVar1);
      *(double *)(param_1 + 0x40) = dVar2;
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + 0x18) * 8 != lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8d228 FUN_146c8d228 body=508 status=ok
// SIG undefined FUN_146c8d228(void)

void FUN_146c8d228(longlong *param_1,longlong param_2,longlong param_3,double param_4,
                  undefined8 param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_e8 [40];
  int local_c0;
  undefined8 *local_b8;
  longlong *local_a8;
  longlong local_a0;
  undefined1 *local_98;
  longlong local_90;
  undefined1 *local_88;
  longlong local_80;
  undefined1 local_71;
  undefined1 *local_70;
  longlong **local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  lVar3 = param_7;
  lVar2 = param_6;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_146c8de3e(param_1,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  if (*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) < 1) {
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    iVar5 = 0;
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x148) + (uVar4 >> 9 & 0x7fffff) * 8) +
                             (ulonglong)((uint)uVar4 & 0x1ff) * 2) - 1U) < 0xfffe) {
        iVar6 = (int)(*(double *)(*(longlong *)(param_3 + 0x10) + uVar4 * 8) / param_4);
        if (iVar6 < 3) {
          iVar6 = 2;
        }
        lVar1 = *param_1;
        *(int *)(lVar1 + uVar4 * 8) = iVar5;
        *(int *)(lVar1 + 4 + uVar4 * 8) = iVar6;
        iVar5 = iVar5 + iVar6;
      }
      else {
        *(undefined8 *)(*param_1 + uVar4 * 8) = 0xffffffff;
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 <
             (longlong)(*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)));
  }
  FUN_140b463b8(lVar3,iVar5,1);
  FUN_144a127d2(lVar3 + 0x10,iVar5,1);
  local_71 = *(longlong *)(lVar2 + 0x10) != 0;
  if ((bool)local_71) {
    FUN_146bad8b2(lVar3 + 0x20,iVar5,1);
  }
  iVar5 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  local_c0 = (uint)(iVar5 < 100) * 2;
  local_68 = &local_a8;
  local_98 = (undefined1 *)&param_5;
  local_90 = lVar3;
  local_88 = &local_71;
  local_80 = lVar2;
  local_b8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_146c8dfa8;
  local_a8 = param_1;
  local_a0 = param_3;
  FUN_1411ca36e(L"ComputeDenseSamples",iVar5,500);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8d426 FUN_146c8d426 body=75 status=ok
// SIG undefined FUN_146c8d426(void)

void FUN_146c8d426(longlong *param_1)

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



// FUNCTION 146c8d472 FUN_146c8d472 body=71 status=ok
// SIG undefined FUN_146c8d472(void)

void FUN_146c8d472(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c8d502();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146c8d592();
      return;
    }
  }
  return;
}



// FUNCTION 146c8d4ba FUN_146c8d4ba body=71 status=ok
// SIG undefined FUN_146c8d4ba(void)

void FUN_146c8d4ba(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c8d640();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146c8d6d4();
      return;
    }
  }
  return;
}



// FUNCTION 146c8d502 FUN_146c8d502 body=143 status=ok
// SIG undefined FUN_146c8d502(void)

void FUN_146c8d502(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c8d592 FUN_146c8d592 body=63 status=ok
// SIG undefined FUN_146c8d592(void)

void FUN_146c8d592(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c8d5d2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 146c8d5d2 FUN_146c8d5d2 body=109 status=ok
// SIG undefined FUN_146c8d5d2(void)

ulonglong FUN_146c8d5d2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x38) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 146c8d640 FUN_146c8d640 body=147 status=ok
// SIG undefined FUN_146c8d640(void)

void FUN_146c8d640(longlong param_1,int param_2)

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



// FUNCTION 146c8d6d4 FUN_146c8d6d4 body=62 status=ok
// SIG undefined FUN_146c8d6d4(void)

void FUN_146c8d6d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c8d712(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 146c8d712 FUN_146c8d712 body=112 status=ok
// SIG undefined FUN_146c8d712(void)

ulonglong FUN_146c8d712(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c8d74c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_146c8d74c:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c8d78a FUN_146c8d78a body=807 status=ok
// SIG undefined FUN_146c8d78a(void)

void FUN_146c8d78a(longlong *param_1,uint param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((-1 < (int)param_2) &&
     (lVar4 = *param_1, (int)param_2 < *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144))) {
    uVar10 = (ulonglong)(param_2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar4 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           uVar10 * 2) - 1U) < 0xfffe) {
      plVar5 = (longlong *)param_1[1];
      lVar12 = *(longlong *)(lVar4 + 0x10);
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
      uVar3 = *(uint *)(lVar4 + uVar10 * 0xc);
      lVar6 = *(longlong *)(lVar12 + (ulonglong)(uVar3 >> 9) * 8);
      uVar11 = (ulonglong)uVar3 & 0x1ff;
      local_d8 = *(double *)(lVar6 + 0x10 + uVar11 * 0x18);
      pdVar1 = (double *)(lVar6 + uVar11 * 0x18);
      local_e8 = *pdVar1;
      dStack_e0 = pdVar1[1];
      uVar3 = *(uint *)(lVar4 + 4 + uVar10 * 0xc);
      lVar6 = *(longlong *)(lVar12 + (ulonglong)(uVar3 >> 9) * 8);
      uVar11 = (ulonglong)uVar3 & 0x1ff;
      local_f8 = *(double *)(lVar6 + 0x10 + uVar11 * 0x18);
      pdVar1 = (double *)(lVar6 + uVar11 * 0x18);
      local_108 = *pdVar1;
      dStack_100 = pdVar1[1];
      uVar3 = *(uint *)(lVar4 + 8 + uVar10 * 0xc);
      lVar4 = *(longlong *)(lVar12 + (ulonglong)(uVar3 >> 9) * 8);
      uVar10 = (ulonglong)uVar3 & 0x1ff;
      local_118 = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
      pdVar1 = (double *)(lVar4 + uVar10 * 0x18);
      local_128 = *pdVar1;
      dStack_120 = pdVar1[1];
      dVar7 = local_d8 + local_f8 + local_118;
      dVar8 = dStack_e0 + dStack_100 + dStack_120;
      dVar9 = local_e8 + local_108 + local_128;
      uVar10 = (ulonglong)param_2;
      local_148 = plVar5[2] + uVar10 * 8;
      FUN_146b9cae0(&local_a8,&local_e8,&local_108,&local_128);
      lVar4 = *plVar5;
      lVar12 = uVar10 * 0x18;
      *(double *)(lVar4 + 0x10 + lVar12) = local_98;
      pdVar1 = (double *)(lVar4 + lVar12);
      *pdVar1 = local_a8;
      pdVar1[1] = uStack_a0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      local_78 = 0x3ff0000000000000;
      local_b8 = DAT_14c8463c8;
      local_c8 = (undefined4)DAT_14c8463b8;
      uStack_c4 = DAT_14c8463b8._4_4_;
      uStack_c0 = (undefined4)DAT_14c8463c0;
      uStack_bc = DAT_14c8463c0._4_4_;
      local_a8 = dVar9 * 0.3333333333333333;
      uStack_a0 = dVar8 * 0.3333333333333333;
      local_98 = dVar7 * 0.3333333333333333;
      FUN_146bfb7f2(&uStack_90,&local_c8,lVar12 + *plVar5);
      lVar4 = plVar5[4];
      lVar12 = uVar10 * 0x38;
      *(undefined8 *)(lVar4 + 0x30 + lVar12) = local_78;
      puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar12);
      *puVar2 = (undefined4)uStack_88;
      puVar2[1] = uStack_88._4_4_;
      puVar2[2] = (undefined4)uStack_80;
      puVar2[3] = uStack_80._4_4_;
      puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar12);
      *puVar2 = (undefined4)local_98;
      puVar2[1] = local_98._4_4_;
      puVar2[2] = (undefined4)uStack_90;
      puVar2[3] = uStack_90._4_4_;
      puVar2 = (undefined4 *)(lVar4 + lVar12);
      *puVar2 = (undefined4)local_a8;
      puVar2[1] = local_a8._4_4_;
      puVar2[2] = (undefined4)uStack_a0;
      puVar2[3] = uStack_a0._4_4_;
      FUN_146bca7ae(plVar5[4] + lVar12,&local_c8,&local_128,2);
      FUN_146bca7ae(plVar5[4] + lVar12,&local_138,&local_108,2);
      FUN_146bca7ae(lVar12 + plVar5[4],&local_a8,&local_e8,2);
      uStack_88 = CONCAT44(uStack_c4,local_c8);
      uStack_80 = CONCAT44(uStack_bc,uStack_c0);
      lVar4 = plVar5[6];
      lVar12 = uVar10 * 0x30;
      puVar2 = (undefined4 *)(lVar4 + lVar12);
      *puVar2 = (undefined4)local_a8;
      puVar2[1] = local_a8._4_4_;
      puVar2[2] = (undefined4)uStack_a0;
      puVar2[3] = uStack_a0._4_4_;
      puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar12);
      *puVar2 = local_138;
      puVar2[1] = uStack_134;
      puVar2[2] = uStack_130;
      puVar2[3] = uStack_12c;
      puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar12);
      *puVar2 = local_c8;
      puVar2[1] = uStack_c4;
      puVar2[2] = uStack_c0;
      puVar2[3] = uStack_bc;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8dab2 FUN_146c8dab2 body=220 status=ok
// SIG undefined FUN_146c8dab2(void)

void FUN_146c8dab2(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar6 = (undefined8 *)FUN_146c8db90();
  FUN_144a23e74(puVar6,2,1);
  *puVar6 = &PTR_FUN_149f3cc00;
  local_38 = 0;
  FUN_144a24082(puVar6,L".\\Runtime/GeometryCore/Private/Sampling/MeshSurfacePointSampling.cpp(206)"
                ,1,0);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(puVar6 + 0x15) = *param_2;
  *(undefined4 *)((longlong)puVar6 + 0xac) = uVar3;
  *(undefined4 *)(puVar6 + 0x16) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0xb4) = uVar5;
  *puVar6 = &PTR_FUN_149f3cbf0;
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = (longlong)puVar6;
  FUN_144a23f14((ulonglong)puVar6[0x10] >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)((longlong)puVar6 + 0x1c));
  local_21 = 1;
  FUN_1447439e4(puVar6);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8db90 FUN_146c8db90 body=212 status=ok
// SIG undefined FUN_146c8db90(void)

undefined8 * FUN_146c8db90(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
  puVar5 = (undefined8 *)puVar3[1];
  if (puVar5 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar3 + 2) + -1;
    goto LAB_146c8dbb3;
  }
  puVar5 = (undefined8 *)*puVar3;
  if (puVar5 == (undefined8 *)0x0) {
    uVar2 = FUN_14470efbc(&DAT_14c896180);
    if (uVar2 == 0) {
      puVar3[1] = 0;
LAB_146c8dc37:
      puVar5 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar3[1] = puVar5;
      iVar1 = 0xff;
      puVar6 = puVar5;
      do {
        puVar4 = puVar6 + 0x20;
        *puVar6 = puVar4;
        iVar1 = iVar1 + -1;
        puVar6 = puVar4;
      } while (iVar1 != 0);
      goto LAB_146c8dbd6;
    }
    puVar5 = *(undefined8 **)
              (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
              (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
    puVar3[1] = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_146c8dc37;
  }
  else {
    puVar3[1] = puVar5;
    puVar4 = puVar3;
LAB_146c8dbd6:
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar3 + 2) = 0x100;
  iVar1 = 0xff;
LAB_146c8dbb3:
  puVar3[1] = *puVar5;
  *(int *)(puVar3 + 2) = iVar1;
  return puVar5;
}



// FUNCTION 146c8dc64 FUN_146c8dc64 body=40 status=ok
// SIG undefined FUN_146c8dc64(void)

undefined8 FUN_146c8dc64(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_146c8dcbe(param_1);
  }
  return param_1;
}



// FUNCTION 146c8dc98 FUN_146c8dc98 body=38 status=ok
// SIG undefined FUN_146c8dc98(void)

undefined8 FUN_146c8dc98(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c8dcbe FUN_146c8dcbe body=145 status=ok
// SIG undefined FUN_146c8dcbe(void)

void FUN_146c8dcbe(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_144a23e24();
  if ((int)plVar2[2] < 0x100) {
    lVar3 = plVar2[1];
  }
  else {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      uVar1 = FUN_14493c560();
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
      }
      *(longlong *)(lVar4 + 8) = lVar3;
      FUN_144a8fde6(&DAT_14c896180,uVar1);
    }
    *plVar2 = plVar2[1];
    *(undefined4 *)(plVar2 + 2) = 0;
    lVar3 = 0;
  }
  *param_1 = lVar3;
  plVar2[1] = (longlong)param_1;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  return;
}



// FUNCTION 146c8dd50 FUN_146c8dd50 body=237 status=ok
// SIG undefined FUN_146c8dd50(void)

void FUN_146c8dd50(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x30) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar2 + 0x38) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar2 + 0x40) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar2 + 0x48) = 0xffefffffffffffff;
  *(undefined8 *)(lVar2 + 0x50) = 0xffefffffffffffff;
  *(undefined8 *)(lVar2 + 0x58) = 0xffefffffffffffff;
  uVar3 = *(int *)(param_1[1] + 0x20) * 0x200 + *(int *)(param_1[1] + 0x24);
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      lVar2 = param_1[1];
      if ((int)uVar4 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24)) {
        uVar5 = (ulonglong)(uVar4 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar4 >> 9) * 8) +
                               uVar5 * 2) - 1U) < 0xfffe) {
          lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
          local_38 = *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x18);
          puVar1 = (undefined4 *)(lVar2 + uVar5 * 0x18);
          local_48 = *puVar1;
          uStack_44 = puVar1[1];
          uStack_40 = puVar1[2];
          uStack_3c = puVar1[3];
          FUN_146ba5262(*param_1 + 0x30,&local_48);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c8de3e FUN_146c8de3e body=71 status=ok
// SIG undefined FUN_146c8de3e(void)

void FUN_146c8de3e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c8de86();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146c8df0c();
      return;
    }
  }
  return;
}



// FUNCTION 146c8de86 FUN_146c8de86 body=132 status=ok
// SIG undefined FUN_146c8de86(void)

void FUN_146c8de86(longlong param_1,int param_2)

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



// FUNCTION 146c8df0c FUN_146c8df0c body=62 status=ok
// SIG undefined FUN_146c8df0c(void)

void FUN_146c8df0c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c8df4a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146c8df4a FUN_146c8df4a body=93 status=ok
// SIG undefined FUN_146c8df4a(void)

ulonglong FUN_146c8df4a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146c8dfb0 FUN_146c8dfb0 body=1058 status=ok
// SIG undefined FUN_146c8dfb0(void)

void FUN_146c8dfb0(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  uint uVar17;
  longlong lVar18;
  double *pdVar19;
  int iVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined1 auStack_1a8 [32];
  double *local_188;
  int local_17c;
  double *local_178;
  double *local_170;
  longlong local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  int local_120;
  undefined4 uStack_11c;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar18 = (longlong)param_2;
  iVar10 = *(int *)(*(longlong *)*param_1 + 4 + lVar18 * 8);
  local_17c = param_2;
  if ((iVar10 != 0) && (0 < iVar10)) {
    local_168 = (longlong)*(int *)(*(longlong *)*param_1 + lVar18 * 8);
    lVar15 = param_1[1];
    pdVar16 = (double *)(lVar18 * 0x38 + *(longlong *)(lVar15 + 0x20));
    lVar11 = *(longlong *)(lVar15 + 0x30);
    lVar14 = lVar18 * 0x30;
    pdVar1 = (double *)(lVar11 + lVar14);
    pdVar2 = (double *)(lVar11 + lVar14);
    pdVar19 = pdVar2 + 2;
    dVar3 = pdVar2[3];
    dVar4 = *pdVar2;
    dVar5 = pdVar2[1];
    dVar6 = *pdVar19;
    local_178 = (double *)(lVar11 + 0x20 + lVar14);
    dVar7 = local_178[1];
    dVar8 = *local_178;
    dVar9 = *(double *)(*(longlong *)(lVar15 + 0x10) + lVar18 * 8);
    uVar17 = param_2 + *(int *)param_1[2];
    local_170 = pdVar16 + 3;
    iVar20 = 0;
    do {
      dVar23 = (double)((float)(uVar17 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0);
      uVar17 = uVar17 * -0x4b9b4d07 + 0x9d6f2492;
      dVar21 = (double)((float)(uVar17 >> 9 | 0x3f800000) + -1.0);
      if (dVar9 == 0.0 && 1.0 < dVar23 + dVar21) {
        dVar23 = 1.0 - dVar23;
        dVar21 = 1.0 - dVar21;
      }
      local_128 = (dVar7 - dVar5) * dVar21 + (dVar3 - dVar5) * dVar23 + pdVar1[1];
      local_130 = dVar21 * (dVar8 - dVar4) + dVar23 * (dVar6 - dVar4) + *pdVar1;
      if (((dVar9 == 0.0) && (!NAN(dVar9))) ||
         (cVar13 = FUN_146bd16fa(pdVar1,pdVar19,local_178,&local_130), cVar13 != '\0')) {
        local_f8 = 0;
        local_108 = local_130;
        dStack_100 = local_128;
        FUN_146bed047(&local_120,local_170,&local_108);
        dVar23 = local_110 + pdVar16[2];
        dVar12 = local_118 + pdVar16[1];
        dVar21 = (double)CONCAT44(uStack_11c,local_120) + *pdVar16;
        lVar15 = iVar20 + local_168;
        lVar18 = *(longlong *)param_1[3];
        *(double *)(lVar18 + lVar15 * 0x18) = dVar21;
        *(double *)(lVar18 + 8 + lVar15 * 0x18) = dVar12;
        *(double *)(lVar18 + 0x10 + lVar15 * 0x18) = dVar23;
        *(int *)(*(longlong *)(param_1[3] + 0x10) + lVar15 * 4) = local_17c;
        if (*(char *)param_1[4] == '\x01') {
          local_188 = local_178;
          FUN_146c8e3d3(&local_108,&local_130,pdVar1,pdVar19);
          local_138 = local_f8;
          local_148 = local_108;
          dStack_140 = dStack_100;
          local_120 = local_17c;
          local_160 = dVar21;
          local_158 = dVar12;
          local_150 = dVar23;
          uVar22 = (**(code **)(param_1[5] + 0x10))
                             (*(undefined8 *)(param_1[5] + 0x18),&local_120,&local_160,&local_148);
          *(undefined8 *)(*(longlong *)(param_1[3] + 0x20) + lVar15 * 8) = uVar22;
        }
        iVar20 = iVar20 + 1;
      }
    } while (iVar20 < iVar10);
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


