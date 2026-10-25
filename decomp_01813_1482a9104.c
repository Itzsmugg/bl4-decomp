// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1482a9104 FUN_1482a9104 body=694 status=ok
// SIG undefined FUN_1482a9104(void)

undefined4
FUN_1482a9104(longlong param_1,longlong param_2,undefined8 param_3,int *param_4,int *param_5,
             int param_6,int param_7,uint *param_8,uint *param_9,int *param_10,int *param_11,
             uint *param_12,int param_13)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  undefined4 local_7c;
  int local_78;
  
  iVar1 = param_6 + 1;
  iVar3 = param_7 + 1;
  local_78 = 0x7fffffff;
  iVar10 = 0x1000;
  local_7c = 0;
  do {
    iVar6 = *param_4;
    iVar11 = param_4[1];
    uVar14 = 0;
    if (*(char *)(param_2 + 0x15) == '\x01') {
      iVar8 = *(int *)(param_1 + 0xb4) * 0x10dcd;
      *(int *)(param_1 + 0xb4) = iVar8 + 0x3039;
      uVar14 = *(uint *)(param_1 + 0xb8) << 0xd ^ *(uint *)(param_1 + 0xb8);
      uVar14 = uVar14 >> 0x11 ^ uVar14;
      *(uint *)(param_1 + 0xb8) = uVar14 << 5 ^ uVar14;
      lVar15 = (ulonglong)*(uint *)(param_1 + 0xc0) +
               (ulonglong)*(uint *)(param_1 + 0xbc) * 0x29a65ead;
      *(longlong *)(param_1 + 0xbc) = lVar15;
      uVar14 = (int)lVar15 + iVar8 + uVar14 + 0x3039 & 1;
    }
    iVar8 = iVar6;
    if (uVar14 != 0) {
      iVar8 = iVar11;
      iVar11 = iVar6;
    }
    iVar16 = iVar3;
    iVar6 = iVar1;
    if (param_13 != 0) {
      if (param_13 - iVar8 <= iVar1) {
        iVar6 = param_13 - iVar8;
      }
      if (param_13 - iVar11 <= iVar3) {
        iVar16 = param_13 - iVar11;
      }
    }
    uVar4 = FUN_1482a948a(param_1 + 0xb4,iVar6);
    uVar5 = FUN_1482a948a(param_1 + 0xb4,iVar16);
    if (*(char *)(param_2 + 0x11) == '\x01') {
      uVar4 = uVar4 + 3 & 0xfffffffc;
      uVar5 = uVar5 + 3 & 0xfffffffc;
      if ((param_13 == 0) || (((int)uVar4 <= param_13 - iVar8 && ((int)uVar5 <= param_13 - iVar11)))
         ) goto LAB_1482a9274;
    }
    else {
LAB_1482a9274:
      iVar6 = param_6;
      if (param_6 <= (int)(uVar4 + iVar8)) {
        iVar6 = uVar4 + iVar8;
      }
      iVar16 = param_7;
      if (param_7 <= (int)(uVar5 + iVar11)) {
        iVar16 = uVar5 + iVar11;
      }
      iVar12 = iVar16;
      if (iVar16 < iVar6) {
        iVar12 = iVar6;
      }
      iVar12 = iVar12 * iVar12 + iVar6 * iVar16;
      if (iVar12 <= local_78) {
        if (iVar12 == local_78) {
          uVar7 = uVar5;
          if ((int)uVar4 < (int)uVar5) {
            uVar7 = uVar4;
          }
          uVar13 = *param_9;
          if ((int)*param_8 < (int)*param_9) {
            uVar13 = *param_8;
          }
          if ((int)uVar13 < (int)uVar7) goto LAB_1482a92b8;
        }
        piVar9 = param_4;
        if (uVar14 != 0) {
          piVar9 = param_5;
        }
        cVar2 = FUN_1482a93ba(param_3,piVar9,uVar4,uVar5);
        if (cVar2 != '\0') {
          *param_8 = uVar4;
          *param_9 = uVar5;
          *param_10 = iVar8;
          *param_11 = iVar11;
          if (*(char *)(param_2 + 0x15) == '\0') {
            uVar14 = 0;
          }
          *param_12 = uVar14;
          local_7c = (undefined4)CONCAT71((int7)((ulonglong)param_12 >> 8),1);
          local_78 = iVar12;
          if (iVar6 * iVar16 == param_7 * param_6) {
            return local_7c;
          }
        }
      }
    }
LAB_1482a92b8:
    iVar10 = iVar10 + -1;
    if (iVar10 == 0) {
      return local_7c;
    }
  } while( true );
}



// FUNCTION 1482a93ba FUN_1482a93ba body=208 status=ok
// SIG undefined FUN_1482a93ba(void)

bool FUN_1482a93ba(uint *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
    uVar7 = 0;
    do {
      if (uVar7 + param_4 < param_1[1]) {
        uVar5 = 0;
        do {
          uVar4 = (uint)uVar5;
          uVar2 = uVar4 + param_3;
          if (*param_1 <= uVar2) break;
          uVar6 = uVar2 & 0x3f;
          uVar3 = uVar4 & 0x3f;
          if ((*(ulonglong *)
                (*(longlong *)(param_2 + 4) +
                (ulonglong)((int)(uVar5 >> 6) + uVar7 * param_2[2]) * 8) >> (sbyte)uVar3 &
              *(ulonglong *)
               (*(longlong *)(param_1 + 4) +
               (ulonglong)(param_1[2] * (uVar7 + param_4) + (uVar2 >> 6)) * 8) >> (sbyte)uVar6) != 0
             ) {
            return bVar8;
          }
          if (uVar3 < uVar6) {
            uVar3 = uVar6;
          }
          uVar4 = (uVar4 - uVar3) + 0x40;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *param_2);
      }
      uVar7 = uVar7 + 1;
      bVar8 = uVar1 <= uVar7;
    } while (uVar7 != uVar1);
  }
  return bVar8;
}



// FUNCTION 1482a948a FUN_1482a948a body=104 status=ok
// SIG undefined FUN_1482a948a(void)

ulonglong FUN_1482a948a(int *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    iVar1 = *param_1;
    *param_1 = iVar1 * 0x10dcd + 0x3039;
    uVar3 = param_1[1] << 0xd ^ param_1[1];
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    uVar3 = uVar3 << 5 ^ uVar3;
    param_1[1] = uVar3;
    lVar2 = (ulonglong)(uint)param_1[3] + (ulonglong)(uint)param_1[2] * 0x29a65ead;
    *(longlong *)(param_1 + 2) = lVar2;
    return (ulonglong)(iVar1 * 0x10dcd + uVar3 + 0x3039 + (int)lVar2) % (ulonglong)(param_2 + 1);
  }
  return 0;
}



// FUNCTION 1482a94f2 FUN_1482a94f2 body=94 status=ok
// SIG undefined FUN_1482a94f2(void)

void FUN_1482a94f2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x70),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a952b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001482a954d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x30),0);
    return;
  }
  return;
}



// FUNCTION 1482a9550 FUN_1482a9550 body=81 status=ok
// SIG undefined FUN_1482a9550(void)

void FUN_1482a9550(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1[2] * param_1[1] - param_2 != 0) {
    thunk_FUN_1400020a8(*param_1);
    if (param_2 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_146de3b53(param_2);
    }
    *param_1 = uVar1;
  }
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



// FUNCTION 1482a95a2 FUN_1482a95a2 body=659 status=ok
// SIG undefined FUN_1482a95a2(void)

void FUN_1482a95a2(ulonglong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  double *pdVar9;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  double *local_108;
  longlong local_100;
  ulonglong local_f8;
  undefined1 local_e9;
  longlong *local_e8;
  longlong *local_e0;
  undefined1 *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_a8 [2];
  longlong local_98;
  longlong local_90;
  double local_88;
  longlong local_78;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_130 = param_4;
  local_128 = param_3;
  local_120 = param_2;
  if (0 < (longlong)param_1) {
    lVar3 = param_1 * 8 + (param_1 - 1) * (longlong)param_3 * 8;
    pdVar9 = (double *)(param_2 + lVar3 + -8);
    local_110 = ~(ulonglong)param_3 << 6;
    lVar3 = lVar3 + param_2;
    lVar6 = param_4 + param_1 * 8 + -8;
    do {
      uVar7 = 8;
      if (param_1 < 8) {
        uVar7 = param_1;
      }
      lVar4 = lVar3 - (ulonglong)(uint)((int)uVar7 * 8);
      lVar5 = param_1 - uVar7;
      local_118 = local_130 + lVar5 * 8;
      lVar8 = 0;
      local_108 = pdVar9;
      local_100 = lVar3;
      local_f8 = param_1;
      do {
        dVar1 = *(double *)(lVar6 + lVar8 * 8);
        if ((dVar1 != 0.0) || (NAN(dVar1))) {
          dVar2 = *pdVar9;
          *(double *)(lVar6 + lVar8 * 8) = dVar1 / dVar2;
          lVar3 = lVar8 + uVar7 + -1;
          if (0 < lVar3) {
            local_c8 = local_118;
            local_68 = local_128;
            local_a8[0] = local_118;
            local_e8 = local_a8;
            local_e0 = &local_90;
            local_d8 = &local_e9;
            local_d0 = &local_c8;
            local_c0 = lVar3;
            local_98 = lVar3;
            local_88 = dVar1 / dVar2;
            local_78 = lVar4;
            FUN_1482a9dd0(&local_e8);
          }
        }
        lVar8 = lVar8 + -1;
        pdVar9 = (double *)((longlong)pdVar9 + ((longlong)param_3 * 8 ^ 0xfffffffffffffff8U));
        lVar4 = lVar4 + (longlong)param_3 * -8;
      } while (uVar7 + lVar8 != 0);
      if (0 < lVar5) {
        local_90 = local_118;
        local_88 = 4.94065645841247e-324;
        local_e8 = (longlong *)(local_120 + lVar5 * (longlong)local_128 * 8);
        local_e0 = local_128;
        local_138 = 0xbff0000000000000;
        local_140 = 1;
        local_148 = local_130;
        FUN_1482a9836(lVar5,uVar7,&local_e8,&local_90);
      }
      param_1 = local_f8 - 8;
      pdVar9 = (double *)((longlong)local_108 + local_110);
      lVar3 = local_100 + local_110;
      lVar6 = lVar6 + -0x40;
    } while (8 < (longlong)local_f8);
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482a9836 FUN_1482a9836 body=1433 status=ok
// SIG undefined FUN_1482a9836(void)

void FUN_1482a9836(ulonglong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,double param_7)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double *pdVar14;
  longlong lVar15;
  ulonglong uVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  double *pdVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
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
  double dVar6;
  
  lVar7 = param_3[1];
  lVar18 = 4;
  if ((ulonglong)(lVar7 * 8) < 32000) {
    lVar18 = 0x10;
  }
  if (param_2 < 0x80) {
    lVar18 = param_2;
  }
  if (0 < param_2) {
    lVar19 = *param_3;
    pdVar14 = (double *)(lVar19 + 0x70);
    lVar23 = 0;
    do {
      lVar1 = lVar23 + lVar18;
      lVar22 = lVar1;
      if (param_2 < lVar1) {
        lVar22 = param_2;
      }
      if ((longlong)param_1 < 0x10) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        pdVar17 = pdVar14;
        do {
          dVar37 = 0.0;
          dVar39 = 0.0;
          dVar33 = 0.0;
          dVar35 = 0.0;
          dVar29 = 0.0;
          dVar31 = 0.0;
          dVar25 = 0.0;
          dVar27 = 0.0;
          dVar36 = 0.0;
          dVar38 = 0.0;
          dVar32 = 0.0;
          dVar34 = 0.0;
          dVar28 = 0.0;
          dVar30 = 0.0;
          dVar24 = 0.0;
          dVar26 = 0.0;
          lVar15 = lVar23;
          pdVar21 = pdVar17;
          do {
            pdVar4 = (double *)(*param_4 + lVar15 * 8);
            dVar5 = *pdVar4;
            dVar6 = *pdVar4;
            dVar37 = dVar37 + pdVar21[-0xe] * dVar5;
            dVar39 = dVar39 + pdVar21[-0xd] * dVar6;
            dVar33 = dVar33 + pdVar21[-0xc] * dVar5;
            dVar35 = dVar35 + pdVar21[-0xb] * dVar6;
            dVar29 = dVar29 + pdVar21[-10] * dVar5;
            dVar31 = dVar31 + pdVar21[-9] * dVar6;
            dVar25 = dVar25 + pdVar21[-8] * dVar5;
            dVar27 = dVar27 + pdVar21[-7] * dVar6;
            dVar36 = dVar36 + pdVar21[-6] * dVar5;
            dVar38 = dVar38 + pdVar21[-5] * dVar6;
            dVar32 = dVar32 + pdVar21[-4] * dVar5;
            dVar34 = dVar34 + pdVar21[-3] * dVar6;
            dVar28 = dVar28 + pdVar21[-2] * dVar5;
            dVar30 = dVar30 + pdVar21[-1] * dVar6;
            dVar24 = dVar24 + *pdVar21 * dVar5;
            dVar26 = dVar26 + pdVar21[1] * dVar6;
            lVar15 = lVar15 + 1;
            pdVar21 = pdVar21 + lVar7;
          } while (lVar15 < lVar22);
          pdVar21 = (double *)(param_5 + uVar20 * 8);
          dVar13 = pdVar21[1] + dVar39 * param_7;
          pdVar4 = (double *)(param_5 + 0x10 + uVar20 * 8);
          dVar5 = pdVar4[1];
          pdVar2 = (double *)(param_5 + 0x20 + uVar20 * 8);
          dVar6 = pdVar2[1];
          pdVar3 = (double *)(param_5 + 0x30 + uVar20 * 8);
          dVar39 = pdVar3[1];
          auVar12._8_4_ = SUB84(dVar13,0);
          auVar12._0_8_ = *pdVar21 + dVar37 * param_7;
          auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          *(undefined1 (*) [16])(param_5 + uVar20 * 8) = auVar12;
          dVar5 = dVar35 * param_7 + dVar5;
          auVar11._8_4_ = SUB84(dVar5,0);
          auVar11._0_8_ = dVar33 * param_7 + *pdVar4;
          auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined1 (*) [16])(param_5 + 0x10 + uVar20 * 8) = auVar11;
          dVar6 = dVar31 * param_7 + dVar6;
          auVar10._8_4_ = SUB84(dVar6,0);
          auVar10._0_8_ = dVar29 * param_7 + *pdVar2;
          auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          *(undefined1 (*) [16])(param_5 + 0x20 + uVar20 * 8) = auVar10;
          dVar39 = dVar27 * param_7 + dVar39;
          auVar8._8_4_ = SUB84(dVar39,0);
          auVar8._0_8_ = dVar25 * param_7 + *pdVar3;
          auVar8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
          *(undefined1 (*) [16])(param_5 + 0x30 + uVar20 * 8) = auVar8;
          pdVar21 = (double *)(param_5 + 0x40 + uVar20 * 8);
          dVar25 = pdVar21[1];
          pdVar4 = (double *)(param_5 + 0x40 + uVar20 * 8);
          *pdVar4 = dVar36 * param_7 + *pdVar21;
          pdVar4[1] = dVar38 * param_7 + dVar25;
          pdVar21 = (double *)(param_5 + 0x50 + uVar20 * 8);
          dVar25 = pdVar21[1];
          pdVar4 = (double *)(param_5 + 0x50 + uVar20 * 8);
          *pdVar4 = dVar32 * param_7 + *pdVar21;
          pdVar4[1] = dVar34 * param_7 + dVar25;
          pdVar21 = (double *)(param_5 + 0x60 + uVar20 * 8);
          dVar25 = pdVar21[1];
          pdVar4 = (double *)(param_5 + 0x60 + uVar20 * 8);
          *pdVar4 = dVar28 * param_7 + *pdVar21;
          pdVar4[1] = dVar30 * param_7 + dVar25;
          pdVar21 = (double *)(param_5 + 0x70 + uVar20 * 8);
          dVar25 = pdVar21[1];
          pdVar4 = (double *)(param_5 + 0x70 + uVar20 * 8);
          *pdVar4 = dVar24 * param_7 + *pdVar21;
          pdVar4[1] = dVar26 * param_7 + dVar25;
          uVar20 = uVar20 + 0x10;
          pdVar17 = pdVar17 + 0x10;
        } while ((longlong)uVar20 < (longlong)(param_1 - 0xf));
      }
      if ((longlong)uVar20 < (longlong)(param_1 - 7)) {
        pdVar17 = (double *)(lVar19 + uVar20 * 8);
        dVar37 = 0.0;
        dVar39 = 0.0;
        dVar33 = 0.0;
        dVar35 = 0.0;
        dVar29 = 0.0;
        dVar31 = 0.0;
        dVar25 = 0.0;
        dVar27 = 0.0;
        lVar15 = lVar23;
        do {
          pdVar21 = (double *)(*param_4 + lVar15 * 8);
          dVar24 = *pdVar21;
          dVar26 = *pdVar21;
          dVar37 = dVar37 + *pdVar17 * dVar24;
          dVar39 = dVar39 + pdVar17[1] * dVar26;
          dVar33 = dVar33 + pdVar17[2] * dVar24;
          dVar35 = dVar35 + pdVar17[3] * dVar26;
          dVar29 = dVar29 + pdVar17[4] * dVar24;
          dVar31 = dVar31 + pdVar17[5] * dVar26;
          dVar25 = dVar25 + pdVar17[6] * dVar24;
          dVar27 = dVar27 + pdVar17[7] * dVar26;
          lVar15 = lVar15 + 1;
          pdVar17 = pdVar17 + lVar7;
        } while (lVar15 < lVar22);
        pdVar17 = (double *)(param_5 + uVar20 * 8);
        dVar39 = pdVar17[1] + dVar39 * param_7;
        pdVar21 = (double *)(param_5 + 0x10 + uVar20 * 8);
        dVar24 = pdVar21[1];
        pdVar4 = (double *)(param_5 + 0x20 + uVar20 * 8);
        dVar26 = *pdVar4;
        dVar28 = pdVar4[1];
        pdVar4 = (double *)(param_5 + 0x30 + uVar20 * 8);
        dVar30 = *pdVar4;
        dVar32 = pdVar4[1];
        auVar9._8_4_ = SUB84(dVar39,0);
        auVar9._0_8_ = *pdVar17 + dVar37 * param_7;
        auVar9._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        *(undefined1 (*) [16])(param_5 + uVar20 * 8) = auVar9;
        pdVar17 = (double *)(param_5 + 0x10 + uVar20 * 8);
        *pdVar17 = dVar33 * param_7 + *pdVar21;
        pdVar17[1] = dVar35 * param_7 + dVar24;
        pdVar17 = (double *)(param_5 + 0x20 + uVar20 * 8);
        *pdVar17 = dVar29 * param_7 + dVar26;
        pdVar17[1] = dVar31 * param_7 + dVar28;
        pdVar17 = (double *)(param_5 + 0x30 + uVar20 * 8);
        *pdVar17 = dVar25 * param_7 + dVar30;
        pdVar17[1] = dVar27 * param_7 + dVar32;
        uVar20 = uVar20 | 8;
      }
      if ((longlong)uVar20 < (longlong)(param_1 - 5)) {
        pdVar17 = (double *)(lVar19 + uVar20 * 8);
        dVar33 = 0.0;
        dVar35 = 0.0;
        dVar29 = 0.0;
        dVar31 = 0.0;
        dVar25 = 0.0;
        dVar27 = 0.0;
        lVar15 = lVar23;
        do {
          pdVar21 = (double *)(*param_4 + lVar15 * 8);
          dVar39 = *pdVar21;
          dVar37 = *pdVar21;
          dVar33 = dVar33 + *pdVar17 * dVar39;
          dVar35 = dVar35 + pdVar17[1] * dVar37;
          dVar29 = dVar29 + pdVar17[2] * dVar39;
          dVar31 = dVar31 + pdVar17[3] * dVar37;
          dVar25 = dVar25 + pdVar17[4] * dVar39;
          dVar27 = dVar27 + pdVar17[5] * dVar37;
          lVar15 = lVar15 + 1;
          pdVar17 = pdVar17 + lVar7;
        } while (lVar15 < lVar22);
        pdVar17 = (double *)(param_5 + uVar20 * 8);
        dVar37 = pdVar17[1];
        pdVar21 = (double *)(param_5 + 0x10 + uVar20 * 8);
        dVar39 = *pdVar21;
        dVar24 = pdVar21[1];
        pdVar21 = (double *)(param_5 + 0x20 + uVar20 * 8);
        dVar26 = *pdVar21;
        dVar28 = pdVar21[1];
        pdVar21 = (double *)(param_5 + uVar20 * 8);
        *pdVar21 = *pdVar17 + dVar33 * param_7;
        pdVar21[1] = dVar37 + dVar35 * param_7;
        pdVar17 = (double *)(param_5 + 0x10 + uVar20 * 8);
        *pdVar17 = dVar29 * param_7 + dVar39;
        pdVar17[1] = dVar31 * param_7 + dVar24;
        pdVar17 = (double *)(param_5 + 0x20 + uVar20 * 8);
        *pdVar17 = dVar25 * param_7 + dVar26;
        pdVar17[1] = dVar27 * param_7 + dVar28;
        uVar20 = uVar20 + 6;
      }
      if ((longlong)uVar20 < (longlong)(param_1 - 3)) {
        dVar25 = 0.0;
        dVar27 = 0.0;
        dVar29 = 0.0;
        dVar31 = 0.0;
        uVar16 = uVar20;
        lVar15 = lVar23;
        do {
          pdVar17 = (double *)(*param_4 + lVar15 * 8);
          dVar35 = *pdVar17;
          dVar33 = *pdVar17;
          pdVar17 = (double *)(lVar19 + uVar16 * 8);
          pdVar21 = (double *)(lVar19 + 0x10 + uVar16 * 8);
          dVar29 = dVar29 + *pdVar17 * dVar35;
          dVar31 = dVar31 + pdVar17[1] * dVar33;
          dVar25 = dVar25 + *pdVar21 * dVar35;
          dVar27 = dVar27 + pdVar21[1] * dVar33;
          lVar15 = lVar15 + 1;
          uVar16 = uVar16 + lVar7;
        } while (lVar15 < lVar22);
        pdVar17 = (double *)(param_5 + uVar20 * 8);
        dVar33 = pdVar17[1];
        pdVar21 = (double *)(param_5 + 0x10 + uVar20 * 8);
        dVar35 = *pdVar21;
        dVar37 = pdVar21[1];
        pdVar21 = (double *)(param_5 + uVar20 * 8);
        *pdVar21 = *pdVar17 + dVar29 * param_7;
        pdVar21[1] = dVar33 + dVar31 * param_7;
        pdVar17 = (double *)(param_5 + 0x10 + uVar20 * 8);
        *pdVar17 = dVar25 * param_7 + dVar35;
        pdVar17[1] = dVar27 * param_7 + dVar37;
        uVar20 = uVar20 + 4;
      }
      if ((longlong)uVar20 < (longlong)(param_1 - 1)) {
        pdVar17 = (double *)(lVar19 + uVar20 * 8);
        dVar25 = 0.0;
        dVar27 = 0.0;
        lVar15 = lVar23;
        do {
          pdVar21 = (double *)(*param_4 + lVar15 * 8);
          dVar25 = dVar25 + *pdVar17 * *pdVar21;
          dVar27 = dVar27 + pdVar17[1] * *pdVar21;
          lVar15 = lVar15 + 1;
          pdVar17 = pdVar17 + lVar7;
        } while (lVar15 < lVar22);
        pdVar17 = (double *)(param_5 + uVar20 * 8);
        dVar29 = pdVar17[1];
        pdVar21 = (double *)(param_5 + uVar20 * 8);
        *pdVar21 = dVar25 * param_7 + *pdVar17;
        pdVar21[1] = dVar27 * param_7 + dVar29;
        uVar20 = uVar20 + 2;
      }
      if ((longlong)uVar20 < (longlong)param_1) {
        pdVar17 = (double *)(lVar19 + uVar20 * 8);
        do {
          dVar25 = 0.0;
          lVar15 = lVar23;
          pdVar21 = pdVar17;
          do {
            dVar25 = dVar25 + *pdVar21 * *(double *)(*param_4 + lVar15 * 8);
            lVar15 = lVar15 + 1;
            pdVar21 = pdVar21 + lVar7;
          } while (lVar15 < lVar22);
          *(double *)(param_5 + uVar20 * 8) = dVar25 * param_7 + *(double *)(param_5 + uVar20 * 8);
          uVar20 = uVar20 + 1;
          pdVar17 = pdVar17 + 1;
        } while (uVar20 != param_1);
      }
      pdVar14 = pdVar14 + lVar18 * lVar7;
      lVar19 = lVar19 + lVar18 * lVar7 * 8;
      lVar23 = lVar1;
    } while (lVar1 < param_2);
  }
  return;
}



// FUNCTION 1482a9dd0 FUN_1482a9dd0 body=166 status=ok
// SIG undefined FUN_1482a9dd0(void)

void FUN_1482a9dd0(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar6 = *(ulonglong *)param_1[3];
  uVar7 = ((ulonglong *)param_1[3])[1];
  uVar10 = uVar7;
  if (((uVar6 & 7) == 0) &&
     (uVar10 = (ulonglong)((uint)(uVar6 >> 3) & 1), (longlong)uVar7 <= (longlong)uVar10)) {
    uVar10 = uVar7;
  }
  lVar12 = uVar7 - uVar10;
  lVar11 = (lVar12 - (lVar12 >> 0x3f) & 0xfffffffffffffffeU) + uVar10;
  FUN_1482a9e76(param_1,0,uVar10);
  if (1 < lVar12) {
    do {
      pdVar2 = (double *)(*(longlong *)(param_1[1] + 0x18) + uVar10 * 8);
      dVar8 = pdVar2[1];
      pdVar1 = (double *)(param_1[1] + 8);
      dVar5 = *pdVar1;
      pdVar3 = (double *)(*(longlong *)*param_1 + uVar10 * 8);
      dVar9 = pdVar3[1];
      pdVar4 = (double *)(*(longlong *)*param_1 + uVar10 * 8);
      *pdVar4 = *pdVar3 - *pdVar1 * *pdVar2;
      pdVar4[1] = dVar9 - dVar5 * dVar8;
      uVar10 = uVar10 + 2;
    } while ((longlong)uVar10 < lVar11);
  }
  FUN_1482a9e76(param_1,lVar11,uVar7);
  return;
}



// FUNCTION 1482a9e76 FUN_1482a9e76 body=54 status=ok
// SIG undefined FUN_1482a9e76(void)

void FUN_1482a9e76(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(*(longlong *)*param_1 + param_2 * 8) -
           *(double *)(*(longlong *)(param_1[1] + 0x18) + param_2 * 8) * *(double *)(param_1[1] + 8)
      ;
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1482a9eac FUN_1482a9eac body=792 status=ok
// SIG undefined FUN_1482a9eac(void)

undefined8
FUN_1482a9eac(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,undefined8 *param_4,
             longlong *param_5,longlong *param_6,longlong *param_7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_178 [38];
  undefined2 local_152;
  ulonglong local_150;
  undefined4 local_144;
  longlong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong uStack_128;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined2 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = *param_3;
  uVar15 = param_3[1];
  uVar11 = param_3[2];
  uVar12 = param_3[3];
  uVar13 = param_3[4];
  local_144 = (undefined4)param_3[5];
  local_152 = *(undefined2 *)((longlong)param_3 + 0x2c);
  uVar8 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar9 = *(undefined8 *)((longlong)param_4 + 0xc);
  uVar4 = *(undefined2 *)((longlong)param_4 + 0x14);
  lVar14 = FUN_14828ba8c();
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0x34000000;
  _local_b8 = CONCAT44(0xc,*(undefined4 *)(param_2 + 1));
  local_f0 = *param_2;
  local_a8 = (ulonglong)*(uint *)(param_1 + 1);
  uStack_a0 = 0x100000000;
  local_d8 = *param_1;
  FUN_14828c40b(lVar14,&local_f0,0);
  FUN_14828be99(lVar14);
  local_138 = local_150;
  local_110 = local_144;
  local_10c = local_152;
  local_130 = uVar15;
  uStack_128 = uVar11;
  local_120 = uVar12;
  uStack_118 = uVar13;
  local_108 = uVar8;
  local_100 = uVar1;
  local_fc = uVar9;
  local_f4 = uVar4;
  FUN_14829173c();
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) != 0) {
    FUN_1408652ee(param_5,0);
  }
  *(undefined4 *)(param_6 + 1) = 0;
  if (*(int *)((longlong)param_6 + 0xc) != 0) {
    FUN_14481578e(param_6,0);
  }
  *(undefined4 *)(param_7 + 1) = 0;
  if (*(int *)((longlong)param_7 + 0xc) != 0) {
    FUN_14481578e(param_7,0);
  }
  if (*(int *)(lVar14 + 0x28) != 0) {
    uVar5 = *(uint *)(lVar14 + 0x18);
    uVar6 = *(uint *)(lVar14 + 0x1c);
    uVar15 = 0;
    local_140 = lVar14;
    do {
      lVar14 = *(longlong *)(local_140 + 8) + uVar15 * 0x28;
      local_150 = uVar15;
      if (*(int *)(lVar14 + 0x20) != 0) {
        lVar16 = 0x10;
        uVar15 = 0;
        do {
          lVar10 = *(longlong *)(lVar14 + 0x10);
          fVar2 = *(float *)(lVar10 + -8 + lVar16);
          uVar1 = *(undefined4 *)(lVar10 + lVar16);
          fVar3 = *(float *)(lVar10 + -4 + lVar16);
          iVar7 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar7 + 1U) {
            FUN_14489624a(param_5,iVar7);
          }
          lVar10 = *param_5;
          *(double *)(lVar10 + (longlong)iVar7 * 0x10) = (double)fVar2 / (double)uVar5;
          *(double *)(lVar10 + 8 + (longlong)iVar7 * 0x10) = (double)fVar3 / (double)uVar6;
          iVar7 = (int)param_7[1];
          *(uint *)(param_7 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_7 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(param_7,iVar7);
          }
          *(undefined4 *)(*param_7 + (longlong)iVar7 * 4) = uVar1;
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 0x14;
        } while (uVar15 < *(uint *)(lVar14 + 0x20));
      }
      if (*(int *)(lVar14 + 0x1c) != 0) {
        uVar15 = 0;
        do {
          uVar1 = *(undefined4 *)(*(longlong *)(lVar14 + 8) + uVar15 * 4);
          iVar7 = (int)param_6[1];
          *(uint *)(param_6 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(param_6,iVar7);
          }
          *(undefined4 *)(*param_6 + (longlong)iVar7 * 4) = uVar1;
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(lVar14 + 0x1c));
      }
      uVar15 = local_150 + 1;
      lVar14 = local_140;
    } while (uVar15 < *(uint *)(local_140 + 0x28));
  }
  FUN_14828bbb4(lVar14);
  if ((local_90 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482aa1c9 FUN_1482aa1c9 body=295 status=ok
// SIG undefined FUN_1482aa1c9(void)

void FUN_1482aa1c9(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    uVar1 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar3 = 0;
    if ((uVar1 != 0) &&
       (uVar3 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar4 = 1;
      uVar6 = 1;
      if (1 < (int)uVar1) {
        uVar4 = uVar1;
      }
      do {
        uVar3 = uVar4;
        if (uVar4 == uVar6) break;
        uVar7 = uVar6 >> 9;
        uVar2 = uVar6 & 0x1ff;
        uVar3 = uVar6;
        uVar6 = uVar6 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar7] +
                                           (ulonglong)uVar2 * 2) - 1U));
    }
    if (uVar3 != uVar1) {
      do {
        if (*(char *)(param_1 + 0x1a8) == '\x01') {
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4) = param_2;
          iVar5 = *(int *)(param_1 + 0x1b0);
          if (*(int *)(param_1 + 0x1b0) < param_2 + 1) {
            iVar5 = param_2 + 1;
          }
          *(int *)(param_1 + 0x1b0) = iVar5;
        }
        uVar4 = uVar3 + 1;
        if ((int)(uVar3 + 1) < (int)uVar1) {
          uVar4 = uVar1;
        }
        do {
          uVar6 = uVar4;
          if (uVar4 - 1 == uVar3) break;
          uVar3 = uVar3 + 1;
          uVar6 = uVar3;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x148) +
                                               (ulonglong)(uVar3 >> 9) * 8) +
                                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
        uVar3 = uVar6;
      } while (uVar3 != uVar1);
    }
  }
  return;
}



// FUNCTION 1482aa2f0 FUN_1482aa2f0 body=108 status=ok
// SIG undefined FUN_1482aa2f0(void)

void FUN_1482aa2f0(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x1a8) == '\x01') && (lVar2 = param_2[1], (longlong)(int)lVar2 != 0)) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      if (*(char *)(param_1 + 0x1a8) == '\x01') {
        *(int *)(*(longlong *)
                  (*(longlong *)(param_1 + 0x198) + (ulonglong)(*(uint *)(lVar1 + lVar3) >> 9) * 8)
                + (ulonglong)(*(uint *)(lVar1 + lVar3) & 0x1ff) * 4) = param_3;
        iVar4 = *(int *)(param_1 + 0x1b0);
        if (*(int *)(param_1 + 0x1b0) < param_3 + 1) {
          iVar4 = param_3 + 1;
        }
        *(int *)(param_1 + 0x1b0) = iVar4;
      }
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  return;
}



// FUNCTION 1482aa35c FUN_1482aa35c body=276 status=ok
// SIG undefined FUN_1482aa35c(void)

void FUN_1482aa35c(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined1 auStack_118 [40];
  uint local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  code *local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined4 local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = 0;
  uStack_b0 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14ae72e10;
  local_88 = FUN_143b011d6;
  local_c0 = param_2;
  local_60 = param_3;
  FUN_142984024(&local_c0);
  FUN_1482aa472(param_1 + 8,uStack_b0 & 0xffffffff);
  local_a0 = &local_e0;
  local_e8 = &local_98;
  local_98 = 0;
  local_90 = 0;
  local_a8 = FUN_143b01296;
  local_f0 = (uint)(param_4 ^ 1);
  local_e0 = &local_c0;
  local_d8 = param_1;
  local_d0 = param_3;
  local_c8 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",uStack_b0 & 0xffffffff,1);
  FUN_146be9400(&local_b8);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482aa472 FUN_1482aa472 body=118 status=ok
// SIG undefined FUN_1482aa472(void)

void FUN_1482aa472(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1482fef36(param_1,iVar1);
    }
    FUN_1482feeeb((longlong)iVar1 * 0x68 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1482fefc6(param_1,param_2,iVar1 - param_2);
    FUN_1482ff020(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482aa4ea FUN_1482aa4ea body=114 status=ok
// SIG undefined FUN_1482aa4ea(void)

undefined8 FUN_1482aa4ea(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar1 = puVar2 + *(int *)(param_1 + 0x18);
    plVar4 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[8];
    }
    do {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        for (iVar3 = *(int *)((longlong)plVar4 + (ulonglong)(*puVar2 & (int)param_2[9] - 1U) * 4);
            iVar3 != -1; iVar3 = *(int *)(*param_2 + (longlong)iVar3 * 0xc + 4)) {
          if (*(uint *)(*param_2 + (longlong)iVar3 * 0xc) == *puVar2) {
            return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
          }
        }
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  return 0;
}



// FUNCTION 1482aa55c FUN_1482aa55c body=221 status=ok
// SIG undefined FUN_1482aa55c(void)

undefined8 * FUN_1482aa55c(undefined8 *param_1,undefined8 param_2,char param_3)

{
  *param_1 = &PTR_FUN_14ae728b0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x10] = param_2;
  if (param_3 != '\0') {
    FUN_1482aa71e(param_1);
  }
  return param_1;
}



// FUNCTION 1482aa63a FUN_1482aa63a body=228 status=ok
// SIG undefined FUN_1482aa63a(void)

undefined8 * FUN_1482aa63a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  *param_1 = &PTR_FUN_14ae728b0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x10] = param_2;
  param_1[0x11] = param_3;
  if (param_4 != '\0') {
    FUN_1482aa71e(param_1);
  }
  return param_1;
}



// FUNCTION 1482aa71e FUN_1482aa71e body=2064 status=ok
// SIG undefined FUN_1482aa71e(void)

ulonglong FUN_1482aa71e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStack_138 [40];
  longlong *local_110;
  longlong *local_108;
  uint local_fc;
  int *local_f8;
  int local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 *local_c8;
  int local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = param_1 + 0xc;
  iVar4 = *(int *)((longlong)param_1 + 0x6c);
  FUN_145aba1e7(param_1[0xc],(int)param_1[0xd]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0x6c) != 0)) {
    FUN_1482ff0c6(local_110);
  }
  iVar4 = *(int *)((longlong)param_1 + 0x7c);
  FUN_145aba20f(param_1[0xe],(int)param_1[0xf]);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0x7c) != 0)) {
    FUN_1482ff0f6(param_1 + 0xe);
  }
  iVar4 = *(int *)((longlong)param_1 + 0x5c);
  FUN_145aba23b(param_1[10],(int)param_1[0xb]);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0x5c) != 0)) {
    FUN_1482ff126(param_1 + 10);
  }
  FUN_1402226aa(param_1 + 0x24);
  lVar10 = param_1[0x10];
  iVar4 = 0;
  uVar17 = *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144);
  uVar14 = 0;
  if (uVar17 != 0) {
    uVar14 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x148) - 1U)) {
      uVar18 = 1;
      uVar9 = 1;
      if (1 < (int)uVar17) {
        uVar18 = uVar17;
      }
      do {
        uVar14 = uVar18;
        if (uVar18 == uVar9) break;
        uVar7 = uVar9 >> 9;
        uVar13 = uVar9 & 0x1ff;
        uVar14 = uVar9;
        uVar9 = uVar9 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x148))[uVar7] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
  }
  if (uVar14 != uVar17) {
    iVar4 = 0;
    do {
      iVar3 = (**(code **)(*param_1 + 0x18))(param_1,uVar14);
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      uVar18 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar17) {
        uVar18 = uVar17;
      }
      do {
        uVar9 = uVar18;
        if (uVar18 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar9 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar10 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      uVar14 = uVar9;
    } while (uVar14 != uVar17);
  }
  plVar11 = param_1 + 0x12;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) < 0) {
    FUN_14481578e(plVar11,0);
  }
  local_b8._0_4_ = 0xffffffff;
  local_108 = plVar11;
  FUN_1448156a8(plVar11,&local_b8,iVar4 + 1);
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
  FUN_1448156a8(&local_e8,&local_b8,iVar4 + 1);
  lVar10 = param_1[0x10];
  uVar17 = *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144);
  uVar14 = 0;
  if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x148) - 1U))) {
    uVar18 = 1;
    uVar9 = 1;
    if (1 < (int)uVar17) {
      uVar9 = uVar17;
    }
    do {
      uVar7 = uVar18;
      uVar14 = uVar9;
      if (uVar9 == uVar7) break;
      uVar18 = uVar7 + 1;
      uVar14 = uVar7;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x148))[uVar7 >> 9] +
                                         (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
  }
joined_r0x0001482aa932:
  uVar18 = uVar14;
  if (uVar18 != uVar17) {
    iVar4 = (**(code **)(*param_1 + 0x18))(param_1,uVar18);
    plVar11 = (longlong *)(longlong)iVar4;
    if (*(int *)(param_1[0x12] + (longlong)plVar11 * 4) == -1) {
      local_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      local_b8 = CONCAT44(local_b8._4_4_,iVar4);
      iVar4 = (int)param_1[0xd];
      *(uint *)(param_1 + 0xd) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0x6c) < iVar4 + 1U) {
        FUN_1482ff244(local_110,iVar4);
      }
      FUN_1482ff156((longlong)iVar4 * 0x38 + *local_110,&local_b8);
      *(int *)(*local_108 + (longlong)plVar11 * 4) = iVar4;
      FUN_1482aaf30(&local_b8);
    }
    piVar16 = (int *)(local_e8 + (longlong)plVar11 * 4);
    *piVar16 = *piVar16 + 1;
    uVar9 = uVar18 + 1;
    if ((int)(uVar18 + 1) < (int)uVar17) {
      uVar9 = uVar17;
    }
    do {
      uVar14 = uVar9;
      if (uVar9 - 1 == uVar18) break;
      uVar18 = uVar18 + 1;
      uVar14 = uVar18;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar10 + 0x148) +
                                           (ulonglong)(uVar18 >> 9) * 8) +
                                         (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
    goto joined_r0x0001482aa932;
  }
  if ((longlong)(int)param_1[0xd] != 0) {
    plVar11 = (longlong *)((longlong)(int)param_1[0xd] * 0x38 + param_1[0xc]);
    lVar10 = param_1[0xc] + 8;
    do {
      iVar4 = *(int *)(local_e8 + (longlong)*(int *)(lVar10 + -8) * 4);
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      if (*(int *)(lVar10 + 0xc) < iVar4) {
        FUN_14481578e(lVar10);
      }
      plVar15 = (longlong *)(lVar10 + 0x30);
      lVar10 = lVar10 + 0x38;
    } while (plVar15 != plVar11);
  }
  lVar10 = param_1[0x10];
  uVar17 = *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144);
  uVar14 = 0;
  if ((uVar17 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x148) - 1U))) {
    uVar18 = 1;
    uVar9 = 1;
    if (1 < (int)uVar17) {
      uVar18 = uVar17;
    }
    do {
      uVar14 = uVar18;
      if (uVar18 == uVar9) break;
      uVar7 = uVar9 >> 9;
      uVar13 = uVar9 & 0x1ff;
      uVar14 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x148))[uVar7] +
                                         (ulonglong)uVar13 * 2) - 1U));
  }
LAB_1482aaa8e:
  if (uVar14 != uVar17) {
    iVar4 = (**(code **)(*param_1 + 0x18))(param_1,uVar14);
    lVar1 = param_1[0xc] + (longlong)*(int *)(param_1[0x12] + (longlong)iVar4 * 4) * 0x38;
    iVar4 = *(int *)(lVar1 + 0x10);
    *(uint *)(lVar1 + 0x10) = iVar4 + 1U;
    if (*(uint *)(lVar1 + 0x14) < iVar4 + 1U) {
      FUN_1446f48e2((longlong *)(lVar1 + 8),iVar4);
    }
    *(uint *)(*(longlong *)(lVar1 + 8) + (longlong)iVar4 * 4) = uVar14;
    uVar18 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar17) {
      uVar18 = uVar17;
    }
    uVar9 = uVar14;
    do {
      uVar14 = uVar18;
      if (uVar18 - 1 == uVar9) break;
      uVar14 = uVar9 + 1;
      uVar9 = uVar14;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar10 + 0x148) +
                                           (ulonglong)(uVar14 >> 9) * 8) +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    goto LAB_1482aaa8e;
  }
  FUN_1407058ce(param_1 + 0x1a);
  uStack_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_8c = 0x80;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_c8 = (undefined1 *)0x0;
  local_bc = 0x80;
  iVar4 = *(int *)(param_1[0x10] + 0x24);
  iVar3 = *(int *)(param_1[0x10] + 0x20) * 0x200;
  local_c0 = iVar3 + iVar4;
  uVar14 = iVar3 + iVar4 + 0x1f;
  if (uVar14 < 0x20) goto LAB_1482aab19;
  if (uVar14 < 0xa0) {
    puVar6 = local_d8;
LAB_1482aaec1:
    uVar14 = uVar14 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(local_d8,0,uVar14 >> 5,4);
    local_bc = uVar14 & 0xffffffe0;
    puVar6 = local_c8;
    if (local_c8 == (undefined1 *)0x0) {
      puVar6 = local_d8;
    }
    if (uVar14 < 0x120) goto LAB_1482aaec1;
    uVar14 = (uVar14 >> 5) << 2;
  }
  memset(puVar6,0,(ulonglong)uVar14);
  iVar4 = local_c0 + 0x1f;
  if (-1 < local_c0) {
    iVar4 = local_c0;
  }
  if (local_c0 % 0x20 != 0) {
    puVar6 = local_c8;
    if (local_c8 == (undefined1 *)0x0) {
      puVar6 = local_d8;
    }
    bVar5 = -(char)(local_c0 % 0x20);
    *(uint *)(puVar6 + (longlong)(iVar4 >> 5) * 4) =
         (uint)(*(int *)(puVar6 + (longlong)(iVar4 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  }
LAB_1482aab19:
  if ((longlong)(int)param_1[0xd] == 0) {
    uVar12 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
  }
  else {
    piVar16 = (int *)param_1[0xc];
    local_f8 = piVar16 + (longlong)(int)param_1[0xd] * 0xe;
    local_108 = param_1;
    do {
      uVar14 = FUN_1482aaf7a(local_108,piVar16,&local_b8,local_d8);
      if ((char)uVar14 == '\0') {
        uVar12 = 0;
        goto LAB_1482aac5c;
      }
      local_fc = uVar14;
      if ((longlong)piVar16[8] != 0) {
        plVar11 = *(longlong **)(piVar16 + 6);
        local_110 = plVar11 + (longlong)piVar16[8] * 5;
        do {
          *(undefined1 *)(plVar11 + 4) = 0;
          lVar10 = plVar11[1];
          if ((longlong)(int)lVar10 != 0) {
            lVar1 = *plVar11;
            lVar19 = 0;
            do {
              lVar2 = param_1[0xe];
              lVar8 = (longlong)*(int *)(lVar1 + lVar19) * 0x50;
              local_ec = *(int *)(lVar2 + lVar8);
              if (local_ec == *piVar16) {
                local_ec = *(int *)(lVar2 + 4 + lVar8);
              }
              if (local_ec == -1) {
                *(undefined1 *)(plVar11 + 4) = 1;
              }
              else {
                FUN_1449e3bb0(plVar11 + 2,&local_ec);
              }
              lVar19 = lVar19 + 4;
            } while ((longlong)(int)lVar10 * 4 != lVar19);
          }
          plVar11 = plVar11 + 5;
        } while (plVar11 != local_110);
        if ((longlong)piVar16[8] != 0) {
          plVar11 = *(longlong **)(piVar16 + 6);
          local_110 = plVar11 + (longlong)piVar16[8] * 5;
          do {
            lVar10 = plVar11[3];
            if ((longlong)(int)lVar10 != 0) {
              lVar1 = plVar11[2];
              lVar19 = 0;
              do {
                local_ec = *(int *)(lVar1 + lVar19);
                FUN_1449e3bb0(piVar16 + 10,&local_ec);
                lVar19 = lVar19 + 4;
              } while ((longlong)(int)lVar10 * 4 != lVar19);
            }
            plVar11 = plVar11 + 5;
          } while (plVar11 != local_110);
        }
      }
      piVar16 = piVar16 + 0xe;
    } while (piVar16 != local_f8);
    uVar12 = (ulonglong)local_fc;
  }
LAB_1482aac5c:
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_b8);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1482aaf30 FUN_1482aaf30 body=74 status=ok
// SIG undefined FUN_1482aaf30(void)

void FUN_1482aaf30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1482f52aa(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482aaf7a FUN_1482aaf7a body=2408 status=ok
// SIG undefined FUN_1482aaf7a(void)

ulonglong FUN_1482aaf7a(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  longlong *unaff_RBX;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  undefined1 auStack_2c8 [47];
  char local_299;
  longlong *local_298;
  longlong *local_290;
  longlong local_288;
  longlong *local_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  longlong *local_260;
  longlong local_258;
  longlong local_250;
  longlong *local_248;
  longlong local_240;
  longlong *local_238;
  longlong *local_230;
  undefined4 *local_228;
  undefined8 uStack_220;
  uint local_214;
  uint *local_210;
  uint *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8;
  undefined4 **local_1d0;
  uint *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined8 uStack_197;
  longlong local_188;
  uint local_17c;
  undefined4 *local_178;
  undefined8 uStack_170;
  uint local_164;
  undefined1 local_160 [8];
  longlong local_158;
  int local_150;
  char local_148;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_146c6a7a4(local_160,param_1[0x10],param_2 + 8,1);
  local_299 = local_148;
  if (local_148 == '\0') {
    lVar17 = (longlong)local_150;
    local_248 = (longlong *)(param_2 + 0x18);
    FUN_1482acbd6();
    local_250 = lVar17;
    if (0 < lVar17) {
      local_270 = param_1 + 0x1a;
      local_230 = param_1 + 0x21;
      local_260 = param_1 + 10;
      local_268 = param_1 + 0x24;
      plVar11 = param_3 + 7;
      local_298 = param_1 + 0xe;
      lVar17 = 0;
      local_280 = param_1;
      local_278 = plVar11;
      local_258 = param_4;
      local_238 = param_3;
      do {
        lVar4 = local_258;
        unaff_RBX = (longlong *)(lVar17 * 0x28 + *local_248);
        lVar1 = local_158 + lVar17 * 0x40;
        local_178 = (undefined4 *)0x0;
        uStack_170 = 0;
        iVar20 = *(int *)(local_158 + 0x10 + lVar17 * 0x40);
        local_290 = unaff_RBX;
        local_240 = lVar17;
        if ((longlong)iVar20 < 1) {
LAB_1482ab63b:
          if ((longlong)*(int *)(lVar1 + 0x20) == 0) {
            puVar16 = (uint *)0x0;
          }
          else {
            lVar17 = (longlong)*(int *)(lVar1 + 0x20) << 2;
            puVar16 = (uint *)0x0;
            puVar21 = *(uint **)(lVar1 + 0x18);
            do {
              if ((puVar16 == (uint *)0x0) || ((int)*puVar21 < (int)*puVar16)) {
                puVar16 = puVar21;
              }
              puVar21 = puVar21 + 1;
              lVar17 = lVar17 + -4;
            } while (lVar17 != 0);
          }
          local_164 = *puVar16;
          if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
            plVar13 = (longlong *)param_3[8];
            if ((longlong *)param_3[8] == (longlong *)0x0) {
              plVar13 = plVar11;
            }
            iVar20 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_3[9] - 1U & local_164) * 4)
            ;
            if (iVar20 != -1) {
              do {
                lVar17 = *param_3 + (longlong)iVar20 * 0x10;
                if (*(uint *)(*param_3 + (longlong)iVar20 * 0x10) == local_164) {
                  if ((lVar17 != 0) && ((uint *)(lVar17 + 4) != (uint *)0x0)) {
                    local_17c = *(uint *)(lVar17 + 4);
                    if (local_17c == 0xffffffff) goto LAB_1482ab6d0;
                    goto LAB_1482ab83b;
                  }
                  break;
                }
                iVar20 = *(int *)(lVar17 + 8);
              } while (iVar20 != -1);
            }
          }
          local_17c = 0xffffffff;
LAB_1482ab6d0:
          FUN_1482acc52(param_1,&local_1d0,**(uint **)(lVar1 + 0x18));
          local_188 = 0xffffffffffffffff;
          uStack_198 = 0;
          uStack_197 = 0;
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          local_19f = 0;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1c8 = (uint *)0x0;
          uStack_1c0 = 0;
          local_210 = (uint *)param_1[0x10];
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_208 = (uint *)0x0;
          uStack_200 = 0;
          local_1d8 = 0;
          FUN_1482acce2(&local_1c8,&local_210);
          FUN_146c7d752(&local_210);
          FUN_146c5e334(&local_1c8,lVar1 + 0x18);
          local_188 = -1;
          uVar12 = *(uint *)(param_1 + 0xf);
          *(uint *)(param_1 + 0xf) = uVar12 + 1;
          if (*(uint *)((longlong)param_1 + 0x7c) < uVar12 + 1) {
            FUN_1482ff5e0(local_298,uVar12);
          }
          plVar13 = (longlong *)(*local_298 + (longlong)(int)uVar12 * 0x50);
          *plVar13 = (longlong)local_1d0;
          FUN_146c7f210(plVar13 + 1,&local_1c8);
          plVar13[9] = local_188;
          local_210 = &local_164;
          local_208 = &local_17c;
          local_17c = uVar12;
          FUN_140263e2a(param_3,&local_228,&local_210,0);
          FUN_146c7d752(&local_1c8);
          unaff_RBX = local_290;
LAB_1482ab83b:
          iVar20 = (int)unaff_RBX[1];
          *(uint *)(unaff_RBX + 1) = iVar20 + 1U;
          if (*(uint *)((longlong)unaff_RBX + 0xc) < iVar20 + 1U) {
            FUN_1446f48e2(unaff_RBX,iVar20);
          }
          *(uint *)(*unaff_RBX + (longlong)iVar20 * 4) = local_17c;
        }
        else {
          lVar17 = 0;
          do {
            uVar12 = *(uint *)(*(longlong *)(lVar1 + 8) + lVar17 * 4);
            local_228 = (undefined4 *)CONCAT44(local_228._4_4_,uVar12);
            lVar18 = *(longlong *)(lVar4 + 0x10);
            if (lVar18 == 0) {
              lVar18 = lVar4;
            }
            uVar19 = uVar12 + 0x1f;
            if (-1 < (int)uVar12) {
              uVar19 = uVar12;
            }
            uVar3 = *(uint *)(lVar18 + (longlong)((int)uVar19 >> 5) * 4);
            if ((uVar3 >> (uVar12 & 0x1f) & 1) == 0) {
              *(uint *)(lVar18 + (longlong)((int)uVar19 >> 5) * 4) =
                   uVar3 | 1 << ((byte)uVar12 & 0x1f);
              local_17c = local_17c & 0xffffff00;
              cVar8 = (**(code **)(*param_1 + 0x28))(param_1,uVar12,&local_17c);
              if (cVar8 != '\0') {
                uVar12 = *(uint *)(param_1 + 0xb);
                *(uint *)(param_1 + 0xb) = uVar12 + 1;
                if (*(uint *)((longlong)param_1 + 0x5c) < uVar12 + 1) {
                  FUN_1482f52e8(local_260,uVar12);
                }
                lVar18 = param_1[10];
                lVar6 = (longlong)(int)uVar12 * 0x18;
                puVar2 = (undefined8 *)(lVar18 + lVar6);
                *puVar2 = 0;
                puVar2[1] = 0;
                *(undefined8 *)(lVar18 + 0x10 + lVar6) = 0;
                *(undefined4 *)(param_1[10] + lVar6) = local_228._0_4_;
                local_164 = uVar12;
                FUN_1482aedb4(param_1);
                local_1d0 = &local_228;
                local_1c8 = &local_164;
                FUN_140263e2a(local_270,&local_210,&local_1d0,0);
                unaff_RBX = local_290;
                if ((char)local_17c == '\x01') {
                  FUN_1447cbafe(local_268,&local_1d0,&local_228,0);
                  unaff_RBX = local_290;
                }
LAB_1482ab24c:
                uVar5 = uStack_170;
                lVar18 = (longlong)(int)uStack_170;
                uVar12 = (int)uStack_170 + 1;
                uStack_170 = CONCAT44(uStack_170._4_4_,uVar12);
                if (uStack_170._4_4_ < uVar12) {
                  FUN_1446f48e2(&local_178,uVar5 & 0xffffffff);
                }
                local_178[lVar18] = (int)lVar17;
              }
            }
            else if ((int)param_1[0x1b] != *(int *)((longlong)param_1 + 0x104)) {
              plVar11 = (longlong *)param_1[0x22];
              if ((longlong *)param_1[0x22] == (longlong *)0x0) {
                plVar11 = local_230;
              }
              iVar23 = *(int *)((longlong)plVar11 +
                               (ulonglong)((int)param_1[0x23] - 1U & uVar12) * 4);
              if (iVar23 != -1) {
                do {
                  if (*(uint *)(*local_270 + (longlong)iVar23 * 0x10) == uVar12) goto LAB_1482ab24c;
                  iVar23 = *(int *)((longlong)iVar23 * 0x10 + *local_270 + 8);
                } while (iVar23 != -1);
              }
            }
            plVar11 = local_278;
            lVar17 = lVar17 + 1;
          } while (lVar17 != iVar20);
          lVar17 = (longlong)(int)uStack_170;
          if (lVar17 == 0) goto LAB_1482ab63b;
          uVar9 = *local_178;
          uVar12 = (int)uStack_170 + 1;
          uStack_170 = CONCAT44(uStack_170._4_4_,uVar12);
          local_288 = lVar17;
          if (uStack_170._4_4_ < uVar12) {
            FUN_1446f48e2(&local_178,lVar17);
          }
          local_178[local_288] = uVar9;
          if (0 < (int)local_288) {
            lVar17 = 0;
            do {
              unaff_RBX = local_290;
              iVar23 = local_178[lVar17];
              iVar14 = ((iVar20 - iVar23) + local_178[lVar17 + 1]) % iVar20;
              if (iVar14 == 0) {
                iVar14 = iVar20;
              }
              lVar4 = *(longlong *)(lVar1 + 0x18);
              local_17c = *(uint *)(lVar4 + (longlong)iVar23 * 4);
              if (1 < iVar14) {
                iVar22 = iVar14 + -1;
                iVar15 = iVar23;
                do {
                  iVar15 = iVar15 + 1;
                  uVar12 = *(uint *)(lVar4 + (longlong)(iVar15 % iVar20) * 4);
                  if ((int)local_17c < (int)uVar12) {
                    uVar12 = local_17c;
                  }
                  local_17c = uVar12;
                  iVar22 = iVar22 + -1;
                } while (iVar22 != 0);
              }
              if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
                plVar13 = (longlong *)param_3[8];
                if ((longlong *)param_3[8] == (longlong *)0x0) {
                  plVar13 = plVar11;
                }
                iVar15 = *(int *)((longlong)plVar13 +
                                 (ulonglong)((int)param_3[9] - 1U & local_17c) * 4);
                if (iVar15 != -1) {
                  do {
                    lVar18 = *param_3 + (longlong)iVar15 * 0x10;
                    if (*(uint *)(*param_3 + (longlong)iVar15 * 0x10) == local_17c) {
                      if ((lVar18 != 0) && ((uint *)(lVar18 + 4) != (uint *)0x0)) {
                        local_214 = *(uint *)(lVar18 + 4);
                        if (local_214 == 0xffffffff) goto LAB_1482ab3a5;
                        iVar23 = (int)local_290[1];
                        *(uint *)(local_290 + 1) = iVar23 + 1U;
                        if (*(uint *)((longlong)local_290 + 0xc) < iVar23 + 1U) {
                          FUN_1446f48e2(local_290,iVar23);
                        }
                        *(uint *)(*unaff_RBX + (longlong)iVar23 * 4) = local_214;
                        param_1 = local_280;
                        goto LAB_1482ab628;
                      }
                      break;
                    }
                    iVar15 = *(int *)(lVar18 + 8);
                  } while (iVar15 != -1);
                }
              }
              local_214 = 0xffffffff;
LAB_1482ab3a5:
              FUN_1482acc52(local_280,&local_1d0,*(undefined4 *)(lVar4 + (longlong)iVar23 * 4));
              local_188 = 0xffffffffffffffff;
              uStack_198 = 0;
              uStack_197 = 0;
              uStack_1a8 = 0;
              uStack_1a0 = 0;
              local_19f = 0;
              local_1b8 = 0;
              uStack_1b0 = 0;
              local_1c8 = (uint *)0x0;
              uStack_1c0 = 0;
              local_228 = (undefined4 *)0x0;
              uStack_220 = 0;
              if (-1 < iVar14) {
                iVar14 = iVar14 + 1;
                do {
                  uVar5 = uStack_220;
                  lVar4 = *(longlong *)(lVar1 + 8);
                  lVar18 = (longlong)(int)uStack_220;
                  uVar12 = (int)uStack_220 + 1;
                  uStack_220 = CONCAT44(uStack_220._4_4_,uVar12);
                  if (uStack_220._4_4_ < uVar12) {
                    FUN_1446f48e2(&local_228,uVar5 & 0xffffffff);
                  }
                  local_228[lVar18] = *(undefined4 *)(lVar4 + (longlong)(iVar23 % iVar20) * 4);
                  iVar23 = iVar23 + 1;
                  iVar14 = iVar14 + -1;
                } while (iVar14 != 0);
              }
              param_1 = local_280;
              local_210 = (uint *)local_280[0x10];
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_1f8 = 0;
              uStack_1f0 = 0;
              local_208 = (uint *)0x0;
              uStack_200 = 0;
              local_1d8 = 0;
              FUN_1482acce2(&local_1c8,&local_210);
              FUN_146c7d752(&local_210);
              FUN_146c5e488(&local_1c8,&local_228,1);
              puVar7 = local_228;
              uVar9 = FUN_1482abbb8(param_1,local_228[(int)uStack_220 + -1]);
              uVar10 = FUN_1482abbb8(param_1,*puVar7);
              local_188 = CONCAT44(uVar9,uVar10);
              uVar12 = *(uint *)(param_1 + 0xf);
              unaff_RBX = (longlong *)(ulonglong)uVar12;
              *(uint *)(param_1 + 0xf) = uVar12 + 1;
              if (*(uint *)((longlong)param_1 + 0x7c) < uVar12 + 1) {
                FUN_1482ff5e0(local_298,unaff_RBX);
              }
              plVar11 = (longlong *)(*local_298 + (longlong)(int)uVar12 * 0x50);
              *plVar11 = (longlong)local_1d0;
              FUN_146c7f210(plVar11 + 1,&local_1c8);
              param_3 = local_238;
              plVar13 = local_290;
              plVar11[9] = local_188;
              iVar23 = (int)local_290[1];
              *(uint *)(local_290 + 1) = iVar23 + 1U;
              local_214 = uVar12;
              if (*(uint *)((longlong)local_290 + 0xc) < iVar23 + 1U) {
                FUN_1446f48e2(local_290,iVar23);
              }
              *(uint *)(*plVar13 + (longlong)iVar23 * 4) = local_214;
              local_210 = &local_17c;
              local_208 = &local_214;
              FUN_140263e2a(param_3,&local_164,&local_210,0);
              plVar11 = local_278;
              if (local_228 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              FUN_146c7d752(&local_1c8);
LAB_1482ab628:
              lVar17 = lVar17 + 1;
            } while (lVar17 != local_288);
          }
        }
        if (local_178 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        lVar17 = local_240 + 1;
      } while (lVar17 != local_250);
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_299);
  FUN_146bc7b3e(local_160);
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (uVar5 ^ 1) & 0xffffffff;
}



// FUNCTION 1482ab8e4 FUN_1482ab8e4 body=201 status=ok
// SIG undefined FUN_1482ab8e4(void)

void FUN_1482ab8e4(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar5 [16];
  
  *(undefined8 *)(param_1 + 0x80) = param_2;
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    uVar1 = (longlong)*(int *)(param_1 + 0x78) * 0x50 - 0x50;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar1;
    uVar4 = SUB164(auVar7 * ZEXT816(0xcccccccccccccccd),8);
    uVar6 = (undefined4)(uVar1 / 0x140000000);
    auVar5._0_8_ = CONCAT44(uVar6,uVar4);
    auVar5._8_4_ = uVar4;
    auVar5._12_4_ = uVar6;
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x58);
    uVar2 = 0;
    auVar7 = pmovsxbq(in_XMM1,0x100);
    do {
      if ((bool)(~((longlong)(auVar5._0_8_ >> 6 | 0x8000000000000000) <
                  (longlong)(uVar2 ^ 0x8000000000000000)) & 1)) {
        puVar3[-10] = param_2;
      }
      auVar8._8_4_ = (int)uVar2;
      auVar8._0_8_ = uVar2;
      auVar8._12_4_ = (int)(uVar2 >> 0x20);
      if ((longlong)((auVar8._8_8_ | auVar7._8_8_) ^ 0x8000000000000000) <=
          (longlong)(auVar5._8_8_ >> 6 | 0x8000000000000000)) {
        *puVar3 = param_2;
      }
      uVar2 = uVar2 + 2;
      puVar3 = puVar3 + 0x14;
    } while ((uVar1 / 0x50 + 2 & 0xfffffffffffffffe) != uVar2);
  }
  return;
}



// FUNCTION 1482ab9bc FUN_1482ab9bc body=491 status=ok
// SIG undefined FUN_1482ab9bc(void)

char FUN_1482ab9bc(longlong *param_1,int param_2,undefined1 *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  int local_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined8 local_60;
  uint local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  local_50 = 0xffffffffffffffff;
  lVar11 = param_1[0x10] + 0xb8;
  local_80 = param_3;
  FUN_146be983e(&local_78,lVar11,param_2,0);
  if ((((CONCAT44(uStack_74,local_78) != lVar11) || (local_70 != param_2)) || ((int)local_60 != -1))
     || (local_60._4_4_ != -1)) {
    uVar10 = 0xffffffff;
    uVar8 = 0xffffffff;
    do {
      uVar2 = local_58;
      uVar9 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(param_1[0x10] + 0x1c0) + (ulonglong)(local_58 >> 9) * 8)
                + 8 + (ulonglong)((local_58 & 0x1ff) << 4)) >> 0x20;
      if (uVar9 == 0xffffffff) {
LAB_1482abb18:
        if (uVar8 == 0xffffffff) {
          local_50 = CONCAT44(local_50._4_4_,uVar2);
          uVar8 = uVar2;
        }
        else {
          if (uVar10 != 0xffffffff) goto LAB_1482aba86;
          local_50 = CONCAT44(uVar2,(undefined4)local_50);
          uVar10 = uVar2;
        }
      }
      else {
        iVar4 = (**(code **)(*param_1 + 0x18))(param_1);
        iVar5 = (**(code **)(*param_1 + 0x18))(param_1,uVar9);
        if (iVar4 != iVar5) goto LAB_1482abb18;
      }
      if (local_68 == 0) {
        local_6c = 0xffffffff;
        local_60 = 0xffffffffffffffff;
        local_60._4_4_ = -1;
        local_60._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_78);
      }
    } while (((CONCAT44(uStack_74,local_78) != lVar11) || (local_70 != param_2)) ||
            (((int)local_60 != -1 || (local_60._4_4_ != -1))));
  }
  pcVar1 = (code *)param_1[2];
  if (pcVar1 == (code *)0x0) {
    cVar3 = '\0';
  }
  else {
    plVar7 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    local_78 = param_2;
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar3 = (*pcVar1)(uVar6,param_1,&local_78,&local_50);
    if ((local_80 != (undefined1 *)0x0) && (cVar3 != '\0')) {
      *local_80 = 1;
LAB_1482aba86:
      cVar3 = '\x01';
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar3;
}



// FUNCTION 1482abba8 FUN_1482abba8 body=15 status=ok
// SIG undefined FUN_1482abba8(void)

undefined4 FUN_1482abba8(longlong param_1,int param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 0x18);
}



// FUNCTION 1482abbb8 FUN_1482abbb8 body=125 status=ok
// SIG undefined FUN_1482abbb8(void)

undefined4 FUN_1482abbb8(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    lVar1 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x110);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0xd0) + (longlong)iVar2 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar2 * 0x10) == param_2) {
          if ((undefined4 *)(lVar1 + 4) == (undefined4 *)0x0 || lVar1 == 0) {
            return 0xffffffff;
          }
          return *(undefined4 *)(lVar1 + 4);
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1482abc36 FUN_1482abc36 body=43 status=ok
// SIG undefined FUN_1482abc36(void)

longlong FUN_1482abc36(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x98))) &&
     (lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_2 * 4),
     lVar1 != -1)) {
    return lVar1 * 0x38 + *(longlong *)(param_1 + 0x60);
  }
  return 0;
}



// FUNCTION 1482abc62 FUN_1482abc62 body=64 status=ok
// SIG undefined FUN_1482abc62(void)

longlong FUN_1482abc62(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((int)param_2 < 0) || (*(int *)(param_1 + 0x98) <= (int)param_2)) ||
     (lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_2 * 4),
     lVar2 == -1)) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 * 0x38 + *(longlong *)(param_1 + 0x60);
  }
  lVar1 = param_1 + 0xc0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 8;
  }
  return lVar1;
}



// FUNCTION 1482abca2 FUN_1482abca2 body=241 status=ok
// SIG undefined FUN_1482abca2(void)

int FUN_1482abca2(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar3 = (**(code **)(*param_1 + 0x18))
                    (param_1,*(undefined4 *)
                              (*(longlong *)
                                (*(longlong *)(param_1[0x10] + 0x1c0) +
                                (ulonglong)(param_2 >> 9) * 8) + 8 +
                              (ulonglong)((param_2 & 0x1ff) << 4)));
  if ((((-1 < (int)uVar3) && ((int)uVar3 < (int)param_1[0x13])) &&
      (lVar4 = (longlong)*(int *)(param_1[0x12] + (ulonglong)uVar3 * 4), lVar4 != -1)) &&
     ((lVar4 = lVar4 * 0x38 + param_1[0xc], lVar4 != 0 && ((longlong)*(int *)(lVar4 + 0x20) != 0))))
  {
    puVar5 = *(undefined8 **)(lVar4 + 0x18);
    puVar1 = puVar5 + (longlong)*(int *)(lVar4 + 0x20) * 5;
    do {
      if ((longlong)*(int *)(puVar5 + 1) != 0) {
        piVar6 = (int *)*puVar5;
        piVar2 = piVar6 + *(int *)(puVar5 + 1);
        do {
          lVar7 = (longlong)*piVar6 * 0x50;
          lVar4 = (longlong)*(int *)(param_1[0xe] + 0x28 + lVar7);
          if (lVar4 != 0) {
            lVar8 = 0;
            do {
              if (*(uint *)(*(longlong *)(param_1[0xe] + 0x20 + lVar7) + lVar8) == param_2) {
                return *piVar6;
              }
              lVar8 = lVar8 + 4;
            } while (lVar4 * 4 != lVar8);
          }
          piVar6 = piVar6 + 1;
        } while (piVar6 != piVar2);
      }
      puVar5 = puVar5 + 5;
    } while (puVar5 != puVar1);
  }
  return -1;
}



// FUNCTION 1482abd94 FUN_1482abd94 body=69 status=ok
// SIG undefined FUN_1482abd94(void)

int FUN_1482abd94(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(uint *)((ulonglong)(param_2 >> 2 & 0x1ff) * 0xc +
                    *(longlong *)
                     (*(longlong *)(param_1[0x10] + 0x180) + (ulonglong)(param_2 >> 0xb) * 8) +
                   (ulonglong)(param_2 & 3) * 4);
  if (uVar3 == 0xffffffff) {
    return -1;
  }
  uVar4 = (**(code **)(*param_1 + 0x18))
                    (param_1,*(undefined4 *)
                              (*(longlong *)
                                (*(longlong *)(param_1[0x10] + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8)
                               + 8 + (ulonglong)((uVar3 & 0x1ff) << 4)));
  if ((((-1 < (int)uVar4) && ((int)uVar4 < (int)param_1[0x13])) &&
      (lVar5 = (longlong)*(int *)(param_1[0x12] + (ulonglong)uVar4 * 4), lVar5 != -1)) &&
     ((lVar5 = lVar5 * 0x38 + param_1[0xc], lVar5 != 0 && ((longlong)*(int *)(lVar5 + 0x20) != 0))))
  {
    puVar6 = *(undefined8 **)(lVar5 + 0x18);
    puVar1 = puVar6 + (longlong)*(int *)(lVar5 + 0x20) * 5;
    do {
      if ((longlong)*(int *)(puVar6 + 1) != 0) {
        piVar7 = (int *)*puVar6;
        piVar2 = piVar7 + *(int *)(puVar6 + 1);
        do {
          lVar8 = (longlong)*piVar7 * 0x50;
          lVar5 = (longlong)*(int *)(param_1[0xe] + 0x28 + lVar8);
          if (lVar5 != 0) {
            lVar9 = 0;
            do {
              if (*(uint *)(*(longlong *)(param_1[0xe] + 0x20 + lVar8) + lVar9) == uVar3) {
                return *piVar7;
              }
              lVar9 = lVar9 + 4;
            } while (lVar5 * 4 != lVar9);
          }
          piVar7 = piVar7 + 1;
        } while (piVar7 != piVar2);
      }
      puVar6 = puVar6 + 5;
    } while (puVar6 != puVar1);
  }
  return -1;
}



// FUNCTION 1482abdda FUN_1482abdda body=23 status=ok
// SIG undefined FUN_1482abdda(void)

longlong FUN_1482abdda(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0x50 + 0x10;
}



// FUNCTION 1482abdf2 FUN_1482abdf2 body=23 status=ok
// SIG undefined FUN_1482abdf2(void)

longlong FUN_1482abdf2(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0x50 + 0x20;
}



// FUNCTION 1482abe0a FUN_1482abe0a body=597 status=ok
// SIG undefined FUN_1482abe0a(void)

void FUN_1482abe0a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_248 [44];
  undefined4 local_21c;
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
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
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_150 = param_1[0x10];
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _uStack_148 = CONCAT44(uStack_144,param_2);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  iStack_210 = param_2;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    local_21c = (**(code **)(*param_1 + 0x18))(param_1,local_120);
    FUN_1449e3bb0(param_3,&local_21c);
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar1 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar1 = local_198;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar1 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar1 = local_f8;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ac060 FUN_1482ac060 body=124 status=ok
// SIG undefined FUN_1482ac060(void)

void FUN_1482ac060(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x70);
      lVar4 = (longlong)*(int *)(lVar1 + lVar5) * 0x50;
      FUN_1482abe0a(param_1,**(undefined4 **)(lVar2 + 0x10 + lVar4),param_3);
      FUN_1482abe0a(param_1,*(undefined4 *)
                             (*(longlong *)(lVar2 + 0x10 + lVar4) + -4 +
                             (longlong)*(int *)(lVar2 + 0x18 + lVar4) * 4),param_3);
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar5);
  }
  return;
}



// FUNCTION 1482ac0dc FUN_1482ac0dc body=78 status=ok
// SIG undefined FUN_1482ac0dc(void)

void FUN_1482ac0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_143b01d1c;
  local_20 = param_3;
  FUN_1482ac790();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ac12c FUN_1482ac12c body=62 status=ok
// SIG undefined FUN_1482ac12c(void)

undefined4 FUN_1482ac12c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = **(uint **)(*(longlong *)(param_1 + 0x70) + 0x20 + (longlong)param_2 * 0x50);
  uVar2 = (uVar1 & 0x1ff) << 4;
  return CONCAT31((int3)(uVar2 >> 8),
                  *(int *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x1c0) +
                            (ulonglong)(uVar1 >> 9) * 8) + 0xc + (ulonglong)uVar2) == -1);
}



// FUNCTION 1482ac16a FUN_1482ac16a body=24 status=ok
// SIG undefined FUN_1482ac16a(void)

undefined8 FUN_1482ac16a(longlong param_1,int param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x70) >> 8),
                  *(int *)(*(longlong *)(param_1 + 0x70) + 0x48 + (longlong)param_2 * 0x50) == -1);
}



// FUNCTION 1482ac182 FUN_1482ac182 body=268 status=ok
// SIG undefined FUN_1482ac182(void)

void FUN_1482ac182(longlong param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  uVar1 = *(uint *)(lVar4 + 0x18 + (longlong)param_2 * 0x50);
  if (param_3 != (longlong *)0x0) {
    FUN_1400bd09c(param_3,(ulonglong)uVar1,1);
    *(undefined8 *)*param_3 = 0;
  }
  dVar10 = 0.0;
  if (1 < (int)uVar1) {
    uVar7 = 1;
    do {
      lVar5 = *(longlong *)(lVar4 + (longlong)param_2 * 0x50 + 0x10);
      uVar2 = *(uint *)(lVar5 + -4 + uVar7 * 4);
      uVar3 = *(uint *)(lVar5 + uVar7 * 4);
      uVar9 = (ulonglong)uVar2 & 0x1ff;
      uVar8 = (ulonglong)uVar3 & 0x1ff;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
      lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8);
      lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8);
      dVar11 = *(double *)(lVar6 + uVar9 * 0x18) - *(double *)(lVar5 + uVar8 * 0x18);
      dVar12 = *(double *)(lVar6 + 8 + uVar9 * 0x18) - *(double *)(lVar5 + 8 + uVar8 * 0x18);
      dVar13 = *(double *)(lVar6 + 0x10 + uVar9 * 0x18) - *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
      dVar10 = SQRT(dVar13 * dVar13 + dVar11 * dVar11 + dVar12 * dVar12) + dVar10;
      if (param_3 != (longlong *)0x0) {
        *(double *)(*param_3 + uVar7 * 8) = dVar10;
      }
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  return;
}



// FUNCTION 1482ac28e FUN_1482ac28e body=501 status=ok
// SIG undefined FUN_1482ac28e(void)

void FUN_1482ac28e(longlong param_1,double *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
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
  
  puVar2 = *(uint **)(*(longlong *)(param_1 + 0x70) + 0x10 + (longlong)param_3 * 0x50);
  uVar1 = *puVar2;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
  lVar6 = *(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8);
  uVar8 = (ulonglong)(uVar1 & 0x1ff);
  dVar17 = *(double *)(lVar6 + uVar8 * 0x18);
  dVar13 = *(double *)(lVar6 + 8 + uVar8 * 0x18);
  dVar11 = *(double *)(lVar6 + 0x10 + uVar8 * 0x18);
  lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x18 + (longlong)param_3 * 0x50);
  if (1 < lVar6) {
    dVar16 = 0.0;
    lVar7 = 1;
    dVar9 = dVar11;
    dVar10 = DAT_14c8464f0;
    dVar12 = DAT_14c8464e8;
    dVar14 = dVar13;
    dVar15 = dVar17;
    dVar18 = DAT_14c8464e0;
    do {
      uVar1 = puVar2[lVar7];
      lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8);
      uVar8 = (ulonglong)(uVar1 & 0x1ff);
      dVar17 = *(double *)(lVar4 + uVar8 * 0x18);
      dVar13 = *(double *)(lVar4 + 8 + uVar8 * 0x18);
      dVar11 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
      dVar5 = SQRT((dVar11 - dVar9) * (dVar11 - dVar9) +
                   (dVar13 - dVar14) * (dVar13 - dVar14) + (dVar17 - dVar15) * (dVar17 - dVar15));
      dVar16 = dVar16 + dVar5;
      dVar5 = dVar5 * 0.5;
      dVar10 = dVar10 + (dVar9 + dVar11) * dVar5;
      dVar12 = dVar12 + (dVar14 + dVar13) * dVar5;
      dVar18 = dVar18 + dVar5 * (dVar15 + dVar17);
      lVar7 = lVar7 + 1;
      dVar9 = dVar11;
      dVar14 = dVar13;
      dVar15 = dVar17;
    } while (lVar6 != lVar7);
    if (2.220446049250313e-16 <= dVar16) {
      dVar16 = 1.0 / dVar16;
      dVar11 = dVar10 * dVar16;
      dVar13 = dVar12 * dVar16;
      dVar17 = dVar16 * dVar18;
    }
  }
  *param_2 = dVar17;
  param_2[1] = dVar13;
  param_2[2] = dVar11;
  return;
}



// FUNCTION 1482ac484 FUN_1482ac484 body=612 status=ok
// SIG undefined FUN_1482ac484(void)

double * FUN_1482ac484(longlong param_1,double *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  lVar6 = *(longlong *)(param_1 + 0x70) + (longlong)param_3 * 0x50;
  puVar12 = (undefined8 *)(lVar6 + 0x10);
  uVar1 = *(uint *)(lVar6 + 0x18);
  if ((ulonglong)uVar1 == 2) {
    puVar2 = (uint *)*puVar12;
    uVar1 = *puVar2;
    uVar7 = puVar2[1];
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
    lVar3 = *(longlong *)(lVar6 + (ulonglong)(uVar1 >> 9) * 8);
    uVar8 = (ulonglong)uVar1 & 0x1ff;
    dVar13 = *(double *)(lVar3 + uVar8 * 0x18);
    dVar14 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
    dVar15 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
    lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar7 >> 9) * 8);
    uVar8 = (ulonglong)uVar7 & 0x1ff;
  }
  else {
    dVar13 = (double)FUN_1482ac182(param_1,param_3,0);
    puVar2 = (uint *)*puVar12;
    if ((int)uVar1 < 2) {
      uVar7 = *puVar2;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
      uVar7 = *puVar2;
      uVar8 = 1;
      dVar14 = 0.0;
      uVar9 = uVar7;
      do {
        lVar3 = *(longlong *)(lVar6 + (ulonglong)(uVar9 >> 9) * 8);
        uVar10 = (ulonglong)(uVar9 & 0x1ff);
        uVar9 = puVar2[uVar8];
        lVar4 = *(longlong *)(lVar6 + (ulonglong)(uVar9 >> 9) * 8);
        uVar11 = (ulonglong)(uVar9 & 0x1ff);
        dVar15 = *(double *)(lVar4 + uVar11 * 0x18);
        dVar19 = *(double *)(lVar4 + 8 + uVar11 * 0x18);
        dVar16 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
        dVar17 = *(double *)(lVar3 + uVar10 * 0x18) - dVar15;
        dVar18 = *(double *)(lVar3 + 8 + uVar10 * 0x18) - dVar19;
        dVar5 = *(double *)(lVar3 + 0x10 + uVar10 * 0x18) - dVar16;
        dVar18 = SQRT(dVar5 * dVar5 + dVar17 * dVar17 + dVar18 * dVar18) + dVar14;
        if (dVar13 * 0.5 < dVar18) {
          dVar13 = (dVar13 * 0.5 - dVar14) / (dVar18 - dVar14);
          lVar6 = *(longlong *)(lVar6 + (ulonglong)(puVar2[uVar8 - 1] >> 9) * 8);
          uVar8 = (ulonglong)(puVar2[uVar8 - 1] & 0x1ff);
          dVar14 = 1.0 - dVar13;
          dVar16 = *(double *)(lVar6 + 0x10 + uVar8 * 0x18) * dVar14 + dVar16 * dVar13;
          dVar19 = *(double *)(lVar6 + 8 + uVar8 * 0x18) * dVar14 + dVar19 * dVar13;
          dVar13 = dVar14 * *(double *)(lVar6 + uVar8 * 0x18) + dVar15 * dVar13;
          goto LAB_1482ac538;
        }
        uVar8 = uVar8 + 1;
        dVar14 = dVar18;
      } while (uVar1 != uVar8);
    }
    lVar3 = *(longlong *)(lVar6 + (ulonglong)(uVar7 >> 9) * 8);
    uVar8 = (ulonglong)(uVar7 & 0x1ff);
    dVar13 = *(double *)(lVar3 + uVar8 * 0x18);
    dVar14 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
    dVar15 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
    lVar6 = *(longlong *)(lVar6 + (ulonglong)(puVar2[(longlong)(int)uVar1 + -1] >> 9) * 8);
    uVar8 = (ulonglong)(puVar2[(longlong)(int)uVar1 + -1] & 0x1ff);
  }
  dVar16 = (dVar15 + *(double *)(lVar6 + 0x10 + uVar8 * 0x18)) * 0.5;
  dVar19 = (dVar14 + *(double *)(lVar6 + 8 + uVar8 * 0x18)) * 0.5;
  dVar13 = (dVar13 + *(double *)(lVar6 + uVar8 * 0x18)) * 0.5;
LAB_1482ac538:
  *param_2 = dVar13;
  param_2[1] = dVar19;
  param_2[2] = dVar16;
  return param_2;
}



// FUNCTION 1482ac6e8 FUN_1482ac6e8 body=167 status=ok
// SIG undefined FUN_1482ac6e8(void)

void FUN_1482ac6e8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar5 = (int *)*param_2;
    piVar1 = piVar5 + *(int *)(param_2 + 1);
    do {
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x10 + (longlong)*piVar5 * 0x18);
      if (lVar4 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)*piVar5 * 0x18);
        lVar3 = 0;
        do {
          local_4c = *(undefined4 *)(lVar2 + lVar3);
          FUN_1449e3bb0(param_3,&local_4c);
          lVar3 = lVar3 + 4;
        } while (lVar4 * 4 != lVar3);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ac790 FUN_1482ac790 body=474 status=ok
// SIG undefined FUN_1482ac790(void)

void FUN_1482ac790(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_e8 [40];
  int *local_c0;
  int *local_b8;
  longlong *local_b0;
  char local_a1;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x10 + (longlong)param_2 * 0x18);
  if (lVar4 != 0) {
    local_c0 = *(int **)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)param_2 * 0x18);
    local_b8 = local_c0 + lVar4;
    do {
      iVar1 = *local_c0;
      if ((((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x98) <= iVar1)) ||
         (lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 4),
         lVar4 == -1)) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 * 0x38 + *(longlong *)(param_1 + 0x60);
      }
      if ((longlong)*(int *)(lVar4 + 0x20) != 0) {
        plVar5 = *(longlong **)(lVar4 + 0x18);
        local_b0 = plVar5 + (longlong)*(int *)(lVar4 + 0x20) * 5;
        do {
          lVar4 = plVar5[1];
          if ((longlong)(int)lVar4 != 0) {
            lVar2 = *plVar5;
            lVar6 = 0;
            do {
              local_a0 = *(int *)(lVar2 + lVar6);
              if ((*(int *)(*(longlong *)(param_1 + 0x70) + 0x48 + (longlong)local_a0 * 0x50) ==
                   param_2) ||
                 (*(int *)(*(longlong *)(param_1 + 0x70) + 0x4c + (longlong)local_a0 * 0x50) ==
                  param_2)) {
                local_a1 = '\0';
                FUN_1447cbafe(&local_98,&local_9c,&local_a0,&local_a1);
                if (local_a1 != '\x01') {
                  local_9c = local_a0;
                  cVar3 = (*(code *)*param_3)(param_3[1],&local_9c);
                  if (cVar3 == '\0') goto LAB_1482ac916;
                }
              }
              lVar6 = lVar6 + 4;
            } while ((longlong)(int)lVar4 * 4 != lVar6);
          }
          plVar5 = plVar5 + 5;
        } while (plVar5 != local_b0);
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 != local_b8);
  }
LAB_1482ac916:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ac96c FUN_1482ac96c body=286 status=ok
// SIG undefined FUN_1482ac96c(void)

void FUN_1482ac96c(longlong param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x98))) &&
      (lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_2 * 4),
      lVar4 != -1)) &&
     ((lVar4 = lVar4 * 0x38 + *(longlong *)(param_1 + 0x60), lVar4 != 0 &&
      (iVar1 = *(int *)(lVar4 + 0x10), (longlong)iVar1 != 0)))) {
    lVar4 = *(longlong *)(lVar4 + 8);
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(lVar4 + lVar6);
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
      uVar5 = (ulonglong)(uVar2 & 0x1ff);
      local_50[0] = *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc);
      local_58 = *(undefined8 *)(lVar3 + uVar5 * 0xc);
      FUN_1447cbafe(param_3,local_5c,&local_58,0);
      FUN_1447cbafe(param_3,local_5c,(longlong)&local_58 + 4);
      FUN_1447cbafe(param_3,local_5c,local_50);
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 * 4 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482aca8c FUN_1482aca8c body=328 status=ok
// SIG undefined FUN_1482aca8c(void)

void FUN_1482aca8c(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_1;
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x98))) &&
      (lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_2 * 4),
      lVar2 != -1)) &&
     ((lVar2 = lVar2 * 0x38 + *(longlong *)(param_1 + 0x60), lVar2 != 0 &&
      ((longlong)*(int *)(lVar2 + 0x20) != 0)))) {
    puVar3 = *(undefined8 **)(lVar2 + 0x18);
    local_58 = puVar3 + (longlong)*(int *)(lVar2 + 0x20) * 5;
    do {
      local_60 = puVar3;
      if ((longlong)*(int *)(puVar3 + 1) != 0) {
        piVar6 = (int *)*puVar3;
        piVar4 = piVar6 + *(int *)(puVar3 + 1);
        do {
          lVar2 = (longlong)
                  *(int *)(*(longlong *)(local_68 + 0x70) + 0x18 + (longlong)*piVar6 * 0x50);
          if (lVar2 != 0) {
            lVar1 = *(longlong *)(*(longlong *)(local_68 + 0x70) + 0x10 + (longlong)*piVar6 * 0x50);
            lVar5 = 0;
            do {
              local_4c = *(undefined4 *)(lVar1 + lVar5);
              FUN_1447cbafe(param_3,local_50,&local_4c,0);
              lVar5 = lVar5 + 4;
            } while (lVar2 * 4 != lVar5);
          }
          piVar6 = piVar6 + 1;
        } while (piVar6 != piVar4);
      }
      puVar3 = local_60 + 5;
    } while (puVar3 != local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482acbd6 FUN_1482acbd6 body=122 status=ok
// SIG undefined FUN_1482acbd6(void)

void FUN_1482acbd6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1482ff43c(param_1,iVar1);
    }
    FUN_1482ff424((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1482ff4d0(param_1,param_2,iVar1 - param_2);
    FUN_1482ff532(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482acc52 FUN_1482acc52 body=143 status=ok
// SIG undefined FUN_1482acc52(void)

int * FUN_1482acc52(longlong *param_1,int *param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(param_1[0x10] + 0x1c0) + (ulonglong)(param_3 >> 9) * 8) + 8
           + (ulonglong)((param_3 & 0x1ff) << 4));
  if (uVar1 >> 0x20 == 0xffffffff) {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,uVar1 & 0xffffffff);
    *param_2 = iVar2;
    param_2[1] = -1;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    iVar3 = (**(code **)(*param_1 + 0x18))(param_1,uVar1 & 0xffffffff);
    if (iVar3 < iVar2) {
      *param_2 = iVar3;
      param_2[1] = iVar2;
    }
    else {
      *param_2 = iVar2;
      param_2[1] = iVar3;
    }
  }
  return param_2;
}



// FUNCTION 1482acce2 FUN_1482acce2 body=175 status=ok
// SIG undefined FUN_1482acce2(void)

undefined8 * FUN_1482acce2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = param_2[1];
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = param_2[5];
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0;
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 1482acd92 FUN_1482acd92 body=561 status=ok
// SIG undefined FUN_1482acd92(void)

undefined4 FUN_1482acd92(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong lStack_e0;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar6 = param_1 + 2;
  local_a8 = param_1[2];
  local_98 = (longlong *)param_1[4];
  param_1[4] = 0;
  local_78 = param_1[8];
  lStack_70 = param_1[9];
  local_88 = param_1[6];
  lStack_80 = param_1[7];
  if (param_1[2] != 0) {
    *plVar6 = 0;
  }
  local_e8 = *plVar6;
  uStack_60 = param_1[3];
  local_d8 = (longlong *)param_1[4];
  uStack_50 = param_1[5];
  local_48 = param_1[6];
  lStack_40 = param_1[7];
  local_38 = param_1[8];
  uStack_30 = param_1[9];
  lVar2 = local_38;
  lVar3 = uStack_30;
  local_58 = local_d8;
  lVar1 = uStack_50;
  local_68 = local_e8;
  param_1[8] = CONCAT44(uStack_b4,local_b8);
  param_1[9] = CONCAT44(uStack_ac,uStack_b0);
  param_1[6] = (longlong)&PTR_LAB_14ae72e30;
  param_1[7] = param_2;
  param_1[4] = 0;
  param_1[5] = CONCAT44(uStack_cc,uStack_d0);
  *plVar6 = (longlong)&LAB_143b01d52;
  param_1[3] = lStack_e0;
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_b8 = (undefined4)local_38;
  uStack_b4 = local_38._4_4_;
  uStack_b0 = (undefined4)uStack_30;
  uStack_ac = uStack_30._4_4_;
  local_c8 = local_48;
  lStack_c0 = lStack_40;
  uStack_d0 = (undefined4)uStack_50;
  uStack_cc = uStack_50._4_4_;
  lStack_e0 = uStack_60;
  uStack_50 = lVar1;
  local_38 = lVar2;
  uStack_30 = lVar3;
  if (local_e8 != 0) {
    plVar5 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar5 = &local_c8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  uVar4 = (**(code **)(*param_1 + 8))(param_1);
  local_68 = *plVar6;
  uStack_60 = param_1[3];
  local_58 = (longlong *)param_1[4];
  uStack_50 = param_1[5];
  local_48 = param_1[6];
  lStack_40 = param_1[7];
  local_38 = param_1[8];
  uStack_30 = param_1[9];
  lVar2 = uStack_50;
  lVar1 = uStack_60;
  param_1[8] = local_78;
  param_1[9] = lStack_70;
  param_1[6] = local_88;
  param_1[7] = lStack_80;
  param_1[4] = (longlong)local_98;
  param_1[5] = CONCAT44(uStack_8c,uStack_90);
  *plVar6 = local_a8;
  param_1[3] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_78 = local_38;
  lStack_70 = uStack_30;
  local_88 = local_48;
  lStack_80 = lStack_40;
  local_98 = local_58;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = lVar1;
  uStack_50 = lVar2;
  if (local_68 != 0) {
    plVar6 = local_98;
    if (local_58 == (longlong *)0x0) {
      plVar6 = &local_88;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482acfc4 FUN_1482acfc4 body=311 status=ok
// SIG undefined FUN_1482acfc4(void)

undefined8 FUN_1482acfc4(longlong param_1,int param_2,ulonglong *param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar10 = DAT_14c8463b0;
  uVar8 = DAT_14c8463a8;
  uVar7 = DAT_14c8463a0;
  puVar2 = *(uint **)(*(longlong *)(param_1 + 0x70) + 0x10 + (longlong)param_2 * 0x50);
  uVar1 = *puVar2;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
  lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8);
  uVar11 = (ulonglong)uVar1 & 0x1ff;
  uVar1 = puVar2[(longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x18 + (longlong)param_2 * 0x50)
                 + -1];
  lVar3 = *(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8);
  uVar9 = (ulonglong)uVar1 & 0x1ff;
  dVar15 = *(double *)(lVar3 + uVar9 * 0x18) - *(double *)(lVar4 + uVar11 * 0x18);
  dVar14 = *(double *)(lVar3 + 8 + uVar9 * 0x18) - *(double *)(lVar4 + 8 + uVar11 * 0x18);
  dVar12 = *(double *)(lVar3 + 0x10 + uVar9 * 0x18) - *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
  dVar13 = dVar12 * dVar12 + dVar15 * dVar15 + dVar14 * dVar14;
  if (dVar13 <= 1e-06) {
    param_3[2] = DAT_14c8463b0;
    *param_3 = uVar7;
    param_3[1] = uVar8;
  }
  else {
    dVar6 = SQRT(dVar13);
    dVar16 = 0.0;
    dVar5 = 1.0 / dVar6;
    if (0.0 < dVar6) {
      dVar12 = dVar12 * dVar5;
      dVar16 = dVar14 * dVar5;
    }
    else {
      dVar12 = 0.0;
    }
    *param_3 = -(ulonglong)(0.0 < dVar6) & (ulonglong)(dVar15 * dVar5);
    param_3[1] = (ulonglong)dVar16;
    param_3[2] = (ulonglong)dVar12;
    uVar10 = uVar9 * 3;
  }
  return CONCAT71((int7)(uVar10 >> 8),1e-06 < dVar13);
}



// FUNCTION 1482ad0fc FUN_1482ad0fc body=663 status=ok
// SIG undefined FUN_1482ad0fc(void)

double * FUN_1482ad0fc(longlong param_1,double *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar5 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dVar3 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_d8 = DAT_14c8464f0;
  local_e8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_e0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x90) + (longlong)param_3 * 4) * 0x38;
  lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0x10 + lVar9);
  dVar4 = DAT_14c8464f0;
  dVar6 = local_e8;
  dVar7 = uStack_e0;
  dVar8 = DAT_14c8464f0;
  if (lVar11 == 0) {
    dVar12 = 0.0;
  }
  else {
    local_f0 = (longlong *)(*(longlong *)(param_1 + 0x60) + lVar9 + 8);
    lVar9 = *local_f0;
    lVar10 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar9 + lVar10);
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      FUN_146c149e0(uVar2,&local_c8,uVar1);
      dVar5 = dVar5 + (double)CONCAT44(uStack_c4,local_c8);
      dVar3 = dVar3 + (double)CONCAT44(uStack_bc,uStack_c0);
      dVar4 = dVar4 + local_b8;
      FUN_146c13dec(uVar2,&local_c8,uVar1);
      dVar6 = dVar6 + (double)CONCAT44(uStack_c4,local_c8);
      dVar7 = dVar7 + (double)CONCAT44(uStack_bc,uStack_c0);
      dVar8 = dVar8 + local_b8;
      lVar10 = lVar10 + 4;
    } while (lVar11 * 4 != lVar10);
    dVar12 = (double)(int)local_f0[1];
  }
  dVar13 = SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7);
  dVar14 = 1.0 / dVar13;
  if (0.0 < dVar13) {
    local_e8 = dVar6 * dVar14;
    uStack_e0 = dVar7 * dVar14;
  }
  else {
    local_e8 = 0.0;
    uStack_e0 = 0.0;
  }
  local_d8 = (double)(-(ulonglong)(0.0 < dVar13) & (ulonglong)(dVar8 * dVar14));
  dVar12 = 1.0 / dVar12;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 1.0;
  *param_2 = dVar12 * dVar5;
  param_2[1] = dVar3 * dVar12;
  param_2[2] = dVar4 * dVar12;
  local_b8 = (double)DAT_14c8463c8;
  local_c8 = (undefined4)DAT_14c8463b8;
  uStack_c4 = DAT_14c8463b8._4_4_;
  uStack_c0 = (undefined4)DAT_14c8463c0;
  uStack_bc = DAT_14c8463c0._4_4_;
  FUN_146bfb7f2(param_2 + 3);
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ad394 FUN_1482ad394 body=3581 status=ok
// SIG undefined FUN_1482ad394(void)

double * FUN_1482ad394(longlong param_1,double *param_2,longlong *param_3,double *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  double dVar10;
  longlong *plVar11;
  longlong *plVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong *plVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_1b8 [40];
  double *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double dStack_168;
  longlong *local_160;
  double dStack_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  longlong *local_108;
  undefined1 auStack_100 [12];
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  
  dVar10 = DAT_14c8464f0;
  dVar25 = DAT_14c8464e8;
  plVar11 = DAT_14c8464e0;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_4 == (double *)0x0) {
    local_138 = DAT_14c8464f0;
    local_148 = DAT_14c8464e0;
    uStack_140 = DAT_14c8464e8;
    dStack_130 = 0.0;
    local_128 = 0.0;
    dStack_120 = 0.0;
    local_118 = 1.0;
  }
  else {
    local_118 = param_4[6];
    local_148 = (longlong *)*param_4;
    uStack_140 = param_4[1];
    local_138 = param_4[2];
    dStack_130 = param_4[3];
    local_128 = param_4[4];
    dStack_120 = param_4[5];
  }
  if ((int)param_3[0x15] - *(int *)((longlong)param_3 + 0xd4) == 1) {
    iVar15 = FUN_1482ae192(param_3);
    lVar19 = *(longlong *)(param_1 + 0x70);
    lVar17 = (longlong)iVar15 * 0x50;
    puVar9 = *(uint **)(lVar19 + 0x10 + lVar17);
    uVar7 = *puVar9;
    uVar8 = *(uint *)(lVar19 + 0x18 + lVar17);
    if (uVar7 == puVar9[(int)(uVar8 - 1)]) {
      FUN_1482ac28e(param_1,&local_148,iVar15);
      local_108 = DAT_14c8464e0;
      stack0xffffffffffffff08 = (longlong *)DAT_14c8464f0;
      auStack_100._0_8_ = DAT_14c8464e8;
      dVar25 = DAT_14c8464e8;
      plVar11 = DAT_14c8464e0;
      dVar10 = DAT_14c8464f0;
      if (0 < (int)uVar8) {
        lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
        lVar17 = *(longlong *)(lVar19 + (ulonglong)(uVar7 >> 9) * 8);
        uVar16 = (ulonglong)(uVar7 & 0x1ff);
        uVar18 = 0;
        dVar27 = *(double *)(lVar17 + 0x10 + uVar16 * 0x18);
        dVar28 = *(double *)(lVar17 + uVar16 * 0x18);
        dVar24 = *(double *)(lVar17 + 8 + uVar16 * 0x18);
        do {
          lVar17 = *(longlong *)(lVar19 + (ulonglong)(puVar9[uVar18] >> 9) * 8);
          uVar16 = (ulonglong)(puVar9[uVar18] & 0x1ff);
          dVar4 = *(double *)(lVar17 + uVar16 * 0x18);
          dVar5 = *(double *)(lVar17 + 8 + uVar16 * 0x18);
          dVar6 = *(double *)(lVar17 + 0x10 + uVar16 * 0x18);
          dVar10 = dVar10 + (dVar24 + dVar5) * (dVar4 - dVar28);
          dVar25 = dVar25 + (dVar28 + dVar4) * (dVar6 - dVar27);
          plVar11 = (longlong *)((double)plVar11 + (dVar27 + dVar6) * (dVar5 - dVar24));
          uVar18 = uVar18 + 1;
          dVar27 = dVar6;
          dVar28 = dVar4;
          dVar24 = dVar5;
        } while (uVar8 != uVar18);
      }
      dVar27 = dVar10 * dVar10 + (double)plVar11 * (double)plVar11 + dVar25 * dVar25;
      if (9.99999993922529e-09 < dVar27) {
        dVar27 = 1.0 / SQRT(dVar27);
        local_108 = (longlong *)((double)plVar11 * dVar27);
        stack0xffffffffffffff08 = (longlong *)(dVar10 * dVar27);
        auStack_100._0_8_ = dVar25 * dVar27;
        FUN_1482ae234(&local_148,2);
      }
    }
    else {
      uVar7 = **(uint **)(lVar19 + 0x20 + lVar17);
      uVar18 = *(ulonglong *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x1c0) +
                  (ulonglong)(uVar7 >> 9) * 8) + 8 + (ulonglong)((uVar7 & 0x1ff) << 4));
      uVar16 = uVar18 >> 0x20;
      if ((int)uVar18 < (int)(uVar18 >> 0x20)) {
        uVar16 = uVar18;
      }
      if (uVar18 >> 0x20 == 0xffffffff) {
        uVar16 = uVar18;
      }
      FUN_146c13dec(*(longlong *)(param_1 + 0x80),&local_108,uVar16 & 0xffffffff);
      if (((double)local_108 != 0.0) || (NAN((double)local_108))) {
LAB_1482adf0d:
        FUN_1482ae234(&local_148,2,&local_108);
      }
      else {
        if (((double)auStack_100._0_8_ != 0.0) || (NAN((double)auStack_100._0_8_)))
        goto LAB_1482adf0d;
        if (((double)stack0xffffffffffffff08 != 0.0) || (NAN((double)stack0xffffffffffffff08)))
        goto LAB_1482adf0d;
      }
      cVar13 = FUN_1482acfc4(param_1,iVar15,&local_188);
      if (cVar13 != '\0') {
        local_160 = (longlong *)
                    (dStack_130 * (dStack_120 + dStack_120) + local_118 * (local_128 + local_128));
        dStack_158 = (dStack_120 + dStack_120) * local_128 - (dStack_130 + dStack_130) * local_118;
        local_150 = 1.0 - ((local_128 + local_128) * local_128 +
                          dStack_130 * (dStack_130 + dStack_130));
        FUN_1482ae2be(&local_148,0,&local_188);
      }
      FUN_1482ac484(param_1,&local_160,iVar15);
      local_138 = local_150;
      local_148 = local_160;
      uStack_140 = dStack_158;
    }
    param_2[6] = local_118;
    param_2[4] = local_128;
    param_2[5] = dStack_120;
    param_2[2] = local_138;
    param_2[3] = dStack_130;
    uVar21 = local_148._4_4_;
    uVar22 = uStack_140._4_4_;
    plVar11 = local_148;
    dVar10 = uStack_140;
  }
  else {
    if ((int)param_3[0xb] - *(int *)((longlong)param_3 + 0x84) != 1) {
      plVar1 = param_3 + 10;
      plVar2 = param_3 + 0xc;
      local_188 = (longlong *)0x100000000;
      local_178._0_4_ = 0xffffffff;
      local_178._4_4_ = 0;
      uStack_170 = (double)((ulonglong)uStack_170 & 0xffffffff00000000);
      iVar20 = 0;
      iVar15 = 0;
      local_190 = param_2;
      uStack_180 = plVar2;
      if ((int)param_3[0xf] != 0) {
        FUN_1449c0562(&local_188);
        iVar15 = (int)param_3[0xf];
      }
      uStack_f0._0_4_ = (uint)local_178;
      uStack_f0._4_4_ = local_178._4_4_;
      dStack_e8 = uStack_170;
      stack0xffffffffffffff08 = uStack_180;
      auStack_100._0_8_ = local_188;
      plVar12 = plVar11;
      dVar28 = dVar25;
      dVar27 = dVar10;
      local_108 = plVar1;
      if ((local_178._4_4_ != iVar15) || (uStack_180 != plVar2)) {
        iVar20 = 0;
        do {
          uVar7 = *(uint *)(*(longlong *)(param_1 + 0x50) +
                           (longlong)*(int *)(*local_108 + (longlong)uStack_f0._4_4_ * 0xc) * 0x18);
          lVar19 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) +
                    (ulonglong)(uVar7 >> 9) * 8);
          uVar18 = (ulonglong)(uVar7 & 0x1ff);
          plVar11 = (longlong *)((double)plVar11 + *(double *)(lVar19 + uVar18 * 0x18));
          dVar25 = dVar25 + *(double *)(lVar19 + 8 + uVar18 * 0x18);
          dVar10 = dVar10 + *(double *)(lVar19 + 0x10 + uVar18 * 0x18);
          plVar12 = (longlong *)((double)plVar12 + DAT_14c8463b8);
          dVar28 = dVar28 + DAT_14c8463c0;
          dVar27 = dVar27 + DAT_14c8463c8;
          iVar20 = iVar20 + 1;
          uStack_f0._0_4_ = (uint)uStack_f0 & ~auStack_100._4_4_;
          FUN_1449c0562(auStack_100);
        } while (local_108 != plVar1 ||
                 (stack0xffffffffffffff08 != plVar2 || uStack_f0._4_4_ != iVar15));
      }
      plVar1 = param_3 + 0x14;
      plVar2 = param_3 + 0x16;
      local_188 = (longlong *)0x100000000;
      local_178 = (longlong *)0xffffffff;
      uStack_170 = (double)((ulonglong)uStack_170 & 0xffffffff00000000);
      uStack_180 = plVar2;
      if ((int)param_3[0x19] == 0) {
        iVar15 = 0;
      }
      else {
        FUN_1449c0562(&local_188);
        iVar15 = (int)param_3[0x19];
      }
      uStack_f0 = (double)local_178;
      dVar24 = uStack_f0;
      dStack_e8 = uStack_170;
      auStack_100._8_4_ = (undefined4)uStack_180;
      auStack_100._0_8_ = local_188;
      uStack_f4 = uStack_180._4_4_;
      uStack_f0._4_4_ = (int)((ulonglong)local_178 >> 0x20);
      iVar14 = uStack_f0._4_4_;
      local_108 = plVar1;
      if ((uStack_f0._4_4_ != iVar15) || (uStack_f0 = dVar24, stack0xffffffffffffff08 != plVar2)) {
        do {
          uStack_f0 = dVar24;
          lVar19 = (longlong)*(int *)(*local_108 + (longlong)iVar14 * 0xc) * 0x50;
          puVar9 = *(uint **)(*(longlong *)(param_1 + 0x70) + 0x10 + lVar19);
          uVar7 = *puVar9;
          uVar8 = puVar9[*(int *)(*(longlong *)(param_1 + 0x70) + 0x18 + lVar19) + -1];
          if (uVar7 == uVar8) {
            FUN_1482ac28e(param_1,&local_188);
            plVar23 = uStack_180;
            dVar24 = (double)local_178;
            dVar4 = (double)local_188;
          }
          else {
            lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
            lVar17 = *(longlong *)(lVar19 + (ulonglong)(uVar8 >> 9) * 8);
            uVar16 = (ulonglong)(uVar8 & 0x1ff);
            lVar19 = *(longlong *)(lVar19 + (ulonglong)(uVar7 >> 9) * 8);
            uVar18 = (ulonglong)(uVar7 & 0x1ff);
            plVar23 = (longlong *)
                      ((*(double *)(lVar17 + 8 + uVar16 * 0x18) +
                       *(double *)(lVar19 + 8 + uVar18 * 0x18)) * 0.5);
            dVar24 = (*(double *)(lVar17 + 0x10 + uVar16 * 0x18) +
                     *(double *)(lVar19 + 0x10 + uVar18 * 0x18)) * 0.5;
            dVar4 = (*(double *)(lVar17 + uVar16 * 0x18) + *(double *)(lVar19 + uVar18 * 0x18)) *
                    0.5;
          }
          plVar11 = (longlong *)((double)plVar11 + dVar4);
          dVar25 = dVar25 + (double)plVar23;
          dVar10 = dVar10 + dVar24;
          plVar12 = (longlong *)((double)plVar12 + DAT_14c8463b8);
          dVar28 = dVar28 + DAT_14c8463c0;
          dVar27 = dVar27 + DAT_14c8463c8;
          iVar20 = iVar20 + 1;
          uStack_f0 = (double)CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~auStack_100._4_4_);
          FUN_1449c0562(auStack_100);
          iVar14 = uStack_f0._4_4_;
          dVar24 = uStack_f0;
        } while (local_108 != plVar1 ||
                 (stack0xffffffffffffff08 != plVar2 || uStack_f0._4_4_ != iVar15));
      }
      plVar1 = param_3 + 2;
      local_108 = (longlong *)0x100000000;
      stack0xffffffffffffff08 = (longlong *)0xffffffff;
      auStack_100._0_8_ = plVar1;
      uStack_f0 = (double)((ulonglong)uStack_f0 & 0xffffffff00000000);
      if ((int)param_3[5] == 0) {
        iVar15 = 0;
      }
      else {
        FUN_1449c0562(&local_108);
        iVar15 = (int)param_3[5];
      }
      uStack_170 = (double)stack0xffffffffffffff08;
      dVar24 = uStack_170;
      dStack_168 = uStack_f0;
      uStack_180 = local_108;
      local_178 = auStack_100._0_8_;
      uStack_170._4_4_ = auStack_100._12_4_;
      iVar14 = uStack_170._4_4_;
      local_188 = param_3;
      if ((uStack_170._4_4_ != iVar15) || (uStack_170 = dVar24, local_178 != plVar1)) {
        do {
          uStack_170 = dVar24;
          iVar14 = *(int *)(*local_188 + (longlong)iVar14 * 0xc);
          if ((-1 < (longlong)iVar14) &&
             (((iVar14 < *(int *)(param_1 + 0x98) &&
               (lVar19 = (longlong)*(int *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar14 * 4),
               lVar19 != -1)) && (lVar19 * 0x38 + *(longlong *)(param_1 + 0x60) != 0)))) {
            FUN_1482ad0fc(param_1,&local_108);
            plVar11 = (longlong *)((double)plVar11 + (double)local_108);
            dVar25 = dVar25 + (double)auStack_100._0_8_;
            dVar10 = dVar10 + (double)stack0xffffffffffffff08;
            plVar12 = (longlong *)
                      ((double)plVar12 +
                      uStack_f0 * (local_e0 + local_e0) + local_d8 * (dStack_e8 + dStack_e8));
            dVar28 = dVar28 + ((local_e0 + local_e0) * dStack_e8 -
                              (uStack_f0 + uStack_f0) * local_d8);
            dVar27 = dVar27 + (1.0 - ((dStack_e8 + dStack_e8) * dStack_e8 +
                                     uStack_f0 * (uStack_f0 + uStack_f0)));
            iVar20 = iVar20 + 1;
          }
          uStack_170 = (double)CONCAT44(uStack_170._4_4_,(uint)uStack_170 & ~uStack_180._4_4_);
          FUN_1449c0562(&uStack_180);
          iVar14 = uStack_170._4_4_;
          dVar24 = uStack_170;
        } while (local_188 != param_3 || (local_178 != plVar1 || uStack_170._4_4_ != iVar15));
      }
      param_2 = local_190;
      local_190[2] = DAT_14c8464f0;
      dVar24 = DAT_14c8464e8;
      *local_190 = (double)DAT_14c8464e0;
      local_190[1] = dVar24;
      local_190[3] = 0.0;
      local_190[4] = 0.0;
      local_190[5] = 0.0;
      local_190[6] = 1.0;
      if (0 < iVar20) {
        dVar26 = 1.0 / (double)iVar20;
        dVar24 = dVar27 * dVar27 + (double)plVar12 * (double)plVar12 + dVar28 * dVar28;
        dVar4 = DAT_14c8463b8;
        dVar5 = DAT_14c8463c0;
        dVar6 = DAT_14c8463c8;
        if (9.99999993922529e-09 < dVar24) {
          dVar24 = 1.0 / SQRT(dVar24);
          dVar4 = (double)plVar12 * dVar24;
          dVar5 = dVar28 * dVar24;
          dVar6 = dVar27 * dVar24;
        }
        dVar27 = dVar6 * DAT_14c8463c8 + dVar4 * DAT_14c8463b8 + DAT_14c8463c0 * dVar5;
        if (ABS(dVar27) <= 0.9998999834060669) {
          local_d0._0_8_ = dVar4 * DAT_14c8463c0 - DAT_14c8463b8 * dVar5;
          dVar29 = dVar6 * DAT_14c8463b8 - DAT_14c8463c8 * dVar4;
          dVar24 = dVar5 * DAT_14c8463c8 - DAT_14c8463c0 * dVar6;
          dVar28 = SQRT((double)local_d0._0_8_ * (double)local_d0._0_8_ +
                        dVar24 * dVar24 + dVar29 * dVar29);
          dStack_e8 = 0.0;
          dVar27 = 1.0 / dVar28;
          auStack_100._0_8_ = -(ulonglong)(0.0 < dVar28) & (ulonglong)(dVar24 * dVar27);
          if (0.0 < dVar28) {
            local_d0._0_8_ = (double)local_d0._0_8_ * dVar27;
            dStack_e8 = dVar29 * dVar27;
          }
          else {
            local_d0._0_8_ = 0.0;
          }
          local_d8 = (double)auStack_100._0_8_ * dVar5 - dVar4 * dStack_e8;
          uStack_f0 = (double)local_d0._0_8_ * dVar4 - dVar6 * (double)auStack_100._0_8_;
          local_108 = (longlong *)(dStack_e8 * dVar6 - dVar5 * (double)local_d0._0_8_);
          stack0xffffffffffffff08 = (longlong *)dVar4;
          local_d0._8_8_ = dVar6;
          local_e0 = dVar5;
        }
        else {
          if (0.0 <= dVar27) {
            *local_190 = (double)plVar11 * dVar26;
            local_190[1] = dVar25 * dVar26;
            local_190[2] = dVar10 * dVar26;
            goto LAB_1482adb2e;
          }
          local_108 = DAT_14c8463a0;
          auStack_100._8_4_ = SUB84(DAT_14c8463b8,0);
          auStack_100._0_8_ = DAT_14c846388 ^ 0x8000000000000000;
          uStack_f4 = (uint)((ulonglong)DAT_14c8463b8 >> 0x20) ^ 0x80000000;
          uStack_f0 = DAT_14c8463a8;
          dStack_e8 = -DAT_14c846390;
          local_d8 = DAT_14c8463b0;
          local_d0._8_4_ = SUB84(DAT_14c8463c8,0);
          local_d0._0_8_ = DAT_14c846398 ^ 0x8000000000000000;
          local_d0._12_4_ = (uint)((ulonglong)DAT_14c8463c8 >> 0x20) ^ 0x80000000;
          local_e0 = -DAT_14c8463c0;
        }
        local_188 = (longlong *)0x0;
        uStack_180 = (longlong *)0x0;
        local_178 = (longlong *)0x0;
        uStack_170 = 1.0;
        FUN_146bfbbda(&local_188);
        *param_2 = (double)plVar11 * dVar26;
        param_2[1] = dVar25 * dVar26;
        param_2[2] = dVar10 * dVar26;
        *(undefined4 *)(param_2 + 3) = (undefined4)local_188;
        *(undefined4 *)((longlong)param_2 + 0x1c) = local_188._4_4_;
        *(undefined4 *)(param_2 + 4) = (undefined4)uStack_180;
        *(uint *)((longlong)param_2 + 0x24) = uStack_180._4_4_;
        param_2[5] = (double)local_178;
        param_2[6] = uStack_170;
      }
      goto LAB_1482adb2e;
    }
    lVar19 = *(longlong *)(param_1 + 0x80);
    iVar15 = FUN_1482ae398(param_3);
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar15 * 0x18);
    lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
    uVar18 = (ulonglong)(uVar7 & 0x1ff);
    pdVar3 = (double *)(lVar19 + uVar18 * 0x18);
    plVar11 = (longlong *)*pdVar3;
    dVar10 = pdVar3[1];
    local_138 = *(double *)(lVar19 + 0x10 + uVar18 * 0x18);
    param_2[6] = local_118;
    param_2[4] = local_128;
    param_2[5] = dStack_120;
    param_2[2] = local_138;
    param_2[3] = dStack_130;
    local_148._0_4_ = SUB84(plVar11,0);
    local_148._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
    uStack_140._0_4_ = SUB84(dVar10,0);
    uStack_140._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
    uVar21 = local_148._4_4_;
    uVar22 = uStack_140._4_4_;
  }
  uStack_140 = dVar10;
  local_148 = plVar11;
  *(undefined4 *)param_2 = (undefined4)local_148;
  *(undefined4 *)((longlong)param_2 + 4) = uVar21;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_140;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar22;
LAB_1482adb2e:
  if ((local_c0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1482ae192 FUN_1482ae192 body=161 status=ok
// SIG undefined FUN_1482ae192(void)

undefined4 FUN_1482ae192(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0xd4) < *(int *)(param_1 + 0xa8)) {
    local_30 = param_1 + 0xb0;
    local_38 = 0x100000000;
    local_28 = 0xffffffff;
    local_20 = 0;
    if (*(int *)(param_1 + 200) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_38);
      lVar2 = (longlong)local_28._4_4_;
    }
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar2 * 0xc);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ae234 FUN_1482ae234 body=137 status=ok
// SIG undefined FUN_1482ae234(void)

void FUN_1482ae234(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146bfcd44(param_1,local_60,param_2);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0x3ff0000000000000;
  FUN_146bfb7f2(&local_48,local_60,param_3);
  FUN_1482ff674(param_1,&local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ae2be FUN_1482ae2be body=217 status=ok
// SIG undefined FUN_1482ae2be(void)

void FUN_1482ae2be(undefined8 param_1,undefined4 param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146bfcd44(param_1,local_68,param_2);
  dVar1 = (double)FUN_146c6a283(local_68,param_3,param_4);
  dVar1 = dVar1 * 0.017453292519943295 * 0.5;
  dVar2 = sin(dVar1);
  local_70 = cos(dVar1);
  local_88 = *param_4 * dVar2;
  local_80 = param_4[1] * dVar2;
  local_78 = dVar2 * param_4[2];
  FUN_1482ff674(param_1);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ae398 FUN_1482ae398 body=149 status=ok
// SIG undefined FUN_1482ae398(void)

undefined4 FUN_1482ae398(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x58)) {
    local_30 = param_1 + 0x60;
    local_38 = 0x100000000;
    local_28 = 0xffffffff;
    local_20 = 0;
    if (*(int *)(param_1 + 0x78) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_38);
      lVar2 = (longlong)local_28._4_4_;
    }
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + lVar2 * 0xc);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ae42e FUN_1482ae42e body=1642 status=ok
// SIG undefined FUN_1482ae42e(void)

undefined8 *
FUN_1482ae42e(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_2;
  local_e0 = param_4;
  if ((((int)param_3[0xb] == *(int *)((longlong)param_3 + 0x84)) &&
      ((int)param_3[0x15] == *(int *)((longlong)param_3 + 0xd4))) &&
     ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34))) {
    FUN_145c688c4(*(undefined8 *)(param_1 + 0x80),param_2,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  *param_2 = 0x7fefffffffffffff;
  param_2[1] = 0x7fefffffffffffff;
  param_2[2] = 0x7fefffffffffffff;
  param_2[3] = 0xffefffffffffffff;
  param_2[4] = 0xffefffffffffffff;
  param_2[5] = 0xffefffffffffffff;
  plVar11 = param_3 + 10;
  plVar1 = param_3 + 0xc;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_3[0xf] == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar12 = (int)param_3[0xf];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar11;
  if ((iStack_54 != iVar12) || (uStack_60 != plVar1)) {
    do {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x50) +
                       (longlong)*(int *)(*local_90 + (longlong)iStack_74 * 0xc) * 0x18);
      lVar10 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
      uVar9 = (ulonglong)(uVar3 & 0x1ff);
      local_98 = *(undefined8 *)(lVar10 + 0x10 + uVar9 * 0x18);
      puVar2 = (undefined4 *)(lVar10 + uVar9 * 0x18);
      local_a8 = *puVar2;
      uStack_a4 = puVar2[1];
      uStack_a0 = puVar2[2];
      uStack_9c = puVar2[3];
      (*(code *)*local_e0)(&local_68,local_e0[1]);
      FUN_146ba5262(local_e8,&local_68);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar11 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar12));
  }
  plVar11 = param_3 + 0x14;
  plVar1 = param_3 + 0x16;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_3[0x19] == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar12 = (int)param_3[0x19];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_c8 = param_3;
  local_90 = plVar11;
  if ((iStack_54 != iVar12) || (uStack_60 != plVar1)) {
    do {
      lVar10 = (longlong)*(int *)(*local_90 + (longlong)iStack_74 * 0xc) * 0x50;
      lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x18 + lVar10);
      if (lVar14 != 0) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10 + lVar10);
        lVar13 = 0;
        do {
          uVar3 = *(uint *)(lVar10 + lVar13);
          lVar6 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) +
                   (ulonglong)(uVar3 >> 9) * 8);
          uVar9 = (ulonglong)(uVar3 & 0x1ff);
          local_98 = *(undefined8 *)(lVar6 + 0x10 + uVar9 * 0x18);
          puVar2 = (undefined4 *)(lVar6 + uVar9 * 0x18);
          local_a8 = *puVar2;
          uStack_a4 = puVar2[1];
          uStack_a0 = puVar2[2];
          uStack_9c = puVar2[3];
          (*(code *)*local_e0)(&local_68,local_e0[1]);
          FUN_146ba5262(local_e8,&local_68);
          lVar13 = lVar13 + 4;
        } while (lVar14 * 4 != lVar13);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar11 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar12));
  }
  plVar11 = local_c8;
  local_d0 = local_c8 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = local_d0;
  if ((int)local_c8[5] == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar12 = (int)plVar11[5];
  }
  puVar8 = local_e0;
  puVar7 = local_e8;
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar11;
  if ((iStack_54 != iVar12) || (uStack_60 != local_d0)) {
    local_c0 = (longlong *)(param_1 + 0xc0);
    local_d4 = iVar12;
    do {
      iVar12 = *(int *)(*local_90 + (longlong)iStack_74 * 0xc);
      if ((((longlong)iVar12 < 0) || (*(int *)(param_1 + 0x98) <= iVar12)) ||
         (lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar12 * 4),
         lVar10 == -1)) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar10 * 0x38 + *(longlong *)(param_1 + 0x60);
      }
      plVar11 = (longlong *)(lVar10 + 8);
      if (lVar10 == 0) {
        plVar11 = local_c0;
      }
      if ((longlong)(int)plVar11[1] != 0) {
        local_b8 = *plVar11;
        local_b0 = (longlong)(int)plVar11[1] << 2;
        lVar10 = 0;
        do {
          lVar14 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x130) +
                    (ulonglong)(*(uint *)(local_b8 + lVar10) >> 9) * 8);
          uVar9 = (ulonglong)*(uint *)(local_b8 + lVar10) & 0x1ff;
          uVar3 = *(uint *)(lVar14 + uVar9 * 0xc);
          uVar4 = *(uint *)(lVar14 + 4 + uVar9 * 0xc);
          uVar5 = *(uint *)(lVar14 + 8 + uVar9 * 0xc);
          lVar14 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) +
                    (ulonglong)(uVar3 >> 9) * 8);
          uVar9 = (ulonglong)uVar3 & 0x1ff;
          local_98 = *(undefined8 *)(lVar14 + 0x10 + uVar9 * 0x18);
          puVar2 = (undefined4 *)(lVar14 + uVar9 * 0x18);
          local_a8 = *puVar2;
          uStack_a4 = puVar2[1];
          uStack_a0 = puVar2[2];
          uStack_9c = puVar2[3];
          (*(code *)*puVar8)(&local_68,puVar8[1],&local_a8);
          FUN_146ba5262(puVar7,&local_68);
          lVar14 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) +
                    (ulonglong)(uVar4 >> 9) * 8);
          uVar9 = (ulonglong)uVar4 & 0x1ff;
          local_98 = *(undefined8 *)(lVar14 + 0x10 + uVar9 * 0x18);
          puVar2 = (undefined4 *)(lVar14 + uVar9 * 0x18);
          local_a8 = *puVar2;
          uStack_a4 = puVar2[1];
          uStack_a0 = puVar2[2];
          uStack_9c = puVar2[3];
          (*(code *)*puVar8)(&local_68,puVar8[1],&local_a8);
          FUN_146ba5262(puVar7,&local_68);
          lVar14 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) +
                    (ulonglong)(uVar5 >> 9) * 8);
          uVar9 = (ulonglong)uVar5 & 0x1ff;
          local_98 = *(undefined8 *)(lVar14 + 0x10 + uVar9 * 0x18);
          puVar2 = (undefined4 *)(lVar14 + uVar9 * 0x18);
          local_a8 = *puVar2;
          uStack_a4 = puVar2[1];
          uStack_a0 = puVar2[2];
          uStack_9c = puVar2[3];
          (*(code *)*puVar8)(&local_68,puVar8[1],&local_a8);
          FUN_146ba5262(puVar7,&local_68);
          lVar10 = lVar10 + 4;
        } while (local_b0 != lVar10);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != local_c8 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_d0 || iStack_74 != local_d4));
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return local_e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482aeaa2 FUN_1482aeaa2 body=452 status=ok
// SIG undefined FUN_1482aeaa2(void)

void FUN_1482aeaa2(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_a8 = param_1;
  uStack_60 = local_a0;
  if ((int)param_2[5] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != iVar7) || (uStack_60 != local_a0)) {
    local_98 = (longlong *)(local_a8 + 0xc0);
    do {
      iVar1 = *(int *)(*local_90 + (longlong)iStack_74 * 0xc);
      if ((((longlong)iVar1 < 0) || (*(int *)(local_a8 + 0x98) <= iVar1)) ||
         (lVar4 = (longlong)*(int *)(*(longlong *)(local_a8 + 0x90) + (longlong)iVar1 * 4),
         lVar4 == -1)) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 * 0x38 + *(longlong *)(local_a8 + 0x60);
      }
      plVar5 = (longlong *)(lVar4 + 8);
      if (lVar4 == 0) {
        plVar5 = local_98;
      }
      lVar4 = plVar5[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar3 = *plVar5;
        lVar6 = 0;
        do {
          uVar2 = *(undefined4 *)(lVar3 + lVar6);
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_3,iVar1);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar2;
          lVar6 = lVar6 + 4;
        } while ((longlong)(int)lVar4 * 4 != lVar6);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_a0 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482aec68 FUN_1482aec68 body=330 status=ok
// SIG undefined FUN_1482aec68(void)

bool FUN_1482aec68(longlong param_1,undefined4 param_2,uint *param_3,double param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((param_1 != 0) && (uVar1 = *param_3, -1 < (int)uVar1)) &&
      (uVar5 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4),
      (int)uVar1 < (int)uVar5)) &&
     ((((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8) +
                           (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe &&
       (uVar2 = param_3[1], uVar2 < uVar5 && -1 < (int)uVar2)) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(uVar2 >> 9) * 8) +
                          (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
    local_30 = param_1;
    local_28 = param_2;
    cVar3 = FUN_143afe850(&local_30,uVar1,&local_48);
    if (cVar3 != '\0') {
      cVar3 = FUN_143afe850(&local_30,uVar2,&local_60);
      if (cVar3 != '\0') {
        bVar4 = param_4 <= local_38 * local_50 + local_48 * local_60 + local_40 * local_58;
        goto LAB_1482aed8e;
      }
    }
  }
  bVar4 = false;
LAB_1482aed8e:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482aedb4 FUN_1482aedb4 body=345 status=ok
// SIG undefined FUN_1482aedb4(void)

void FUN_1482aedb4(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined8 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_1[0x10] + 0xb8;
  FUN_146be983e(&local_58,lVar2,param_2,0);
  if (local_58 != lVar2) goto LAB_1482aee32;
  if (local_50 != param_2) goto LAB_1482aee32;
  if ((int)local_40 != -1) goto LAB_1482aee32;
  iVar1 = local_40._4_4_;
  while (iVar1 != -1) {
LAB_1482aee32:
    do {
      uVar3 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(param_1[0x10] + 0x1c0) + (ulonglong)(local_38 >> 9) * 8)
                + 8 + (ulonglong)((local_38 & 0x1ff) << 4)) >> 0x20;
      local_5c = (**(code **)(*param_1 + 0x18))(param_1);
      FUN_144aa221c(param_3);
      if (uVar3 != 0xffffffff) {
        local_5c = (**(code **)(*param_1 + 0x18))(param_1,uVar3);
        FUN_144aa221c(param_3);
      }
      if (local_48 == 0) {
        local_4c = 0xffffffff;
        local_40 = 0xffffffffffffffff;
        local_40._4_4_ = -1;
        local_40._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_58);
      }
    } while (((local_58 != lVar2) || (local_50 != param_2)) ||
            (iVar1 = local_40._4_4_, (int)local_40 != -1));
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482aef0e FUN_1482aef0e body=54 status=ok
// SIG undefined FUN_1482aef0e(void)

undefined8 * FUN_1482aef0e(undefined8 *param_1,undefined8 param_2,char param_3)

{
  FUN_1482aa55c(param_1,param_2,0);
  *param_1 = &PTR_FUN_14ae728e0;
  if (param_3 != '\0') {
    FUN_1482aef44(param_1);
  }
  return param_1;
}



// FUNCTION 1482aef44 FUN_1482aef44 body=2014 status=ok
// SIG undefined FUN_1482aef44(void)

undefined8 FUN_1482aef44(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStack_178 [40];
  uint *local_150;
  uint *local_148;
  longlong *local_140;
  longlong local_138 [7];
  undefined1 local_100;
  longlong *local_f8;
  undefined4 **local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_148 = (uint *)(param_1 + 0x60);
  iVar14 = *(int *)(param_1 + 0x6c);
  FUN_145aba1e7(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar14 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_1482ff0c6(local_148);
  }
  local_140 = (longlong *)(param_1 + 0x70);
  iVar14 = *(int *)(param_1 + 0x7c);
  FUN_145aba20f(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((iVar14 < 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    FUN_1482ff0f6(local_140);
  }
  local_150 = (uint *)(param_1 + 0x50);
  iVar14 = *(int *)(param_1 + 0x5c);
  FUN_145aba23b(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar14 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_1482ff126(local_150);
  }
  iVar14 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x140) * 0x200 +
           *(int *)(*(longlong *)(param_1 + 0x80) + 0x144);
  plVar2 = (longlong *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) < 0) {
    FUN_14481578e(plVar2,0);
  }
  local_f8._0_4_ = 0xffffffff;
  FUN_1448156a8(plVar2,&local_f8,iVar14);
  local_88[2] = 0;
  local_88[3] = 0;
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
  FUN_1448156a8(local_88 + 2,&local_f8,iVar14);
  lVar15 = *(longlong *)(param_1 + 0x80);
  uVar16 = *(int *)(lVar15 + 0x140) * 0x200 + *(int *)(lVar15 + 0x144);
  uVar19 = 0;
  if ((uVar16 != 0) &&
     (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar15 + 0x148) - 1U))) {
    uVar20 = 1;
    uVar10 = 1;
    if (1 < (int)uVar16) {
      uVar20 = uVar16;
    }
    do {
      uVar19 = uVar20;
      if (uVar20 == uVar10) break;
      uVar13 = uVar10 >> 9;
      uVar18 = uVar10 & 0x1ff;
      uVar19 = uVar10;
      uVar10 = uVar10 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar15 + 0x148))[uVar13] +
                                         (ulonglong)uVar18 * 2) - 1U));
  }
  if (uVar19 != uVar16) {
    do {
      if (*(int *)(*plVar2 + (longlong)(int)uVar19 * 4) == -1) {
        uStack_d0 = 0;
        uStack_c8 = 0;
        local_c7 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = (undefined4 **)0x0;
        local_f8 = (longlong *)CONCAT44(local_f8._4_4_,uVar19);
        uStack_e8 = 1;
        FUN_1446f48e2(&local_f0,0);
        *(uint *)local_f0 = uVar19;
        iVar14 = *(int *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x68) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0x6c) < iVar14 + 1U) {
          FUN_1482ff244(local_148,iVar14);
        }
        FUN_1482ff156((longlong)iVar14 * 0x38 + *(longlong *)local_148);
        *(int *)(*plVar2 + (longlong)(int)uVar19 * 4) = iVar14;
        FUN_1482aaf30(&local_f8);
      }
      uVar20 = uVar19 + 1;
      if ((int)(uVar19 + 1) < (int)uVar16) {
        uVar20 = uVar16;
      }
      do {
        uVar10 = uVar20;
        if (uVar20 - 1 == uVar19) break;
        uVar19 = uVar19 + 1;
        uVar10 = uVar19;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar15 + 0x148) +
                                             (ulonglong)(uVar19 >> 9) * 8) +
                                           (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
      uVar19 = uVar10;
    } while (uVar19 != uVar16);
    lVar15 = *(longlong *)(param_1 + 0x80);
  }
  uVar16 = *(int *)(lVar15 + 0x20) * 0x200 + *(int *)(lVar15 + 0x24);
  uVar19 = 0;
  if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar15 + 0x28) - 1U))) {
    uVar20 = 1;
    uVar10 = 1;
    if (1 < (int)uVar16) {
      uVar10 = uVar16;
    }
    do {
      uVar13 = uVar20;
      uVar19 = uVar10;
      if (uVar10 == uVar13) break;
      uVar20 = uVar13 + 1;
      uVar19 = uVar13;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar15 + 0x28))[uVar13 >> 9] +
                                         (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
  }
  if (uVar19 != uVar16) {
    do {
      local_88[0] = CONCAT44(local_88[0]._4_4_,uVar19);
      local_98 = (undefined4 *)CONCAT44(local_98._4_4_,*(undefined4 *)(param_1 + 0x58));
      local_f8 = local_88;
      local_f0 = &local_98;
      FUN_140263e2a(param_1 + 0xd0,local_138,&local_f8,0);
      iVar14 = *(int *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar14 + 1U) {
        FUN_1482f52e8(local_150,iVar14);
      }
      lVar7 = *(longlong *)local_150;
      *(uint *)(lVar7 + (longlong)iVar14 * 0x18) = uVar19;
      puVar4 = (undefined8 *)(lVar7 + 8 + (longlong)iVar14 * 0x18);
      *puVar4 = 0;
      puVar4[1] = 0;
      uVar20 = uVar19 + 1;
      if ((int)(uVar19 + 1) < (int)uVar16) {
        uVar20 = uVar16;
      }
      do {
        uVar10 = uVar20;
        if (uVar20 - 1 == uVar19) break;
        uVar19 = uVar19 + 1;
        uVar10 = uVar19;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar15 + 0x28) +
                                             (ulonglong)(uVar19 >> 9) * 8) +
                                           (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
      uVar19 = uVar10;
    } while (uVar19 != uVar16);
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    puVar17 = *(undefined4 **)(param_1 + 0x50);
    puVar3 = puVar17 + (longlong)*(int *)(param_1 + 0x58) * 6;
    do {
      FUN_1482aedb4(param_1,*puVar17,puVar17 + 2);
      puVar17 = puVar17 + 6;
    } while (puVar17 != puVar3);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0xffffffff);
  FUN_1448156a8(local_88,&local_f8,
                *(int *)(*(longlong *)(param_1 + 0x80) + 0x1d0) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x80) + 0x1d4));
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  FUN_144a1a59e(&local_98,2,1);
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    puVar11 = *(uint **)(param_1 + 0x60);
    local_148 = puVar11 + (longlong)*(int *)(param_1 + 0x68) * 0xe;
    do {
      FUN_1482acbd6(puVar11 + 6,1);
      plVar2 = *(longlong **)(puVar11 + 6);
      lVar15 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x180) +
                (ulonglong)(*puVar11 >> 9) * 8);
      uVar12 = (ulonglong)(*puVar11 & 0x1ff);
      local_a0 = *(undefined4 *)(lVar15 + 8 + uVar12 * 0xc);
      local_a8 = *(undefined8 *)(lVar15 + uVar12 * 0xc);
      lVar15 = 0;
      local_150 = puVar11;
      do {
        lVar7 = local_88[0];
        uVar19 = *(uint *)((longlong)&local_a8 + lVar15 * 4);
        lVar21 = (longlong)(int)uVar19;
        if (*(int *)(local_88[0] + lVar21 * 4) == -1) {
          FUN_1482acc52(param_1,&local_f8,uVar19);
          local_b0 = 0xffffffffffffffff;
          uStack_c0 = 0;
          uStack_bf = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          local_c7 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = (undefined4 **)0x0;
          uStack_e8 = 0;
          local_138[0] = *(longlong *)(param_1 + 0x80);
          uVar6 = *(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(local_138[0] + 0x1c0) + (ulonglong)(uVar19 >> 9) * 8) +
                   (ulonglong)((uVar19 & 0x1ff) << 4));
          local_138[5] = 0;
          local_138[6] = 0;
          local_138[3] = 0;
          local_138[4] = 0;
          local_138[1] = 0;
          local_138[2] = 0;
          local_100 = 0;
          FUN_1482acce2(&local_f0,local_138);
          FUN_146c7d752(local_138);
          *local_98 = (int)uVar6;
          local_98[1] = (int)((ulonglong)uVar6 >> 0x20);
          FUN_146c5e488(&local_f0,&local_98,1);
          puVar3 = local_98;
          uVar8 = FUN_1482abbb8(param_1,local_98[1]);
          uVar9 = FUN_1482abbb8(param_1,*puVar3);
          local_b0 = CONCAT44(uVar8,uVar9);
          iVar14 = *(int *)(param_1 + 0x78);
          *(uint *)(param_1 + 0x78) = iVar14 + 1U;
          if (*(uint *)(param_1 + 0x7c) < iVar14 + 1U) {
            FUN_1482ff5e0(local_140,iVar14);
          }
          puVar4 = (undefined8 *)(*local_140 + (longlong)iVar14 * 0x50);
          *puVar4 = local_f8;
          FUN_146c7f210(puVar4 + 1,&local_f0);
          puVar4[9] = local_b0;
          *(int *)(lVar7 + lVar21 * 4) = iVar14;
          FUN_146c7d752(&local_f0);
        }
        iVar14 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar14 + 1U) {
          FUN_1446f48e2(plVar2,iVar14);
        }
        puVar11 = local_150;
        *(undefined4 *)(*plVar2 + (longlong)iVar14 * 4) = *(undefined4 *)(lVar7 + lVar21 * 4);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      *(undefined1 *)(plVar2 + 4) = 0;
      FUN_146c03f0e(*(undefined8 *)(param_1 + 0x80),&local_f8,*local_150);
      puVar1 = puVar11 + 10;
      lVar15 = 0;
      do {
        iVar14 = *(int *)((longlong)&local_f8 + lVar15 * 4);
        if (iVar14 == -1) {
          *(undefined1 *)(plVar2 + 4) = 1;
        }
        else {
          uVar19 = puVar11[0xc];
          puVar11[0xc] = uVar19 + 1;
          if (puVar11[0xd] < uVar19 + 1) {
            FUN_1446f48e2(puVar1,uVar19);
            iVar14 = *(int *)((longlong)&local_f8 + lVar15 * 4);
            puVar11 = local_150;
          }
          *(int *)(*(longlong *)puVar1 + (longlong)(int)uVar19 * 4) = iVar14;
          iVar5 = (int)plVar2[3];
          *(uint *)(plVar2 + 3) = iVar5 + 1U;
          if (*(uint *)((longlong)plVar2 + 0x1c) < iVar5 + 1U) {
            FUN_1446f48e2(plVar2 + 2,iVar5);
            puVar11 = local_150;
          }
          *(int *)(plVar2[2] + (longlong)iVar5 * 4) = iVar14;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      puVar11 = puVar11 + 0xe;
    } while (puVar11 != local_148);
  }
  if (local_98 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1482af724 FUN_1482af724 body=351 status=ok
// SIG undefined FUN_1482af724(void)

void FUN_1482af724(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,byte param_6,undefined1 param_7,byte param_8,byte param_9)

{
  byte bVar1;
  undefined1 auStack_118 [40];
  uint local_f0;
  undefined8 *local_e8;
  longlong local_e0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined1 *local_c8;
  int *local_c0;
  undefined1 *local_b8;
  LPCRITICAL_SECTION local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_91;
  code *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  bVar1 = param_9;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_91 = param_7;
  local_a0 = (uint)(param_6 ^ 1) * 2 + (uint)(param_8 ^ 1) * 4 + 1;
  local_9c = param_3;
  local_98 = param_4;
  InitializeCriticalSection(&local_70);
  SetCriticalSectionSpinCount(&local_70,4000);
  local_88 = &local_e0;
  local_c8 = (undefined1 *)&param_5;
  local_e8 = &local_80;
  local_80 = 0;
  local_78 = 0;
  local_90 = FUN_143b01df0;
  local_f0 = (uint)(bVar1 ^ 1);
  local_e0 = param_2;
  local_d8 = &local_9c;
  local_d0 = &local_98;
  local_c0 = &local_a0;
  local_b8 = &local_91;
  local_b0 = &local_70;
  local_a8 = param_1;
  FUN_1427ae281(L"ParallelFor Task",*(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4),1)
  ;
  DeleteCriticalSection(&local_70);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482af884 FUN_1482af884 body=353 status=ok
// SIG undefined FUN_1482af884(void)

void FUN_1482af884(undefined8 param_1,longlong param_2,longlong param_3,byte param_4,
                  undefined1 param_5,byte param_6)

{
  undefined1 auStack_138 [40];
  uint local_110;
  undefined8 *local_108;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  LPCRITICAL_SECTION local_e0;
  undefined8 local_d8;
  int *local_d0;
  undefined1 *local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined4 local_bc;
  undefined8 local_b8;
  int local_b0 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  code *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(longlong *)(param_2 + 0x208) != 0) {
    local_b0[0] = (uint)(param_4 ^ 1) * 2 + 5;
    local_a8 = 0;
    local_a0 = 0xffffffff;
    local_c0 = 1;
    local_bf = param_5;
    local_bc = 0xffffffff;
    local_b8 = 0;
    local_98 = *(longlong *)(param_2 + 0x208);
    InitializeCriticalSection(&local_70);
    SetCriticalSectionSpinCount(&local_70,4000);
    local_88 = &local_f8;
    local_e8 = &local_98;
    local_108 = &local_80;
    local_80 = 0;
    local_78 = 0;
    local_90 = FUN_143b02048;
    local_110 = (uint)(param_6 ^ 1);
    local_f8 = param_3;
    local_f0 = param_2;
    local_e0 = &local_70;
    local_d8 = param_1;
    local_d0 = local_b0;
    local_c8 = &local_c0;
    FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_3 + 8),1);
    DeleteCriticalSection(&local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482af9e6 FUN_1482af9e6 body=839 status=ok
// SIG undefined FUN_1482af9e6(void)

void FUN_1482af9e6(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  byte param_5,undefined1 param_6)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  int local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  uint *local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88[0] = (uint)(param_5 ^ 1) * 2 + 5;
  iVar10 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_98._0_1_ = 1;
  local_98._1_1_ = param_6;
  local_98._4_4_ = 0xffffffff;
  local_90 = 0;
  plVar1 = param_3 + 2;
  local_70 = (uint *)&DAT_100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  local_d8 = param_1;
  local_c8 = param_2;
  local_68 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_70);
    iVar10 = (int)param_3[5];
  }
  local_a8 = local_60;
  iStack_a4 = iStack_5c;
  local_a0 = local_58;
  local_9c = local_54;
  local_b8 = local_70;
  local_b0 = local_68;
  local_c0 = param_3;
  if ((iStack_5c != iVar10) || (local_68 != plVar1)) {
    local_d0 = local_d8 + 0x50;
    do {
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        uVar2 = *(uint *)(*local_c0 + (longlong)iStack_a4 * 0xc);
        lVar3 = *(longlong *)(*(longlong *)(local_c8 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8);
        uVar4 = *(undefined8 *)(lVar3 + 8 + (ulonglong)((uVar2 & 0x1ff) << 4));
        plVar8 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar8 = param_4 + 7;
        }
        uVar9 = (int)param_4[9] - 1;
        uVar7 = (uint)uVar4;
        iVar6 = *(int *)((longlong)plVar8 + (ulonglong)(uVar9 & uVar7) * 4);
        if (iVar6 == -1) {
          bVar5 = true;
        }
        else {
          do {
            bVar11 = *(uint *)(*param_4 + (longlong)iVar6 * 0xc) == uVar7;
            bVar5 = !bVar11;
            if (bVar11) break;
            iVar6 = *(int *)(*param_4 + (longlong)iVar6 * 0xc + 4);
          } while (iVar6 != -1);
        }
        uVar7 = (uint)((ulonglong)uVar4 >> 0x20);
        iVar6 = *(int *)((longlong)plVar8 + (ulonglong)(uVar9 & uVar7) * 4);
        if (iVar6 != -1) {
          do {
            if (*(uint *)(*param_4 + (longlong)iVar6 * 0xc) == uVar7) {
              if (bVar5) goto LAB_1482afc42;
              goto LAB_1482afb4e;
            }
            iVar6 = *(int *)(*param_4 + (longlong)iVar6 * 0xc + 4);
          } while (iVar6 != -1);
        }
        if (!bVar5) {
LAB_1482afc42:
          uVar4 = *(undefined8 *)(lVar3 + (ulonglong)((uVar2 & 0x1ff) << 4));
          local_70 = &local_50;
          local_68 = (longlong *)local_88;
          local_50 = uVar2;
          FUN_1482f537c(local_d8,local_4c,&local_70,0);
          lVar3 = local_d0;
          local_50 = (uint)uVar4;
          local_70 = &local_50;
          local_68 = &local_98;
          FUN_1482f586a(local_d0,local_4c,&local_70,0);
          local_50 = (uint)((ulonglong)uVar4 >> 0x20);
          local_70 = &local_50;
          local_68 = &local_98;
          FUN_1482f586a(lVar3,local_4c,&local_70,0);
        }
      }
LAB_1482afb4e:
      local_a8 = local_a8 & ~local_b8._4_4_;
      FUN_1449c0562(&local_b8);
    } while (local_c0 != param_3 || (local_b0 != plVar1 || iStack_a4 != iVar10));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482afd2e FUN_1482afd2e body=875 status=ok
// SIG undefined FUN_1482afd2e(void)

undefined8
FUN_1482afd2e(uint param_1,longlong param_2,uint param_3,uint param_4,uint param_5,uint param_6,
             byte param_7,uint *param_8,byte *param_9,byte *param_10)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  byte bVar7;
  undefined8 uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  longlong lVar12;
  bool bVar13;
  byte local_50;
  
  param_9[0] = 0;
  param_9[1] = 1;
  param_9[4] = 0xff;
  param_9[5] = 0xff;
  param_9[6] = 0xff;
  param_9[7] = 0xff;
  param_9[8] = 0;
  param_9[9] = 0;
  param_9[10] = 0;
  param_9[0xb] = 0;
  param_9[0xc] = 0;
  param_9[0xd] = 0;
  param_9[0xe] = 0;
  param_9[0xf] = 0;
  param_10[0] = 0;
  param_10[1] = 1;
  param_10[4] = 0xff;
  param_10[5] = 0xff;
  param_10[6] = 0xff;
  param_10[7] = 0xff;
  param_10[8] = 0;
  param_10[9] = 0;
  param_10[10] = 0;
  param_10[0xb] = 0;
  param_10[0xc] = 0;
  param_10[0xd] = 0;
  param_10[0xe] = 0;
  param_10[0xf] = 0;
  *param_8 = 0;
  param_8[2] = 0;
  param_8[3] = 0;
  param_8[4] = 0xffffffff;
  if ((int)param_1 < 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4) <= (int)param_1) {
    return 0;
  }
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_2 + 0x1d8) + (ulonglong)(param_1 >> 9) * 8)
                                  + (ulonglong)(param_1 & 0x1ff) * 2) - 1U)) {
    return 0;
  }
  plVar2 = *(longlong **)(param_2 + 0x208);
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(param_1 >> 9) * 8) +
                   0xc + (ulonglong)((param_1 & 0x1ff) << 4));
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    bVar3 = FUN_146c13702(param_2,param_1);
  }
  else {
    bVar3 = 0;
  }
  if (plVar2 == (longlong *)0x0) {
    local_50 = 0;
    bVar4 = 0;
  }
  else {
    local_50 = (**(code **)(*plVar2 + 0x98))(plVar2,param_1);
    bVar4 = (**(code **)(*plVar2 + 0x80))(plVar2,param_1);
  }
  if (iVar1 == -1) {
    bVar10 = (byte)param_3 & 1;
    bVar7 = bVar10 ^ 1;
    bVar13 = (param_3 & 4) == 0;
    if (bVar13) {
      bVar10 = 0;
    }
    bVar11 = 1;
    if (!bVar13) {
      bVar11 = bVar7;
    }
  }
  else {
    bVar10 = 0;
    param_3 = 0;
    bVar11 = 1;
  }
  if (bVar3 != 0) {
    bVar13 = bVar10 == 0;
    bVar10 = 1;
    if (bVar13) {
      if ((param_4 & 4) == 0) {
        bVar10 = 0;
      }
      else {
        bVar10 = (byte)param_4 & 1;
      }
    }
    if (bVar11 == 0) {
      bVar11 = 0;
    }
    else {
      bVar11 = 1;
      if ((param_4 & 4) != 0) {
        bVar11 = ~(byte)param_4 & 1;
      }
    }
    param_3 = param_3 | param_4;
  }
  if (local_50 != 0) {
    bVar13 = bVar10 == 0;
    bVar10 = 1;
    if (bVar13) {
      if ((param_5 & 4) == 0) {
        bVar10 = 0;
      }
      else {
        bVar10 = (byte)param_5 & 1;
      }
    }
    if (bVar11 == 0) {
      bVar11 = 0;
    }
    else {
      bVar11 = 1;
      if ((param_5 & 4) != 0) {
        bVar11 = ~(byte)param_5 & 1;
      }
    }
    param_3 = param_3 | param_5;
  }
  if (bVar4 != 0) {
    uVar9 = param_6 & 4;
    bVar10 = bVar10 | (byte)(uVar9 >> 2);
    bVar11 = (uVar9 == 0 | param_7) & bVar11;
    param_3 = param_3 | param_6;
    if (uVar9 != 0) goto LAB_1482affab;
    lVar12 = 0;
    do {
      iVar6 = (**(code **)(*plVar2 + 0xa0))(plVar2);
      if (iVar6 <= lVar12) {
        lVar12 = 0;
        goto LAB_1482b0043;
      }
      if (lVar12 < (int)plVar2[5]) {
        uVar8 = *(undefined8 *)(plVar2[4] + lVar12 * 8);
      }
      else {
        uVar8 = 0;
      }
      cVar5 = FUN_146c1b290(uVar8,param_1);
      lVar12 = lVar12 + 1;
    } while (cVar5 == '\0');
    goto LAB_1482aff7a;
  }
  bVar4 = 0;
  goto LAB_1482aff90;
  while( true ) {
    if (lVar12 < (int)plVar2[7]) {
      uVar8 = *(undefined8 *)(plVar2[6] + lVar12 * 8);
    }
    else {
      uVar8 = 0;
    }
    cVar5 = FUN_146c1b570(uVar8,param_1);
    lVar12 = lVar12 + 1;
    if (cVar5 != '\0') break;
LAB_1482b0043:
    iVar6 = (**(code **)(*plVar2 + 0xb0))(plVar2);
    if (iVar6 <= lVar12) goto LAB_1482aff90;
  }
LAB_1482aff7a:
  param_3 = param_3 | 4;
LAB_1482aff90:
  if ((byte)(bVar3 | local_50 | bVar4 | iVar1 == -1) != 1) {
    return 0;
  }
LAB_1482affab:
  *param_8 = param_3;
  param_8[2] = 0;
  param_8[3] = 0;
  param_8[4] = 0xffffffff;
  if (((param_3 == 0) && (bVar11 != 0)) && (bVar10 == 0)) {
    return 0;
  }
  bVar3 = bVar10;
  if (*param_9 != 0) {
    bVar3 = 1;
  }
  *param_9 = bVar3;
  bVar3 = 0;
  if (param_9[1] != 0) {
    bVar3 = bVar11;
  }
  param_9[1] = bVar3;
  param_9[8] = 0;
  param_9[9] = 0;
  param_9[10] = 0;
  param_9[0xb] = 0;
  param_9[0xc] = 0;
  param_9[0xd] = 0;
  param_9[0xe] = 0;
  param_9[0xf] = 0;
  if (*param_10 != 0) {
    bVar10 = 1;
  }
  *param_10 = bVar10;
  bVar3 = 0;
  if (param_10[1] != 0) {
    bVar3 = bVar11;
  }
  param_10[1] = bVar3;
  param_10[8] = 0;
  param_10[9] = 0;
  param_10[10] = 0;
  param_10[0xb] = 0;
  param_10[0xc] = 0;
  param_10[0xd] = 0;
  param_10[0xe] = 0;
  param_10[0xf] = 0;
  return 1;
}



// FUNCTION 1482b009a FUN_1482b009a body=2349 status=ok
// SIG undefined FUN_1482b009a(void)

void FUN_1482b009a(longlong param_1,int param_2,longlong param_3,double param_4)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined4 **ppuVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined4 **ppuVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_228 [40];
  longlong *local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  undefined8 *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_164;
  undefined4 *local_160;
  undefined8 *local_158;
  undefined4 local_14c;
  longlong local_148 [4];
  undefined8 local_128;
  int local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  puVar15 = (undefined8 *)0x0;
  local_128 = 0;
  local_120 = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  if (param_2 == 2) {
    if ((*(longlong *)(param_3 + 0x208) == 0) ||
       (lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x208) + 0x48), lVar19 == 0))
    goto LAB_1482b0196;
    puVar15 = (undefined8 *)FUN_14001cc68(0x170,0x10);
    FUN_1482aa63a(puVar15,param_3,lVar19,1);
  }
  else if (param_2 == 1) {
    puVar15 = (undefined8 *)FUN_14001cc68(0x170,0x10);
    FUN_1482aa55c(puVar15,param_3,1);
  }
  else if (param_2 == 0) {
    puVar15 = (undefined8 *)FUN_14001cc68(0x170,0x10);
    FUN_1482aa55c(puVar15,param_3,1);
    *puVar15 = &PTR_FUN_14ae72e50;
  }
  lVar19 = (longlong)*(int *)(puVar15 + 0xf);
  local_1e8 = (longlong *)(param_1 + 0xa8);
  iVar20 = *(int *)(param_1 + 0xb0);
  FUN_1482b09c8(local_1e8,iVar20 + *(int *)(puVar15 + 0xf));
  local_1c8 = lVar19;
  if (lVar19 < 1) {
LAB_1482b0882:
    local_180 = local_148 + 2;
    local_170 = 0;
    local_178 = 0xffffffff;
    local_188 = (longlong *)&DAT_100000000;
    iVar20 = 0;
  }
  else {
    lVar19 = 0;
    local_1d0 = (longlong)iVar20 << 4;
    local_1f8 = param_1;
    local_1f0 = param_3;
    local_1d8 = puVar15;
    do {
      local_1e0 = lVar19 * 0x50;
      lVar26 = puVar15[0xe] + local_1e0;
      plVar14 = (longlong *)FUN_14001cc68(0x28,0x10);
      plVar14[1] = (longlong)&DAT_100000001;
      *plVar14 = (longlong)&PTR_FUN_14ae72e80;
      plVar14[3] = 0;
      plVar14[4] = 0;
      plVar14[2] = (longlong)&PTR_FUN_14ae72e98;
      if (plVar14 == (longlong *)0x0) {
        lVar16 = *local_1e8;
      }
      else {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar14 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        lVar16 = *local_1e8;
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_200 = plVar14 + 2;
      lVar16 = lVar19 * 0x10 + lVar16;
      plVar7 = *(longlong **)(local_1d0 + 8 + lVar16);
      *(longlong **)(local_1d0 + lVar16) = local_200;
      *(longlong **)(local_1d0 + 8 + lVar16) = plVar14;
      if (plVar7 != (longlong *)0x0) {
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
      }
      iVar20 = *(int *)(lVar26 + 0x48);
      if ((longlong)iVar20 != -1) {
        local_1b0._0_4_ = *(undefined4 *)(puVar15[10] + (longlong)iVar20 * 0x18);
        FUN_144984904(local_148,&local_188,&local_1b0,0);
        local_1b0 = (longlong *)
                    CONCAT44(local_1b0._4_4_,
                             *(undefined4 *)(puVar15[10] + (longlong)*(int *)(lVar26 + 0x4c) * 0x18)
                            );
        FUN_144984904(local_148,&local_188,&local_1b0);
      }
      local_1b8 = lVar19;
      FUN_146c5e5e6(lVar26 + 8,plVar14 + 3);
      lVar26 = local_1f0;
      lVar19 = puVar15[0xe];
      iVar13 = *(int *)(lVar19 + 0x18 + local_1e0);
      local_1c0 = plVar14;
      if (1 < iVar13) {
        lVar19 = lVar19 + local_1e0;
        uVar25 = 0;
        do {
          if (uVar25 == 0) {
            iVar21 = iVar13 + -2;
            if (iVar20 == -1) goto LAB_1482b04a7;
          }
          else {
            iVar21 = (int)uVar25 + -1;
LAB_1482b04a7:
            lVar16 = *(longlong *)(lVar19 + 0x10);
            uVar5 = *(uint *)(lVar16 + uVar25 * 4);
            uVar17 = (ulonglong)uVar5;
            local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar5);
            lVar8 = *(longlong *)(lVar26 + 0x10);
            lVar9 = *(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8);
            uVar24 = uVar17 & 0x1ff;
            dVar28 = *(double *)(lVar9 + 0x10 + uVar24 * 0x18);
            uVar5 = *(uint *)(lVar16 + (longlong)iVar21 * 4);
            lVar10 = *(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8);
            uVar22 = (ulonglong)uVar5 & 0x1ff;
            dVar27 = dVar28 - *(double *)(lVar10 + 0x10 + uVar22 * 0x18);
            dVar3 = *(double *)(lVar9 + 8 + uVar24 * 0x18);
            dVar30 = dVar3 - *(double *)(lVar10 + 8 + uVar22 * 0x18);
            dVar4 = *(double *)(lVar9 + uVar24 * 0x18);
            dVar29 = dVar4 - *(double *)(lVar10 + uVar22 * 0x18);
            dVar31 = SQRT(dVar27 * dVar27 + dVar29 * dVar29 + dVar30 * dVar30);
            if (9.99999993922529e-09 < dVar31) {
              uVar5 = *(uint *)(lVar16 + 4 + uVar25 * 4);
              lVar16 = *(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8);
              uVar22 = (ulonglong)uVar5 & 0x1ff;
              dVar28 = *(double *)(lVar16 + 0x10 + uVar22 * 0x18) - dVar28;
              dVar3 = *(double *)(lVar16 + 8 + uVar22 * 0x18) - dVar3;
              dVar4 = *(double *)(lVar16 + uVar22 * 0x18) - dVar4;
              dVar32 = SQRT(dVar28 * dVar28 + dVar4 * dVar4 + dVar3 * dVar3);
              if (9.99999993922529e-09 < dVar32) {
                dVar32 = ((dVar27 * dVar28 + dVar29 * dVar4 + dVar30 * dVar3) / dVar31) / dVar32;
                dVar28 = dVar32;
                if (1.0 <= dVar32) {
                  dVar28 = 1.0;
                }
                dVar28 = acos((double)(-(ulonglong)(dVar32 < -1.0) & 0xbff0000000000000 |
                                      ~-(ulonglong)(dVar32 < -1.0) & (ulonglong)dVar28));
                if (param_4 < ABS(dVar28 * 57.29577951308232)) {
                  FUN_1447cbafe(local_148,&local_1b0,&local_188);
                  goto LAB_1482b0627;
                }
                uVar17 = (ulonglong)local_188 & 0xffffffff;
              }
            }
            local_1b0 = (longlong *)CONCAT62(local_1b0._2_6_,0x100);
            local_1b0 = (longlong *)CONCAT44(0xffffffff,(undefined4)local_1b0);
            local_1a8 = local_200;
            FUN_1482b0a4c(local_1f8,uVar17,&local_1b0);
          }
LAB_1482b0627:
          uVar25 = uVar25 + 1;
        } while (iVar13 - 1 != uVar25);
        lVar19 = local_1d8[0xe];
        puVar15 = local_1d8;
      }
      if (0 < *(int *)(lVar19 + 0x28 + local_1e0)) {
        lVar19 = lVar19 + local_1e0;
        lVar26 = 0;
        do {
          lVar16 = local_1f8;
          uVar6 = *(undefined4 *)(*(longlong *)(lVar19 + 0x20) + lVar26 * 4);
          local_1b0 = (longlong *)((ulonglong)local_1b0 & 0xffffffff00000000);
          local_1a8 = (longlong *)0x0;
          local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,0xffffffff);
          cVar12 = FUN_1482b0b32(local_1f8,uVar6,&local_1b0);
          if (cVar12 == '\0') {
            local_188 = (longlong *)((ulonglong)local_188 & 0xffffffff00000000);
            local_180 = local_200;
            local_178 = CONCAT44(local_178._4_4_,0xffffffff);
            local_160 = &local_164;
            local_158 = &local_188;
            ppuVar18 = (undefined4 **)&local_14c;
            ppuVar23 = &local_160;
            local_164 = uVar6;
          }
          else {
            local_1a8 = local_200;
            local_188 = (longlong *)&local_14c;
            ppuVar18 = &local_160;
            ppuVar23 = (undefined4 **)&local_188;
            local_180 = &local_1b0;
            local_14c = uVar6;
          }
          FUN_1482f537c(lVar16,ppuVar18,ppuVar23);
          lVar26 = lVar26 + 1;
        } while (lVar26 < *(int *)(lVar19 + 0x28));
      }
      plVar14 = local_1c0;
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_1c0 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      param_1 = local_1f8;
      lVar19 = local_1b8 + 1;
    } while (lVar19 != local_1c8);
    local_180 = local_148 + 2;
    local_188 = (longlong *)&DAT_100000000;
    local_178 = 0xffffffff;
    local_170 = 0;
    if (local_120 == 0) goto LAB_1482b0882;
    FUN_1449c0562(&local_188);
    iVar20 = local_120;
  }
  local_198 = local_178;
  uVar11 = local_198;
  local_190 = local_170;
  local_18c = local_16c;
  local_1a8 = local_188;
  local_1a0 = local_180;
  local_198._4_4_ = (int)((ulonglong)local_178 >> 0x20);
  local_1b0 = local_148;
  if ((local_198._4_4_ != iVar20) || (local_180 != local_148 + 2)) {
    iVar13 = local_198._4_4_;
    local_198 = uVar11;
    do {
      local_188 = (longlong *)CONCAT62(local_188._2_6_,1);
      local_188 = (longlong *)CONCAT44(0xffffffff,(undefined4)local_188);
      local_180 = (longlong *)0x0;
      FUN_1482b0a4c(param_1,*(undefined4 *)(*local_1b0 + (longlong)iVar13 * 0xc),&local_188);
      local_198 = CONCAT44(local_198._4_4_,(uint)local_198 & ~local_1a8._4_4_);
      FUN_1449c0562(&local_1a8);
      iVar13 = local_198._4_4_;
      uVar11 = local_198;
    } while (local_1b0 != local_148 || (local_1a0 != local_148 + 2 || local_198._4_4_ != iVar20));
  }
  local_198 = uVar11;
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)*puVar15)(puVar15,1);
  }
LAB_1482b0196:
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_148);
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482b09c8 FUN_1482b09c8 body=130 status=ok
// SIG undefined FUN_1482b09c8(void)

void FUN_1482b09c8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1482ff828(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1482ff8ae(param_1,param_2,iVar1 - param_2);
    FUN_1482ff908(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482b0a4c FUN_1482b0a4c body=229 status=ok
// SIG undefined FUN_1482b0a4c(void)

void FUN_1482b0a4c(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  uint *local_20;
  undefined4 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar4 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x90);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x50);
      do {
        lVar1 = lVar4 + (longlong)iVar2 * 0x20;
        if (*(uint *)(lVar4 + (longlong)iVar2 * 0x20) == param_2) {
          if ((lVar1 != 0) && (lVar1 != -8)) {
            uVar3 = 1;
            if (*(char *)(lVar1 + 8) == '\0') {
              uVar3 = (undefined1)*param_3;
            }
            *(undefined1 *)(lVar1 + 8) = uVar3;
            uVar3 = 0;
            if (*(char *)(lVar1 + 9) != '\0') {
              uVar3 = *(undefined1 *)((longlong)param_3 + 1);
            }
            *(undefined1 *)(lVar1 + 9) = uVar3;
            *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_3 + 2);
            goto LAB_1482b0b16;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  local_20 = &local_24;
  local_18 = param_3;
  FUN_1482f586a((longlong *)(param_1 + 0x50),local_c,&local_20,0);
LAB_1482b0b16:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b0b32 FUN_1482b0b32 body=109 status=ok
// SIG undefined FUN_1482b0b32(void)

undefined8 FUN_1482b0b32(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint *puVar3;
  longlong *plVar4;
  uint *puVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar2 = *(uint *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*param_1 + (longlong)(int)uVar2 * 0x28);
        if (*puVar3 == param_2) goto LAB_1482b0b3c;
        uVar2 = puVar3[8];
      } while (uVar2 != 0xffffffff);
    }
  }
  puVar3 = (uint *)0x0;
LAB_1482b0b3c:
  puVar5 = puVar3 + 2;
  if (puVar3 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  if (puVar5 != (uint *)0x0) {
    puVar3 = *(uint **)(puVar5 + 4);
    param_3[2] = puVar3;
    uVar1 = *(undefined8 *)(puVar5 + 2);
    *param_3 = *(undefined8 *)puVar5;
    param_3[1] = uVar1;
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),puVar5 != (uint *)0x0);
}



// FUNCTION 1482b0b9f FUN_1482b0b9f body=1607 status=ok
// SIG undefined FUN_1482b0b9f(void)

double * FUN_1482b0b9f(double *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_188 [32];
  uint *local_168;
  uint *local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  undefined1 *local_128;
  undefined8 local_120;
  int local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  longlong local_e8;
  ulonglong local_e0;
  
  dVar6 = DAT_14c8464f0;
  dVar7 = DAT_14c8464e8;
  dVar5 = DAT_14c8464e0;
  uVar10 = (uint)param_3;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (param_3 >> 9 & 0x7fffff) * 8);
  uVar9 = (ulonglong)(uVar10 & 0x1ff);
  dVar12 = *(double *)(lVar4 + uVar9 * 0x18);
  dVar2 = *(double *)(lVar4 + 8 + uVar9 * 0x18);
  uVar3 = *(undefined8 *)(lVar4 + 0x10 + uVar9 * 0x18);
  uVar20 = (undefined4)uVar3;
  uVar21 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_ec = 0xffffffff;
  local_f0 = 0xffffffff;
  local_f4 = 0xffffffff;
  local_f8 = 0xffffffff;
  local_fc = 0xffffffff;
  puVar1 = (undefined1 *)(param_2 + 0xb8);
  local_e8 = param_2;
  FUN_146be983e(&local_128,puVar1,param_3,0);
  local_130 = uVar3;
  if (local_128 != puVar1) goto LAB_1482b0cfa;
  if ((uint)local_120 != uVar10) goto LAB_1482b0cfa;
  if ((int)local_110 != -1) goto LAB_1482b0cfa;
  iVar8 = local_110._4_4_;
  while (iVar8 != -1) {
LAB_1482b0cfa:
    do {
      local_160 = &local_f4;
      local_f4 = 0xffffffff;
      local_150 = &local_fc;
      local_158 = &local_f8;
      local_168 = &local_f0;
      FUN_146c12c58(param_2,local_108,param_3 & 0xffffffff,&local_ec);
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_ec >> 9) * 8);
      uVar9 = (ulonglong)local_ec & 0x1ff;
      local_138 = *(double *)(lVar4 + uVar9 * 0x18);
      local_140 = *(double *)(lVar4 + 8 + uVar9 * 0x18);
      local_148 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_f0 >> 9) * 8);
      uVar9 = (ulonglong)local_f0 & 0x1ff;
      dVar18 = *(double *)(lVar4 + uVar9 * 0x18);
      dVar19 = *(double *)(lVar4 + 8 + uVar9 * 0x18);
      dVar13 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
      dVar11 = local_148 - dVar13;
      dVar16 = local_140 - dVar19;
      dVar15 = local_138 - dVar18;
      dVar13 = (double)CONCAT44(uVar21,uVar20) - dVar13;
      dVar19 = dVar2 - dVar19;
      dVar18 = dVar12 - dVar18;
      dVar14 = dVar13 * dVar11 + dVar18 * dVar15 + dVar19 * dVar16;
      dVar19 = (dVar11 * dVar11 + dVar15 * dVar15 + dVar16 * dVar16) *
               (dVar13 * dVar13 + dVar18 * dVar18 + dVar19 * dVar19) - dVar14 * dVar14;
      dVar18 = 1.79769313486232e+308;
      if (dVar19 <= 1.79769313486232e+308) {
        dVar18 = dVar19;
      }
      dVar13 = 0.0;
      dVar18 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar18);
      dVar19 = 0.0;
      if (1e-08 <= dVar18) {
        if (dVar18 < 0.0) {
          dVar18 = sqrt(dVar18);
        }
        else {
          dVar18 = SQRT(dVar18);
        }
        dVar19 = dVar14 / dVar18;
      }
      if (local_f4 != 0xffffffff) {
        lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_f4 >> 9) * 8);
        uVar9 = (ulonglong)(local_f4 & 0x1ff);
        dVar18 = *(double *)(lVar4 + uVar9 * 0x18);
        dVar13 = *(double *)(lVar4 + 8 + uVar9 * 0x18);
        dVar14 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        dVar15 = local_148 - dVar14;
        dVar17 = local_140 - dVar13;
        dVar16 = local_138 - dVar18;
        dVar14 = (double)CONCAT44(uVar21,uVar20) - dVar14;
        dVar13 = dVar2 - dVar13;
        dVar18 = dVar12 - dVar18;
        dVar11 = dVar14 * dVar15 + dVar18 * dVar16 + dVar13 * dVar17;
        uVar20 = (undefined4)local_130;
        uVar21 = (undefined4)((ulonglong)local_130 >> 0x20);
        dVar14 = (dVar15 * dVar15 + dVar16 * dVar16 + dVar17 * dVar17) *
                 (dVar14 * dVar14 + dVar18 * dVar18 + dVar13 * dVar13) - dVar11 * dVar11;
        dVar18 = 1.79769313486232e+308;
        if (dVar14 <= 1.79769313486232e+308) {
          dVar18 = dVar14;
        }
        dVar13 = 0.0;
        dVar18 = (double)(~-(ulonglong)(dVar14 < 0.0) & (ulonglong)dVar18);
        if (1e-08 <= dVar18) {
          if (dVar18 < 0.0) {
            dVar18 = sqrt(dVar18);
          }
          else {
            dVar18 = SQRT(dVar18);
          }
          dVar13 = dVar11 / dVar18;
        }
      }
      if (local_118 == 0) {
        local_120 = (longlong *)CONCAT44(0xffffffff,(uint)local_120);
        local_110 = 0xffffffffffffffff;
        local_110._4_4_ = -1;
        local_110._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_128);
      }
      dVar18 = 1000.0;
      if (dVar19 <= 1000.0) {
        dVar18 = dVar19;
      }
      dVar14 = 1000.0;
      if (dVar13 <= 1000.0) {
        dVar14 = dVar13;
      }
      dVar18 = (double)(-(ulonglong)(dVar13 < -1000.0) & 0xc08f400000000000 |
                       ~-(ulonglong)(dVar13 < -1000.0) & (ulonglong)dVar14) +
               (double)(-(ulonglong)(dVar19 < -1000.0) & 0xc08f400000000000 |
                       ~-(ulonglong)(dVar19 < -1000.0) & (ulonglong)dVar18);
      dVar6 = dVar6 + ((double)CONCAT44(uVar21,uVar20) - local_148) * dVar18;
      dVar7 = dVar7 + (dVar2 - local_140) * dVar18;
      dVar5 = dVar5 + (dVar12 - local_138) * dVar18;
    } while (((local_128 != puVar1) || ((uint)local_120 != uVar10)) ||
            (iVar8 = local_110._4_4_, (int)local_110 != -1));
  }
  if (1e-08 <= dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7) {
    local_128 = &LAB_143b02230;
    local_120 = &local_e8;
    dVar12 = (double)FUN_1482ccb99(param_2,param_3 & 0xffffffff);
    if (1e-08 <= dVar12) {
      dVar12 = 1.0 / (dVar12 + dVar12);
      *param_1 = dVar5 * dVar12;
      param_1[1] = dVar7 * dVar12;
      param_1[2] = dVar6 * dVar12;
      goto LAB_1482b10fd;
    }
  }
  param_1[2] = DAT_14c8464f0;
  dVar12 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = dVar12;
LAB_1482b10fd:
  if ((local_e0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1482b11e7 FUN_1482b11e7 body=277 status=ok
// SIG undefined FUN_1482b11e7(void)

void FUN_1482b11e7(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  uint *local_a8;
  longlong *local_a0;
  undefined4 *local_98;
  double *local_90;
  double *local_88;
  undefined8 *local_80;
  code *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  double local_50;
  double local_48;
  uint local_3c;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = &local_30;
  local_80 = &local_38;
  local_38 = 0x408f400000000000;
  local_a8 = &local_3c;
  local_90 = &local_48;
  local_48 = 0.0;
  local_88 = &local_50;
  local_50 = 0.0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  local_58 = *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_98 = &local_68;
  puVar1 = (undefined4 *)(lVar2 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  local_70 = &local_b0;
  local_78 = FUN_143b02264;
  local_b0 = param_1;
  local_3c = param_2;
  local_30 = param_1;
  FUN_146c03fd0();
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(~-(uint)(local_50 < 9.999999974752427e-07) &
                SUB84((6.283185307179586 - local_48) / local_50,0));
}



// FUNCTION 1482b12fe FUN_1482b12fe body=1447 status=ok
// SIG undefined FUN_1482b12fe(void)

void FUN_1482b12fe(longlong *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  char **local_c0;
  int *local_b8;
  char *local_a8;
  undefined8 uStack_a0;
  code *local_90;
  ulonglong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar11 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  FUN_1482b18a6(param_1,uVar11);
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_d0 = local_d0 & 0xffffffffffffff00;
  FUN_14475e60e(&local_a8,&local_d0,uVar11);
  local_d8 = &local_80;
  local_80 = 0;
  uVar10 = 0;
  local_78 = 0;
  local_90 = FUN_143b028c4;
  local_e0 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  local_c0 = &local_a8;
  local_88 = &local_d0;
  FUN_1401f8d10(L"ParallelFor Task",uVar11);
  FUN_1482b1914();
  if (0 < (int)uVar11) {
    uVar6 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 + (byte)local_a8[uVar6];
      uVar6 = uVar6 + 1;
    } while (uVar11 != uVar6);
  }
  uVar6 = local_d0 & 0xffffffff;
  if (0 < (int)local_d0) {
    lVar7 = 8;
    lVar12 = 0x18;
    lVar13 = 0;
    do {
      *(ulonglong *)((longlong)local_c8 + lVar12 + -0x18) = (ulonglong)uVar10;
      *(undefined8 *)((longlong)local_c8 + lVar12 + -0x10) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)local_c8 + lVar12 + -8) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)local_c8 + lVar12) = 0;
      ((undefined8 *)((longlong)local_c8 + lVar12))[1] = 0;
      *(undefined4 *)((longlong)local_b8 + lVar7 + -8) = 0;
      *(double *)((longlong)local_b8 + lVar7) = 1.0 / (double)(int)uVar10;
      lVar13 = lVar13 + 1;
      uVar6 = (ulonglong)(int)local_d0;
      lVar7 = lVar7 + 0x10;
      lVar12 = lVar12 + 0x28;
    } while (lVar13 < (longlong)uVar6);
  }
  bVar3 = false;
  bVar5 = true;
  do {
    bVar9 = bVar5;
    if ((bVar3) && (0 < (int)uVar6)) {
      lVar7 = 8;
      lVar12 = 0x20;
      lVar13 = 0;
      do {
        *(undefined8 *)((longlong)local_c8 + lVar12) = 0;
        *(double *)((longlong)local_b8 + lVar7) =
             1.0 / (double)(*(longlong *)((longlong)local_c8 + lVar12 + -0x20) + -1);
        *(undefined4 *)((longlong)local_b8 + lVar7 + -8) = 1;
        lVar13 = lVar13 + 1;
        uVar6 = (ulonglong)(int)local_d0;
        lVar7 = lVar7 + 0x10;
        lVar12 = lVar12 + 0x28;
      } while (lVar13 < (longlong)uVar6);
    }
    if (0 < (int)uVar11) {
      lVar7 = 0;
      pcVar8 = local_a8;
      do {
        if (*pcVar8 == '\x01') {
          dVar15 = *(double *)(*param_1 + lVar7);
          uVar14 = -(ulonglong)(-dVar15 <= dVar15);
          dVar15 = (double)(~uVar14 & (ulonglong)-dVar15 | (ulonglong)dVar15 & uVar14);
          if (*local_b8 == 0) {
            if (dVar15 < (double)local_c8[1]) {
              local_c8[1] = (longlong)dVar15;
            }
            if ((double)local_c8[2] <= dVar15 && dVar15 != (double)local_c8[2]) {
              local_c8[2] = (longlong)dVar15;
            }
            local_c8[3] = (longlong)(*(double *)(local_b8 + 2) * dVar15 + (double)local_c8[3]);
          }
          else {
            local_c8[4] = (longlong)
                          ((dVar15 - (double)local_c8[3]) * (dVar15 - (double)local_c8[3]) *
                           *(double *)(local_b8 + 2) + (double)local_c8[4]);
          }
          dVar15 = *(double *)(*param_1 + 8 + lVar7);
          uVar14 = -(ulonglong)(-dVar15 <= dVar15);
          dVar15 = (double)(~uVar14 & (ulonglong)-dVar15 | (ulonglong)dVar15 & uVar14);
          if (local_b8[4] == 0) {
            if (dVar15 < (double)local_c8[6]) {
              local_c8[6] = (longlong)dVar15;
            }
            lVar12 = 0x40;
            if ((double)local_c8[7] <= dVar15 && dVar15 != (double)local_c8[7]) {
              local_c8[7] = (longlong)dVar15;
            }
          }
          else {
            dVar15 = (dVar15 - (double)local_c8[8]) * (dVar15 - (double)local_c8[8]);
            lVar12 = 0x48;
          }
          *(double *)((longlong)local_c8 + lVar12) =
               dVar15 * *(double *)(local_b8 + 6) + *(double *)((longlong)local_c8 + lVar12);
          dVar15 = *(double *)(*param_1 + 0x10 + lVar7);
          uVar14 = -(ulonglong)(-dVar15 <= dVar15);
          dVar15 = (double)(~uVar14 & (ulonglong)-dVar15 | (ulonglong)dVar15 & uVar14);
          if (local_b8[8] == 0) {
            if (dVar15 < (double)local_c8[0xb]) {
              local_c8[0xb] = (longlong)dVar15;
            }
            lVar12 = 0x68;
            if ((double)local_c8[0xc] <= dVar15 && dVar15 != (double)local_c8[0xc]) {
              local_c8[0xc] = (longlong)dVar15;
            }
          }
          else {
            dVar15 = (dVar15 - (double)local_c8[0xd]) * (dVar15 - (double)local_c8[0xd]);
            lVar12 = 0x70;
          }
          *(double *)((longlong)local_c8 + lVar12) =
               dVar15 * *(double *)(local_b8 + 10) + *(double *)((longlong)local_c8 + lVar12);
          dVar15 = *(double *)(*param_1 + 0x18 + lVar7);
          uVar14 = -(ulonglong)(-dVar15 <= dVar15);
          dVar15 = (double)(~uVar14 & (ulonglong)-dVar15 | (ulonglong)dVar15 & uVar14);
          if (local_b8[0xc] == 0) {
            if (dVar15 < (double)local_c8[0x10]) {
              local_c8[0x10] = (longlong)dVar15;
            }
            lVar12 = 0x90;
            if ((double)local_c8[0x11] <= dVar15 && dVar15 != (double)local_c8[0x11]) {
              local_c8[0x11] = (longlong)dVar15;
            }
          }
          else {
            dVar15 = (dVar15 - (double)local_c8[0x12]) * (dVar15 - (double)local_c8[0x12]);
            lVar12 = 0x98;
          }
          *(double *)((longlong)local_c8 + lVar12) =
               dVar15 * *(double *)(local_b8 + 0xe) + *(double *)((longlong)local_c8 + lVar12);
        }
        lVar7 = lVar7 + 0x20;
        pcVar8 = pcVar8 + 1;
      } while ((ulonglong)uVar11 << 5 != lVar7);
    }
    if ((bool)(bVar3 & 0 < (int)uVar6)) {
      lVar7 = 0x20;
      lVar12 = 0;
      do {
        plVar4 = local_c8;
        dVar15 = *(double *)((longlong)local_c8 + lVar7);
        if (dVar15 < 0.0) {
          dVar15 = sqrt(dVar15);
        }
        else {
          dVar15 = SQRT(dVar15);
        }
        *(double *)((longlong)plVar4 + lVar7) = dVar15;
        lVar12 = lVar12 + 1;
        uVar6 = (ulonglong)(int)local_d0;
        lVar7 = lVar7 + 0x28;
      } while (lVar12 < (longlong)uVar6);
    }
    bVar3 = true;
    bVar5 = false;
  } while (bVar9);
  param_1[6] = local_c8[4];
  lVar7 = *local_c8;
  lVar12 = local_c8[1];
  lVar13 = local_c8[3];
  param_1[4] = local_c8[2];
  param_1[5] = lVar13;
  param_1[2] = lVar7;
  param_1[3] = lVar12;
  param_1[0xb] = local_c8[9];
  lVar7 = local_c8[5];
  lVar12 = local_c8[6];
  lVar13 = local_c8[8];
  param_1[9] = local_c8[7];
  param_1[10] = lVar13;
  param_1[7] = lVar7;
  param_1[8] = lVar12;
  param_1[0x10] = local_c8[0xe];
  lVar7 = local_c8[10];
  lVar12 = local_c8[0xb];
  lVar13 = local_c8[0xd];
  param_1[0xe] = local_c8[0xc];
  param_1[0xf] = lVar13;
  param_1[0xc] = lVar7;
  param_1[0xd] = lVar12;
  param_1[0x15] = local_c8[0x13];
  lVar7 = local_c8[0xf];
  lVar12 = local_c8[0x10];
  uVar1 = *(undefined4 *)((longlong)local_c8 + 0x8c);
  lVar13 = local_c8[0x12];
  uVar2 = *(undefined4 *)((longlong)local_c8 + 0x94);
  *(int *)(param_1 + 0x13) = (int)local_c8[0x11];
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar1;
  *(int *)(param_1 + 0x14) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar2;
  param_1[0x11] = lVar7;
  param_1[0x12] = lVar12;
  if (local_b8 != (int *)0x0) {
    FUN_1400020a8(local_b8);
  }
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482b18a6 FUN_1482b18a6 body=109 status=ok
// SIG undefined FUN_1482b18a6(void)

void FUN_1482b18a6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1482ffe68(param_1,iVar1);
    }
    FUN_1482ffe55((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1482ffeee(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482b1914 FUN_1482b1914 body=140 status=ok
// SIG undefined FUN_1482b1914(void)

undefined4 * FUN_1482b1914(undefined4 *param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 4;
  local_40 = 0;
  local_38 = 0x7fefffffffffffff;
  local_30 = 0xffefffffffffffff;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1482fff8a(param_1 + 2);
  FUN_1482ffffe(param_1 + 6,*param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b19a2 FUN_1482b19a2 body=1748 status=ok
// SIG undefined FUN_1482b19a2(void)

undefined8
FUN_1482b19a2(longlong param_1,uint param_2,uint param_3,double *param_4,uint param_5,uint param_6)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_348 [40];
  double *local_320;
  uint local_314;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  int iStack_288;
  int iStack_284;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_26c;
  longlong local_268 [2];
  longlong *local_258;
  longlong local_248 [4];
  code *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  int iStack_210;
  int iStack_20c;
  undefined **local_208;
  longlong local_200;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  longlong local_1c8 [2];
  longlong *local_1b8;
  longlong local_1a8 [4];
  longlong local_188 [2];
  longlong *local_178;
  longlong local_168 [4];
  code *local_148;
  undefined8 uStack_140;
  int iStack_130;
  int iStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_200 = *(longlong *)(param_1 + 8);
  local_218 = 0;
  local_208 = &PTR_LAB_149f3aae0;
  _uStack_1f8 = CONCAT44(uStack_1f4,param_2);
  local_228 = FUN_146be9588;
  local_2c8 = (code *)(local_200 + 0xb8);
  local_320 = param_4;
  local_314 = param_3;
  uStack_2c0 = param_2;
  FUN_146be94ac(local_188,&local_2c8,&local_228);
  local_1d8 = 0xffffffffffffffff;
  local_1c8[0] = 0;
  local_1b8 = (longlong *)0x0;
  local_228 = local_148;
  uStack_220 = uStack_140;
  iStack_210 = iStack_130;
  iStack_20c = iStack_12c;
  local_208 = (undefined **)local_128;
  local_1f0 = local_110;
  uStack_1ec = uStack_10c;
  iStack_1e8 = iStack_108;
  iStack_1e4 = iStack_104;
  local_1e0 = local_100;
  FUN_146be971a(local_1c8,local_188);
  local_1cc = 0;
  FUN_146bfd1f0(&local_228);
  uVar13 = local_314;
  local_278 = 0xffffffffffffffff;
  local_268[0] = 0;
  local_258 = (longlong *)0x0;
  local_2c8 = (code *)CONCAT44(uStack_11c,local_120);
  uStack_2c0 = iStack_118;
  uStack_2bc = uStack_114;
  local_2b8 = local_110;
  uStack_2b4 = uStack_10c;
  iStack_2b0 = iStack_108;
  iStack_2ac = iStack_104;
  local_2a8 = local_100;
  local_2a0 = local_120;
  uStack_29c = uStack_11c;
  iStack_298 = iStack_118;
  uStack_294 = uStack_114;
  local_290 = local_110;
  uStack_28c = uStack_10c;
  iStack_288 = iStack_108;
  iStack_284 = iStack_104;
  local_280 = local_100;
  FUN_146be971a(local_268,local_188);
  local_26c = 0;
  FUN_146bfd1f0(&local_2c8);
  do {
    if ((((local_228 == local_2c8) && ((int)uStack_220 == uStack_2c0)) && (iStack_210 == iStack_2b0)
        ) && (iStack_20c == iStack_2ac)) {
      if (local_268[0] != 0) {
        plVar16 = local_258;
        if (local_258 == (longlong *)0x0) {
          plVar16 = local_248;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (local_1c8[0] != 0) {
        plVar16 = local_1b8;
        if (local_1b8 == (longlong *)0x0) {
          plVar16 = local_1a8;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (local_188[0] != 0) {
        if (local_178 == (longlong *)0x0) {
          local_178 = local_168;
        }
        (**(code **)(*local_178 + 0x10))();
      }
      uVar15 = 0;
      goto LAB_1482b1e13;
    }
    if ((local_1d0 != param_5) && (local_1d0 != param_6)) {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(local_1d0 >> 9) * 8)
      ;
      uVar14 = (ulonglong)(local_1d0 & 0x1ff);
      uVar3 = *(uint *)(lVar6 + uVar14 * 0xc);
      if ((uVar3 == uVar13) ||
         ((uVar4 = *(uint *)(lVar6 + 4 + uVar14 * 0xc), uVar4 == uVar13 ||
          (uVar5 = *(uint *)(lVar6 + 8 + uVar14 * 0xc), uVar5 == uVar13)))) {
LAB_1482b1da5:
        if (local_268[0] != 0) {
          plVar16 = local_258;
          if (local_258 == (longlong *)0x0) {
            plVar16 = local_248;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (local_1c8[0] != 0) {
          plVar16 = local_1b8;
          if (local_1b8 == (longlong *)0x0) {
            plVar16 = local_1a8;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (local_188[0] != 0) {
          if (local_178 == (longlong *)0x0) {
            local_178 = local_168;
          }
          (**(code **)(*local_178 + 0x10))();
        }
        uVar15 = 1;
LAB_1482b1e13:
        if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar15;
      }
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
      lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
      uVar14 = (ulonglong)(uVar3 & 0x1ff);
      dVar17 = *(double *)(lVar7 + uVar14 * 0x18);
      dVar19 = *(double *)(lVar7 + 8 + uVar14 * 0x18);
      dVar21 = *(double *)(lVar7 + 0x10 + uVar14 * 0x18);
      lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
      uVar14 = (ulonglong)(uVar4 & 0x1ff);
      local_300 = *(double *)(lVar7 + uVar14 * 0x18);
      local_308 = *(double *)(lVar7 + 8 + uVar14 * 0x18);
      local_310 = *(double *)(lVar7 + 0x10 + uVar14 * 0x18);
      lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
      uVar14 = (ulonglong)(uVar5 & 0x1ff);
      dVar18 = *(double *)(lVar6 + uVar14 * 0x18);
      dVar1 = *(double *)(lVar6 + 8 + uVar14 * 0x18);
      dVar2 = *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
      dVar9 = local_310 - dVar21;
      dVar20 = local_308 - dVar19;
      dVar8 = local_300 - dVar17;
      dVar11 = dVar1 - dVar19;
      dVar12 = dVar18 - dVar17;
      local_2d0 = dVar8 * dVar11 - dVar12 * dVar20;
      dVar10 = dVar2 - dVar21;
      local_2d8 = dVar9 * dVar12 - dVar10 * dVar8;
      local_2e0 = dVar20 * dVar10 - dVar11 * dVar9;
      if (uVar3 == param_2) {
        dVar21 = local_310 - local_320[2];
        dVar19 = local_308 - local_320[1];
        dVar17 = local_300 - *local_320;
        dVar2 = dVar2 - local_320[2];
        dVar1 = dVar1 - local_320[1];
        dVar18 = dVar18 - *local_320;
        local_2e8 = dVar17 * dVar1 - dVar18 * dVar19;
        local_2f0 = dVar21 * dVar18 - dVar2 * dVar17;
        local_2f8 = dVar19 * dVar2 - dVar1 * dVar21;
LAB_1482b1d91:
        FUN_1482b2078(param_1,&local_2e0,&local_2f8);
        dVar18 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      }
      else {
        if (uVar4 == param_2) {
          local_2e8 = (*local_320 - dVar17) * dVar11 - dVar12 * (local_320[1] - dVar19);
          local_2f0 = (local_320[2] - dVar21) * dVar12 - dVar10 * (*local_320 - dVar17);
          local_2f8 = (local_320[1] - dVar19) * dVar10 - (local_320[2] - dVar21) * dVar11;
          goto LAB_1482b1d91;
        }
        dVar18 = 0.0;
        if (uVar5 == param_2) {
          local_2e8 = dVar8 * (local_320[1] - dVar19) + -dVar20 * (*local_320 - dVar17);
          local_2f0 = (*local_320 - dVar17) * dVar9 + -dVar8 * (local_320[2] - dVar21);
          local_2f8 = (local_320[2] - dVar21) * dVar20 + (local_320[1] - dVar19) * -dVar9;
          goto LAB_1482b1d91;
        }
      }
      if (dVar18 <= *(double *)(param_1 + 0x140)) goto LAB_1482b1da5;
    }
    FUN_146bfd1f0(&local_228);
  } while( true );
}



// FUNCTION 1482b2078 FUN_1482b2078 body=374 status=ok
// SIG undefined FUN_1482b2078(void)

double FUN_1482b2078(longlong param_1,double *param_2,double *param_3)

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
  
  dVar11 = 0.0;
  dVar7 = *param_2;
  if ((*(double *)(param_1 + 0x140) != 0.0) || (NAN(*(double *)(param_1 + 0x140)))) {
    dVar10 = param_2[1];
    dVar9 = param_2[2];
    dVar5 = SQRT(dVar9 * dVar9 + dVar7 * dVar7 + dVar10 * dVar10);
    dVar8 = 1.0 / dVar5;
    if (1e-08 < dVar5) {
      dVar9 = dVar9 * dVar8;
      dVar10 = dVar10 * dVar8;
    }
    else {
      dVar9 = 0.0;
      dVar10 = 0.0;
    }
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar3 = param_3[2];
    dVar6 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
    dVar4 = 1.0 / dVar6;
    if (1e-08 < dVar6) {
      dVar11 = dVar3 * dVar4;
      dVar2 = dVar2 * dVar4;
    }
    else {
      dVar2 = 0.0;
    }
    dVar7 = (double)(-(ulonglong)(1e-08 < dVar5) & (ulonglong)(dVar7 * dVar8)) *
            (double)(-(ulonglong)(1e-08 < dVar6) & (ulonglong)(dVar1 * dVar4)) + dVar10 * dVar2 +
            dVar9 * dVar11;
  }
  else {
    dVar7 = param_2[2] * param_3[2] + dVar7 * *param_3 + param_2[1] * param_3[1];
  }
  return dVar7;
}



// FUNCTION 1482b21ee FUN_1482b21ee body=1272 status=ok
// SIG undefined FUN_1482b21ee(void)

ulonglong FUN_1482b21ee(longlong param_1,uint param_2,uint param_3,double *param_4,uint param_5,
                       uint param_6)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  double *pdVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_2c8 [24];
  double adStack_2b0 [2];
  double *local_2a0;
  double local_298 [4];
  double dStack_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  int iStack_230;
  int iStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  int iStack_208;
  int iStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1ec;
  longlong local_1e8 [2];
  longlong *local_1d8;
  longlong local_1c8 [4];
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  int iStack_190;
  int iStack_18c;
  undefined **local_188;
  longlong local_180;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  int iStack_168;
  int iStack_164;
  undefined8 local_160;
  undefined8 local_158;
  uint local_150;
  undefined4 local_14c;
  longlong local_148 [2];
  longlong *local_138;
  longlong local_128 [4];
  longlong local_108 [2];
  longlong *local_f8;
  longlong local_e8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  int iStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_180 = *(longlong *)(param_1 + 8);
  local_198 = 0;
  local_188 = &PTR_LAB_149f3aae0;
  _uStack_178 = CONCAT44(uStack_174,param_2);
  local_1a8 = FUN_146be9588;
  local_248 = (code *)(local_180 + 0xb8);
  local_2a0 = param_4;
  uStack_240 = param_2;
  FUN_146be94ac(local_108,&local_248,&local_1a8);
  local_158 = 0xffffffffffffffff;
  plVar12 = local_148;
  local_148[0] = 0;
  local_138 = (longlong *)0x0;
  local_1a8 = local_c8;
  uStack_1a0 = uStack_c0;
  iStack_190 = iStack_b0;
  iStack_18c = iStack_ac;
  local_188 = (undefined **)local_a8;
  local_170 = local_90;
  uStack_16c = uStack_8c;
  iStack_168 = iStack_88;
  iStack_164 = iStack_84;
  local_160 = local_80;
  FUN_146be971a(plVar12,local_108);
  local_14c = 0;
  FUN_146bfd1f0(&local_1a8);
  pdVar8 = local_2a0;
  local_1f8 = 0xffffffffffffffff;
  local_1e8[0] = 0;
  local_1d8 = (longlong *)0x0;
  local_248 = (code *)CONCAT44(uStack_9c,local_a0);
  uStack_240 = iStack_98;
  uStack_23c = uStack_94;
  local_238 = local_90;
  uStack_234 = uStack_8c;
  iStack_230 = iStack_88;
  iStack_22c = iStack_84;
  local_228 = local_80;
  local_220 = local_a0;
  uStack_21c = uStack_9c;
  iStack_218 = iStack_98;
  uStack_214 = uStack_94;
  local_210 = local_90;
  uStack_20c = uStack_8c;
  iStack_208 = iStack_88;
  iStack_204 = iStack_84;
  local_200 = local_80;
  FUN_146be971a(local_1e8,local_108);
  local_1ec = 0;
  FUN_146bfd1f0(&local_248);
  while ((((local_1a8 != local_248 || ((int)uStack_1a0 != uStack_240)) || (iStack_190 != iStack_230)
          ) || (iStack_18c != iStack_22c))) {
    if ((local_150 != param_5) && (local_150 != param_6)) {
      lVar10 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(local_150 >> 9) * 8
                );
      uVar9 = (ulonglong)(local_150 & 0x1ff);
      uVar3 = *(uint *)(lVar10 + uVar9 * 0xc);
      plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
      if ((uVar3 == param_3) ||
         ((uVar4 = *(uint *)(lVar10 + 4 + uVar9 * 0xc), uVar4 == param_3 ||
          (uVar5 = *(uint *)(lVar10 + 8 + uVar9 * 0xc), uVar5 == param_3)))) goto LAB_1482b263b;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
      lVar6 = *(longlong *)(lVar10 + (ulonglong)(uVar3 >> 9) * 8);
      local_298[2] = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar6 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
      local_298[0] = *pdVar1;
      local_298[1] = pdVar1[1];
      lVar6 = *(longlong *)(lVar10 + (ulonglong)(uVar4 >> 9) * 8);
      local_270 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar6 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
      local_298[3] = *pdVar1;
      dStack_278 = pdVar1[1];
      lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar5 >> 9) * 8);
      local_258 = *(double *)(lVar10 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
      local_268 = *pdVar1;
      dStack_260 = pdVar1[1];
      dVar13 = (local_298[3] - local_298[0]) * (dStack_260 - local_298[1]) -
               (local_268 - local_298[0]) * (dStack_278 - local_298[1]);
      dVar14 = (local_270 - local_298[2]) * (local_268 - local_298[0]) -
               (local_258 - local_298[2]) * (local_298[3] - local_298[0]);
      dVar7 = (dStack_278 - local_298[1]) * (local_258 - local_298[2]) -
              (dStack_260 - local_298[1]) * (local_270 - local_298[2]);
      dVar2 = *(double *)(param_1 + 0x148);
      if (dVar2 <= dVar13 * dVar13 + dVar7 * dVar7 + dVar14 * dVar14) {
        if (uVar3 == param_2) {
          lVar10 = 0;
        }
        else {
          lVar10 = 1;
          if (uVar4 != param_2) {
            lVar10 = (ulonglong)(uVar5 == param_2) * 3 + -1;
          }
        }
        local_298[lVar10 * 3 + 2] = pdVar8[2];
        dVar7 = pdVar8[1];
        local_298[lVar10 * 3] = *pdVar8;
        local_298[lVar10 * 3 + 1] = dVar7;
        dVar13 = (local_298[3] - local_298[0]) * (dStack_260 - local_298[1]) -
                 (local_268 - local_298[0]) * (dStack_278 - local_298[1]);
        dVar14 = (local_270 - local_298[2]) * (local_268 - local_298[0]) -
                 (local_258 - local_298[2]) * (local_298[3] - local_298[0]);
        dVar7 = (dStack_278 - local_298[1]) * (local_258 - local_298[2]) -
                (dStack_260 - local_298[1]) * (local_270 - local_298[2]);
        if (dVar13 * dVar13 + dVar7 * dVar7 + dVar14 * dVar14 < dVar2) goto LAB_1482b263b;
      }
    }
    FUN_146bfd1f0(&local_1a8);
  }
  plVar12 = (longlong *)0x0;
LAB_1482b263b:
  if (local_1e8[0] != 0) {
    plVar11 = local_1d8;
    if (local_1d8 == (longlong *)0x0) {
      plVar11 = local_1c8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_148[0] != 0) {
    plVar11 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar11 = local_128;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_108[0] != 0) {
    if (local_f8 == (longlong *)0x0) {
      local_f8 = local_e8;
    }
    (**(code **)(*local_f8 + 0x10))();
  }
  if ((local_70 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return (ulonglong)plVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b26e8 FUN_1482b26e8 body=1208 status=ok
// SIG undefined FUN_1482b26e8(void)

ulonglong FUN_1482b26e8(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined7 uVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_178 [40];
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
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  lVar12 = *(longlong *)(lVar11 + (ulonglong)(param_4 >> 9) * 8);
  uVar15 = (ulonglong)(param_4 & 0x1ff);
  dVar20 = *(double *)(lVar12 + uVar15 * 0x18);
  dVar1 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
  dVar2 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
  lVar13 = *(longlong *)(lVar11 + (ulonglong)(param_5 >> 9) * 8);
  uVar15 = (ulonglong)(param_5 & 0x1ff);
  dVar3 = *(double *)(lVar13 + uVar15 * 0x18);
  dVar4 = *(double *)(lVar13 + 8 + uVar15 * 0x18);
  dVar5 = *(double *)(lVar13 + 0x10 + uVar15 * 0x18);
  lVar13 = *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(param_6 >> 9) * 8);
  uVar15 = (ulonglong)(param_6 & 0x1ff);
  uVar16 = *(uint *)(lVar13 + uVar15 * 0xc);
  uVar9 = *(uint *)(lVar13 + 8 + uVar15 * 0xc);
  if (uVar16 == param_2) {
    bVar18 = uVar9 == param_3;
  }
  else {
    uVar10 = *(uint *)(lVar13 + 4 + uVar15 * 0xc);
    if (uVar10 == param_2) {
      bVar18 = uVar16 == param_3;
    }
    else {
      bVar18 = uVar10 == param_3 && uVar9 == param_2;
    }
  }
  uVar16 = param_2;
  if (bVar18) {
    uVar16 = param_3;
    param_3 = param_2;
  }
  lVar13 = *(longlong *)(lVar11 + (ulonglong)(uVar16 >> 9) * 8);
  uVar15 = (ulonglong)(uVar16 & 0x1ff);
  local_140 = *(double *)(lVar13 + uVar15 * 0x18);
  local_148 = *(double *)(lVar13 + 8 + uVar15 * 0x18);
  local_150 = *(double *)(lVar13 + 0x10 + uVar15 * 0x18);
  lVar11 = *(longlong *)(lVar11 + (ulonglong)(param_3 >> 9) * 8);
  uVar15 = (ulonglong)(param_3 & 0x1ff);
  dVar6 = *(double *)(lVar11 + uVar15 * 0x18);
  dVar7 = *(double *)(lVar11 + 8 + uVar15 * 0x18);
  dVar8 = *(double *)(lVar11 + 0x10 + uVar15 * 0x18);
  local_c8 = (dVar20 - local_140) * (dVar7 - local_148) - (dVar6 - local_140) * (dVar1 - local_148);
  local_d0 = (dVar2 - local_150) * (dVar6 - local_140) - (dVar8 - local_150) * (dVar20 - local_140);
  local_d8 = (dVar1 - local_148) * (dVar8 - local_150) - (dVar7 - local_148) * (dVar2 - local_150);
  local_e0 = (dVar3 - dVar6) * (local_148 - dVar7) - (local_140 - dVar6) * (dVar4 - dVar7);
  local_e8 = (dVar5 - dVar8) * (local_140 - dVar6) - (local_150 - dVar8) * (dVar3 - dVar6);
  local_f0 = (dVar4 - dVar7) * (local_150 - dVar8) - (local_148 - dVar7) * (dVar5 - dVar8);
  local_f8 = (dVar6 - dVar20) * (dVar4 - dVar1) - (dVar3 - dVar20) * (dVar7 - dVar1);
  local_100 = (dVar8 - dVar2) * (dVar3 - dVar20) - (dVar5 - dVar2) * (dVar6 - dVar20);
  local_108 = (dVar7 - dVar1) * (dVar5 - dVar2) - (dVar4 - dVar1) * (dVar8 - dVar2);
  local_138 = dVar20;
  local_130 = dVar1;
  local_128 = dVar2;
  dVar19 = (double)FUN_1482b2078(param_1);
  dVar14 = local_140;
  dVar8 = local_148;
  dVar7 = local_150;
  dVar6 = *(double *)(param_1 + 0x140);
  uVar17 = (undefined7)((ulonglong)lVar12 >> 8);
  uVar15 = CONCAT71(uVar17,1);
  if ((dVar6 < dVar19) &&
     (dVar19 = (double)FUN_1482b2078(param_1,&local_f0,&local_108), dVar6 < dVar19)) {
    local_110 = (dVar14 - dVar3) * (dVar1 - dVar4) - (dVar20 - dVar3) * (dVar8 - dVar4);
    local_118 = (dVar7 - dVar5) * (dVar20 - dVar3) - (dVar2 - dVar5) * (dVar14 - dVar3);
    local_120 = (dVar8 - dVar4) * (dVar2 - dVar5) - (dVar1 - dVar4) * (dVar7 - dVar5);
    dVar20 = (double)FUN_1482b2078(param_1,&local_d8);
    uVar15 = CONCAT71(uVar17,1);
    if ((dVar6 < dVar20) &&
       (dVar20 = (double)FUN_1482b2078(param_1,&local_f0,&local_120), dVar6 < dVar20)) {
      uVar15 = 0;
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 1482b2ba2 FUN_1482b2ba2 body=913 status=ok
// SIG undefined FUN_1482b2ba2(void)

undefined8 FUN_1482b2ba2(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined7 uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  lVar10 = *(longlong *)(lVar9 + (ulonglong)(param_4 >> 9) * 8);
  uVar14 = (ulonglong)(param_4 & 0x1ff);
  dVar1 = *(double *)(lVar10 + uVar14 * 0x18);
  dVar19 = *(double *)(lVar10 + 8 + uVar14 * 0x18);
  dVar2 = *(double *)(lVar10 + 0x10 + uVar14 * 0x18);
  lVar10 = *(longlong *)(lVar9 + (ulonglong)(param_2 >> 9) * 8);
  uVar14 = (ulonglong)(param_2 & 0x1ff);
  dVar3 = *(double *)(lVar10 + uVar14 * 0x18);
  dVar4 = *(double *)(lVar10 + 8 + uVar14 * 0x18);
  dVar5 = *(double *)(lVar10 + 0x10 + uVar14 * 0x18);
  lVar10 = *(longlong *)(lVar9 + (ulonglong)(param_3 >> 9) * 8);
  uVar14 = (ulonglong)(param_3 & 0x1ff);
  dVar15 = *(double *)(lVar10 + uVar14 * 0x18);
  dVar6 = *(double *)(lVar10 + 8 + uVar14 * 0x18);
  dVar7 = *(double *)(lVar10 + 0x10 + uVar14 * 0x18);
  dVar18 = (dVar3 - dVar1) * (dVar6 - dVar19) - (dVar15 - dVar1) * (dVar4 - dVar19);
  dVar11 = (dVar5 - dVar2) * (dVar15 - dVar1) - (dVar7 - dVar2) * (dVar3 - dVar1);
  dVar17 = (dVar4 - dVar19) * (dVar7 - dVar2) - (dVar6 - dVar19) * (dVar5 - dVar2);
  dVar8 = *(double *)(param_1 + 0x148);
  if (dVar8 <= dVar18 * dVar18 + dVar17 * dVar17 + dVar11 * dVar11) {
    uVar14 = (ulonglong)(param_5 & 0x1ff);
    lVar9 = *(longlong *)(lVar9 + (ulonglong)(param_5 >> 9) * 8);
    dVar11 = *(double *)(lVar9 + uVar14 * 0x18);
    dVar17 = *(double *)(lVar9 + 8 + uVar14 * 0x18);
    dVar18 = *(double *)(lVar9 + 0x10 + uVar14 * 0x18);
    dVar20 = (dVar3 - dVar11) * (dVar6 - dVar17) - (dVar15 - dVar11) * (dVar4 - dVar17);
    dVar12 = (dVar5 - dVar18) * (dVar15 - dVar11) - (dVar7 - dVar18) * (dVar3 - dVar11);
    dVar16 = (dVar4 - dVar17) * (dVar7 - dVar18) - (dVar6 - dVar17) * (dVar5 - dVar18);
    if (dVar8 <= dVar20 * dVar20 + dVar16 * dVar16 + dVar12 * dVar12) {
      dVar2 = dVar18 - dVar2;
      dVar19 = dVar17 - dVar19;
      dVar1 = dVar11 - dVar1;
      dVar20 = dVar1 * (dVar17 - dVar6) - (dVar11 - dVar15) * dVar19;
      dVar16 = dVar2 * (dVar11 - dVar15) - (dVar18 - dVar7) * dVar1;
      dVar15 = dVar19 * (dVar18 - dVar7) - (dVar17 - dVar6) * dVar2;
      uVar13 = (undefined7)((ulonglong)lVar9 >> 8);
      if (dVar20 * dVar20 + dVar15 * dVar15 + dVar16 * dVar16 < dVar8) {
        return CONCAT71(uVar13,1);
      }
      dVar15 = dVar1 * (dVar17 - dVar4) + -dVar19 * (dVar11 - dVar3);
      dVar1 = (dVar11 - dVar3) * dVar2 + -dVar1 * (dVar18 - dVar5);
      dVar19 = (dVar18 - dVar5) * dVar19 + (dVar17 - dVar4) * -dVar2;
      return CONCAT71(uVar13,dVar15 * dVar15 + dVar19 * dVar19 + dVar1 * dVar1 < dVar8);
    }
  }
  return 0;
}



// FUNCTION 1482b2f34 FUN_1482b2f34 body=582 status=ok
// SIG undefined FUN_1482b2f34(void)

ulonglong FUN_1482b2f34(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                       int param_6,undefined4 param_7,undefined4 param_8,int *param_9)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined7 uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  int *local_78;
  ulonglong local_70;
  undefined4 local_64;
  int local_60 [2];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_9 = -1;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 200) != '\x01') goto LAB_1482b2f6e;
  local_78 = param_9;
  cVar2 = FUN_1482b317c();
  if (cVar2 != '\0') {
    uVar1 = param_1 + 0x10;
    if (param_5 == -1) {
      bVar6 = false;
      bVar8 = false;
      uVar9 = 0;
    }
    else {
      uVar3 = FUN_146c085f4(*(undefined8 *)(param_1 + 8),param_3,param_5,param_7);
      uVar5 = FUN_146c085f4(*(undefined8 *)(param_1 + 8),param_4,param_5,param_7);
      local_70 = CONCAT44(local_70._4_4_,uVar5);
      FUN_1482b3344(uVar1,local_60,uVar3);
      uVar9 = (undefined7)((ulonglong)local_60 >> 8);
      bVar8 = local_58 != 0 || local_60[0] != 0;
      FUN_1482b3344(uVar1,local_60,local_70 & 0xffffffff);
      bVar6 = local_58 != 0 || local_60[0] != 0;
    }
    bVar10 = bVar6;
    if (param_6 != -1) {
      local_70 = uVar1;
      local_64 = FUN_146c085f4(*(undefined8 *)(param_1 + 8),param_3,param_6,param_8);
      uVar3 = FUN_146c085f4(*(undefined8 *)(param_1 + 8),param_4,param_6,param_8);
      bVar10 = true;
      bVar11 = bVar8 == false;
      bVar8 = true;
      if (bVar11) {
        FUN_1482b3344(local_70,local_60,local_64);
        uVar9 = (undefined7)((ulonglong)local_60 >> 8);
        bVar8 = local_58 != 0 || local_60[0] != 0;
      }
      if (!bVar6) {
        FUN_1482b3344(local_70,local_60,uVar3);
        bVar10 = local_58 != 0 || local_60[0] != 0;
      }
    }
    if (bVar8 == false) {
      iVar4 = *param_9;
      if (iVar4 == -1) {
        if (bVar10) {
          *param_9 = param_4;
        }
        goto LAB_1482b2f6e;
      }
    }
    else {
      if (bVar10) goto LAB_1482b3039;
      iVar4 = *param_9;
      if (iVar4 == -1) {
        *param_9 = param_3;
        goto LAB_1482b2f6e;
      }
    }
    if ((iVar4 != param_3) || (!bVar10)) {
      uVar7 = CONCAT71(uVar9,bVar8 ^ 1U | iVar4 != param_4) & 0xffffffff;
      goto LAB_1482b2f6e;
    }
  }
LAB_1482b3039:
  uVar7 = 0;
LAB_1482b2f6e:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1482b317c FUN_1482b317c body=454 status=ok
// SIG undefined FUN_1482b317c(void)

ulonglong FUN_1482b317c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 *param_5)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  char *pcVar2;
  undefined7 uVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  char local_68;
  char local_67;
  int local_64;
  longlong local_60;
  char local_58;
  char local_57;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_5 = 0xffffffff;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 200) != '\x01') goto LAB_1482b31b7;
  lVar1 = param_1 + 0x10;
  pcVar2 = &local_58;
  FUN_1482b33ce(lVar1,pcVar2);
  FUN_1482b33ce(lVar1,&local_68,param_4);
  if (local_67 != '\0' || local_57 != '\0') {
    uVar3 = (undefined7)((ulonglong)pcVar2 >> 8);
    if (local_58 == '\0') {
      pcVar2 = (char *)CONCAT71(uVar3,1);
      if ((local_50 == 0 && local_68 == '\0') && local_60 == 0) goto LAB_1482b31b7;
      if (local_68 == '\0') goto LAB_1482b3234;
      if (local_50 != local_60 && local_50 != 0) goto LAB_1482b321d;
LAB_1482b32f8:
      *param_5 = param_4;
      goto LAB_1482b31b7;
    }
    if (local_68 == '\0') {
      if ((local_60 == 0) || (local_60 == local_50)) {
        *param_5 = param_3;
        pcVar2 = (char *)CONCAT71(uVar3,1);
        goto LAB_1482b31b7;
      }
    }
    else {
LAB_1482b3234:
      pcVar2 = (char *)CONCAT71((int7)((ulonglong)pcVar2 >> 8),1);
      if (((*(char *)(param_1 + 0x139) == '\x01') && (-1 < local_54)) && (local_54 == local_64))
      goto LAB_1482b31b7;
      if (local_60 == 0 && local_50 != 0) {
        *param_5 = param_3;
        goto LAB_1482b31b7;
      }
      if (local_50 == 0 && local_60 != 0) goto LAB_1482b32f8;
      if (((local_60 != 0) && (local_50 != 0)) &&
         ((local_50 == local_60 && (FUN_1482b3344(lVar1,local_80,param_2), local_78 == local_50))))
      goto LAB_1482b31b7;
    }
  }
LAB_1482b321d:
  pcVar2 = (char *)0x0;
LAB_1482b31b7:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pcVar2 & 0xffffffff;
}



// FUNCTION 1482b3344 FUN_1482b3344 body=137 status=ok
// SIG undefined FUN_1482b3344(void)

void FUN_1482b3344(longlong *param_1,undefined8 *param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar4 = *(uint *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*param_1 + (longlong)(int)uVar4 * 0x28);
        if (*puVar1 == param_3) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            param_2[2] = *(undefined8 *)(puVar1 + 6);
            uVar2 = *(undefined8 *)(puVar1 + 4);
            *param_2 = *(undefined8 *)(puVar1 + 2);
            param_2[1] = uVar2;
            return;
          }
          break;
        }
        uVar4 = puVar1[8];
      } while (uVar4 != 0xffffffff);
    }
  }
  *(undefined4 *)param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  return;
}



// FUNCTION 1482b33ce FUN_1482b33ce body=139 status=ok
// SIG undefined FUN_1482b33ce(void)

void FUN_1482b33ce(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar3 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x90);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & param_3) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x20) == param_3) {
          if ((undefined8 *)(lVar3 + 8) != (undefined8 *)0x0 && lVar3 != 0) {
            uVar1 = *(undefined8 *)(lVar3 + 0x10);
            *param_2 = *(undefined8 *)(lVar3 + 8);
            param_2[1] = uVar1;
            return;
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  *(undefined2 *)param_2 = 0x100;
  *(undefined4 *)((longlong)param_2 + 4) = 0xffffffff;
  param_2[1] = 0;
  return;
}



// FUNCTION 1482b3470 FUN_1482b3470 body=95 status=ok
// SIG undefined FUN_1482b3470(void)

void FUN_1482b3470(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    local_10 = &local_20;
    local_18 = &LAB_143b02aa4;
    local_20 = param_1;
    FUN_146c03fd0(*(undefined8 *)(param_1 + 8));
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b34d0 FUN_1482b34d0 body=99 status=ok
// SIG undefined FUN_1482b34d0(void)

void FUN_1482b34d0(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if (param_1[0x1b] != 0) {
    uVar1 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
             (ulonglong)((param_2 & 0x1ff) << 4));
    (**(code **)(*param_1 + 0x20))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001482b3528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,uVar1 >> 0x20);
    return;
  }
  return;
}



// FUNCTION 1482b3534 FUN_1482b3534 body=1 status=ok
// SIG undefined FUN_1482b3534(void)

void FUN_1482b3534(void)

{
  return;
}



// FUNCTION 1482b3536 FUN_1482b3536 body=87 status=ok
// SIG undefined FUN_1482b3536(void)

void FUN_1482b3536(longlong param_1,byte param_2)

{
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_1482b358e();
    if ((2 < *(int *)(param_1 + 0x13c)) || ((*(int *)(param_1 + 0x13c) == 2 & param_2) != 0)) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),0x101,1);
      FUN_1482b378a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1482b358e FUN_1482b358e body=507 status=ok
// SIG undefined FUN_1482b358e(void)

void FUN_1482b358e(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [24];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 200) == '\x01') {
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_1482f5d54(local_98,param_1 + 0x60);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar9 = 0;
    puStack_b0 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar9 = local_70;
    }
    local_c8 = local_a8;
    uVar5 = local_c8;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_d8 = local_b8;
    local_d0 = puStack_b0;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_e0 = local_98;
    if ((local_c8._4_4_ != iVar9) || (puStack_b0 != local_88)) {
      iVar6 = local_c8._4_4_;
      local_c8 = uVar5;
      do {
        if (*(longlong *)(*local_e0 + 0x10 + (longlong)iVar6 * 0x20) != 0) {
          puVar7 = (uint *)(*local_e0 + (longlong)iVar6 * 0x20);
          uVar2 = *puVar7;
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar8 = (ulonglong)(uVar2 & 0x1ff);
          local_a8 = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
          puVar1 = (undefined8 *)(lVar3 + uVar8 * 0x18);
          local_b8 = *puVar1;
          puStack_b0 = (undefined1 *)puVar1[1];
          plVar4 = *(longlong **)(puVar7 + 4);
          (**(code **)(*plVar4 + 8))(plVar4,local_f8,&local_b8);
        }
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
        FUN_1449c0562(&local_d8);
        iVar6 = local_c8._4_4_;
        uVar5 = local_c8;
      } while (local_e0 != local_98 || (local_d0 != local_88 || local_c8._4_4_ != iVar9));
    }
    local_c8 = uVar5;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1482f5ec6(local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b378a FUN_1482b378a body=621 status=ok
// SIG undefined FUN_1482b378a(void)

void FUN_1482b378a(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar10 = *(longlong *)(param_1 + 8);
  lVar1 = *(longlong *)(lVar10 + 0x208);
  if ((((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x28))) && (**(longlong **)(lVar1 + 0x20) != 0)) &&
     (*(char *)(param_1 + 200) == '\x01')) {
    uVar9 = *(int *)(lVar10 + 0x1d0) * 0x200 + *(int *)(lVar10 + 0x1d4);
    uVar7 = 0;
    if ((uVar9 != 0) &&
       (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x1d8) - 1U))) {
      uVar6 = 1;
      uVar8 = 1;
      if (1 < (int)uVar9) {
        uVar8 = uVar9;
      }
      do {
        uVar4 = (uint)uVar6;
        uVar7 = uVar8;
        if (uVar8 == uVar4) break;
        uVar2 = uVar6 >> 9;
        uVar6 = (ulonglong)(uVar4 + 1);
        uVar7 = uVar4;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x1d8))[uVar2] +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
    }
    if (uVar7 != uVar9) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
        if (*(int *)(lVar1 + 0x28) < 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = **(undefined8 **)(lVar1 + 0x20);
        }
        cVar3 = FUN_146c1a770(uVar5,uVar7,0);
        if (cVar3 != '\0') {
          FUN_1482b3344(param_1 + 0x10,local_50);
        }
        uVar8 = uVar7 + 1;
        if ((int)(uVar7 + 1) < (int)uVar9) {
          uVar8 = uVar9;
        }
        do {
          uVar4 = uVar8;
          if (uVar8 - 1 == uVar7) break;
          uVar7 = uVar7 + 1;
          uVar4 = uVar7;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar10 + 0x1d8) +
                                               (ulonglong)(uVar7 >> 9) * 8) +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        uVar7 = uVar4;
      } while (uVar7 != uVar9);
      lVar10 = *(longlong *)(param_1 + 8);
    }
    uVar9 = *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24);
    uVar7 = 0;
    if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x28) - 1U))) {
      uVar6 = 1;
      uVar8 = 1;
      if (1 < (int)uVar9) {
        uVar8 = uVar9;
      }
      do {
        uVar4 = (uint)uVar6;
        uVar7 = uVar8;
        if (uVar8 == uVar4) break;
        uVar2 = uVar6 >> 9;
        uVar6 = (ulonglong)(uVar4 + 1);
        uVar7 = uVar4;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x28))[uVar2] +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
    }
    if (uVar7 != uVar9) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
        if (*(int *)(lVar1 + 0x28) < 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = **(undefined8 **)(lVar1 + 0x20);
        }
        cVar3 = FUN_146c1bd3e(uVar5,uVar7,1);
        if (cVar3 != '\0') {
          FUN_1482b33ce(param_1 + 0x10,local_50,uVar7);
        }
        uVar8 = uVar7 + 1;
        if ((int)(uVar7 + 1) < (int)uVar9) {
          uVar8 = uVar9;
        }
        do {
          uVar4 = uVar8;
          if (uVar8 - 1 == uVar7) break;
          uVar7 = uVar7 + 1;
          uVar4 = uVar7;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar10 + 0x28) +
                                               (ulonglong)(uVar7 >> 9) * 8) +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        uVar7 = uVar4;
      } while (uVar7 != uVar9);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482b39f8 FUN_1482b39f8 body=999 status=ok
// SIG undefined FUN_1482b39f8(void)

undefined8
FUN_1482b39f8(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  double *pdVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_158 [32];
  double *local_138;
  double *local_130;
  double *local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = (double *)param_5;
  FUN_146c1477c(*(undefined8 *)(param_1 + 8),param_3,param_4,param_6);
  lVar6 = *(longlong *)(param_1 + 0x218);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar6 + 0x70) == '\0') {
      local_40 = DAT_14c846378;
      local_48 = DAT_14c846370;
      local_58 = DAT_14c846370;
      local_50 = DAT_14c846378;
      local_88 = DAT_14c846370;
      local_60 = DAT_14c846378;
    }
    else {
      lVar7 = *(longlong *)(lVar6 + 0x60);
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
      uVar10 = (ulonglong)(param_3 & 0x1ff);
      uVar3 = *(uint *)(lVar6 + 8 + uVar10 * 0xc);
      uVar4 = *(uint *)(lVar6 + uVar10 * 0xc);
      uVar5 = *(uint *)(lVar6 + 4 + uVar10 * 0xc);
      lVar6 = *(longlong *)(lVar7 + (ulonglong)(uVar4 >> 9) * 8);
      uVar10 = (ulonglong)uVar4 & 0x1ff;
      local_48 = *(double *)(lVar6 + uVar10 * 0xc);
      local_40 = *(float *)(lVar6 + 8 + uVar10 * 0xc);
      lVar6 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
      uVar10 = (ulonglong)uVar5 & 0x1ff;
      local_58 = *(double *)(lVar6 + uVar10 * 0xc);
      local_50 = *(float *)(lVar6 + 8 + uVar10 * 0xc);
      lVar6 = *(longlong *)(lVar7 + (ulonglong)(uVar3 >> 9) * 8);
      uVar10 = (ulonglong)uVar3 & 0x1ff;
      local_60 = *(float *)(lVar6 + 8 + uVar10 * 0xc);
      local_88 = *(double *)(lVar6 + uVar10 * 0xc);
    }
    local_68 = local_88;
  }
  else if (*(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x78) + (ulonglong)(param_3 * 3 >> 9) * 8) +
                   (ulonglong)(param_3 * 3 & 0x1ff) * 4) < 0) {
    FUN_146c13dec(*(undefined8 *)(param_1 + 8),&local_88,param_3);
    local_60 = (float)local_78;
    local_68 = (double)CONCAT44((float)dStack_80,(float)local_88);
    local_58 = local_68;
    local_50 = local_60;
    local_48 = local_58;
    local_40 = local_60;
  }
  else {
    local_138 = (double *)&local_68;
    FUN_146c3574a(lVar6,param_3,&local_48,&local_58);
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  lVar7 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar9 = (ulonglong)(param_3 & 0x1ff);
  uVar3 = *(uint *)(lVar7 + uVar9 * 0xc);
  lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
  uVar10 = (ulonglong)uVar3 & 0x1ff;
  local_78 = *(double *)(lVar8 + 0x10 + uVar10 * 0x18);
  pdVar1 = (double *)(lVar8 + uVar10 * 0x18);
  local_88 = *pdVar1;
  dStack_80 = pdVar1[1];
  uVar3 = *(uint *)(lVar7 + 4 + uVar9 * 0xc);
  lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
  uVar10 = (ulonglong)uVar3 & 0x1ff;
  local_98 = *(undefined8 *)(lVar8 + 0x10 + uVar10 * 0x18);
  puVar2 = (undefined8 *)(lVar8 + uVar10 * 0x18);
  local_a8 = *puVar2;
  uStack_a0 = puVar2[1];
  uVar3 = *(uint *)(lVar7 + 8 + uVar9 * 0xc);
  lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
  uVar10 = (ulonglong)uVar3 & 0x1ff;
  local_b8 = *(undefined8 *)(lVar6 + 0x10 + uVar10 * 0x18);
  puVar2 = (undefined8 *)(lVar6 + uVar10 * 0x18);
  local_c8 = *puVar2;
  uStack_c0 = puVar2[1];
  local_d0 = (double)local_40;
  local_d8 = (double)local_48._4_4_;
  local_e0 = (double)(float)local_48;
  local_138 = &local_e0;
  local_e8 = (double)local_50;
  local_f0 = (double)local_58._4_4_;
  local_f8 = (double)(float)local_58;
  local_130 = &local_f8;
  local_100 = (double)local_60;
  local_108 = (double)local_68._4_4_;
  local_110 = (double)(float)local_68;
  local_128 = &local_110;
  local_118 = param_5;
  local_120 = param_4;
  FUN_1482b3de0(param_2);
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b3de0 FUN_1482b3de0 body=1413 status=ok
// SIG undefined FUN_1482b3de0(void)

double * FUN_1482b3de0(double *param_1,double *param_2,double *param_3,double *param_4,
                      longlong param_5,longlong param_6,longlong param_7,double *param_8,
                      double *param_9)

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
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1f8 [40];
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double *local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
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
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_188 = param_2;
  FUN_1482c6f26(param_1,param_8,param_9);
  pdVar11 = local_188;
  dVar1 = param_8[1];
  param_1[10] = *param_8;
  param_1[0xb] = dVar1;
  param_1[0xc] = param_8[2];
  param_1[0xd] = -(param_8[2] * param_9[2] + *param_8 * *param_9 + param_8[1] * param_9[1]);
  param_1[0xe] = 0.0;
  param_1[0xf] = (double)&DAT_4030000000000000;
  local_110 = param_3[2] - local_188[2];
  local_118 = param_3[1] - local_188[1];
  local_120 = *param_3 - *local_188;
  local_128 = param_4[2] - local_188[2];
  local_130 = param_4[1] - local_188[1];
  local_138 = *param_4 - *local_188;
  local_108 = *param_8;
  dStack_100 = param_8[1];
  local_f8 = param_8[2];
  if (1e-08 < ABS((local_130 * local_110 - local_128 * local_118) * local_108 +
                  ((local_f8 * local_118 - local_110 * dStack_100) * local_138 -
                  (local_f8 * local_130 - dStack_100 * local_128) * local_120))) {
    FUN_1482e52fc(&local_138,&local_180);
    dVar1 = *param_1;
    dVar2 = param_1[1];
    dVar3 = param_1[2];
    dVar4 = param_1[3];
    dVar5 = param_1[4];
    dVar6 = param_1[5];
    dVar7 = param_1[6];
    lVar12 = -9;
    lVar13 = 0;
    local_1c8 = local_140 * 0.0;
    local_1d0 = local_158 * 0.0;
    local_1c0 = local_170 * 0.0;
    dVar8 = param_1[7];
    dVar14 = param_1[8];
    dVar17 = param_1[9];
    do {
      dVar18 = *(double *)(param_5 + lVar13) * 16.0;
      dVar16 = *(double *)(param_6 + lVar13) * 16.0 - dVar18;
      dVar15 = *(double *)(param_7 + lVar13) * 16.0 - dVar18;
      dVar10 = local_150 * dVar15 + local_148 * dVar16 + local_1c8;
      dVar9 = local_168 * dVar15 + local_160 * dVar16 + local_1d0;
      dVar16 = dVar15 * local_180 + dVar16 * local_178 + local_1c0;
      param_1[lVar12 + 0x19] = dVar16;
      param_1[lVar12 + 0x1a] = dVar9;
      param_1[lVar12 + 0x1b] = dVar10;
      dVar18 = dVar18 - (pdVar11[2] * dVar10 + *pdVar11 * dVar16 + dVar9 * pdVar11[1]);
      *(double *)((longlong)param_1 + lVar13 + 200) = dVar18;
      dVar1 = dVar1 + dVar16 * dVar16;
      *param_1 = dVar1;
      dVar9 = param_1[lVar12 + 0x1a];
      dVar2 = dVar2 + dVar16 * dVar9;
      dVar3 = dVar3 + dVar16 * dVar10;
      dVar4 = dVar4 + dVar9 * dVar9;
      dVar5 = dVar5 + dVar9 * dVar10;
      dVar6 = dVar6 + dVar10 * dVar10;
      dVar7 = dVar7 + dVar16 * dVar18;
      dVar8 = dVar8 + dVar18 * dVar9;
      dVar14 = dVar14 + dVar18 * dVar10;
      dVar17 = dVar17 + dVar18 * dVar18;
      param_1[1] = dVar2;
      param_1[2] = dVar3;
      param_1[3] = dVar4;
      param_1[4] = dVar5;
      param_1[5] = dVar6;
      param_1[6] = dVar7;
      param_1[7] = dVar8;
      param_1[8] = dVar14;
      param_1[9] = dVar17;
      lVar13 = lVar13 + 8;
      lVar12 = lVar12 + 3;
    } while (lVar13 != 0x18);
  }
  else {
    lVar12 = -9;
    lVar13 = 0;
    do {
      dVar2 = DAT_14c8464e8;
      dVar1 = DAT_14c8464e0;
      param_1[lVar12 + 0x1b] = DAT_14c8464f0;
      param_1[lVar12 + 0x19] = dVar1;
      (param_1 + lVar12 + 0x19)[1] = dVar2;
      *(double *)((longlong)param_1 + lVar13 + 200) =
           ((*(double *)(param_5 + lVar13) + *(double *)(param_6 + lVar13) +
            *(double *)(param_7 + lVar13)) * 16.0) / 3.0;
      lVar13 = lVar13 + 8;
      lVar12 = lVar12 + 3;
    } while (lVar13 != 0x18);
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1482b4366 FUN_1482b4366 body=2410 status=ok
// SIG undefined FUN_1482b4366(void)

ulonglong FUN_1482b4366(longlong param_1,uint param_2,uint param_3,uint param_4,double param_5,
                       longlong *param_6,longlong *param_7)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  longlong lVar12;
  bool bVar13;
  double dVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong unaff_RBP;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_1b8 [32];
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  longlong **local_140;
  undefined1 local_131;
  longlong *local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  uint local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  plVar15 = param_6;
  dVar14 = param_5;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar20 = *(ulonglong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) + 8 +
            (ulonglong)((param_2 & 0x1ff) << 4));
  lVar10 = *param_6;
  dVar11 = *(double *)(lVar10 + 0x10 + (longlong)(int)uVar20 * 0x18);
  pdVar1 = (double *)(lVar10 + (longlong)(int)uVar20 * 0x18);
  local_108 = *pdVar1;
  dVar5 = pdVar1[1];
  dStack_100 = dVar5;
  local_f8 = dVar11;
  if (uVar20 < 0xffffffff00000000) {
    lVar19 = *param_7;
    if (*(char *)(lVar19 + (int)param_3) != '\0') {
      uVar20 = 0;
      goto LAB_1482b4534;
    }
    lVar19 = (longlong)uVar20 >> 0x20;
    dVar2 = *(double *)(lVar10 + lVar19 * 0x18);
    dVar3 = *(double *)(lVar10 + 8 + lVar19 * 0x18);
    dVar4 = *(double *)(lVar10 + 0x10 + lVar19 * 0x18);
    if (dVar11 * dVar4 + local_108 * dVar2 + dVar3 * dVar5 <= param_5) {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_3 >> 9) * 8);
      uVar20 = (ulonglong)(param_3 & 0x1ff);
      local_190 = *(double *)(lVar10 + uVar20 * 0x18);
      local_160 = *(double *)(lVar10 + 8 + uVar20 * 0x18);
      local_168 = *(double *)(lVar10 + 0x10 + uVar20 * 0x18);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_4 >> 9) * 8);
      uVar20 = (ulonglong)(param_4 & 0x1ff);
      dVar28 = *(double *)(lVar10 + 0x10 + uVar20 * 0x18) - local_168;
      local_198 = *(double *)(lVar10 + 8 + uVar20 * 0x18) - local_160;
      dVar25 = *(double *)(lVar10 + uVar20 * 0x18) - local_190;
      dVar26 = SQRT(dVar28 * dVar28 + dVar25 * dVar25 + local_198 * local_198);
      dVar27 = 1.0 / dVar26;
      if (0.0 < dVar26) {
        dVar25 = dVar25 * dVar27;
        local_198 = local_198 * dVar27;
      }
      else {
        dVar25 = 0.0;
        local_198 = 0.0;
      }
      plVar16 = (longlong *)(param_1 + 0xb8);
      uVar20 = 0;
      local_188 = dVar4;
      local_180 = dVar3;
      local_178 = dVar2;
      local_170 = local_108;
      FUN_146be983e(&local_130,plVar16,param_3,0);
      if (((local_130 != plVar16) || ((uint)local_128 != param_3)) ||
         (((int)local_118 != -1 || (plVar17 = param_7, local_118._4_4_ != -1)))) {
        local_158 = (double)(-(ulonglong)(0.0 < dVar26) & (ulonglong)(dVar28 * dVar27));
        uStack_150 = 0;
        iVar24 = 0;
        plVar17 = local_130;
        uVar18 = (uint)local_128;
        do {
          if (local_110 != param_2) {
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_110 >> 9) * 8)
            ;
            uVar23 = *(ulonglong *)(lVar10 + 8 + (ulonglong)((local_110 & 0x1ff) << 4));
            if (0xfffffffeffffffff < uVar23) goto LAB_1482b460a;
            uVar22 = *(ulonglong *)(lVar10 + (ulonglong)((local_110 & 0x1ff) << 4));
            uVar21 = 0xffffffff;
            if ((uint)(uVar22 >> 0x20) == param_3) {
              uVar21 = uVar22 & 0xffffffff;
            }
            if ((uint)uVar22 == param_3) {
              uVar21 = uVar22 >> 0x20;
            }
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar21 >> 9) * 8);
            uVar22 = (ulonglong)((uint)uVar21 & 0x1ff);
            dVar27 = local_168 - *(double *)(lVar10 + 0x10 + uVar22 * 0x18);
            dVar4 = local_160 - *(double *)(lVar10 + 8 + uVar22 * 0x18);
            dVar26 = local_190 - *(double *)(lVar10 + uVar22 * 0x18);
            dVar3 = SQRT(dVar27 * dVar27 + dVar26 * dVar26 + dVar4 * dVar4);
            dVar2 = 1.0 / dVar3;
            if (0.0 < dVar3) {
              dVar27 = dVar27 * dVar2;
              dVar4 = dVar4 * dVar2;
            }
            else {
              dVar27 = 0.0;
              dVar4 = 0.0;
            }
            lVar10 = *plVar15;
            lVar19 = (longlong)(int)uVar23;
            dVar28 = *(double *)(lVar10 + lVar19 * 0x18);
            dVar29 = *(double *)(lVar10 + 8 + lVar19 * 0x18);
            dVar6 = *(double *)(lVar10 + 0x10 + lVar19 * 0x18);
            lVar19 = (longlong)uVar23 >> 0x20;
            dVar7 = *(double *)(lVar10 + lVar19 * 0x18);
            dVar8 = *(double *)(lVar10 + 8 + lVar19 * 0x18);
            dVar9 = *(double *)(lVar10 + 0x10 + lVar19 * 0x18);
            if (dVar27 * local_158 +
                (double)(-(ulonglong)(0.0 < dVar3) & (ulonglong)(dVar26 * dVar2)) * dVar25 +
                dVar4 * local_198 <= dVar14) {
              if (dVar6 * dVar9 + dVar28 * dVar7 + dVar29 * dVar8 <= dVar14) {
                uVar20 = (ulonglong)((int)uVar20 + 1);
              }
            }
            else if (((dVar14 < dVar6 * dVar11 + dVar28 * local_170 + dVar5 * dVar29) &&
                     (dVar14 < dVar9 * local_188 + dVar7 * local_178 + local_180 * dVar8)) ||
                    ((dVar14 < dVar6 * local_188 + dVar28 * local_178 + dVar29 * local_180 &&
                     (dVar14 < dVar9 * dVar11 + dVar7 * local_170 + dVar8 * dVar5)))) {
              iVar24 = iVar24 + 1;
            }
          }
          if ((int)local_120 == 0) {
            local_128 = (double *)CONCAT44(0xffffffff,(uint)local_128);
            local_118 = (undefined1 *)0xffffffffffffffff;
            local_118._4_4_ = -1;
            local_118._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_130);
            plVar17 = local_130;
            uVar18 = (uint)local_128;
          }
        } while ((((plVar17 != plVar16) || (uVar18 != param_3)) || ((int)local_118 != -1)) ||
                (local_118._4_4_ != -1));
        uVar20 = CONCAT71((int7)(uVar20 >> 8),iVar24 == 1 && (int)uVar20 == 0);
        plVar17 = param_7;
      }
    }
    else {
LAB_1482b44df:
      plVar17 = param_7;
      local_118 = &local_131;
      local_131 = 1;
      local_140 = &local_130;
      local_130 = plVar15;
      local_128 = &local_108;
      local_120 = &param_5;
      local_148 = &LAB_143b02ab8;
      FUN_146c03fd0(param_1,param_3);
      uVar20 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_131);
    }
  }
  else {
    plVar17 = (longlong *)(param_1 + 0xb8);
    FUN_146be983e(&local_130,plVar17,param_3,0);
    if ((((local_130 == plVar17) && ((uint)local_128 == param_3)) && ((int)local_118 == -1)) &&
       (local_118._4_4_ == -1)) {
LAB_1482b460a:
      uVar20 = 0;
      plVar17 = param_7;
    }
    else {
      local_198 = (double)(ulonglong)(param_4 >> 9);
      uVar23 = (ulonglong)(param_4 & 0x1ff);
      local_190 = (double)(ulonglong)(param_3 >> 9);
      uVar20 = (ulonglong)(param_3 & 0x1ff);
      bVar13 = false;
      unaff_RBP = uVar20 * 3;
      plVar16 = local_130;
      uVar18 = (uint)local_128;
      do {
        if (local_110 != param_2) {
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_110 >> 9) * 8);
          if (*(int *)(lVar10 + 0xc + (ulonglong)((local_110 & 0x1ff) << 4)) == -1) {
            if (bVar13) goto LAB_1482b460a;
            lVar19 = *(longlong *)(param_1 + 0x10);
            lVar12 = *(longlong *)(lVar19 + (longlong)local_190 * 8);
            dVar11 = *(double *)(lVar12 + uVar20 * 0x18);
            dVar5 = *(double *)(lVar12 + 8 + uVar20 * 0x18);
            uVar22 = *(ulonglong *)(lVar10 + (ulonglong)((local_110 & 0x1ff) << 4));
            uVar21 = 0xffffffff;
            if ((uint)(uVar22 >> 0x20) == param_3) {
              uVar21 = uVar22 & 0xffffffff;
            }
            dVar2 = *(double *)(lVar12 + 0x10 + uVar20 * 0x18);
            if ((uint)uVar22 == param_3) {
              uVar21 = uVar22 >> 0x20;
            }
            lVar10 = *(longlong *)(lVar19 + (uVar21 >> 9) * 8);
            uVar22 = (ulonglong)((uint)uVar21 & 0x1ff);
            dVar25 = dVar2 - *(double *)(lVar10 + 0x10 + uVar22 * 0x18);
            dVar27 = dVar5 - *(double *)(lVar10 + 8 + uVar22 * 0x18);
            dVar26 = dVar11 - *(double *)(lVar10 + uVar22 * 0x18);
            dVar3 = SQRT(dVar25 * dVar25 + dVar26 * dVar26 + dVar27 * dVar27);
            dVar4 = 1.0 / dVar3;
            if (0.0 < dVar3) {
              dVar25 = dVar25 * dVar4;
              dVar27 = dVar27 * dVar4;
            }
            else {
              dVar27 = 0.0;
              dVar25 = 0.0;
            }
            lVar10 = *(longlong *)(lVar19 + (longlong)local_198 * 8);
            dVar2 = *(double *)(lVar10 + 0x10 + uVar23 * 0x18) - dVar2;
            dVar5 = *(double *)(lVar10 + 8 + uVar23 * 0x18) - dVar5;
            dVar11 = *(double *)(lVar10 + uVar23 * 0x18) - dVar11;
            dVar28 = SQRT(dVar2 * dVar2 + dVar11 * dVar11 + dVar5 * dVar5);
            dVar29 = 1.0 / dVar28;
            if (0.0 < dVar28) {
              dVar2 = dVar2 * dVar29;
              dVar5 = dVar5 * dVar29;
            }
            else {
              dVar5 = 0.0;
              dVar2 = 0.0;
            }
            bVar13 = true;
            if ((double)(-(ulonglong)(0.0 < dVar28) & (ulonglong)(dVar11 * dVar29)) *
                (double)(-(ulonglong)(0.0 < dVar3) & (ulonglong)(dVar26 * dVar4)) + dVar5 * dVar27 +
                dVar25 * dVar2 <= dVar14) goto LAB_1482b460a;
          }
        }
        if ((int)local_120 == 0) {
          local_128 = (double *)CONCAT44(0xffffffff,(uint)local_128);
          local_118 = (undefined1 *)0xffffffffffffffff;
          local_118._4_4_ = -1;
          local_118._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_130);
          plVar16 = local_130;
          uVar18 = (uint)local_128;
        }
      } while (((plVar16 != plVar17) || (uVar18 != param_3)) ||
              (((int)local_118 != -1 || (local_118._4_4_ != -1))));
      if (bVar13) goto LAB_1482b44df;
      uVar20 = 0;
      plVar17 = param_7;
    }
  }
  lVar19 = *plVar17;
LAB_1482b4534:
  if (lVar19 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 1482b4cd2 FUN_1482b4cd2 body=441 status=ok
// SIG undefined FUN_1482b4cd2(void)

void FUN_1482b4cd2(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined8 uStack_70;
  float local_5c [2];
  uint local_54;
  double local_50;
  double local_48;
  double local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (longlong)param_2 * 0x100 + *(longlong *)(param_1 + 0x220);
  local_28 = *(undefined8 *)(lVar2 + 0xf8);
  local_38 = *(undefined4 *)(lVar2 + 0xe8);
  uStack_34 = *(undefined4 *)(lVar2 + 0xec);
  uStack_30 = *(undefined4 *)(lVar2 + 0xf0);
  uStack_2c = *(undefined4 *)(lVar2 + 0xf4);
  FUN_1482b4e8c(lVar2 + 8,&local_38,&local_50);
  fVar6 = (float)local_40;
  local_5c[1] = (float)local_48;
  local_5c[0] = (float)local_50;
  fVar7 = SQRT(fVar6 * fVar6 + local_5c[0] * local_5c[0] + local_5c[1] * local_5c[1]);
  fVar8 = 1.0 / fVar7;
  if (0.0 < fVar7) {
    local_5c[0] = local_5c[0] * fVar8;
    local_5c[1] = local_5c[1] * fVar8;
  }
  else {
    local_5c[0] = 0.0;
    local_5c[1] = 0.0;
  }
  local_54 = -(uint)(0.0 < fVar7) & (uint)(fVar6 * fVar8);
  if (*(longlong *)(param_1 + 0x218) == 0) {
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x70) == '\x01') {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) + (ulonglong)(param_3 >> 9) * 8);
      *(uint *)(lVar2 + 8 + (ulonglong)(param_3 & 0x1ff) * 0xc) = local_54;
      *(ulonglong *)(lVar2 + (ulonglong)(param_3 & 0x1ff) * 0xc) = CONCAT44(local_5c[1],local_5c[0])
      ;
    }
  }
  else {
    local_78 = (int *)0x0;
    uStack_70 = 0;
    FUN_146c31768(*(longlong *)(param_1 + 0x218),param_3,&local_78);
    if (((longlong)(int)uStack_70 < 2) && ((int)uStack_70 != 0)) {
      piVar3 = local_78;
      do {
        iVar1 = *piVar3;
        lVar2 = *(longlong *)(param_1 + 0x218);
        lVar4 = 0;
        do {
          uVar5 = iVar1 * 3 + (int)lVar4;
          *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar5 >> 9) * 8) +
                    (ulonglong)(uVar5 & 0x1ff) * 4) = local_5c[lVar4];
          lVar4 = lVar4 + 1;
        } while (lVar4 != 3);
        piVar3 = piVar3 + 1;
      } while (piVar3 != local_78 + (int)uStack_70);
    }
    if (local_78 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482b4e8c FUN_1482b4e8c body=319 status=ok
// SIG undefined FUN_1482b4e8c(void)

void FUN_1482b4e8c(longlong param_1,double *param_2,double *param_3)

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
  
  dVar9 = *(double *)(param_1 + 0x70);
  if (ABS(dVar9) <= 1e-05) {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar7 = *(double *)(param_1 + 0x90) * param_2[2] +
            *(double *)(param_1 + 0x80) * *param_2 + *(double *)(param_1 + 0x88) * param_2[1] +
            *(double *)(param_1 + 200);
    *param_3 = dVar7;
    dVar9 = 1.0 / dVar9;
    dVar8 = *(double *)(param_1 + 0xa8) * param_2[2] +
            *(double *)(param_1 + 0x98) * *param_2 + *(double *)(param_1 + 0xa0) * param_2[1] +
            *(double *)(param_1 + 0xd0);
    param_3[1] = dVar8;
    dVar10 = *(double *)(param_1 + 0xb8);
    dVar1 = param_2[1];
    dVar2 = *(double *)(param_1 + 0xb0);
    dVar3 = *param_2;
    dVar4 = *(double *)(param_1 + 0xc0);
    dVar5 = param_2[2];
    dVar6 = *(double *)(param_1 + 0xd8);
    dVar7 = dVar7 * dVar9;
    *param_3 = dVar7;
    dVar8 = dVar8 * dVar9;
    param_3[1] = dVar8;
    dVar9 = (dVar4 * dVar5 + dVar2 * dVar3 + dVar10 * dVar1 + dVar6) * dVar9;
    param_3[2] = dVar9;
  }
  dVar10 = 1.0 / *(double *)(param_1 + 0x78);
  *param_3 = dVar7 * dVar10;
  param_3[1] = dVar8 * dVar10;
  param_3[2] = dVar10 * dVar9;
  return;
}



// FUNCTION 1482b4fcc FUN_1482b4fcc body=372 status=ok
// SIG undefined FUN_1482b4fcc(void)

undefined8 * FUN_1482b4fcc(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x129) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131) = 0;
  *(undefined2 *)((longlong)param_1 + 0x139) = 1;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3e45798ee0000000;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_14ae72910;
  param_1[0x2a] = 0x1010000000000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x7f7fffff;
  param_1[0x2f] = 0x7fefffffffffffff;
  param_1[0x30] = 0x7fffffff;
  param_1[0x31] = 0;
  param_1[0x32] = 0x4070000000000000;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  FUN_146c3f08a(param_1 + 0x46);
  param_1[0x43] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x38) < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined8 **)(lVar1 + 0x30);
    }
    param_1[0x43] = uVar2;
  }
  return param_1;
}



// FUNCTION 1482b5140 FUN_1482b5140 body=61 status=ok
// SIG undefined FUN_1482b5140(void)

void FUN_1482b5140(longlong *param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  iVar1 = 1;
  if (1 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  param_1[0x2f] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0x7f7fffff;
                    /* WARNING: Could not recover jumptable at 0x0001482b5179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



// FUNCTION 1482b517e FUN_1482b517e body=61 status=ok
// SIG undefined FUN_1482b517e(void)

void FUN_1482b517e(longlong *param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x184) = 1;
  iVar1 = 3;
  if (3 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  param_1[0x2f] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0x7f7fffff;
                    /* WARNING: Could not recover jumptable at 0x0001482b51b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



// FUNCTION 1482b521c FUN_1482b521c body=3033 status=ok
// SIG undefined FUN_1482b521c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1482b521c(undefined1 *****param_1,double param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined1 **ppuVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  size_t sVar14;
  undefined1 ****ppppuVar15;
  uint uVar16;
  uint uVar17;
  undefined1 uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_368 [32];
  undefined8 ****local_348;
  undefined8 ****local_340;
  undefined8 *****local_338;
  undefined1 local_329;
  undefined1 ****local_328;
  int local_320;
  int local_31c;
  code *local_318;
  undefined8 *****local_310;
  undefined1 *local_308;
  undefined1 *puStack_300;
  undefined1 *local_2f8;
  undefined8 ****local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  undefined1 *local_2d8;
  undefined1 *puStack_2d0;
  undefined1 *local_2c8;
  undefined8 ****local_2c0;
  int local_2b8;
  undefined4 local_2b4;
  int local_2b0 [2];
  undefined8 local_2a8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  uint *local_278;
  undefined8 uStack_270;
  undefined8 ****local_260;
  undefined1 *local_258;
  undefined8 uStack_250;
  undefined8 ****local_248;
  undefined8 uStack_240;
  undefined1 *****local_230;
  undefined8 *****local_228;
  undefined1 *****local_220;
  undefined8 ****local_218;
  int *local_210;
  undefined8 ****local_208;
  int *local_200;
  undefined1 *local_1f8;
  undefined8 *****local_1f0;
  int local_1e4 [2];
  undefined1 local_1dc [4];
  undefined8 ****local_1d8 [3];
  undefined8 ****local_1c0 [3];
  undefined8 ****local_1a8;
  undefined8 ****local_1a0;
  undefined8 ****local_198;
  undefined8 *****local_190;
  int local_180;
  int local_17c;
  longlong local_168;
  longlong *local_158;
  longlong local_148 [4];
  undefined1 *****local_128;
  undefined8 local_120;
  undefined8 ****local_118;
  undefined8 local_110;
  undefined1 *****local_108;
  undefined8 *****local_100;
  undefined8 ****local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined1 *****local_b8;
  undefined8 *****local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (*(int *)(param_1[1] + 0x2e) != 0) {
    uVar18 = *(undefined1 *)((longlong)param_1 + 0x155);
    *(undefined1 *)((longlong)param_1 + 0x155) = 0;
    local_248 = (undefined8 ****)0x0;
    uStack_240 = 0;
    local_258 = (undefined1 *)0x0;
    uStack_250 = 0;
    (*(code *)(*param_1)[0x1b])();
    (*(code *)(*param_1)[0x1f])(param_1);
    FUN_1482b5df6(param_1,0);
    cVar5 = (*(code *)(*param_1)[1])(param_1);
    if (cVar5 == '\0') {
      FUN_14051b394(&local_248,
                    *(int *)(param_1[1] + 0x28) * 0x200 + *(int *)((longlong)param_1[1] + 0x144),1);
      local_190 = &local_b8;
      local_128 = (undefined1 *****)0x0;
      local_120 = (undefined1 *****)((ulonglong)local_120 & 0xffffffff00000000);
      local_198 = (undefined8 ****)&LAB_14830029e;
      local_340 = (undefined8 ****)((ulonglong)local_340 & 0xffffffff00000000);
      local_338 = &local_128;
      local_b8 = param_1;
      local_b0 = &local_248;
      FUN_1401f8d10(L"ParallelFor Task",
                    *(int *)(param_1[1] + 0x28) * 0x200 + *(int *)((longlong)param_1[1] + 0x144),1,
                    &local_198);
      cVar5 = (*(code *)(*param_1)[1])(param_1);
      if (cVar5 == '\0') {
        FUN_1448c4dd6(&local_258,
                      *(int *)(param_1[1] + 4) * 0x200 + *(int *)((longlong)param_1[1] + 0x24),1);
        local_260 = (undefined8 ****)cos(param_2 * 0.017453292519943295);
        local_118 = &local_260;
        local_198 = (undefined8 ****)0x0;
        local_190 = (undefined8 *****)((ulonglong)local_190 & 0xffffffff00000000);
        local_b8 = (undefined1 *****)&LAB_148300350;
        local_340 = (undefined8 ****)((ulonglong)local_340 & 0xffffffff00000000);
        local_338 = &local_198;
        local_128 = param_1;
        local_120 = (undefined1 *****)&local_258;
        local_110 = &local_248;
        local_b0 = &local_128;
        FUN_1401f8d10(L"ParallelFor Task",
                      *(int *)(param_1[1] + 4) * 0x200 + *(int *)((longlong)param_1[1] + 0x24),1);
        cVar5 = (*(code *)(*param_1)[1])(param_1);
        if (cVar5 == '\0') {
          (*(code *)(*param_1)[0x20])(param_1);
          (*(code *)(*param_1)[0x1d])(param_1);
          (*(code *)(*param_1)[0x23])(param_1);
          local_278 = (uint *)0x0;
          uStack_270 = 0;
          local_329 = uVar18;
          iVar7 = 0;
LAB_1482b548f:
          local_31c = iVar7;
          bVar22 = (longlong)uStack_270 < 0;
          uStack_270 = uStack_270 & 0xffffffff00000000;
          if (bVar22) {
            FUN_14481578e(&local_278,0);
          }
          ppppuVar15 = param_1[1];
          uVar16 = *(int *)(ppppuVar15 + 0x3a) * 0x200 + *(int *)((longlong)ppppuVar15 + 0x1d4);
          uVar21 = 0;
          if ((uVar16 != 0) && (uVar21 = 0, 0xfffd < (ushort)(*(short *)*ppppuVar15[0x3b] - 1U))) {
            uVar6 = 1;
            uVar20 = 1;
            if (1 < (int)uVar16) {
              uVar6 = uVar16;
            }
            do {
              uVar21 = uVar6;
              if (uVar6 == uVar20) break;
              uVar11 = uVar20 >> 9;
              uVar17 = uVar20 & 0x1ff;
              uVar21 = uVar20;
              uVar20 = uVar20 + 1;
            } while (0xfffd < (ushort)(*(short *)((longlong)ppppuVar15[0x3b][uVar11] +
                                                 (ulonglong)uVar17 * 2) - 1U));
          }
LAB_1482b55fd:
          if (uVar21 != uVar16) {
            local_128 = (undefined1 *****)CONCAT44(local_128._4_4_,uVar21);
            cVar5 = (*(code *)*param_3)(param_3[1],&local_128);
            uVar3 = uStack_270;
            if ((cVar5 != '\0') &&
               ((lVar13 = *(longlong *)
                           ((longlong)param_1[1][0x38][uVar21 >> 9] +
                           (ulonglong)((uVar21 & 0x1ff) << 4)), local_258[(int)lVar13] != '\0' ||
                (local_258[lVar13 >> 0x20] == '\x01')))) {
              lVar13 = (longlong)(int)uStack_270;
              uVar6 = (int)uStack_270 + 1;
              uStack_270 = CONCAT44(uStack_270._4_4_,uVar6);
              if (uStack_270._4_4_ < uVar6) {
                FUN_1446f48e2(&local_278,uVar3 & 0xffffffff);
              }
              local_278[lVar13] = uVar21;
            }
            uVar6 = uVar21 + 1;
            if ((int)(uVar21 + 1) < (int)uVar16) {
              uVar6 = uVar16;
            }
            uVar20 = uVar21;
            do {
              uVar21 = uVar6;
              if (uVar6 - 1 == uVar20) break;
              uVar21 = uVar20 + 1;
              uVar20 = uVar21;
            } while (0xfffd < (ushort)(*(short *)((longlong)ppppuVar15[0x3b][uVar21 >> 9] +
                                                 (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
            goto LAB_1482b55fd;
          }
          if ((longlong)(int)uStack_270 != 0) {
            puVar1 = local_278 + (int)uStack_270;
            local_320 = 0;
            puVar19 = local_278;
            iVar12 = local_31c;
LAB_1482b562f:
            uVar21 = *puVar19;
            if ((-1 < (int)uVar21) &&
               (ppppuVar15 = param_1[1],
               (int)uVar21 <
               *(int *)(ppppuVar15 + 0x3a) * 0x200 + *(int *)((longlong)ppppuVar15 + 0x1d4))) {
              if (0xfffd < (ushort)(*(short *)((longlong)ppppuVar15[0x3b][uVar21 >> 9] +
                                              (ulonglong)(uVar21 & 0x1ff) * 2) - 1U))
              goto LAB_1482b5709;
              cVar5 = (*(code *)(*param_1)[1])(param_1);
              if (cVar5 != '\0') goto LAB_1482b5ab7;
              *(int *)((longlong)param_1 + 0x284) = *(int *)((longlong)param_1 + 0x284) + 1;
              ppppuVar15 = param_1[1];
              uVar3 = *(ulonglong *)
                       ((longlong)ppppuVar15[0x38][uVar21 >> 9] + (ulonglong)((uVar21 & 0x1ff) << 4)
                       );
              local_2a8 = 0xffffffffffffffff;
              local_288 = 0xffffffffffffffff;
              local_298 = 0xffffffff;
              uStack_294 = 0xffffffff;
              uStack_290 = 0xffffffff;
              uStack_28c = 0xffffffff;
              uVar6 = (uint)uVar3;
              uVar16 = (uint)(uVar3 >> 0x20);
              if (local_258[(int)uVar6] == '\x01') {
                local_2c0 = (undefined8 ****)0x0;
                local_2b8 = *(int *)(param_1 + 0x4f);
                sVar14 = (size_t)local_2b8;
                if (sVar14 == 0) {
                  local_2b4 = 0;
                }
                else {
                  local_328 = param_1[0x4e];
                  FUN_1447cd5fa(&local_2c0,local_2b8,0);
                  memcpy(local_2c0,local_328,sVar14);
                  ppppuVar15 = param_1[1];
                }
                local_338 = &local_2c0;
                local_340 = &local_248;
                local_348 = local_260;
                cVar5 = FUN_1482b4366(ppppuVar15,uVar21,uVar3 & 0xffffffff,uVar3 >> 0x20);
                if (cVar5 != '\0') {
                  uVar9 = (ulonglong)(uVar16 & 0x1ff);
                  local_2c8 = param_1[1][2][uVar3 >> 0x29][uVar9 * 3 + 2];
                  ppuVar2 = param_1[1][2][uVar3 >> 0x29] + uVar9 * 3;
                  local_2d8 = *ppuVar2;
                  puStack_2d0 = ppuVar2[1];
                  local_348 = (undefined8 ****)CONCAT44(local_348._4_4_,uVar16);
                  iVar7 = FUN_1482b5fd4(param_1,uVar21,&local_2d8,local_2b0);
                  if (iVar7 == 0) goto LAB_1482b5bba;
                }
              }
              iVar12 = local_31c;
              if (local_258[(longlong)uVar3 >> 0x20] == '\x01') {
                local_2e8 = (undefined8 ****)0x0;
                local_2e0 = *(int *)(param_1 + 0x4f);
                sVar14 = (size_t)local_2e0;
                if (sVar14 == 0) {
                  local_2dc = 0;
                }
                else {
                  local_328 = param_1[0x4e];
                  FUN_1447cd5fa(&local_2e8,local_2e0,0);
                  memcpy(local_2e8,local_328,sVar14);
                }
                local_338 = &local_2e8;
                local_340 = &local_248;
                local_348 = local_260;
                cVar5 = FUN_1482b4366(param_1[1],uVar21,uVar3 >> 0x20,uVar3 & 0xffffffff);
                iVar12 = local_31c;
                if (cVar5 != '\0') {
                  local_2f8 = param_1[1][2][uVar3 >> 9 & 0x7fffff]
                              [(ulonglong)(uVar6 & 0x1ff) * 3 + 2];
                  ppuVar2 = param_1[1][2][uVar3 >> 9 & 0x7fffff] + (ulonglong)(uVar6 & 0x1ff) * 3;
                  local_308 = *ppuVar2;
                  puStack_300 = ppuVar2[1];
                  local_348 = (undefined8 ****)CONCAT44(local_348._4_4_,uVar6);
                  iVar7 = FUN_1482b5fd4(param_1,uVar21,&local_308,local_2b0);
                  iVar12 = local_31c;
                  if (iVar7 == 0) {
LAB_1482b5bba:
                    iVar7 = local_2b0[0];
                    ppppuVar15 = (undefined1 ****)(longlong)local_2b0[0];
                    local_128 = (undefined1 *****)&local_248;
                    local_310 = &local_128;
                    local_318 = FUN_14830047e;
                    local_120 = param_1;
                    FUN_146c03fd0(param_1[1],local_2b0[0]);
                    local_f8 = (undefined8 ****)param_1[1];
                    local_118 = (undefined8 ****)0x0;
                    local_108 = (undefined1 *****)&PTR_LAB_149f3b7b0;
                    local_100 = (undefined8 *****)CONCAT44(local_100._4_4_,iVar7);
                    local_128 = (undefined1 *****)&LAB_146c413d0;
                    local_328 = ppppuVar15;
                    FUN_146c41260(local_f8 + 0x17,&local_b8,iVar7,&local_128);
                    FUN_146c41458(local_b8,&local_128,(ulonglong)local_b0 & 0xffffffff,local_a8);
                    FUN_146c41662(local_b8,&local_198,(ulonglong)local_b0 & 0xffffffff,local_a8);
LAB_1482b571b:
                    ppppuVar4 = local_f8;
                    if (local_128 == (undefined1 *****)local_198) {
                      if ((((int)local_120 == (int)local_190) && ((int)local_110 == local_180)) &&
                         (local_110._4_4_ == local_17c)) goto LAB_1482b5c95;
                    }
                    local_230 = (undefined1 *****)CONCAT44(local_230._4_4_,local_108._0_4_);
                    plVar10 = local_e8;
                    if (local_e8 == (longlong *)0x0) {
                      plVar10 = local_d8;
                    }
                    uVar8 = (**(code **)(*plVar10 + 8))();
                    iVar7 = (*(code *)ppppuVar4)(uVar8,&local_230);
                    local_1a0 = &local_248;
                    local_1a8 = local_260;
                    local_1dc = (undefined1  [4])0x0;
                    local_1e4[1] = 0;
                    local_1e4[0] = 0;
                    local_230 = (undefined1 *****)&local_1a0;
                    local_228 = (undefined8 *****)local_1dc;
                    local_220 = (undefined1 *****)local_1c0;
                    local_218 = &local_1a8;
                    local_210 = local_1e4 + 1;
                    local_208 = local_1d8;
                    local_200 = local_1e4;
                    local_1f8 = &LAB_143b02bc8;
                    local_1f0 = &local_230;
                    FUN_146c03fd0(param_1[1],iVar7,&local_1f8);
                    local_258[iVar7] = local_1e4[0] == 0;
                    if ((int)local_118 == 0) {
                      local_120 = (undefined1 *****)CONCAT44(0xffffffff,(int)local_120);
                      local_110 = (undefined8 *****)0xffffffffffffffff;
                    }
                    else {
                      FUN_146be9922(&local_128);
                    }
                    goto LAB_1482b571b;
                  }
                }
              }
            }
            goto LAB_1482b5709;
          }
LAB_1482b5a7a:
          (*(code *)(*param_1)[0x24])(param_1);
          (*(code *)(*param_1)[0x1e])(param_1);
          cVar5 = (*(code *)(*param_1)[1])(param_1);
          if (cVar5 == '\0') {
            (*(code *)(*param_1)[0x14])(param_1);
            (*(code *)(*param_1)[0x1c])(param_1);
          }
LAB_1482b5ab7:
          uVar18 = local_329;
          if (local_278 != (uint *)0x0) {
            FUN_1400020a8();
            uVar18 = local_329;
          }
        }
      }
    }
    if (local_258 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_248 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)((longlong)param_1 + 0x155) = uVar18;
  }
  if ((local_60 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1482b5c95:
  if (local_168 != 0) {
    plVar10 = local_158;
    if (local_158 == (longlong *)0x0) {
      plVar10 = local_148;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_f8 != (undefined8 ****)0x0) {
    plVar10 = local_d8;
    if (local_e8 != (longlong *)0x0) {
      plVar10 = local_e8;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (local_a8[0] != 0) {
    plVar10 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar10 = local_88;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  ppppuVar15 = local_328;
  local_320 = local_320 + 1;
  local_1c0[0] = &local_248;
  local_1d8[0] = local_260;
  local_1f8 = (undefined1 *)((ulonglong)local_1f8 & 0xffffffff00000000);
  local_1a0 = (undefined8 ****)((ulonglong)local_1a0 & 0xffffffff00000000);
  local_1a8 = (undefined8 ****)((ulonglong)local_1a8 & 0xffffffff00000000);
  local_128 = (undefined1 *****)local_1c0;
  local_120 = (undefined1 *****)&local_1f8;
  local_118 = &local_198;
  local_110 = local_1d8;
  local_108 = (undefined1 *****)&local_1a0;
  local_100 = &local_b8;
  local_f8 = &local_1a8;
  local_228 = &local_128;
  local_230 = (undefined1 *****)&LAB_143b02c86;
  FUN_146c03fd0(param_1[1],(ulonglong)local_328 & 0xffffffff);
  local_258[(longlong)ppppuVar15] = (int)local_1a8 == 0;
  iVar12 = local_31c;
LAB_1482b5709:
  puVar19 = puVar19 + 1;
  if (puVar19 == puVar1) goto LAB_1482b59b1;
  goto LAB_1482b562f;
LAB_1482b59b1:
  if ((local_320 == 0) || (iVar7 = iVar12 + 1, iVar12 + 1 == 0x32)) goto LAB_1482b5a7a;
  goto LAB_1482b548f;
}



// FUNCTION 1482b5df6 FUN_1482b5df6 body=476 status=ok
// SIG undefined FUN_1482b5df6(void)

void FUN_1482b5df6(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_178 [32];
  int *local_158;
  int local_150;
  int local_14c;
  int *local_148;
  int local_140;
  int local_13c;
  undefined1 local_138 [8];
  uint local_130;
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [4];
  undefined1 *local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined **local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  int *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined1 *)(param_1 + 0x268) = 0;
  FUN_1448c4dd6(param_1 + 0x270,
                *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x24),1);
  if (param_2 == '\0') {
    local_b0 = *(longlong *)(param_1 + 8);
    local_c8 = 0;
    local_b8 = &PTR_LAB_149f36400;
    local_d8 = &LAB_146be5292;
    FUN_146be50a2(local_b0 + 0x1d0,local_78);
    FUN_146be4fdc(local_78,&local_d8);
    local_150 = *local_38 * 0x200 + local_38[1];
    local_148 = local_38;
    local_158 = local_38;
    local_14c = local_150;
    local_140 = local_150;
    local_13c = local_150;
    FUN_146be5300(local_138,&local_158,&local_148,local_78);
    if (local_d0 != local_130) {
      do {
        lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                   (ulonglong)(local_d0 >> 9) * 8) + (ulonglong)((local_d0 & 0x1ff) << 4));
        *(undefined1 *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)lVar1) = 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x270) + (lVar1 >> 0x20)) = 1;
        *(undefined1 *)(param_1 + 0x268) = 1;
        FUN_146be53a8(&local_d8);
      } while (local_d0 != local_130);
    }
    if (local_118 != 0) {
      if (local_108 == (longlong *)0x0) {
        local_108 = local_f8;
      }
      (**(code **)(*local_108 + 0x10))();
    }
    if (local_b8 != (undefined **)0x0) {
      if (local_a8 == (longlong *)0x0) {
        local_a8 = local_98;
      }
      (**(code **)(*local_a8 + 0x10))();
    }
    if (local_78[0] != 0) {
      if (local_68 == (longlong *)0x0) {
        local_68 = local_58;
      }
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b5fd4 FUN_1482b5fd4 body=2665 status=ok
// SIG undefined FUN_1482b5fd4(void)

undefined8
FUN_1482b5fd4(longlong *param_1,uint param_2,double *param_3,undefined4 *param_4,uint param_5)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  double *pdVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  uint *local_188;
  uint local_174;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  ulonglong local_158;
  longlong *local_150;
  undefined8 local_148;
  double dStack_140;
  double local_138;
  uint local_12c;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *param_4 = 0xffffffff;
  if ((char)param_1[0x19] == '\0') {
    local_c8[0] = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
  }
  else {
    FUN_1482b3344(param_1 + 2,local_c8,param_2);
    uVar14 = 2;
    if ((local_c8[0] & 4) != 0) goto LAB_1482b636b;
  }
  uVar14 = 7;
  if (((int)param_2 < 0) ||
     (lVar6 = param_1[1], *(int *)(lVar6 + 0x1d0) * 0x200 + *(int *)(lVar6 + 0x1d4) <= (int)param_2)
     ) goto LAB_1482b636b;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar6 + 0x1d8) + (ulonglong)(param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U)) goto LAB_1482b636b;
  lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar16 = (ulonglong)((param_2 & 0x1ff) << 4);
  uVar2 = *(uint *)(lVar11 + uVar16);
  uVar3 = *(uint *)(lVar11 + 4 + uVar16);
  local_160 = (longlong)(int)uVar2;
  local_170 = (ulonglong)(int)uVar3;
  uVar4 = *(uint *)(lVar11 + 8 + uVar16);
  local_168 = (ulonglong)uVar4;
  uVar18 = *(uint *)(lVar11 + 0xc + uVar16);
  local_158 = (ulonglong)uVar18;
  lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(uVar4 >> 9) * 8);
  local_d0 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
  local_d8 = *(undefined8 *)(lVar11 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
  lVar11 = 0;
  do {
    lVar13 = lVar11 + 1;
    lVar15 = 0;
    if (lVar11 != 2) {
      lVar15 = lVar13;
    }
    uVar5 = *(uint *)((longlong)&local_d8 + lVar15 * 4);
    uVar4 = *(uint *)((longlong)&local_d8 + lVar11 * 4);
    if (((uVar4 == uVar2) || (bVar21 = uVar5 == uVar2, uVar5 = uVar4, bVar21)) && (uVar5 == uVar3))
    {
      uVar16 = 2;
      if (lVar11 != 0) {
        uVar16 = (ulonglong)((int)lVar11 - 1);
      }
      uVar20 = *(undefined4 *)((longlong)&local_d8 + uVar16 * 4);
      goto LAB_1482b619d;
    }
    lVar11 = lVar13;
  } while (lVar13 != 3);
  uVar20 = 0xffffffff;
LAB_1482b619d:
  if (uVar18 == 0xffffffff) {
    local_e0 = 0xffffffff;
    local_e8 = 0xffffffffffffffff;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
    local_e0 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
    local_e8 = *(undefined8 *)(lVar11 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
    lVar11 = 0;
    do {
      lVar13 = lVar11 + 1;
      lVar15 = 0;
      if (lVar11 != 2) {
        lVar15 = lVar13;
      }
      uVar18 = *(uint *)((longlong)&local_e8 + lVar15 * 4);
      uVar4 = *(uint *)((longlong)&local_e8 + lVar11 * 4);
      if (((uVar4 == uVar2) || (bVar21 = uVar18 == uVar2, uVar18 = uVar4, bVar21)) &&
         (uVar18 == uVar3)) {
        uVar16 = 2;
        if (lVar11 != 0) {
          uVar16 = (ulonglong)((int)lVar11 - 1);
        }
        uVar19 = *(undefined4 *)((longlong)&local_e8 + uVar16 * 4);
        goto LAB_1482b6289;
      }
      lVar11 = lVar13;
    } while (lVar13 != 3);
  }
  uVar19 = 0xffffffff;
LAB_1482b6289:
  lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
  uVar16 = (ulonglong)uVar2 & 0x1ff;
  dVar24 = *(double *)(lVar11 + 0x10 + uVar16 * 0x18);
  pdVar12 = (double *)(lVar11 + uVar16 * 0x18);
  dVar25 = *pdVar12;
  dVar26 = pdVar12[1];
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar16 = (ulonglong)uVar3 & 0x1ff;
  dVar22 = *(double *)(lVar6 + 0x10 + uVar16 * 0x18);
  pdVar12 = (double *)(lVar6 + uVar16 * 0x18);
  dVar1 = *pdVar12;
  dVar7 = pdVar12[1];
  uVar14 = 3;
  local_128 = dVar1;
  dStack_120 = dVar7;
  local_118 = dVar22;
  local_108 = dVar25;
  dStack_100 = dVar26;
  local_f8 = dVar24;
  if ((double)param_1[0x2f] * (double)param_1[0x2f] <
      (dVar24 - dVar22) * (dVar24 - dVar22) +
      (dVar25 - dVar1) * (dVar25 - dVar1) + (dVar26 - dVar7) * (dVar26 - dVar7)) goto LAB_1482b636b;
  local_150 = param_1 + 2;
  (**(code **)(*param_1 + 0x118))(param_1);
  local_188 = &local_12c;
  local_12c = 0xffffffff;
  local_190 = (undefined4)local_158;
  local_198 = (undefined4)local_168;
  local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
  local_1a0 = uVar19;
  cVar9 = FUN_1482bb880(param_1,param_2,(ulonglong)uVar2,(ulonglong)uVar3);
  uVar14 = 4;
  if (cVar9 == '\0') goto LAB_1482b636b;
  iVar10 = (int)param_1[0x2a];
  uVar4 = local_12c;
  if ((*(char *)((longlong)param_1 + 0x155) != '\0') && ((char)param_1[0x4d] == '\x01')) {
    if ((local_12c != 0xffffffff) &&
       (((*(byte *)(param_1[0x4e] + local_170) & local_12c != uVar3) != 0 ||
        ((local_12c != uVar2 && (*(char *)(param_1[0x4e] + local_160) != '\0'))))))
    goto LAB_1482b636b;
    if ((iVar10 != 1) &&
       ((uVar4 = uVar3, *(char *)(param_1[0x4e] + local_170) != '\x01' &&
        (uVar4 = local_12c, *(char *)(param_1[0x4e] + local_160) == '\x01')))) {
      uVar4 = uVar2;
    }
  }
  local_12c = uVar4;
  uVar4 = local_12c;
  if (((uVar3 == param_5 || uVar2 == param_5) && (uVar4 = param_5, local_12c != 0xffffffff)) &&
     (local_12c != param_5)) goto LAB_1482b636b;
  local_12c = uVar4;
  uVar4 = local_12c;
  local_160 = CONCAT44(local_160._4_4_,iVar10);
  local_170 = CONCAT44(local_170._4_4_,uVar2);
  uVar18 = uVar3;
  if (local_12c == 0xffffffff) {
LAB_1482b6504:
    (**(code **)(*param_1 + 200))(param_1,&local_148,uVar18,param_3);
    param_3[2] = local_138;
    *param_3 = (double)local_148;
    param_3[1] = dStack_140;
    dVar22 = SQRT((dVar22 - dVar24) * (dVar22 - dVar24) +
                  (dVar1 - dVar25) * (dVar1 - dVar25) + (dVar7 - dVar26) * (dVar7 - dVar26));
    if (1e-08 <= dVar22) {
      lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
      uVar16 = (ulonglong)(uVar18 & 0x1ff);
      dVar24 = *(double *)(lVar6 + uVar16 * 0x18) - *param_3;
      dVar25 = *(double *)(lVar6 + 8 + uVar16 * 0x18) - param_3[1];
      dVar26 = *(double *)(lVar6 + 0x10 + uVar16 * 0x18) - param_3[2];
      dVar22 = SQRT(dVar26 * dVar26 + dVar24 * dVar24 + dVar25 * dVar25) / dVar22;
    }
    else {
      dVar22 = 0.5;
    }
    uVar20 = (undefined4)local_168;
    dVar24 = 1.0;
    if (dVar22 <= 1.0) {
      dVar24 = dVar22;
    }
    if ((uint)local_160 == 1) {
      auVar27._0_8_ = dVar24 + 0.5;
      auVar27._8_8_ = 0;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = auVar27._0_8_;
      auVar23 = roundpd(auVar27,auVar23,1);
      dVar24 = auVar23._0_8_;
    }
    local_174 = uVar18;
    if (*(int *)((longlong)param_1 + 0x164) == 0) goto LAB_1482b6689;
    uVar19 = (undefined4)local_158;
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
    local_1a0 = uVar19;
    cVar9 = FUN_1482bbb30(param_1,uVar18,local_170 & 0xffffffff,param_3);
    if (cVar9 != '\0') goto LAB_1482b66e7;
    lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(local_174 >> 9) * 8);
    uVar16 = (ulonglong)(local_174 & 0x1ff);
    dVar7 = 1.0 - dVar24;
    dVar22 = *(double *)(lVar6 + 0x10 + uVar16 * 0x18);
    dVar25 = *(double *)(lVar6 + 8 + uVar16 * 0x18);
    lVar11 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)((uint)local_170 >> 9) * 8)
    ;
    uVar17 = (ulonglong)((uint)local_170 & 0x1ff);
    dVar26 = *(double *)(lVar11 + 0x10 + uVar17 * 0x18);
    dVar1 = *(double *)(lVar11 + 8 + uVar17 * 0x18);
    *param_3 = *(double *)(lVar11 + uVar17 * 0x18) * dVar24 +
               dVar7 * *(double *)(lVar6 + uVar16 * 0x18);
    param_3[1] = dVar1 * dVar24 + dVar25 * dVar7;
    param_3[2] = dVar26 * dVar24 + dVar22 * dVar7;
    uVar20 = (undefined4)local_168;
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
    local_1a0 = uVar19;
    cVar9 = FUN_1482bbb30(param_1,local_174,local_170 & 0xffffffff,param_3);
LAB_1482b67cc:
    uVar14 = 9;
    if (cVar9 != '\0') goto LAB_1482b6689;
  }
  else {
    uVar18 = uVar2;
    if (local_12c == uVar2) {
      uVar18 = uVar3;
    }
    local_170 = CONCAT44(local_170._4_4_,uVar18);
    uVar18 = uVar4;
    if ((char)param_1[0x19] != '\x01') goto LAB_1482b6504;
    if (iVar10 != 1) {
      FUN_1482b33ce(local_150,&local_148);
      if (local_148._1_1_ == '\x01') goto LAB_1482b6504;
    }
    pdVar12 = &local_128;
    if (uVar4 == uVar2) {
      pdVar12 = &local_108;
    }
    param_3[2] = pdVar12[2];
    dVar24 = pdVar12[1];
    *param_3 = *pdVar12;
    param_3[1] = dVar24;
    dVar24 = 0.0;
    local_174 = uVar4;
    if (*(int *)((longlong)param_1 + 0x164) != 0) {
      local_1a0 = (undefined4)local_158;
      uVar20 = (undefined4)local_168;
      local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
      local_160 = CONCAT44(local_160._4_4_,uVar4);
      cVar9 = FUN_1482bbb30(param_1,uVar4,local_170 & 0xffffffff,param_3);
      local_174 = (uint)local_160;
      goto LAB_1482b67cc;
    }
LAB_1482b66e7:
    uVar20 = (undefined4)local_168;
LAB_1482b6689:
    uVar19 = (undefined4)local_158;
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
    local_1a0 = uVar19;
    cVar9 = FUN_1482b19a2(param_1,uVar2,uVar3,param_3);
    uVar14 = 5;
    if (cVar9 == '\0') {
      uVar20 = (undefined4)local_168;
      local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
      local_1a0 = uVar19;
      cVar9 = FUN_1482b19a2(param_1,uVar3,uVar2,param_3);
      if (cVar9 == '\0') {
        if (*(char *)((longlong)param_1 + 0x157) == '\x01') {
          local_1a0 = (undefined4)local_158;
          local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
          cVar9 = FUN_1482b21ee(param_1,uVar2,uVar3,param_3);
          uVar14 = 10;
          if (cVar9 == '\0') {
            local_1a0 = (undefined4)local_158;
            local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,(int)local_168);
            cVar9 = FUN_1482b21ee(param_1,uVar3,uVar2,param_3);
            if (cVar9 == '\0') goto LAB_1482b686e;
          }
        }
        else {
LAB_1482b686e:
          *(int *)(param_1 + 0x50) = (int)param_1[0x50] + 1;
          local_1a8 = param_4;
          iVar10 = (**(code **)(*(longlong *)param_1[1] + 0x70))
                             ((longlong *)param_1[1],local_174,local_170 & 0xffffffff,dVar24);
          if (iVar10 == 0x1a) {
            uVar14 = 8;
          }
          else {
            uVar14 = 6;
            if (iVar10 == 0) {
              lVar6 = param_1[1];
              cVar9 = FUN_146bfed03(param_3);
              plVar8 = local_150;
              if (cVar9 != '\0') {
                lVar11 = *(longlong *)
                          (*(longlong *)(lVar6 + 0x10) + (ulonglong)(local_174 >> 9) * 8);
                *(double *)(lVar11 + 0x10 + (ulonglong)(local_174 & 0x1ff) * 0x18) = param_3[2];
                dVar24 = param_3[1];
                pdVar12 = (double *)(lVar11 + (ulonglong)(local_174 & 0x1ff) * 0x18);
                *pdVar12 = *param_3;
                pdVar12[1] = dVar24;
                if (*(char *)(lVar6 + 0x210) == '\x01') {
                  LOCK();
                  *(int *)(lVar6 + 0x214) = *(int *)(lVar6 + 0x214) + 1;
                  UNLOCK();
                }
              }
              if ((char)param_1[0x19] == '\x01') {
                FUN_1482f65d8(local_150,param_2);
                local_148 = param_1;
                cVar9 = FUN_1482bb52e(plVar8,param_4[8]);
                plVar8 = local_150;
                if (cVar9 != '\0') {
                  FUN_1482f65d8(local_150,param_4[10]);
                  FUN_1482f65d8(plVar8,param_4[8]);
                  FUN_1482bbd2c(&local_148,param_4[10]);
                }
                if ((param_4[9] != -1) &&
                   (cVar9 = FUN_1482bb52e(local_150), plVar8 = local_150, cVar9 != '\0')) {
                  FUN_1482f65d8(local_150,param_4[0xb]);
                  FUN_1482f65d8(plVar8,param_4[9]);
                  FUN_1482bbd2c(&local_148,param_4[0xb]);
                }
                FUN_1482f669e(param_1 + 0xc,local_170 & 0xffffffff);
              }
              local_1a8 = param_4;
              (**(code **)(*param_1 + 0xa8))(param_1,param_2,local_174,local_170 & 0xffffffff);
              uVar14 = 0;
              (**(code **)(*param_1 + 0x28))(param_1,0);
            }
          }
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x120))(param_1);
LAB_1482b636b:
  if ((local_b0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b6a3e FUN_1482b6a3e body=923 status=ok
// SIG undefined FUN_1482b6a3e(void)

void FUN_1482b6a3e(longlong *param_1,double param_2,int param_3,undefined4 param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  int local_104;
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_5 < *(uint *)(param_1[1] + 0x170)) {
    param_1[0x2f] = (longlong)param_2;
    *(undefined1 *)(param_1 + 0x4d) = 0;
    (**(code **)(*param_1 + 0xd8))();
    (**(code **)(*param_1 + 0xf8))(param_1);
    FUN_1482b5df6(param_1,param_4);
    cVar12 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar12 == '\0') {
      (**(code **)(*param_1 + 0x100))(param_1);
      (**(code **)(*param_1 + 0xe8))(param_1);
      (**(code **)(*param_1 + 0x118))(param_1);
      if ((0 < param_3) &&
         (uVar18 = *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),
         0 < (int)uVar18)) {
        iVar15 = 0;
        do {
          uVar16 = 0;
          local_104 = 0;
          do {
            lVar7 = param_1[1];
            if ((int)uVar16 < *(int *)(lVar7 + 0x1d0) * 0x200 + *(int *)(lVar7 + 0x1d4)) {
              uVar14 = (ulonglong)(uVar16 >> 9);
              uVar19 = uVar16 & 0x1ff;
              if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + uVar14 * 8) +
                                      (ulonglong)uVar19 * 2) - 1U) < 0xfffe) &&
                 (*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x1c0) + uVar14 * 8) + 0xc +
                          (ulonglong)(uVar19 << 4)) != -1)) {
                if (*(uint *)(lVar7 + 0x170) <= param_5) break;
                cVar12 = (**(code **)(*param_1 + 8))(param_1);
                if (cVar12 != '\0') goto LAB_1482b6ab2;
                lVar7 = *(longlong *)(param_1[1] + 0x10);
                uVar14 = *(ulonglong *)
                          (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + uVar14 * 8) +
                          (ulonglong)(uVar19 << 4));
                lVar8 = *(longlong *)(lVar7 + (uVar14 >> 9 & 0x7fffff) * 8);
                uVar17 = uVar14 & 0x1ff;
                dVar1 = *(double *)(lVar8 + uVar17 * 0x18);
                dVar2 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
                dVar3 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
                lVar7 = *(longlong *)(lVar7 + (uVar14 >> 0x29) * 8);
                uVar14 = uVar14 >> 0x20 & 0x1ff;
                dVar4 = *(double *)(lVar7 + uVar14 * 0x18);
                dVar5 = *(double *)(lVar7 + 8 + uVar14 * 0x18);
                dVar6 = *(double *)(lVar7 + 0x10 + uVar14 * 0x18);
                dVar9 = dVar4 - dVar1;
                dVar10 = dVar5 - dVar2;
                dVar11 = dVar6 - dVar3;
                if (dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10 <= param_2 * param_2) {
                  *(int *)((longlong)param_1 + 0x284) = *(int *)((longlong)param_1 + 0x284) + 1;
                  local_f0 = (dVar3 + dVar6) * 0.5;
                  local_f8 = (dVar2 + dVar5) * 0.5;
                  local_100 = (dVar1 + dVar4) * 0.5;
                  local_e0 = 0xffffffffffffffff;
                  local_c0 = 0xffffffffffffffff;
                  local_d0 = 0xffffffff;
                  uStack_cc = 0xffffffff;
                  uStack_c8 = 0xffffffff;
                  uStack_c4 = 0xffffffff;
                  local_118 = 0xffffffff;
                  iVar13 = FUN_1482b5fd4(param_1,uVar16,&local_100,local_e8);
                  local_104 = local_104 + (uint)(iVar13 == 0);
                }
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar18 != uVar16);
        } while (((local_104 != 0) && (param_5 < *(uint *)(param_1[1] + 0x170))) &&
                (iVar15 = iVar15 + 1, iVar15 != param_3));
      }
      (**(code **)(*param_1 + 0x120))(param_1);
      (**(code **)(*param_1 + 0xf0))(param_1);
      cVar12 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar12 == '\0') {
        (**(code **)(*param_1 + 0xa0))(param_1);
        (**(code **)(*param_1 + 0xe0))(param_1);
      }
    }
  }
LAB_1482b6ab2:
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482b6dda FUN_1482b6dda body=813 status=ok
// SIG undefined FUN_1482b6dda(void)

void FUN_1482b6dda(longlong *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1[1] + 0x170) != 0) {
    (**(code **)(*param_1 + 0xd8))();
    (**(code **)(*param_1 + 0xf8))(param_1);
    FUN_1482b5df6(param_1,0);
    cVar3 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar3 == '\0') {
      (**(code **)(*param_1 + 0x88))(param_1);
      cVar3 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x80))(param_1);
        cVar3 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar3 == '\0') {
          (**(code **)(*param_1 + 0x78))(param_1);
          cVar3 = (**(code **)(*param_1 + 8))(param_1);
          if (cVar3 == '\0') {
            (**(code **)(*param_1 + 0x90))(param_1);
            cVar3 = (**(code **)(*param_1 + 8))(param_1);
            if (cVar3 == '\0') {
              (**(code **)(*param_1 + 0x100))(param_1);
              (**(code **)(*param_1 + 0xe8))(param_1);
              (**(code **)(*param_1 + 0x118))(param_1);
              if (0 < (int)param_1[0x4a]) {
                do {
                  if (*(int *)((longlong)param_1 + 0x184) == 3) {
                    if (*(float *)(param_1 + 0x2e) <=
                        ABS(*(float *)(*(longlong *)param_1[0x48] + 0x10)) &&
                        ABS(*(float *)(*(longlong *)param_1[0x48] + 0x10)) !=
                        *(float *)(param_1 + 0x2e)) break;
                  }
                  else {
                    if (*(int *)((longlong)param_1 + 0x184) == 1) {
                      iVar4 = *(int *)(param_1[1] + 0x50);
                    }
                    else {
                      iVar4 = *(int *)(param_1[1] + 0x170);
                    }
                    if (iVar4 <= (int)param_1[0x30]) break;
                  }
                  *(int *)((longlong)param_1 + 0x284) = *(int *)((longlong)param_1 + 0x284) + 1;
                  uVar2 = *(uint *)(*(longlong *)param_1[0x48] + 0xc);
                  FUN_146bd26ea(param_1 + 0x46,1);
                  if ((-1 < (int)uVar2) &&
                     (lVar5 = param_1[1],
                     (int)uVar2 < *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4))) {
                    if ((ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar5 + 0x1d8) +
                                             (ulonglong)(uVar2 >> 9) * 8) +
                                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
                      cVar3 = (**(code **)(*param_1 + 8))(param_1);
                      if (cVar3 != '\0') goto LAB_1482b6e1d;
                      local_a0 = 0xffffffffffffffff;
                      local_90 = 0xffffffff;
                      uStack_8c = 0xffffffff;
                      uStack_88 = 0xffffffff;
                      uStack_84 = 0xffffffff;
                      local_80 = 0xffffffffffffffff;
                      lVar5 = (ulonglong)uVar2 * 0x100;
                      local_b8 = *(undefined8 *)(param_1[0x44] + 0xf8 + lVar5);
                      puVar1 = (undefined4 *)(param_1[0x44] + 0xe8 + lVar5);
                      local_c8 = *puVar1;
                      uStack_c4 = puVar1[1];
                      uStack_c0 = puVar1[2];
                      uStack_bc = puVar1[3];
                      local_d8 = 0xffffffff;
                      iVar4 = FUN_1482b5fd4(param_1,(ulonglong)uVar2,&local_c8,local_a8);
                      if (iVar4 == 8) {
                        if (2 < *(int *)(param_1[1] + 0x170)) {
                          FUN_1482b7108(param_1,*(undefined4 *)
                                                 (*(longlong *)
                                                   (*(longlong *)(param_1[1] + 0x1c0) +
                                                   (ulonglong)(uVar2 >> 9) * 8) + 8 +
                                                 (ulonglong)((uVar2 & 0x1ff) << 4)));
                        }
                      }
                      else if (iVar4 == 0) {
                        (**(code **)(*param_1 + 0x98))(param_1,local_a8);
                      }
                    }
                  }
                } while (0 < (int)param_1[0x4a]);
              }
              (**(code **)(*param_1 + 0x120))(param_1);
              (**(code **)(*param_1 + 0xf0))(param_1);
              cVar3 = (**(code **)(*param_1 + 8))(param_1);
              if (cVar3 == '\0') {
                (**(code **)(*param_1 + 0xa0))(param_1);
                (**(code **)(*param_1 + 0xe0))(param_1);
              }
            }
          }
        }
      }
    }
  }
LAB_1482b6e1d:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482b7108 FUN_1482b7108 body=988 status=ok
// SIG undefined FUN_1482b7108(void)

void FUN_1482b7108(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  code **ppcVar6;
  longlong *plVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_278 [40];
  ulonglong local_250;
  longlong local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  undefined8 local_228;
  undefined4 local_220;
  code *local_218;
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
  code *local_178;
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
  uint local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (-1 < (int)param_2) {
    lVar10 = param_1[1];
    if ((int)param_2 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144)) {
      uVar9 = (ulonglong)(param_2 >> 9);
      uVar5 = (ulonglong)(param_2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar10 + 0x148) + uVar9 * 8) + uVar5 * 2)
                  - 1U) < 0xfffe) {
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + uVar9 * 8);
        local_248 = uVar5 * 3;
        local_220 = *(undefined4 *)(lVar10 + 8 + uVar5 * 0xc);
        local_228 = *(ulonglong *)(lVar10 + uVar5 * 0xc);
        local_240 = local_198;
        local_238 = local_f8;
        bVar8 = true;
        lVar10 = 0;
        local_250 = uVar9;
        local_230 = param_1;
        do {
          local_150 = param_1[1];
          uStack_148 = *(undefined4 *)((longlong)&local_228 + lVar10 * 4);
          local_168 = 0;
          local_158 = &PTR_LAB_149f3aae0;
          local_178 = FUN_146be9588;
          local_218 = (code *)(local_150 + 0xb8);
          uStack_210 = CONCAT44(uStack_210._4_4_,uStack_148);
          FUN_146be94ac(local_d8,&local_218,&local_178);
          local_128 = 0xffffffffffffffff;
          local_118[0] = 0;
          local_108 = (longlong *)0x0;
          local_158 = (undefined **)local_78;
          local_168 = local_88;
          uStack_160 = uStack_80;
          local_178 = local_98;
          uStack_170 = uStack_90;
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
          local_218 = (code *)CONCAT44(uStack_6c,local_70);
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
          ppcVar6 = &local_218;
          while( true ) {
            FUN_146bfd1f0(ppcVar6);
            if ((((local_178 == local_218) && ((int)uStack_170 == (int)uStack_210)) &&
                ((int)uStack_160 == (int)uStack_200)) && (uStack_160._4_4_ == uStack_200._4_4_))
            break;
            bVar8 = (bool)(bVar8 & local_120 == param_2);
            ppcVar6 = &local_178;
          }
          if (local_1b8[0] != 0) {
            plVar7 = local_1a8;
            if (local_1a8 == (longlong *)0x0) {
              plVar7 = local_240;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          param_1 = local_230;
          if (local_118[0] != 0) {
            plVar7 = local_108;
            if (local_108 == (longlong *)0x0) {
              plVar7 = local_238;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          if (local_d8[0] != 0) {
            plVar7 = local_c8;
            if (local_c8 == (longlong *)0x0) {
              plVar7 = local_b8;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 3);
        if (bVar8) {
          lVar10 = *(longlong *)(*(longlong *)(param_1[1] + 0x180) + local_250 * 8);
          uVar1 = *(undefined4 *)(lVar10 + local_248 * 4);
          uVar2 = *(undefined4 *)(lVar10 + 4 + local_248 * 4);
          uVar3 = *(undefined4 *)(lVar10 + 8 + local_248 * 4);
          iVar4 = FUN_146c0b65a(param_1[1],param_2,1,0);
          if ((iVar4 == 0) && ((char)param_1[0x19] == '\x01')) {
            plVar7 = param_1 + 2;
            FUN_1482f65d8(plVar7,uVar1);
            FUN_1482f65d8(plVar7,uVar2);
            FUN_1482f65d8(plVar7,uVar3);
            plVar7 = param_1 + 0xc;
            FUN_1482f669e(plVar7,local_228 & 0xffffffff);
            FUN_1482f669e(plVar7,local_228._4_4_);
            FUN_1482f669e(plVar7,local_220);
          }
          (**(code **)(*param_1 + 0xb0))(param_1,param_2);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b752a FUN_1482b752a body=1210 status=ok
// SIG undefined FUN_1482b752a(void)

void FUN_1482b752a(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  code **ppcVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_278 [44];
  uint local_24c;
  longlong *local_248;
  longlong *local_240;
  code *local_238;
  undefined8 uStack_230;
  longlong *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1dc;
  longlong local_1d8 [2];
  longlong *local_1c8;
  longlong local_1b8 [4];
  code *local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_178;
  longlong local_170;
  uint uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  int local_140;
  undefined4 local_13c;
  longlong local_138 [2];
  longlong *local_128;
  longlong local_118 [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong local_d8 [4];
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1482b79e6(param_1 + 0x198,
                *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x24));
  lVar3 = *(longlong *)(param_1 + 8);
  uVar17 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
  uVar14 = 0;
  if ((uVar17 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x28) - 1U))) {
    uVar15 = 1;
    uVar10 = 1;
    if (1 < (int)uVar17) {
      uVar15 = uVar17;
    }
    do {
      uVar14 = uVar15;
      if (uVar15 == uVar10) break;
      uVar13 = uVar10 >> 9;
      uVar16 = uVar10 & 0x1ff;
      uVar14 = uVar10;
      uVar10 = uVar10 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x28))[uVar13] +
                                         (ulonglong)uVar16 * 2) - 1U));
  }
  if (uVar14 == uVar17) {
LAB_1482b796a:
    if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_248 = local_1b8;
  local_240 = local_118;
  local_24c = uVar17;
LAB_1482b75d0:
  plVar9 = DAT_14c8464f0;
  lVar7 = DAT_14c8464e8;
  lVar5 = DAT_14c8464e0;
  lStack_190 = DAT_14c8464e8;
  local_228 = DAT_14c8464f0;
  local_f8 = DAT_14c8464e0;
  uStack_f0 = DAT_14c8464e8;
  local_e8 = DAT_14c8464f0;
  lVar4 = *(longlong *)(param_1 + 0x198);
  lVar18 = (longlong)(int)uVar14 * 0xe0;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + lVar18) = 0;
  ((undefined8 *)(lVar4 + lVar18))[1] = 0;
  lVar8 = DAT_14c8464e8;
  lVar6 = DAT_14c8464e0;
  *(longlong **)(lVar4 + 0x60 + lVar18) = DAT_14c8464f0;
  plVar12 = (longlong *)(lVar4 + 0x50 + lVar18);
  *plVar12 = lVar6;
  plVar12[1] = lVar8;
  puVar1 = (undefined8 *)(lVar4 + 0x68 + lVar18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x78 + lVar18) = 0x3ff0000000000000;
  *(longlong **)(lVar4 + 0x90 + lVar18) = plVar9;
  plVar12 = (longlong *)(lVar4 + 0x80 + lVar18);
  *plVar12 = lVar5;
  plVar12[1] = lVar7;
  plVar12 = (longlong *)(lVar4 + 0x98 + lVar18);
  *plVar12 = lVar5;
  plVar12[1] = lVar7;
  *(longlong **)(lVar4 + 0xa8 + lVar18) = plVar9;
  *(longlong **)(lVar4 + 0xc0 + lVar18) = plVar9;
  local_f8._0_4_ = (undefined4)lVar5;
  local_f8._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_f0._0_4_ = (undefined4)lVar7;
  uStack_f0._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  puVar2 = (undefined4 *)(lVar4 + 0xb0 + lVar18);
  *puVar2 = (undefined4)local_f8;
  puVar2[1] = local_f8._4_4_;
  puVar2[2] = (undefined4)uStack_f0;
  puVar2[3] = uStack_f0._4_4_;
  puVar1 = (undefined8 *)(lVar4 + 200 + lVar18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0xd8 + lVar18) = 0;
  local_170 = *(longlong *)(param_1 + 8);
  local_188 = 0;
  local_178 = &PTR_LAB_149f3aae0;
  local_198 = FUN_146be9588;
  local_238 = (code *)(local_170 + 0xb8);
  uStack_230 = CONCAT44(uStack_f0._4_4_,uVar14);
  uStack_168 = uVar14;
  local_f8 = lVar5;
  uStack_f0 = lVar7;
  FUN_146be94ac(&local_f8,&local_238,&local_198);
  local_148 = 0xffffffffffffffff;
  local_138[0] = 0;
  local_128 = (longlong *)0x0;
  local_178 = (undefined **)local_98;
  local_188 = local_a8;
  uStack_180 = uStack_a0;
  local_198 = local_b8;
  lStack_190 = uStack_b0;
  uStack_168 = uStack_88;
  uStack_164 = uStack_84;
  local_160 = local_80;
  uStack_15c = uStack_7c;
  uStack_158 = uStack_78;
  uStack_154 = uStack_74;
  local_150 = local_70;
  FUN_146be971a(local_138,&local_f8);
  local_13c = 0;
  FUN_146bfd1f0(&local_198);
  local_1e8 = 0xffffffffffffffff;
  local_1d8[0] = 0;
  local_1c8 = (longlong *)0x0;
  local_218 = local_70;
  local_238 = (code *)CONCAT44(uStack_8c,local_90);
  uStack_230 = CONCAT44(uStack_84,uStack_88);
  uStack_220 = CONCAT44(uStack_74,uStack_78);
  local_210 = local_90;
  uStack_20c = uStack_8c;
  uStack_208 = uStack_88;
  uStack_204 = uStack_84;
  local_200 = local_80;
  uStack_1fc = uStack_7c;
  uStack_1f8 = uStack_78;
  uStack_1f4 = uStack_74;
  local_1f0 = local_70;
  FUN_146be971a(local_1d8,&local_f8);
  local_1dc = 0;
  ppcVar11 = &local_238;
  do {
    FUN_146bfd1f0(ppcVar11);
    if (local_198 == local_238) {
      if ((int)lStack_190 == (int)uStack_230) {
        if ((int)uStack_180 == (int)uStack_220) {
          if (uStack_180._4_4_ == uStack_220._4_4_) break;
        }
      }
    }
    FUN_1482b7a54(*(longlong *)(param_1 + 0x198) + lVar18,
                  (int)*(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + (longlong)local_140 * 8),
                  (longlong)local_140 * 0xe0 + *(longlong *)(param_1 + 0x208));
    ppcVar11 = &local_198;
  } while( true );
  if (local_1d8[0] != 0) {
    plVar12 = local_1c8;
    if (local_1c8 == (longlong *)0x0) {
      plVar12 = local_248;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_138[0] != 0) {
    plVar12 = local_128;
    if (local_128 == (longlong *)0x0) {
      plVar12 = local_240;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_f8 != 0) {
    plVar12 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar12 = local_d8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  uVar17 = uVar14 + 1;
  if ((int)(uVar14 + 1) < (int)local_24c) {
    uVar17 = local_24c;
  }
  do {
    uVar15 = uVar17;
    if (uVar17 - 1 == uVar14) break;
    uVar14 = uVar14 + 1;
    uVar15 = uVar14;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar14 >> 9) * 8
                                         ) + (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
  uVar14 = uVar15;
  if (uVar14 == local_24c) goto LAB_1482b796a;
  goto LAB_1482b75d0;
}



// FUNCTION 1482b79e6 FUN_1482b79e6 body=109 status=ok
// SIG undefined FUN_1482b79e6(void)

void FUN_1482b79e6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483005a8(param_1,iVar1);
    }
    FUN_1483004eb((longlong)iVar1 * 0xe0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14830063c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482b7a54 FUN_1482b7a54 body=470 status=ok
// SIG undefined FUN_1482b7a54(void)

void FUN_1482b7a54(longlong param_1,double param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  
  FUN_1482c65c2();
  dVar1 = *(double *)(param_3 + 0x60);
  dVar2 = *(double *)(param_3 + 0x58);
  *(double *)(param_1 + 0x50) = *(double *)(param_3 + 0x50) * param_2 + *(double *)(param_1 + 0x50);
  *(double *)(param_1 + 0x58) = dVar2 * param_2 + *(double *)(param_1 + 0x58);
  *(double *)(param_1 + 0x60) = dVar1 * param_2 + *(double *)(param_1 + 0x60);
  *(double *)(param_1 + 0x68) = *(double *)(param_3 + 0x68) * param_2 + *(double *)(param_1 + 0x68);
  *(double *)(param_1 + 0x70) = *(double *)(param_1 + 0x70) + param_2;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_3 + 0x78);
  dVar1 = *(double *)(param_3 + 0x90);
  dVar2 = *(double *)(param_3 + 0x88);
  *(double *)(param_1 + 0x80) = *(double *)(param_3 + 0x80) * param_2 + *(double *)(param_1 + 0x80);
  *(double *)(param_1 + 0x88) = dVar2 * param_2 + *(double *)(param_1 + 0x88);
  *(double *)(param_1 + 0x90) = dVar1 * param_2 + *(double *)(param_1 + 0x90);
  dVar1 = *(double *)(param_3 + 0xa8);
  dVar2 = *(double *)(param_3 + 0xa0);
  *(double *)(param_1 + 0x98) = *(double *)(param_3 + 0x98) * param_2 + *(double *)(param_1 + 0x98);
  *(double *)(param_1 + 0xa0) = dVar2 * param_2 + *(double *)(param_1 + 0xa0);
  *(double *)(param_1 + 0xa8) = dVar1 * param_2 + *(double *)(param_1 + 0xa8);
  dVar1 = *(double *)(param_3 + 0xc0);
  dVar2 = *(double *)(param_3 + 0xb8);
  *(double *)(param_1 + 0xb0) = *(double *)(param_3 + 0xb0) * param_2 + *(double *)(param_1 + 0xb0);
  *(double *)(param_1 + 0xb8) = dVar2 * param_2 + *(double *)(param_1 + 0xb8);
  *(double *)(param_1 + 0xc0) = dVar1 * param_2 + *(double *)(param_1 + 0xc0);
  *(double *)(param_1 + 200) = *(double *)(param_3 + 200) * param_2 + *(double *)(param_1 + 200);
  *(double *)(param_1 + 0xd0) = *(double *)(param_3 + 0xd0) * param_2 + *(double *)(param_1 + 0xd0);
  *(double *)(param_1 + 0xd8) = param_2 * *(double *)(param_3 + 0xd8) + *(double *)(param_1 + 0xd8);
  return;
}



// FUNCTION 1482b7c2a FUN_1482b7c2a body=634 status=ok
// SIG undefined FUN_1482b7c2a(void)

void FUN_1482b7c2a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x156) == '\x01') {
    local_68 = *(undefined8 *)(param_1 + 400);
    local_60 = param_1;
    if (*(char *)(param_1 + 200) == '\x01') {
      plVar1 = (longlong *)(param_1 + 0x10);
      lVar2 = param_1 + 0x20;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = lVar2;
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar8 = *(int *)(param_1 + 0x38);
      }
      uStack_70 = CONCAT44(uStack_3c,uStack_40);
      local_78 = local_48;
      uVar3 = local_78;
      local_88 = (undefined4)local_58;
      uStack_84 = local_58._4_4_;
      uStack_80 = (undefined4)uStack_50;
      uStack_7c = uStack_50._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar5 = local_78._4_4_;
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar8) || (local_78 = uVar3, uStack_50 != lVar2)) {
        do {
          local_78 = uVar3;
          FUN_1482b7ea6(&local_68,*(undefined4 *)(*local_90 + (longlong)iVar5 * 0x28));
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != plVar1 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar8));
      }
    }
    else {
      lVar2 = *(longlong *)(param_1 + 8);
      uVar9 = *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4);
      uVar10 = 0;
      if ((uVar9 != 0) &&
         (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x1d8) - 1U))) {
        uVar11 = 1;
        uVar6 = 1;
        if (1 < (int)uVar9) {
          uVar11 = uVar9;
        }
        do {
          uVar10 = uVar11;
          if (uVar11 == uVar6) break;
          uVar7 = uVar6 >> 9;
          uVar12 = uVar6 & 0x1ff;
          uVar10 = uVar6;
          uVar6 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x1d8))[uVar7] +
                                             (ulonglong)uVar12 * 2) - 1U));
      }
      if (uVar10 != uVar9) {
        plVar1 = *(longlong **)(lVar2 + 0x208);
        do {
          if (*(int *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                        (ulonglong)(uVar10 >> 9) * 8) + 0xc + (ulonglong)((uVar10 & 0x1ff) << 4)) ==
              -1) {
LAB_1482b7e4f:
            FUN_1482b7ea6(&local_68,uVar10);
          }
          else {
            cVar4 = FUN_146c13702(*(longlong *)(param_1 + 8),uVar10);
            if (plVar1 != (longlong *)0x0) {
              if ((cVar4 != '\0') ||
                 (cVar4 = (**(code **)(*plVar1 + 0x98))(plVar1,uVar10), cVar4 != '\0'))
              goto LAB_1482b7e4f;
              cVar4 = (**(code **)(*plVar1 + 0x80))(plVar1,uVar10);
            }
            if (cVar4 != '\0') goto LAB_1482b7e4f;
          }
          uVar11 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)uVar9) {
            uVar11 = uVar9;
          }
          do {
            uVar6 = uVar11;
            if (uVar11 - 1 == uVar10) break;
            uVar10 = uVar10 + 1;
            uVar6 = uVar10;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar2 + 0x1d8) +
                                                 (ulonglong)(uVar10 >> 9) * 8) +
                                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
          uVar10 = uVar6;
        } while (uVar10 != uVar9);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482b7ea6 FUN_1482b7ea6 body=845 status=ok
// SIG undefined FUN_1482b7ea6(void)

void FUN_1482b7ea6(double *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double *pdVar11;
  undefined1 auStack_198 [40];
  double *local_170;
  uint *local_168;
  double *local_160;
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
  undefined1 local_100 [24];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_a8;
  int local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar5 = param_1[1];
  lVar6 = *(longlong *)((longlong)dVar5 + 8);
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar9 = (ulonglong)((param_2 & 0x1ff) << 4);
  uVar3 = *(uint *)(lVar7 + 4 + uVar9);
  iVar4 = *(int *)(lVar7 + 0xc + uVar9);
  lVar8 = *(longlong *)
           (*(longlong *)(lVar6 + 0x10) + (ulonglong)(*(uint *)(lVar7 + uVar9) >> 9) * 8);
  uVar10 = (ulonglong)*(uint *)(lVar7 + uVar9) & 0x1ff;
  local_b8 = *(undefined8 *)(lVar8 + 0x10 + uVar10 * 0x18);
  puVar1 = (undefined8 *)(lVar8 + uVar10 * 0x18);
  local_c8 = *puVar1;
  uStack_c0 = puVar1[1];
  lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar10 = (ulonglong)uVar3 & 0x1ff;
  local_d8 = *(undefined8 *)(lVar8 + 0x10 + uVar10 * 0x18);
  puVar2 = (undefined4 *)(lVar8 + uVar10 * 0x18);
  local_e8 = *puVar2;
  uStack_e4 = puVar2[1];
  uStack_e0 = puVar2[2];
  uStack_dc = puVar2[3];
  local_170 = param_1;
  local_a8 = param_2;
  FUN_146c13dec(lVar6,local_100,*(undefined4 *)(lVar7 + 8 + uVar9));
  FUN_1482bb582(&local_150,&local_c8,&local_e8,local_100);
  local_168 = &local_a8;
  local_160 = &local_150;
  FUN_1482f6104((longlong)dVar5 + 0x1a8,&local_a4);
  lVar6 = *(longlong *)((longlong)dVar5 + 0x1a8) + (longlong)local_a4 * 0x60;
  pdVar11 = (double *)(lVar6 + 8);
  if (iVar4 == -1) {
    local_150 = *pdVar11;
    local_148 = *(double *)(lVar6 + 0x10);
    local_140 = *(double *)(lVar6 + 0x18);
    local_138 = *(double *)(lVar6 + 0x20);
    local_130 = *(double *)(lVar6 + 0x28);
    local_128 = *(double *)(lVar6 + 0x30);
    local_120 = *(double *)(lVar6 + 0x38);
    local_118 = *(double *)(lVar6 + 0x40);
    local_110 = *(double *)(lVar6 + 0x48);
    local_108 = *(double *)(lVar6 + 0x50);
  }
  else {
    FUN_146c13dec(*(undefined8 *)((longlong)dVar5 + 8),&local_168,iVar4);
    FUN_1482bb582(&local_150,&local_c8,&local_e8,&local_168);
    local_150 = local_150 + *pdVar11;
    *pdVar11 = local_150;
    local_148 = local_148 + *(double *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x10) = local_148;
    local_140 = local_140 + *(double *)(lVar6 + 0x18);
    *(double *)(lVar6 + 0x18) = local_140;
    local_138 = local_138 + *(double *)(lVar6 + 0x20);
    *(double *)(lVar6 + 0x20) = local_138;
    local_130 = local_130 + *(double *)(lVar6 + 0x28);
    *(double *)(lVar6 + 0x28) = local_130;
    local_128 = local_128 + *(double *)(lVar6 + 0x30);
    *(double *)(lVar6 + 0x30) = local_128;
    local_120 = local_120 + *(double *)(lVar6 + 0x38);
    *(double *)(lVar6 + 0x38) = local_120;
    local_118 = local_118 + *(double *)(lVar6 + 0x40);
    *(double *)(lVar6 + 0x40) = local_118;
    local_110 = local_110 + *(double *)(lVar6 + 0x48);
    *(double *)(lVar6 + 0x48) = local_110;
    local_108 = local_108 + *(double *)(lVar6 + 0x50);
    *(double *)(lVar6 + 0x50) = local_108;
  }
  dVar5 = *local_170;
  *pdVar11 = local_150 * dVar5;
  *(double *)(lVar6 + 0x10) = local_148 * dVar5;
  *(double *)(lVar6 + 0x18) = local_140 * dVar5;
  *(double *)(lVar6 + 0x20) = local_138 * dVar5;
  *(double *)(lVar6 + 0x28) = local_130 * dVar5;
  *(double *)(lVar6 + 0x30) = local_128 * dVar5;
  *(double *)(lVar6 + 0x38) = local_120 * dVar5;
  *(double *)(lVar6 + 0x40) = local_118 * dVar5;
  *(double *)(lVar6 + 0x48) = local_110 * dVar5;
  *(double *)(lVar6 + 0x50) = local_108 * dVar5;
  if ((local_a0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b81f4 FUN_1482b81f4 body=490 status=ok
// SIG undefined FUN_1482b81f4(void)

void FUN_1482b81f4(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  longlong local_160;
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined8 local_128 [10];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [14];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x140) * 0x200 +
          *(int *)(*(longlong *)(param_1 + 8) + 0x144);
  FUN_1482b79e6(param_1 + 0x208,iVar7);
  FUN_1400bd09c(param_1 + 0x1f8,iVar7,1);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar13 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  uVar11 = 0;
  if ((uVar13 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar12 = 1;
    uVar2 = 1;
    if (1 < (int)uVar13) {
      uVar12 = uVar13;
    }
    do {
      uVar11 = uVar12;
      if (uVar12 == uVar2) break;
      uVar5 = uVar2 >> 9;
      uVar10 = uVar2 & 0x1ff;
      uVar11 = uVar2;
      uVar2 = uVar2 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar5] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  if (uVar11 != uVar13) {
    do {
      local_160 = (longlong)(int)uVar11 * 8 + *(longlong *)(param_1 + 0x1f8);
      local_168 = local_158;
      FUN_1482b39f8(param_1,local_128,uVar11,local_140);
      lVar4 = *(longlong *)(param_1 + 0x208);
      lVar6 = (longlong)(int)uVar11 * 0xe0;
      puVar8 = local_128;
      puVar9 = (undefined8 *)(lVar4 + lVar6);
      for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar8 = (undefined8 *)(lVar4 + 0x70 + lVar6);
      puVar8[-2] = local_c8;
      puVar8[-4] = local_d8;
      puVar8[-3] = uStack_d0;
      puVar8[-1] = local_c0;
      puVar9 = local_b8;
      for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar12 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar13) {
        uVar12 = uVar13;
      }
      do {
        uVar2 = uVar12;
        if (uVar12 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar2 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar2;
    } while (uVar11 != uVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482b83e0 FUN_1482b83e0 body=280 status=ok
// SIG undefined FUN_1482b83e0(void)

undefined8 FUN_1482b83e0(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *param_3;
  FUN_1482b84fa(param_2,(longlong)iVar1 * 0xe0 + *(longlong *)(param_1 + 0x198),
                (longlong)param_3[1] * 0xe0 + *(longlong *)(param_1 + 0x198));
  if (*(char *)(param_1 + 0x154) == '\0') {
    lVar2 = (longlong)param_3[2];
    if (lVar2 != -1) {
      FUN_1482b7a54(param_2,*(ulonglong *)(*(longlong *)(param_1 + 0x1f8) + lVar2 * 8) ^
                            0x8000000000000000,lVar2 * 0xe0 + *(longlong *)(param_1 + 0x208));
    }
    lVar2 = (longlong)param_3[3];
    if (lVar2 != -1) {
      FUN_1482b7a54(param_2,*(ulonglong *)(*(longlong *)(param_1 + 0x1f8) + lVar2 * 8) ^
                            0x8000000000000000,lVar2 * 0xe0 + *(longlong *)(param_1 + 0x208));
    }
  }
  if (*(char *)(param_1 + 0x156) == '\x01') {
    local_40 = param_1;
    local_38 = param_2;
    FUN_1482b86c0(&local_40,iVar1);
    FUN_1482b86c0(&local_40,param_3[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b84fa FUN_1482b84fa body=453 status=ok
// SIG undefined FUN_1482b84fa(void)

longlong FUN_1482b84fa(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  FUN_1482c7178();
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  dVar1 = *(double *)(param_2 + 0x68);
  *(double *)(param_1 + 0x68) = dVar1;
  *(double *)(param_1 + 0x50) = *(double *)(param_3 + 0x50) + *(double *)(param_1 + 0x50);
  *(double *)(param_1 + 0x58) = *(double *)(param_3 + 0x58) + *(double *)(param_1 + 0x58);
  *(double *)(param_1 + 0x60) = *(double *)(param_3 + 0x60) + *(double *)(param_1 + 0x60);
  *(double *)(param_1 + 0x68) = dVar1 + *(double *)(param_3 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = 0x3ff0000000000000;
  *(double *)(param_1 + 0x70) = *(double *)(param_2 + 0x70) + *(double *)(param_3 + 0x70);
  *(double *)(param_1 + 0x78) = (*(double *)(param_2 + 0x78) + *(double *)(param_3 + 0x78)) * 0.5;
  dVar1 = *(double *)(param_2 + 0x90);
  dVar2 = *(double *)(param_3 + 0x90);
  dVar3 = *(double *)(param_2 + 0x88);
  dVar4 = *(double *)(param_3 + 0x88);
  *(double *)(param_1 + 0x80) = *(double *)(param_2 + 0x80) + *(double *)(param_3 + 0x80);
  *(double *)(param_1 + 0x88) = dVar3 + dVar4;
  *(double *)(param_1 + 0x90) = dVar1 + dVar2;
  dVar1 = *(double *)(param_2 + 0xa8);
  dVar2 = *(double *)(param_3 + 0xa8);
  dVar3 = *(double *)(param_2 + 0xa0);
  dVar4 = *(double *)(param_3 + 0xa0);
  *(double *)(param_1 + 0x98) = *(double *)(param_2 + 0x98) + *(double *)(param_3 + 0x98);
  *(double *)(param_1 + 0xa0) = dVar3 + dVar4;
  *(double *)(param_1 + 0xa8) = dVar1 + dVar2;
  dVar1 = *(double *)(param_2 + 0xc0);
  dVar2 = *(double *)(param_3 + 0xc0);
  dVar3 = *(double *)(param_2 + 0xb8);
  dVar4 = *(double *)(param_3 + 0xb8);
  *(double *)(param_1 + 0xb0) = *(double *)(param_2 + 0xb0) + *(double *)(param_3 + 0xb0);
  *(double *)(param_1 + 0xb8) = dVar3 + dVar4;
  *(double *)(param_1 + 0xc0) = dVar1 + dVar2;
  *(double *)(param_1 + 200) = *(double *)(param_2 + 200) + *(double *)(param_3 + 200);
  *(double *)(param_1 + 0xd0) = *(double *)(param_2 + 0xd0) + *(double *)(param_3 + 0xd0);
  *(double *)(param_1 + 0xd8) = *(double *)(param_2 + 0xd8) + *(double *)(param_3 + 0xd8);
  return param_1;
}



// FUNCTION 1482b86c0 FUN_1482b86c0 body=357 status=ok
// SIG undefined FUN_1482b86c0(void)

void FUN_1482b86c0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  lVar4 = *(longlong *)(lVar1 + 8) + 0xb8;
  FUN_146be983e(&local_60,lVar4,param_2,0);
  if ((((local_60 != lVar4) || (local_58 != param_2)) || ((int)local_48 != -1)) ||
     (local_48._4_4_ != -1)) {
    do {
      if (*(int *)(lVar1 + 0x1b0) != *(int *)(lVar1 + 0x1dc)) {
        lVar2 = *(longlong *)(lVar1 + 0x1e8);
        if (*(longlong *)(lVar1 + 0x1e8) == 0) {
          lVar2 = lVar1 + 0x1e0;
        }
        iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0x1f0) - 1U & local_40) * 4);
        if (iVar3 != -1) {
          do {
            lVar2 = *(longlong *)(lVar1 + 0x1a8) + (longlong)iVar3 * 0x60;
            if (*(uint *)(*(longlong *)(lVar1 + 0x1a8) + (longlong)iVar3 * 0x60) == local_40) {
              if (lVar2 != -8 && lVar2 != 0) {
                FUN_1482bb79e(param_1[1]);
              }
              break;
            }
            iVar3 = *(int *)(lVar2 + 0x58);
          } while (iVar3 != -1);
        }
      }
      if (local_50 == 0) {
        local_54 = 0xffffffff;
        local_48 = 0xffffffffffffffff;
        local_48._4_4_ = -1;
        local_48._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_60);
      }
    } while (((local_60 != lVar4) || (local_58 != param_2)) ||
            (((int)local_48 != -1 || (local_48._4_4_ != -1))));
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482b8826 FUN_1482b8826 body=1625 status=ok
// SIG undefined FUN_1482b8826(void)

void FUN_1482b8826(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong local_1c8;
  ulonglong uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  undefined8 local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 0x1d0) * 0x200 +
          *(int *)(*(longlong *)(param_1 + 8) + 0x1d4);
  FUN_1482b8e80((longlong *)(param_1 + 0x220),iVar9);
  FUN_146bd223a(param_1 + 0x238);
  local_1a0 = CONCAT44(local_1a0._4_4_,0xffffffff);
  FUN_1448156a8(param_1 + 600,&local_1a0,iVar9);
  *(undefined4 *)(param_1 + 0x250) = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1a0 = 0xffffffff7f7fffff;
  FUN_1482b8eee(&local_1c8,&local_1a0,iVar9);
  lVar12 = *(longlong *)(param_1 + 8);
  uVar15 = *(int *)(lVar12 + 0x1d0) * 0x200 + *(int *)(lVar12 + 0x1d4);
  uVar10 = 0;
  if ((uVar15 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x1d8) - 1U))) {
    uVar11 = 1;
    uVar7 = 1;
    if (1 < (int)uVar15) {
      uVar11 = uVar15;
    }
    do {
      uVar10 = uVar11;
      if (uVar11 == uVar7) break;
      uVar8 = uVar7 >> 9;
      uVar13 = uVar7 & 0x1ff;
      uVar10 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar12 + 0x1d8))[uVar8] +
                                         (ulonglong)uVar13 * 2) - 1U));
  }
  if (uVar10 != uVar15) {
    do {
      puVar1 = (undefined4 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(uVar10 >> 9) * 8)
               + (ulonglong)((uVar10 & 0x1ff) << 4));
      local_1d8 = *puVar1;
      uStack_1d4 = puVar1[1];
      uStack_1d0 = puVar1[2];
      uStack_1cc = puVar1[3];
      FUN_1482b83e0(param_1,&local_1a0,&local_1d8);
      local_270 = uStack_1d4;
      local_278 = local_1d8;
      FUN_1482b8f60(param_1,&local_1f0,uVar10,&local_1a0);
      dVar4 = 0.0;
      dStack_1b0 = 0.0;
      local_1b8 = 0.0;
      if (1e-05 < ABS(dStack_130)) {
        dVar4 = 1.0 / dStack_130;
        local_1b8 = (local_110 * local_1e0 + local_120 * local_1f0 + dStack_118 * dStack_1e8 +
                    local_d8) * dVar4;
        dStack_1b0 = (local_f8 * local_1e0 + local_108 * local_1f0 + dStack_100 * dStack_1e8 +
                     dStack_d0) * dVar4;
        dVar4 = (local_1e0 * local_e0 + local_1f0 * local_f0 + dStack_1e8 * dStack_e8 + local_c8) *
                dVar4;
      }
      local_1a8 = 1.0 / local_128;
      local_1b8 = local_1b8 * local_1a8;
      dStack_1b0 = dStack_1b0 * local_1a8;
      local_1a8 = local_1a8 * dVar4;
      dVar4 = (double)FUN_1483009b4(&local_1a0,&local_1f0,&local_1b8);
      lVar6 = (longlong)(int)uVar10;
      *(float *)(local_1c8 + lVar6 * 8) = (float)dVar4;
      *(uint *)(local_1c8 + 4 + lVar6 * 8) = uVar10;
      local_1a8 = (double)local_140;
      local_1b8 = local_150;
      dStack_1b0 = dStack_148;
      local_1f8 = local_110;
      local_208 = local_120;
      dStack_200 = dStack_118;
      local_218 = local_f8;
      local_228 = local_108;
      dStack_220 = dStack_100;
      local_238 = local_e0;
      local_248 = local_f0;
      dStack_240 = dStack_e8;
      local_258 = local_1e0;
      local_268 = local_1f0;
      dVar4 = local_268;
      uStack_260 = dStack_1e8;
      dVar5 = uStack_260;
      lVar14 = *(longlong *)(param_1 + 0x220);
      lVar6 = lVar6 * 0x100;
      *(uint *)(lVar14 + lVar6) = uVar10;
      puVar2 = (undefined8 *)(lVar14 + 8 + lVar6);
      *puVar2 = local_1a0;
      puVar2[1] = uStack_198;
      puVar2 = (undefined8 *)(lVar14 + 0x18 + lVar6);
      *puVar2 = local_190;
      puVar2[1] = uStack_188;
      puVar2 = (undefined8 *)(lVar14 + 0x28 + lVar6);
      *puVar2 = local_180;
      puVar2[1] = uStack_178;
      puVar2 = (undefined8 *)(lVar14 + 0x38 + lVar6);
      *puVar2 = local_170;
      puVar2[1] = uStack_168;
      puVar2 = (undefined8 *)(lVar14 + 0x48 + lVar6);
      *puVar2 = local_160;
      puVar2[1] = uStack_158;
      pdVar3 = (double *)(lVar14 + 0x58 + lVar6);
      *pdVar3 = local_150;
      pdVar3[1] = dStack_148;
      *(undefined8 *)(lVar14 + 0x68 + lVar6) = local_140;
      puVar2 = (undefined8 *)(lVar14 + 0x70 + lVar6);
      *puVar2 = local_138;
      puVar2[1] = dStack_130;
      *(double *)(lVar14 + 0x80 + lVar6) = local_128;
      *(double *)(lVar14 + 0x98 + lVar6) = local_110;
      pdVar3 = (double *)(lVar14 + 0x88 + lVar6);
      *pdVar3 = local_120;
      pdVar3[1] = dStack_118;
      pdVar3 = (double *)(lVar14 + 0xa0 + lVar6);
      *pdVar3 = local_108;
      pdVar3[1] = dStack_100;
      *(double *)(lVar14 + 0xb0 + lVar6) = local_f8;
      pdVar3 = (double *)(lVar14 + 0xb8 + lVar6);
      *pdVar3 = local_f0;
      pdVar3[1] = dStack_e8;
      *(double *)(lVar14 + 200 + lVar6) = local_e0;
      pdVar3 = (double *)(lVar14 + 0xd0 + lVar6);
      *pdVar3 = local_d8;
      pdVar3[1] = dStack_d0;
      *(double *)(lVar14 + 0xe0 + lVar6) = local_c8;
      *(double *)(lVar14 + 0xf8 + lVar6) = local_1e0;
      local_268._0_4_ = SUB84(local_1f0,0);
      local_268._4_4_ = (undefined4)((ulonglong)local_1f0 >> 0x20);
      uStack_260._0_4_ = SUB84(dStack_1e8,0);
      uStack_260._4_4_ = (undefined4)((ulonglong)dStack_1e8 >> 0x20);
      puVar1 = (undefined4 *)(lVar14 + 0xe8 + lVar6);
      *puVar1 = (undefined4)local_268;
      puVar1[1] = local_268._4_4_;
      puVar1[2] = (undefined4)uStack_260;
      puVar1[3] = uStack_260._4_4_;
      uVar11 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar15) {
        uVar11 = uVar15;
      }
      do {
        uVar7 = uVar11;
        if (uVar11 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar7 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar12 + 0x1d8) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      uVar10 = uVar7;
      local_268 = dVar4;
      uStack_260 = dVar5;
    } while (uVar10 != uVar15);
  }
  FUN_148300beb(local_1c8,uStack_1c0 & 0xffffffff);
  lVar12 = (longlong)(int)uStack_1c0;
  if (0 < lVar12) {
    lVar14 = 0;
    do {
      uVar10 = *(uint *)(local_1c8 + 4 + lVar14 * 8);
      if (((-1 < (int)uVar10) &&
          (lVar6 = *(longlong *)(param_1 + 8),
          (int)uVar10 < *(int *)(lVar6 + 0x1d0) * 0x200 + *(int *)(lVar6 + 0x1d4))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar6 + 0x1d8) + (ulonglong)(uVar10 >> 9) * 8) +
                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        FUN_146b9cbf0(param_1 + 0x230,uVar10,*(undefined4 *)(local_1c8 + lVar14 * 8));
      }
      lVar14 = lVar14 + 1;
    } while (lVar12 != lVar14);
  }
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482b8e80 FUN_1482b8e80 body=109 status=ok
// SIG undefined FUN_1482b8e80(void)

void FUN_1482b8e80(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483007ac(param_1,iVar1);
    }
    FUN_1483006e8((longlong)iVar1 * 0x100 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148300832(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482b8eee FUN_1482b8eee body=113 status=ok
// SIG undefined FUN_1482b8eee(void)

void FUN_1482b8eee(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_1483008ce(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14830092e(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  }
  return;
}



// FUNCTION 1482b8f60 FUN_1482b8f60 body=1445 status=ok
// SIG undefined FUN_1482b8f60(void)

double * FUN_1482b8f60(longlong param_1,double *param_2,ulonglong param_3,undefined8 param_4,
                      uint param_5,uint param_6)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  double *pdVar7;
  ulonglong uVar8;
  double *pdVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar16;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8 [10];
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(char *)(param_1 + 0x268) == '\x01') && (*(char *)(param_1 + 0x155) == '\x01')) {
    lVar5 = *(longlong *)(param_1 + 8);
    if (*(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x1c0) + (param_3 >> 9 & 0x7fffff) * 8) + 0xc +
                (ulonglong)(((uint)param_3 & 0x1ff) << 4)) != -1) {
      if (*(char *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)param_5) == '\x01') {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(param_5 >> 9) * 8);
      }
      else {
        if (*(char *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)param_6) != '\x01')
        goto LAB_1482b9031;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(param_6 >> 9) * 8);
        param_5 = param_6;
      }
      param_2[2] = *(double *)(lVar5 + 0x10 + (ulonglong)(param_5 & 0x1ff) * 0x18);
      puVar1 = (undefined4 *)(lVar5 + (ulonglong)(param_5 & 0x1ff) * 0x18);
      uVar11 = *puVar1;
      uVar16 = puVar1[1];
      uVar17 = puVar1[2];
      uVar18 = puVar1[3];
      goto LAB_1482b9060;
    }
    if (*(int *)(param_1 + 0x150) != 1) {
      lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(param_5 >> 9) * 8);
      uVar10 = (ulonglong)(param_5 & 0x1ff);
      dVar12 = *(double *)(lVar3 + 8 + uVar10 * 0x18);
      dVar13 = *(double *)(lVar3 + 0x10 + uVar10 * 0x18);
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(param_6 >> 9) * 8);
      uVar8 = (ulonglong)(param_6 & 0x1ff);
      dVar14 = *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
      dVar15 = *(double *)(lVar5 + 8 + uVar8 * 0x18);
      *param_2 = (*(double *)(lVar3 + uVar10 * 0x18) + *(double *)(lVar5 + uVar8 * 0x18)) * 0.5;
      param_2[1] = (dVar12 + dVar15) * 0.5;
      param_2[2] = (dVar13 + dVar14) * 0.5;
      goto LAB_1482b9162;
    }
  }
LAB_1482b9031:
  iVar2 = *(int *)(param_1 + 0x150);
  if (iVar2 == 2) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    lVar3 = *(longlong *)(lVar5 + (ulonglong)(param_5 >> 9) * 8);
    lVar5 = *(longlong *)(lVar5 + (ulonglong)(param_6 >> 9) * 8);
    uVar10 = (ulonglong)(param_5 & 0x1ff);
    uVar8 = (ulonglong)(param_6 & 0x1ff);
    local_68 = (*(double *)(lVar3 + 0x10 + uVar10 * 0x18) + *(double *)(lVar5 + 0x10 + uVar8 * 0x18)
               ) * 0.5;
    dStack_70 = (*(double *)(lVar3 + 8 + uVar10 * 0x18) + *(double *)(lVar5 + 8 + uVar8 * 0x18)) *
                0.5;
    local_78 = (*(double *)(lVar3 + uVar10 * 0x18) + *(double *)(lVar5 + uVar8 * 0x18)) * 0.5;
    if ((*(char *)(param_1 + 0x138) == '\x02') &&
       (plVar6 = *(longlong **)(param_1 + 0xd0), plVar6 != (longlong *)0x0)) {
      lVar5 = *plVar6;
      pdVar7 = &local_78;
LAB_1482b913b:
      (**(code **)(lVar5 + 8))(plVar6,param_2,pdVar7,0xffffffff);
      goto LAB_1482b9162;
    }
    param_2[2] = local_68;
    dVar12 = local_78;
    dVar13 = dStack_70;
  }
  else if (iVar2 == 0) {
    local_88 = DAT_14c8464f0;
    local_98 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_90 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    cVar4 = FUN_1482b9506(param_4);
    if (cVar4 == '\0') {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
      lVar3 = *(longlong *)(lVar5 + (ulonglong)(param_5 >> 9) * 8);
      local_e8[8] = *(double *)(lVar3 + 0x10 + (ulonglong)(param_5 & 0x1ff) * 0x18);
      pdVar7 = (double *)(lVar3 + (ulonglong)(param_5 & 0x1ff) * 0x18);
      local_e8[6] = *pdVar7;
      local_e8[7] = pdVar7[1];
      lVar5 = *(longlong *)(lVar5 + (ulonglong)(param_6 >> 9) * 8);
      local_e8[4] = *(double *)(lVar5 + 0x10 + (ulonglong)(param_6 & 0x1ff) * 0x18);
      pdVar7 = (double *)(lVar5 + (ulonglong)(param_6 & 0x1ff) * 0x18);
      local_e8[2] = *pdVar7;
      local_e8[3] = pdVar7[1];
      local_68 = (local_e8[8] + local_e8[4]) * 0.5;
      dStack_70 = (local_e8[7] + local_e8[3]) * 0.5;
      local_78 = (local_e8[6] + local_e8[2]) * 0.5;
      dVar14 = local_68;
      dVar12 = local_78;
      dVar13 = dStack_70;
      if ((*(char *)(param_1 + 0x138) == '\x02') &&
         (plVar6 = *(longlong **)(param_1 + 0xd0), plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 8))(plVar6,&local_f8,&local_78,0xffffffff);
        dVar14 = local_e8[0];
        dVar12 = (double)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
        dVar13 = (double)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
      }
      local_e8[0] = dVar14;
      pdVar7 = local_e8 + 6;
      local_f8 = dVar12;
      uStack_f0 = dVar13;
      FUN_1482b4e8c(param_4,pdVar7,&local_78);
      dVar13 = (double)FUN_1483009b4(param_4,pdVar7,&local_78);
      pdVar9 = local_e8 + 2;
      FUN_1482b4e8c(param_4,pdVar9,&local_78);
      dVar14 = (double)FUN_1483009b4(param_4,pdVar9,&local_78);
      FUN_1482b4e8c(param_4,&local_f8,&local_78);
      dVar15 = (double)FUN_1483009b4(param_4,&local_f8,&local_78);
      dVar12 = dVar13;
      if (dVar14 <= dVar13) {
        dVar12 = dVar14;
      }
      if (dVar15 <= dVar12) {
        dVar12 = dVar15;
      }
      if (dVar12 != dVar14) {
        pdVar9 = (double *)&local_f8;
      }
      if (NAN(dVar12) || NAN(dVar14)) {
        pdVar9 = (double *)&local_f8;
      }
      if (dVar12 != dVar13) {
        pdVar7 = pdVar9;
      }
      if (NAN(dVar12) || NAN(dVar13)) {
        pdVar7 = pdVar9;
      }
      param_2[2] = pdVar7[2];
      dVar12 = *pdVar7;
      dVar13 = pdVar7[1];
    }
    else {
      if ((*(char *)(param_1 + 0x138) == '\x02') &&
         (plVar6 = *(longlong **)(param_1 + 0xd0), plVar6 != (longlong *)0x0)) {
        lVar5 = *plVar6;
        pdVar7 = (double *)&local_98;
        goto LAB_1482b913b;
      }
      param_2[2] = local_88;
      dVar12 = local_98;
      dVar13 = uStack_90;
    }
  }
  else {
    if (iVar2 != 1) {
      param_2[2] = DAT_14c8464f0;
      uVar11 = (undefined4)DAT_14c8464e0;
      uVar16 = DAT_14c8464e0._4_4_;
      uVar17 = (undefined4)DAT_14c8464e8;
      uVar18 = DAT_14c8464e8._4_4_;
LAB_1482b9060:
      *(undefined4 *)param_2 = uVar11;
      *(undefined4 *)((longlong)param_2 + 4) = uVar16;
      *(undefined4 *)(param_2 + 1) = uVar17;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar18;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    lVar3 = *(longlong *)(lVar5 + (ulonglong)(param_5 >> 9) * 8);
    local_88 = *(double *)(lVar3 + 0x10 + (ulonglong)(param_5 & 0x1ff) * 0x18);
    pdVar7 = (double *)(lVar3 + (ulonglong)(param_5 & 0x1ff) * 0x18);
    local_98 = *pdVar7;
    uStack_90 = pdVar7[1];
    lVar5 = *(longlong *)(lVar5 + (ulonglong)(param_6 >> 9) * 8);
    local_e8[8] = *(double *)(lVar5 + 0x10 + (ulonglong)(param_6 & 0x1ff) * 0x18);
    pdVar9 = local_e8 + 6;
    pdVar7 = (double *)(lVar5 + (ulonglong)(param_6 & 0x1ff) * 0x18);
    local_e8[6] = *pdVar7;
    local_e8[7] = pdVar7[1];
    FUN_1482b4e8c(param_4,&local_98,&local_78);
    dVar12 = (double)FUN_1483009b4(param_4,&local_98,&local_78);
    FUN_1482b4e8c(param_4,pdVar9,&local_78);
    dVar13 = (double)FUN_1483009b4(param_4,pdVar9,&local_78);
    if (dVar12 < dVar13) {
      pdVar9 = (double *)&local_98;
    }
    param_2[2] = pdVar9[2];
    dVar12 = *pdVar9;
    dVar13 = pdVar9[1];
  }
  *param_2 = dVar12;
  param_2[1] = dVar13;
LAB_1482b9162:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b9506 FUN_1482b9506 body=1126 status=ok
// SIG undefined FUN_1482b9506(void)

void FUN_1482b9506(double *param_1,double *param_2)

{
  char cVar1;
  longlong lVar2;
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
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar10 = 0.0;
  lVar2 = 0x90;
  dVar12 = 0.0;
  dVar8 = 0.0;
  dVar7 = 0.0;
  dVar4 = 0.0;
  dVar3 = 0.0;
  do {
    dVar6 = *(double *)((longlong)param_1 + lVar2 + -0x10);
    dVar5 = *(double *)((longlong)param_1 + lVar2 + -8);
    dVar10 = dVar10 - dVar6 * dVar6;
    dVar12 = dVar12 - dVar6 * dVar5;
    dVar9 = *(double *)((longlong)param_1 + lVar2);
    dVar8 = dVar8 - dVar6 * dVar9;
    dVar7 = dVar7 - dVar5 * dVar5;
    dVar4 = dVar4 - dVar5 * dVar9;
    dVar3 = dVar3 - dVar9 * dVar9;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xd8);
  dVar6 = (double)(-(ulonglong)(1e-07 < ABS(param_1[0xe])) & (ulonglong)(1.0 / param_1[0xe]));
  local_e8 = dVar10 * dVar6 + *param_1;
  local_e0 = dVar12 * dVar6 + param_1[1];
  local_d8 = dVar8 * dVar6 + param_1[2];
  local_d0 = dVar7 * dVar6 + param_1[3];
  local_c8 = dVar4 * dVar6 + param_1[4];
  local_c0 = dVar3 * dVar6 + param_1[5];
  cVar1 = FUN_148300f5c(&local_e8,&local_118);
  if (cVar1 != '\0') {
    dVar3 = param_1[0xd];
    dVar9 = param_1[10] * 0.3333333333333333;
    dVar11 = param_1[0xb] * 0.3333333333333333;
    dVar12 = param_1[0xc] * 0.3333333333333333;
    dVar4 = param_1[0x1b];
    dVar7 = param_1[0x19];
    dVar8 = param_1[0x1a];
    dVar5 = (param_1[0x18] * dVar4 + param_1[0x12] * dVar7 + param_1[0x15] * dVar8) * dVar6 -
            param_1[8];
    dVar10 = (param_1[0x17] * dVar4 + param_1[0x11] * dVar7 + param_1[0x14] * dVar8) * dVar6 -
             param_1[7];
    dVar7 = (dVar4 * param_1[0x16] + dVar7 * param_1[0x10] + dVar8 * param_1[0x13]) * dVar6 -
            param_1[6];
    dVar13 = local_108 * dVar5 + local_118 * dVar7 + dVar10 * local_110;
    dVar4 = local_f8 * dVar5 + local_110 * dVar7 + dVar10 * local_100;
    dVar6 = dVar5 * local_f0 + dVar7 * local_108 + dVar10 * local_f8;
    *param_2 = dVar13;
    param_2[1] = dVar4;
    param_2[2] = dVar6;
    dVar8 = local_108 * dVar12 + local_118 * dVar9 + dVar11 * local_110;
    dVar7 = local_f8 * dVar12 + local_110 * dVar9 + local_100 * dVar11;
    dVar10 = local_f0 * dVar12 + local_108 * dVar9 + dVar11 * local_f8;
    dVar3 = (dVar12 * dVar6 + dVar9 * dVar13 + dVar11 * dVar4 + dVar3 * 0.3333333333333333) /
            (dVar12 * dVar10 + dVar9 * dVar8 + dVar11 * dVar7);
    if (ABS(dVar3) <= 100000.0) {
      *param_2 = dVar13 - dVar8 * dVar3;
      param_2[1] = dVar4 - dVar7 * dVar3;
      param_2[2] = dVar6 - dVar10 * dVar3;
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482b996e FUN_1482b996e body=7102 status=ok
// SIG undefined FUN_1482b996e(void)

void FUN_1482b996e(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  int *piVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  code **ppcVar24;
  longlong *plVar25;
  double *pdVar26;
  double *pdVar27;
  ulonglong uVar28;
  longlong lVar29;
  int iVar30;
  double **ppdVar31;
  undefined8 *puVar32;
  code *pcVar33;
  longlong lVar34;
  bool bVar35;
  code *pcVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_588 [32];
  undefined8 *local_568;
  undefined4 *local_560;
  longlong local_550;
  int local_544;
  longlong local_540;
  int local_534;
  int local_530;
  int local_52c;
  undefined8 local_528;
  undefined8 uStack_520;
  double *local_518;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  double dStack_4f0;
  double *local_4e8;
  double local_4d8;
  double dStack_4d0;
  double *local_4c8;
  code *local_4b8;
  double dStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  double *local_458;
  double local_450;
  double adStack_448 [2];
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  double *local_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  double *local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  double *local_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  code **local_3b8;
  undefined8 local_3b0;
  code *local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  longlong *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  code *local_358;
  int iStack_350;
  undefined4 uStack_34c;
  double *local_348;
  undefined8 local_340;
  double *local_338;
  double local_330;
  double local_328;
  double dStack_320;
  double *local_318;
  double local_310;
  double dStack_308;
  double *local_300;
  double local_2f8;
  double dStack_2f0;
  double *local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  int iStack_2b0;
  int iStack_2ac;
  double local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  int iStack_288;
  int iStack_284;
  double local_280;
  double *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  ulonglong local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  longlong *plStack_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  longlong *plStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  double local_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  longlong local_1c8 [2];
  longlong *local_1b8;
  longlong local_1a8 [4];
  double local_188;
  double dStack_180;
  double *local_178;
  double local_168 [4];
  code *local_148;
  double dStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_588;
  iVar3 = *param_2;
  local_534 = param_2[6];
  local_540 = (longlong)param_2[1];
  local_544 = param_2[7];
  local_52c = param_2[2];
  local_530 = param_2[3];
  if (*(char *)(param_1 + 0x156) == '\x01') {
    uVar18 = param_2[8];
    uVar4 = param_2[9];
    dVar37 = *(double *)(param_2 + 10);
    local_4f8 = dVar37;
    if (*(char *)(param_1 + 200) == '\x01') {
      cVar17 = FUN_1482bb52e(param_1 + 0x10,(ulonglong)dVar37 & 0xffffffff);
      lVar23 = param_1 + 0x1a8;
      if (cVar17 == '\0') {
        iVar21 = (int)((ulonglong)dVar37 >> 0x20);
        FUN_1483011e6(lVar23,(ulonglong)dVar37 & 0xffffffff);
      }
      else {
        local_4b8 = (code *)&local_4f8;
        FUN_1483010ba(lVar23,&local_3a8);
        iVar21 = local_4f8._4_4_;
      }
      if (iVar21 != -1) {
        cVar17 = FUN_1482bb52e(param_1 + 0x10,iVar21);
        if (cVar17 == '\0') {
          FUN_1483011e6(lVar23,local_4f8._4_4_);
        }
        else {
LAB_1482bb458:
          local_4b8 = (code *)((longlong)&local_4f8 + 4);
          FUN_1483010ba(param_1 + 0x1a8,&local_3a8);
        }
      }
LAB_1482b9af6:
      FUN_1483011e6(param_1 + 0x1a8,uVar18);
      uVar18 = uVar4;
      if (uVar4 != 0xffffffff) goto LAB_1482b9b11;
    }
    else {
      plVar25 = (longlong *)(param_1 + 0x1a8);
      if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
        lVar23 = param_1 + 0x1e0;
        if (*(longlong *)(param_1 + 0x1e8) != 0) {
          lVar23 = *(longlong *)(param_1 + 0x1e8);
        }
        iVar21 = *(int *)(lVar23 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & uVar18) * 4);
        if (iVar21 != -1) {
          do {
            lVar23 = *plVar25 + (longlong)iVar21 * 0x60;
            if (*(uint *)(*plVar25 + (longlong)iVar21 * 0x60) == uVar18) {
              if ((lVar23 + 8U & 0xfffffffffffffff7) != 0) {
                local_4b8 = (code *)&local_4f8;
                FUN_1483010ba(plVar25,&local_3a8);
              }
              break;
            }
            iVar21 = *(int *)(lVar23 + 0x58);
          } while (iVar21 != -1);
        }
      }
      if (uVar4 != 0xffffffff) {
        if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
          lVar23 = param_1 + 0x1e0;
          if (*(longlong *)(param_1 + 0x1e8) != 0) {
            lVar23 = *(longlong *)(param_1 + 0x1e8);
          }
          iVar21 = *(int *)(lVar23 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & uVar4) * 4);
          if (iVar21 != -1) {
            do {
              lVar23 = *plVar25 + (longlong)iVar21 * 0x60;
              if (*(uint *)(*plVar25 + (longlong)iVar21 * 0x60) == uVar4) {
                if ((lVar23 + 8U & 0xfffffffffffffff7) != 0) goto LAB_1482bb458;
                break;
              }
              iVar21 = *(int *)(lVar23 + 0x58);
            } while (iVar21 != -1);
            goto LAB_1482b9af6;
          }
        }
        FUN_1483011e6(plVar25,uVar18);
        uVar18 = uVar4;
      }
LAB_1482b9b11:
      FUN_1483011e6(param_1 + 0x1a8,uVar18);
    }
    dVar37 = *(double *)(param_1 + 400);
    pcVar36 = (code *)(*(longlong *)(param_1 + 8) + 0xb8);
    FUN_146be983e(&local_3a8,pcVar36,iVar3,0);
    if ((((local_3a8 != pcVar36) || ((int)uStack_3a0 != iVar3)) || ((int)uStack_390 != -1)) ||
       (uStack_390._4_4_ != -1)) {
      local_550 = param_1 + 0x1e0;
      do {
        if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
          lVar23 = *(longlong *)(param_1 + 0x1e8);
          if (*(longlong *)(param_1 + 0x1e8) == 0) {
            lVar23 = local_550;
          }
          iVar21 = *(int *)(lVar23 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & (uint)local_388) *
                                     4);
          if (iVar21 != -1) {
            lVar23 = *(longlong *)(param_1 + 8);
            lVar22 = *(longlong *)
                      (*(longlong *)(lVar23 + 0x1c0) + (ulonglong)((uint)local_388 >> 9) * 8);
            uVar28 = (ulonglong)(((uint)local_388 & 0x1ff) << 4);
            uVar4 = *(uint *)(lVar22 + 4 + uVar28);
            iVar30 = *(int *)(lVar22 + 0xc + uVar28);
            do {
              lVar34 = *(longlong *)(param_1 + 0x1a8) + (longlong)iVar21 * 0x60;
              if (*(uint *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar21 * 0x60) ==
                  (uint)local_388) {
                if ((undefined8 *)(lVar34 + 8) != (undefined8 *)0x0 && lVar34 != 0) {
                  lVar29 = *(longlong *)
                            (*(longlong *)(lVar23 + 0x10) +
                            (ulonglong)(*(uint *)(lVar22 + uVar28) >> 9) * 8);
                  uVar20 = (ulonglong)(*(uint *)(lVar22 + uVar28) & 0x1ff);
                  local_218 = *(double **)(lVar29 + 0x10 + uVar20 * 0x18);
                  pdVar26 = (double *)(lVar29 + uVar20 * 0x18);
                  local_228 = (code *)*pdVar26;
                  uStack_220 = (longlong *)pdVar26[1];
                  lVar29 = *(longlong *)(*(longlong *)(lVar23 + 0x10) + (ulonglong)(uVar4 >> 9) * 8)
                  ;
                  uVar20 = (ulonglong)(uVar4 & 0x1ff);
                  local_2b8 = *(double **)(lVar29 + 0x10 + uVar20 * 0x18);
                  pdVar26 = (double *)(lVar29 + uVar20 * 0x18);
                  local_2c8 = (code *)*pdVar26;
                  uStack_2c0 = pdVar26[1];
                  FUN_146c13dec(lVar23,&local_188,*(undefined4 *)(lVar22 + 8 + uVar28));
                  FUN_1482bb582(&local_4b8,&local_228,&local_2c8,&local_188);
                  ppcVar24 = &local_4b8;
                  puVar32 = (undefined8 *)(lVar34 + 8);
                  for (lVar23 = 10; lVar23 != 0; lVar23 = lVar23 + -1) {
                    *puVar32 = *ppcVar24;
                    ppcVar24 = ppcVar24 + 1;
                    puVar32 = puVar32 + 1;
                  }
                  if (iVar30 != -1) {
                    FUN_146c13dec(*(undefined8 *)(param_1 + 8),&local_4d8,iVar30);
                    FUN_1482bb582(&local_4b8,&local_228,&local_2c8,&local_4d8);
                    *(double *)(lVar34 + 8) = (double)local_4b8 + *(double *)(lVar34 + 8);
                    *(double *)(lVar34 + 0x10) = dStack_4b0 + *(double *)(lVar34 + 0x10);
                    *(double *)(lVar34 + 0x18) = local_4a8 + *(double *)(lVar34 + 0x18);
                    *(double *)(lVar34 + 0x20) = uStack_4a0 + *(double *)(lVar34 + 0x20);
                    *(double *)(lVar34 + 0x28) = (double)local_498 + *(double *)(lVar34 + 0x28);
                    *(double *)(lVar34 + 0x30) = uStack_490 + *(double *)(lVar34 + 0x30);
                    *(double *)(lVar34 + 0x38) = local_488 + *(double *)(lVar34 + 0x38);
                    *(double *)(lVar34 + 0x40) = dStack_480 + *(double *)(lVar34 + 0x40);
                    *(double *)(lVar34 + 0x48) = local_478 + *(double *)(lVar34 + 0x48);
                    *(double *)(lVar34 + 0x50) = dStack_470 + *(double *)(lVar34 + 0x50);
                  }
                  *(double *)(lVar34 + 8) = *(double *)(lVar34 + 8) * dVar37;
                  *(double *)(lVar34 + 0x10) = *(double *)(lVar34 + 0x10) * dVar37;
                  *(double *)(lVar34 + 0x18) = *(double *)(lVar34 + 0x18) * dVar37;
                  *(double *)(lVar34 + 0x20) = *(double *)(lVar34 + 0x20) * dVar37;
                  *(double *)(lVar34 + 0x28) = *(double *)(lVar34 + 0x28) * dVar37;
                  *(double *)(lVar34 + 0x30) = *(double *)(lVar34 + 0x30) * dVar37;
                  *(double *)(lVar34 + 0x38) = *(double *)(lVar34 + 0x38) * dVar37;
                  *(double *)(lVar34 + 0x40) = *(double *)(lVar34 + 0x40) * dVar37;
                  *(double *)(lVar34 + 0x48) = *(double *)(lVar34 + 0x48) * dVar37;
                  *(double *)(lVar34 + 0x50) = *(double *)(lVar34 + 0x50) * dVar37;
                }
                break;
              }
              iVar21 = *(int *)(lVar34 + 0x58);
            } while (iVar21 != -1);
          }
        }
        if ((int)local_398 == 0) {
          uStack_3a0 = (double)CONCAT44(0xffffffff,(int)uStack_3a0);
          uStack_390 = 0xffffffffffffffff;
          uStack_390._4_4_ = -1;
          uStack_390._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_3a8);
        }
      } while (((local_3a8 != pcVar36) || ((int)uStack_3a0 != iVar3)) ||
              (((int)uStack_390 != -1 || (uStack_390._4_4_ != -1))));
    }
  }
  if (*(char *)(param_1 + 0x154) != '\x01') {
    uStack_490 = *(double *)(param_1 + 8);
    local_4a8 = 0.0;
    local_498 = &PTR_LAB_149f3aae0;
    local_488 = (double)CONCAT44(local_488._4_4_,iVar3);
    local_4b8 = FUN_146be9588;
    local_3a8 = (code *)((longlong)uStack_490 + 0xb8);
    uStack_3a0 = (double)CONCAT44(uStack_3a0._4_4_,iVar3);
    local_540 = (longlong)iVar3;
    FUN_146be94ac(&local_188,&local_3a8,&local_4b8);
    local_1d8 = 0xffffffffffffffff;
    local_1c8[0] = 0;
    local_1b8 = (longlong *)0x0;
    local_228 = local_148;
    uStack_220 = (longlong *)dStack_140;
    local_218 = (double *)CONCAT44(uStack_134,local_138);
    uStack_210 = CONCAT44(uStack_12c,uStack_130);
    local_208 = local_128;
    local_1f0 = local_110;
    uStack_1ec = uStack_10c;
    iStack_1e8 = iStack_108;
    iStack_1e4 = iStack_104;
    local_1e0 = local_100;
    FUN_146be971a(local_1c8,&local_188);
    local_1cc = 0;
    FUN_146bfd1f0(&local_228);
    local_278 = (double *)0xffffffffffffffff;
    local_268 = 0;
    plStack_258 = (longlong *)0x0;
    local_2c8 = (code *)CONCAT44(uStack_11c,local_120);
    uStack_2c0 = (double)CONCAT44(uStack_114,uStack_118);
    local_2b8 = (double *)CONCAT44(uStack_10c,local_110);
    iStack_2b0 = iStack_108;
    iStack_2ac = iStack_104;
    local_2a8 = local_100;
    local_2a0 = local_120;
    uStack_29c = uStack_11c;
    uStack_298 = uStack_118;
    uStack_294 = uStack_114;
    local_290 = local_110;
    uStack_28c = uStack_10c;
    iStack_288 = iStack_108;
    iStack_284 = iStack_104;
    local_280 = local_100;
    FUN_146be971a(&local_268,&local_188);
    uStack_26c = 0;
    FUN_146bfd1f0(&local_2c8);
    do {
      uVar4 = local_1d0;
      if (local_228 == local_2c8) {
        if ((((int)uStack_220 == (int)uStack_2c0) && ((int)uStack_210 == iStack_2b0)) &&
           (uStack_210._4_4_ == iStack_2ac)) goto LAB_1482b9eeb;
      }
      lVar34 = (longlong)(int)local_1d0;
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + lVar34 * 8);
      lVar23 = *(longlong *)(param_1 + 0x208);
      lVar29 = lVar34 * 0xe0;
      puVar32 = (undefined8 *)(lVar23 + lVar29);
      ppcVar24 = &local_4b8;
      for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
        *ppcVar24 = (code *)*puVar32;
        puVar32 = puVar32 + 1;
        ppcVar24 = ppcVar24 + 1;
      }
      pdVar26 = (double *)(lVar23 + 0x70 + lVar29);
      local_458 = (double *)pdVar26[-2];
      local_468 = (code *)pdVar26[-4];
      uStack_460 = (longlong *)pdVar26[-3];
      local_450 = pdVar26[-1];
      pdVar27 = adStack_448;
      for (lVar23 = 0xe; lVar23 != 0; lVar23 = lVar23 + -1) {
        *pdVar27 = *pdVar26;
        pdVar26 = pdVar26 + 1;
        pdVar27 = pdVar27 + 1;
      }
      local_560 = &local_508;
      local_568 = &local_4f8;
      FUN_1482b39f8(param_1,&local_3a8,uVar4,&local_4d8);
      *(ulonglong *)(*(longlong *)(param_1 + 0x1f8) + lVar34 * 8) = CONCAT44(uStack_504,local_508);
      lVar23 = *(longlong *)(param_1 + 0x208);
      ppcVar24 = &local_3a8;
      puVar32 = (undefined8 *)(lVar23 + lVar29);
      for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
        *puVar32 = *ppcVar24;
        ppcVar24 = ppcVar24 + 1;
        puVar32 = puVar32 + 1;
      }
      puVar32 = (undefined8 *)(lVar23 + 0x70 + lVar29);
      puVar32[-2] = local_348;
      puVar32[-4] = local_358;
      puVar32[-3] = CONCAT44(uStack_34c,iStack_350);
      puVar32[-1] = local_340;
      ppdVar31 = &local_338;
      for (lVar23 = 0xe; lVar23 != 0; lVar23 = lVar23 + -1) {
        *puVar32 = *ppdVar31;
        ppdVar31 = ppdVar31 + 1;
        puVar32 = puVar32 + 1;
      }
      lVar23 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar4 >> 9) * 8);
      uStack_520 = (double)CONCAT44(uStack_520._4_4_,
                                    *(undefined4 *)(lVar23 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc));
      local_528 = *(code **)(lVar23 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
      lVar23 = 0;
      do {
        iVar21 = *(int *)((longlong)&local_528 + lVar23 * 4);
        if (iVar21 != iVar3) {
          lVar22 = (longlong)iVar21 * 0xe0;
          FUN_1482b7a54(*(longlong *)(param_1 + 0x198) + lVar22,(int)uVar2,&local_4b8);
          FUN_1482b7a54(lVar22 + *(longlong *)(param_1 + 0x198),local_508,&local_3a8);
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 != 3);
      FUN_146bfd1f0(&local_228);
    } while( true );
  }
  lVar23 = *(longlong *)(param_1 + 0x198);
  lVar34 = (longlong)iVar3 * 0xe0;
  puVar32 = (undefined8 *)(lVar23 + lVar34);
  FUN_1482b84fa(&local_4b8,puVar32,local_540 * 0xe0 + lVar23);
  ppcVar24 = &local_4b8;
  for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar32 = *ppcVar24;
    ppcVar24 = ppcVar24 + 1;
    puVar32 = puVar32 + 1;
  }
  pdVar27 = (double *)(lVar23 + 0x70 + lVar34);
  pdVar27[-2] = (double)local_458;
  pdVar27[-4] = (double)local_468;
  pdVar27[-3] = (double)uStack_460;
  pdVar27[-1] = local_450;
  lVar23 = 0xe;
  pdVar26 = adStack_448;
LAB_1482ba43d:
  for (; lVar23 != 0; lVar23 = lVar23 + -1) {
    *pdVar27 = *pdVar26;
    pdVar26 = pdVar26 + 1;
    pdVar27 = pdVar27 + 1;
  }
  if (*(char *)(param_1 + 0x154) == '\x01') {
    pcVar36 = (code *)(*(longlong *)(param_1 + 8) + 0xb8);
    FUN_146be983e(&local_3a8,pcVar36,iVar3,0);
    if ((((local_3a8 != pcVar36) || ((int)uStack_3a0 != iVar3)) || ((int)uStack_390 != -1)) ||
       (uStack_390._4_4_ != -1)) {
      do {
        uVar28 = (ulonglong)local_388;
        uVar4 = (uint)local_388;
        puVar1 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                   (ulonglong)((uint)local_388 >> 9) * 8) +
                 (ulonglong)(((uint)local_388 & 0x1ff) << 4));
        local_508 = *puVar1;
        uStack_504 = puVar1[1];
        uStack_500 = puVar1[2];
        uStack_4fc = puVar1[3];
        FUN_1482b83e0(param_1,&local_4b8,&local_508);
        local_560 = (undefined4 *)CONCAT44(local_560._4_4_,uStack_504);
        local_568 = (undefined8 *)CONCAT44(local_568._4_4_,local_508);
        FUN_1482b8f60(param_1,&local_2c8,uVar28 & 0xffffffff,&local_4b8);
        dVar39 = local_3e0;
        dVar15 = dStack_3e8;
        dVar14 = local_3f0;
        dVar13 = adStack_448[1];
        dVar12 = adStack_448[0];
        dVar37 = 0.0;
        dVar6 = 0.0;
        dVar5 = 0.0;
        if (1e-05 < ABS(adStack_448[0])) {
          dVar37 = 1.0 / adStack_448[0];
          dVar5 = ((double)local_428 * (double)local_2b8 +
                   (double)CONCAT44(uStack_434,local_438) * (double)local_2c8 +
                   (double)CONCAT44(uStack_42c,uStack_430) * uStack_2c0 + local_3f0) * dVar37;
          dVar6 = ((double)local_410 * (double)local_2b8 +
                   (double)CONCAT44(uStack_41c,local_420) * (double)local_2c8 +
                   (double)CONCAT44(uStack_414,uStack_418) * uStack_2c0 + dStack_3e8) * dVar37;
          dVar37 = ((double)local_2b8 * (double)local_3f8 +
                    (double)local_2c8 * (double)CONCAT44(uStack_404,local_408) +
                    uStack_2c0 * (double)CONCAT44(uStack_3fc,uStack_400) + local_3e0) * dVar37;
        }
        dVar38 = 1.0 / adStack_448[1];
        local_228 = (code *)(dVar5 * dVar38);
        uStack_220 = (longlong *)(dVar6 * dVar38);
        local_218 = (double *)(dVar38 * dVar37);
        dVar37 = (double)FUN_1483009b4(&local_4b8,&local_2c8,&local_228);
        local_218 = local_458;
        local_228 = local_468;
        uStack_220 = uStack_460;
        local_178 = local_428;
        local_188 = (double)CONCAT44(uStack_434,local_438);
        dStack_180 = (double)CONCAT44(uStack_42c,uStack_430);
        local_4c8 = local_410;
        local_4d8 = (double)CONCAT44(uStack_41c,local_420);
        dStack_4d0 = (double)CONCAT44(uStack_414,uStack_418);
        local_4e8 = local_3f8;
        local_4f8 = (double)CONCAT44(uStack_404,local_408);
        dStack_4f0 = (double)CONCAT44(uStack_3fc,uStack_400);
        local_518 = local_2b8;
        local_528 = local_2c8;
        pcVar33 = local_528;
        uStack_520 = uStack_2c0;
        dVar5 = uStack_520;
        lVar23 = *(longlong *)(param_1 + 0x220);
        lVar22 = (longlong)(int)uVar4 * 0x100;
        *(uint *)(lVar23 + lVar22) = uVar4;
        plVar25 = (longlong *)(lVar23 + 8 + lVar22);
        *plVar25 = (longlong)local_4b8;
        plVar25[1] = (longlong)dStack_4b0;
        puVar1 = (undefined4 *)(lVar23 + 0x18 + lVar22);
        *puVar1 = (undefined4)local_4a8;
        puVar1[1] = local_4a8._4_4_;
        puVar1[2] = (undefined4)uStack_4a0;
        puVar1[3] = uStack_4a0._4_4_;
        puVar1 = (undefined4 *)(lVar23 + 0x28 + lVar22);
        *puVar1 = (undefined4)local_498;
        puVar1[1] = local_498._4_4_;
        puVar1[2] = (undefined4)uStack_490;
        puVar1[3] = uStack_490._4_4_;
        pdVar26 = (double *)(lVar23 + 0x38 + lVar22);
        *pdVar26 = local_488;
        pdVar26[1] = dStack_480;
        pdVar26 = (double *)(lVar23 + 0x48 + lVar22);
        *pdVar26 = local_478;
        pdVar26[1] = dStack_470;
        pdVar26 = (double *)(lVar23 + 0x58 + lVar22);
        *pdVar26 = (double)local_468;
        pdVar26[1] = (double)uStack_460;
        *(double **)(lVar23 + 0x68 + lVar22) = local_458;
        *(double *)(lVar23 + 0x70 + lVar22) = local_450;
        *(double *)(lVar23 + 0x78 + lVar22) = dVar12;
        *(double *)(lVar23 + 0x80 + lVar22) = dVar13;
        *(double **)(lVar23 + 0x98 + lVar22) = local_428;
        pdVar26 = (double *)(lVar23 + 0x88 + lVar22);
        *pdVar26 = local_188;
        pdVar26[1] = dStack_180;
        pdVar26 = (double *)(lVar23 + 0xa0 + lVar22);
        *pdVar26 = local_4d8;
        pdVar26[1] = dStack_4d0;
        *(double **)(lVar23 + 0xb0 + lVar22) = local_410;
        pdVar26 = (double *)(lVar23 + 0xb8 + lVar22);
        *pdVar26 = local_4f8;
        pdVar26[1] = dStack_4f0;
        *(double **)(lVar23 + 200 + lVar22) = local_3f8;
        *(double *)(lVar23 + 0xd0 + lVar22) = dVar14;
        *(double *)(lVar23 + 0xd8 + lVar22) = dVar15;
        *(double *)(lVar23 + 0xe0 + lVar22) = dVar39;
        *(double **)(lVar23 + 0xf8 + lVar22) = local_2b8;
        local_528._0_4_ = SUB84(local_2c8,0);
        local_528._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
        uStack_520._0_4_ = SUB84(uStack_2c0,0);
        uStack_520._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
        puVar1 = (undefined4 *)(lVar23 + 0xe8 + lVar22);
        *puVar1 = (undefined4)local_528;
        puVar1[1] = local_528._4_4_;
        puVar1[2] = (undefined4)uStack_520;
        puVar1[3] = uStack_520._4_4_;
        local_528 = pcVar33;
        uStack_520 = dVar5;
        if (((*(int *)(param_1 + 0x260) + 1 < (int)uVar4) ||
            (uVar4 = *(uint *)(*(longlong *)(param_1 + 600) + (longlong)(int)uVar4 * 4),
            (int)uVar4 < 1)) || (*(int *)(param_1 + 0x250) < (int)uVar4)) {
LAB_1482ba8a6:
          FUN_146b9cbf0(param_1 + 0x230,uVar28 & 0xffffffff);
        }
        else {
          lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (ulonglong)(uVar4 >> 9) * 8);
          if (*(int *)(lVar23 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc) < 1) goto LAB_1482ba8a6;
          *(float *)(lVar23 + 4 + (ulonglong)(uVar4 & 0x1ff) * 0xc) = (float)dVar37;
          FUN_146bd2818(param_1 + 0x230);
        }
        if ((int)local_398 == 0) {
          uStack_3a0 = (double)CONCAT44(0xffffffff,(int)uStack_3a0);
          uStack_390 = 0xffffffffffffffff;
          uStack_390._4_4_ = -1;
          uStack_390._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_3a8);
        }
      } while (((local_3a8 != pcVar36) || ((int)uStack_3a0 != iVar3)) ||
              (((int)uStack_390 != -1 || (uStack_390._4_4_ != -1))));
    }
  }
  else {
    local_3b8 = (code **)0x0;
    local_3b0 = 0x4000000000;
    pcVar36 = (code *)(*(longlong *)(param_1 + 8) + 0xb8);
    FUN_146be983e(&local_3a8,pcVar36,iVar3,0);
    if (local_3a8 != pcVar36) goto LAB_1482baaa9;
    if ((int)uStack_3a0 != iVar3) goto LAB_1482baaa9;
    if ((int)uStack_390 != -1) goto LAB_1482baaa9;
    iVar21 = uStack_390._4_4_;
    while (iVar21 != -1) {
LAB_1482baaa9:
      do {
        uVar28 = local_3b0;
        uVar4 = (uint)local_388;
        lVar23 = (longlong)(int)local_3b0;
        uVar18 = (int)local_3b0 + 1;
        local_3b0 = CONCAT44(local_3b0._4_4_,uVar18);
        if (local_3b0._4_4_ < uVar18) {
          FUN_147c81098(&local_4b8,uVar28 & 0xffffffff);
        }
        ppcVar24 = local_3b8;
        if (local_3b8 == (code **)0x0) {
          ppcVar24 = &local_4b8;
        }
        *(uint *)((longlong)ppcVar24 + lVar23 * 4) = uVar4;
        lVar23 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8);
        uVar28 = (ulonglong)((uVar4 & 0x1ff) << 4);
        iVar21 = *(int *)(lVar23 + uVar28);
        if (iVar21 == iVar3) {
          iVar21 = *(int *)(lVar23 + 4 + uVar28);
        }
        if (iVar21 != -1) {
          pcVar33 = (code *)(*(longlong *)(param_1 + 8) + 0xb8);
          FUN_146be983e(&local_228,pcVar33,iVar21,0);
          if (local_228 != pcVar33) goto LAB_1482baa4b;
          if ((int)uStack_220 != iVar21) goto LAB_1482baa4b;
          if ((int)uStack_210 != -1) goto LAB_1482baa4b;
          iVar30 = uStack_210._4_4_;
          while (iVar30 != -1) {
LAB_1482baa4b:
            do {
              local_2c8 = (code *)CONCAT44(local_2c8._4_4_,(uint)local_208);
              if ((uint)local_208 != uVar4) {
                FUN_14830129c(&local_4b8,&local_2c8);
              }
              if ((int)local_218 == 0) {
                uStack_220 = (longlong *)CONCAT44(0xffffffff,(int)uStack_220);
                uStack_210 = 0xffffffffffffffff;
                uStack_210._4_4_ = -1;
                uStack_210._0_4_ = -1;
              }
              else {
                FUN_146be9922(&local_228);
              }
            } while (((local_228 != pcVar33) || ((int)uStack_220 != iVar21)) ||
                    (iVar30 = uStack_210._4_4_, (int)uStack_210 != -1));
          }
        }
        if ((int)local_398 == 0) {
          uStack_3a0 = (double)CONCAT44(0xffffffff,(int)uStack_3a0);
          uStack_390 = 0xffffffffffffffff;
          uStack_390._4_4_ = -1;
          uStack_390._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_3a8);
        }
      } while (((local_3a8 != pcVar36) || ((int)uStack_3a0 != iVar3)) ||
              (iVar21 = uStack_390._4_4_, (int)uStack_390 != -1));
    }
    ppcVar24 = local_3b8;
    if (local_3b8 == (code **)0x0) {
      ppcVar24 = &local_4b8;
    }
    lVar23 = (longlong)(int)local_3b0;
    if (lVar23 != 0) {
      local_550 = param_1 + 0x230;
      lVar22 = 0;
      do {
        uVar4 = *(uint *)((longlong)ppcVar24 + lVar22);
        puVar1 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8)
                 + (ulonglong)((uVar4 & 0x1ff) << 4));
        local_508 = *puVar1;
        uStack_504 = puVar1[1];
        uStack_500 = puVar1[2];
        uStack_4fc = puVar1[3];
        FUN_1482b83e0(param_1,&local_3a8,&local_508);
        local_560 = (undefined4 *)CONCAT44(local_560._4_4_,uStack_504);
        local_568 = (undefined8 *)CONCAT44(local_568._4_4_,local_508);
        FUN_1482b8f60(param_1,&local_2c8,uVar4,&local_3a8);
        dVar15 = local_2d0;
        dVar14 = local_2d8;
        dVar13 = local_2e0;
        dVar12 = local_330;
        pdVar26 = local_338;
        dVar37 = 0.0;
        dVar6 = 0.0;
        dVar5 = 0.0;
        if (1e-05 < ABS((double)local_338)) {
          dVar37 = 1.0 / (double)local_338;
          dVar5 = ((double)local_318 * (double)local_2b8 +
                   local_328 * (double)local_2c8 + dStack_320 * uStack_2c0 + local_2e0) * dVar37;
          dVar6 = ((double)local_300 * (double)local_2b8 +
                   local_310 * (double)local_2c8 + dStack_308 * uStack_2c0 + local_2d8) * dVar37;
          dVar37 = ((double)local_2b8 * (double)local_2e8 +
                    (double)local_2c8 * local_2f8 + uStack_2c0 * dStack_2f0 + local_2d0) * dVar37;
        }
        dVar39 = 1.0 / local_330;
        local_228 = (code *)(dVar5 * dVar39);
        uStack_220 = (longlong *)(dVar6 * dVar39);
        local_218 = (double *)(dVar39 * dVar37);
        dVar37 = (double)FUN_1483009b4(&local_3a8,&local_2c8,&local_228);
        local_218 = local_348;
        uStack_220 = (longlong *)CONCAT44(uStack_34c,iStack_350);
        local_228 = local_358;
        local_178 = local_318;
        local_188 = local_328;
        dStack_180 = dStack_320;
        local_4c8 = local_300;
        local_4d8 = local_310;
        dStack_4d0 = dStack_308;
        local_4e8 = local_2e8;
        local_4f8 = local_2f8;
        dStack_4f0 = dStack_2f0;
        local_518 = local_2b8;
        local_528 = local_2c8;
        pcVar36 = local_528;
        uStack_520 = uStack_2c0;
        dVar5 = uStack_520;
        lVar34 = *(longlong *)(param_1 + 0x220);
        lVar29 = (longlong)(int)uVar4 * 0x100;
        *(uint *)(lVar34 + lVar29) = uVar4;
        pdVar27 = (double *)(lVar34 + 8 + lVar29);
        *pdVar27 = (double)local_3a8;
        pdVar27[1] = uStack_3a0;
        puVar1 = (undefined4 *)(lVar34 + 0x18 + lVar29);
        *puVar1 = (int)local_398;
        puVar1[1] = local_398._4_4_;
        puVar1[2] = (int)uStack_390;
        puVar1[3] = uStack_390._4_4_;
        puVar1 = (undefined4 *)(lVar34 + 0x28 + lVar29);
        *puVar1 = (uint)local_388;
        puVar1[1] = local_388._4_4_;
        puVar1[2] = (undefined4)uStack_380;
        puVar1[3] = uStack_380._4_4_;
        puVar32 = (undefined8 *)(lVar34 + 0x38 + lVar29);
        *puVar32 = local_378;
        puVar32[1] = CONCAT44(uStack_36c,uStack_370);
        puVar32 = (undefined8 *)(lVar34 + 0x48 + lVar29);
        *puVar32 = CONCAT44(uStack_364,local_368);
        puVar32[1] = uStack_360;
        pdVar27 = (double *)(lVar34 + 0x58 + lVar29);
        *pdVar27 = (double)local_358;
        pdVar27[1] = (double)uStack_220;
        *(double **)(lVar34 + 0x68 + lVar29) = local_348;
        *(undefined8 *)(lVar34 + 0x70 + lVar29) = local_340;
        *(double **)(lVar34 + 0x78 + lVar29) = pdVar26;
        *(double *)(lVar34 + 0x80 + lVar29) = dVar12;
        *(double **)(lVar34 + 0x98 + lVar29) = local_318;
        pdVar26 = (double *)(lVar34 + 0x88 + lVar29);
        *pdVar26 = local_328;
        pdVar26[1] = dStack_320;
        pdVar26 = (double *)(lVar34 + 0xa0 + lVar29);
        *pdVar26 = local_310;
        pdVar26[1] = dStack_308;
        *(double **)(lVar34 + 0xb0 + lVar29) = local_300;
        pdVar26 = (double *)(lVar34 + 0xb8 + lVar29);
        *pdVar26 = local_2f8;
        pdVar26[1] = dStack_2f0;
        *(double **)(lVar34 + 200 + lVar29) = local_2e8;
        *(double *)(lVar34 + 0xd0 + lVar29) = dVar13;
        *(double *)(lVar34 + 0xd8 + lVar29) = dVar14;
        *(double *)(lVar34 + 0xe0 + lVar29) = dVar15;
        *(double **)(lVar34 + 0xf8 + lVar29) = local_2b8;
        local_528._0_4_ = SUB84(local_2c8,0);
        local_528._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
        uStack_520._0_4_ = SUB84(uStack_2c0,0);
        uStack_520._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
        puVar1 = (undefined4 *)(lVar34 + 0xe8 + lVar29);
        *puVar1 = (undefined4)local_528;
        puVar1[1] = local_528._4_4_;
        puVar1[2] = (undefined4)uStack_520;
        puVar1[3] = uStack_520._4_4_;
        local_528 = pcVar36;
        uStack_520 = dVar5;
        if (((*(int *)(param_1 + 0x260) + 1 < (int)uVar4) ||
            (uVar18 = *(uint *)(*(longlong *)(param_1 + 600) + (longlong)(int)uVar4 * 4),
            (int)uVar18 < 1)) || (*(int *)(param_1 + 0x250) < (int)uVar18)) {
LAB_1482bafc6:
          FUN_146b9cbf0(local_550,uVar4);
        }
        else {
          lVar34 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (ulonglong)(uVar18 >> 9) * 8);
          if (*(int *)(lVar34 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc) < 1) goto LAB_1482bafc6;
          *(float *)(lVar34 + 4 + (ulonglong)(uVar18 & 0x1ff) * 0xc) = (float)dVar37;
          FUN_146bd2818(local_550);
        }
        lVar22 = lVar22 + 4;
      } while (lVar23 * 4 != lVar22);
    }
    if (local_3b8 != (code **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1482b9eeb:
  if (local_268 != 0) {
    plVar25 = plStack_258;
    if (plStack_258 == (longlong *)0x0) {
      plVar25 = (longlong *)&uStack_248;
    }
    (**(code **)(*plVar25 + 0x10))();
  }
  iVar21 = local_544;
  if (local_1c8[0] != 0) {
    plVar25 = local_1b8;
    if (local_1b8 == (longlong *)0x0) {
      plVar25 = local_1a8;
    }
    (**(code **)(*plVar25 + 0x10))();
  }
  if (local_188 != 0.0) {
    pdVar26 = local_178;
    if (local_178 == (double *)0x0) {
      pdVar26 = local_168;
    }
    (**(code **)((longlong)*pdVar26 + 0x10))();
  }
  piVar19 = &local_52c;
  iVar30 = local_534;
  bVar16 = true;
  do {
    bVar35 = bVar16;
    if (iVar30 != -1) {
      local_550 = (longlong)iVar30;
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + local_550 * 8);
      lVar23 = *(longlong *)(param_1 + 0x208);
      lVar34 = local_550 * 0xe0;
      puVar32 = (undefined8 *)(lVar23 + lVar34);
      ppcVar24 = &local_4b8;
      for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
        *ppcVar24 = (code *)*puVar32;
        puVar32 = puVar32 + 1;
        ppcVar24 = ppcVar24 + 1;
      }
      pdVar26 = (double *)(lVar23 + 0x70 + lVar34);
      local_458 = (double *)pdVar26[-2];
      local_468 = (code *)pdVar26[-4];
      uStack_460 = (longlong *)pdVar26[-3];
      local_450 = pdVar26[-1];
      pdVar27 = adStack_448;
      for (lVar23 = 0xe; lVar23 != 0; lVar23 = lVar23 + -1) {
        *pdVar27 = *pdVar26;
        pdVar26 = pdVar26 + 1;
        pdVar27 = pdVar27 + 1;
      }
      FUN_1482b7a54((longlong)*piVar19 * 0xe0 + *(longlong *)(param_1 + 0x198),(int)uVar2);
      pdVar27 = DAT_14c8464f0;
      uVar11 = DAT_14c8464e8._4_4_;
      uVar10 = (undefined4)DAT_14c8464e8;
      uVar9 = DAT_14c8464e0._4_4_;
      uVar8 = (undefined4)DAT_14c8464e0;
      local_3a8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_3a0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_398 = DAT_14c8464f0;
      local_228 = local_3a8;
      uStack_220 = (longlong *)uStack_3a0;
      local_218 = DAT_14c8464f0;
      local_2c8 = local_3a8;
      uStack_2c0 = uStack_3a0;
      local_2b8 = DAT_14c8464f0;
      lVar23 = *(longlong *)(param_1 + 0x208);
      puVar32 = (undefined8 *)(lVar23 + 0x10 + lVar34);
      *puVar32 = 0;
      puVar32[1] = 0;
      puVar32 = (undefined8 *)(lVar23 + 0x20 + lVar34);
      *puVar32 = 0;
      puVar32[1] = 0;
      puVar32 = (undefined8 *)(lVar23 + 0x30 + lVar34);
      *puVar32 = 0;
      puVar32[1] = 0;
      puVar32 = (undefined8 *)(lVar23 + 0x40 + lVar34);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined8 *)(lVar23 + lVar34) = 0;
      ((undefined8 *)(lVar23 + lVar34))[1] = 0;
      uVar2 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *(double **)(lVar23 + 0x60 + lVar34) = DAT_14c8464f0;
      puVar32 = (undefined8 *)(lVar23 + 0x50 + lVar34);
      *puVar32 = uVar2;
      puVar32[1] = uVar7;
      puVar32 = (undefined8 *)(lVar23 + 0x68 + lVar34);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined8 *)(lVar23 + 0x78 + lVar34) = 0x3ff0000000000000;
      *(double **)(lVar23 + 0x90 + lVar34) = pdVar27;
      pdVar26 = (double *)(lVar23 + 0x80 + lVar34);
      *pdVar26 = (double)local_3a8;
      pdVar26[1] = uStack_3a0;
      pdVar26 = (double *)(lVar23 + 0x98 + lVar34);
      *pdVar26 = (double)local_3a8;
      pdVar26[1] = uStack_3a0;
      *(double **)(lVar23 + 0xa8 + lVar34) = pdVar27;
      *(double **)(lVar23 + 0xc0 + lVar34) = pdVar27;
      puVar1 = (undefined4 *)(lVar23 + 0xb0 + lVar34);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      puVar32 = (undefined8 *)(lVar23 + 200 + lVar34);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined8 *)(lVar23 + 0xd8 + lVar34) = 0;
      *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + local_550 * 8) = 0;
      iVar21 = local_544;
    }
    piVar19 = &local_530;
    iVar30 = iVar21;
    bVar16 = false;
  } while (bVar35);
  local_478 = 0.0;
  dStack_470 = 0.0;
  local_488 = 0.0;
  dStack_480 = 0.0;
  local_498 = (undefined **)0x0;
  uStack_490 = 0.0;
  local_4a8 = 0.0;
  uStack_4a0 = 0.0;
  local_4b8 = (code *)0x0;
  dStack_4b0 = 0.0;
  local_468 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_460 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_458 = DAT_14c8464f0;
  local_450 = 0.0;
  adStack_448[0] = 0.0;
  adStack_448[1] = 1.0;
  local_438 = (undefined4)DAT_14c8464e0;
  uStack_434 = DAT_14c8464e0._4_4_;
  uStack_430 = (undefined4)DAT_14c8464e8;
  uStack_42c = DAT_14c8464e8._4_4_;
  local_428 = DAT_14c8464f0;
  local_420 = (undefined4)DAT_14c8464e0;
  uStack_41c = DAT_14c8464e0._4_4_;
  uStack_418 = (undefined4)DAT_14c8464e8;
  uStack_414 = DAT_14c8464e8._4_4_;
  local_410 = DAT_14c8464f0;
  local_3f8 = DAT_14c8464f0;
  local_408 = (undefined4)DAT_14c8464e0;
  uStack_404 = DAT_14c8464e0._4_4_;
  uStack_400 = (undefined4)DAT_14c8464e8;
  uStack_3fc = DAT_14c8464e8._4_4_;
  local_3e0 = 0.0;
  local_3f0 = 0.0;
  dStack_3e8 = 0.0;
  uStack_380 = *(longlong *)(param_1 + 8);
  local_398 = (double *)0x0;
  local_388 = &PTR_LAB_149f3aae0;
  local_378 = (longlong *)CONCAT44(local_378._4_4_,iVar3);
  local_3a8 = FUN_146be9588;
  local_228 = (code *)(uStack_380 + 0xb8);
  uStack_220 = (longlong *)CONCAT44(uStack_220._4_4_,iVar3);
  FUN_146be94ac(&local_2c8,&local_228,&local_3a8);
  local_358 = (code *)0xffffffffffffffff;
  local_348 = (double *)0x0;
  local_338 = (double *)0x0;
  local_3a8 = (code *)CONCAT44(iStack_284,iStack_288);
  uStack_3a0 = local_280;
  local_398 = local_278;
  uStack_390 = CONCAT44(uStack_26c,uStack_270);
  local_388 = (undefined **)local_268;
  uStack_380 = CONCAT44(uStack_25c,local_260);
  local_378 = plStack_258;
  uStack_370 = local_250;
  uStack_36c = uStack_24c;
  local_368 = uStack_248;
  uStack_364 = uStack_244;
  uStack_360 = local_240;
  FUN_146be971a(&local_348,&local_2c8);
  uStack_34c = 0;
  FUN_146bfd1f0(&local_3a8);
  local_1d8 = 0xffffffffffffffff;
  local_1c8[0] = 0;
  local_1b8 = (longlong *)0x0;
  local_228 = (code *)CONCAT44(uStack_25c,local_260);
  uStack_220 = plStack_258;
  local_218 = (double *)CONCAT44(uStack_24c,local_250);
  uStack_210 = CONCAT44(uStack_244,uStack_248);
  local_208 = local_240;
  plStack_1f8 = plStack_258;
  local_1f0 = local_250;
  uStack_1ec = uStack_24c;
  iStack_1e8 = uStack_248;
  iStack_1e4 = uStack_244;
  local_1e0 = (double)local_240;
  FUN_146be971a(local_1c8);
  local_1cc = 0;
  ppcVar24 = (code **)&local_228;
  do {
    FUN_146bfd1f0(ppcVar24);
    if (local_3a8 == local_228) {
      if ((int)uStack_3a0 == (int)uStack_220) {
        if ((int)uStack_390 == (int)uStack_210) {
          if (uStack_390._4_4_ == uStack_210._4_4_) break;
        }
      }
    }
    FUN_1482b7a54(&local_4b8,
                  (int)*(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iStack_350 * 8),
                  (longlong)iStack_350 * 0xe0 + *(longlong *)(param_1 + 0x208));
    ppcVar24 = &local_3a8;
  } while( true );
  if (local_1c8[0] != 0) {
    plVar25 = local_1b8;
    if (local_1b8 == (longlong *)0x0) {
      plVar25 = local_1a8;
    }
    (**(code **)(*plVar25 + 0x10))();
  }
  if (local_348 != (double *)0x0) {
    pdVar26 = local_338;
    if (local_338 == (double *)0x0) {
      pdVar26 = &local_328;
    }
    (**(code **)((longlong)*pdVar26 + 0x10))();
  }
  pdVar26 = adStack_448;
  if (local_2c8 != (code *)0x0) {
    pdVar27 = local_2b8;
    if (local_2b8 == (double *)0x0) {
      pdVar27 = &local_2a8;
    }
    (**(code **)((longlong)*pdVar27 + 0x10))();
  }
  lVar23 = *(longlong *)(param_1 + 0x198);
  ppcVar24 = &local_4b8;
  puVar32 = (undefined8 *)(lVar23 + local_540 * 0xe0);
  for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar32 = *ppcVar24;
    ppcVar24 = ppcVar24 + 1;
    puVar32 = puVar32 + 1;
  }
  pdVar27 = (double *)(lVar23 + 0x70 + local_540 * 0xe0);
  pdVar27[-2] = (double)local_458;
  pdVar27[-4] = (double)local_468;
  pdVar27[-3] = (double)uStack_460;
  pdVar27[-1] = local_450;
  lVar23 = 0xe;
  goto LAB_1482ba43d;
}



// FUNCTION 1482bb52e FUN_1482bb52e body=84 status=ok
// SIG undefined FUN_1482bb52e(void)

undefined8 FUN_1482bb52e(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    uVar3 = *(uint *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*param_1 + (longlong)(int)uVar3 * 0x28);
        if (*puVar1 == param_2) {
          return CONCAT71((int7)((ulonglong)*param_1 >> 8),puVar1 != (uint *)0x0);
        }
        uVar3 = puVar1[8];
      } while (uVar3 != 0xffffffff);
    }
  }
  return 0;
}



// FUNCTION 1482bb582 FUN_1482bb582 body=539 status=ok
// SIG undefined FUN_1482bb582(void)

double * FUN_1482bb582(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  if (ABS(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2 + -1.0) <= 2.220446049250313e-11) {
    dVar6 = param_3[2] - param_2[2];
    dVar7 = param_3[1] - param_2[1];
    dVar8 = *param_3 - *param_2;
    dVar4 = dVar6 * dVar6 + dVar8 * dVar8 + dVar7 * dVar7;
    if (2.220446049250313e-13 < ABS(dVar4)) {
      dVar4 = SQRT(dVar4);
      dVar5 = 1.0 / dVar4;
      local_48 = dVar8 * dVar5 * dVar2 - dVar1 * dVar7 * dVar5;
      local_50 = dVar6 * dVar5 * dVar1 - dVar3 * dVar8 * dVar5;
      local_58 = dVar7 * dVar5 * dVar3 - dVar6 * dVar5 * dVar2;
      FUN_1482c6f26(param_1,&local_58,param_2);
      *param_1 = *param_1 * dVar4;
      param_1[1] = param_1[1] * dVar4;
      param_1[2] = param_1[2] * dVar4;
      param_1[3] = param_1[3] * dVar4;
      param_1[4] = param_1[4] * dVar4;
      param_1[5] = param_1[5] * dVar4;
      param_1[6] = param_1[6] * dVar4;
      param_1[7] = param_1[7] * dVar4;
      param_1[8] = param_1[8] * dVar4;
      param_1[9] = dVar4 * param_1[9];
      if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 1482bb79e FUN_1482bb79e body=148 status=ok
// SIG undefined FUN_1482bb79e(void)

void FUN_1482bb79e(double *param_1,double *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  param_1[3] = param_2[3] + param_1[3];
  param_1[4] = param_2[4] + param_1[4];
  param_1[5] = param_2[5] + param_1[5];
  param_1[6] = param_2[6] + param_1[6];
  param_1[7] = param_2[7] + param_1[7];
  param_1[8] = param_2[8] + param_1[8];
  param_1[9] = param_2[9] + param_1[9];
  return;
}



// FUNCTION 1482bb832 FUN_1482bb832 body=77 status=ok
// SIG undefined FUN_1482bb832(void)

void FUN_1482bb832(longlong *param_1)

{
  (**(code **)(*param_1 + 0x108))();
  if ((param_1[0x1a] != 0) && ((char)param_1[0x27] == '\x01')) {
    (**(code **)(*param_1 + 0xb8))(param_1);
    (**(code **)(*param_1 + 0x28))(param_1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001482bb878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}



// FUNCTION 1482bb880 FUN_1482bb880 body=584 status=ok
// SIG undefined FUN_1482bb880(void)

ulonglong FUN_1482bb880(longlong param_1,undefined4 param_2,int param_3,int param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       int *param_9)

{
  longlong *plVar1;
  uint3 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  int *local_58;
  byte local_42;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar7 = *(int *)(param_1 + 0x150);
  if ((iVar7 != 1 & *(byte *)(param_1 + 0x156)) == 1) {
    local_78 = param_9;
    FUN_1482b317c(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_58 = param_9;
  local_60 = param_8;
  local_68 = param_7;
  local_70 = param_6;
  local_78 = (int *)CONCAT44(local_78._4_4_,param_5);
  bVar3 = FUN_1482b2f34(param_1,param_2,param_3,param_4);
  if (bVar3 != 0) {
    uVar2 = (uint3)((uint)iVar7 >> 8);
    uVar10 = CONCAT71((uint7)uVar2,1);
    if ((*(char *)(param_1 + 0x156) != '\x01' || iVar7 != 1) ||
       (uVar10 = (ulonglong)CONCAT31(uVar2,1), *(char *)(param_1 + 200) != '\x01'))
    goto LAB_1482bba69;
    lVar12 = param_1 + 0x10;
    cVar4 = FUN_1482bb52e(lVar12,param_2);
    uVar11 = (undefined7)((ulonglong)lVar12 >> 8);
    if (cVar4 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x208);
      if (plVar1 != (longlong *)0x0) {
        uVar10 = CONCAT71(uVar11,1);
        lVar12 = 0;
        do {
          iVar7 = (**(code **)(*plVar1 + 0xa0))(plVar1);
          if (iVar7 <= lVar12) break;
          if (lVar12 < (int)plVar1[5]) {
            uVar8 = *(undefined8 *)(plVar1[4] + lVar12 * 8);
          }
          else {
            uVar8 = 0;
          }
          cVar4 = FUN_146c1a770(uVar8,param_2,&local_41);
          uVar9 = uVar10 & 0xff;
          uVar10 = (ulonglong)local_41;
          if (cVar4 == '\0') {
            uVar10 = uVar9;
          }
          lVar12 = lVar12 + 1;
        } while ((uVar10 & 1) != 0);
        if ((uVar10 & 1) != 0) {
          lVar12 = 0;
          do {
            iVar7 = (**(code **)(*plVar1 + 0xb0))(plVar1);
            if (iVar7 <= lVar12) break;
            if (lVar12 < (int)plVar1[7]) {
              uVar8 = *(undefined8 *)(plVar1[6] + lVar12 * 8);
            }
            else {
              uVar8 = 0;
            }
            cVar4 = FUN_146c1aaf4(uVar8,param_2,&local_42);
            uVar9 = uVar10 & 0xff;
            uVar10 = (ulonglong)local_42;
            if (cVar4 == '\0') {
              uVar10 = uVar9;
            }
            lVar12 = lVar12 + 1;
          } while ((uVar10 & 1) != 0);
        }
        goto LAB_1482bba69;
      }
LAB_1482bbac0:
      uVar10 = CONCAT71(uVar11,1);
      goto LAB_1482bba69;
    }
    bVar5 = FUN_1482bbacc(lVar12,param_3);
    bVar6 = FUN_1482bbacc(lVar12,param_4);
    if ((bVar5 & bVar6) == 0) {
      if (bVar5 == 0) {
        uVar10 = CONCAT71(uVar11,1);
        if (bVar6 == 0) goto LAB_1482bba69;
        if (*param_9 == -1) {
          *param_9 = param_4;
          goto LAB_1482bba69;
        }
        bVar13 = *param_9 == param_4;
      }
      else {
        if (*param_9 == -1) {
          *param_9 = param_3;
          goto LAB_1482bbac0;
        }
        bVar13 = *param_9 == param_3;
      }
      uVar10 = (ulonglong)bVar3;
      if (!bVar13) {
        uVar10 = 0;
      }
      goto LAB_1482bba69;
    }
  }
  uVar10 = 0;
LAB_1482bba69:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffff01;
}



// FUNCTION 1482bbacc FUN_1482bbacc body=99 status=ok
// SIG undefined FUN_1482bbacc(void)

undefined8 FUN_1482bbacc(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar2 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x90);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x50);
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x20;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x20) == param_2) {
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar1 != 0);
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1482bbb30 FUN_1482bbb30 body=506 status=ok
// SIG undefined FUN_1482bbb30(void)

undefined8
FUN_1482bbb30(longlong param_1,undefined4 param_2,undefined4 param_3,double *param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  longlong local_e0;
  undefined4 local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  char *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  longlong local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  double *local_68;
  double *local_60;
  undefined1 *local_58;
  char **local_50;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(int *)(param_1 + 0x164) == 1) &&
     (plVar1 = *(longlong **)(param_1 + 0xd0), plVar1 != (longlong *)0x0)) {
    dVar2 = *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x168);
    (**(code **)(*plVar1 + 8))(plVar1,&local_b0,param_4,0xffffffff);
    if ((param_4[2] - local_a0) * (param_4[2] - local_a0) +
        (*param_4 - local_b0) * (*param_4 - local_b0) +
        (param_4[1] - local_a8) * (param_4[1] - local_a8) <= dVar2) {
      local_d8 = FUN_146c061e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
      local_d0 = *param_4;
      dStack_c8 = param_4[1];
      local_c0 = param_4[2];
      local_e0 = param_1;
      local_b8 = dVar2;
      cVar3 = FUN_1482bc2d0(&local_e0,param_2);
      if (cVar3 != '\0') {
        cVar3 = FUN_1482bc2d0(&local_e0,param_3);
        if (cVar3 != '\0') {
          local_70 = &local_110;
          local_78 = &local_10c;
          local_90 = &local_108;
          local_108 = param_5;
          local_88 = &local_104;
          local_104 = param_6;
          local_68 = &local_100;
          local_100 = *param_4;
          dStack_f8 = param_4[1];
          local_f0 = param_4[2];
          local_60 = &local_e8;
          local_98 = &local_41;
          local_41 = '\x01';
          local_50 = &local_98;
          local_58 = &LAB_1482f6766;
          local_118 = param_1;
          local_110 = param_2;
          local_10c = param_3;
          local_e8 = dVar2;
          local_80 = param_1;
          FUN_146c03fd0(*(undefined8 *)(param_1 + 8),param_2);
          if (local_41 != '\0') {
            cVar3 = FUN_1482bc4f0(&local_118,param_3);
            if (cVar3 != '\0') goto LAB_1482bbcf8;
          }
        }
      }
    }
    uVar4 = 0;
  }
  else {
LAB_1482bbcf8:
    uVar4 = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482bbd2c FUN_1482bbd2c body=567 status=ok
// SIG undefined FUN_1482bbd2c(void)

void FUN_1482bbd2c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_d0;
  undefined1 local_c8;
  undefined4 *local_c0;
  undefined2 *local_b8;
  undefined2 *local_b0;
  ulonglong local_a8;
  undefined2 local_a0;
  undefined4 local_9c;
  undefined2 *local_98;
  undefined2 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  uint local_64;
  undefined8 local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_1;
  uVar5 = *(byte *)(lVar2 + 0x156) ^ 1;
  local_d0 = uVar5 * 4 + 1;
  local_80[0] = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_90 = 0;
  local_8c = 0xffffffff;
  local_88 = (undefined4 *)0x0;
  local_a0 = 0;
  local_9c = 0xffffffff;
  local_98 = (undefined2 *)0x0;
  local_d8 = *(undefined4 *)(lVar2 + 0x160);
  local_c8 = (undefined1)uVar5;
  local_c0 = local_80;
  local_b8 = &local_90;
  local_b0 = &local_a0;
  cVar4 = FUN_1482afd2e(param_2,*(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x158),
                        *(undefined4 *)(lVar2 + 0x15c));
  if (cVar4 != '\0') {
    uVar3 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
             (ulonglong)((param_2 & 0x1ff) << 4));
    local_a8 = uVar3 >> 0x20;
    lVar1 = lVar2 + 0x10;
    local_64 = param_2;
    local_60 = &local_64;
    local_58 = local_80;
    FUN_1482f537c(lVar1,local_4c,&local_60,0);
    FUN_1482b33ce(lVar1,&local_60,uVar3 & 0xffffffff);
    uVar6 = 1;
    uVar7 = 1;
    if ((char)local_90 == '\0') {
      uVar7 = SUB81(local_60,0);
    }
    if (local_90._1_1_ == '\0') {
      local_60._1_1_ = 0;
    }
    local_90 = CONCAT11(local_60._1_1_,uVar7);
    local_88 = local_58;
    local_64 = (uint)uVar3;
    local_60 = &local_64;
    local_58 = (undefined4 *)&local_90;
    FUN_1482f586a(lVar2 + 0x60,local_4c,&local_60,0);
    uVar5 = (uint)local_a8;
    FUN_1482b33ce(lVar1,&local_60,local_a8 & 0xffffffff);
    if ((char)local_a0 == '\0') {
      uVar6 = SUB81(local_60,0);
    }
    uVar7 = 0;
    if (local_a0._1_1_ != '\0') {
      uVar7 = local_60._1_1_;
    }
    local_a0 = CONCAT11(uVar7,uVar6);
    local_98 = (undefined2 *)local_58;
    local_64 = uVar5;
    local_60 = &local_64;
    local_58 = (undefined4 *)&local_a0;
    FUN_1482f586a(lVar2 + 0x60,local_4c,&local_60,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482bbf66 FUN_1482bbf66 body=126 status=ok
// SIG undefined FUN_1482bbf66(void)

void FUN_1482bbf66(longlong *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14ae72eb0;
  local_58[0] = &LAB_148301328;
  local_30 = param_1;
  (**(code **)(*param_1 + 0xd0))(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482bbfe6 FUN_1482bbfe6 body=193 status=ok
// SIG undefined FUN_1482bbfe6(void)

void FUN_1482bbfe6(longlong param_1,uint param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  uVar5 = (ulonglong)(param_2 & 0x1ff);
  local_38 = *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x18);
  puVar1 = (undefined4 *)(lVar2 + uVar5 * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  (**(code **)(*param_3 + 8))(param_3,&local_60,&local_48,param_2);
  lVar2 = *(longlong *)(param_1 + 8);
  cVar4 = FUN_146bfed03(&local_60);
  if (cVar4 != '\0') {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
    *(undefined8 *)(lVar3 + 0x10 + uVar5 * 0x18) = local_50;
    puVar1 = (undefined4 *)(lVar3 + uVar5 * 0x18);
    *puVar1 = local_60;
    puVar1[1] = uStack_5c;
    puVar1[2] = uStack_58;
    puVar1[3] = uStack_54;
    if (*(char *)(lVar2 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar2 + 0x214) = *(int *)(lVar2 + 0x214) + 1;
      UNLOCK();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482bc0a8 FUN_1482bc0a8 body=252 status=ok
// SIG undefined FUN_1482bc0a8(void)

undefined4 *
FUN_1482bc0a8(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_1482b33ce(param_1 + 0x10,&local_48,param_3);
    if (local_40 != (longlong *)0x0) goto LAB_1482bc136;
    if (local_48._1_1_ != '\0') goto LAB_1482bc0d9;
  }
  else {
LAB_1482bc0d9:
    if ((*(char *)(param_1 + 0x138) == '\x02') &&
       (local_40 = *(longlong **)(param_1 + 0xd0), local_40 != (longlong *)0x0)) {
      pcVar1 = *(code **)(param_1 + 0xe0);
      if (pcVar1 != (code *)0x0) {
        plVar7 = (longlong *)(param_1 + 0x100);
        if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0xf0);
        }
        local_48 = param_3;
        uVar5 = (**(code **)(*plVar7 + 8))();
        uVar6 = (*pcVar1)(uVar5,&local_48);
        if ((uVar6 & 2) != 0) goto LAB_1482bc16f;
        local_40 = *(longlong **)(param_1 + 0xd0);
      }
LAB_1482bc136:
      (**(code **)(*local_40 + 8))(local_40,param_2,param_4,param_3);
      goto LAB_1482bc17d;
    }
  }
LAB_1482bc16f:
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_4 + 4);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *param_2 = *param_4;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
LAB_1482bc17d:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482bc1a6 FUN_1482bc1a6 body=296 status=ok
// SIG undefined FUN_1482bc1a6(void)

void FUN_1482bc1a6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar7 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar9 = 0;
  if ((uVar7 != 0) && (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar10 = 1;
    uVar4 = 1;
    if (1 < (int)uVar7) {
      uVar10 = uVar7;
    }
    do {
      uVar9 = uVar10;
      if (uVar10 == uVar4) break;
      uVar6 = uVar4 >> 9;
      uVar8 = uVar4 & 0x1ff;
      uVar9 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar6] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  if (uVar9 != uVar7) {
    do {
      pcVar2 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      local_44 = uVar9;
      uVar3 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar3,&local_44);
      uVar10 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar7) {
        uVar10 = uVar7;
      }
      do {
        uVar4 = uVar10;
        if (uVar10 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar4 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x28) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar4;
    } while (uVar9 != uVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482bc2d0 FUN_1482bc2d0 body=543 status=ok
// SIG undefined FUN_1482bc2d0(void)

ulonglong FUN_1482bc2d0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  int local_78;
  undefined8 local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  lVar6 = *(longlong *)(lVar1 + 8) + 0xb8;
  FUN_146be983e(&local_88,lVar6,param_2,0);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((((local_88 != lVar6) || (local_80 != param_2)) || ((int)local_70 != -1)) ||
     (local_70._4_4_ != -1)) {
    do {
      if (local_68 != *(uint *)(param_1 + 1)) {
        lVar2 = *(longlong *)(lVar1 + 8);
        uVar4 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(local_68 >> 9) * 8) +
                 (ulonglong)((local_68 & 0x1ff) << 4));
        if ((int)uVar4 == param_2) {
          plVar3 = (longlong *)
                   ((ulonglong)((uint)(uVar4 >> 0x29) << 3) + *(longlong *)(lVar2 + 0x10));
          uVar4 = uVar4 >> 0x20;
        }
        else {
          plVar3 = (longlong *)
                   ((ulonglong)((uint)(uVar4 >> 6) & 0x3fffff8) + *(longlong *)(lVar2 + 0x10));
        }
        lVar2 = *plVar3;
        uVar4 = (ulonglong)((uint)uVar4 & 0x1ff);
        local_90 = (*(double *)(lVar2 + 0x10 + uVar4 * 0x18) + (double)param_1[4]) * 0.5;
        local_98 = (*(double *)(lVar2 + 8 + uVar4 * 0x18) + (double)param_1[3]) * 0.5;
        local_a0 = (*(double *)(lVar2 + uVar4 * 0x18) + (double)param_1[2]) * 0.5;
        (**(code **)(**(longlong **)(lVar1 + 0xd0) + 8))
                  (*(longlong **)(lVar1 + 0xd0),&local_b8,&local_a0,0xffffffff);
        dVar7 = (local_a8 - local_90) * (local_a8 - local_90) +
                (local_b8 - local_a0) * (local_b8 - local_a0) +
                (local_b0 - local_98) * (local_b0 - local_98);
        if ((double)param_1[5] <= dVar7 && dVar7 != (double)param_1[5]) {
          uVar5 = 0;
          break;
        }
      }
      if (local_78 == 0) {
        local_7c = 0xffffffff;
        local_70 = 0xffffffffffffffff;
        local_70._4_4_ = -1;
        local_70._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_88);
      }
    } while (((local_88 != lVar6) || (local_80 != param_2)) ||
            (((int)local_70 != -1 || (local_70._4_4_ != -1))));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1482bc4f0 FUN_1482bc4f0 body=158 status=ok
// SIG undefined FUN_1482bc4f0(void)

undefined1 FUN_1482bc4f0(longlong *param_1)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *param_1;
  local_68 = &local_11;
  local_11 = 1;
  local_20 = &local_68;
  local_60 = param_1 + 2;
  local_58 = (longlong)param_1 + 0x14;
  local_48 = (longlong)param_1 + 0xc;
  local_40 = param_1 + 1;
  local_38 = param_1 + 3;
  local_30 = param_1 + 6;
  local_28 = &LAB_1482f6766;
  FUN_146c03fd0(*(undefined8 *)(local_50 + 8));
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482bc5b8 FUN_1482bc5b8 body=372 status=ok
// SIG undefined FUN_1482bc5b8(void)

undefined8 * FUN_1482bc5b8(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x129) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131) = 0;
  *(undefined2 *)((longlong)param_1 + 0x139) = 1;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3e45798ee0000000;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_14ae72f70;
  param_1[0x2a] = 0x1010000000000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x7f7fffff;
  param_1[0x2f] = 0x7fefffffffffffff;
  param_1[0x30] = 0x7fffffff;
  param_1[0x31] = 0;
  param_1[0x32] = 0x4070000000000000;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  FUN_146c3f08a(param_1 + 0x46);
  param_1[0x43] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x38) < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined8 **)(lVar1 + 0x30);
    }
    param_1[0x43] = uVar2;
  }
  return param_1;
}



// FUNCTION 1482bc72c FUN_1482bc72c body=61 status=ok
// SIG undefined FUN_1482bc72c(void)

void FUN_1482bc72c(longlong *param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  iVar1 = 1;
  if (1 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  param_1[0x2f] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0x7f7fffff;
                    /* WARNING: Could not recover jumptable at 0x0001482bc765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



// FUNCTION 1482bc76a FUN_1482bc76a body=61 status=ok
// SIG undefined FUN_1482bc76a(void)

void FUN_1482bc76a(longlong *param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x184) = 1;
  iVar1 = 3;
  if (3 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  param_1[0x2f] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0x7f7fffff;
                    /* WARNING: Could not recover jumptable at 0x0001482bc7a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



// FUNCTION 1482bc7d2 FUN_1482bc7d2 body=53 status=ok
// SIG undefined FUN_1482bc7d2(void)

void FUN_1482bc7d2(longlong *param_1,double param_2)

{
  param_1[0x30] = 0x300000001;
  param_1[0x2f] = 0x7fefffffffffffff;
  *(float *)(param_1 + 0x2e) = (float)param_2;
                    /* WARNING: Could not recover jumptable at 0x0001482bc803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



// FUNCTION 1482bc808 FUN_1482bc808 body=3033 status=ok
// SIG undefined FUN_1482bc808(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1482bc808(undefined1 *****param_1,double param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined1 **ppuVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  size_t sVar14;
  undefined1 ****ppppuVar15;
  uint uVar16;
  uint uVar17;
  undefined1 uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_368 [32];
  undefined8 ****local_348;
  undefined8 ****local_340;
  undefined8 *****local_338;
  undefined1 local_329;
  undefined1 ****local_328;
  int local_320;
  int local_31c;
  code *local_318;
  undefined8 *****local_310;
  undefined1 *local_308;
  undefined1 *puStack_300;
  undefined1 *local_2f8;
  undefined8 ****local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  undefined1 *local_2d8;
  undefined1 *puStack_2d0;
  undefined1 *local_2c8;
  undefined8 ****local_2c0;
  int local_2b8;
  undefined4 local_2b4;
  int local_2b0 [2];
  undefined8 local_2a8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  uint *local_278;
  undefined8 uStack_270;
  undefined8 ****local_260;
  undefined1 *local_258;
  undefined8 uStack_250;
  undefined8 ****local_248;
  undefined8 uStack_240;
  undefined1 *****local_230;
  undefined8 *****local_228;
  undefined1 *****local_220;
  undefined8 ****local_218;
  int *local_210;
  undefined8 ****local_208;
  int *local_200;
  undefined1 *local_1f8;
  undefined8 *****local_1f0;
  int local_1e4 [2];
  undefined1 local_1dc [4];
  undefined8 ****local_1d8 [3];
  undefined8 ****local_1c0 [3];
  undefined8 ****local_1a8;
  undefined8 ****local_1a0;
  undefined8 ****local_198;
  undefined8 *****local_190;
  int local_180;
  int local_17c;
  longlong local_168;
  longlong *local_158;
  longlong local_148 [4];
  undefined1 *****local_128;
  undefined8 local_120;
  undefined8 ****local_118;
  undefined8 local_110;
  undefined1 *****local_108;
  undefined8 *****local_100;
  undefined8 ****local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined1 *****local_b8;
  undefined8 *****local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (*(int *)(param_1[1] + 0x2e) != 0) {
    uVar18 = *(undefined1 *)((longlong)param_1 + 0x155);
    *(undefined1 *)((longlong)param_1 + 0x155) = 0;
    local_248 = (undefined8 ****)0x0;
    uStack_240 = 0;
    local_258 = (undefined1 *)0x0;
    uStack_250 = 0;
    (*(code *)(*param_1)[0x1b])();
    (*(code *)(*param_1)[0x1f])(param_1);
    FUN_1482bd3e2(param_1,0);
    cVar5 = (*(code *)(*param_1)[1])(param_1);
    if (cVar5 == '\0') {
      FUN_14051b394(&local_248,
                    *(int *)(param_1[1] + 0x28) * 0x200 + *(int *)((longlong)param_1[1] + 0x144),1);
      local_190 = &local_b8;
      local_128 = (undefined1 *****)0x0;
      local_120 = (undefined1 *****)((ulonglong)local_120 & 0xffffffff00000000);
      local_198 = (undefined8 ****)&LAB_1483014c8;
      local_340 = (undefined8 ****)((ulonglong)local_340 & 0xffffffff00000000);
      local_338 = &local_128;
      local_b8 = param_1;
      local_b0 = &local_248;
      FUN_1401f8d10(L"ParallelFor Task",
                    *(int *)(param_1[1] + 0x28) * 0x200 + *(int *)((longlong)param_1[1] + 0x144),1,
                    &local_198);
      cVar5 = (*(code *)(*param_1)[1])(param_1);
      if (cVar5 == '\0') {
        FUN_1448c4dd6(&local_258,
                      *(int *)(param_1[1] + 4) * 0x200 + *(int *)((longlong)param_1[1] + 0x24),1);
        local_260 = (undefined8 ****)cos(param_2 * 0.017453292519943295);
        local_118 = &local_260;
        local_198 = (undefined8 ****)0x0;
        local_190 = (undefined8 *****)((ulonglong)local_190 & 0xffffffff00000000);
        local_b8 = (undefined1 *****)&LAB_14830157a;
        local_340 = (undefined8 ****)((ulonglong)local_340 & 0xffffffff00000000);
        local_338 = &local_198;
        local_128 = param_1;
        local_120 = (undefined1 *****)&local_258;
        local_110 = &local_248;
        local_b0 = &local_128;
        FUN_1401f8d10(L"ParallelFor Task",
                      *(int *)(param_1[1] + 4) * 0x200 + *(int *)((longlong)param_1[1] + 0x24),1);
        cVar5 = (*(code *)(*param_1)[1])(param_1);
        if (cVar5 == '\0') {
          (*(code *)(*param_1)[0x20])(param_1);
          (*(code *)(*param_1)[0x1d])(param_1);
          (*(code *)(*param_1)[0x23])(param_1);
          local_278 = (uint *)0x0;
          uStack_270 = 0;
          local_329 = uVar18;
          iVar7 = 0;
LAB_1482bca7b:
          local_31c = iVar7;
          bVar22 = (longlong)uStack_270 < 0;
          uStack_270 = uStack_270 & 0xffffffff00000000;
          if (bVar22) {
            FUN_14481578e(&local_278,0);
          }
          ppppuVar15 = param_1[1];
          uVar16 = *(int *)(ppppuVar15 + 0x3a) * 0x200 + *(int *)((longlong)ppppuVar15 + 0x1d4);
          uVar21 = 0;
          if ((uVar16 != 0) && (uVar21 = 0, 0xfffd < (ushort)(*(short *)*ppppuVar15[0x3b] - 1U))) {
            uVar6 = 1;
            uVar20 = 1;
            if (1 < (int)uVar16) {
              uVar6 = uVar16;
            }
            do {
              uVar21 = uVar6;
              if (uVar6 == uVar20) break;
              uVar11 = uVar20 >> 9;
              uVar17 = uVar20 & 0x1ff;
              uVar21 = uVar20;
              uVar20 = uVar20 + 1;
            } while (0xfffd < (ushort)(*(short *)((longlong)ppppuVar15[0x3b][uVar11] +
                                                 (ulonglong)uVar17 * 2) - 1U));
          }
LAB_1482bcbe9:
          if (uVar21 != uVar16) {
            local_128 = (undefined1 *****)CONCAT44(local_128._4_4_,uVar21);
            cVar5 = (*(code *)*param_3)(param_3[1],&local_128);
            uVar3 = uStack_270;
            if ((cVar5 != '\0') &&
               ((lVar13 = *(longlong *)
                           ((longlong)param_1[1][0x38][uVar21 >> 9] +
                           (ulonglong)((uVar21 & 0x1ff) << 4)), local_258[(int)lVar13] != '\0' ||
                (local_258[lVar13 >> 0x20] == '\x01')))) {
              lVar13 = (longlong)(int)uStack_270;
              uVar6 = (int)uStack_270 + 1;
              uStack_270 = CONCAT44(uStack_270._4_4_,uVar6);
              if (uStack_270._4_4_ < uVar6) {
                FUN_1446f48e2(&local_278,uVar3 & 0xffffffff);
              }
              local_278[lVar13] = uVar21;
            }
            uVar6 = uVar21 + 1;
            if ((int)(uVar21 + 1) < (int)uVar16) {
              uVar6 = uVar16;
            }
            uVar20 = uVar21;
            do {
              uVar21 = uVar6;
              if (uVar6 - 1 == uVar20) break;
              uVar21 = uVar20 + 1;
              uVar20 = uVar21;
            } while (0xfffd < (ushort)(*(short *)((longlong)ppppuVar15[0x3b][uVar21 >> 9] +
                                                 (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
            goto LAB_1482bcbe9;
          }
          if ((longlong)(int)uStack_270 != 0) {
            puVar1 = local_278 + (int)uStack_270;
            local_320 = 0;
            puVar19 = local_278;
            iVar12 = local_31c;
LAB_1482bcc1b:
            uVar21 = *puVar19;
            if ((-1 < (int)uVar21) &&
               (ppppuVar15 = param_1[1],
               (int)uVar21 <
               *(int *)(ppppuVar15 + 0x3a) * 0x200 + *(int *)((longlong)ppppuVar15 + 0x1d4))) {
              if (0xfffd < (ushort)(*(short *)((longlong)ppppuVar15[0x3b][uVar21 >> 9] +
                                              (ulonglong)(uVar21 & 0x1ff) * 2) - 1U))
              goto LAB_1482bccf5;
              cVar5 = (*(code *)(*param_1)[1])(param_1);
              if (cVar5 != '\0') goto LAB_1482bd0a3;
              *(int *)((longlong)param_1 + 0x284) = *(int *)((longlong)param_1 + 0x284) + 1;
              ppppuVar15 = param_1[1];
              uVar3 = *(ulonglong *)
                       ((longlong)ppppuVar15[0x38][uVar21 >> 9] + (ulonglong)((uVar21 & 0x1ff) << 4)
                       );
              local_2a8 = 0xffffffffffffffff;
              local_288 = 0xffffffffffffffff;
              local_298 = 0xffffffff;
              uStack_294 = 0xffffffff;
              uStack_290 = 0xffffffff;
              uStack_28c = 0xffffffff;
              uVar6 = (uint)uVar3;
              uVar16 = (uint)(uVar3 >> 0x20);
              if (local_258[(int)uVar6] == '\x01') {
                local_2c0 = (undefined8 ****)0x0;
                local_2b8 = *(int *)(param_1 + 0x4f);
                sVar14 = (size_t)local_2b8;
                if (sVar14 == 0) {
                  local_2b4 = 0;
                }
                else {
                  local_328 = param_1[0x4e];
                  FUN_1447cd5fa(&local_2c0,local_2b8,0);
                  memcpy(local_2c0,local_328,sVar14);
                  ppppuVar15 = param_1[1];
                }
                local_338 = &local_2c0;
                local_340 = &local_248;
                local_348 = local_260;
                cVar5 = FUN_1482b4366(ppppuVar15,uVar21,uVar3 & 0xffffffff,uVar3 >> 0x20);
                if (cVar5 != '\0') {
                  uVar9 = (ulonglong)(uVar16 & 0x1ff);
                  local_2c8 = param_1[1][2][uVar3 >> 0x29][uVar9 * 3 + 2];
                  ppuVar2 = param_1[1][2][uVar3 >> 0x29] + uVar9 * 3;
                  local_2d8 = *ppuVar2;
                  puStack_2d0 = ppuVar2[1];
                  local_348 = (undefined8 ****)CONCAT44(local_348._4_4_,uVar16);
                  iVar7 = FUN_1482bd5c0(param_1,uVar21,&local_2d8,local_2b0);
                  if (iVar7 == 0) goto LAB_1482bd1a6;
                }
              }
              iVar12 = local_31c;
              if (local_258[(longlong)uVar3 >> 0x20] == '\x01') {
                local_2e8 = (undefined8 ****)0x0;
                local_2e0 = *(int *)(param_1 + 0x4f);
                sVar14 = (size_t)local_2e0;
                if (sVar14 == 0) {
                  local_2dc = 0;
                }
                else {
                  local_328 = param_1[0x4e];
                  FUN_1447cd5fa(&local_2e8,local_2e0,0);
                  memcpy(local_2e8,local_328,sVar14);
                }
                local_338 = &local_2e8;
                local_340 = &local_248;
                local_348 = local_260;
                cVar5 = FUN_1482b4366(param_1[1],uVar21,uVar3 >> 0x20,uVar3 & 0xffffffff);
                iVar12 = local_31c;
                if (cVar5 != '\0') {
                  local_2f8 = param_1[1][2][uVar3 >> 9 & 0x7fffff]
                              [(ulonglong)(uVar6 & 0x1ff) * 3 + 2];
                  ppuVar2 = param_1[1][2][uVar3 >> 9 & 0x7fffff] + (ulonglong)(uVar6 & 0x1ff) * 3;
                  local_308 = *ppuVar2;
                  puStack_300 = ppuVar2[1];
                  local_348 = (undefined8 ****)CONCAT44(local_348._4_4_,uVar6);
                  iVar7 = FUN_1482bd5c0(param_1,uVar21,&local_308,local_2b0);
                  iVar12 = local_31c;
                  if (iVar7 == 0) {
LAB_1482bd1a6:
                    iVar7 = local_2b0[0];
                    ppppuVar15 = (undefined1 ****)(longlong)local_2b0[0];
                    local_128 = (undefined1 *****)&local_248;
                    local_310 = &local_128;
                    local_318 = FUN_1483016a8;
                    local_120 = param_1;
                    FUN_146c03fd0(param_1[1],local_2b0[0]);
                    local_f8 = (undefined8 ****)param_1[1];
                    local_118 = (undefined8 ****)0x0;
                    local_108 = (undefined1 *****)&PTR_LAB_149f3b7b0;
                    local_100 = (undefined8 *****)CONCAT44(local_100._4_4_,iVar7);
                    local_128 = (undefined1 *****)&LAB_146c413d0;
                    local_328 = ppppuVar15;
                    FUN_146c41260(local_f8 + 0x17,&local_b8,iVar7,&local_128);
                    FUN_146c41458(local_b8,&local_128,(ulonglong)local_b0 & 0xffffffff,local_a8);
                    FUN_146c41662(local_b8,&local_198,(ulonglong)local_b0 & 0xffffffff,local_a8);
LAB_1482bcd07:
                    ppppuVar4 = local_f8;
                    if (local_128 == (undefined1 *****)local_198) {
                      if ((((int)local_120 == (int)local_190) && ((int)local_110 == local_180)) &&
                         (local_110._4_4_ == local_17c)) goto LAB_1482bd281;
                    }
                    local_230 = (undefined1 *****)CONCAT44(local_230._4_4_,local_108._0_4_);
                    plVar10 = local_e8;
                    if (local_e8 == (longlong *)0x0) {
                      plVar10 = local_d8;
                    }
                    uVar8 = (**(code **)(*plVar10 + 8))();
                    iVar7 = (*(code *)ppppuVar4)(uVar8,&local_230);
                    local_1a0 = &local_248;
                    local_1a8 = local_260;
                    local_1dc = (undefined1  [4])0x0;
                    local_1e4[1] = 0;
                    local_1e4[0] = 0;
                    local_230 = (undefined1 *****)&local_1a0;
                    local_228 = (undefined8 *****)local_1dc;
                    local_220 = (undefined1 *****)local_1c0;
                    local_218 = &local_1a8;
                    local_210 = local_1e4 + 1;
                    local_208 = local_1d8;
                    local_200 = local_1e4;
                    local_1f8 = &LAB_143b02e02;
                    local_1f0 = &local_230;
                    FUN_146c03fd0(param_1[1],iVar7,&local_1f8);
                    local_258[iVar7] = local_1e4[0] == 0;
                    if ((int)local_118 == 0) {
                      local_120 = (undefined1 *****)CONCAT44(0xffffffff,(int)local_120);
                      local_110 = (undefined8 *****)0xffffffffffffffff;
                    }
                    else {
                      FUN_146be9922(&local_128);
                    }
                    goto LAB_1482bcd07;
                  }
                }
              }
            }
            goto LAB_1482bccf5;
          }
LAB_1482bd066:
          (*(code *)(*param_1)[0x24])(param_1);
          (*(code *)(*param_1)[0x1e])(param_1);
          cVar5 = (*(code *)(*param_1)[1])(param_1);
          if (cVar5 == '\0') {
            (*(code *)(*param_1)[0x14])(param_1);
            (*(code *)(*param_1)[0x1c])(param_1);
          }
LAB_1482bd0a3:
          uVar18 = local_329;
          if (local_278 != (uint *)0x0) {
            FUN_1400020a8();
            uVar18 = local_329;
          }
        }
      }
    }
    if (local_258 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_248 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)((longlong)param_1 + 0x155) = uVar18;
  }
  if ((local_60 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1482bd281:
  if (local_168 != 0) {
    plVar10 = local_158;
    if (local_158 == (longlong *)0x0) {
      plVar10 = local_148;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_f8 != (undefined8 ****)0x0) {
    plVar10 = local_d8;
    if (local_e8 != (longlong *)0x0) {
      plVar10 = local_e8;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (local_a8[0] != 0) {
    plVar10 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar10 = local_88;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  ppppuVar15 = local_328;
  local_320 = local_320 + 1;
  local_1c0[0] = &local_248;
  local_1d8[0] = local_260;
  local_1f8 = (undefined1 *)((ulonglong)local_1f8 & 0xffffffff00000000);
  local_1a0 = (undefined8 ****)((ulonglong)local_1a0 & 0xffffffff00000000);
  local_1a8 = (undefined8 ****)((ulonglong)local_1a8 & 0xffffffff00000000);
  local_128 = (undefined1 *****)local_1c0;
  local_120 = (undefined1 *****)&local_1f8;
  local_118 = &local_198;
  local_110 = local_1d8;
  local_108 = (undefined1 *****)&local_1a0;
  local_100 = &local_b8;
  local_f8 = &local_1a8;
  local_228 = &local_128;
  local_230 = (undefined1 *****)&LAB_143b02ec0;
  FUN_146c03fd0(param_1[1],(ulonglong)local_328 & 0xffffffff);
  local_258[(longlong)ppppuVar15] = (int)local_1a8 == 0;
  iVar12 = local_31c;
LAB_1482bccf5:
  puVar19 = puVar19 + 1;
  if (puVar19 == puVar1) goto LAB_1482bcf9d;
  goto LAB_1482bcc1b;
LAB_1482bcf9d:
  if ((local_320 == 0) || (iVar7 = iVar12 + 1, iVar12 + 1 == 0x32)) goto LAB_1482bd066;
  goto LAB_1482bca7b;
}



// FUNCTION 1482bd3e2 FUN_1482bd3e2 body=476 status=ok
// SIG undefined FUN_1482bd3e2(void)

void FUN_1482bd3e2(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_178 [32];
  int *local_158;
  int local_150;
  int local_14c;
  int *local_148;
  int local_140;
  int local_13c;
  undefined1 local_138 [8];
  uint local_130;
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [4];
  undefined1 *local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined **local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  int *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined1 *)(param_1 + 0x268) = 0;
  FUN_1448c4dd6(param_1 + 0x270,
                *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x24),1);
  if (param_2 == '\0') {
    local_b0 = *(longlong *)(param_1 + 8);
    local_c8 = 0;
    local_b8 = &PTR_LAB_149f36400;
    local_d8 = &LAB_146be5292;
    FUN_146be50a2(local_b0 + 0x1d0,local_78);
    FUN_146be4fdc(local_78,&local_d8);
    local_150 = *local_38 * 0x200 + local_38[1];
    local_148 = local_38;
    local_158 = local_38;
    local_14c = local_150;
    local_140 = local_150;
    local_13c = local_150;
    FUN_146be5300(local_138,&local_158,&local_148,local_78);
    if (local_d0 != local_130) {
      do {
        lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                   (ulonglong)(local_d0 >> 9) * 8) + (ulonglong)((local_d0 & 0x1ff) << 4));
        *(undefined1 *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)lVar1) = 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x270) + (lVar1 >> 0x20)) = 1;
        *(undefined1 *)(param_1 + 0x268) = 1;
        FUN_146be53a8(&local_d8);
      } while (local_d0 != local_130);
    }
    if (local_118 != 0) {
      if (local_108 == (longlong *)0x0) {
        local_108 = local_f8;
      }
      (**(code **)(*local_108 + 0x10))();
    }
    if (local_b8 != (undefined **)0x0) {
      if (local_a8 == (longlong *)0x0) {
        local_a8 = local_98;
      }
      (**(code **)(*local_a8 + 0x10))();
    }
    if (local_78[0] != 0) {
      if (local_68 == (longlong *)0x0) {
        local_68 = local_58;
      }
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482bd5c0 FUN_1482bd5c0 body=2665 status=ok
// SIG undefined FUN_1482bd5c0(void)

undefined8
FUN_1482bd5c0(longlong *param_1,uint param_2,double *param_3,undefined4 *param_4,uint param_5)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  double *pdVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  uint *local_188;
  uint local_174;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  ulonglong local_158;
  longlong *local_150;
  undefined8 local_148;
  double dStack_140;
  double local_138;
  uint local_12c;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *param_4 = 0xffffffff;
  if ((char)param_1[0x19] == '\0') {
    local_c8[0] = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
  }
  else {
    FUN_1482b3344(param_1 + 2,local_c8,param_2);
    uVar14 = 2;
    if ((local_c8[0] & 4) != 0) goto LAB_1482bd957;
  }
  uVar14 = 7;
  if (((int)param_2 < 0) ||
     (lVar6 = param_1[1], *(int *)(lVar6 + 0x1d0) * 0x200 + *(int *)(lVar6 + 0x1d4) <= (int)param_2)
     ) goto LAB_1482bd957;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar6 + 0x1d8) + (ulonglong)(param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U)) goto LAB_1482bd957;
  lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar16 = (ulonglong)((param_2 & 0x1ff) << 4);
  uVar2 = *(uint *)(lVar11 + uVar16);
  uVar3 = *(uint *)(lVar11 + 4 + uVar16);
  local_160 = (longlong)(int)uVar2;
  local_170 = (ulonglong)(int)uVar3;
  uVar4 = *(uint *)(lVar11 + 8 + uVar16);
  local_168 = (ulonglong)uVar4;
  uVar18 = *(uint *)(lVar11 + 0xc + uVar16);
  local_158 = (ulonglong)uVar18;
  lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(uVar4 >> 9) * 8);
  local_d0 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
  local_d8 = *(undefined8 *)(lVar11 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
  lVar11 = 0;
  do {
    lVar13 = lVar11 + 1;
    lVar15 = 0;
    if (lVar11 != 2) {
      lVar15 = lVar13;
    }
    uVar5 = *(uint *)((longlong)&local_d8 + lVar15 * 4);
    uVar4 = *(uint *)((longlong)&local_d8 + lVar11 * 4);
    if (((uVar4 == uVar2) || (bVar21 = uVar5 == uVar2, uVar5 = uVar4, bVar21)) && (uVar5 == uVar3))
    {
      uVar16 = 2;
      if (lVar11 != 0) {
        uVar16 = (ulonglong)((int)lVar11 - 1);
      }
      uVar20 = *(undefined4 *)((longlong)&local_d8 + uVar16 * 4);
      goto LAB_1482bd789;
    }
    lVar11 = lVar13;
  } while (lVar13 != 3);
  uVar20 = 0xffffffff;
LAB_1482bd789:
  if (uVar18 == 0xffffffff) {
    local_e0 = 0xffffffff;
    local_e8 = 0xffffffffffffffff;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
    local_e0 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
    local_e8 = *(undefined8 *)(lVar11 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
    lVar11 = 0;
    do {
      lVar13 = lVar11 + 1;
      lVar15 = 0;
      if (lVar11 != 2) {
        lVar15 = lVar13;
      }
      uVar18 = *(uint *)((longlong)&local_e8 + lVar15 * 4);
      uVar4 = *(uint *)((longlong)&local_e8 + lVar11 * 4);
      if (((uVar4 == uVar2) || (bVar21 = uVar18 == uVar2, uVar18 = uVar4, bVar21)) &&
         (uVar18 == uVar3)) {
        uVar16 = 2;
        if (lVar11 != 0) {
          uVar16 = (ulonglong)((int)lVar11 - 1);
        }
        uVar19 = *(undefined4 *)((longlong)&local_e8 + uVar16 * 4);
        goto LAB_1482bd875;
      }
      lVar11 = lVar13;
    } while (lVar13 != 3);
  }
  uVar19 = 0xffffffff;
LAB_1482bd875:
  lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
  uVar16 = (ulonglong)uVar2 & 0x1ff;
  dVar24 = *(double *)(lVar11 + 0x10 + uVar16 * 0x18);
  pdVar12 = (double *)(lVar11 + uVar16 * 0x18);
  dVar25 = *pdVar12;
  dVar26 = pdVar12[1];
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar16 = (ulonglong)uVar3 & 0x1ff;
  dVar22 = *(double *)(lVar6 + 0x10 + uVar16 * 0x18);
  pdVar12 = (double *)(lVar6 + uVar16 * 0x18);
  dVar1 = *pdVar12;
  dVar7 = pdVar12[1];
  uVar14 = 3;
  local_128 = dVar1;
  dStack_120 = dVar7;
  local_118 = dVar22;
  local_108 = dVar25;
  dStack_100 = dVar26;
  local_f8 = dVar24;
  if ((double)param_1[0x2f] * (double)param_1[0x2f] <
      (dVar24 - dVar22) * (dVar24 - dVar22) +
      (dVar25 - dVar1) * (dVar25 - dVar1) + (dVar26 - dVar7) * (dVar26 - dVar7)) goto LAB_1482bd957;
  local_150 = param_1 + 2;
  (**(code **)(*param_1 + 0x118))(param_1);
  local_188 = &local_12c;
  local_12c = 0xffffffff;
  local_190 = (undefined4)local_158;
  local_198 = (undefined4)local_168;
  local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
  local_1a0 = uVar19;
  cVar9 = FUN_1482c2f3e(param_1,param_2,(ulonglong)uVar2,(ulonglong)uVar3);
  uVar14 = 4;
  if (cVar9 == '\0') goto LAB_1482bd957;
  iVar10 = (int)param_1[0x2a];
  uVar4 = local_12c;
  if ((*(char *)((longlong)param_1 + 0x155) != '\0') && ((char)param_1[0x4d] == '\x01')) {
    if ((local_12c != 0xffffffff) &&
       (((*(byte *)(param_1[0x4e] + local_170) & local_12c != uVar3) != 0 ||
        ((local_12c != uVar2 && (*(char *)(param_1[0x4e] + local_160) != '\0'))))))
    goto LAB_1482bd957;
    if ((iVar10 != 1) &&
       ((uVar4 = uVar3, *(char *)(param_1[0x4e] + local_170) != '\x01' &&
        (uVar4 = local_12c, *(char *)(param_1[0x4e] + local_160) == '\x01')))) {
      uVar4 = uVar2;
    }
  }
  local_12c = uVar4;
  uVar4 = local_12c;
  if (((uVar3 == param_5 || uVar2 == param_5) && (uVar4 = param_5, local_12c != 0xffffffff)) &&
     (local_12c != param_5)) goto LAB_1482bd957;
  local_12c = uVar4;
  uVar4 = local_12c;
  local_160 = CONCAT44(local_160._4_4_,iVar10);
  local_170 = CONCAT44(local_170._4_4_,uVar2);
  uVar18 = uVar3;
  if (local_12c == 0xffffffff) {
LAB_1482bdaf0:
    (**(code **)(*param_1 + 200))(param_1,&local_148,uVar18,param_3);
    param_3[2] = local_138;
    *param_3 = (double)local_148;
    param_3[1] = dStack_140;
    dVar22 = SQRT((dVar22 - dVar24) * (dVar22 - dVar24) +
                  (dVar1 - dVar25) * (dVar1 - dVar25) + (dVar7 - dVar26) * (dVar7 - dVar26));
    if (1e-08 <= dVar22) {
      lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
      uVar16 = (ulonglong)(uVar18 & 0x1ff);
      dVar24 = *(double *)(lVar6 + uVar16 * 0x18) - *param_3;
      dVar25 = *(double *)(lVar6 + 8 + uVar16 * 0x18) - param_3[1];
      dVar26 = *(double *)(lVar6 + 0x10 + uVar16 * 0x18) - param_3[2];
      dVar22 = SQRT(dVar26 * dVar26 + dVar24 * dVar24 + dVar25 * dVar25) / dVar22;
    }
    else {
      dVar22 = 0.5;
    }
    uVar20 = (undefined4)local_168;
    dVar24 = 1.0;
    if (dVar22 <= 1.0) {
      dVar24 = dVar22;
    }
    if ((uint)local_160 == 1) {
      auVar27._0_8_ = dVar24 + 0.5;
      auVar27._8_8_ = 0;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = auVar27._0_8_;
      auVar23 = roundpd(auVar27,auVar23,1);
      dVar24 = auVar23._0_8_;
    }
    local_174 = uVar18;
    if (*(int *)((longlong)param_1 + 0x164) == 0) goto LAB_1482bdc75;
    uVar19 = (undefined4)local_158;
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
    local_1a0 = uVar19;
    cVar9 = FUN_1482c318a(param_1,uVar18,local_170 & 0xffffffff,param_3);
    if (cVar9 != '\0') goto LAB_1482bdcd3;
    lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(local_174 >> 9) * 8);
    uVar16 = (ulonglong)(local_174 & 0x1ff);
    dVar7 = 1.0 - dVar24;
    dVar22 = *(double *)(lVar6 + 0x10 + uVar16 * 0x18);
    dVar25 = *(double *)(lVar6 + 8 + uVar16 * 0x18);
    lVar11 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)((uint)local_170 >> 9) * 8)
    ;
    uVar17 = (ulonglong)((uint)local_170 & 0x1ff);
    dVar26 = *(double *)(lVar11 + 0x10 + uVar17 * 0x18);
    dVar1 = *(double *)(lVar11 + 8 + uVar17 * 0x18);
    *param_3 = *(double *)(lVar11 + uVar17 * 0x18) * dVar24 +
               dVar7 * *(double *)(lVar6 + uVar16 * 0x18);
    param_3[1] = dVar1 * dVar24 + dVar25 * dVar7;
    param_3[2] = dVar26 * dVar24 + dVar22 * dVar7;
    uVar20 = (undefined4)local_168;
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
    local_1a0 = uVar19;
    cVar9 = FUN_1482c318a(param_1,local_174,local_170 & 0xffffffff,param_3);
LAB_1482bddb8:
    uVar14 = 9;
    if (cVar9 != '\0') goto LAB_1482bdc75;
  }
  else {
    uVar18 = uVar2;
    if (local_12c == uVar2) {
      uVar18 = uVar3;
    }
    local_170 = CONCAT44(local_170._4_4_,uVar18);
    uVar18 = uVar4;
    if ((char)param_1[0x19] != '\x01') goto LAB_1482bdaf0;
    if (iVar10 != 1) {
      FUN_1482b33ce(local_150,&local_148);
      if (local_148._1_1_ == '\x01') goto LAB_1482bdaf0;
    }
    pdVar12 = &local_128;
    if (uVar4 == uVar2) {
      pdVar12 = &local_108;
    }
    param_3[2] = pdVar12[2];
    dVar24 = pdVar12[1];
    *param_3 = *pdVar12;
    param_3[1] = dVar24;
    dVar24 = 0.0;
    local_174 = uVar4;
    if (*(int *)((longlong)param_1 + 0x164) != 0) {
      local_1a0 = (undefined4)local_158;
      uVar20 = (undefined4)local_168;
      local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
      local_160 = CONCAT44(local_160._4_4_,uVar4);
      cVar9 = FUN_1482c318a(param_1,uVar4,local_170 & 0xffffffff,param_3);
      local_174 = (uint)local_160;
      goto LAB_1482bddb8;
    }
LAB_1482bdcd3:
    uVar20 = (undefined4)local_168;
LAB_1482bdc75:
    uVar19 = (undefined4)local_158;
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
    local_1a0 = uVar19;
    cVar9 = FUN_1482b19a2(param_1,uVar2,uVar3,param_3);
    uVar14 = 5;
    if (cVar9 == '\0') {
      uVar20 = (undefined4)local_168;
      local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
      local_1a0 = uVar19;
      cVar9 = FUN_1482b19a2(param_1,uVar3,uVar2,param_3);
      if (cVar9 == '\0') {
        if (*(char *)((longlong)param_1 + 0x157) == '\x01') {
          local_1a0 = (undefined4)local_158;
          local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
          cVar9 = FUN_1482b21ee(param_1,uVar2,uVar3,param_3);
          uVar14 = 10;
          if (cVar9 == '\0') {
            local_1a0 = (undefined4)local_158;
            local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,(int)local_168);
            cVar9 = FUN_1482b21ee(param_1,uVar3,uVar2,param_3);
            if (cVar9 == '\0') goto LAB_1482bde5a;
          }
        }
        else {
LAB_1482bde5a:
          *(int *)(param_1 + 0x50) = (int)param_1[0x50] + 1;
          local_1a8 = param_4;
          iVar10 = (**(code **)(*(longlong *)param_1[1] + 0x70))
                             ((longlong *)param_1[1],local_174,local_170 & 0xffffffff,dVar24);
          if (iVar10 == 0x1a) {
            uVar14 = 8;
          }
          else {
            uVar14 = 6;
            if (iVar10 == 0) {
              lVar6 = param_1[1];
              cVar9 = FUN_146bfed03(param_3);
              plVar8 = local_150;
              if (cVar9 != '\0') {
                lVar11 = *(longlong *)
                          (*(longlong *)(lVar6 + 0x10) + (ulonglong)(local_174 >> 9) * 8);
                *(double *)(lVar11 + 0x10 + (ulonglong)(local_174 & 0x1ff) * 0x18) = param_3[2];
                dVar24 = param_3[1];
                pdVar12 = (double *)(lVar11 + (ulonglong)(local_174 & 0x1ff) * 0x18);
                *pdVar12 = *param_3;
                pdVar12[1] = dVar24;
                if (*(char *)(lVar6 + 0x210) == '\x01') {
                  LOCK();
                  *(int *)(lVar6 + 0x214) = *(int *)(lVar6 + 0x214) + 1;
                  UNLOCK();
                }
              }
              if ((char)param_1[0x19] == '\x01') {
                FUN_1482f65d8(local_150,param_2);
                local_148 = param_1;
                cVar9 = FUN_1482bb52e(plVar8,param_4[8]);
                plVar8 = local_150;
                if (cVar9 != '\0') {
                  FUN_1482f65d8(local_150,param_4[10]);
                  FUN_1482f65d8(plVar8,param_4[8]);
                  FUN_1482c3386(&local_148,param_4[10]);
                }
                if ((param_4[9] != -1) &&
                   (cVar9 = FUN_1482bb52e(local_150), plVar8 = local_150, cVar9 != '\0')) {
                  FUN_1482f65d8(local_150,param_4[0xb]);
                  FUN_1482f65d8(plVar8,param_4[9]);
                  FUN_1482c3386(&local_148,param_4[0xb]);
                }
                FUN_1482f669e(param_1 + 0xc,local_170 & 0xffffffff);
              }
              local_1a8 = param_4;
              (**(code **)(*param_1 + 0xa8))(param_1,param_2,local_174,local_170 & 0xffffffff);
              uVar14 = 0;
              (**(code **)(*param_1 + 0x28))(param_1,0);
            }
          }
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x120))(param_1);
LAB_1482bd957:
  if ((local_b0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482be02a FUN_1482be02a body=923 status=ok
// SIG undefined FUN_1482be02a(void)

void FUN_1482be02a(longlong *param_1,double param_2,int param_3,undefined4 param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  int local_104;
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_5 < *(uint *)(param_1[1] + 0x170)) {
    param_1[0x2f] = (longlong)param_2;
    *(undefined1 *)(param_1 + 0x4d) = 0;
    (**(code **)(*param_1 + 0xd8))();
    (**(code **)(*param_1 + 0xf8))(param_1);
    FUN_1482bd3e2(param_1,param_4);
    cVar12 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar12 == '\0') {
      (**(code **)(*param_1 + 0x100))(param_1);
      (**(code **)(*param_1 + 0xe8))(param_1);
      (**(code **)(*param_1 + 0x118))(param_1);
      if ((0 < param_3) &&
         (uVar18 = *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),
         0 < (int)uVar18)) {
        iVar15 = 0;
        do {
          uVar16 = 0;
          local_104 = 0;
          do {
            lVar7 = param_1[1];
            if ((int)uVar16 < *(int *)(lVar7 + 0x1d0) * 0x200 + *(int *)(lVar7 + 0x1d4)) {
              uVar14 = (ulonglong)(uVar16 >> 9);
              uVar19 = uVar16 & 0x1ff;
              if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + uVar14 * 8) +
                                      (ulonglong)uVar19 * 2) - 1U) < 0xfffe) &&
                 (*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x1c0) + uVar14 * 8) + 0xc +
                          (ulonglong)(uVar19 << 4)) != -1)) {
                if (*(uint *)(lVar7 + 0x170) <= param_5) break;
                cVar12 = (**(code **)(*param_1 + 8))(param_1);
                if (cVar12 != '\0') goto LAB_1482be09e;
                lVar7 = *(longlong *)(param_1[1] + 0x10);
                uVar14 = *(ulonglong *)
                          (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + uVar14 * 8) +
                          (ulonglong)(uVar19 << 4));
                lVar8 = *(longlong *)(lVar7 + (uVar14 >> 9 & 0x7fffff) * 8);
                uVar17 = uVar14 & 0x1ff;
                dVar1 = *(double *)(lVar8 + uVar17 * 0x18);
                dVar2 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
                dVar3 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
                lVar7 = *(longlong *)(lVar7 + (uVar14 >> 0x29) * 8);
                uVar14 = uVar14 >> 0x20 & 0x1ff;
                dVar4 = *(double *)(lVar7 + uVar14 * 0x18);
                dVar5 = *(double *)(lVar7 + 8 + uVar14 * 0x18);
                dVar6 = *(double *)(lVar7 + 0x10 + uVar14 * 0x18);
                dVar9 = dVar4 - dVar1;
                dVar10 = dVar5 - dVar2;
                dVar11 = dVar6 - dVar3;
                if (dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10 <= param_2 * param_2) {
                  *(int *)((longlong)param_1 + 0x284) = *(int *)((longlong)param_1 + 0x284) + 1;
                  local_f0 = (dVar3 + dVar6) * 0.5;
                  local_f8 = (dVar2 + dVar5) * 0.5;
                  local_100 = (dVar1 + dVar4) * 0.5;
                  local_e0 = 0xffffffffffffffff;
                  local_c0 = 0xffffffffffffffff;
                  local_d0 = 0xffffffff;
                  uStack_cc = 0xffffffff;
                  uStack_c8 = 0xffffffff;
                  uStack_c4 = 0xffffffff;
                  local_118 = 0xffffffff;
                  iVar13 = FUN_1482bd5c0(param_1,uVar16,&local_100,local_e8);
                  local_104 = local_104 + (uint)(iVar13 == 0);
                }
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar18 != uVar16);
        } while (((local_104 != 0) && (param_5 < *(uint *)(param_1[1] + 0x170))) &&
                (iVar15 = iVar15 + 1, iVar15 != param_3));
      }
      (**(code **)(*param_1 + 0x120))(param_1);
      (**(code **)(*param_1 + 0xf0))(param_1);
      cVar12 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar12 == '\0') {
        (**(code **)(*param_1 + 0xa0))(param_1);
        (**(code **)(*param_1 + 0xe0))(param_1);
      }
    }
  }
LAB_1482be09e:
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482be3c6 FUN_1482be3c6 body=811 status=ok
// SIG undefined FUN_1482be3c6(void)

void FUN_1482be3c6(longlong *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1[1] + 0x170) != 0) {
    (**(code **)(*param_1 + 0xd8))();
    (**(code **)(*param_1 + 0xf8))(param_1);
    FUN_1482bd3e2(param_1,0);
    cVar3 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar3 == '\0') {
      (**(code **)(*param_1 + 0x88))(param_1);
      cVar3 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x80))(param_1);
        cVar3 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar3 == '\0') {
          (**(code **)(*param_1 + 0x78))(param_1);
          cVar3 = (**(code **)(*param_1 + 8))(param_1);
          if (cVar3 == '\0') {
            (**(code **)(*param_1 + 0x90))(param_1);
            cVar3 = (**(code **)(*param_1 + 8))(param_1);
            if (cVar3 == '\0') {
              (**(code **)(*param_1 + 0x100))(param_1);
              (**(code **)(*param_1 + 0xe8))(param_1);
              (**(code **)(*param_1 + 0x118))(param_1);
              if (0 < (int)param_1[0x4a]) {
                do {
                  if (*(int *)((longlong)param_1 + 0x184) == 3) {
                    if (*(float *)(param_1 + 0x2e) <=
                        ABS(*(float *)(*(longlong *)param_1[0x48] + 0x10)) &&
                        ABS(*(float *)(*(longlong *)param_1[0x48] + 0x10)) !=
                        *(float *)(param_1 + 0x2e)) break;
                  }
                  else {
                    if (*(int *)((longlong)param_1 + 0x184) == 1) {
                      iVar4 = *(int *)(param_1[1] + 0x50);
                    }
                    else {
                      iVar4 = *(int *)(param_1[1] + 0x170);
                    }
                    if (iVar4 <= (int)param_1[0x30]) break;
                  }
                  *(int *)((longlong)param_1 + 0x284) = *(int *)((longlong)param_1 + 0x284) + 1;
                  uVar2 = *(uint *)(*(longlong *)param_1[0x48] + 0xc);
                  FUN_146bd26ea(param_1 + 0x46,1);
                  if ((-1 < (int)uVar2) &&
                     (lVar5 = param_1[1],
                     (int)uVar2 < *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4))) {
                    if ((ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar5 + 0x1d8) +
                                             (ulonglong)(uVar2 >> 9) * 8) +
                                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
                      cVar3 = (**(code **)(*param_1 + 8))(param_1);
                      if (cVar3 != '\0') goto LAB_1482be409;
                      local_a0 = 0xffffffffffffffff;
                      local_90 = 0xffffffff;
                      uStack_8c = 0xffffffff;
                      uStack_88 = 0xffffffff;
                      uStack_84 = 0xffffffff;
                      local_80 = 0xffffffffffffffff;
                      lVar5 = (ulonglong)uVar2 * 0x90;
                      local_b8 = *(undefined8 *)(param_1[0x44] + 0x88 + lVar5);
                      puVar1 = (undefined4 *)(param_1[0x44] + 0x78 + lVar5);
                      local_c8 = *puVar1;
                      uStack_c4 = puVar1[1];
                      uStack_c0 = puVar1[2];
                      uStack_bc = puVar1[3];
                      local_d8 = 0xffffffff;
                      iVar4 = FUN_1482bd5c0(param_1,(ulonglong)uVar2,&local_c8,local_a8);
                      if (iVar4 == 8) {
                        if (2 < *(int *)(param_1[1] + 0x170)) {
                          FUN_1482be6f2(param_1,*(undefined4 *)
                                                 (*(longlong *)
                                                   (*(longlong *)(param_1[1] + 0x1c0) +
                                                   (ulonglong)(uVar2 >> 9) * 8) + 8 +
                                                 (ulonglong)((uVar2 & 0x1ff) << 4)));
                        }
                      }
                      else if (iVar4 == 0) {
                        (**(code **)(*param_1 + 0x98))(param_1,local_a8);
                      }
                    }
                  }
                } while (0 < (int)param_1[0x4a]);
              }
              (**(code **)(*param_1 + 0x120))(param_1);
              (**(code **)(*param_1 + 0xf0))(param_1);
              cVar3 = (**(code **)(*param_1 + 8))(param_1);
              if (cVar3 == '\0') {
                (**(code **)(*param_1 + 0xa0))(param_1);
                (**(code **)(*param_1 + 0xe0))(param_1);
              }
            }
          }
        }
      }
    }
  }
LAB_1482be409:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482be6f2 FUN_1482be6f2 body=988 status=ok
// SIG undefined FUN_1482be6f2(void)

void FUN_1482be6f2(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  code **ppcVar6;
  longlong *plVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_278 [40];
  ulonglong local_250;
  longlong local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  undefined8 local_228;
  undefined4 local_220;
  code *local_218;
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
  code *local_178;
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
  uint local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (-1 < (int)param_2) {
    lVar10 = param_1[1];
    if ((int)param_2 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144)) {
      uVar9 = (ulonglong)(param_2 >> 9);
      uVar5 = (ulonglong)(param_2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar10 + 0x148) + uVar9 * 8) + uVar5 * 2)
                  - 1U) < 0xfffe) {
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + uVar9 * 8);
        local_248 = uVar5 * 3;
        local_220 = *(undefined4 *)(lVar10 + 8 + uVar5 * 0xc);
        local_228 = *(ulonglong *)(lVar10 + uVar5 * 0xc);
        local_240 = local_198;
        local_238 = local_f8;
        bVar8 = true;
        lVar10 = 0;
        local_250 = uVar9;
        local_230 = param_1;
        do {
          local_150 = param_1[1];
          uStack_148 = *(undefined4 *)((longlong)&local_228 + lVar10 * 4);
          local_168 = 0;
          local_158 = &PTR_LAB_149f3aae0;
          local_178 = FUN_146be9588;
          local_218 = (code *)(local_150 + 0xb8);
          uStack_210 = CONCAT44(uStack_210._4_4_,uStack_148);
          FUN_146be94ac(local_d8,&local_218,&local_178);
          local_128 = 0xffffffffffffffff;
          local_118[0] = 0;
          local_108 = (longlong *)0x0;
          local_158 = (undefined **)local_78;
          local_168 = local_88;
          uStack_160 = uStack_80;
          local_178 = local_98;
          uStack_170 = uStack_90;
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
          local_218 = (code *)CONCAT44(uStack_6c,local_70);
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
          ppcVar6 = &local_218;
          while( true ) {
            FUN_146bfd1f0(ppcVar6);
            if ((((local_178 == local_218) && ((int)uStack_170 == (int)uStack_210)) &&
                ((int)uStack_160 == (int)uStack_200)) && (uStack_160._4_4_ == uStack_200._4_4_))
            break;
            bVar8 = (bool)(bVar8 & local_120 == param_2);
            ppcVar6 = &local_178;
          }
          if (local_1b8[0] != 0) {
            plVar7 = local_1a8;
            if (local_1a8 == (longlong *)0x0) {
              plVar7 = local_240;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          param_1 = local_230;
          if (local_118[0] != 0) {
            plVar7 = local_108;
            if (local_108 == (longlong *)0x0) {
              plVar7 = local_238;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          if (local_d8[0] != 0) {
            plVar7 = local_c8;
            if (local_c8 == (longlong *)0x0) {
              plVar7 = local_b8;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 3);
        if (bVar8) {
          lVar10 = *(longlong *)(*(longlong *)(param_1[1] + 0x180) + local_250 * 8);
          uVar1 = *(undefined4 *)(lVar10 + local_248 * 4);
          uVar2 = *(undefined4 *)(lVar10 + 4 + local_248 * 4);
          uVar3 = *(undefined4 *)(lVar10 + 8 + local_248 * 4);
          iVar4 = FUN_146c0b65a(param_1[1],param_2,1,0);
          if ((iVar4 == 0) && ((char)param_1[0x19] == '\x01')) {
            plVar7 = param_1 + 2;
            FUN_1482f65d8(plVar7,uVar1);
            FUN_1482f65d8(plVar7,uVar2);
            FUN_1482f65d8(plVar7,uVar3);
            plVar7 = param_1 + 0xc;
            FUN_1482f669e(plVar7,local_228 & 0xffffffff);
            FUN_1482f669e(plVar7,local_228._4_4_);
            FUN_1482f669e(plVar7,local_220);
          }
          (**(code **)(*param_1 + 0xb0))(param_1,param_2);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482beb14 FUN_1482beb14 body=1154 status=ok
// SIG undefined FUN_1482beb14(void)

void FUN_1482beb14(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  code **ppcVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStack_288 [44];
  uint local_25c;
  longlong *local_258;
  longlong *local_250;
  code *local_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1ec;
  longlong local_1e8 [2];
  longlong *local_1d8;
  longlong local_1c8 [4];
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined **local_188;
  longlong local_180;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  undefined4 local_14c;
  longlong local_148 [2];
  longlong *local_138;
  longlong local_128 [4];
  longlong local_108 [2];
  longlong *local_f8;
  longlong local_e8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_1482bef98(param_1 + 0x198,
                *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x24));
  lVar6 = *(longlong *)(param_1 + 8);
  uVar21 = *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24);
  uVar18 = 0;
  if ((uVar21 != 0) &&
     (uVar18 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar6 + 0x28) - 1U))) {
    uVar19 = 1;
    uVar13 = 1;
    if (1 < (int)uVar21) {
      uVar19 = uVar21;
    }
    do {
      uVar18 = uVar19;
      if (uVar19 == uVar13) break;
      uVar16 = uVar13 >> 9;
      uVar20 = uVar13 & 0x1ff;
      uVar18 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar6 + 0x28))[uVar16] +
                                         (ulonglong)uVar20 * 2) - 1U));
  }
  if (uVar18 == uVar21) {
LAB_1482bef14:
    if ((local_70 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_258 = local_1c8;
  local_250 = local_128;
  local_25c = uVar21;
LAB_1482bebc3:
  lVar7 = *(longlong *)(param_1 + 0x198);
  lVar22 = (longlong)(int)uVar18 * 0x70;
  puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar22);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar22);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar22);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar22);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + lVar22) = 0;
  ((undefined8 *)(lVar7 + lVar22))[1] = 0;
  uVar12 = DAT_14c8464e8._4_4_;
  uVar11 = (undefined4)DAT_14c8464e8;
  uVar10 = DAT_14c8464e0._4_4_;
  uVar9 = (undefined4)DAT_14c8464e0;
  *(undefined8 *)(lVar7 + 0x60 + lVar22) = DAT_14c8464f0;
  puVar2 = (undefined4 *)(lVar7 + 0x50 + lVar22);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  *(undefined8 *)(lVar7 + 0x68 + lVar22) = 0;
  local_180 = *(longlong *)(param_1 + 8);
  local_198 = 0;
  local_188 = &PTR_LAB_149f3aae0;
  local_1a8 = FUN_146be9588;
  local_248 = (code *)(local_180 + 0xb8);
  uStack_240 = CONCAT44(uStack_240._4_4_,uVar18);
  uStack_178 = uVar18;
  FUN_146be94ac(local_108,&local_248,&local_1a8);
  local_158 = 0xffffffffffffffff;
  local_148[0] = 0;
  local_138 = (longlong *)0x0;
  local_188 = (undefined **)local_a8;
  local_198 = local_b8;
  uStack_190 = uStack_b0;
  local_1a8 = local_c8;
  uStack_1a0 = uStack_c0;
  uStack_178 = uStack_98;
  uStack_174 = uStack_94;
  local_170 = local_90;
  uStack_16c = uStack_8c;
  uStack_168 = uStack_88;
  uStack_164 = uStack_84;
  local_160 = local_80;
  FUN_146be971a(local_148,local_108);
  local_14c = 0;
  FUN_146bfd1f0(&local_1a8);
  local_1f8 = 0xffffffffffffffff;
  local_1e8[0] = 0;
  local_1d8 = (longlong *)0x0;
  local_228 = local_80;
  local_248 = (code *)CONCAT44(uStack_9c,local_a0);
  uStack_240 = CONCAT44(uStack_94,uStack_98);
  uStack_230 = CONCAT44(uStack_84,uStack_88);
  local_220 = local_a0;
  uStack_21c = uStack_9c;
  uStack_218 = uStack_98;
  uStack_214 = uStack_94;
  local_210 = local_90;
  uStack_20c = uStack_8c;
  uStack_208 = uStack_88;
  uStack_204 = uStack_84;
  local_200 = local_80;
  FUN_146be971a(local_1e8,local_108);
  local_1ec = 0;
  ppcVar14 = &local_248;
  do {
    FUN_146bfd1f0(ppcVar14);
    if (local_1a8 == local_248) {
      if ((int)uStack_1a0 == (int)uStack_240) {
        if ((int)uStack_190 == (int)uStack_230) {
          if (uStack_190._4_4_ == uStack_230._4_4_) break;
        }
      }
    }
    lVar7 = *(longlong *)(param_1 + 0x198);
    lVar8 = *(longlong *)(param_1 + 0x208);
    lVar17 = (longlong)local_150 * 0x70;
    dVar3 = *(double *)(*(longlong *)(param_1 + 0x1f8) + (longlong)local_150 * 8);
    FUN_1482c65c2(lVar7 + lVar22,SUB84(dVar3,0),lVar8 + lVar17);
    dVar4 = *(double *)(lVar8 + 0x60 + lVar17);
    dVar5 = *(double *)(lVar8 + 0x58 + lVar17);
    *(double *)(lVar7 + 0x50 + lVar22) =
         *(double *)(lVar8 + 0x50 + lVar17) * dVar3 + *(double *)(lVar7 + 0x50 + lVar22);
    *(double *)(lVar7 + 0x58 + lVar22) = dVar5 * dVar3 + *(double *)(lVar7 + 0x58 + lVar22);
    *(double *)(lVar7 + 0x60 + lVar22) = dVar4 * dVar3 + *(double *)(lVar7 + 0x60 + lVar22);
    *(double *)(lVar7 + 0x68 + lVar22) =
         dVar3 * *(double *)(lVar8 + 0x68 + lVar17) + *(double *)(lVar7 + 0x68 + lVar22);
    ppcVar14 = &local_1a8;
  } while( true );
  if (local_1e8[0] != 0) {
    plVar15 = local_1d8;
    if (local_1d8 == (longlong *)0x0) {
      plVar15 = local_258;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (local_148[0] != 0) {
    plVar15 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar15 = local_250;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (local_108[0] != 0) {
    plVar15 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar15 = local_e8;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  uVar21 = uVar18 + 1;
  if ((int)(uVar18 + 1) < (int)local_25c) {
    uVar21 = local_25c;
  }
  do {
    uVar19 = uVar21;
    if (uVar21 - 1 == uVar18) break;
    uVar18 = uVar18 + 1;
    uVar19 = uVar18;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar18 >> 9) * 8
                                         ) + (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
  uVar18 = uVar19;
  if (uVar18 == local_25c) goto LAB_1482bef14;
  goto LAB_1482bebc3;
}



// FUNCTION 1482bef98 FUN_1482bef98 body=106 status=ok
// SIG undefined FUN_1482bef98(void)

void FUN_1482bef98(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148301756(param_1,iVar1);
    }
    FUN_148301715((longlong)iVar1 * 0x70 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1483017e6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482bf004 FUN_1482bf004 body=634 status=ok
// SIG undefined FUN_1482bf004(void)

void FUN_1482bf004(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x156) == '\x01') {
    local_68 = *(undefined8 *)(param_1 + 400);
    local_60 = param_1;
    if (*(char *)(param_1 + 200) == '\x01') {
      plVar1 = (longlong *)(param_1 + 0x10);
      lVar2 = param_1 + 0x20;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = lVar2;
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar8 = *(int *)(param_1 + 0x38);
      }
      uStack_70 = CONCAT44(uStack_3c,uStack_40);
      local_78 = local_48;
      uVar3 = local_78;
      local_88 = (undefined4)local_58;
      uStack_84 = local_58._4_4_;
      uStack_80 = (undefined4)uStack_50;
      uStack_7c = uStack_50._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar5 = local_78._4_4_;
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar8) || (local_78 = uVar3, uStack_50 != lVar2)) {
        do {
          local_78 = uVar3;
          FUN_1482bf280(&local_68,*(undefined4 *)(*local_90 + (longlong)iVar5 * 0x28));
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != plVar1 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar8));
      }
    }
    else {
      lVar2 = *(longlong *)(param_1 + 8);
      uVar9 = *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4);
      uVar10 = 0;
      if ((uVar9 != 0) &&
         (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x1d8) - 1U))) {
        uVar11 = 1;
        uVar6 = 1;
        if (1 < (int)uVar9) {
          uVar11 = uVar9;
        }
        do {
          uVar10 = uVar11;
          if (uVar11 == uVar6) break;
          uVar7 = uVar6 >> 9;
          uVar12 = uVar6 & 0x1ff;
          uVar10 = uVar6;
          uVar6 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x1d8))[uVar7] +
                                             (ulonglong)uVar12 * 2) - 1U));
      }
      if (uVar10 != uVar9) {
        plVar1 = *(longlong **)(lVar2 + 0x208);
        do {
          if (*(int *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                        (ulonglong)(uVar10 >> 9) * 8) + 0xc + (ulonglong)((uVar10 & 0x1ff) << 4)) ==
              -1) {
LAB_1482bf229:
            FUN_1482bf280(&local_68,uVar10);
          }
          else {
            cVar4 = FUN_146c13702(*(longlong *)(param_1 + 8),uVar10);
            if (plVar1 != (longlong *)0x0) {
              if ((cVar4 != '\0') ||
                 (cVar4 = (**(code **)(*plVar1 + 0x98))(plVar1,uVar10), cVar4 != '\0'))
              goto LAB_1482bf229;
              cVar4 = (**(code **)(*plVar1 + 0x80))(plVar1,uVar10);
            }
            if (cVar4 != '\0') goto LAB_1482bf229;
          }
          uVar11 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)uVar9) {
            uVar11 = uVar9;
          }
          do {
            uVar6 = uVar11;
            if (uVar11 - 1 == uVar10) break;
            uVar10 = uVar10 + 1;
            uVar6 = uVar10;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar2 + 0x1d8) +
                                                 (ulonglong)(uVar10 >> 9) * 8) +
                                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
          uVar10 = uVar6;
        } while (uVar10 != uVar9);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482bf280 FUN_1482bf280 body=845 status=ok
// SIG undefined FUN_1482bf280(void)

void FUN_1482bf280(double *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double *pdVar11;
  undefined1 auStack_198 [40];
  double *local_170;
  uint *local_168;
  double *local_160;
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
  undefined1 local_100 [24];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_a8;
  int local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar5 = param_1[1];
  lVar6 = *(longlong *)((longlong)dVar5 + 8);
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar9 = (ulonglong)((param_2 & 0x1ff) << 4);
  uVar3 = *(uint *)(lVar7 + 4 + uVar9);
  iVar4 = *(int *)(lVar7 + 0xc + uVar9);
  lVar8 = *(longlong *)
           (*(longlong *)(lVar6 + 0x10) + (ulonglong)(*(uint *)(lVar7 + uVar9) >> 9) * 8);
  uVar10 = (ulonglong)*(uint *)(lVar7 + uVar9) & 0x1ff;
  local_b8 = *(undefined8 *)(lVar8 + 0x10 + uVar10 * 0x18);
  puVar1 = (undefined8 *)(lVar8 + uVar10 * 0x18);
  local_c8 = *puVar1;
  uStack_c0 = puVar1[1];
  lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar10 = (ulonglong)uVar3 & 0x1ff;
  local_d8 = *(undefined8 *)(lVar8 + 0x10 + uVar10 * 0x18);
  puVar2 = (undefined4 *)(lVar8 + uVar10 * 0x18);
  local_e8 = *puVar2;
  uStack_e4 = puVar2[1];
  uStack_e0 = puVar2[2];
  uStack_dc = puVar2[3];
  local_170 = param_1;
  local_a8 = param_2;
  FUN_146c13dec(lVar6,local_100,*(undefined4 *)(lVar7 + 8 + uVar9));
  FUN_1482bb582(&local_150,&local_c8,&local_e8,local_100);
  local_168 = &local_a8;
  local_160 = &local_150;
  FUN_1482f6104((longlong)dVar5 + 0x1a8,&local_a4);
  lVar6 = *(longlong *)((longlong)dVar5 + 0x1a8) + (longlong)local_a4 * 0x60;
  pdVar11 = (double *)(lVar6 + 8);
  if (iVar4 == -1) {
    local_150 = *pdVar11;
    local_148 = *(double *)(lVar6 + 0x10);
    local_140 = *(double *)(lVar6 + 0x18);
    local_138 = *(double *)(lVar6 + 0x20);
    local_130 = *(double *)(lVar6 + 0x28);
    local_128 = *(double *)(lVar6 + 0x30);
    local_120 = *(double *)(lVar6 + 0x38);
    local_118 = *(double *)(lVar6 + 0x40);
    local_110 = *(double *)(lVar6 + 0x48);
    local_108 = *(double *)(lVar6 + 0x50);
  }
  else {
    FUN_146c13dec(*(undefined8 *)((longlong)dVar5 + 8),&local_168,iVar4);
    FUN_1482bb582(&local_150,&local_c8,&local_e8,&local_168);
    local_150 = local_150 + *pdVar11;
    *pdVar11 = local_150;
    local_148 = local_148 + *(double *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x10) = local_148;
    local_140 = local_140 + *(double *)(lVar6 + 0x18);
    *(double *)(lVar6 + 0x18) = local_140;
    local_138 = local_138 + *(double *)(lVar6 + 0x20);
    *(double *)(lVar6 + 0x20) = local_138;
    local_130 = local_130 + *(double *)(lVar6 + 0x28);
    *(double *)(lVar6 + 0x28) = local_130;
    local_128 = local_128 + *(double *)(lVar6 + 0x30);
    *(double *)(lVar6 + 0x30) = local_128;
    local_120 = local_120 + *(double *)(lVar6 + 0x38);
    *(double *)(lVar6 + 0x38) = local_120;
    local_118 = local_118 + *(double *)(lVar6 + 0x40);
    *(double *)(lVar6 + 0x40) = local_118;
    local_110 = local_110 + *(double *)(lVar6 + 0x48);
    *(double *)(lVar6 + 0x48) = local_110;
    local_108 = local_108 + *(double *)(lVar6 + 0x50);
    *(double *)(lVar6 + 0x50) = local_108;
  }
  dVar5 = *local_170;
  *pdVar11 = local_150 * dVar5;
  *(double *)(lVar6 + 0x10) = local_148 * dVar5;
  *(double *)(lVar6 + 0x18) = local_140 * dVar5;
  *(double *)(lVar6 + 0x20) = local_138 * dVar5;
  *(double *)(lVar6 + 0x28) = local_130 * dVar5;
  *(double *)(lVar6 + 0x30) = local_128 * dVar5;
  *(double *)(lVar6 + 0x38) = local_120 * dVar5;
  *(double *)(lVar6 + 0x40) = local_118 * dVar5;
  *(double *)(lVar6 + 0x48) = local_110 * dVar5;
  *(double *)(lVar6 + 0x50) = local_108 * dVar5;
  if ((local_a0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482bf5ce FUN_1482bf5ce body=849 status=ok
// SIG undefined FUN_1482bf5ce(void)

void FUN_1482bf5ce(longlong param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_108 [32];
  double *local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar13 = *(int *)(*(longlong *)(param_1 + 8) + 0x140) * 0x200 +
           *(int *)(*(longlong *)(param_1 + 8) + 0x144);
  FUN_1482bef98(param_1 + 0x208,iVar13);
  FUN_1400bd09c(param_1 + 0x1f8,iVar13,1);
  lVar2 = *(longlong *)(param_1 + 8);
  uVar12 = *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144);
  uVar15 = 0;
  if ((uVar12 != 0) &&
     (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x148) - 1U))) {
    uVar16 = 1;
    uVar9 = 1;
    if (1 < (int)uVar12) {
      uVar16 = uVar12;
    }
    do {
      uVar15 = uVar16;
      if (uVar16 == uVar9) break;
      uVar11 = uVar9 >> 9;
      uVar14 = uVar9 & 0x1ff;
      uVar15 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x148))[uVar11] +
                                         (ulonglong)uVar14 * 2) - 1U));
  }
  if (uVar15 != uVar12) {
    do {
      local_e8 = &local_e0;
      FUN_146c1477c(*(undefined8 *)(param_1 + 8),uVar15,&local_c8,
                    (longlong)(int)uVar15 * 8 + *(longlong *)(param_1 + 0x1f8));
      dVar7 = local_c8 * dStack_c0;
      dVar4 = local_c8 * local_b8;
      lVar3 = *(longlong *)(param_1 + 0x208);
      lVar10 = (longlong)(int)uVar15 * 0x70;
      *(double *)(lVar3 + lVar10) = local_c8 * local_c8;
      *(double *)(lVar3 + 8 + lVar10) = dVar7;
      *(double *)(lVar3 + 0x10 + lVar10) = dVar4;
      dVar6 = dVar4 * local_d0 + local_c8 * local_c8 * local_e0 + dVar7 * local_d8;
      dVar8 = dStack_c0 * local_b8;
      *(double *)(lVar3 + 0x18 + lVar10) = dStack_c0 * dStack_c0;
      dVar7 = dVar8 * local_d0 + dVar7 * local_e0 + dStack_c0 * dStack_c0 * local_d8;
      *(double *)(lVar3 + 0x20 + lVar10) = dVar8;
      *(double *)(lVar3 + 0x28 + lVar10) = local_b8 * local_b8;
      dVar4 = local_b8 * local_b8 * local_d0 + dVar4 * local_e0 + dVar8 * local_d8;
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = -dVar6;
      auVar5._12_4_ = (uint)((ulonglong)dVar7 >> 0x20) ^ 0x80000000;
      *(undefined1 (*) [16])(lVar3 + 0x30 + lVar10) = auVar5;
      *(double *)(lVar3 + 0x40 + lVar10) = -dVar4;
      *(double *)(lVar3 + 0x48 + lVar10) = local_d0 * dVar4 + local_e0 * dVar6 + local_d8 * dVar7;
      pdVar1 = (double *)(lVar3 + 0x50 + lVar10);
      *pdVar1 = local_c8;
      pdVar1[1] = dStack_c0;
      *(double *)(lVar3 + 0x60 + lVar10) = local_b8;
      *(double *)(lVar3 + 0x68 + lVar10) =
           -(local_c8 * local_e0 + dStack_c0 * local_d8 + local_b8 * local_d0);
      uVar16 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar12) {
        uVar16 = uVar12;
      }
      do {
        uVar9 = uVar16;
        if (uVar16 - 1 == uVar15) break;
        uVar15 = uVar15 + 1;
        uVar9 = uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar2 + 0x148) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      uVar15 = uVar9;
    } while (uVar15 != uVar12);
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482bf920 FUN_1482bf920 body=603 status=ok
// SIG undefined FUN_1482bf920(void)

longlong FUN_1482bf920(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = *(longlong *)(param_1 + 0x198);
  lVar8 = (longlong)param_3[1] * 0x70;
  iVar5 = *param_3;
  lVar9 = (longlong)iVar5 * 0x70;
  FUN_1482c7178(param_2,lVar7 + lVar9,lVar7 + lVar8);
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(lVar7 + 0x60 + lVar9);
  puVar1 = (undefined8 *)(lVar7 + 0x50 + lVar9);
  uVar6 = puVar1[1];
  *(undefined8 *)(param_2 + 0x50) = *puVar1;
  *(undefined8 *)(param_2 + 0x58) = uVar6;
  dVar2 = *(double *)(lVar7 + 0x68 + lVar9);
  *(double *)(param_2 + 0x50) = *(double *)(lVar7 + 0x50 + lVar8) + *(double *)(param_2 + 0x50);
  *(double *)(param_2 + 0x58) = *(double *)(lVar7 + 0x58 + lVar8) + *(double *)(param_2 + 0x58);
  *(double *)(param_2 + 0x60) = *(double *)(lVar7 + 0x60 + lVar8) + *(double *)(param_2 + 0x60);
  *(double *)(param_2 + 0x68) = dVar2 + *(double *)(lVar7 + 0x68 + lVar8);
  if (*(char *)(param_1 + 0x154) == '\0') {
    lVar7 = (longlong)param_3[2];
    if (lVar7 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x208);
      lVar9 = lVar7 * 0x70;
      dVar2 = *(double *)(*(longlong *)(param_1 + 0x1f8) + lVar7 * 8);
      FUN_1482c65c2(param_2,-dVar2,lVar8 + lVar9);
      dVar3 = *(double *)(lVar8 + 0x58 + lVar9);
      dVar4 = *(double *)(lVar8 + 0x60 + lVar9);
      *(double *)(param_2 + 0x50) =
           *(double *)(param_2 + 0x50) - *(double *)(lVar8 + 0x50 + lVar9) * dVar2;
      *(double *)(param_2 + 0x58) = *(double *)(param_2 + 0x58) - dVar3 * dVar2;
      *(double *)(param_2 + 0x60) = *(double *)(param_2 + 0x60) - dVar4 * dVar2;
      *(double *)(param_2 + 0x68) =
           *(double *)(param_2 + 0x68) - dVar2 * *(double *)(lVar8 + 0x68 + lVar9);
    }
    lVar7 = (longlong)param_3[3];
    if (lVar7 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x208);
      lVar9 = lVar7 * 0x70;
      dVar2 = *(double *)(*(longlong *)(param_1 + 0x1f8) + lVar7 * 8);
      FUN_1482c65c2(param_2,-dVar2,lVar8 + lVar9);
      dVar3 = *(double *)(lVar8 + 0x58 + lVar9);
      dVar4 = *(double *)(lVar8 + 0x60 + lVar9);
      *(double *)(param_2 + 0x50) =
           *(double *)(param_2 + 0x50) - *(double *)(lVar8 + 0x50 + lVar9) * dVar2;
      *(double *)(param_2 + 0x58) = *(double *)(param_2 + 0x58) - dVar3 * dVar2;
      *(double *)(param_2 + 0x60) = *(double *)(param_2 + 0x60) - dVar4 * dVar2;
      *(double *)(param_2 + 0x68) =
           *(double *)(param_2 + 0x68) - dVar2 * *(double *)(lVar8 + 0x68 + lVar9);
    }
  }
  if (*(char *)(param_1 + 0x156) == '\x01') {
    local_60 = param_1;
    local_58 = param_2;
    FUN_1482bfb7c(&local_60,iVar5);
    FUN_1482bfb7c(&local_60,param_3[1]);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482bfb7c FUN_1482bfb7c body=357 status=ok
// SIG undefined FUN_1482bfb7c(void)

void FUN_1482bfb7c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  lVar4 = *(longlong *)(lVar1 + 8) + 0xb8;
  FUN_146be983e(&local_60,lVar4,param_2,0);
  if ((((local_60 != lVar4) || (local_58 != param_2)) || ((int)local_48 != -1)) ||
     (local_48._4_4_ != -1)) {
    do {
      if (*(int *)(lVar1 + 0x1b0) != *(int *)(lVar1 + 0x1dc)) {
        lVar2 = *(longlong *)(lVar1 + 0x1e8);
        if (*(longlong *)(lVar1 + 0x1e8) == 0) {
          lVar2 = lVar1 + 0x1e0;
        }
        iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0x1f0) - 1U & local_40) * 4);
        if (iVar3 != -1) {
          do {
            lVar2 = *(longlong *)(lVar1 + 0x1a8) + (longlong)iVar3 * 0x60;
            if (*(uint *)(*(longlong *)(lVar1 + 0x1a8) + (longlong)iVar3 * 0x60) == local_40) {
              if (lVar2 != -8 && lVar2 != 0) {
                FUN_1482bb79e(param_1[1]);
              }
              break;
            }
            iVar3 = *(int *)(lVar2 + 0x58);
          } while (iVar3 != -1);
        }
      }
      if (local_50 == 0) {
        local_54 = 0xffffffff;
        local_48 = 0xffffffffffffffff;
        local_48._4_4_ = -1;
        local_48._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_60);
      }
    } while (((local_60 != lVar4) || (local_58 != param_2)) ||
            (((int)local_48 != -1 || (local_48._4_4_ != -1))));
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482bfce2 FUN_1482bfce2 body=1166 status=ok
// SIG undefined FUN_1482bfce2(void)

void FUN_1482bfce2(longlong param_1)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar11 = *(int *)(*(longlong *)(param_1 + 8) + 0x1d0) * 0x200 +
           *(int *)(*(longlong *)(param_1 + 8) + 0x1d4);
  FUN_1482c0172(param_1 + 0x220,iVar11);
  FUN_146bd223a(param_1 + 0x238);
  local_108 = (double)CONCAT44(local_108._4_4_,0xffffffff);
  FUN_1448156a8(param_1 + 600,&local_108,iVar11);
  *(undefined4 *)(param_1 + 0x250) = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_108 = -NAN;
  FUN_1482c01e2(&local_88,&local_108,iVar11);
  lVar9 = *(longlong *)(param_1 + 8);
  uVar10 = *(int *)(lVar9 + 0x1d0) * 0x200 + *(int *)(lVar9 + 0x1d4);
  uVar12 = 0;
  if ((uVar10 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x1d8) - 1U))) {
    uVar13 = 1;
    uVar7 = 1;
    if (1 < (int)uVar10) {
      uVar13 = uVar10;
    }
    do {
      uVar12 = uVar13;
      if (uVar13 == uVar7) break;
      uVar8 = uVar7 >> 9;
      uVar14 = uVar7 & 0x1ff;
      uVar12 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x1d8))[uVar8] +
                                         (ulonglong)uVar14 * 2) - 1U));
  }
  if (uVar12 != uVar10) {
    do {
      puVar1 = (undefined4 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(uVar12 >> 9) * 8)
               + (ulonglong)((uVar12 & 0x1ff) << 4));
      local_98 = *puVar1;
      uStack_94 = puVar1[1];
      uStack_90 = puVar1[2];
      uStack_8c = puVar1[3];
      FUN_1482bf920(param_1,&local_108,&local_98);
      local_160 = uStack_94;
      local_168 = local_98;
      FUN_1482c0254(param_1,&local_120,uVar12,&local_108);
      dVar4 = local_110 * local_c8 + local_120 * local_d8 + dStack_118 * dStack_d0;
      lVar6 = (longlong)(int)uVar12;
      *(float *)(local_88 + lVar6 * 8) =
           (float)(dVar4 + dVar4 +
                   (dStack_e0 * local_110 + local_f8 * local_120 + local_e8 * dStack_118) *
                   local_110 +
                   (local_f8 * local_110 + local_108 * local_120 + dStack_100 * dStack_118) *
                   local_120 +
                   (local_e8 * local_110 + dStack_100 * local_120 + dStack_f0 * dStack_118) *
                   dStack_118 + dStack_c0);
      *(uint *)(local_88 + 4 + lVar6 * 8) = uVar12;
      local_138 = local_b8;
      uStack_130 = uStack_b0;
      local_128 = local_a8;
      local_158 = local_120;
      dVar4 = local_158;
      uStack_150 = dStack_118;
      dVar5 = uStack_150;
      local_148 = local_110;
      lVar15 = *(longlong *)(param_1 + 0x220);
      lVar6 = lVar6 * 0x90;
      *(uint *)(lVar15 + lVar6) = uVar12;
      pdVar2 = (double *)(lVar15 + 8 + lVar6);
      *pdVar2 = local_108;
      pdVar2[1] = dStack_100;
      pdVar2 = (double *)(lVar15 + 0x18 + lVar6);
      *pdVar2 = local_f8;
      pdVar2[1] = dStack_f0;
      pdVar2 = (double *)(lVar15 + 0x28 + lVar6);
      *pdVar2 = local_e8;
      pdVar2[1] = dStack_e0;
      pdVar2 = (double *)(lVar15 + 0x38 + lVar6);
      *pdVar2 = local_d8;
      pdVar2[1] = dStack_d0;
      pdVar2 = (double *)(lVar15 + 0x48 + lVar6);
      *pdVar2 = local_c8;
      pdVar2[1] = dStack_c0;
      *(undefined8 *)(lVar15 + 0x68 + lVar6) = local_a8;
      puVar3 = (undefined8 *)(lVar15 + 0x58 + lVar6);
      *puVar3 = local_b8;
      puVar3[1] = uStack_b0;
      *(undefined8 *)(lVar15 + 0x70 + lVar6) = local_a0;
      local_158._0_4_ = SUB84(local_120,0);
      local_158._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
      uStack_150._0_4_ = SUB84(dStack_118,0);
      uStack_150._4_4_ = (undefined4)((ulonglong)dStack_118 >> 0x20);
      puVar1 = (undefined4 *)(lVar15 + 0x78 + lVar6);
      *puVar1 = (undefined4)local_158;
      puVar1[1] = local_158._4_4_;
      puVar1[2] = (undefined4)uStack_150;
      puVar1[3] = uStack_150._4_4_;
      *(double *)(lVar15 + 0x88 + lVar6) = local_110;
      uVar13 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar10) {
        uVar13 = uVar10;
      }
      do {
        uVar7 = uVar13;
        if (uVar13 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
        uVar7 = uVar12;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar9 + 0x1d8) +
                                             (ulonglong)(uVar12 >> 9) * 8) +
                                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      uVar12 = uVar7;
      local_158 = dVar4;
      uStack_150 = dVar5;
    } while (uVar12 != uVar10);
  }
  FUN_148301aff(local_88,uStack_80 & 0xffffffff);
  lVar9 = (longlong)(int)uStack_80;
  if (0 < lVar9) {
    lVar15 = 0;
    do {
      uVar12 = *(uint *)(local_88 + 4 + lVar15 * 8);
      if (((-1 < (int)uVar12) &&
          (lVar6 = *(longlong *)(param_1 + 8),
          (int)uVar12 < *(int *)(lVar6 + 0x1d0) * 0x200 + *(int *)(lVar6 + 0x1d4))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar6 + 0x1d8) + (ulonglong)(uVar12 >> 9) * 8) +
                             (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        FUN_146b9cbf0(param_1 + 0x230,uVar12,*(undefined4 *)(local_88 + lVar15 * 8));
      }
      lVar15 = lVar15 + 1;
    } while (lVar9 != lVar15);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482c0172 FUN_1482c0172 body=110 status=ok
// SIG undefined FUN_1482c0172(void)

void FUN_1482c0172(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483018d8(param_1,iVar1);
    }
    FUN_14830188c((longlong)iVar1 * 0x90 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14830196c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482c01e2 FUN_1482c01e2 body=113 status=ok
// SIG undefined FUN_1482c01e2(void)

void FUN_1482c01e2(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_148301a1a(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_148301a7a(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  }
  return;
}



// FUNCTION 1482c0254 FUN_1482c0254 body=2460 status=ok
// SIG undefined FUN_1482c0254(void)

double * FUN_1482c0254(longlong param_1,double *param_2,ulonglong param_3,double *param_4,
                      uint param_5,uint param_6)

{
  double *pdVar1;
  double dVar2;
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
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_178 [40];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(char *)(param_1 + 0x268) == '\x01') && (*(char *)(param_1 + 0x155) == '\x01')) {
    lVar14 = *(longlong *)(param_1 + 8);
    if (*(int *)(*(longlong *)(*(longlong *)(lVar14 + 0x1c0) + (param_3 >> 9 & 0x7fffff) * 8) + 0xc
                + (ulonglong)(((uint)param_3 & 0x1ff) << 4)) != -1) {
      if (*(char *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)param_5) == '\x01') {
        lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + (ulonglong)(param_5 >> 9) * 8);
      }
      else {
        if (*(char *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)param_6) != '\x01')
        goto LAB_1482c0373;
        lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + (ulonglong)(param_6 >> 9) * 8);
        param_5 = param_6;
      }
      param_2[2] = *(double *)(lVar14 + 0x10 + (ulonglong)(param_5 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar14 + (ulonglong)(param_5 & 0x1ff) * 0x18);
      dVar20 = *pdVar1;
      dVar18 = pdVar1[1];
      goto LAB_1482c03a6;
    }
    if (*(int *)(param_1 + 0x150) == 1) goto LAB_1482c0373;
    lVar11 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + (ulonglong)(param_5 >> 9) * 8);
    uVar17 = (ulonglong)(param_5 & 0x1ff);
    lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + (ulonglong)(param_6 >> 9) * 8);
    uVar16 = (ulonglong)(param_6 & 0x1ff);
    dVar21 = (*(double *)(lVar11 + 0x10 + uVar17 * 0x18) +
             *(double *)(lVar14 + 0x10 + uVar16 * 0x18)) * 0.5;
    dVar18 = (*(double *)(lVar11 + 8 + uVar17 * 0x18) + *(double *)(lVar14 + 8 + uVar16 * 0x18)) *
             0.5;
    dVar20 = (*(double *)(lVar11 + uVar17 * 0x18) + *(double *)(lVar14 + uVar16 * 0x18)) * 0.5;
  }
  else {
LAB_1482c0373:
    iVar10 = *(int *)(param_1 + 0x150);
    if (iVar10 != 1) {
      if (iVar10 == 2) {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        lVar11 = *(longlong *)(lVar14 + (ulonglong)(param_5 >> 9) * 8);
        lVar14 = *(longlong *)(lVar14 + (ulonglong)(param_6 >> 9) * 8);
        uVar17 = (ulonglong)(param_5 & 0x1ff);
        uVar16 = (ulonglong)(param_6 & 0x1ff);
        local_d8 = (*(double *)(lVar11 + 0x10 + uVar17 * 0x18) +
                   *(double *)(lVar14 + 0x10 + uVar16 * 0x18)) * 0.5;
        dVar18 = (*(double *)(lVar11 + 8 + uVar17 * 0x18) + *(double *)(lVar14 + 8 + uVar16 * 0x18))
                 * 0.5;
        dVar20 = (*(double *)(lVar11 + uVar17 * 0x18) + *(double *)(lVar14 + uVar16 * 0x18)) * 0.5;
        local_e8 = dVar20;
        dStack_e0 = dVar18;
        if ((*(char *)(param_1 + 0x138) == '\x02') &&
           (plVar15 = *(longlong **)(param_1 + 0xd0), plVar15 != (longlong *)0x0)) {
LAB_1482c06c2:
          (**(code **)(*plVar15 + 8))(plVar15,param_2,&local_e8,0xffffffff);
          goto LAB_1482c06f4;
        }
        param_2[2] = local_d8;
      }
      else {
        if (iVar10 != 0) {
          param_2[2] = DAT_14c8464f0;
          dVar20 = DAT_14c8464e0;
          dVar18 = DAT_14c8464e8;
LAB_1482c03a6:
          *param_2 = dVar20;
          param_2[1] = dVar18;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_178);
        }
        local_d8 = DAT_14c8464f0;
        local_e8 = DAT_14c8464e0;
        dStack_e0 = DAT_14c8464e8;
        cVar13 = FUN_1482c0bf2(param_4);
        if (cVar13 == '\0') {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
          lVar11 = *(longlong *)(lVar14 + (ulonglong)(param_5 >> 9) * 8);
          uVar16 = (ulonglong)(param_5 & 0x1ff);
          dVar20 = *(double *)(lVar11 + uVar16 * 0x18);
          dVar18 = *(double *)(lVar11 + 8 + uVar16 * 0x18);
          dVar21 = *(double *)(lVar11 + 0x10 + uVar16 * 0x18);
          lVar14 = *(longlong *)(lVar14 + (ulonglong)(param_6 >> 9) * 8);
          uVar16 = (ulonglong)(param_6 & 0x1ff);
          dVar2 = *(double *)(lVar14 + uVar16 * 0x18);
          local_150 = *(double *)(lVar14 + 8 + uVar16 * 0x18);
          local_148 = *(double *)(lVar14 + 0x10 + uVar16 * 0x18);
          local_110 = (dVar21 + local_148) * 0.5;
          dStack_118 = (dVar18 + local_150) * 0.5;
          local_120 = (dVar20 + dVar2) * 0.5;
          dVar19 = local_120;
          dVar3 = dStack_118;
          dVar4 = local_110;
          if ((*(char *)(param_1 + 0x138) == '\x02') &&
             (plVar15 = *(longlong **)(param_1 + 0xd0), dVar19 = local_120, dVar3 = dStack_118,
             dVar4 = local_110, plVar15 != (longlong *)0x0)) {
            (**(code **)(*plVar15 + 8))(plVar15,&local_108,&local_120,0xffffffff);
            dVar19 = local_108;
            dVar3 = dStack_100;
            dVar4 = local_f8;
          }
          local_f8 = dVar4;
          dStack_100 = dVar3;
          local_108 = dVar19;
          dVar19 = *param_4;
          dVar3 = param_4[1];
          dVar4 = param_4[2];
          local_128 = param_4[3];
          dVar5 = param_4[4];
          dVar6 = param_4[5];
          dVar7 = param_4[6];
          dVar8 = param_4[7];
          dVar9 = param_4[8];
          dVar22 = dVar21 * dVar9 + dVar20 * dVar7 + dVar18 * dVar8;
          dVar12 = local_148 * dVar9 + dVar2 * dVar7 + local_150 * dVar8;
          dVar9 = local_f8 * dVar9 + local_108 * dVar7 + dVar8 * dStack_100;
          dVar7 = param_4[9];
          dVar22 = dVar22 + dVar22 +
                   (dVar6 * dVar21 + dVar4 * dVar20 + dVar18 * dVar5) * dVar21 +
                   (dVar4 * dVar21 + dVar19 * dVar20 + dVar18 * dVar3) * dVar20 +
                   (dVar5 * dVar21 + dVar3 * dVar20 + dVar18 * local_128) * dVar18 + dVar7;
          dVar8 = dVar12 + dVar12 +
                  (dVar6 * local_148 + dVar4 * dVar2 + local_150 * dVar5) * local_148 +
                  (dVar4 * local_148 + dVar19 * dVar2 + local_150 * dVar3) * dVar2 +
                  (dVar5 * local_148 + dVar3 * dVar2 + local_150 * local_128) * local_150 + dVar7;
          dVar7 = dVar9 + dVar9 +
                  (dVar6 * local_f8 + dVar4 * local_108 + dVar5 * dStack_100) * local_f8 +
                  (dVar4 * local_f8 + dVar19 * local_108 + dVar3 * dStack_100) * local_108 +
                  (dVar5 * local_f8 + dVar3 * local_108 + local_128 * dStack_100) * dStack_100 +
                  dVar7;
          dVar19 = dVar22;
          if (dVar8 <= dVar22) {
            dVar19 = dVar8;
          }
          if (dVar7 <= dVar19) {
            dVar19 = dVar7;
          }
          local_140 = dVar20;
          local_138 = dVar21;
          local_130 = dVar18;
          if ((dVar19 != dVar22) || (NAN(dVar19) || NAN(dVar22))) {
            if ((dVar19 != dVar8) || (NAN(dVar19) || NAN(dVar8))) {
              param_2[2] = local_f8;
              dVar20 = local_108;
              dVar18 = dStack_100;
              goto LAB_1482c06f0;
            }
            *param_2 = dVar2;
            param_2[1] = local_150;
            dVar21 = local_148;
          }
          else {
            *param_2 = dVar20;
            param_2[1] = dVar18;
          }
          param_2[2] = dVar21;
          goto LAB_1482c06f4;
        }
        if ((*(char *)(param_1 + 0x138) == '\x02') &&
           (plVar15 = *(longlong **)(param_1 + 0xd0), plVar15 != (longlong *)0x0))
        goto LAB_1482c06c2;
        param_2[2] = local_d8;
        dVar20 = local_e8;
        dVar18 = dStack_e0;
      }
LAB_1482c06f0:
      *param_2 = dVar20;
      param_2[1] = dVar18;
      goto LAB_1482c06f4;
    }
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    lVar11 = *(longlong *)(lVar14 + (ulonglong)(param_5 >> 9) * 8);
    uVar16 = (ulonglong)(param_5 & 0x1ff);
    dVar20 = *(double *)(lVar11 + uVar16 * 0x18);
    dVar18 = *(double *)(lVar11 + 8 + uVar16 * 0x18);
    dVar21 = *(double *)(lVar11 + 0x10 + uVar16 * 0x18);
    lVar14 = *(longlong *)(lVar14 + (ulonglong)(param_6 >> 9) * 8);
    uVar16 = (ulonglong)(param_6 & 0x1ff);
    dVar2 = *(double *)(lVar14 + uVar16 * 0x18);
    dVar19 = param_4[1];
    dVar3 = param_4[2];
    dVar4 = param_4[4];
    dVar8 = dVar21 * param_4[8] + dVar20 * param_4[6] + dVar18 * param_4[7];
    dVar5 = *(double *)(lVar14 + 8 + uVar16 * 0x18);
    dVar6 = *(double *)(lVar14 + 0x10 + uVar16 * 0x18);
    dVar7 = param_4[8] * dVar6 + param_4[6] * dVar2 + param_4[7] * dVar5;
    local_150 = dVar20;
    if (dVar7 + dVar7 +
        (param_4[5] * dVar6 + dVar3 * dVar2 + dVar5 * dVar4) * dVar6 +
        (dVar3 * dVar6 + *param_4 * dVar2 + dVar5 * dVar19) * dVar2 +
        (dVar4 * dVar6 + dVar19 * dVar2 + param_4[3] * dVar5) * dVar5 + param_4[9] <=
        dVar8 + dVar8 +
        (param_4[5] * dVar21 + dVar3 * dVar20 + dVar18 * dVar4) * dVar21 +
        (dVar3 * dVar21 + *param_4 * dVar20 + dVar18 * dVar19) * dVar20 +
        (dVar4 * dVar21 + dVar19 * dVar20 + dVar18 * param_4[3]) * dVar18 + param_4[9]) {
      *param_2 = dVar2;
      param_2[1] = dVar5;
      param_2[2] = dVar6;
      goto LAB_1482c06f4;
    }
  }
  *param_2 = dVar20;
  param_2[1] = dVar18;
  param_2[2] = dVar21;
LAB_1482c06f4:
  if ((local_d0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c0bf2 FUN_1482c0bf2 body=447 status=ok
// SIG undefined FUN_1482c0bf2(void)

undefined4 FUN_1482c0bf2(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = -*(double *)(param_1 + 0x40);
  uVar6 = FUN_148301e70(local_98,0x8000000000000000,
                        *(ulonglong *)(param_1 + 0x30) ^ 0x8000000000000000,
                        *(ulonglong *)(param_1 + 0x38) ^ 0x8000000000000000);
  if ((char)uVar6 != '\0') {
    dVar4 = *(double *)(param_1 + 0x60) * 0.3333333333333333;
    dVar3 = *(double *)(param_1 + 0x58) * 0.3333333333333333;
    dVar2 = *(double *)(param_1 + 0x50) * 0.3333333333333333;
    dVar1 = *(double *)(param_1 + 0x68);
    local_98 = dVar4;
    cVar5 = FUN_148301e70(param_1,&local_88,dVar2,dVar3);
    if (cVar5 != '\0') {
      dVar1 = (dVar4 * param_2[2] + dVar2 * *param_2 + dVar3 * param_2[1] +
              dVar1 * 0.3333333333333333) / (dVar4 * local_78 + dVar2 * local_88 + dVar3 * local_80)
      ;
      if (ABS(dVar1) <= 100000.0) {
        *param_2 = *param_2 - local_88 * dVar1;
        param_2[1] = param_2[1] - local_80 * dVar1;
        param_2[2] = param_2[2] - local_78 * dVar1;
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c0db2 FUN_1482c0db2 body=8508 status=ok
// SIG undefined FUN_1482c0db2(void)

void FUN_1482c0db2(longlong param_1,int *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
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
  int iVar15;
  uint uVar16;
  int iVar17;
  double dVar18;
  bool bVar19;
  char cVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  int iVar24;
  longlong lVar25;
  longlong *plVar26;
  uint *puVar27;
  code **ppcVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  undefined8 *puVar33;
  int *piVar34;
  longlong lVar35;
  int iVar36;
  double dVar37;
  code *pcVar38;
  undefined1 auStack_4d8 [32];
  undefined8 *local_4b8;
  undefined4 local_4b0;
  longlong *local_4a0;
  double local_498;
  double local_490;
  double local_488;
  int local_47c;
  int local_478;
  int local_474;
  longlong local_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  undefined8 uStack_3c0;
  double local_3b8;
  undefined8 uStack_3b0;
  double local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_378;
  undefined8 uStack_370;
  uint *local_368;
  double local_358;
  double dStack_350;
  double local_348;
  undefined8 local_340;
  code *local_338;
  double dStack_330;
  undefined8 local_328;
  int iStack_320;
  int iStack_31c;
  undefined **local_318;
  double local_310;
  double dStack_308;
  int local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  double local_2f0;
  double local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  longlong local_2b8 [16];
  code **local_238;
  undefined8 local_230;
  undefined8 local_228;
  int iStack_220;
  undefined4 uStack_21c;
  int local_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  double local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  double local_1e0;
  double local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  longlong local_1a8 [4];
  double local_188;
  undefined8 uStack_180;
  uint *local_178;
  undefined8 local_170;
  uint local_168 [8];
  code *local_148;
  double dStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  double local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  iVar15 = *param_2;
  iVar36 = param_2[6];
  dVar37 = (double)(longlong)param_2[1];
  local_47c = param_2[7];
  local_474 = param_2[2];
  local_478 = param_2[3];
  if (*(char *)(param_1 + 0x156) != '\x01') goto LAB_1482c0fcc;
  uVar21 = param_2[8];
  uVar16 = param_2[9];
  dVar18 = *(double *)(param_2 + 10);
  local_490 = dVar37;
  local_340 = dVar18;
  if (*(char *)(param_1 + 200) == '\x01') {
    local_498 = (double)(param_1 + 0x10);
    cVar20 = FUN_1482bb52e(local_498,(ulonglong)dVar18 & 0xffffffff);
    plVar26 = (longlong *)(param_1 + 0x1a8);
    if (cVar20 == '\0') {
      iVar24 = (int)((ulonglong)dVar18 >> 0x20);
      FUN_1483011e6(plVar26,(ulonglong)dVar18 & 0xffffffff);
    }
    else {
      local_338 = (code *)&local_340;
      FUN_1483010ba(plVar26,&local_228);
      iVar24 = local_340._4_4_;
    }
    if (iVar24 != -1) {
      cVar20 = FUN_1482bb52e(local_498,iVar24);
      if (cVar20 == '\0') {
        FUN_1483011e6(plVar26,local_340._4_4_);
      }
      else {
LAB_1482c2e0e:
        local_338 = (code *)((longlong)&local_340 + 4);
        FUN_1483010ba(plVar26,&local_228);
      }
    }
LAB_1482c0f46:
    local_4a0 = (longlong *)(param_1 + 0x1a8);
    FUN_1483011e6(local_4a0,uVar21);
    uVar21 = uVar16;
    if (uVar16 != 0xffffffff) goto LAB_1482c0f65;
  }
  else {
    local_4a0 = (longlong *)(param_1 + 0x1a8);
    if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
      lVar32 = param_1 + 0x1e0;
      if (*(longlong *)(param_1 + 0x1e8) != 0) {
        lVar32 = *(longlong *)(param_1 + 0x1e8);
      }
      iVar24 = *(int *)(lVar32 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & uVar21) * 4);
      if (iVar24 != -1) {
        do {
          lVar32 = *local_4a0 + (longlong)iVar24 * 0x60;
          if (*(uint *)(*local_4a0 + (longlong)iVar24 * 0x60) == uVar21) {
            if ((lVar32 + 8U & 0xfffffffffffffff7) != 0) {
              local_338 = (code *)&local_340;
              FUN_1483010ba(local_4a0,&local_228);
            }
            break;
          }
          iVar24 = *(int *)(lVar32 + 0x58);
        } while (iVar24 != -1);
      }
    }
    if (uVar16 != 0xffffffff) {
      if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
        lVar32 = param_1 + 0x1e0;
        if (*(longlong *)(param_1 + 0x1e8) != 0) {
          lVar32 = *(longlong *)(param_1 + 0x1e8);
        }
        iVar24 = *(int *)(lVar32 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & uVar16) * 4);
        if (iVar24 != -1) {
          do {
            lVar32 = *local_4a0 + (longlong)iVar24 * 0x60;
            if (*(uint *)(*local_4a0 + (longlong)iVar24 * 0x60) == uVar16) {
              plVar26 = local_4a0;
              if ((lVar32 + 8U & 0xfffffffffffffff7) != 0) goto LAB_1482c2e0e;
              break;
            }
            iVar24 = *(int *)(lVar32 + 0x58);
          } while (iVar24 != -1);
          goto LAB_1482c0f46;
        }
      }
      FUN_1483011e6(local_4a0,uVar21);
      uVar21 = uVar16;
    }
LAB_1482c0f65:
    FUN_1483011e6(local_4a0,uVar21);
  }
  dVar18 = *(double *)(param_1 + 400);
  pcVar38 = (code *)(*(longlong *)(param_1 + 8) + 0xb8);
  FUN_146be983e(&local_228,pcVar38,iVar15,0);
  if ((((local_228 != pcVar38) || (iStack_220 != iVar15)) || ((int)uStack_210 != -1)) ||
     (dVar37 = local_490, uStack_210._4_4_ != -1)) {
    local_498 = (double)(param_1 + 0x1e0);
    do {
      if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
        dVar37 = *(double *)(param_1 + 0x1e8);
        if (*(double *)(param_1 + 0x1e8) == 0.0) {
          dVar37 = local_498;
        }
        iVar24 = *(int *)((longlong)dVar37 +
                         (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & local_208._0_4_) * 4);
        if (iVar24 != -1) {
          lVar32 = *(longlong *)(param_1 + 8);
          lVar25 = *(longlong *)
                    (*(longlong *)(lVar32 + 0x1c0) + (ulonglong)(local_208._0_4_ >> 9) * 8);
          uVar29 = (ulonglong)((local_208._0_4_ & 0x1ff) << 4);
          uVar16 = *(uint *)(lVar25 + 4 + uVar29);
          iVar17 = *(int *)(lVar25 + 0xc + uVar29);
          do {
            lVar30 = *local_4a0 + (longlong)iVar24 * 0x60;
            if (*(uint *)(*local_4a0 + (longlong)iVar24 * 0x60) == local_208._0_4_) {
              if ((undefined8 *)(lVar30 + 8) != (undefined8 *)0x0 && lVar30 != 0) {
                lVar31 = *(longlong *)
                          (*(longlong *)(lVar32 + 0x10) +
                          (ulonglong)(*(uint *)(lVar25 + uVar29) >> 9) * 8);
                uVar22 = (ulonglong)(*(uint *)(lVar25 + uVar29) & 0x1ff);
                local_178 = *(uint **)(lVar31 + 0x10 + uVar22 * 0x18);
                pdVar1 = (double *)(lVar31 + uVar22 * 0x18);
                local_188 = *pdVar1;
                uStack_180 = pdVar1[1];
                lVar31 = *(longlong *)(*(longlong *)(lVar32 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
                uVar22 = (ulonglong)(uVar16 & 0x1ff);
                local_348 = *(double *)(lVar31 + 0x10 + uVar22 * 0x18);
                pdVar1 = (double *)(lVar31 + uVar22 * 0x18);
                local_358 = *pdVar1;
                dStack_350 = pdVar1[1];
                FUN_146c13dec(lVar32,&local_378,*(undefined4 *)(lVar25 + 8 + uVar29));
                FUN_1482bb582(&local_338,&local_188,&local_358,&local_378);
                ppcVar28 = &local_338;
                puVar33 = (undefined8 *)(lVar30 + 8);
                for (lVar32 = 10; lVar32 != 0; lVar32 = lVar32 + -1) {
                  *puVar33 = *ppcVar28;
                  ppcVar28 = ppcVar28 + 1;
                  puVar33 = puVar33 + 1;
                }
                if (iVar17 != -1) {
                  FUN_146c13dec(*(undefined8 *)(param_1 + 8),&local_398,iVar17);
                  FUN_1482bb582(&local_338,&local_188,&local_358,&local_398);
                  *(double *)(lVar30 + 8) = (double)local_338 + *(double *)(lVar30 + 8);
                  *(double *)(lVar30 + 0x10) = dStack_330 + *(double *)(lVar30 + 0x10);
                  *(double *)(lVar30 + 0x18) = local_328 + *(double *)(lVar30 + 0x18);
                  *(double *)(lVar30 + 0x20) =
                       (double)CONCAT44(iStack_31c,iStack_320) + *(double *)(lVar30 + 0x20);
                  *(double *)(lVar30 + 0x28) = (double)local_318 + *(double *)(lVar30 + 0x28);
                  *(double *)(lVar30 + 0x30) = local_310 + *(double *)(lVar30 + 0x30);
                  *(double *)(lVar30 + 0x38) = dStack_308 + *(double *)(lVar30 + 0x38);
                  *(double *)(lVar30 + 0x40) =
                       (double)CONCAT44(uStack_2fc,local_300) + *(double *)(lVar30 + 0x40);
                  *(double *)(lVar30 + 0x48) =
                       (double)CONCAT44(uStack_2f4,uStack_2f8) + *(double *)(lVar30 + 0x48);
                  *(double *)(lVar30 + 0x50) = local_2f0 + *(double *)(lVar30 + 0x50);
                }
                *(double *)(lVar30 + 8) = *(double *)(lVar30 + 8) * dVar18;
                *(double *)(lVar30 + 0x10) = *(double *)(lVar30 + 0x10) * dVar18;
                *(double *)(lVar30 + 0x18) = *(double *)(lVar30 + 0x18) * dVar18;
                *(double *)(lVar30 + 0x20) = *(double *)(lVar30 + 0x20) * dVar18;
                *(double *)(lVar30 + 0x28) = *(double *)(lVar30 + 0x28) * dVar18;
                *(double *)(lVar30 + 0x30) = *(double *)(lVar30 + 0x30) * dVar18;
                *(double *)(lVar30 + 0x38) = *(double *)(lVar30 + 0x38) * dVar18;
                *(double *)(lVar30 + 0x40) = *(double *)(lVar30 + 0x40) * dVar18;
                *(double *)(lVar30 + 0x48) = *(double *)(lVar30 + 0x48) * dVar18;
                *(double *)(lVar30 + 0x50) = *(double *)(lVar30 + 0x50) * dVar18;
              }
              break;
            }
            iVar24 = *(int *)(lVar30 + 0x58);
          } while (iVar24 != -1);
        }
      }
      if (local_218 == 0) {
        uStack_21c = 0xffffffff;
        uStack_210 = -NAN;
        uStack_210._4_4_ = -1;
        uStack_210._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_228);
      }
    } while (((local_228 != pcVar38) || (iStack_220 != iVar15)) ||
            (((int)uStack_210 != -1 || (dVar37 = local_490, uStack_210._4_4_ != -1))));
  }
LAB_1482c0fcc:
  if (*(char *)(param_1 + 0x154) == '\x01') {
    lVar32 = *(longlong *)(param_1 + 0x198);
    lVar30 = (longlong)dVar37 * 0x70;
    lVar25 = (longlong)iVar15 * 0x70;
    dVar37 = *(double *)(lVar32 + 8 + lVar30);
    dVar18 = *(double *)(lVar32 + 0x10 + lVar30);
    dVar3 = *(double *)(lVar32 + 0x18 + lVar30);
    dVar4 = *(double *)(lVar32 + 0x20 + lVar30);
    dVar5 = *(double *)(lVar32 + 0x28 + lVar30);
    dVar6 = *(double *)(lVar32 + 0x30 + lVar30);
    dVar7 = *(double *)(lVar32 + 0x38 + lVar30);
    dVar8 = *(double *)(lVar32 + 0x40 + lVar30);
    dVar9 = *(double *)(lVar32 + 0x48 + lVar30);
    dVar10 = *(double *)(lVar32 + 0x50 + lVar30);
    dVar11 = *(double *)(lVar32 + 0x58 + lVar30);
    dVar12 = *(double *)(lVar32 + 0x60 + lVar30);
    dVar13 = *(double *)(lVar32 + 0x68 + lVar30);
    *(double *)(lVar32 + lVar25) = *(double *)(lVar32 + lVar25) + *(double *)(lVar32 + lVar30);
    *(double *)(lVar32 + 8 + lVar25) = *(double *)(lVar32 + 8 + lVar25) + dVar37;
    *(double *)(lVar32 + 0x10 + lVar25) = *(double *)(lVar32 + 0x10 + lVar25) + dVar18;
    *(double *)(lVar32 + 0x18 + lVar25) = *(double *)(lVar32 + 0x18 + lVar25) + dVar3;
    *(double *)(lVar32 + 0x20 + lVar25) = *(double *)(lVar32 + 0x20 + lVar25) + dVar4;
    *(double *)(lVar32 + 0x28 + lVar25) = *(double *)(lVar32 + 0x28 + lVar25) + dVar5;
    *(double *)(lVar32 + 0x30 + lVar25) = *(double *)(lVar32 + 0x30 + lVar25) + dVar6;
    *(double *)(lVar32 + 0x38 + lVar25) = *(double *)(lVar32 + 0x38 + lVar25) + dVar7;
    *(double *)(lVar32 + 0x40 + lVar25) = *(double *)(lVar32 + 0x40 + lVar25) + dVar8;
    *(double *)(lVar32 + 0x48 + lVar25) = *(double *)(lVar32 + 0x48 + lVar25) + dVar9;
    *(double *)(lVar32 + 0x50 + lVar25) = *(double *)(lVar32 + 0x50 + lVar25) + dVar10;
    *(double *)(lVar32 + 0x58 + lVar25) = *(double *)(lVar32 + 0x58 + lVar25) + dVar11;
    *(double *)(lVar32 + 0x60 + lVar25) = *(double *)(lVar32 + 0x60 + lVar25) + dVar12;
    *(double *)(lVar32 + 0x68 + lVar25) = *(double *)(lVar32 + 0x68 + lVar25) + dVar13;
  }
  else {
    local_310 = *(double *)(param_1 + 8);
    local_328 = 0.0;
    local_318 = &PTR_LAB_149f3aae0;
    dStack_308 = (double)CONCAT44(dStack_308._4_4_,iVar15);
    local_338 = FUN_146be9588;
    local_228 = (code *)((longlong)local_310 + 0xb8);
    local_470 = (longlong)iVar15;
    iStack_220 = iVar15;
    FUN_146be94ac(&local_188,&local_228,&local_338);
    local_2e8 = -NAN;
    local_2d8 = 0.0;
    local_2c8 = (longlong *)0x0;
    local_338 = local_148;
    dStack_330 = dStack_140;
    iStack_320 = iStack_130;
    iStack_31c = iStack_12c;
    local_318 = (undefined **)local_128;
    dStack_308 = (double)CONCAT44(uStack_114,iStack_118);
    local_300 = local_110;
    uStack_2fc = uStack_10c;
    uStack_2f8 = uStack_108;
    uStack_2f4 = uStack_104;
    local_2f0 = local_100;
    FUN_146be971a(&local_2d8,&local_188);
    uStack_2dc = 0;
    FUN_146bfd1f0(&local_338);
    local_1d8 = -NAN;
    local_1c8 = 0.0;
    local_1b8 = (longlong *)0x0;
    local_228 = (code *)CONCAT44(uStack_11c,local_120);
    iStack_220 = iStack_118;
    uStack_21c = uStack_114;
    local_218 = local_110;
    uStack_214 = uStack_10c;
    uStack_210 = (double)CONCAT44(uStack_104,uStack_108);
    local_208 = local_100;
    local_200 = local_120;
    uStack_1fc = uStack_11c;
    iStack_1f8 = iStack_118;
    uStack_1f4 = uStack_114;
    local_1f0 = local_110;
    uStack_1ec = uStack_10c;
    uStack_1e8 = uStack_108;
    uStack_1e4 = uStack_104;
    local_1e0 = local_100;
    FUN_146be971a(&local_1c8);
    uStack_1cc = 0;
    FUN_146bfd1f0(&local_228);
    while (((uVar16 = uStack_2e0, local_338 != local_228 || (dStack_330._0_4_ != iStack_220)) ||
           ((iStack_320 != (int)uStack_210 || (iStack_31c != uStack_210._4_4_))))) {
      lVar30 = (longlong)(int)uStack_2e0;
      local_3c8 = *(double *)(*(longlong *)(param_1 + 0x1f8) + lVar30 * 8);
      uStack_3c0 = 0;
      lVar32 = *(longlong *)(param_1 + 0x208);
      lVar25 = lVar30 * 0x70;
      local_498 = *(double *)(lVar32 + lVar25);
      local_4a0 = *(longlong **)(lVar32 + 8 + lVar25);
      local_490 = *(double *)(lVar32 + 0x10 + lVar25);
      local_440 = *(double *)(lVar32 + 0x18 + lVar25);
      local_448 = *(double *)(lVar32 + 0x20 + lVar25);
      local_438 = *(double *)(lVar32 + 0x28 + lVar25);
      local_430 = *(double *)(lVar32 + 0x30 + lVar25);
      local_428 = *(double *)(lVar32 + 0x38 + lVar25);
      local_420 = *(double *)(lVar32 + 0x40 + lVar25);
      local_418 = *(double *)(lVar32 + 0x48 + lVar25);
      local_410 = *(double *)(lVar32 + 0x68 + lVar25);
      local_488 = *(double *)(lVar32 + 0x50 + lVar25) * local_3c8;
      local_3d0 = *(double *)(lVar32 + 0x58 + lVar25) * local_3c8;
      local_3d8 = *(double *)(lVar32 + 0x60 + lVar25) * local_3c8;
      local_4b8 = &local_378;
      FUN_146c1477c(*(undefined8 *)(param_1 + 8),uStack_2e0,&local_358,&local_340);
      local_3e0 = local_358 * local_358;
      local_3e8 = local_358 * dStack_350;
      local_458 = local_358;
      local_3f0 = local_358 * local_348;
      local_3f8 = dStack_350 * dStack_350;
      local_450 = dStack_350;
      local_400 = dStack_350 * local_348;
      local_3a8 = local_3f0 * (double)local_368 + local_3e0 * local_378 + local_3e8 * uStack_370;
      local_3b8 = local_400 * (double)local_368 + local_3e8 * local_378 + local_3f8 * uStack_370;
      local_460 = local_348;
      local_408 = local_348 * local_348;
      dVar37 = local_408 * (double)local_368 + local_3f0 * local_378 + local_400 * uStack_370;
      local_468 = (double)local_368 * dVar37 + local_378 * local_3a8 + uStack_370 * local_3b8;
      local_3b8 = -local_3b8;
      local_3a8 = -local_3a8;
      *(double *)(*(longlong *)(param_1 + 0x1f8) + lVar30 * 8) = local_340;
      lVar32 = *(longlong *)(param_1 + 0x208);
      *(double *)(lVar32 + lVar25) = local_3e0;
      *(double *)(lVar32 + 8 + lVar25) = local_3e8;
      *(double *)(lVar32 + 0x10 + lVar25) = local_3f0;
      *(double *)(lVar32 + 0x18 + lVar25) = local_3f8;
      *(double *)(lVar32 + 0x20 + lVar25) = local_400;
      *(double *)(lVar32 + 0x28 + lVar25) = local_408;
      uStack_3a0 = 0x8000000000000000;
      uStack_3b0 = 0x8000000000000000;
      pdVar1 = (double *)(lVar32 + 0x30 + lVar25);
      *pdVar1 = local_3a8;
      pdVar1[1] = local_3b8;
      dVar3 = -local_3c8;
      local_498 = local_498 * dVar3;
      local_4a0 = (longlong *)((double)local_4a0 * dVar3);
      local_490 = local_490 * dVar3;
      dVar37 = -dVar37;
      dVar18 = -(local_358 * local_378 + dStack_350 * uStack_370 + local_348 * (double)local_368);
      *(double *)(lVar32 + 0x40 + lVar25) = dVar37;
      *(double *)(lVar32 + 0x48 + lVar25) = local_468;
      *(double *)(lVar32 + 0x50 + lVar25) = local_358;
      *(double *)(lVar32 + 0x58 + lVar25) = dStack_350;
      *(double *)(lVar32 + 0x60 + lVar25) = local_348;
      *(double *)(lVar32 + 0x68 + lVar25) = dVar18;
      lVar32 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar16 >> 9) * 8);
      uVar29 = (ulonglong)(uVar16 & 0x1ff);
      uStack_390 = *(undefined4 *)(lVar32 + 8 + uVar29 * 0xc);
      local_398 = *(undefined8 *)(lVar32 + uVar29 * 0xc);
      lVar32 = 0;
      do {
        iVar24 = *(int *)((longlong)&local_398 + lVar32 * 4);
        if (iVar24 != iVar15) {
          lVar25 = *(longlong *)(param_1 + 0x198);
          lVar30 = (longlong)iVar24 * 0x70;
          *(double *)(lVar25 + lVar30) = *(double *)(lVar25 + lVar30) + local_498;
          *(double *)(lVar25 + 8 + lVar30) = *(double *)(lVar25 + 8 + lVar30) + (double)local_4a0;
          *(double *)(lVar25 + 0x10 + lVar30) = *(double *)(lVar25 + 0x10 + lVar30) + local_490;
          *(double *)(lVar25 + 0x18 + lVar30) =
               *(double *)(lVar25 + 0x18 + lVar30) + local_440 * dVar3;
          *(double *)(lVar25 + 0x20 + lVar30) =
               *(double *)(lVar25 + 0x20 + lVar30) + local_448 * dVar3;
          *(double *)(lVar25 + 0x28 + lVar30) =
               *(double *)(lVar25 + 0x28 + lVar30) + local_438 * dVar3;
          *(double *)(lVar25 + 0x30 + lVar30) =
               *(double *)(lVar25 + 0x30 + lVar30) + local_430 * dVar3;
          *(double *)(lVar25 + 0x38 + lVar30) =
               *(double *)(lVar25 + 0x38 + lVar30) + local_428 * dVar3;
          *(double *)(lVar25 + 0x40 + lVar30) =
               *(double *)(lVar25 + 0x40 + lVar30) + local_420 * dVar3;
          *(double *)(lVar25 + 0x48 + lVar30) =
               *(double *)(lVar25 + 0x48 + lVar30) + local_418 * dVar3;
          *(double *)(lVar25 + 0x50 + lVar30) = *(double *)(lVar25 + 0x50 + lVar30) - local_488;
          *(double *)(lVar25 + 0x58 + lVar30) = *(double *)(lVar25 + 0x58 + lVar30) - local_3d0;
          *(double *)(lVar25 + 0x60 + lVar30) = *(double *)(lVar25 + 0x60 + lVar30) - local_3d8;
          *(double *)(lVar25 + 0x68 + lVar30) =
               *(double *)(lVar25 + 0x68 + lVar30) + local_410 * dVar3;
          lVar25 = *(longlong *)(param_1 + 0x198);
          *(double *)(lVar25 + lVar30) = local_340 * local_3e0 + *(double *)(lVar25 + lVar30);
          *(double *)(lVar25 + 8 + lVar30) =
               local_340 * local_3e8 + *(double *)(lVar25 + 8 + lVar30);
          *(double *)(lVar25 + 0x10 + lVar30) =
               local_340 * local_3f0 + *(double *)(lVar25 + 0x10 + lVar30);
          *(double *)(lVar25 + 0x18 + lVar30) =
               local_340 * local_3f8 + *(double *)(lVar25 + 0x18 + lVar30);
          *(double *)(lVar25 + 0x20 + lVar30) =
               local_340 * local_400 + *(double *)(lVar25 + 0x20 + lVar30);
          *(double *)(lVar25 + 0x28 + lVar30) =
               local_340 * local_408 + *(double *)(lVar25 + 0x28 + lVar30);
          *(double *)(lVar25 + 0x30 + lVar30) =
               local_340 * local_3a8 + *(double *)(lVar25 + 0x30 + lVar30);
          *(double *)(lVar25 + 0x38 + lVar30) =
               local_340 * local_3b8 + *(double *)(lVar25 + 0x38 + lVar30);
          *(double *)(lVar25 + 0x40 + lVar30) =
               local_340 * dVar37 + *(double *)(lVar25 + 0x40 + lVar30);
          *(double *)(lVar25 + 0x48 + lVar30) =
               local_340 * local_468 + *(double *)(lVar25 + 0x48 + lVar30);
          *(double *)(lVar25 + 0x50 + lVar30) =
               local_358 * local_340 + *(double *)(lVar25 + 0x50 + lVar30);
          *(double *)(lVar25 + 0x58 + lVar30) =
               dStack_350 * local_340 + *(double *)(lVar25 + 0x58 + lVar30);
          *(double *)(lVar25 + 0x60 + lVar30) =
               local_348 * local_340 + *(double *)(lVar25 + 0x60 + lVar30);
          *(double *)(lVar25 + 0x68 + lVar30) =
               local_340 * dVar18 + *(double *)(lVar25 + 0x68 + lVar30);
        }
        lVar32 = lVar32 + 1;
      } while (lVar32 != 3);
      FUN_146bfd1f0(&local_338);
    }
    if (local_1c8 != 0.0) {
      plVar26 = local_1b8;
      if (local_1b8 == (longlong *)0x0) {
        plVar26 = local_1a8;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    iVar24 = local_47c;
    if (local_2d8 != 0.0) {
      plVar26 = local_2c8;
      if (local_2c8 == (longlong *)0x0) {
        plVar26 = local_2b8;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    if (local_188 != 0.0) {
      puVar27 = local_178;
      if (local_178 == (uint *)0x0) {
        puVar27 = local_168;
      }
      (**(code **)(*(longlong *)puVar27 + 0x10))();
    }
    piVar34 = &local_474;
    bVar19 = true;
    do {
      bVar23 = bVar19;
      if (iVar36 != -1) {
        lVar32 = *(longlong *)(param_1 + 0x198);
        lVar30 = (longlong)iVar36;
        dVar37 = *(double *)(*(longlong *)(param_1 + 0x1f8) + lVar30 * 8);
        lVar25 = *(longlong *)(param_1 + 0x208);
        lVar31 = lVar30 * 0x70;
        lVar35 = (longlong)*piVar34 * 0x70;
        dVar18 = *(double *)(lVar25 + 8 + lVar31);
        dVar3 = *(double *)(lVar25 + 0x10 + lVar31);
        dVar4 = *(double *)(lVar25 + 0x18 + lVar31);
        dVar5 = *(double *)(lVar25 + 0x20 + lVar31);
        dVar6 = *(double *)(lVar25 + 0x28 + lVar31);
        dVar7 = *(double *)(lVar25 + 0x30 + lVar31);
        dVar8 = *(double *)(lVar25 + 0x38 + lVar31);
        dVar9 = *(double *)(lVar25 + 0x40 + lVar31);
        dVar10 = *(double *)(lVar25 + 0x48 + lVar31);
        dVar11 = *(double *)(lVar25 + 0x50 + lVar31);
        dVar12 = *(double *)(lVar25 + 0x58 + lVar31);
        dVar13 = *(double *)(lVar25 + 0x60 + lVar31);
        dVar14 = *(double *)(lVar25 + 0x68 + lVar31);
        *(double *)(lVar32 + lVar35) =
             *(double *)(lVar32 + lVar35) - *(double *)(lVar25 + lVar31) * dVar37;
        *(double *)(lVar32 + 8 + lVar35) = *(double *)(lVar32 + 8 + lVar35) - dVar18 * dVar37;
        *(double *)(lVar32 + 0x10 + lVar35) = *(double *)(lVar32 + 0x10 + lVar35) - dVar3 * dVar37;
        *(double *)(lVar32 + 0x18 + lVar35) = *(double *)(lVar32 + 0x18 + lVar35) - dVar4 * dVar37;
        *(double *)(lVar32 + 0x20 + lVar35) = *(double *)(lVar32 + 0x20 + lVar35) - dVar5 * dVar37;
        *(double *)(lVar32 + 0x28 + lVar35) = *(double *)(lVar32 + 0x28 + lVar35) - dVar6 * dVar37;
        *(double *)(lVar32 + 0x30 + lVar35) = *(double *)(lVar32 + 0x30 + lVar35) - dVar7 * dVar37;
        *(double *)(lVar32 + 0x38 + lVar35) = *(double *)(lVar32 + 0x38 + lVar35) - dVar8 * dVar37;
        *(double *)(lVar32 + 0x40 + lVar35) = *(double *)(lVar32 + 0x40 + lVar35) - dVar9 * dVar37;
        *(double *)(lVar32 + 0x48 + lVar35) = *(double *)(lVar32 + 0x48 + lVar35) - dVar10 * dVar37;
        *(double *)(lVar32 + 0x50 + lVar35) = *(double *)(lVar32 + 0x50 + lVar35) - dVar11 * dVar37;
        *(double *)(lVar32 + 0x58 + lVar35) = *(double *)(lVar32 + 0x58 + lVar35) - dVar12 * dVar37;
        *(double *)(lVar32 + 0x60 + lVar35) = *(double *)(lVar32 + 0x60 + lVar35) - dVar13 * dVar37;
        *(double *)(lVar32 + 0x68 + lVar35) = *(double *)(lVar32 + 0x68 + lVar35) - dVar37 * dVar14;
        lVar32 = *(longlong *)(param_1 + 0x208);
        puVar33 = (undefined8 *)(lVar32 + 0x40 + lVar31);
        *puVar33 = 0;
        puVar33[1] = 0;
        puVar33 = (undefined8 *)(lVar32 + 0x30 + lVar31);
        *puVar33 = 0;
        puVar33[1] = 0;
        puVar33 = (undefined8 *)(lVar32 + 0x20 + lVar31);
        *puVar33 = 0;
        puVar33[1] = 0;
        puVar33 = (undefined8 *)(lVar32 + 0x10 + lVar31);
        *puVar33 = 0;
        puVar33[1] = 0;
        *(undefined8 *)(lVar32 + lVar31) = 0;
        ((undefined8 *)(lVar32 + lVar31))[1] = 0;
        plVar26 = DAT_14c8464e8;
        dVar37 = DAT_14c8464e0;
        *(double *)(lVar32 + 0x60 + lVar31) = DAT_14c8464f0;
        pdVar1 = (double *)(lVar32 + 0x50 + lVar31);
        *pdVar1 = dVar37;
        pdVar1[1] = (double)plVar26;
        *(undefined8 *)(lVar32 + 0x68 + lVar31) = 0;
        *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + lVar30 * 8) = 0;
      }
      piVar34 = &local_478;
      iVar36 = iVar24;
      bVar19 = false;
    } while (bVar23);
    local_498 = DAT_14c8464e0;
    local_4a0 = DAT_14c8464e8;
    local_490 = DAT_14c8464f0;
    local_310 = *(double *)(param_1 + 8);
    local_328 = 0.0;
    local_318 = &PTR_LAB_149f3aae0;
    dStack_308 = (double)CONCAT44(dStack_308._4_4_,iVar15);
    local_338 = FUN_146be9588;
    local_228 = (code *)((longlong)local_310 + 0xb8);
    iStack_220 = iVar15;
    FUN_146be94ac(&local_188,&local_228,&local_338);
    local_2e8 = -NAN;
    local_2d8 = 0.0;
    local_2c8 = (longlong *)0x0;
    local_338 = local_148;
    dStack_330 = dStack_140;
    local_328 = (double)CONCAT44(uStack_134,local_138);
    iStack_320 = iStack_130;
    iStack_31c = iStack_12c;
    local_318 = (undefined **)local_128;
    local_310 = (double)CONCAT44(uStack_11c,local_120);
    dStack_308 = (double)CONCAT44(uStack_114,iStack_118);
    local_300 = local_110;
    uStack_2fc = uStack_10c;
    uStack_2f8 = uStack_108;
    uStack_2f4 = uStack_104;
    local_2f0 = local_100;
    FUN_146be971a(&local_2d8,&local_188);
    uStack_2dc = 0;
    FUN_146bfd1f0(&local_338);
    local_1d8 = -NAN;
    local_1c8 = 0.0;
    local_1b8 = (longlong *)0x0;
    local_228 = (code *)CONCAT44(uStack_11c,local_120);
    iStack_220 = iStack_118;
    uStack_21c = uStack_114;
    local_218 = local_110;
    uStack_214 = uStack_10c;
    uStack_210 = (double)CONCAT44(uStack_104,uStack_108);
    local_208 = local_100;
    local_200 = local_120;
    uStack_1fc = uStack_11c;
    iStack_1f8 = iStack_118;
    uStack_1f4 = uStack_114;
    local_1f0 = local_110;
    uStack_1ec = uStack_10c;
    uStack_1e8 = uStack_108;
    uStack_1e4 = uStack_104;
    local_1e0 = local_100;
    FUN_146be971a(&local_1c8,&local_188);
    uStack_1cc = 0;
    FUN_146bfd1f0(&local_228);
    local_488 = 0.0;
    dVar5 = 0.0;
    dVar6 = 0.0;
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar37 = 0.0;
    dVar18 = 0.0;
    dVar3 = 0.0;
    dVar4 = 0.0;
    while ((((local_338 != local_228 || (dStack_330._0_4_ != iStack_220)) ||
            (iStack_320 != (int)uStack_210)) || (iStack_31c != uStack_210._4_4_))) {
      lVar32 = *(longlong *)(param_1 + 0x208);
      lVar25 = (longlong)(int)uStack_2e0 * 0x70;
      dVar11 = *(double *)(*(longlong *)(param_1 + 0x1f8) + (longlong)(int)uStack_2e0 * 8);
      local_488 = local_488 + *(double *)(lVar32 + lVar25) * dVar11;
      dVar5 = dVar5 + *(double *)(lVar32 + 8 + lVar25) * dVar11;
      dVar6 = dVar6 + *(double *)(lVar32 + 0x10 + lVar25) * dVar11;
      dVar7 = dVar7 + *(double *)(lVar32 + 0x18 + lVar25) * dVar11;
      dVar8 = dVar8 + *(double *)(lVar32 + 0x20 + lVar25) * dVar11;
      dVar9 = dVar9 + *(double *)(lVar32 + 0x28 + lVar25) * dVar11;
      dVar10 = dVar10 + *(double *)(lVar32 + 0x30 + lVar25) * dVar11;
      dVar37 = dVar37 + *(double *)(lVar32 + 0x38 + lVar25) * dVar11;
      dVar18 = dVar18 + *(double *)(lVar32 + 0x40 + lVar25) * dVar11;
      dVar3 = dVar3 + *(double *)(lVar32 + 0x48 + lVar25) * dVar11;
      local_498 = local_498 + *(double *)(lVar32 + 0x50 + lVar25) * dVar11;
      local_4a0 = (longlong *)((double)local_4a0 + *(double *)(lVar32 + 0x58 + lVar25) * dVar11);
      local_490 = local_490 + *(double *)(lVar32 + 0x60 + lVar25) * dVar11;
      dVar4 = dVar4 + dVar11 * *(double *)(lVar32 + 0x68 + lVar25);
      FUN_146bfd1f0(&local_338);
    }
    if (local_1c8 != 0.0) {
      plVar26 = local_1b8;
      if (local_1b8 == (longlong *)0x0) {
        plVar26 = local_1a8;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    if (local_2d8 != 0.0) {
      plVar26 = local_2c8;
      if (local_2c8 == (longlong *)0x0) {
        plVar26 = local_2b8;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    if (local_188 != 0.0) {
      puVar27 = local_178;
      if (local_178 == (uint *)0x0) {
        puVar27 = local_168;
      }
      (**(code **)(*(longlong *)puVar27 + 0x10))();
    }
    lVar32 = *(longlong *)(param_1 + 0x198);
    lVar25 = local_470 * 0x70;
    *(double *)(lVar32 + lVar25) = local_488;
    *(double *)(lVar32 + 8 + lVar25) = dVar5;
    *(double *)(lVar32 + 0x10 + lVar25) = dVar6;
    *(double *)(lVar32 + 0x18 + lVar25) = dVar7;
    *(double *)(lVar32 + 0x20 + lVar25) = dVar8;
    *(double *)(lVar32 + 0x28 + lVar25) = dVar9;
    *(double *)(lVar32 + 0x30 + lVar25) = dVar10;
    *(double *)(lVar32 + 0x38 + lVar25) = dVar37;
    *(double *)(lVar32 + 0x40 + lVar25) = dVar18;
    *(double *)(lVar32 + 0x48 + lVar25) = dVar3;
    *(double *)(lVar32 + 0x50 + lVar25) = local_498;
    *(longlong **)(lVar32 + 0x58 + lVar25) = local_4a0;
    *(double *)(lVar32 + 0x60 + lVar25) = local_490;
    *(double *)(lVar32 + 0x68 + lVar25) = dVar4;
  }
  if (*(char *)(param_1 + 0x154) == '\x01') {
    pcVar38 = (code *)(*(longlong *)(param_1 + 8) + 0xb8);
    FUN_146be983e(&local_228,pcVar38,iVar15,0);
    if (((local_228 != pcVar38) || (iStack_220 != iVar15)) ||
       (((int)uStack_210 != -1 || (uStack_210._4_4_ != -1)))) {
      do {
        dVar4 = local_208;
        uVar16 = local_208._0_4_;
        puVar33 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                    (ulonglong)(local_208._0_4_ >> 9) * 8) +
                  (ulonglong)((local_208._0_4_ & 0x1ff) << 4));
        local_398 = *puVar33;
        uStack_390 = *(undefined4 *)(puVar33 + 1);
        uStack_38c = *(undefined4 *)((longlong)puVar33 + 0xc);
        FUN_1482bf920(param_1,&local_338,&local_398);
        local_4b0 = local_398._4_4_;
        local_4b8 = (undefined8 *)CONCAT44(local_4b8._4_4_,(undefined4)local_398);
        FUN_1482c0254(param_1,&local_188,(ulonglong)dVar4 & 0xffffffff,&local_338);
        local_348 = local_2d8;
        dStack_350 = (double)CONCAT44(uStack_2dc,uStack_2e0);
        local_358 = local_2e8;
        local_378 = local_188;
        dVar18 = local_378;
        uStack_370 = uStack_180;
        dVar3 = uStack_370;
        local_368 = local_178;
        lVar32 = *(longlong *)(param_1 + 0x220);
        lVar25 = (longlong)(int)uVar16 * 0x90;
        *(uint *)(lVar32 + lVar25) = uVar16;
        *(code **)(lVar32 + 8 + lVar25) = local_338;
        *(double *)(lVar32 + 0x10 + lVar25) = dStack_330;
        *(double *)(lVar32 + 0x18 + lVar25) = local_328;
        *(ulonglong *)(lVar32 + 0x20 + lVar25) = CONCAT44(iStack_31c,iStack_320);
        *(undefined ***)(lVar32 + 0x28 + lVar25) = local_318;
        *(double *)(lVar32 + 0x30 + lVar25) = local_310;
        dVar37 = (double)local_178 * (double)CONCAT44(uStack_2f4,uStack_2f8) +
                 local_188 * dStack_308 + uStack_180 * (double)CONCAT44(uStack_2fc,local_300);
        *(double *)(lVar32 + 0x38 + lVar25) = dStack_308;
        *(ulonglong *)(lVar32 + 0x40 + lVar25) = CONCAT44(uStack_2fc,local_300);
        *(ulonglong *)(lVar32 + 0x48 + lVar25) = CONCAT44(uStack_2f4,uStack_2f8);
        *(double *)(lVar32 + 0x50 + lVar25) = local_2f0;
        *(double *)(lVar32 + 0x68 + lVar25) = local_2d8;
        pdVar1 = (double *)(lVar32 + 0x58 + lVar25);
        *pdVar1 = local_2e8;
        pdVar1[1] = dStack_350;
        *(undefined8 *)(lVar32 + 0x70 + lVar25) = local_2d0;
        *(uint **)(lVar32 + 0x88 + lVar25) = local_178;
        local_378._0_4_ = SUB84(local_188,0);
        local_378._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
        uStack_370._0_4_ = SUB84(uStack_180,0);
        uStack_370._4_4_ = (undefined4)((ulonglong)uStack_180 >> 0x20);
        puVar2 = (undefined4 *)(lVar32 + 0x78 + lVar25);
        *puVar2 = (undefined4)local_378;
        puVar2[1] = local_378._4_4_;
        puVar2[2] = (undefined4)uStack_370;
        puVar2[3] = uStack_370._4_4_;
        local_378 = dVar18;
        uStack_370 = dVar3;
        if (((*(int *)(param_1 + 0x260) + 1 < (int)uVar16) ||
            (uVar16 = *(uint *)(*(longlong *)(param_1 + 600) + (longlong)(int)uVar16 * 4),
            (int)uVar16 < 1)) || (*(int *)(param_1 + 0x250) < (int)uVar16)) {
LAB_1482c238c:
          FUN_146b9cbf0(param_1 + 0x230,(ulonglong)dVar4 & 0xffffffff);
        }
        else {
          lVar32 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (ulonglong)(uVar16 >> 9) * 8);
          if (*(int *)(lVar32 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc) < 1) goto LAB_1482c238c;
          *(float *)(lVar32 + 4 + (ulonglong)(uVar16 & 0x1ff) * 0xc) =
               (float)(dVar37 + dVar37 +
                       (local_310 * (double)local_178 +
                       local_328 * local_188 + uStack_180 * (double)local_318) * (double)local_178 +
                       (local_328 * (double)local_178 +
                       (double)local_338 * local_188 + dStack_330 * uStack_180) * local_188 +
                       ((double)local_318 * (double)local_178 +
                       dStack_330 * local_188 + uStack_180 * (double)CONCAT44(iStack_31c,iStack_320)
                       ) * uStack_180 + local_2f0);
          FUN_146bd2818(param_1 + 0x230);
        }
        if (local_218 == 0) {
          uStack_21c = 0xffffffff;
          uStack_210 = -NAN;
          uStack_210._4_4_ = -1;
          uStack_210._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_228);
        }
      } while ((((local_228 != pcVar38) || (iStack_220 != iVar15)) || ((int)uStack_210 != -1)) ||
              (uStack_210._4_4_ != -1));
    }
  }
  else {
    local_238 = (code **)0x0;
    local_230 = 0x4000000000;
    pcVar38 = (code *)(*(longlong *)(param_1 + 8) + 0xb8);
    FUN_146be983e(&local_228,pcVar38,iVar15,0);
    if (local_228 != pcVar38) goto LAB_1482c258f;
    if (iStack_220 != iVar15) goto LAB_1482c258f;
    if ((int)uStack_210 != -1) goto LAB_1482c258f;
    iVar36 = uStack_210._4_4_;
    while (iVar36 != -1) {
LAB_1482c258f:
      do {
        uVar29 = local_230;
        uVar16 = local_208._0_4_;
        lVar32 = (longlong)(int)local_230;
        uVar21 = (int)local_230 + 1;
        local_230 = CONCAT44(local_230._4_4_,uVar21);
        if (local_230._4_4_ < uVar21) {
          FUN_147c81098(&local_338,uVar29 & 0xffffffff);
        }
        ppcVar28 = local_238;
        if (local_238 == (code **)0x0) {
          ppcVar28 = &local_338;
        }
        *(uint *)((longlong)ppcVar28 + lVar32 * 4) = uVar16;
        lVar32 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(uVar16 >> 9) * 8)
        ;
        uVar29 = (ulonglong)((uVar16 & 0x1ff) << 4);
        iVar36 = *(int *)(lVar32 + uVar29);
        if (iVar36 == iVar15) {
          iVar36 = *(int *)(lVar32 + 4 + uVar29);
        }
        if (iVar36 != -1) {
          dVar37 = (double)(*(longlong *)(param_1 + 8) + 0xb8);
          FUN_146be983e(&local_188,dVar37,iVar36,0);
          if (local_188 != dVar37) goto LAB_1482c2531;
          if ((int)uStack_180 != iVar36) goto LAB_1482c2531;
          if ((int)local_170 != -1) goto LAB_1482c2531;
          iVar24 = local_170._4_4_;
          while (iVar24 != -1) {
LAB_1482c2531:
            do {
              local_358 = (double)CONCAT44(local_358._4_4_,local_168[0]);
              if (local_168[0] != uVar16) {
                FUN_14830129c(&local_338,&local_358);
              }
              if ((int)local_178 == 0) {
                uStack_180 = (double)CONCAT44(0xffffffff,(int)uStack_180);
                local_170 = 0xffffffffffffffff;
                local_170._4_4_ = -1;
                local_170._0_4_ = -1;
              }
              else {
                FUN_146be9922(&local_188);
              }
            } while (((local_188 != dVar37) || ((int)uStack_180 != iVar36)) ||
                    (iVar24 = local_170._4_4_, (int)local_170 != -1));
          }
        }
        if (local_218 == 0) {
          uStack_21c = 0xffffffff;
          uStack_210 = -NAN;
          uStack_210._4_4_ = -1;
          uStack_210._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_228);
        }
      } while (((local_228 != pcVar38) || (iStack_220 != iVar15)) ||
              (iVar36 = uStack_210._4_4_, (int)uStack_210 != -1));
    }
    ppcVar28 = local_238;
    if (local_238 == (code **)0x0) {
      ppcVar28 = &local_338;
    }
    lVar32 = (longlong)(int)local_230;
    if (lVar32 != 0) {
      lVar25 = 0;
      do {
        uVar16 = *(uint *)((longlong)ppcVar28 + lVar25);
        puVar33 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                    (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)((uVar16 & 0x1ff) << 4));
        local_398 = *puVar33;
        uStack_390 = *(undefined4 *)(puVar33 + 1);
        uStack_38c = *(undefined4 *)((longlong)puVar33 + 0xc);
        FUN_1482bf920(param_1,&local_228,&local_398);
        local_4b0 = local_398._4_4_;
        local_4b8 = (undefined8 *)CONCAT44(local_4b8._4_4_,(undefined4)local_398);
        FUN_1482c0254(param_1,&local_188,uVar16,&local_228);
        dVar18 = (double)CONCAT44(uStack_21c,iStack_220);
        dVar3 = (double)CONCAT44(uStack_214,local_218);
        local_348 = local_1c8;
        dStack_350 = (double)CONCAT44(uStack_1cc,uStack_1d0);
        local_358 = local_1d8;
        local_378 = local_188;
        dVar4 = local_378;
        uStack_370 = uStack_180;
        dVar5 = uStack_370;
        local_368 = local_178;
        lVar30 = *(longlong *)(param_1 + 0x220);
        lVar31 = (longlong)(int)uVar16 * 0x90;
        *(uint *)(lVar30 + lVar31) = uVar16;
        *(code **)(lVar30 + 8 + lVar31) = local_228;
        *(double *)(lVar30 + 0x10 + lVar31) = dVar18;
        *(double *)(lVar30 + 0x18 + lVar31) = dVar3;
        *(double *)(lVar30 + 0x20 + lVar31) = uStack_210;
        *(double *)(lVar30 + 0x28 + lVar31) = local_208;
        *(ulonglong *)(lVar30 + 0x30 + lVar31) = CONCAT44(uStack_1fc,local_200);
        dVar37 = (double)local_178 * (double)CONCAT44(uStack_1e4,uStack_1e8) +
                 local_188 * (double)CONCAT44(uStack_1f4,iStack_1f8) +
                 uStack_180 * (double)CONCAT44(uStack_1ec,local_1f0);
        *(ulonglong *)(lVar30 + 0x38 + lVar31) = CONCAT44(uStack_1f4,iStack_1f8);
        *(ulonglong *)(lVar30 + 0x40 + lVar31) = CONCAT44(uStack_1ec,local_1f0);
        *(ulonglong *)(lVar30 + 0x48 + lVar31) = CONCAT44(uStack_1e4,uStack_1e8);
        *(double *)(lVar30 + 0x50 + lVar31) = local_1e0;
        *(double *)(lVar30 + 0x68 + lVar31) = local_1c8;
        pdVar1 = (double *)(lVar30 + 0x58 + lVar31);
        *pdVar1 = local_1d8;
        pdVar1[1] = dStack_350;
        *(undefined8 *)(lVar30 + 0x70 + lVar31) = local_1c0;
        *(uint **)(lVar30 + 0x88 + lVar31) = local_178;
        local_378._0_4_ = SUB84(local_188,0);
        local_378._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
        uStack_370._0_4_ = SUB84(uStack_180,0);
        uStack_370._4_4_ = (undefined4)((ulonglong)uStack_180 >> 0x20);
        puVar2 = (undefined4 *)(lVar30 + 0x78 + lVar31);
        *puVar2 = (undefined4)local_378;
        puVar2[1] = local_378._4_4_;
        puVar2[2] = (undefined4)uStack_370;
        puVar2[3] = uStack_370._4_4_;
        local_378 = dVar4;
        uStack_370 = dVar5;
        if (((*(int *)(param_1 + 0x260) + 1 < (int)uVar16) ||
            (uVar21 = *(uint *)(*(longlong *)(param_1 + 600) + (longlong)(int)uVar16 * 4),
            (int)uVar21 < 1)) || (*(int *)(param_1 + 0x250) < (int)uVar21)) {
LAB_1482c2958:
          FUN_146b9cbf0(param_1 + 0x230,uVar16);
        }
        else {
          lVar30 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (ulonglong)(uVar21 >> 9) * 8);
          if (*(int *)(lVar30 + 8 + (ulonglong)(uVar21 & 0x1ff) * 0xc) < 1) goto LAB_1482c2958;
          *(float *)(lVar30 + 4 + (ulonglong)(uVar21 & 0x1ff) * 0xc) =
               (float)(dVar37 + dVar37 +
                       ((double)CONCAT44(uStack_1fc,local_200) * (double)local_178 +
                       dVar3 * local_188 + uStack_180 * local_208) * (double)local_178 +
                       (dVar3 * (double)local_178 +
                       (double)local_228 * local_188 + dVar18 * uStack_180) * local_188 +
                       (local_208 * (double)local_178 + dVar18 * local_188 + uStack_180 * uStack_210
                       ) * uStack_180 + local_1e0);
          FUN_146bd2818(param_1 + 0x230);
        }
        lVar25 = lVar25 + 4;
      } while (lVar32 * 4 != lVar25);
    }
    if (local_238 != (code **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c2ef0 FUN_1482c2ef0 body=77 status=ok
// SIG undefined FUN_1482c2ef0(void)

void FUN_1482c2ef0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x108))();
  if ((param_1[0x1a] != 0) && ((char)param_1[0x27] == '\x01')) {
    (**(code **)(*param_1 + 0xb8))(param_1);
    (**(code **)(*param_1 + 0x28))(param_1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001482c2f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}



// FUNCTION 1482c2f3e FUN_1482c2f3e body=584 status=ok
// SIG undefined FUN_1482c2f3e(void)

ulonglong FUN_1482c2f3e(longlong param_1,undefined4 param_2,int param_3,int param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       int *param_9)

{
  longlong *plVar1;
  uint3 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  int *local_58;
  byte local_42;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar7 = *(int *)(param_1 + 0x150);
  if ((iVar7 != 1 & *(byte *)(param_1 + 0x156)) == 1) {
    local_78 = param_9;
    FUN_1482b317c(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_58 = param_9;
  local_60 = param_8;
  local_68 = param_7;
  local_70 = param_6;
  local_78 = (int *)CONCAT44(local_78._4_4_,param_5);
  bVar3 = FUN_1482b2f34(param_1,param_2,param_3,param_4);
  if (bVar3 != 0) {
    uVar2 = (uint3)((uint)iVar7 >> 8);
    uVar10 = CONCAT71((uint7)uVar2,1);
    if ((*(char *)(param_1 + 0x156) != '\x01' || iVar7 != 1) ||
       (uVar10 = (ulonglong)CONCAT31(uVar2,1), *(char *)(param_1 + 200) != '\x01'))
    goto LAB_1482c3127;
    lVar12 = param_1 + 0x10;
    cVar4 = FUN_1482bb52e(lVar12,param_2);
    uVar11 = (undefined7)((ulonglong)lVar12 >> 8);
    if (cVar4 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x208);
      if (plVar1 != (longlong *)0x0) {
        uVar10 = CONCAT71(uVar11,1);
        lVar12 = 0;
        do {
          iVar7 = (**(code **)(*plVar1 + 0xa0))(plVar1);
          if (iVar7 <= lVar12) break;
          if (lVar12 < (int)plVar1[5]) {
            uVar8 = *(undefined8 *)(plVar1[4] + lVar12 * 8);
          }
          else {
            uVar8 = 0;
          }
          cVar4 = FUN_146c1a770(uVar8,param_2,&local_41);
          uVar9 = uVar10 & 0xff;
          uVar10 = (ulonglong)local_41;
          if (cVar4 == '\0') {
            uVar10 = uVar9;
          }
          lVar12 = lVar12 + 1;
        } while ((uVar10 & 1) != 0);
        if ((uVar10 & 1) != 0) {
          lVar12 = 0;
          do {
            iVar7 = (**(code **)(*plVar1 + 0xb0))(plVar1);
            if (iVar7 <= lVar12) break;
            if (lVar12 < (int)plVar1[7]) {
              uVar8 = *(undefined8 *)(plVar1[6] + lVar12 * 8);
            }
            else {
              uVar8 = 0;
            }
            cVar4 = FUN_146c1aaf4(uVar8,param_2,&local_42);
            uVar9 = uVar10 & 0xff;
            uVar10 = (ulonglong)local_42;
            if (cVar4 == '\0') {
              uVar10 = uVar9;
            }
            lVar12 = lVar12 + 1;
          } while ((uVar10 & 1) != 0);
        }
        goto LAB_1482c3127;
      }
LAB_1482c317e:
      uVar10 = CONCAT71(uVar11,1);
      goto LAB_1482c3127;
    }
    bVar5 = FUN_1482bbacc(lVar12,param_3);
    bVar6 = FUN_1482bbacc(lVar12,param_4);
    if ((bVar5 & bVar6) == 0) {
      if (bVar5 == 0) {
        uVar10 = CONCAT71(uVar11,1);
        if (bVar6 == 0) goto LAB_1482c3127;
        if (*param_9 == -1) {
          *param_9 = param_4;
          goto LAB_1482c3127;
        }
        bVar13 = *param_9 == param_4;
      }
      else {
        if (*param_9 == -1) {
          *param_9 = param_3;
          goto LAB_1482c317e;
        }
        bVar13 = *param_9 == param_3;
      }
      uVar10 = (ulonglong)bVar3;
      if (!bVar13) {
        uVar10 = 0;
      }
      goto LAB_1482c3127;
    }
  }
  uVar10 = 0;
LAB_1482c3127:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffff01;
}



// FUNCTION 1482c318a FUN_1482c318a body=506 status=ok
// SIG undefined FUN_1482c318a(void)

undefined8
FUN_1482c318a(longlong param_1,undefined4 param_2,undefined4 param_3,double *param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  longlong local_e0;
  undefined4 local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  char *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  longlong local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  double *local_68;
  double *local_60;
  undefined1 *local_58;
  char **local_50;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(int *)(param_1 + 0x164) == 1) &&
     (plVar1 = *(longlong **)(param_1 + 0xd0), plVar1 != (longlong *)0x0)) {
    dVar2 = *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x168);
    (**(code **)(*plVar1 + 8))(plVar1,&local_b0,param_4,0xffffffff);
    if ((param_4[2] - local_a0) * (param_4[2] - local_a0) +
        (*param_4 - local_b0) * (*param_4 - local_b0) +
        (param_4[1] - local_a8) * (param_4[1] - local_a8) <= dVar2) {
      local_d8 = FUN_146c061e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
      local_d0 = *param_4;
      dStack_c8 = param_4[1];
      local_c0 = param_4[2];
      local_e0 = param_1;
      local_b8 = dVar2;
      cVar3 = FUN_1482c392c(&local_e0,param_2);
      if (cVar3 != '\0') {
        cVar3 = FUN_1482c392c(&local_e0,param_3);
        if (cVar3 != '\0') {
          local_70 = &local_110;
          local_78 = &local_10c;
          local_90 = &local_108;
          local_108 = param_5;
          local_88 = &local_104;
          local_104 = param_6;
          local_68 = &local_100;
          local_100 = *param_4;
          dStack_f8 = param_4[1];
          local_f0 = param_4[2];
          local_60 = &local_e8;
          local_98 = &local_41;
          local_41 = '\x01';
          local_50 = &local_98;
          local_58 = &LAB_1482f6910;
          local_118 = param_1;
          local_110 = param_2;
          local_10c = param_3;
          local_e8 = dVar2;
          local_80 = param_1;
          FUN_146c03fd0(*(undefined8 *)(param_1 + 8),param_2);
          if (local_41 != '\0') {
            cVar3 = FUN_1482c3b4c(&local_118,param_3);
            if (cVar3 != '\0') goto LAB_1482c3352;
          }
        }
      }
    }
    uVar4 = 0;
  }
  else {
LAB_1482c3352:
    uVar4 = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c3386 FUN_1482c3386 body=567 status=ok
// SIG undefined FUN_1482c3386(void)

void FUN_1482c3386(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_d0;
  undefined1 local_c8;
  undefined4 *local_c0;
  undefined2 *local_b8;
  undefined2 *local_b0;
  ulonglong local_a8;
  undefined2 local_a0;
  undefined4 local_9c;
  undefined2 *local_98;
  undefined2 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  uint local_64;
  undefined8 local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_1;
  uVar5 = *(byte *)(lVar2 + 0x156) ^ 1;
  local_d0 = uVar5 * 4 + 1;
  local_80[0] = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_90 = 0;
  local_8c = 0xffffffff;
  local_88 = (undefined4 *)0x0;
  local_a0 = 0;
  local_9c = 0xffffffff;
  local_98 = (undefined2 *)0x0;
  local_d8 = *(undefined4 *)(lVar2 + 0x160);
  local_c8 = (undefined1)uVar5;
  local_c0 = local_80;
  local_b8 = &local_90;
  local_b0 = &local_a0;
  cVar4 = FUN_1482afd2e(param_2,*(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x158),
                        *(undefined4 *)(lVar2 + 0x15c));
  if (cVar4 != '\0') {
    uVar3 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
             (ulonglong)((param_2 & 0x1ff) << 4));
    local_a8 = uVar3 >> 0x20;
    lVar1 = lVar2 + 0x10;
    local_64 = param_2;
    local_60 = &local_64;
    local_58 = local_80;
    FUN_1482f537c(lVar1,local_4c,&local_60,0);
    FUN_1482b33ce(lVar1,&local_60,uVar3 & 0xffffffff);
    uVar6 = 1;
    uVar7 = 1;
    if ((char)local_90 == '\0') {
      uVar7 = SUB81(local_60,0);
    }
    if (local_90._1_1_ == '\0') {
      local_60._1_1_ = 0;
    }
    local_90 = CONCAT11(local_60._1_1_,uVar7);
    local_88 = local_58;
    local_64 = (uint)uVar3;
    local_60 = &local_64;
    local_58 = (undefined4 *)&local_90;
    FUN_1482f586a(lVar2 + 0x60,local_4c,&local_60,0);
    uVar5 = (uint)local_a8;
    FUN_1482b33ce(lVar1,&local_60,local_a8 & 0xffffffff);
    if ((char)local_a0 == '\0') {
      uVar6 = SUB81(local_60,0);
    }
    uVar7 = 0;
    if (local_a0._1_1_ != '\0') {
      uVar7 = local_60._1_1_;
    }
    local_a0 = CONCAT11(uVar7,uVar6);
    local_98 = (undefined2 *)local_58;
    local_64 = uVar5;
    local_60 = &local_64;
    local_58 = (undefined4 *)&local_a0;
    FUN_1482f586a(lVar2 + 0x60,local_4c,&local_60,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c35c2 FUN_1482c35c2 body=126 status=ok
// SIG undefined FUN_1482c35c2(void)

void FUN_1482c35c2(longlong *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14ae72ed0;
  local_58[0] = &LAB_148302088;
  local_30 = param_1;
  (**(code **)(*param_1 + 0xd0))(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c3642 FUN_1482c3642 body=193 status=ok
// SIG undefined FUN_1482c3642(void)

void FUN_1482c3642(longlong param_1,uint param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  uVar5 = (ulonglong)(param_2 & 0x1ff);
  local_38 = *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x18);
  puVar1 = (undefined4 *)(lVar2 + uVar5 * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  (**(code **)(*param_3 + 8))(param_3,&local_60,&local_48,param_2);
  lVar2 = *(longlong *)(param_1 + 8);
  cVar4 = FUN_146bfed03(&local_60);
  if (cVar4 != '\0') {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
    *(undefined8 *)(lVar3 + 0x10 + uVar5 * 0x18) = local_50;
    puVar1 = (undefined4 *)(lVar3 + uVar5 * 0x18);
    *puVar1 = local_60;
    puVar1[1] = uStack_5c;
    puVar1[2] = uStack_58;
    puVar1[3] = uStack_54;
    if (*(char *)(lVar2 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar2 + 0x214) = *(int *)(lVar2 + 0x214) + 1;
      UNLOCK();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c3704 FUN_1482c3704 body=252 status=ok
// SIG undefined FUN_1482c3704(void)

undefined4 *
FUN_1482c3704(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_1482b33ce(param_1 + 0x10,&local_48,param_3);
    if (local_40 != (longlong *)0x0) goto LAB_1482c3792;
    if (local_48._1_1_ != '\0') goto LAB_1482c3735;
  }
  else {
LAB_1482c3735:
    if ((*(char *)(param_1 + 0x138) == '\x02') &&
       (local_40 = *(longlong **)(param_1 + 0xd0), local_40 != (longlong *)0x0)) {
      pcVar1 = *(code **)(param_1 + 0xe0);
      if (pcVar1 != (code *)0x0) {
        plVar7 = (longlong *)(param_1 + 0x100);
        if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0xf0);
        }
        local_48 = param_3;
        uVar5 = (**(code **)(*plVar7 + 8))();
        uVar6 = (*pcVar1)(uVar5,&local_48);
        if ((uVar6 & 2) != 0) goto LAB_1482c37cb;
        local_40 = *(longlong **)(param_1 + 0xd0);
      }
LAB_1482c3792:
      (**(code **)(*local_40 + 8))(local_40,param_2,param_4,param_3);
      goto LAB_1482c37d9;
    }
  }
LAB_1482c37cb:
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_4 + 4);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *param_2 = *param_4;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
LAB_1482c37d9:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c3802 FUN_1482c3802 body=296 status=ok
// SIG undefined FUN_1482c3802(void)

void FUN_1482c3802(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar7 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar9 = 0;
  if ((uVar7 != 0) && (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar10 = 1;
    uVar4 = 1;
    if (1 < (int)uVar7) {
      uVar10 = uVar7;
    }
    do {
      uVar9 = uVar10;
      if (uVar10 == uVar4) break;
      uVar6 = uVar4 >> 9;
      uVar8 = uVar4 & 0x1ff;
      uVar9 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar6] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  if (uVar9 != uVar7) {
    do {
      pcVar2 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      local_44 = uVar9;
      uVar3 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar3,&local_44);
      uVar10 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar7) {
        uVar10 = uVar7;
      }
      do {
        uVar4 = uVar10;
        if (uVar10 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar4 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x28) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar4;
    } while (uVar9 != uVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482c392c FUN_1482c392c body=543 status=ok
// SIG undefined FUN_1482c392c(void)

ulonglong FUN_1482c392c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  int local_78;
  undefined8 local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  lVar6 = *(longlong *)(lVar1 + 8) + 0xb8;
  FUN_146be983e(&local_88,lVar6,param_2,0);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((((local_88 != lVar6) || (local_80 != param_2)) || ((int)local_70 != -1)) ||
     (local_70._4_4_ != -1)) {
    do {
      if (local_68 != *(uint *)(param_1 + 1)) {
        lVar2 = *(longlong *)(lVar1 + 8);
        uVar4 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(local_68 >> 9) * 8) +
                 (ulonglong)((local_68 & 0x1ff) << 4));
        if ((int)uVar4 == param_2) {
          plVar3 = (longlong *)
                   ((ulonglong)((uint)(uVar4 >> 0x29) << 3) + *(longlong *)(lVar2 + 0x10));
          uVar4 = uVar4 >> 0x20;
        }
        else {
          plVar3 = (longlong *)
                   ((ulonglong)((uint)(uVar4 >> 6) & 0x3fffff8) + *(longlong *)(lVar2 + 0x10));
        }
        lVar2 = *plVar3;
        uVar4 = (ulonglong)((uint)uVar4 & 0x1ff);
        local_90 = (*(double *)(lVar2 + 0x10 + uVar4 * 0x18) + (double)param_1[4]) * 0.5;
        local_98 = (*(double *)(lVar2 + 8 + uVar4 * 0x18) + (double)param_1[3]) * 0.5;
        local_a0 = (*(double *)(lVar2 + uVar4 * 0x18) + (double)param_1[2]) * 0.5;
        (**(code **)(**(longlong **)(lVar1 + 0xd0) + 8))
                  (*(longlong **)(lVar1 + 0xd0),&local_b8,&local_a0,0xffffffff);
        dVar7 = (local_a8 - local_90) * (local_a8 - local_90) +
                (local_b8 - local_a0) * (local_b8 - local_a0) +
                (local_b0 - local_98) * (local_b0 - local_98);
        if ((double)param_1[5] <= dVar7 && dVar7 != (double)param_1[5]) {
          uVar5 = 0;
          break;
        }
      }
      if (local_78 == 0) {
        local_7c = 0xffffffff;
        local_70 = 0xffffffffffffffff;
        local_70._4_4_ = -1;
        local_70._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_88);
      }
    } while (((local_88 != lVar6) || (local_80 != param_2)) ||
            (((int)local_70 != -1 || (local_70._4_4_ != -1))));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1482c3b4c FUN_1482c3b4c body=158 status=ok
// SIG undefined FUN_1482c3b4c(void)

undefined1 FUN_1482c3b4c(longlong *param_1)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *param_1;
  local_68 = &local_11;
  local_11 = 1;
  local_20 = &local_68;
  local_60 = param_1 + 2;
  local_58 = (longlong)param_1 + 0x14;
  local_48 = (longlong)param_1 + 0xc;
  local_40 = param_1 + 1;
  local_38 = param_1 + 3;
  local_30 = param_1 + 6;
  local_28 = &LAB_1482f6910;
  FUN_146c03fd0(*(undefined8 *)(local_50 + 8));
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c3c14 FUN_1482c3c14 body=372 status=ok
// SIG undefined FUN_1482c3c14(void)

undefined8 * FUN_1482c3c14(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x129) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131) = 0;
  *(undefined2 *)((longlong)param_1 + 0x139) = 1;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3e45798ee0000000;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_14ae72a40;
  param_1[0x2a] = 0x1010000000000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x7f7fffff;
  param_1[0x2f] = 0x7fefffffffffffff;
  param_1[0x30] = 0x7fffffff;
  param_1[0x31] = 0;
  param_1[0x32] = 0x4070000000000000;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  FUN_146c3f08a(param_1 + 0x46);
  param_1[0x43] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x38) < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined8 **)(lVar1 + 0x30);
    }
    param_1[0x43] = uVar2;
  }
  return param_1;
}



// FUNCTION 1482c3d88 FUN_1482c3d88 body=61 status=ok
// SIG undefined FUN_1482c3d88(void)

void FUN_1482c3d88(longlong *param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  iVar1 = 1;
  if (1 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  param_1[0x2f] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0x7f7fffff;
                    /* WARNING: Could not recover jumptable at 0x0001482c3dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



// FUNCTION 1482c3dc6 FUN_1482c3dc6 body=61 status=ok
// SIG undefined FUN_1482c3dc6(void)

void FUN_1482c3dc6(longlong *param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x184) = 1;
  iVar1 = 3;
  if (3 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  param_1[0x2f] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0x7f7fffff;
                    /* WARNING: Could not recover jumptable at 0x0001482c3dff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



// FUNCTION 1482c3e2e FUN_1482c3e2e body=53 status=ok
// SIG undefined FUN_1482c3e2e(void)

void FUN_1482c3e2e(longlong *param_1,double param_2)

{
  param_1[0x30] = 0x300000001;
  param_1[0x2f] = 0x7fefffffffffffff;
  *(float *)(param_1 + 0x2e) = (float)param_2;
                    /* WARNING: Could not recover jumptable at 0x0001482c3e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



// FUNCTION 1482c3e64 FUN_1482c3e64 body=3033 status=ok
// SIG undefined FUN_1482c3e64(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1482c3e64(undefined1 *****param_1,double param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined1 **ppuVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  size_t sVar14;
  undefined1 ****ppppuVar15;
  uint uVar16;
  uint uVar17;
  undefined1 uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_368 [32];
  undefined8 ****local_348;
  undefined8 ****local_340;
  undefined8 *****local_338;
  undefined1 local_329;
  undefined1 ****local_328;
  int local_320;
  int local_31c;
  code *local_318;
  undefined8 *****local_310;
  undefined1 *local_308;
  undefined1 *puStack_300;
  undefined1 *local_2f8;
  undefined8 ****local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  undefined1 *local_2d8;
  undefined1 *puStack_2d0;
  undefined1 *local_2c8;
  undefined8 ****local_2c0;
  int local_2b8;
  undefined4 local_2b4;
  int local_2b0 [2];
  undefined8 local_2a8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  uint *local_278;
  undefined8 uStack_270;
  undefined8 ****local_260;
  undefined1 *local_258;
  undefined8 uStack_250;
  undefined8 ****local_248;
  undefined8 uStack_240;
  undefined1 *****local_230;
  undefined8 *****local_228;
  undefined1 *****local_220;
  undefined8 ****local_218;
  int *local_210;
  undefined8 ****local_208;
  int *local_200;
  undefined1 *local_1f8;
  undefined8 *****local_1f0;
  int local_1e4 [2];
  undefined1 local_1dc [4];
  undefined8 ****local_1d8 [3];
  undefined8 ****local_1c0 [3];
  undefined8 ****local_1a8;
  undefined8 ****local_1a0;
  undefined8 ****local_198;
  undefined8 *****local_190;
  int local_180;
  int local_17c;
  longlong local_168;
  longlong *local_158;
  longlong local_148 [4];
  undefined1 *****local_128;
  undefined8 local_120;
  undefined8 ****local_118;
  undefined8 local_110;
  undefined1 *****local_108;
  undefined8 *****local_100;
  undefined8 ****local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined1 *****local_b8;
  undefined8 *****local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (*(int *)(param_1[1] + 0x2e) != 0) {
    uVar18 = *(undefined1 *)((longlong)param_1 + 0x155);
    *(undefined1 *)((longlong)param_1 + 0x155) = 0;
    local_248 = (undefined8 ****)0x0;
    uStack_240 = 0;
    local_258 = (undefined1 *)0x0;
    uStack_250 = 0;
    (*(code *)(*param_1)[0x1b])();
    (*(code *)(*param_1)[0x1f])(param_1);
    FUN_1482c4a3e(param_1,0);
    cVar5 = (*(code *)(*param_1)[1])(param_1);
    if (cVar5 == '\0') {
      FUN_14051b394(&local_248,
                    *(int *)(param_1[1] + 0x28) * 0x200 + *(int *)((longlong)param_1[1] + 0x144),1);
      local_190 = &local_b8;
      local_128 = (undefined1 *****)0x0;
      local_120 = (undefined1 *****)((ulonglong)local_120 & 0xffffffff00000000);
      local_198 = (undefined8 ****)&LAB_148302228;
      local_340 = (undefined8 ****)((ulonglong)local_340 & 0xffffffff00000000);
      local_338 = &local_128;
      local_b8 = param_1;
      local_b0 = &local_248;
      FUN_1401f8d10(L"ParallelFor Task",
                    *(int *)(param_1[1] + 0x28) * 0x200 + *(int *)((longlong)param_1[1] + 0x144),1,
                    &local_198);
      cVar5 = (*(code *)(*param_1)[1])(param_1);
      if (cVar5 == '\0') {
        FUN_1448c4dd6(&local_258,
                      *(int *)(param_1[1] + 4) * 0x200 + *(int *)((longlong)param_1[1] + 0x24),1);
        local_260 = (undefined8 ****)cos(param_2 * 0.017453292519943295);
        local_118 = &local_260;
        local_198 = (undefined8 ****)0x0;
        local_190 = (undefined8 *****)((ulonglong)local_190 & 0xffffffff00000000);
        local_b8 = (undefined1 *****)&LAB_1483022da;
        local_340 = (undefined8 ****)((ulonglong)local_340 & 0xffffffff00000000);
        local_338 = &local_198;
        local_128 = param_1;
        local_120 = (undefined1 *****)&local_258;
        local_110 = &local_248;
        local_b0 = &local_128;
        FUN_1401f8d10(L"ParallelFor Task",
                      *(int *)(param_1[1] + 4) * 0x200 + *(int *)((longlong)param_1[1] + 0x24),1);
        cVar5 = (*(code *)(*param_1)[1])(param_1);
        if (cVar5 == '\0') {
          (*(code *)(*param_1)[0x20])(param_1);
          (*(code *)(*param_1)[0x1d])(param_1);
          (*(code *)(*param_1)[0x23])(param_1);
          local_278 = (uint *)0x0;
          uStack_270 = 0;
          local_329 = uVar18;
          iVar7 = 0;
LAB_1482c40d7:
          local_31c = iVar7;
          bVar22 = (longlong)uStack_270 < 0;
          uStack_270 = uStack_270 & 0xffffffff00000000;
          if (bVar22) {
            FUN_14481578e(&local_278,0);
          }
          ppppuVar15 = param_1[1];
          uVar16 = *(int *)(ppppuVar15 + 0x3a) * 0x200 + *(int *)((longlong)ppppuVar15 + 0x1d4);
          uVar21 = 0;
          if ((uVar16 != 0) && (uVar21 = 0, 0xfffd < (ushort)(*(short *)*ppppuVar15[0x3b] - 1U))) {
            uVar6 = 1;
            uVar20 = 1;
            if (1 < (int)uVar16) {
              uVar6 = uVar16;
            }
            do {
              uVar21 = uVar6;
              if (uVar6 == uVar20) break;
              uVar11 = uVar20 >> 9;
              uVar17 = uVar20 & 0x1ff;
              uVar21 = uVar20;
              uVar20 = uVar20 + 1;
            } while (0xfffd < (ushort)(*(short *)((longlong)ppppuVar15[0x3b][uVar11] +
                                                 (ulonglong)uVar17 * 2) - 1U));
          }
LAB_1482c4245:
          if (uVar21 != uVar16) {
            local_128 = (undefined1 *****)CONCAT44(local_128._4_4_,uVar21);
            cVar5 = (*(code *)*param_3)(param_3[1],&local_128);
            uVar3 = uStack_270;
            if ((cVar5 != '\0') &&
               ((lVar13 = *(longlong *)
                           ((longlong)param_1[1][0x38][uVar21 >> 9] +
                           (ulonglong)((uVar21 & 0x1ff) << 4)), local_258[(int)lVar13] != '\0' ||
                (local_258[lVar13 >> 0x20] == '\x01')))) {
              lVar13 = (longlong)(int)uStack_270;
              uVar6 = (int)uStack_270 + 1;
              uStack_270 = CONCAT44(uStack_270._4_4_,uVar6);
              if (uStack_270._4_4_ < uVar6) {
                FUN_1446f48e2(&local_278,uVar3 & 0xffffffff);
              }
              local_278[lVar13] = uVar21;
            }
            uVar6 = uVar21 + 1;
            if ((int)(uVar21 + 1) < (int)uVar16) {
              uVar6 = uVar16;
            }
            uVar20 = uVar21;
            do {
              uVar21 = uVar6;
              if (uVar6 - 1 == uVar20) break;
              uVar21 = uVar20 + 1;
              uVar20 = uVar21;
            } while (0xfffd < (ushort)(*(short *)((longlong)ppppuVar15[0x3b][uVar21 >> 9] +
                                                 (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
            goto LAB_1482c4245;
          }
          if ((longlong)(int)uStack_270 != 0) {
            puVar1 = local_278 + (int)uStack_270;
            local_320 = 0;
            puVar19 = local_278;
            iVar12 = local_31c;
LAB_1482c4277:
            uVar21 = *puVar19;
            if ((-1 < (int)uVar21) &&
               (ppppuVar15 = param_1[1],
               (int)uVar21 <
               *(int *)(ppppuVar15 + 0x3a) * 0x200 + *(int *)((longlong)ppppuVar15 + 0x1d4))) {
              if (0xfffd < (ushort)(*(short *)((longlong)ppppuVar15[0x3b][uVar21 >> 9] +
                                              (ulonglong)(uVar21 & 0x1ff) * 2) - 1U))
              goto LAB_1482c4351;
              cVar5 = (*(code *)(*param_1)[1])(param_1);
              if (cVar5 != '\0') goto LAB_1482c46ff;
              *(int *)((longlong)param_1 + 0x284) = *(int *)((longlong)param_1 + 0x284) + 1;
              ppppuVar15 = param_1[1];
              uVar3 = *(ulonglong *)
                       ((longlong)ppppuVar15[0x38][uVar21 >> 9] + (ulonglong)((uVar21 & 0x1ff) << 4)
                       );
              local_2a8 = 0xffffffffffffffff;
              local_288 = 0xffffffffffffffff;
              local_298 = 0xffffffff;
              uStack_294 = 0xffffffff;
              uStack_290 = 0xffffffff;
              uStack_28c = 0xffffffff;
              uVar6 = (uint)uVar3;
              uVar16 = (uint)(uVar3 >> 0x20);
              if (local_258[(int)uVar6] == '\x01') {
                local_2c0 = (undefined8 ****)0x0;
                local_2b8 = *(int *)(param_1 + 0x4f);
                sVar14 = (size_t)local_2b8;
                if (sVar14 == 0) {
                  local_2b4 = 0;
                }
                else {
                  local_328 = param_1[0x4e];
                  FUN_1447cd5fa(&local_2c0,local_2b8,0);
                  memcpy(local_2c0,local_328,sVar14);
                  ppppuVar15 = param_1[1];
                }
                local_338 = &local_2c0;
                local_340 = &local_248;
                local_348 = local_260;
                cVar5 = FUN_1482b4366(ppppuVar15,uVar21,uVar3 & 0xffffffff,uVar3 >> 0x20);
                if (cVar5 != '\0') {
                  uVar9 = (ulonglong)(uVar16 & 0x1ff);
                  local_2c8 = param_1[1][2][uVar3 >> 0x29][uVar9 * 3 + 2];
                  ppuVar2 = param_1[1][2][uVar3 >> 0x29] + uVar9 * 3;
                  local_2d8 = *ppuVar2;
                  puStack_2d0 = ppuVar2[1];
                  local_348 = (undefined8 ****)CONCAT44(local_348._4_4_,uVar16);
                  iVar7 = FUN_1482c4c1c(param_1,uVar21,&local_2d8,local_2b0);
                  if (iVar7 == 0) goto LAB_1482c4802;
                }
              }
              iVar12 = local_31c;
              if (local_258[(longlong)uVar3 >> 0x20] == '\x01') {
                local_2e8 = (undefined8 ****)0x0;
                local_2e0 = *(int *)(param_1 + 0x4f);
                sVar14 = (size_t)local_2e0;
                if (sVar14 == 0) {
                  local_2dc = 0;
                }
                else {
                  local_328 = param_1[0x4e];
                  FUN_1447cd5fa(&local_2e8,local_2e0,0);
                  memcpy(local_2e8,local_328,sVar14);
                }
                local_338 = &local_2e8;
                local_340 = &local_248;
                local_348 = local_260;
                cVar5 = FUN_1482b4366(param_1[1],uVar21,uVar3 >> 0x20,uVar3 & 0xffffffff);
                iVar12 = local_31c;
                if (cVar5 != '\0') {
                  local_2f8 = param_1[1][2][uVar3 >> 9 & 0x7fffff]
                              [(ulonglong)(uVar6 & 0x1ff) * 3 + 2];
                  ppuVar2 = param_1[1][2][uVar3 >> 9 & 0x7fffff] + (ulonglong)(uVar6 & 0x1ff) * 3;
                  local_308 = *ppuVar2;
                  puStack_300 = ppuVar2[1];
                  local_348 = (undefined8 ****)CONCAT44(local_348._4_4_,uVar6);
                  iVar7 = FUN_1482c4c1c(param_1,uVar21,&local_308,local_2b0);
                  iVar12 = local_31c;
                  if (iVar7 == 0) {
LAB_1482c4802:
                    iVar7 = local_2b0[0];
                    ppppuVar15 = (undefined1 ****)(longlong)local_2b0[0];
                    local_128 = (undefined1 *****)&local_248;
                    local_310 = &local_128;
                    local_318 = FUN_148302408;
                    local_120 = param_1;
                    FUN_146c03fd0(param_1[1],local_2b0[0]);
                    local_f8 = (undefined8 ****)param_1[1];
                    local_118 = (undefined8 ****)0x0;
                    local_108 = (undefined1 *****)&PTR_LAB_149f3b7b0;
                    local_100 = (undefined8 *****)CONCAT44(local_100._4_4_,iVar7);
                    local_128 = (undefined1 *****)&LAB_146c413d0;
                    local_328 = ppppuVar15;
                    FUN_146c41260(local_f8 + 0x17,&local_b8,iVar7,&local_128);
                    FUN_146c41458(local_b8,&local_128,(ulonglong)local_b0 & 0xffffffff,local_a8);
                    FUN_146c41662(local_b8,&local_198,(ulonglong)local_b0 & 0xffffffff,local_a8);
LAB_1482c4363:
                    ppppuVar4 = local_f8;
                    if (local_128 == (undefined1 *****)local_198) {
                      if ((((int)local_120 == (int)local_190) && ((int)local_110 == local_180)) &&
                         (local_110._4_4_ == local_17c)) goto LAB_1482c48dd;
                    }
                    local_230 = (undefined1 *****)CONCAT44(local_230._4_4_,local_108._0_4_);
                    plVar10 = local_e8;
                    if (local_e8 == (longlong *)0x0) {
                      plVar10 = local_d8;
                    }
                    uVar8 = (**(code **)(*plVar10 + 8))();
                    iVar7 = (*(code *)ppppuVar4)(uVar8,&local_230);
                    local_1a0 = &local_248;
                    local_1a8 = local_260;
                    local_1dc = (undefined1  [4])0x0;
                    local_1e4[1] = 0;
                    local_1e4[0] = 0;
                    local_230 = (undefined1 *****)&local_1a0;
                    local_228 = (undefined8 *****)local_1dc;
                    local_220 = (undefined1 *****)local_1c0;
                    local_218 = &local_1a8;
                    local_210 = local_1e4 + 1;
                    local_208 = local_1d8;
                    local_200 = local_1e4;
                    local_1f8 = &LAB_143b0303c;
                    local_1f0 = &local_230;
                    FUN_146c03fd0(param_1[1],iVar7,&local_1f8);
                    local_258[iVar7] = local_1e4[0] == 0;
                    if ((int)local_118 == 0) {
                      local_120 = (undefined1 *****)CONCAT44(0xffffffff,(int)local_120);
                      local_110 = (undefined8 *****)0xffffffffffffffff;
                    }
                    else {
                      FUN_146be9922(&local_128);
                    }
                    goto LAB_1482c4363;
                  }
                }
              }
            }
            goto LAB_1482c4351;
          }
LAB_1482c46c2:
          (*(code *)(*param_1)[0x24])(param_1);
          (*(code *)(*param_1)[0x1e])(param_1);
          cVar5 = (*(code *)(*param_1)[1])(param_1);
          if (cVar5 == '\0') {
            (*(code *)(*param_1)[0x14])(param_1);
            (*(code *)(*param_1)[0x1c])(param_1);
          }
LAB_1482c46ff:
          uVar18 = local_329;
          if (local_278 != (uint *)0x0) {
            FUN_1400020a8();
            uVar18 = local_329;
          }
        }
      }
    }
    if (local_258 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_248 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)((longlong)param_1 + 0x155) = uVar18;
  }
  if ((local_60 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1482c48dd:
  if (local_168 != 0) {
    plVar10 = local_158;
    if (local_158 == (longlong *)0x0) {
      plVar10 = local_148;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_f8 != (undefined8 ****)0x0) {
    plVar10 = local_d8;
    if (local_e8 != (longlong *)0x0) {
      plVar10 = local_e8;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (local_a8[0] != 0) {
    plVar10 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar10 = local_88;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  ppppuVar15 = local_328;
  local_320 = local_320 + 1;
  local_1c0[0] = &local_248;
  local_1d8[0] = local_260;
  local_1f8 = (undefined1 *)((ulonglong)local_1f8 & 0xffffffff00000000);
  local_1a0 = (undefined8 ****)((ulonglong)local_1a0 & 0xffffffff00000000);
  local_1a8 = (undefined8 ****)((ulonglong)local_1a8 & 0xffffffff00000000);
  local_128 = (undefined1 *****)local_1c0;
  local_120 = (undefined1 *****)&local_1f8;
  local_118 = &local_198;
  local_110 = local_1d8;
  local_108 = (undefined1 *****)&local_1a0;
  local_100 = &local_b8;
  local_f8 = &local_1a8;
  local_228 = &local_128;
  local_230 = (undefined1 *****)&LAB_143b030fa;
  FUN_146c03fd0(param_1[1],(ulonglong)local_328 & 0xffffffff);
  local_258[(longlong)ppppuVar15] = (int)local_1a8 == 0;
  iVar12 = local_31c;
LAB_1482c4351:
  puVar19 = puVar19 + 1;
  if (puVar19 == puVar1) goto LAB_1482c45f9;
  goto LAB_1482c4277;
LAB_1482c45f9:
  if ((local_320 == 0) || (iVar7 = iVar12 + 1, iVar12 + 1 == 0x32)) goto LAB_1482c46c2;
  goto LAB_1482c40d7;
}



// FUNCTION 1482c4a3e FUN_1482c4a3e body=476 status=ok
// SIG undefined FUN_1482c4a3e(void)

void FUN_1482c4a3e(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_178 [32];
  int *local_158;
  int local_150;
  int local_14c;
  int *local_148;
  int local_140;
  int local_13c;
  undefined1 local_138 [8];
  uint local_130;
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [4];
  undefined1 *local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined **local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  int *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined1 *)(param_1 + 0x268) = 0;
  FUN_1448c4dd6(param_1 + 0x270,
                *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x24),1);
  if (param_2 == '\0') {
    local_b0 = *(longlong *)(param_1 + 8);
    local_c8 = 0;
    local_b8 = &PTR_LAB_149f36400;
    local_d8 = &LAB_146be5292;
    FUN_146be50a2(local_b0 + 0x1d0,local_78);
    FUN_146be4fdc(local_78,&local_d8);
    local_150 = *local_38 * 0x200 + local_38[1];
    local_148 = local_38;
    local_158 = local_38;
    local_14c = local_150;
    local_140 = local_150;
    local_13c = local_150;
    FUN_146be5300(local_138,&local_158,&local_148,local_78);
    if (local_d0 != local_130) {
      do {
        lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                   (ulonglong)(local_d0 >> 9) * 8) + (ulonglong)((local_d0 & 0x1ff) << 4));
        *(undefined1 *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)lVar1) = 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x270) + (lVar1 >> 0x20)) = 1;
        *(undefined1 *)(param_1 + 0x268) = 1;
        FUN_146be53a8(&local_d8);
      } while (local_d0 != local_130);
    }
    if (local_118 != 0) {
      if (local_108 == (longlong *)0x0) {
        local_108 = local_f8;
      }
      (**(code **)(*local_108 + 0x10))();
    }
    if (local_b8 != (undefined **)0x0) {
      if (local_a8 == (longlong *)0x0) {
        local_a8 = local_98;
      }
      (**(code **)(*local_a8 + 0x10))();
    }
    if (local_78[0] != 0) {
      if (local_68 == (longlong *)0x0) {
        local_68 = local_58;
      }
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c4c1c FUN_1482c4c1c body=2665 status=ok
// SIG undefined FUN_1482c4c1c(void)

undefined8
FUN_1482c4c1c(longlong *param_1,uint param_2,double *param_3,undefined4 *param_4,uint param_5)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  double *pdVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  uint *local_188;
  uint local_174;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  ulonglong local_158;
  longlong *local_150;
  undefined8 local_148;
  double dStack_140;
  double local_138;
  uint local_12c;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *param_4 = 0xffffffff;
  if ((char)param_1[0x19] == '\0') {
    local_c8[0] = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
  }
  else {
    FUN_1482b3344(param_1 + 2,local_c8,param_2);
    uVar14 = 2;
    if ((local_c8[0] & 4) != 0) goto LAB_1482c4fb3;
  }
  uVar14 = 7;
  if (((int)param_2 < 0) ||
     (lVar6 = param_1[1], *(int *)(lVar6 + 0x1d0) * 0x200 + *(int *)(lVar6 + 0x1d4) <= (int)param_2)
     ) goto LAB_1482c4fb3;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar6 + 0x1d8) + (ulonglong)(param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U)) goto LAB_1482c4fb3;
  lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar16 = (ulonglong)((param_2 & 0x1ff) << 4);
  uVar2 = *(uint *)(lVar11 + uVar16);
  uVar3 = *(uint *)(lVar11 + 4 + uVar16);
  local_160 = (longlong)(int)uVar2;
  local_170 = (ulonglong)(int)uVar3;
  uVar4 = *(uint *)(lVar11 + 8 + uVar16);
  local_168 = (ulonglong)uVar4;
  uVar18 = *(uint *)(lVar11 + 0xc + uVar16);
  local_158 = (ulonglong)uVar18;
  lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(uVar4 >> 9) * 8);
  local_d0 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
  local_d8 = *(undefined8 *)(lVar11 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
  lVar11 = 0;
  do {
    lVar13 = lVar11 + 1;
    lVar15 = 0;
    if (lVar11 != 2) {
      lVar15 = lVar13;
    }
    uVar5 = *(uint *)((longlong)&local_d8 + lVar15 * 4);
    uVar4 = *(uint *)((longlong)&local_d8 + lVar11 * 4);
    if (((uVar4 == uVar2) || (bVar21 = uVar5 == uVar2, uVar5 = uVar4, bVar21)) && (uVar5 == uVar3))
    {
      uVar16 = 2;
      if (lVar11 != 0) {
        uVar16 = (ulonglong)((int)lVar11 - 1);
      }
      uVar20 = *(undefined4 *)((longlong)&local_d8 + uVar16 * 4);
      goto LAB_1482c4de5;
    }
    lVar11 = lVar13;
  } while (lVar13 != 3);
  uVar20 = 0xffffffff;
LAB_1482c4de5:
  if (uVar18 == 0xffffffff) {
    local_e0 = 0xffffffff;
    local_e8 = 0xffffffffffffffff;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
    local_e0 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
    local_e8 = *(undefined8 *)(lVar11 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
    lVar11 = 0;
    do {
      lVar13 = lVar11 + 1;
      lVar15 = 0;
      if (lVar11 != 2) {
        lVar15 = lVar13;
      }
      uVar18 = *(uint *)((longlong)&local_e8 + lVar15 * 4);
      uVar4 = *(uint *)((longlong)&local_e8 + lVar11 * 4);
      if (((uVar4 == uVar2) || (bVar21 = uVar18 == uVar2, uVar18 = uVar4, bVar21)) &&
         (uVar18 == uVar3)) {
        uVar16 = 2;
        if (lVar11 != 0) {
          uVar16 = (ulonglong)((int)lVar11 - 1);
        }
        uVar19 = *(undefined4 *)((longlong)&local_e8 + uVar16 * 4);
        goto LAB_1482c4ed1;
      }
      lVar11 = lVar13;
    } while (lVar13 != 3);
  }
  uVar19 = 0xffffffff;
LAB_1482c4ed1:
  lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
  uVar16 = (ulonglong)uVar2 & 0x1ff;
  dVar24 = *(double *)(lVar11 + 0x10 + uVar16 * 0x18);
  pdVar12 = (double *)(lVar11 + uVar16 * 0x18);
  dVar25 = *pdVar12;
  dVar26 = pdVar12[1];
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar16 = (ulonglong)uVar3 & 0x1ff;
  dVar22 = *(double *)(lVar6 + 0x10 + uVar16 * 0x18);
  pdVar12 = (double *)(lVar6 + uVar16 * 0x18);
  dVar1 = *pdVar12;
  dVar7 = pdVar12[1];
  uVar14 = 3;
  local_128 = dVar1;
  dStack_120 = dVar7;
  local_118 = dVar22;
  local_108 = dVar25;
  dStack_100 = dVar26;
  local_f8 = dVar24;
  if ((double)param_1[0x2f] * (double)param_1[0x2f] <
      (dVar24 - dVar22) * (dVar24 - dVar22) +
      (dVar25 - dVar1) * (dVar25 - dVar1) + (dVar26 - dVar7) * (dVar26 - dVar7)) goto LAB_1482c4fb3;
  local_150 = param_1 + 2;
  (**(code **)(*param_1 + 0x118))(param_1);
  local_188 = &local_12c;
  local_12c = 0xffffffff;
  local_190 = (undefined4)local_158;
  local_198 = (undefined4)local_168;
  local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
  local_1a0 = uVar19;
  cVar9 = FUN_1482ca004(param_1,param_2,(ulonglong)uVar2,(ulonglong)uVar3);
  uVar14 = 4;
  if (cVar9 == '\0') goto LAB_1482c4fb3;
  iVar10 = (int)param_1[0x2a];
  uVar4 = local_12c;
  if ((*(char *)((longlong)param_1 + 0x155) != '\0') && ((char)param_1[0x4d] == '\x01')) {
    if ((local_12c != 0xffffffff) &&
       (((*(byte *)(param_1[0x4e] + local_170) & local_12c != uVar3) != 0 ||
        ((local_12c != uVar2 && (*(char *)(param_1[0x4e] + local_160) != '\0'))))))
    goto LAB_1482c4fb3;
    if ((iVar10 != 1) &&
       ((uVar4 = uVar3, *(char *)(param_1[0x4e] + local_170) != '\x01' &&
        (uVar4 = local_12c, *(char *)(param_1[0x4e] + local_160) == '\x01')))) {
      uVar4 = uVar2;
    }
  }
  local_12c = uVar4;
  uVar4 = local_12c;
  if (((uVar3 == param_5 || uVar2 == param_5) && (uVar4 = param_5, local_12c != 0xffffffff)) &&
     (local_12c != param_5)) goto LAB_1482c4fb3;
  local_12c = uVar4;
  uVar4 = local_12c;
  local_160 = CONCAT44(local_160._4_4_,iVar10);
  local_170 = CONCAT44(local_170._4_4_,uVar2);
  uVar18 = uVar3;
  if (local_12c == 0xffffffff) {
LAB_1482c514c:
    (**(code **)(*param_1 + 200))(param_1,&local_148,uVar18,param_3);
    param_3[2] = local_138;
    *param_3 = (double)local_148;
    param_3[1] = dStack_140;
    dVar22 = SQRT((dVar22 - dVar24) * (dVar22 - dVar24) +
                  (dVar1 - dVar25) * (dVar1 - dVar25) + (dVar7 - dVar26) * (dVar7 - dVar26));
    if (1e-08 <= dVar22) {
      lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
      uVar16 = (ulonglong)(uVar18 & 0x1ff);
      dVar24 = *(double *)(lVar6 + uVar16 * 0x18) - *param_3;
      dVar25 = *(double *)(lVar6 + 8 + uVar16 * 0x18) - param_3[1];
      dVar26 = *(double *)(lVar6 + 0x10 + uVar16 * 0x18) - param_3[2];
      dVar22 = SQRT(dVar26 * dVar26 + dVar24 * dVar24 + dVar25 * dVar25) / dVar22;
    }
    else {
      dVar22 = 0.5;
    }
    uVar20 = (undefined4)local_168;
    dVar24 = 1.0;
    if (dVar22 <= 1.0) {
      dVar24 = dVar22;
    }
    if ((uint)local_160 == 1) {
      auVar27._0_8_ = dVar24 + 0.5;
      auVar27._8_8_ = 0;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = auVar27._0_8_;
      auVar23 = roundpd(auVar27,auVar23,1);
      dVar24 = auVar23._0_8_;
    }
    local_174 = uVar18;
    if (*(int *)((longlong)param_1 + 0x164) == 0) goto LAB_1482c52d1;
    uVar19 = (undefined4)local_158;
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
    local_1a0 = uVar19;
    cVar9 = FUN_1482ca250(param_1,uVar18,local_170 & 0xffffffff,param_3);
    if (cVar9 != '\0') goto LAB_1482c532f;
    lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(local_174 >> 9) * 8);
    uVar16 = (ulonglong)(local_174 & 0x1ff);
    dVar7 = 1.0 - dVar24;
    dVar22 = *(double *)(lVar6 + 0x10 + uVar16 * 0x18);
    dVar25 = *(double *)(lVar6 + 8 + uVar16 * 0x18);
    lVar11 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)((uint)local_170 >> 9) * 8)
    ;
    uVar17 = (ulonglong)((uint)local_170 & 0x1ff);
    dVar26 = *(double *)(lVar11 + 0x10 + uVar17 * 0x18);
    dVar1 = *(double *)(lVar11 + 8 + uVar17 * 0x18);
    *param_3 = *(double *)(lVar11 + uVar17 * 0x18) * dVar24 +
               dVar7 * *(double *)(lVar6 + uVar16 * 0x18);
    param_3[1] = dVar1 * dVar24 + dVar25 * dVar7;
    param_3[2] = dVar26 * dVar24 + dVar22 * dVar7;
    uVar20 = (undefined4)local_168;
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
    local_1a0 = uVar19;
    cVar9 = FUN_1482ca250(param_1,local_174,local_170 & 0xffffffff,param_3);
LAB_1482c5414:
    uVar14 = 9;
    if (cVar9 != '\0') goto LAB_1482c52d1;
  }
  else {
    uVar18 = uVar2;
    if (local_12c == uVar2) {
      uVar18 = uVar3;
    }
    local_170 = CONCAT44(local_170._4_4_,uVar18);
    uVar18 = uVar4;
    if ((char)param_1[0x19] != '\x01') goto LAB_1482c514c;
    if (iVar10 != 1) {
      FUN_1482b33ce(local_150,&local_148);
      if (local_148._1_1_ == '\x01') goto LAB_1482c514c;
    }
    pdVar12 = &local_128;
    if (uVar4 == uVar2) {
      pdVar12 = &local_108;
    }
    param_3[2] = pdVar12[2];
    dVar24 = pdVar12[1];
    *param_3 = *pdVar12;
    param_3[1] = dVar24;
    dVar24 = 0.0;
    local_174 = uVar4;
    if (*(int *)((longlong)param_1 + 0x164) != 0) {
      local_1a0 = (undefined4)local_158;
      uVar20 = (undefined4)local_168;
      local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
      local_160 = CONCAT44(local_160._4_4_,uVar4);
      cVar9 = FUN_1482ca250(param_1,uVar4,local_170 & 0xffffffff,param_3);
      local_174 = (uint)local_160;
      goto LAB_1482c5414;
    }
LAB_1482c532f:
    uVar20 = (undefined4)local_168;
LAB_1482c52d1:
    uVar19 = (undefined4)local_158;
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
    local_1a0 = uVar19;
    cVar9 = FUN_1482b19a2(param_1,uVar2,uVar3,param_3);
    uVar14 = 5;
    if (cVar9 == '\0') {
      uVar20 = (undefined4)local_168;
      local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
      local_1a0 = uVar19;
      cVar9 = FUN_1482b19a2(param_1,uVar3,uVar2,param_3);
      if (cVar9 == '\0') {
        if (*(char *)((longlong)param_1 + 0x157) == '\x01') {
          local_1a0 = (undefined4)local_158;
          local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar20);
          cVar9 = FUN_1482b21ee(param_1,uVar2,uVar3,param_3);
          uVar14 = 10;
          if (cVar9 == '\0') {
            local_1a0 = (undefined4)local_158;
            local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,(int)local_168);
            cVar9 = FUN_1482b21ee(param_1,uVar3,uVar2,param_3);
            if (cVar9 == '\0') goto LAB_1482c54b6;
          }
        }
        else {
LAB_1482c54b6:
          *(int *)(param_1 + 0x50) = (int)param_1[0x50] + 1;
          local_1a8 = param_4;
          iVar10 = (**(code **)(*(longlong *)param_1[1] + 0x70))
                             ((longlong *)param_1[1],local_174,local_170 & 0xffffffff,dVar24);
          if (iVar10 == 0x1a) {
            uVar14 = 8;
          }
          else {
            uVar14 = 6;
            if (iVar10 == 0) {
              lVar6 = param_1[1];
              cVar9 = FUN_146bfed03(param_3);
              plVar8 = local_150;
              if (cVar9 != '\0') {
                lVar11 = *(longlong *)
                          (*(longlong *)(lVar6 + 0x10) + (ulonglong)(local_174 >> 9) * 8);
                *(double *)(lVar11 + 0x10 + (ulonglong)(local_174 & 0x1ff) * 0x18) = param_3[2];
                dVar24 = param_3[1];
                pdVar12 = (double *)(lVar11 + (ulonglong)(local_174 & 0x1ff) * 0x18);
                *pdVar12 = *param_3;
                pdVar12[1] = dVar24;
                if (*(char *)(lVar6 + 0x210) == '\x01') {
                  LOCK();
                  *(int *)(lVar6 + 0x214) = *(int *)(lVar6 + 0x214) + 1;
                  UNLOCK();
                }
              }
              if ((char)param_1[0x19] == '\x01') {
                FUN_1482f65d8(local_150,param_2);
                local_148 = param_1;
                cVar9 = FUN_1482bb52e(plVar8,param_4[8]);
                plVar8 = local_150;
                if (cVar9 != '\0') {
                  FUN_1482f65d8(local_150,param_4[10]);
                  FUN_1482f65d8(plVar8,param_4[8]);
                  FUN_1482ca44c(&local_148,param_4[10]);
                }
                if ((param_4[9] != -1) &&
                   (cVar9 = FUN_1482bb52e(local_150), plVar8 = local_150, cVar9 != '\0')) {
                  FUN_1482f65d8(local_150,param_4[0xb]);
                  FUN_1482f65d8(plVar8,param_4[9]);
                  FUN_1482ca44c(&local_148,param_4[0xb]);
                }
                FUN_1482f669e(param_1 + 0xc,local_170 & 0xffffffff);
              }
              local_1a8 = param_4;
              (**(code **)(*param_1 + 0xa8))(param_1,param_2,local_174,local_170 & 0xffffffff);
              uVar14 = 0;
              (**(code **)(*param_1 + 0x28))(param_1,0);
            }
          }
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x120))(param_1);
LAB_1482c4fb3:
  if ((local_b0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c5686 FUN_1482c5686 body=923 status=ok
// SIG undefined FUN_1482c5686(void)

void FUN_1482c5686(longlong *param_1,double param_2,int param_3,undefined4 param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  int local_104;
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_5 < *(uint *)(param_1[1] + 0x170)) {
    param_1[0x2f] = (longlong)param_2;
    *(undefined1 *)(param_1 + 0x4d) = 0;
    (**(code **)(*param_1 + 0xd8))();
    (**(code **)(*param_1 + 0xf8))(param_1);
    FUN_1482c4a3e(param_1,param_4);
    cVar12 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar12 == '\0') {
      (**(code **)(*param_1 + 0x100))(param_1);
      (**(code **)(*param_1 + 0xe8))(param_1);
      (**(code **)(*param_1 + 0x118))(param_1);
      if ((0 < param_3) &&
         (uVar18 = *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),
         0 < (int)uVar18)) {
        iVar15 = 0;
        do {
          uVar16 = 0;
          local_104 = 0;
          do {
            lVar7 = param_1[1];
            if ((int)uVar16 < *(int *)(lVar7 + 0x1d0) * 0x200 + *(int *)(lVar7 + 0x1d4)) {
              uVar14 = (ulonglong)(uVar16 >> 9);
              uVar19 = uVar16 & 0x1ff;
              if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + uVar14 * 8) +
                                      (ulonglong)uVar19 * 2) - 1U) < 0xfffe) &&
                 (*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x1c0) + uVar14 * 8) + 0xc +
                          (ulonglong)(uVar19 << 4)) != -1)) {
                if (*(uint *)(lVar7 + 0x170) <= param_5) break;
                cVar12 = (**(code **)(*param_1 + 8))(param_1);
                if (cVar12 != '\0') goto LAB_1482c56fa;
                lVar7 = *(longlong *)(param_1[1] + 0x10);
                uVar14 = *(ulonglong *)
                          (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + uVar14 * 8) +
                          (ulonglong)(uVar19 << 4));
                lVar8 = *(longlong *)(lVar7 + (uVar14 >> 9 & 0x7fffff) * 8);
                uVar17 = uVar14 & 0x1ff;
                dVar1 = *(double *)(lVar8 + uVar17 * 0x18);
                dVar2 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
                dVar3 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
                lVar7 = *(longlong *)(lVar7 + (uVar14 >> 0x29) * 8);
                uVar14 = uVar14 >> 0x20 & 0x1ff;
                dVar4 = *(double *)(lVar7 + uVar14 * 0x18);
                dVar5 = *(double *)(lVar7 + 8 + uVar14 * 0x18);
                dVar6 = *(double *)(lVar7 + 0x10 + uVar14 * 0x18);
                dVar9 = dVar4 - dVar1;
                dVar10 = dVar5 - dVar2;
                dVar11 = dVar6 - dVar3;
                if (dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10 <= param_2 * param_2) {
                  *(int *)((longlong)param_1 + 0x284) = *(int *)((longlong)param_1 + 0x284) + 1;
                  local_f0 = (dVar3 + dVar6) * 0.5;
                  local_f8 = (dVar2 + dVar5) * 0.5;
                  local_100 = (dVar1 + dVar4) * 0.5;
                  local_e0 = 0xffffffffffffffff;
                  local_c0 = 0xffffffffffffffff;
                  local_d0 = 0xffffffff;
                  uStack_cc = 0xffffffff;
                  uStack_c8 = 0xffffffff;
                  uStack_c4 = 0xffffffff;
                  local_118 = 0xffffffff;
                  iVar13 = FUN_1482c4c1c(param_1,uVar16,&local_100,local_e8);
                  local_104 = local_104 + (uint)(iVar13 == 0);
                }
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar18 != uVar16);
        } while (((local_104 != 0) && (param_5 < *(uint *)(param_1[1] + 0x170))) &&
                (iVar15 = iVar15 + 1, iVar15 != param_3));
      }
      (**(code **)(*param_1 + 0x120))(param_1);
      (**(code **)(*param_1 + 0xf0))(param_1);
      cVar12 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar12 == '\0') {
        (**(code **)(*param_1 + 0xa0))(param_1);
        (**(code **)(*param_1 + 0xe0))(param_1);
      }
    }
  }
LAB_1482c56fa:
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482c5a22 FUN_1482c5a22 body=804 status=ok
// SIG undefined FUN_1482c5a22(void)

void FUN_1482c5a22(longlong *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1[1] + 0x170) != 0) {
    (**(code **)(*param_1 + 0xd8))();
    (**(code **)(*param_1 + 0xf8))(param_1);
    FUN_1482c4a3e(param_1,0);
    cVar3 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar3 == '\0') {
      (**(code **)(*param_1 + 0x88))(param_1);
      cVar3 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x80))(param_1);
        cVar3 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar3 == '\0') {
          (**(code **)(*param_1 + 0x78))(param_1);
          cVar3 = (**(code **)(*param_1 + 8))(param_1);
          if (cVar3 == '\0') {
            (**(code **)(*param_1 + 0x90))(param_1);
            cVar3 = (**(code **)(*param_1 + 8))(param_1);
            if (cVar3 == '\0') {
              (**(code **)(*param_1 + 0x100))(param_1);
              (**(code **)(*param_1 + 0xe8))(param_1);
              (**(code **)(*param_1 + 0x118))(param_1);
              if (0 < (int)param_1[0x4a]) {
                do {
                  if (*(int *)((longlong)param_1 + 0x184) == 3) {
                    if (*(float *)(param_1 + 0x2e) <=
                        ABS(*(float *)(*(longlong *)param_1[0x48] + 0x10)) &&
                        ABS(*(float *)(*(longlong *)param_1[0x48] + 0x10)) !=
                        *(float *)(param_1 + 0x2e)) break;
                  }
                  else {
                    if (*(int *)((longlong)param_1 + 0x184) == 1) {
                      iVar4 = *(int *)(param_1[1] + 0x50);
                    }
                    else {
                      iVar4 = *(int *)(param_1[1] + 0x170);
                    }
                    if (iVar4 <= (int)param_1[0x30]) break;
                  }
                  *(int *)((longlong)param_1 + 0x284) = *(int *)((longlong)param_1 + 0x284) + 1;
                  uVar2 = *(uint *)(*(longlong *)param_1[0x48] + 0xc);
                  FUN_146bd26ea(param_1 + 0x46,1);
                  if ((-1 < (int)uVar2) &&
                     (lVar5 = param_1[1],
                     (int)uVar2 < *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4))) {
                    if ((ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar5 + 0x1d8) +
                                             (ulonglong)(uVar2 >> 9) * 8) +
                                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
                      cVar3 = (**(code **)(*param_1 + 8))(param_1);
                      if (cVar3 != '\0') goto LAB_1482c5a65;
                      local_a0 = 0xffffffffffffffff;
                      local_90 = 0xffffffff;
                      uStack_8c = 0xffffffff;
                      uStack_88 = 0xffffffff;
                      uStack_84 = 0xffffffff;
                      local_80 = 0xffffffffffffffff;
                      lVar5 = (ulonglong)uVar2 * 0x70;
                      local_b8 = *(undefined8 *)(param_1[0x44] + 0x68 + lVar5);
                      puVar1 = (undefined4 *)(param_1[0x44] + 0x58 + lVar5);
                      local_c8 = *puVar1;
                      uStack_c4 = puVar1[1];
                      uStack_c0 = puVar1[2];
                      uStack_bc = puVar1[3];
                      local_d8 = 0xffffffff;
                      iVar4 = FUN_1482c4c1c(param_1,(ulonglong)uVar2,&local_c8,local_a8);
                      if (iVar4 == 8) {
                        if (2 < *(int *)(param_1[1] + 0x170)) {
                          FUN_1482c5d48(param_1,*(undefined4 *)
                                                 (*(longlong *)
                                                   (*(longlong *)(param_1[1] + 0x1c0) +
                                                   (ulonglong)(uVar2 >> 9) * 8) + 8 +
                                                 (ulonglong)((uVar2 & 0x1ff) << 4)));
                        }
                      }
                      else if (iVar4 == 0) {
                        (**(code **)(*param_1 + 0x98))(param_1,local_a8);
                      }
                    }
                  }
                } while (0 < (int)param_1[0x4a]);
              }
              (**(code **)(*param_1 + 0x120))(param_1);
              (**(code **)(*param_1 + 0xf0))(param_1);
              cVar3 = (**(code **)(*param_1 + 8))(param_1);
              if (cVar3 == '\0') {
                (**(code **)(*param_1 + 0xa0))(param_1);
                (**(code **)(*param_1 + 0xe0))(param_1);
              }
            }
          }
        }
      }
    }
  }
LAB_1482c5a65:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482c5d48 FUN_1482c5d48 body=988 status=ok
// SIG undefined FUN_1482c5d48(void)

void FUN_1482c5d48(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  code **ppcVar6;
  longlong *plVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_278 [40];
  ulonglong local_250;
  longlong local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  undefined8 local_228;
  undefined4 local_220;
  code *local_218;
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
  code *local_178;
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
  uint local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (-1 < (int)param_2) {
    lVar10 = param_1[1];
    if ((int)param_2 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144)) {
      uVar9 = (ulonglong)(param_2 >> 9);
      uVar5 = (ulonglong)(param_2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar10 + 0x148) + uVar9 * 8) + uVar5 * 2)
                  - 1U) < 0xfffe) {
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + uVar9 * 8);
        local_248 = uVar5 * 3;
        local_220 = *(undefined4 *)(lVar10 + 8 + uVar5 * 0xc);
        local_228 = *(ulonglong *)(lVar10 + uVar5 * 0xc);
        local_240 = local_198;
        local_238 = local_f8;
        bVar8 = true;
        lVar10 = 0;
        local_250 = uVar9;
        local_230 = param_1;
        do {
          local_150 = param_1[1];
          uStack_148 = *(undefined4 *)((longlong)&local_228 + lVar10 * 4);
          local_168 = 0;
          local_158 = &PTR_LAB_149f3aae0;
          local_178 = FUN_146be9588;
          local_218 = (code *)(local_150 + 0xb8);
          uStack_210 = CONCAT44(uStack_210._4_4_,uStack_148);
          FUN_146be94ac(local_d8,&local_218,&local_178);
          local_128 = 0xffffffffffffffff;
          local_118[0] = 0;
          local_108 = (longlong *)0x0;
          local_158 = (undefined **)local_78;
          local_168 = local_88;
          uStack_160 = uStack_80;
          local_178 = local_98;
          uStack_170 = uStack_90;
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
          local_218 = (code *)CONCAT44(uStack_6c,local_70);
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
          ppcVar6 = &local_218;
          while( true ) {
            FUN_146bfd1f0(ppcVar6);
            if ((((local_178 == local_218) && ((int)uStack_170 == (int)uStack_210)) &&
                ((int)uStack_160 == (int)uStack_200)) && (uStack_160._4_4_ == uStack_200._4_4_))
            break;
            bVar8 = (bool)(bVar8 & local_120 == param_2);
            ppcVar6 = &local_178;
          }
          if (local_1b8[0] != 0) {
            plVar7 = local_1a8;
            if (local_1a8 == (longlong *)0x0) {
              plVar7 = local_240;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          param_1 = local_230;
          if (local_118[0] != 0) {
            plVar7 = local_108;
            if (local_108 == (longlong *)0x0) {
              plVar7 = local_238;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          if (local_d8[0] != 0) {
            plVar7 = local_c8;
            if (local_c8 == (longlong *)0x0) {
              plVar7 = local_b8;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 3);
        if (bVar8) {
          lVar10 = *(longlong *)(*(longlong *)(param_1[1] + 0x180) + local_250 * 8);
          uVar1 = *(undefined4 *)(lVar10 + local_248 * 4);
          uVar2 = *(undefined4 *)(lVar10 + 4 + local_248 * 4);
          uVar3 = *(undefined4 *)(lVar10 + 8 + local_248 * 4);
          iVar4 = FUN_146c0b65a(param_1[1],param_2,1,0);
          if ((iVar4 == 0) && ((char)param_1[0x19] == '\x01')) {
            plVar7 = param_1 + 2;
            FUN_1482f65d8(plVar7,uVar1);
            FUN_1482f65d8(plVar7,uVar2);
            FUN_1482f65d8(plVar7,uVar3);
            plVar7 = param_1 + 0xc;
            FUN_1482f669e(plVar7,local_228 & 0xffffffff);
            FUN_1482f669e(plVar7,local_228._4_4_);
            FUN_1482f669e(plVar7,local_220);
          }
          (**(code **)(*param_1 + 0xb0))(param_1,param_2);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c616a FUN_1482c616a body=999 status=ok
// SIG undefined FUN_1482c616a(void)

void FUN_1482c616a(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  code **ppcVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_278 [44];
  uint local_24c;
  longlong *local_248;
  longlong *local_240;
  code *local_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1dc;
  longlong local_1d8 [2];
  longlong *local_1c8;
  longlong local_1b8 [4];
  code *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_178;
  longlong local_170;
  uint uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  int local_140;
  undefined4 local_13c;
  longlong local_138 [2];
  longlong *local_128;
  longlong local_118 [4];
  longlong local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [4];
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1482c6552(param_1 + 0x198,
                *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x24));
  lVar2 = *(longlong *)(param_1 + 8);
  uVar11 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
  uVar8 = 0;
  if ((uVar11 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
    uVar9 = 1;
    uVar4 = 1;
    if (1 < (int)uVar11) {
      uVar9 = uVar11;
    }
    do {
      uVar8 = uVar9;
      if (uVar9 == uVar4) break;
      uVar7 = uVar4 >> 9;
      uVar10 = uVar4 & 0x1ff;
      uVar8 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x28))[uVar7] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  if (uVar8 == uVar11) {
LAB_1482c64d7:
    if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_248 = local_1b8;
  local_240 = local_118;
  local_24c = uVar11;
LAB_1482c6210:
  lVar3 = *(longlong *)(param_1 + 0x198);
  lVar12 = (longlong)(int)uVar8 * 0x50;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar12);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar12);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar12);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar12);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + lVar12) = 0;
  ((undefined8 *)(lVar3 + lVar12))[1] = 0;
  local_170 = *(longlong *)(param_1 + 8);
  local_188 = 0;
  local_178 = &PTR_LAB_149f3aae0;
  local_198 = FUN_146be9588;
  local_238 = (code *)(local_170 + 0xb8);
  uStack_230 = CONCAT44(uStack_230._4_4_,uVar8);
  uStack_168 = uVar8;
  FUN_146be94ac(local_f8,&local_238,&local_198);
  local_148 = 0xffffffffffffffff;
  local_138[0] = 0;
  local_128 = (longlong *)0x0;
  local_178 = (undefined **)local_98;
  local_188 = local_a8;
  uStack_180 = uStack_a0;
  local_198 = local_b8;
  uStack_190 = uStack_b0;
  uStack_168 = uStack_88;
  uStack_164 = uStack_84;
  local_160 = local_80;
  uStack_15c = uStack_7c;
  uStack_158 = uStack_78;
  uStack_154 = uStack_74;
  local_150 = local_70;
  FUN_146be971a(local_138,local_f8);
  local_13c = 0;
  FUN_146bfd1f0(&local_198);
  local_1e8 = 0xffffffffffffffff;
  local_1d8[0] = 0;
  local_1c8 = (longlong *)0x0;
  local_218 = local_70;
  local_238 = (code *)CONCAT44(uStack_8c,local_90);
  uStack_230 = CONCAT44(uStack_84,uStack_88);
  uStack_220 = CONCAT44(uStack_74,uStack_78);
  local_210 = local_90;
  uStack_20c = uStack_8c;
  uStack_208 = uStack_88;
  uStack_204 = uStack_84;
  local_200 = local_80;
  uStack_1fc = uStack_7c;
  uStack_1f8 = uStack_78;
  uStack_1f4 = uStack_74;
  local_1f0 = local_70;
  FUN_146be971a(local_1d8,local_f8);
  local_1dc = 0;
  ppcVar5 = &local_238;
  do {
    FUN_146bfd1f0(ppcVar5);
    if (local_198 == local_238) {
      if ((int)uStack_190 == (int)uStack_230) {
        if ((int)uStack_180 == (int)uStack_220) {
          if (uStack_180._4_4_ == uStack_220._4_4_) break;
        }
      }
    }
    FUN_1482c65c2(*(longlong *)(param_1 + 0x198) + lVar12,
                  (int)*(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + (longlong)local_140 * 8),
                  (longlong)local_140 * 0x50 + *(longlong *)(param_1 + 0x208));
    ppcVar5 = &local_198;
  } while( true );
  if (local_1d8[0] != 0) {
    plVar6 = local_1c8;
    if (local_1c8 == (longlong *)0x0) {
      plVar6 = local_248;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_138[0] != 0) {
    plVar6 = local_128;
    if (local_128 == (longlong *)0x0) {
      plVar6 = local_240;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_f8[0] != 0) {
    plVar6 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar6 = local_d8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  uVar11 = uVar8 + 1;
  if ((int)(uVar8 + 1) < (int)local_24c) {
    uVar11 = local_24c;
  }
  do {
    uVar9 = uVar11;
    if (uVar11 - 1 == uVar8) break;
    uVar8 = uVar8 + 1;
    uVar9 = uVar8;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar8 >> 9) * 8)
                                       + (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
  uVar8 = uVar9;
  if (uVar8 == local_24c) goto LAB_1482c64d7;
  goto LAB_1482c6210;
}



// FUNCTION 1482c6552 FUN_1482c6552 body=110 status=ok
// SIG undefined FUN_1482c6552(void)

void FUN_1482c6552(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14830248c(param_1,iVar1);
    }
    FUN_148302475((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148302520(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482c65c2 FUN_1482c65c2 body=194 status=ok
// SIG undefined FUN_1482c65c2(void)

void FUN_1482c65c2(double *param_1,double param_2,double *param_3)

{
  *param_1 = *param_3 * param_2 + *param_1;
  param_1[1] = param_3[1] * param_2 + param_1[1];
  param_1[2] = param_3[2] * param_2 + param_1[2];
  param_1[3] = param_3[3] * param_2 + param_1[3];
  param_1[4] = param_3[4] * param_2 + param_1[4];
  param_1[5] = param_3[5] * param_2 + param_1[5];
  param_1[6] = param_3[6] * param_2 + param_1[6];
  param_1[7] = param_3[7] * param_2 + param_1[7];
  param_1[8] = param_3[8] * param_2 + param_1[8];
  param_1[9] = param_2 * param_3[9] + param_1[9];
  return;
}



// FUNCTION 1482c6684 FUN_1482c6684 body=634 status=ok
// SIG undefined FUN_1482c6684(void)

void FUN_1482c6684(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x156) == '\x01') {
    local_68 = *(undefined8 *)(param_1 + 400);
    local_60 = param_1;
    if (*(char *)(param_1 + 200) == '\x01') {
      plVar1 = (longlong *)(param_1 + 0x10);
      lVar2 = param_1 + 0x20;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = lVar2;
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar8 = *(int *)(param_1 + 0x38);
      }
      uStack_70 = CONCAT44(uStack_3c,uStack_40);
      local_78 = local_48;
      uVar3 = local_78;
      local_88 = (undefined4)local_58;
      uStack_84 = local_58._4_4_;
      uStack_80 = (undefined4)uStack_50;
      uStack_7c = uStack_50._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar5 = local_78._4_4_;
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar8) || (local_78 = uVar3, uStack_50 != lVar2)) {
        do {
          local_78 = uVar3;
          FUN_1482c6900(&local_68,*(undefined4 *)(*local_90 + (longlong)iVar5 * 0x28));
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != plVar1 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar8));
      }
    }
    else {
      lVar2 = *(longlong *)(param_1 + 8);
      uVar9 = *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4);
      uVar10 = 0;
      if ((uVar9 != 0) &&
         (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x1d8) - 1U))) {
        uVar11 = 1;
        uVar6 = 1;
        if (1 < (int)uVar9) {
          uVar11 = uVar9;
        }
        do {
          uVar10 = uVar11;
          if (uVar11 == uVar6) break;
          uVar7 = uVar6 >> 9;
          uVar12 = uVar6 & 0x1ff;
          uVar10 = uVar6;
          uVar6 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x1d8))[uVar7] +
                                             (ulonglong)uVar12 * 2) - 1U));
      }
      if (uVar10 != uVar9) {
        plVar1 = *(longlong **)(lVar2 + 0x208);
        do {
          if (*(int *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                        (ulonglong)(uVar10 >> 9) * 8) + 0xc + (ulonglong)((uVar10 & 0x1ff) << 4)) ==
              -1) {
LAB_1482c68a9:
            FUN_1482c6900(&local_68,uVar10);
          }
          else {
            cVar4 = FUN_146c13702(*(longlong *)(param_1 + 8),uVar10);
            if (plVar1 != (longlong *)0x0) {
              if ((cVar4 != '\0') ||
                 (cVar4 = (**(code **)(*plVar1 + 0x98))(plVar1,uVar10), cVar4 != '\0'))
              goto LAB_1482c68a9;
              cVar4 = (**(code **)(*plVar1 + 0x80))(plVar1,uVar10);
            }
            if (cVar4 != '\0') goto LAB_1482c68a9;
          }
          uVar11 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)uVar9) {
            uVar11 = uVar9;
          }
          do {
            uVar6 = uVar11;
            if (uVar11 - 1 == uVar10) break;
            uVar10 = uVar10 + 1;
            uVar6 = uVar10;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar2 + 0x1d8) +
                                                 (ulonglong)(uVar10 >> 9) * 8) +
                                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
          uVar10 = uVar6;
        } while (uVar10 != uVar9);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482c6900 FUN_1482c6900 body=845 status=ok
// SIG undefined FUN_1482c6900(void)

void FUN_1482c6900(double *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double *pdVar11;
  undefined1 auStack_198 [40];
  double *local_170;
  uint *local_168;
  double *local_160;
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
  undefined1 local_100 [24];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_a8;
  int local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar5 = param_1[1];
  lVar6 = *(longlong *)((longlong)dVar5 + 8);
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar9 = (ulonglong)((param_2 & 0x1ff) << 4);
  uVar3 = *(uint *)(lVar7 + 4 + uVar9);
  iVar4 = *(int *)(lVar7 + 0xc + uVar9);
  lVar8 = *(longlong *)
           (*(longlong *)(lVar6 + 0x10) + (ulonglong)(*(uint *)(lVar7 + uVar9) >> 9) * 8);
  uVar10 = (ulonglong)*(uint *)(lVar7 + uVar9) & 0x1ff;
  local_b8 = *(undefined8 *)(lVar8 + 0x10 + uVar10 * 0x18);
  puVar1 = (undefined8 *)(lVar8 + uVar10 * 0x18);
  local_c8 = *puVar1;
  uStack_c0 = puVar1[1];
  lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar10 = (ulonglong)uVar3 & 0x1ff;
  local_d8 = *(undefined8 *)(lVar8 + 0x10 + uVar10 * 0x18);
  puVar2 = (undefined4 *)(lVar8 + uVar10 * 0x18);
  local_e8 = *puVar2;
  uStack_e4 = puVar2[1];
  uStack_e0 = puVar2[2];
  uStack_dc = puVar2[3];
  local_170 = param_1;
  local_a8 = param_2;
  FUN_146c13dec(lVar6,local_100,*(undefined4 *)(lVar7 + 8 + uVar9));
  FUN_1482bb582(&local_150,&local_c8,&local_e8,local_100);
  local_168 = &local_a8;
  local_160 = &local_150;
  FUN_1482f6104((longlong)dVar5 + 0x1a8,&local_a4);
  lVar6 = *(longlong *)((longlong)dVar5 + 0x1a8) + (longlong)local_a4 * 0x60;
  pdVar11 = (double *)(lVar6 + 8);
  if (iVar4 == -1) {
    local_150 = *pdVar11;
    local_148 = *(double *)(lVar6 + 0x10);
    local_140 = *(double *)(lVar6 + 0x18);
    local_138 = *(double *)(lVar6 + 0x20);
    local_130 = *(double *)(lVar6 + 0x28);
    local_128 = *(double *)(lVar6 + 0x30);
    local_120 = *(double *)(lVar6 + 0x38);
    local_118 = *(double *)(lVar6 + 0x40);
    local_110 = *(double *)(lVar6 + 0x48);
    local_108 = *(double *)(lVar6 + 0x50);
  }
  else {
    FUN_146c13dec(*(undefined8 *)((longlong)dVar5 + 8),&local_168,iVar4);
    FUN_1482bb582(&local_150,&local_c8,&local_e8,&local_168);
    local_150 = local_150 + *pdVar11;
    *pdVar11 = local_150;
    local_148 = local_148 + *(double *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x10) = local_148;
    local_140 = local_140 + *(double *)(lVar6 + 0x18);
    *(double *)(lVar6 + 0x18) = local_140;
    local_138 = local_138 + *(double *)(lVar6 + 0x20);
    *(double *)(lVar6 + 0x20) = local_138;
    local_130 = local_130 + *(double *)(lVar6 + 0x28);
    *(double *)(lVar6 + 0x28) = local_130;
    local_128 = local_128 + *(double *)(lVar6 + 0x30);
    *(double *)(lVar6 + 0x30) = local_128;
    local_120 = local_120 + *(double *)(lVar6 + 0x38);
    *(double *)(lVar6 + 0x38) = local_120;
    local_118 = local_118 + *(double *)(lVar6 + 0x40);
    *(double *)(lVar6 + 0x40) = local_118;
    local_110 = local_110 + *(double *)(lVar6 + 0x48);
    *(double *)(lVar6 + 0x48) = local_110;
    local_108 = local_108 + *(double *)(lVar6 + 0x50);
    *(double *)(lVar6 + 0x50) = local_108;
  }
  dVar5 = *local_170;
  *pdVar11 = local_150 * dVar5;
  *(double *)(lVar6 + 0x10) = local_148 * dVar5;
  *(double *)(lVar6 + 0x18) = local_140 * dVar5;
  *(double *)(lVar6 + 0x20) = local_138 * dVar5;
  *(double *)(lVar6 + 0x28) = local_130 * dVar5;
  *(double *)(lVar6 + 0x30) = local_128 * dVar5;
  *(double *)(lVar6 + 0x38) = local_120 * dVar5;
  *(double *)(lVar6 + 0x40) = local_118 * dVar5;
  *(double *)(lVar6 + 0x48) = local_110 * dVar5;
  *(double *)(lVar6 + 0x50) = local_108 * dVar5;
  if ((local_a0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c6c4e FUN_1482c6c4e body=726 status=ok
// SIG undefined FUN_1482c6c4e(void)

void FUN_1482c6c4e(longlong param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_e8 [32];
  double *local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar8 = *(int *)(*(longlong *)(param_1 + 8) + 0x140) * 0x200 +
          *(int *)(*(longlong *)(param_1 + 8) + 0x144);
  FUN_1482c6552(param_1 + 0x208,iVar8);
  FUN_1400bd09c(param_1 + 0x1f8,iVar8,1);
  lVar2 = *(longlong *)(param_1 + 8);
  uVar7 = *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144);
  uVar10 = 0;
  if ((uVar7 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x148) - 1U))) {
    uVar11 = 1;
    uVar4 = 1;
    if (1 < (int)uVar7) {
      uVar11 = uVar7;
    }
    do {
      uVar10 = uVar11;
      if (uVar11 == uVar4) break;
      uVar6 = uVar4 >> 9;
      uVar9 = uVar4 & 0x1ff;
      uVar10 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x148))[uVar6] +
                                         (ulonglong)uVar9 * 2) - 1U));
  }
  if (uVar10 != uVar7) {
    do {
      local_c8 = &local_c0;
      FUN_146c1477c(*(undefined8 *)(param_1 + 8),uVar10,&local_a8,
                    (longlong)(int)uVar10 * 8 + *(longlong *)(param_1 + 0x1f8));
      dVar12 = local_a8 * local_a0;
      dVar15 = local_a8 * local_98;
      dVar13 = local_a0 * local_98;
      lVar3 = *(longlong *)(param_1 + 0x208);
      lVar5 = (longlong)(int)uVar10 * 0x50;
      *(double *)(lVar3 + lVar5) = local_a8 * local_a8;
      *(double *)(lVar3 + 8 + lVar5) = dVar12;
      *(double *)(lVar3 + 0x10 + lVar5) = dVar15;
      dVar16 = dVar15 * local_b0 + local_a8 * local_a8 * local_c0 + dVar12 * local_b8;
      *(double *)(lVar3 + 0x18 + lVar5) = local_a0 * local_a0;
      *(double *)(lVar3 + 0x20 + lVar5) = dVar13;
      dVar14 = dVar13 * local_b0 + dVar12 * local_c0 + local_a0 * local_a0 * local_b8;
      *(double *)(lVar3 + 0x28 + lVar5) = local_98 * local_98;
      dVar12 = local_98 * local_98 * local_b0 + dVar15 * local_c0 + dVar13 * local_b8;
      pdVar1 = (double *)(lVar3 + 0x30 + lVar5);
      *pdVar1 = -dVar16;
      pdVar1[1] = -dVar14;
      *(double *)(lVar3 + 0x40 + lVar5) = -dVar12;
      *(double *)(lVar3 + 0x48 + lVar5) = local_b0 * dVar12 + local_c0 * dVar16 + local_b8 * dVar14;
      uVar11 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar7) {
        uVar11 = uVar7;
      }
      do {
        uVar4 = uVar11;
        if (uVar11 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar4 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar2 + 0x148) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      uVar10 = uVar4;
    } while (uVar10 != uVar7);
  }
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482c6f26 FUN_1482c6f26 body=307 status=ok
// SIG undefined FUN_1482c6f26(void)

double * FUN_1482c6f26(double *param_1,double *param_2,double *param_3)

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
  
  dVar7 = *param_2 * *param_2;
  *param_1 = dVar7;
  dVar6 = *param_2 * param_2[1];
  param_1[1] = dVar6;
  dVar5 = *param_2 * param_2[2];
  param_1[2] = dVar5;
  dVar8 = param_2[1] * param_2[1];
  param_1[3] = dVar8;
  dVar9 = param_2[1] * param_2[2];
  param_1[4] = dVar9;
  dVar3 = param_2[2] * param_2[2];
  param_1[5] = dVar3;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  dVar4 = *param_3;
  dVar1 = param_3[1];
  dVar2 = param_3[2];
  dVar7 = dVar5 * dVar2 + dVar7 * dVar4 + dVar6 * dVar1;
  dVar8 = dVar9 * dVar2 + dVar6 * dVar4 + dVar8 * dVar1;
  dVar4 = dVar3 * dVar2 + dVar5 * dVar4 + dVar9 * dVar1;
  param_1[6] = -dVar7;
  param_1[7] = -dVar8;
  param_1[8] = -dVar4;
  param_1[9] = dVar4 * param_3[2] + dVar7 * *param_3 + dVar8 * param_3[1];
  return param_1;
}



// FUNCTION 1482c705a FUN_1482c705a body=284 status=ok
// SIG undefined FUN_1482c705a(void)

undefined8 FUN_1482c705a(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *param_3;
  FUN_1482c7178(param_2,(longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x198),
                (longlong)param_3[1] * 0x50 + *(longlong *)(param_1 + 0x198));
  if (*(char *)(param_1 + 0x154) == '\0') {
    lVar2 = (longlong)param_3[2];
    if (lVar2 != -1) {
      FUN_1482c65c2(param_2,*(ulonglong *)(*(longlong *)(param_1 + 0x1f8) + lVar2 * 8) ^
                            0x8000000000000000,lVar2 * 0x50 + *(longlong *)(param_1 + 0x208));
    }
    lVar2 = (longlong)param_3[3];
    if (lVar2 != -1) {
      FUN_1482c65c2(param_2,*(ulonglong *)(*(longlong *)(param_1 + 0x1f8) + lVar2 * 8) ^
                            0x8000000000000000,lVar2 * 0x50 + *(longlong *)(param_1 + 0x208));
    }
  }
  if (*(char *)(param_1 + 0x156) == '\x01') {
    local_40 = param_1;
    local_38 = param_2;
    FUN_1482c721a(&local_40,iVar1);
    FUN_1482c721a(&local_40,param_3[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c7178 FUN_1482c7178 body=161 status=ok
// SIG undefined FUN_1482c7178(void)

double * FUN_1482c7178(double *param_1,double *param_2,double *param_3)

{
  *param_1 = *param_2 + *param_3;
  param_1[1] = param_2[1] + param_3[1];
  param_1[2] = param_2[2] + param_3[2];
  param_1[3] = param_2[3] + param_3[3];
  param_1[4] = param_2[4] + param_3[4];
  param_1[5] = param_2[5] + param_3[5];
  param_1[6] = param_2[6] + param_3[6];
  param_1[7] = param_2[7] + param_3[7];
  param_1[8] = param_2[8] + param_3[8];
  param_1[9] = param_2[9] + param_3[9];
  return param_1;
}



// FUNCTION 1482c721a FUN_1482c721a body=357 status=ok
// SIG undefined FUN_1482c721a(void)

void FUN_1482c721a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  lVar4 = *(longlong *)(lVar1 + 8) + 0xb8;
  FUN_146be983e(&local_60,lVar4,param_2,0);
  if ((((local_60 != lVar4) || (local_58 != param_2)) || ((int)local_48 != -1)) ||
     (local_48._4_4_ != -1)) {
    do {
      if (*(int *)(lVar1 + 0x1b0) != *(int *)(lVar1 + 0x1dc)) {
        lVar2 = *(longlong *)(lVar1 + 0x1e8);
        if (*(longlong *)(lVar1 + 0x1e8) == 0) {
          lVar2 = lVar1 + 0x1e0;
        }
        iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0x1f0) - 1U & local_40) * 4);
        if (iVar3 != -1) {
          do {
            lVar2 = *(longlong *)(lVar1 + 0x1a8) + (longlong)iVar3 * 0x60;
            if (*(uint *)(*(longlong *)(lVar1 + 0x1a8) + (longlong)iVar3 * 0x60) == local_40) {
              if (lVar2 != -8 && lVar2 != 0) {
                FUN_1482bb79e(param_1[1]);
              }
              break;
            }
            iVar3 = *(int *)(lVar2 + 0x58);
          } while (iVar3 != -1);
        }
      }
      if (local_50 == 0) {
        local_54 = 0xffffffff;
        local_48 = 0xffffffffffffffff;
        local_48._4_4_ = -1;
        local_48._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_60);
      }
    } while (((local_60 != lVar4) || (local_58 != param_2)) ||
            (((int)local_48 != -1 || (local_48._4_4_ != -1))));
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482c7380 FUN_1482c7380 body=1068 status=ok
// SIG undefined FUN_1482c7380(void)

void FUN_1482c7380(longlong param_1)

{
  undefined4 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x1d0) * 0x200 +
           *(int *)(*(longlong *)(param_1 + 8) + 0x1d4);
  FUN_1482c77ae(param_1 + 0x220,iVar10);
  FUN_146bd223a(param_1 + 0x238);
  local_d8 = (double)CONCAT44(local_d8._4_4_,0xffffffff);
  FUN_1448156a8(param_1 + 600,&local_d8,iVar10);
  *(undefined4 *)(param_1 + 0x250) = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_d8 = -NAN;
  FUN_1482c781a(&local_78,&local_d8,iVar10);
  lVar8 = *(longlong *)(param_1 + 8);
  uVar9 = *(int *)(lVar8 + 0x1d0) * 0x200 + *(int *)(lVar8 + 0x1d4);
  uVar11 = 0;
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x1d8) - 1U))) {
    uVar12 = 1;
    uVar5 = 1;
    if (1 < (int)uVar9) {
      uVar12 = uVar9;
    }
    do {
      uVar11 = uVar12;
      if (uVar12 == uVar5) break;
      uVar7 = uVar5 >> 9;
      uVar13 = uVar5 & 0x1ff;
      uVar11 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x1d8))[uVar7] +
                                         (ulonglong)uVar13 * 2) - 1U));
  }
  if (uVar11 != uVar9) {
    do {
      puVar1 = (undefined4 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8)
               + (ulonglong)((uVar11 & 0x1ff) << 4));
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
      FUN_1482c705a(param_1,&local_d8,&local_88);
      local_110 = uStack_84;
      local_118 = local_88;
      FUN_1482c788c(param_1,&local_f0,uVar11,&local_d8);
      dVar3 = local_e0 * local_98 + local_f0 * local_a8 + dStack_e8 * dStack_a0;
      lVar6 = (longlong)(int)uVar11;
      *(float *)(local_78 + lVar6 * 8) =
           (float)(dVar3 + dVar3 +
                   (dStack_b0 * local_e0 + local_c8 * local_f0 + local_b8 * dStack_e8) * local_e0 +
                   (local_c8 * local_e0 + local_d8 * local_f0 + dStack_d0 * dStack_e8) * local_f0 +
                   (local_b8 * local_e0 + dStack_d0 * local_f0 + dStack_c0 * dStack_e8) * dStack_e8
                  + dStack_90);
      *(uint *)(local_78 + 4 + lVar6 * 8) = uVar11;
      local_108 = local_f0;
      dVar3 = local_108;
      uStack_100 = dStack_e8;
      dVar4 = uStack_100;
      local_f8 = local_e0;
      lVar14 = *(longlong *)(param_1 + 0x220);
      lVar6 = lVar6 * 0x70;
      *(uint *)(lVar14 + lVar6) = uVar11;
      pdVar2 = (double *)(lVar14 + 8 + lVar6);
      *pdVar2 = local_d8;
      pdVar2[1] = dStack_d0;
      pdVar2 = (double *)(lVar14 + 0x18 + lVar6);
      *pdVar2 = local_c8;
      pdVar2[1] = dStack_c0;
      pdVar2 = (double *)(lVar14 + 0x28 + lVar6);
      *pdVar2 = local_b8;
      pdVar2[1] = dStack_b0;
      pdVar2 = (double *)(lVar14 + 0x38 + lVar6);
      *pdVar2 = local_a8;
      pdVar2[1] = dStack_a0;
      pdVar2 = (double *)(lVar14 + 0x48 + lVar6);
      *pdVar2 = local_98;
      pdVar2[1] = dStack_90;
      *(double *)(lVar14 + 0x68 + lVar6) = local_e0;
      local_108._0_4_ = SUB84(local_f0,0);
      local_108._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
      uStack_100._0_4_ = SUB84(dStack_e8,0);
      uStack_100._4_4_ = (undefined4)((ulonglong)dStack_e8 >> 0x20);
      puVar1 = (undefined4 *)(lVar14 + 0x58 + lVar6);
      *puVar1 = (undefined4)local_108;
      puVar1[1] = local_108._4_4_;
      puVar1[2] = (undefined4)uStack_100;
      puVar1[3] = uStack_100._4_4_;
      uVar12 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar9) {
        uVar12 = uVar9;
      }
      do {
        uVar5 = uVar12;
        if (uVar12 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar5 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar8 + 0x1d8) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar5;
      local_108 = dVar3;
      uStack_100 = dVar4;
    } while (uVar11 != uVar9);
  }
  FUN_148302813(local_78,uStack_70 & 0xffffffff);
  lVar8 = (longlong)(int)uStack_70;
  if (0 < lVar8) {
    lVar14 = 0;
    do {
      uVar11 = *(uint *)(local_78 + 4 + lVar14 * 8);
      if (((-1 < (int)uVar11) &&
          (lVar6 = *(longlong *)(param_1 + 8),
          (int)uVar11 < *(int *)(lVar6 + 0x1d0) * 0x200 + *(int *)(lVar6 + 0x1d4))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar6 + 0x1d8) + (ulonglong)(uVar11 >> 9) * 8) +
                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        FUN_146b9cbf0(param_1 + 0x230,uVar11,*(undefined4 *)(local_78 + lVar14 * 8));
      }
      lVar14 = lVar14 + 1;
    } while (lVar8 != lVar14);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482c77ae FUN_1482c77ae body=106 status=ok
// SIG undefined FUN_1482c77ae(void)

void FUN_1482c77ae(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483025f8(param_1,iVar1);
    }
    FUN_1483025ce((longlong)iVar1 * 0x70 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148302688(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482c781a FUN_1482c781a body=113 status=ok
// SIG undefined FUN_1482c781a(void)

void FUN_1482c781a(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_14830272e(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14830278e(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  }
  return;
}



// FUNCTION 1482c788c FUN_1482c788c body=2579 status=ok
// SIG undefined FUN_1482c788c(void)

double * FUN_1482c788c(longlong param_1,double *param_2,ulonglong param_3,double *param_4,
                      uint param_5,uint param_6)

{
  undefined4 *puVar1;
  double dVar2;
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
  double dVar13;
  char cVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_198 [32];
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 uStack_130;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*(char *)(param_1 + 0x268) == '\x01') && (*(char *)(param_1 + 0x155) == '\x01')) {
    lVar15 = *(longlong *)(param_1 + 8);
    if (*(int *)(*(longlong *)(*(longlong *)(lVar15 + 0x1c0) + (param_3 >> 9 & 0x7fffff) * 8) + 0xc
                + (ulonglong)(((uint)param_3 & 0x1ff) << 4)) != -1) {
      if (*(char *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)param_5) == '\x01') {
        lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)(param_5 >> 9) * 8);
      }
      else {
        if (*(char *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)param_6) != '\x01')
        goto LAB_1482c79ab;
        lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)(param_6 >> 9) * 8);
        param_5 = param_6;
      }
      param_2[2] = *(double *)(lVar15 + 0x10 + (ulonglong)(param_5 & 0x1ff) * 0x18);
      puVar1 = (undefined4 *)(lVar15 + (ulonglong)(param_5 & 0x1ff) * 0x18);
      uVar19 = *puVar1;
      uVar20 = puVar1[1];
      uVar21 = puVar1[2];
      uVar22 = puVar1[3];
      goto LAB_1482c79de;
    }
    if (*(int *)(param_1 + 0x150) == 1) goto LAB_1482c79ab;
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)(param_5 >> 9) * 8);
    uVar18 = (ulonglong)(param_5 & 0x1ff);
    lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)(param_6 >> 9) * 8);
    uVar17 = (ulonglong)(param_6 & 0x1ff);
    dVar24 = (*(double *)(lVar11 + 0x10 + uVar18 * 0x18) +
             *(double *)(lVar15 + 0x10 + uVar17 * 0x18)) * 0.5;
    dVar23 = (*(double *)(lVar11 + 8 + uVar18 * 0x18) + *(double *)(lVar15 + 8 + uVar17 * 0x18)) *
             0.5;
    dVar2 = (*(double *)(lVar11 + uVar18 * 0x18) + *(double *)(lVar15 + uVar17 * 0x18)) * 0.5;
  }
  else {
LAB_1482c79ab:
    iVar10 = *(int *)(param_1 + 0x150);
    if (iVar10 != 1) {
      if (iVar10 == 2) {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        lVar11 = *(longlong *)(lVar15 + (ulonglong)(param_5 >> 9) * 8);
        lVar15 = *(longlong *)(lVar15 + (ulonglong)(param_6 >> 9) * 8);
        uVar18 = (ulonglong)(param_5 & 0x1ff);
        uVar17 = (ulonglong)(param_6 & 0x1ff);
        local_d8 = (*(double *)(lVar11 + 0x10 + uVar18 * 0x18) +
                   *(double *)(lVar15 + 0x10 + uVar17 * 0x18)) * 0.5;
        dStack_e0 = (*(double *)(lVar11 + 8 + uVar18 * 0x18) +
                    *(double *)(lVar15 + 8 + uVar17 * 0x18)) * 0.5;
        local_e8 = (*(double *)(lVar11 + uVar18 * 0x18) + *(double *)(lVar15 + uVar17 * 0x18)) * 0.5
        ;
        if ((*(char *)(param_1 + 0x138) == '\x02') &&
           (plVar16 = *(longlong **)(param_1 + 0xd0), plVar16 != (longlong *)0x0)) {
LAB_1482c7cfa:
          (**(code **)(*plVar16 + 8))(plVar16,param_2,&local_e8,0xffffffff);
          goto LAB_1482c7d2c;
        }
        param_2[2] = local_d8;
        dVar2 = local_e8;
        dVar23 = dStack_e0;
      }
      else {
        if (iVar10 != 0) {
          param_2[2] = DAT_14c8464f0;
          uVar19 = (undefined4)DAT_14c8464e0;
          uVar20 = DAT_14c8464e0._4_4_;
          uVar21 = (undefined4)DAT_14c8464e8;
          uVar22 = DAT_14c8464e8._4_4_;
LAB_1482c79de:
          *(undefined4 *)param_2 = uVar19;
          *(undefined4 *)((longlong)param_2 + 4) = uVar20;
          *(undefined4 *)(param_2 + 1) = uVar21;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar22;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_198);
        }
        local_d8 = DAT_14c8464f0;
        local_e8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dStack_e0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_178 = param_4[8];
        uVar21 = SUB84(local_178,0);
        uVar22 = (undefined4)((ulonglong)local_178 >> 0x20);
        local_178 = -local_178;
        dVar2 = param_4[6];
        dVar23 = param_4[7];
        uVar19 = SUB84(dVar23,0);
        uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
        uVar26 = SUB84(dVar2,0);
        uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
        cVar14 = FUN_148301e70(param_4,&local_e8,-dVar2,-dVar23);
        if (cVar14 == '\0') {
          lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
          lVar11 = *(longlong *)(lVar15 + (ulonglong)(param_5 >> 9) * 8);
          uVar17 = (ulonglong)(param_5 & 0x1ff);
          dVar2 = *(double *)(lVar11 + uVar17 * 0x18);
          dVar23 = *(double *)(lVar11 + 8 + uVar17 * 0x18);
          dVar24 = *(double *)(lVar11 + 0x10 + uVar17 * 0x18);
          lVar15 = *(longlong *)(lVar15 + (ulonglong)(param_6 >> 9) * 8);
          uVar17 = (ulonglong)(param_6 & 0x1ff);
          local_168 = *(double *)(lVar15 + uVar17 * 0x18);
          local_160 = *(double *)(lVar15 + 8 + uVar17 * 0x18);
          local_140 = *(double *)(lVar15 + 0x10 + uVar17 * 0x18);
          local_110 = (dVar24 + local_140) * 0.5;
          dStack_118 = (dVar23 + local_160) * 0.5;
          local_120 = (dVar2 + local_168) * 0.5;
          dVar3 = local_120;
          dVar4 = dStack_118;
          dVar5 = local_110;
          if ((*(char *)(param_1 + 0x138) == '\x02') &&
             (plVar16 = *(longlong **)(param_1 + 0xd0), dVar3 = local_120, dVar4 = dStack_118,
             dVar5 = local_110, plVar16 != (longlong *)0x0)) {
            (**(code **)(*plVar16 + 8))(plVar16,&local_108,&local_120,0xffffffff);
            uVar26 = SUB84(param_4[6],0);
            uVar27 = (undefined4)((ulonglong)param_4[6] >> 0x20);
            uVar19 = SUB84(param_4[7],0);
            uVar20 = (undefined4)((ulonglong)param_4[7] >> 0x20);
            uVar21 = SUB84(param_4[8],0);
            uVar22 = (undefined4)((ulonglong)param_4[8] >> 0x20);
            dVar3 = local_108;
            dVar4 = dStack_100;
            dVar5 = local_f8;
          }
          local_f8 = dVar5;
          dStack_100 = dVar4;
          local_108 = dVar3;
          local_138 = (double)CONCAT44(uVar20,uVar19);
          uStack_130 = 0;
          dVar3 = *param_4;
          dVar4 = param_4[1];
          dVar5 = param_4[2];
          dVar6 = param_4[3];
          dVar7 = param_4[4];
          dVar8 = param_4[5];
          dVar25 = dVar24 * (double)CONCAT44(uVar22,uVar21) +
                   dVar2 * (double)CONCAT44(uVar27,uVar26) +
                   dVar23 * (double)CONCAT44(uVar20,uVar19);
          dVar13 = local_140 * (double)CONCAT44(uVar22,uVar21) +
                   local_168 * (double)CONCAT44(uVar27,uVar26) + local_160 * local_138;
          dVar12 = local_f8 * (double)CONCAT44(uVar22,uVar21) +
                   local_108 * (double)CONCAT44(uVar27,uVar26) + local_138 * dStack_100;
          dVar9 = param_4[9];
          dVar25 = dVar25 + dVar25 +
                   (dVar8 * dVar24 + dVar5 * dVar2 + dVar23 * dVar7) * dVar24 +
                   (dVar5 * dVar24 + dVar3 * dVar2 + dVar23 * dVar4) * dVar2 +
                   (dVar7 * dVar24 + dVar4 * dVar2 + dVar23 * dVar6) * dVar23 + dVar9;
          dVar13 = dVar13 + dVar13 +
                   (dVar8 * local_140 + dVar5 * local_168 + local_160 * dVar7) * local_140 +
                   (dVar5 * local_140 + dVar3 * local_168 + local_160 * dVar4) * local_168 +
                   (dVar7 * local_140 + dVar4 * local_168 + local_160 * dVar6) * local_160 + dVar9;
          dVar9 = dVar12 + dVar12 +
                  (dVar8 * local_f8 + dVar5 * local_108 + dVar7 * dStack_100) * local_f8 +
                  (dVar5 * local_f8 + dVar3 * local_108 + dVar4 * dStack_100) * local_108 +
                  (dVar7 * local_f8 + dVar4 * local_108 + dVar6 * dStack_100) * dStack_100 + dVar9;
          dVar3 = dVar25;
          if (dVar13 <= dVar25) {
            dVar3 = dVar13;
          }
          if (dVar9 <= dVar3) {
            dVar3 = dVar9;
          }
          local_158 = dVar2;
          local_150 = dVar23;
          local_148 = dVar24;
          if ((dVar3 == dVar25) && (!NAN(dVar3) && !NAN(dVar25))) {
            *param_2 = dVar2;
            param_2[1] = dVar23;
            param_2[2] = dVar24;
            goto LAB_1482c7d2c;
          }
          if ((dVar3 == dVar13) && (!NAN(dVar3) && !NAN(dVar13))) {
            *param_2 = local_168;
            param_2[1] = local_160;
            param_2[2] = local_140;
            goto LAB_1482c7d2c;
          }
          param_2[2] = local_f8;
          dVar2 = local_108;
          dVar23 = dStack_100;
        }
        else {
          if ((*(char *)(param_1 + 0x138) == '\x02') &&
             (plVar16 = *(longlong **)(param_1 + 0xd0), plVar16 != (longlong *)0x0))
          goto LAB_1482c7cfa;
          param_2[2] = local_d8;
          dVar2 = local_e8;
          dVar23 = dStack_e0;
        }
      }
      *param_2 = dVar2;
      param_2[1] = dVar23;
      goto LAB_1482c7d2c;
    }
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    lVar11 = *(longlong *)(lVar15 + (ulonglong)(param_5 >> 9) * 8);
    uVar17 = (ulonglong)(param_5 & 0x1ff);
    dVar2 = *(double *)(lVar11 + uVar17 * 0x18);
    dVar23 = *(double *)(lVar11 + 8 + uVar17 * 0x18);
    dVar24 = *(double *)(lVar11 + 0x10 + uVar17 * 0x18);
    lVar15 = *(longlong *)(lVar15 + (ulonglong)(param_6 >> 9) * 8);
    uVar17 = (ulonglong)(param_6 & 0x1ff);
    dVar3 = *(double *)(lVar15 + uVar17 * 0x18);
    dVar4 = param_4[1];
    dVar5 = param_4[2];
    dVar6 = param_4[4];
    dVar12 = dVar24 * param_4[8] + dVar2 * param_4[6] + dVar23 * param_4[7];
    dVar7 = *(double *)(lVar15 + 8 + uVar17 * 0x18);
    dVar8 = *(double *)(lVar15 + 0x10 + uVar17 * 0x18);
    dVar9 = param_4[8] * dVar8 + param_4[6] * dVar3 + param_4[7] * dVar7;
    local_168 = dVar2;
    if (dVar9 + dVar9 +
        (param_4[5] * dVar8 + dVar5 * dVar3 + dVar7 * dVar6) * dVar8 +
        (dVar5 * dVar8 + *param_4 * dVar3 + dVar7 * dVar4) * dVar3 +
        (dVar6 * dVar8 + dVar4 * dVar3 + param_4[3] * dVar7) * dVar7 + param_4[9] <=
        dVar12 + dVar12 +
        (param_4[5] * dVar24 + dVar5 * dVar2 + dVar23 * dVar6) * dVar24 +
        (dVar5 * dVar24 + *param_4 * dVar2 + dVar23 * dVar4) * dVar2 +
        (dVar6 * dVar24 + dVar4 * dVar2 + dVar23 * param_4[3]) * dVar23 + param_4[9]) {
      *param_2 = dVar3;
      param_2[1] = dVar7;
      param_2[2] = dVar8;
      goto LAB_1482c7d2c;
    }
  }
  *param_2 = dVar2;
  param_2[1] = dVar23;
  param_2[2] = dVar24;
LAB_1482c7d2c:
  if ((local_d0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c82a0 FUN_1482c82a0 body=7444 status=ok
// SIG undefined FUN_1482c82a0(void)

void FUN_1482c82a0(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  double dVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  uint *puVar22;
  code **ppcVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  int *piVar29;
  longlong lVar30;
  int iVar31;
  double dVar32;
  code *pcVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_468 [32];
  undefined4 *local_448;
  undefined4 local_440;
  longlong *local_438;
  double local_430;
  double local_428;
  int local_41c;
  int local_418;
  int local_414;
  longlong local_410;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_390;
  undefined4 local_388;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  double local_368;
  undefined8 local_358;
  undefined8 uStack_350;
  uint *local_348;
  undefined8 local_340;
  code *local_338;
  double dStack_330;
  undefined8 local_328;
  int iStack_320;
  int iStack_31c;
  undefined **local_318;
  double local_310;
  double dStack_308;
  int local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  double local_2f0;
  undefined8 local_2e8;
  uint local_2e0;
  undefined4 local_2dc;
  longlong local_2d8 [2];
  longlong *local_2c8;
  longlong local_2b8 [16];
  code **local_238;
  undefined8 local_230;
  undefined8 local_228;
  int iStack_220;
  undefined4 uStack_21c;
  int local_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  double local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  double local_1e0;
  undefined8 local_1d8;
  undefined4 local_1cc;
  longlong local_1c8 [2];
  longlong *local_1b8;
  longlong local_1a8 [4];
  double local_188;
  undefined8 uStack_180;
  uint *local_178;
  undefined8 local_170;
  uint local_168 [8];
  code *local_148;
  double dStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  double local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  iVar10 = *param_2;
  iVar31 = param_2[6];
  dVar32 = (double)(longlong)param_2[1];
  local_41c = param_2[7];
  local_414 = param_2[2];
  local_418 = param_2[3];
  if (*(char *)(param_1 + 0x156) != '\x01') goto LAB_1482c84ba;
  uVar16 = param_2[8];
  uVar11 = param_2[9];
  dVar13 = *(double *)(param_2 + 10);
  local_428 = dVar32;
  local_340 = dVar13;
  if (*(char *)(param_1 + 200) == '\x01') {
    local_430 = (double)(param_1 + 0x10);
    cVar15 = FUN_1482bb52e(local_430,(ulonglong)dVar13 & 0xffffffff);
    plVar21 = (longlong *)(param_1 + 0x1a8);
    if (cVar15 == '\0') {
      iVar19 = (int)((ulonglong)dVar13 >> 0x20);
      FUN_1483011e6(plVar21,(ulonglong)dVar13 & 0xffffffff);
    }
    else {
      local_338 = (code *)&local_340;
      FUN_1483010ba(plVar21,&local_228);
      iVar19 = local_340._4_4_;
    }
    if (iVar19 != -1) {
      cVar15 = FUN_1482bb52e(local_430,iVar19);
      if (cVar15 == '\0') {
        FUN_1483011e6(plVar21,local_340._4_4_);
      }
      else {
LAB_1482c9ed4:
        local_338 = (code *)((longlong)&local_340 + 4);
        FUN_1483010ba(plVar21,&local_228);
      }
    }
LAB_1482c8434:
    local_438 = (longlong *)(param_1 + 0x1a8);
    FUN_1483011e6(local_438,uVar16);
    uVar16 = uVar11;
    if (uVar11 != 0xffffffff) goto LAB_1482c8453;
  }
  else {
    local_438 = (longlong *)(param_1 + 0x1a8);
    if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
      lVar27 = param_1 + 0x1e0;
      if (*(longlong *)(param_1 + 0x1e8) != 0) {
        lVar27 = *(longlong *)(param_1 + 0x1e8);
      }
      iVar19 = *(int *)(lVar27 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & uVar16) * 4);
      if (iVar19 != -1) {
        do {
          lVar27 = *local_438 + (longlong)iVar19 * 0x60;
          if (*(uint *)(*local_438 + (longlong)iVar19 * 0x60) == uVar16) {
            if ((lVar27 + 8U & 0xfffffffffffffff7) != 0) {
              local_338 = (code *)&local_340;
              FUN_1483010ba(local_438,&local_228);
            }
            break;
          }
          iVar19 = *(int *)(lVar27 + 0x58);
        } while (iVar19 != -1);
      }
    }
    if (uVar11 != 0xffffffff) {
      if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
        lVar27 = param_1 + 0x1e0;
        if (*(longlong *)(param_1 + 0x1e8) != 0) {
          lVar27 = *(longlong *)(param_1 + 0x1e8);
        }
        iVar19 = *(int *)(lVar27 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & uVar11) * 4);
        if (iVar19 != -1) {
          do {
            lVar27 = *local_438 + (longlong)iVar19 * 0x60;
            if (*(uint *)(*local_438 + (longlong)iVar19 * 0x60) == uVar11) {
              plVar21 = local_438;
              if ((lVar27 + 8U & 0xfffffffffffffff7) != 0) goto LAB_1482c9ed4;
              break;
            }
            iVar19 = *(int *)(lVar27 + 0x58);
          } while (iVar19 != -1);
          goto LAB_1482c8434;
        }
      }
      FUN_1483011e6(local_438,uVar16);
      uVar16 = uVar11;
    }
LAB_1482c8453:
    FUN_1483011e6(local_438,uVar16);
  }
  dVar13 = *(double *)(param_1 + 400);
  pcVar33 = (code *)(*(longlong *)(param_1 + 8) + 0xb8);
  FUN_146be983e(&local_228,pcVar33,iVar10,0);
  if ((((local_228 != pcVar33) || (iStack_220 != iVar10)) || ((int)uStack_210 != -1)) ||
     (dVar32 = local_428, uStack_210._4_4_ != -1)) {
    local_430 = (double)(param_1 + 0x1e0);
    do {
      if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
        dVar32 = *(double *)(param_1 + 0x1e8);
        if (*(double *)(param_1 + 0x1e8) == 0.0) {
          dVar32 = local_430;
        }
        iVar19 = *(int *)((longlong)dVar32 +
                         (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & local_208._0_4_) * 4);
        if (iVar19 != -1) {
          lVar27 = *(longlong *)(param_1 + 8);
          lVar20 = *(longlong *)
                    (*(longlong *)(lVar27 + 0x1c0) + (ulonglong)(local_208._0_4_ >> 9) * 8);
          uVar24 = (ulonglong)((local_208._0_4_ & 0x1ff) << 4);
          uVar11 = *(uint *)(lVar20 + 4 + uVar24);
          iVar12 = *(int *)(lVar20 + 0xc + uVar24);
          do {
            lVar25 = *local_438 + (longlong)iVar19 * 0x60;
            if (*(uint *)(*local_438 + (longlong)iVar19 * 0x60) == local_208._0_4_) {
              if ((undefined8 *)(lVar25 + 8) != (undefined8 *)0x0 && lVar25 != 0) {
                lVar26 = *(longlong *)
                          (*(longlong *)(lVar27 + 0x10) +
                          (ulonglong)(*(uint *)(lVar20 + uVar24) >> 9) * 8);
                uVar17 = (ulonglong)(*(uint *)(lVar20 + uVar24) & 0x1ff);
                local_178 = *(uint **)(lVar26 + 0x10 + uVar17 * 0x18);
                pdVar2 = (double *)(lVar26 + uVar17 * 0x18);
                local_188 = *pdVar2;
                uStack_180 = pdVar2[1];
                lVar26 = *(longlong *)(*(longlong *)(lVar27 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
                uVar17 = (ulonglong)(uVar11 & 0x1ff);
                local_348 = *(uint **)(lVar26 + 0x10 + uVar17 * 0x18);
                pdVar2 = (double *)(lVar26 + uVar17 * 0x18);
                local_358 = *pdVar2;
                uStack_350 = pdVar2[1];
                FUN_146c13dec(lVar27,&local_378,*(undefined4 *)(lVar20 + 8 + uVar24));
                FUN_1482bb582(&local_338,&local_188,&local_358,&local_378);
                ppcVar23 = &local_338;
                puVar28 = (undefined8 *)(lVar25 + 8);
                for (lVar27 = 10; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *puVar28 = *ppcVar23;
                  ppcVar23 = ppcVar23 + 1;
                  puVar28 = puVar28 + 1;
                }
                if (iVar12 != -1) {
                  FUN_146c13dec(*(undefined8 *)(param_1 + 8),&local_390,iVar12);
                  FUN_1482bb582(&local_338,&local_188,&local_358,&local_390);
                  *(double *)(lVar25 + 8) = (double)local_338 + *(double *)(lVar25 + 8);
                  *(double *)(lVar25 + 0x10) = dStack_330 + *(double *)(lVar25 + 0x10);
                  *(double *)(lVar25 + 0x18) = local_328 + *(double *)(lVar25 + 0x18);
                  *(double *)(lVar25 + 0x20) =
                       (double)CONCAT44(iStack_31c,iStack_320) + *(double *)(lVar25 + 0x20);
                  *(double *)(lVar25 + 0x28) = (double)local_318 + *(double *)(lVar25 + 0x28);
                  *(double *)(lVar25 + 0x30) = local_310 + *(double *)(lVar25 + 0x30);
                  *(double *)(lVar25 + 0x38) = dStack_308 + *(double *)(lVar25 + 0x38);
                  *(double *)(lVar25 + 0x40) =
                       (double)CONCAT44(uStack_2fc,local_300) + *(double *)(lVar25 + 0x40);
                  *(double *)(lVar25 + 0x48) =
                       (double)CONCAT44(uStack_2f4,uStack_2f8) + *(double *)(lVar25 + 0x48);
                  *(double *)(lVar25 + 0x50) = local_2f0 + *(double *)(lVar25 + 0x50);
                }
                *(double *)(lVar25 + 8) = *(double *)(lVar25 + 8) * dVar13;
                *(double *)(lVar25 + 0x10) = *(double *)(lVar25 + 0x10) * dVar13;
                *(double *)(lVar25 + 0x18) = *(double *)(lVar25 + 0x18) * dVar13;
                *(double *)(lVar25 + 0x20) = *(double *)(lVar25 + 0x20) * dVar13;
                *(double *)(lVar25 + 0x28) = *(double *)(lVar25 + 0x28) * dVar13;
                *(double *)(lVar25 + 0x30) = *(double *)(lVar25 + 0x30) * dVar13;
                *(double *)(lVar25 + 0x38) = *(double *)(lVar25 + 0x38) * dVar13;
                *(double *)(lVar25 + 0x40) = *(double *)(lVar25 + 0x40) * dVar13;
                *(double *)(lVar25 + 0x48) = *(double *)(lVar25 + 0x48) * dVar13;
                *(double *)(lVar25 + 0x50) = *(double *)(lVar25 + 0x50) * dVar13;
              }
              break;
            }
            iVar19 = *(int *)(lVar25 + 0x58);
          } while (iVar19 != -1);
        }
      }
      if (local_218 == 0) {
        uStack_21c = 0xffffffff;
        uStack_210 = -NAN;
        uStack_210._4_4_ = -1;
        uStack_210._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_228);
      }
    } while (((local_228 != pcVar33) || (iStack_220 != iVar10)) ||
            (((int)uStack_210 != -1 || (dVar32 = local_428, uStack_210._4_4_ != -1))));
  }
LAB_1482c84ba:
  if (*(char *)(param_1 + 0x154) == '\x01') {
    lVar27 = *(longlong *)(param_1 + 0x198);
    lVar25 = (longlong)dVar32 * 0x50;
    lVar20 = (longlong)iVar10 * 0x50;
    dVar32 = *(double *)(lVar27 + 8 + lVar25);
    dVar13 = *(double *)(lVar27 + 0x10 + lVar25);
    dVar3 = *(double *)(lVar27 + 0x18 + lVar25);
    dVar4 = *(double *)(lVar27 + 0x20 + lVar25);
    dVar5 = *(double *)(lVar27 + 0x28 + lVar25);
    dVar6 = *(double *)(lVar27 + 0x30 + lVar25);
    dVar34 = *(double *)(lVar27 + 0x38 + lVar25);
    dVar35 = *(double *)(lVar27 + 0x40 + lVar25);
    dVar7 = *(double *)(lVar27 + 0x48 + lVar25);
    *(double *)(lVar27 + lVar20) = *(double *)(lVar27 + lVar20) + *(double *)(lVar27 + lVar25);
    *(double *)(lVar27 + 8 + lVar20) = *(double *)(lVar27 + 8 + lVar20) + dVar32;
    *(double *)(lVar27 + 0x10 + lVar20) = *(double *)(lVar27 + 0x10 + lVar20) + dVar13;
    *(double *)(lVar27 + 0x18 + lVar20) = *(double *)(lVar27 + 0x18 + lVar20) + dVar3;
    *(double *)(lVar27 + 0x20 + lVar20) = *(double *)(lVar27 + 0x20 + lVar20) + dVar4;
    *(double *)(lVar27 + 0x28 + lVar20) = *(double *)(lVar27 + 0x28 + lVar20) + dVar5;
    *(double *)(lVar27 + 0x30 + lVar20) = *(double *)(lVar27 + 0x30 + lVar20) + dVar6;
    *(double *)(lVar27 + 0x38 + lVar20) = *(double *)(lVar27 + 0x38 + lVar20) + dVar34;
    *(double *)(lVar27 + 0x40 + lVar20) = *(double *)(lVar27 + 0x40 + lVar20) + dVar35;
    *(double *)(lVar27 + 0x48 + lVar20) = *(double *)(lVar27 + 0x48 + lVar20) + dVar7;
  }
  else {
    local_310 = *(double *)(param_1 + 8);
    local_328 = 0.0;
    local_318 = &PTR_LAB_149f3aae0;
    dStack_308 = (double)CONCAT44(dStack_308._4_4_,iVar10);
    local_338 = FUN_146be9588;
    local_228 = (code *)((longlong)local_310 + 0xb8);
    local_410 = (longlong)iVar10;
    iStack_220 = iVar10;
    FUN_146be94ac(&local_188,&local_228,&local_338);
    local_2e8 = 0xffffffffffffffff;
    local_2d8[0] = 0;
    local_2c8 = (longlong *)0x0;
    local_338 = local_148;
    dStack_330 = dStack_140;
    iStack_320 = iStack_130;
    iStack_31c = iStack_12c;
    local_318 = (undefined **)local_128;
    dStack_308 = (double)CONCAT44(uStack_114,iStack_118);
    local_300 = local_110;
    uStack_2fc = uStack_10c;
    uStack_2f8 = uStack_108;
    uStack_2f4 = uStack_104;
    local_2f0 = local_100;
    FUN_146be971a(local_2d8,&local_188);
    local_2dc = 0;
    FUN_146bfd1f0(&local_338);
    local_1d8 = 0xffffffffffffffff;
    local_1c8[0] = 0;
    local_1b8 = (longlong *)0x0;
    local_228 = (code *)CONCAT44(uStack_11c,local_120);
    iStack_220 = iStack_118;
    uStack_21c = uStack_114;
    local_218 = local_110;
    uStack_214 = uStack_10c;
    uStack_210 = (double)CONCAT44(uStack_104,uStack_108);
    local_208 = local_100;
    local_200 = local_120;
    uStack_1fc = uStack_11c;
    iStack_1f8 = iStack_118;
    uStack_1f4 = uStack_114;
    local_1f0 = local_110;
    uStack_1ec = uStack_10c;
    uStack_1e8 = uStack_108;
    uStack_1e4 = uStack_104;
    local_1e0 = local_100;
    FUN_146be971a(local_1c8,&local_188);
    local_1cc = 0;
    FUN_146bfd1f0(&local_228);
    while (((uVar11 = local_2e0, local_338 != local_228 || (dStack_330._0_4_ != iStack_220)) ||
           ((iStack_320 != (int)uStack_210 || (iStack_31c != uStack_210._4_4_))))) {
      lVar25 = (longlong)(int)local_2e0;
      lVar27 = *(longlong *)(param_1 + 0x208);
      lVar20 = lVar25 * 0x50;
      dVar32 = *(double *)(lVar27 + lVar20);
      local_408 = *(double *)(lVar27 + 8 + lVar20);
      local_400 = *(double *)(lVar27 + 0x10 + lVar20);
      local_3f8 = *(double *)(lVar27 + 0x18 + lVar20);
      local_3f0 = *(double *)(lVar27 + 0x20 + lVar20);
      local_3e8 = *(double *)(lVar27 + 0x28 + lVar20);
      local_3e0 = *(double *)(lVar27 + 0x30 + lVar20);
      local_3d8 = *(double *)(lVar27 + 0x38 + lVar20);
      local_3d0 = *(double *)(lVar27 + 0x40 + lVar20);
      local_3c8 = *(double *)(lVar27 + 0x48 + lVar20);
      local_3a8 = *(double *)(*(longlong *)(param_1 + 0x1f8) + lVar25 * 8);
      uStack_3a0 = 0;
      local_448 = &local_378;
      FUN_146c1477c(*(undefined8 *)(param_1 + 8),local_2e0,&local_358,&local_340);
      local_430 = local_358 * local_358;
      local_438 = (longlong *)(local_358 * uStack_350);
      local_428 = local_358 * (double)local_348;
      local_3b0 = uStack_350 * uStack_350;
      local_3b8 = uStack_350 * (double)local_348;
      local_3c0 = (double)local_348 * (double)local_348;
      dVar5 = (double)CONCAT44(uStack_374,local_378);
      dVar6 = (double)CONCAT44(uStack_36c,uStack_370);
      dVar13 = local_428 * local_368 + local_430 * dVar5 + (double)local_438 * dVar6;
      dVar34 = local_3b8 * local_368 + (double)local_438 * dVar5 + local_3b0 * dVar6;
      dVar4 = local_3c0 * local_368 + local_428 * dVar5 + local_3b8 * dVar6;
      dVar35 = -dVar34;
      dVar3 = -dVar13;
      dVar5 = local_368 * dVar4 + dVar5 * dVar13 + dVar6 * dVar34;
      *(double *)(*(longlong *)(param_1 + 0x1f8) + lVar25 * 8) = local_340;
      lVar27 = *(longlong *)(param_1 + 0x208);
      *(double *)(lVar27 + lVar20) = local_430;
      *(longlong **)(lVar27 + 8 + lVar20) = local_438;
      *(double *)(lVar27 + 0x10 + lVar20) = local_428;
      *(double *)(lVar27 + 0x18 + lVar20) = local_3b0;
      *(double *)(lVar27 + 0x20 + lVar20) = local_3b8;
      *(double *)(lVar27 + 0x28 + lVar20) = local_3c0;
      pdVar2 = (double *)(lVar27 + 0x30 + lVar20);
      *pdVar2 = dVar3;
      pdVar2[1] = dVar35;
      dVar13 = -local_3a8;
      dVar4 = -dVar4;
      *(double *)(lVar27 + 0x40 + lVar20) = dVar4;
      *(double *)(lVar27 + 0x48 + lVar20) = dVar5;
      lVar27 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar11 >> 9) * 8);
      uVar24 = (ulonglong)(uVar11 & 0x1ff);
      local_388 = *(undefined4 *)(lVar27 + 8 + uVar24 * 0xc);
      local_390 = *(undefined8 *)(lVar27 + uVar24 * 0xc);
      lVar27 = 0;
      do {
        iVar19 = *(int *)((longlong)&local_390 + lVar27 * 4);
        if (iVar19 != iVar10) {
          lVar20 = *(longlong *)(param_1 + 0x198);
          lVar25 = (longlong)iVar19 * 0x50;
          *(double *)(lVar20 + lVar25) = *(double *)(lVar20 + lVar25) + dVar32 * dVar13;
          *(double *)(lVar20 + 8 + lVar25) = *(double *)(lVar20 + 8 + lVar25) + local_408 * dVar13;
          *(double *)(lVar20 + 0x10 + lVar25) =
               *(double *)(lVar20 + 0x10 + lVar25) + local_400 * dVar13;
          *(double *)(lVar20 + 0x18 + lVar25) =
               *(double *)(lVar20 + 0x18 + lVar25) + local_3f8 * dVar13;
          *(double *)(lVar20 + 0x20 + lVar25) =
               *(double *)(lVar20 + 0x20 + lVar25) + local_3f0 * dVar13;
          *(double *)(lVar20 + 0x28 + lVar25) =
               *(double *)(lVar20 + 0x28 + lVar25) + local_3e8 * dVar13;
          *(double *)(lVar20 + 0x30 + lVar25) =
               *(double *)(lVar20 + 0x30 + lVar25) + local_3e0 * dVar13;
          *(double *)(lVar20 + 0x38 + lVar25) =
               *(double *)(lVar20 + 0x38 + lVar25) + local_3d8 * dVar13;
          *(double *)(lVar20 + 0x40 + lVar25) =
               *(double *)(lVar20 + 0x40 + lVar25) + local_3d0 * dVar13;
          *(double *)(lVar20 + 0x48 + lVar25) =
               *(double *)(lVar20 + 0x48 + lVar25) + local_3c8 * dVar13;
          lVar20 = *(longlong *)(param_1 + 0x198);
          *(double *)(lVar20 + lVar25) = local_340 * local_430 + *(double *)(lVar20 + lVar25);
          *(double *)(lVar20 + 8 + lVar25) =
               local_340 * (double)local_438 + *(double *)(lVar20 + 8 + lVar25);
          *(double *)(lVar20 + 0x10 + lVar25) =
               local_340 * local_428 + *(double *)(lVar20 + 0x10 + lVar25);
          *(double *)(lVar20 + 0x18 + lVar25) =
               local_340 * local_3b0 + *(double *)(lVar20 + 0x18 + lVar25);
          *(double *)(lVar20 + 0x20 + lVar25) =
               local_340 * local_3b8 + *(double *)(lVar20 + 0x20 + lVar25);
          *(double *)(lVar20 + 0x28 + lVar25) =
               local_340 * local_3c0 + *(double *)(lVar20 + 0x28 + lVar25);
          *(double *)(lVar20 + 0x30 + lVar25) =
               local_340 * dVar3 + *(double *)(lVar20 + 0x30 + lVar25);
          *(double *)(lVar20 + 0x38 + lVar25) =
               local_340 * dVar35 + *(double *)(lVar20 + 0x38 + lVar25);
          *(double *)(lVar20 + 0x40 + lVar25) =
               local_340 * dVar4 + *(double *)(lVar20 + 0x40 + lVar25);
          *(double *)(lVar20 + 0x48 + lVar25) =
               local_340 * dVar5 + *(double *)(lVar20 + 0x48 + lVar25);
        }
        lVar27 = lVar27 + 1;
      } while (lVar27 != 3);
      FUN_146bfd1f0(&local_338);
    }
    if (local_1c8[0] != 0) {
      plVar21 = local_1b8;
      if (local_1b8 == (longlong *)0x0) {
        plVar21 = local_1a8;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    iVar19 = local_41c;
    if (local_2d8[0] != 0) {
      plVar21 = local_2c8;
      if (local_2c8 == (longlong *)0x0) {
        plVar21 = local_2b8;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (local_188 != 0.0) {
      puVar22 = local_178;
      if (local_178 == (uint *)0x0) {
        puVar22 = local_168;
      }
      (**(code **)(*(longlong *)puVar22 + 0x10))();
    }
    piVar29 = &local_414;
    bVar14 = true;
    do {
      bVar18 = bVar14;
      if (iVar31 != -1) {
        lVar27 = *(longlong *)(param_1 + 0x198);
        lVar26 = (longlong)iVar31;
        dVar32 = *(double *)(*(longlong *)(param_1 + 0x1f8) + lVar26 * 8);
        lVar20 = *(longlong *)(param_1 + 0x208);
        lVar25 = lVar26 * 0x50;
        lVar30 = (longlong)*piVar29 * 0x50;
        dVar13 = *(double *)(lVar20 + 8 + lVar25);
        dVar3 = *(double *)(lVar20 + 0x10 + lVar25);
        dVar4 = *(double *)(lVar20 + 0x18 + lVar25);
        dVar5 = *(double *)(lVar20 + 0x20 + lVar25);
        dVar6 = *(double *)(lVar20 + 0x28 + lVar25);
        dVar34 = *(double *)(lVar20 + 0x30 + lVar25);
        dVar35 = *(double *)(lVar20 + 0x38 + lVar25);
        dVar7 = *(double *)(lVar20 + 0x40 + lVar25);
        dVar8 = *(double *)(lVar20 + 0x48 + lVar25);
        *(double *)(lVar27 + lVar30) =
             *(double *)(lVar27 + lVar30) - *(double *)(lVar20 + lVar25) * dVar32;
        *(double *)(lVar27 + 8 + lVar30) = *(double *)(lVar27 + 8 + lVar30) - dVar13 * dVar32;
        *(double *)(lVar27 + 0x10 + lVar30) = *(double *)(lVar27 + 0x10 + lVar30) - dVar3 * dVar32;
        *(double *)(lVar27 + 0x18 + lVar30) = *(double *)(lVar27 + 0x18 + lVar30) - dVar4 * dVar32;
        *(double *)(lVar27 + 0x20 + lVar30) = *(double *)(lVar27 + 0x20 + lVar30) - dVar5 * dVar32;
        *(double *)(lVar27 + 0x28 + lVar30) = *(double *)(lVar27 + 0x28 + lVar30) - dVar6 * dVar32;
        *(double *)(lVar27 + 0x30 + lVar30) = *(double *)(lVar27 + 0x30 + lVar30) - dVar34 * dVar32;
        *(double *)(lVar27 + 0x38 + lVar30) = *(double *)(lVar27 + 0x38 + lVar30) - dVar35 * dVar32;
        *(double *)(lVar27 + 0x40 + lVar30) = *(double *)(lVar27 + 0x40 + lVar30) - dVar7 * dVar32;
        *(double *)(lVar27 + 0x48 + lVar30) = *(double *)(lVar27 + 0x48 + lVar30) - dVar32 * dVar8;
        lVar27 = *(longlong *)(param_1 + 0x208);
        puVar28 = (undefined8 *)(lVar27 + 0x40 + lVar25);
        *puVar28 = 0;
        puVar28[1] = 0;
        puVar28 = (undefined8 *)(lVar27 + 0x30 + lVar25);
        *puVar28 = 0;
        puVar28[1] = 0;
        puVar28 = (undefined8 *)(lVar27 + 0x20 + lVar25);
        *puVar28 = 0;
        puVar28[1] = 0;
        puVar28 = (undefined8 *)(lVar27 + 0x10 + lVar25);
        *puVar28 = 0;
        puVar28[1] = 0;
        *(undefined8 *)(lVar27 + lVar25) = 0;
        ((undefined8 *)(lVar27 + lVar25))[1] = 0;
        *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + lVar26 * 8) = 0;
      }
      piVar29 = &local_418;
      iVar31 = iVar19;
      bVar14 = false;
    } while (bVar18);
    local_310 = *(double *)(param_1 + 8);
    local_328 = 0.0;
    local_318 = &PTR_LAB_149f3aae0;
    dStack_308 = (double)CONCAT44(dStack_308._4_4_,iVar10);
    local_338 = FUN_146be9588;
    local_228 = (code *)((longlong)local_310 + 0xb8);
    iStack_220 = iVar10;
    FUN_146be94ac(&local_188,&local_228,&local_338);
    local_2e8 = 0xffffffffffffffff;
    local_2d8[0] = 0;
    local_2c8 = (longlong *)0x0;
    local_338 = local_148;
    dStack_330 = dStack_140;
    local_328 = (double)CONCAT44(uStack_134,local_138);
    iStack_320 = iStack_130;
    iStack_31c = iStack_12c;
    local_318 = (undefined **)local_128;
    local_310 = (double)CONCAT44(uStack_11c,local_120);
    dStack_308 = (double)CONCAT44(uStack_114,iStack_118);
    local_300 = local_110;
    uStack_2fc = uStack_10c;
    uStack_2f8 = uStack_108;
    uStack_2f4 = uStack_104;
    local_2f0 = local_100;
    FUN_146be971a(local_2d8,&local_188);
    local_2dc = 0;
    FUN_146bfd1f0(&local_338);
    local_1d8 = 0xffffffffffffffff;
    local_1c8[0] = 0;
    local_1b8 = (longlong *)0x0;
    local_228 = (code *)CONCAT44(uStack_11c,local_120);
    iStack_220 = iStack_118;
    uStack_21c = uStack_114;
    local_218 = local_110;
    uStack_214 = uStack_10c;
    uStack_210 = (double)CONCAT44(uStack_104,uStack_108);
    local_208 = local_100;
    local_200 = local_120;
    uStack_1fc = uStack_11c;
    iStack_1f8 = iStack_118;
    uStack_1f4 = uStack_114;
    local_1f0 = local_110;
    uStack_1ec = uStack_10c;
    uStack_1e8 = uStack_108;
    uStack_1e4 = uStack_104;
    local_1e0 = local_100;
    FUN_146be971a(local_1c8,&local_188);
    local_1cc = 0;
    FUN_146bfd1f0(&local_228);
    dVar32 = 0.0;
    dVar13 = 0.0;
    dVar3 = 0.0;
    dVar4 = 0.0;
    dVar5 = 0.0;
    dVar6 = 0.0;
    dVar34 = 0.0;
    dVar35 = 0.0;
    dVar7 = 0.0;
    dVar8 = 0.0;
    while ((((local_338 != local_228 || (dStack_330._0_4_ != iStack_220)) ||
            (iStack_320 != (int)uStack_210)) || (iStack_31c != uStack_210._4_4_))) {
      lVar27 = *(longlong *)(param_1 + 0x208);
      lVar20 = (longlong)(int)local_2e0 * 0x50;
      dVar9 = *(double *)(*(longlong *)(param_1 + 0x1f8) + (longlong)(int)local_2e0 * 8);
      dVar32 = dVar32 + *(double *)(lVar27 + lVar20) * dVar9;
      dVar13 = dVar13 + *(double *)(lVar27 + 8 + lVar20) * dVar9;
      dVar3 = dVar3 + *(double *)(lVar27 + 0x10 + lVar20) * dVar9;
      dVar4 = dVar4 + *(double *)(lVar27 + 0x18 + lVar20) * dVar9;
      dVar5 = dVar5 + *(double *)(lVar27 + 0x20 + lVar20) * dVar9;
      dVar6 = dVar6 + *(double *)(lVar27 + 0x28 + lVar20) * dVar9;
      dVar34 = dVar34 + *(double *)(lVar27 + 0x30 + lVar20) * dVar9;
      dVar35 = dVar35 + *(double *)(lVar27 + 0x38 + lVar20) * dVar9;
      dVar7 = dVar7 + *(double *)(lVar27 + 0x40 + lVar20) * dVar9;
      dVar8 = dVar8 + dVar9 * *(double *)(lVar27 + 0x48 + lVar20);
      FUN_146bfd1f0(&local_338);
    }
    if (local_1c8[0] != 0) {
      plVar21 = local_1b8;
      if (local_1b8 == (longlong *)0x0) {
        plVar21 = local_1a8;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (local_2d8[0] != 0) {
      plVar21 = local_2c8;
      if (local_2c8 == (longlong *)0x0) {
        plVar21 = local_2b8;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (local_188 != 0.0) {
      puVar22 = local_178;
      if (local_178 == (uint *)0x0) {
        puVar22 = local_168;
      }
      (**(code **)(*(longlong *)puVar22 + 0x10))();
    }
    lVar27 = *(longlong *)(param_1 + 0x198);
    lVar20 = local_410 * 0x50;
    *(double *)(lVar27 + lVar20) = dVar32;
    *(double *)(lVar27 + 8 + lVar20) = dVar13;
    *(double *)(lVar27 + 0x10 + lVar20) = dVar3;
    *(double *)(lVar27 + 0x18 + lVar20) = dVar4;
    *(double *)(lVar27 + 0x20 + lVar20) = dVar5;
    *(double *)(lVar27 + 0x28 + lVar20) = dVar6;
    *(double *)(lVar27 + 0x30 + lVar20) = dVar34;
    *(double *)(lVar27 + 0x38 + lVar20) = dVar35;
    *(double *)(lVar27 + 0x40 + lVar20) = dVar7;
    *(double *)(lVar27 + 0x48 + lVar20) = dVar8;
  }
  if (*(char *)(param_1 + 0x154) == '\x01') {
    pcVar33 = (code *)(*(longlong *)(param_1 + 8) + 0xb8);
    FUN_146be983e(&local_228,pcVar33,iVar10,0);
    if (((local_228 != pcVar33) || (iStack_220 != iVar10)) ||
       (((int)uStack_210 != -1 || (uStack_210._4_4_ != -1)))) {
      do {
        dVar4 = local_208;
        uVar11 = local_208._0_4_;
        puVar1 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                   (ulonglong)(local_208._0_4_ >> 9) * 8) +
                 (ulonglong)((local_208._0_4_ & 0x1ff) << 4));
        local_378 = *puVar1;
        uStack_374 = puVar1[1];
        uStack_370 = puVar1[2];
        uStack_36c = puVar1[3];
        FUN_1482c705a(param_1,&local_338,&local_378);
        local_440 = uStack_374;
        local_448 = (undefined4 *)CONCAT44(local_448._4_4_,local_378);
        FUN_1482c788c(param_1,&local_188,(ulonglong)dVar4 & 0xffffffff,&local_338);
        local_358 = local_188;
        dVar13 = local_358;
        uStack_350 = uStack_180;
        dVar3 = uStack_350;
        local_348 = local_178;
        lVar27 = *(longlong *)(param_1 + 0x220);
        lVar20 = (longlong)(int)uVar11 * 0x70;
        *(uint *)(lVar27 + lVar20) = uVar11;
        *(code **)(lVar27 + 8 + lVar20) = local_338;
        *(double *)(lVar27 + 0x10 + lVar20) = dStack_330;
        *(double *)(lVar27 + 0x18 + lVar20) = local_328;
        *(ulonglong *)(lVar27 + 0x20 + lVar20) = CONCAT44(iStack_31c,iStack_320);
        *(undefined ***)(lVar27 + 0x28 + lVar20) = local_318;
        dVar32 = (double)local_178 * (double)CONCAT44(uStack_2f4,uStack_2f8) +
                 local_188 * dStack_308 + uStack_180 * (double)CONCAT44(uStack_2fc,local_300);
        *(double *)(lVar27 + 0x30 + lVar20) = local_310;
        *(double *)(lVar27 + 0x38 + lVar20) = dStack_308;
        *(ulonglong *)(lVar27 + 0x40 + lVar20) = CONCAT44(uStack_2fc,local_300);
        *(ulonglong *)(lVar27 + 0x48 + lVar20) = CONCAT44(uStack_2f4,uStack_2f8);
        *(double *)(lVar27 + 0x50 + lVar20) = local_2f0;
        *(uint **)(lVar27 + 0x68 + lVar20) = local_178;
        local_358._0_4_ = SUB84(local_188,0);
        local_358._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
        uStack_350._0_4_ = SUB84(uStack_180,0);
        uStack_350._4_4_ = (undefined4)((ulonglong)uStack_180 >> 0x20);
        puVar1 = (undefined4 *)(lVar27 + 0x58 + lVar20);
        *puVar1 = (undefined4)local_358;
        puVar1[1] = local_358._4_4_;
        puVar1[2] = (undefined4)uStack_350;
        puVar1[3] = uStack_350._4_4_;
        local_358 = dVar13;
        uStack_350 = dVar3;
        if (((*(int *)(param_1 + 0x260) + 1 < (int)uVar11) ||
            (uVar11 = *(uint *)(*(longlong *)(param_1 + 600) + (longlong)(int)uVar11 * 4),
            (int)uVar11 < 1)) || (*(int *)(param_1 + 0x250) < (int)uVar11)) {
LAB_1482c949e:
          FUN_146b9cbf0(param_1 + 0x230,(ulonglong)dVar4 & 0xffffffff);
        }
        else {
          lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (ulonglong)(uVar11 >> 9) * 8);
          if (*(int *)(lVar27 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc) < 1) goto LAB_1482c949e;
          *(float *)(lVar27 + 4 + (ulonglong)(uVar11 & 0x1ff) * 0xc) =
               (float)(dVar32 + dVar32 +
                       (local_310 * (double)local_178 +
                       local_328 * local_188 + uStack_180 * (double)local_318) * (double)local_178 +
                       (local_328 * (double)local_178 +
                       (double)local_338 * local_188 + dStack_330 * uStack_180) * local_188 +
                       ((double)local_318 * (double)local_178 +
                       dStack_330 * local_188 + uStack_180 * (double)CONCAT44(iStack_31c,iStack_320)
                       ) * uStack_180 + local_2f0);
          FUN_146bd2818(param_1 + 0x230);
        }
        if (local_218 == 0) {
          uStack_21c = 0xffffffff;
          uStack_210 = -NAN;
          uStack_210._4_4_ = -1;
          uStack_210._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_228);
        }
      } while ((((local_228 != pcVar33) || (iStack_220 != iVar10)) || ((int)uStack_210 != -1)) ||
              (uStack_210._4_4_ != -1));
    }
  }
  else {
    local_238 = (code **)0x0;
    local_230 = 0x4000000000;
    pcVar33 = (code *)(*(longlong *)(param_1 + 8) + 0xb8);
    FUN_146be983e(&local_228,pcVar33,iVar10,0);
    if (local_228 != pcVar33) goto LAB_1482c96a1;
    if (iStack_220 != iVar10) goto LAB_1482c96a1;
    if ((int)uStack_210 != -1) goto LAB_1482c96a1;
    iVar31 = uStack_210._4_4_;
    while (iVar31 != -1) {
LAB_1482c96a1:
      do {
        uVar24 = local_230;
        uVar11 = local_208._0_4_;
        lVar27 = (longlong)(int)local_230;
        uVar16 = (int)local_230 + 1;
        local_230 = CONCAT44(local_230._4_4_,uVar16);
        if (local_230._4_4_ < uVar16) {
          FUN_147c81098(&local_338,uVar24 & 0xffffffff);
        }
        ppcVar23 = local_238;
        if (local_238 == (code **)0x0) {
          ppcVar23 = &local_338;
        }
        *(uint *)((longlong)ppcVar23 + lVar27 * 4) = uVar11;
        lVar27 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8)
        ;
        uVar24 = (ulonglong)((uVar11 & 0x1ff) << 4);
        iVar31 = *(int *)(lVar27 + uVar24);
        if (iVar31 == iVar10) {
          iVar31 = *(int *)(lVar27 + 4 + uVar24);
        }
        if (iVar31 != -1) {
          dVar32 = (double)(*(longlong *)(param_1 + 8) + 0xb8);
          FUN_146be983e(&local_188,dVar32,iVar31,0);
          if (local_188 != dVar32) goto LAB_1482c9643;
          if ((int)uStack_180 != iVar31) goto LAB_1482c9643;
          if ((int)local_170 != -1) goto LAB_1482c9643;
          iVar19 = local_170._4_4_;
          while (iVar19 != -1) {
LAB_1482c9643:
            do {
              local_358 = (double)CONCAT44(local_358._4_4_,local_168[0]);
              if (local_168[0] != uVar11) {
                FUN_14830129c(&local_338,&local_358);
              }
              if ((int)local_178 == 0) {
                uStack_180 = (double)CONCAT44(0xffffffff,(int)uStack_180);
                local_170 = 0xffffffffffffffff;
                local_170._4_4_ = -1;
                local_170._0_4_ = -1;
              }
              else {
                FUN_146be9922(&local_188);
              }
            } while (((local_188 != dVar32) || ((int)uStack_180 != iVar31)) ||
                    (iVar19 = local_170._4_4_, (int)local_170 != -1));
          }
        }
        if (local_218 == 0) {
          uStack_21c = 0xffffffff;
          uStack_210 = -NAN;
          uStack_210._4_4_ = -1;
          uStack_210._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_228);
        }
      } while (((local_228 != pcVar33) || (iStack_220 != iVar10)) ||
              (iVar31 = uStack_210._4_4_, (int)uStack_210 != -1));
    }
    ppcVar23 = local_238;
    if (local_238 == (code **)0x0) {
      ppcVar23 = &local_338;
    }
    lVar27 = (longlong)(int)local_230;
    if (lVar27 != 0) {
      lVar20 = 0;
      do {
        uVar11 = *(uint *)((longlong)ppcVar23 + lVar20);
        puVar1 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8
                   ) + (ulonglong)((uVar11 & 0x1ff) << 4));
        local_378 = *puVar1;
        uStack_374 = puVar1[1];
        uStack_370 = puVar1[2];
        uStack_36c = puVar1[3];
        FUN_1482c705a(param_1,&local_228,&local_378);
        local_440 = uStack_374;
        local_448 = (undefined4 *)CONCAT44(local_448._4_4_,local_378);
        FUN_1482c788c(param_1,&local_188,uVar11,&local_228);
        dVar13 = (double)CONCAT44(uStack_21c,iStack_220);
        dVar3 = (double)CONCAT44(uStack_214,local_218);
        local_358 = local_188;
        dVar4 = local_358;
        uStack_350 = uStack_180;
        dVar5 = uStack_350;
        local_348 = local_178;
        lVar25 = *(longlong *)(param_1 + 0x220);
        lVar26 = (longlong)(int)uVar11 * 0x70;
        *(uint *)(lVar25 + lVar26) = uVar11;
        *(code **)(lVar25 + 8 + lVar26) = local_228;
        *(double *)(lVar25 + 0x10 + lVar26) = dVar13;
        *(double *)(lVar25 + 0x18 + lVar26) = dVar3;
        *(double *)(lVar25 + 0x20 + lVar26) = uStack_210;
        *(double *)(lVar25 + 0x28 + lVar26) = local_208;
        dVar32 = (double)local_178 * (double)CONCAT44(uStack_1e4,uStack_1e8) +
                 local_188 * (double)CONCAT44(uStack_1f4,iStack_1f8) +
                 uStack_180 * (double)CONCAT44(uStack_1ec,local_1f0);
        *(ulonglong *)(lVar25 + 0x30 + lVar26) = CONCAT44(uStack_1fc,local_200);
        *(ulonglong *)(lVar25 + 0x38 + lVar26) = CONCAT44(uStack_1f4,iStack_1f8);
        *(ulonglong *)(lVar25 + 0x40 + lVar26) = CONCAT44(uStack_1ec,local_1f0);
        *(ulonglong *)(lVar25 + 0x48 + lVar26) = CONCAT44(uStack_1e4,uStack_1e8);
        *(double *)(lVar25 + 0x50 + lVar26) = local_1e0;
        *(uint **)(lVar25 + 0x68 + lVar26) = local_178;
        local_358._0_4_ = SUB84(local_188,0);
        local_358._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
        uStack_350._0_4_ = SUB84(uStack_180,0);
        uStack_350._4_4_ = (undefined4)((ulonglong)uStack_180 >> 0x20);
        puVar1 = (undefined4 *)(lVar25 + 0x58 + lVar26);
        *puVar1 = (undefined4)local_358;
        puVar1[1] = local_358._4_4_;
        puVar1[2] = (undefined4)uStack_350;
        puVar1[3] = uStack_350._4_4_;
        local_358 = dVar4;
        uStack_350 = dVar5;
        if (((*(int *)(param_1 + 0x260) + 1 < (int)uVar11) ||
            (uVar16 = *(uint *)(*(longlong *)(param_1 + 600) + (longlong)(int)uVar11 * 4),
            (int)uVar16 < 1)) || (*(int *)(param_1 + 0x250) < (int)uVar16)) {
LAB_1482c9a1e:
          FUN_146b9cbf0(param_1 + 0x230,uVar11);
        }
        else {
          lVar25 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (ulonglong)(uVar16 >> 9) * 8);
          if (*(int *)(lVar25 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc) < 1) goto LAB_1482c9a1e;
          *(float *)(lVar25 + 4 + (ulonglong)(uVar16 & 0x1ff) * 0xc) =
               (float)(dVar32 + dVar32 +
                       ((double)CONCAT44(uStack_1fc,local_200) * (double)local_178 +
                       dVar3 * local_188 + uStack_180 * local_208) * (double)local_178 +
                       (dVar3 * (double)local_178 +
                       (double)local_228 * local_188 + dVar13 * uStack_180) * local_188 +
                       (local_208 * (double)local_178 + dVar13 * local_188 + uStack_180 * uStack_210
                       ) * uStack_180 + local_1e0);
          FUN_146bd2818(param_1 + 0x230);
        }
        lVar20 = lVar20 + 4;
      } while (lVar27 * 4 != lVar20);
    }
    if (local_238 != (code **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482c9fb6 FUN_1482c9fb6 body=77 status=ok
// SIG undefined FUN_1482c9fb6(void)

void FUN_1482c9fb6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x108))();
  if ((param_1[0x1a] != 0) && ((char)param_1[0x27] == '\x01')) {
    (**(code **)(*param_1 + 0xb8))(param_1);
    (**(code **)(*param_1 + 0x28))(param_1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001482c9ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}



// FUNCTION 1482ca004 FUN_1482ca004 body=584 status=ok
// SIG undefined FUN_1482ca004(void)

ulonglong FUN_1482ca004(longlong param_1,undefined4 param_2,int param_3,int param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       int *param_9)

{
  longlong *plVar1;
  uint3 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  int *local_58;
  byte local_42;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar7 = *(int *)(param_1 + 0x150);
  if ((iVar7 != 1 & *(byte *)(param_1 + 0x156)) == 1) {
    local_78 = param_9;
    FUN_1482b317c(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_58 = param_9;
  local_60 = param_8;
  local_68 = param_7;
  local_70 = param_6;
  local_78 = (int *)CONCAT44(local_78._4_4_,param_5);
  bVar3 = FUN_1482b2f34(param_1,param_2,param_3,param_4);
  if (bVar3 != 0) {
    uVar2 = (uint3)((uint)iVar7 >> 8);
    uVar10 = CONCAT71((uint7)uVar2,1);
    if ((*(char *)(param_1 + 0x156) != '\x01' || iVar7 != 1) ||
       (uVar10 = (ulonglong)CONCAT31(uVar2,1), *(char *)(param_1 + 200) != '\x01'))
    goto LAB_1482ca1ed;
    lVar12 = param_1 + 0x10;
    cVar4 = FUN_1482bb52e(lVar12,param_2);
    uVar11 = (undefined7)((ulonglong)lVar12 >> 8);
    if (cVar4 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x208);
      if (plVar1 != (longlong *)0x0) {
        uVar10 = CONCAT71(uVar11,1);
        lVar12 = 0;
        do {
          iVar7 = (**(code **)(*plVar1 + 0xa0))(plVar1);
          if (iVar7 <= lVar12) break;
          if (lVar12 < (int)plVar1[5]) {
            uVar8 = *(undefined8 *)(plVar1[4] + lVar12 * 8);
          }
          else {
            uVar8 = 0;
          }
          cVar4 = FUN_146c1a770(uVar8,param_2,&local_41);
          uVar9 = uVar10 & 0xff;
          uVar10 = (ulonglong)local_41;
          if (cVar4 == '\0') {
            uVar10 = uVar9;
          }
          lVar12 = lVar12 + 1;
        } while ((uVar10 & 1) != 0);
        if ((uVar10 & 1) != 0) {
          lVar12 = 0;
          do {
            iVar7 = (**(code **)(*plVar1 + 0xb0))(plVar1);
            if (iVar7 <= lVar12) break;
            if (lVar12 < (int)plVar1[7]) {
              uVar8 = *(undefined8 *)(plVar1[6] + lVar12 * 8);
            }
            else {
              uVar8 = 0;
            }
            cVar4 = FUN_146c1aaf4(uVar8,param_2,&local_42);
            uVar9 = uVar10 & 0xff;
            uVar10 = (ulonglong)local_42;
            if (cVar4 == '\0') {
              uVar10 = uVar9;
            }
            lVar12 = lVar12 + 1;
          } while ((uVar10 & 1) != 0);
        }
        goto LAB_1482ca1ed;
      }
LAB_1482ca244:
      uVar10 = CONCAT71(uVar11,1);
      goto LAB_1482ca1ed;
    }
    bVar5 = FUN_1482bbacc(lVar12,param_3);
    bVar6 = FUN_1482bbacc(lVar12,param_4);
    if ((bVar5 & bVar6) == 0) {
      if (bVar5 == 0) {
        uVar10 = CONCAT71(uVar11,1);
        if (bVar6 == 0) goto LAB_1482ca1ed;
        if (*param_9 == -1) {
          *param_9 = param_4;
          goto LAB_1482ca1ed;
        }
        bVar13 = *param_9 == param_4;
      }
      else {
        if (*param_9 == -1) {
          *param_9 = param_3;
          goto LAB_1482ca244;
        }
        bVar13 = *param_9 == param_3;
      }
      uVar10 = (ulonglong)bVar3;
      if (!bVar13) {
        uVar10 = 0;
      }
      goto LAB_1482ca1ed;
    }
  }
  uVar10 = 0;
LAB_1482ca1ed:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffff01;
}



// FUNCTION 1482ca250 FUN_1482ca250 body=506 status=ok
// SIG undefined FUN_1482ca250(void)

undefined8
FUN_1482ca250(longlong param_1,undefined4 param_2,undefined4 param_3,double *param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  longlong local_e0;
  undefined4 local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  char *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  longlong local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  double *local_68;
  double *local_60;
  undefined1 *local_58;
  char **local_50;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(int *)(param_1 + 0x164) == 1) &&
     (plVar1 = *(longlong **)(param_1 + 0xd0), plVar1 != (longlong *)0x0)) {
    dVar2 = *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x168);
    (**(code **)(*plVar1 + 8))(plVar1,&local_b0,param_4,0xffffffff);
    if ((param_4[2] - local_a0) * (param_4[2] - local_a0) +
        (*param_4 - local_b0) * (*param_4 - local_b0) +
        (param_4[1] - local_a8) * (param_4[1] - local_a8) <= dVar2) {
      local_d8 = FUN_146c061e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
      local_d0 = *param_4;
      dStack_c8 = param_4[1];
      local_c0 = param_4[2];
      local_e0 = param_1;
      local_b8 = dVar2;
      cVar3 = FUN_1482ca9f2(&local_e0,param_2);
      if (cVar3 != '\0') {
        cVar3 = FUN_1482ca9f2(&local_e0,param_3);
        if (cVar3 != '\0') {
          local_70 = &local_110;
          local_78 = &local_10c;
          local_90 = &local_108;
          local_108 = param_5;
          local_88 = &local_104;
          local_104 = param_6;
          local_68 = &local_100;
          local_100 = *param_4;
          dStack_f8 = param_4[1];
          local_f0 = param_4[2];
          local_60 = &local_e8;
          local_98 = &local_41;
          local_41 = '\x01';
          local_50 = &local_98;
          local_58 = &LAB_1482f6aba;
          local_118 = param_1;
          local_110 = param_2;
          local_10c = param_3;
          local_e8 = dVar2;
          local_80 = param_1;
          FUN_146c03fd0(*(undefined8 *)(param_1 + 8),param_2);
          if (local_41 != '\0') {
            cVar3 = FUN_1482cac12(&local_118,param_3);
            if (cVar3 != '\0') goto LAB_1482ca418;
          }
        }
      }
    }
    uVar4 = 0;
  }
  else {
LAB_1482ca418:
    uVar4 = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ca44c FUN_1482ca44c body=567 status=ok
// SIG undefined FUN_1482ca44c(void)

void FUN_1482ca44c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_d0;
  undefined1 local_c8;
  undefined4 *local_c0;
  undefined2 *local_b8;
  undefined2 *local_b0;
  ulonglong local_a8;
  undefined2 local_a0;
  undefined4 local_9c;
  undefined2 *local_98;
  undefined2 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  uint local_64;
  undefined8 local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_1;
  uVar5 = *(byte *)(lVar2 + 0x156) ^ 1;
  local_d0 = uVar5 * 4 + 1;
  local_80[0] = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_90 = 0;
  local_8c = 0xffffffff;
  local_88 = (undefined4 *)0x0;
  local_a0 = 0;
  local_9c = 0xffffffff;
  local_98 = (undefined2 *)0x0;
  local_d8 = *(undefined4 *)(lVar2 + 0x160);
  local_c8 = (undefined1)uVar5;
  local_c0 = local_80;
  local_b8 = &local_90;
  local_b0 = &local_a0;
  cVar4 = FUN_1482afd2e(param_2,*(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x158),
                        *(undefined4 *)(lVar2 + 0x15c));
  if (cVar4 != '\0') {
    uVar3 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
             (ulonglong)((param_2 & 0x1ff) << 4));
    local_a8 = uVar3 >> 0x20;
    lVar1 = lVar2 + 0x10;
    local_64 = param_2;
    local_60 = &local_64;
    local_58 = local_80;
    FUN_1482f537c(lVar1,local_4c,&local_60,0);
    FUN_1482b33ce(lVar1,&local_60,uVar3 & 0xffffffff);
    uVar6 = 1;
    uVar7 = 1;
    if ((char)local_90 == '\0') {
      uVar7 = SUB81(local_60,0);
    }
    if (local_90._1_1_ == '\0') {
      local_60._1_1_ = 0;
    }
    local_90 = CONCAT11(local_60._1_1_,uVar7);
    local_88 = local_58;
    local_64 = (uint)uVar3;
    local_60 = &local_64;
    local_58 = (undefined4 *)&local_90;
    FUN_1482f586a(lVar2 + 0x60,local_4c,&local_60,0);
    uVar5 = (uint)local_a8;
    FUN_1482b33ce(lVar1,&local_60,local_a8 & 0xffffffff);
    if ((char)local_a0 == '\0') {
      uVar6 = SUB81(local_60,0);
    }
    uVar7 = 0;
    if (local_a0._1_1_ != '\0') {
      uVar7 = local_60._1_1_;
    }
    local_a0 = CONCAT11(uVar7,uVar6);
    local_98 = (undefined2 *)local_58;
    local_64 = uVar5;
    local_60 = &local_64;
    local_58 = (undefined4 *)&local_a0;
    FUN_1482f586a(lVar2 + 0x60,local_4c,&local_60,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ca688 FUN_1482ca688 body=126 status=ok
// SIG undefined FUN_1482ca688(void)

void FUN_1482ca688(longlong *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14ae72ef0;
  local_58[0] = &LAB_148302b84;
  local_30 = param_1;
  (**(code **)(*param_1 + 0xd0))(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ca708 FUN_1482ca708 body=193 status=ok
// SIG undefined FUN_1482ca708(void)

void FUN_1482ca708(longlong param_1,uint param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  uVar5 = (ulonglong)(param_2 & 0x1ff);
  local_38 = *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x18);
  puVar1 = (undefined4 *)(lVar2 + uVar5 * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  (**(code **)(*param_3 + 8))(param_3,&local_60,&local_48,param_2);
  lVar2 = *(longlong *)(param_1 + 8);
  cVar4 = FUN_146bfed03(&local_60);
  if (cVar4 != '\0') {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
    *(undefined8 *)(lVar3 + 0x10 + uVar5 * 0x18) = local_50;
    puVar1 = (undefined4 *)(lVar3 + uVar5 * 0x18);
    *puVar1 = local_60;
    puVar1[1] = uStack_5c;
    puVar1[2] = uStack_58;
    puVar1[3] = uStack_54;
    if (*(char *)(lVar2 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar2 + 0x214) = *(int *)(lVar2 + 0x214) + 1;
      UNLOCK();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ca7ca FUN_1482ca7ca body=252 status=ok
// SIG undefined FUN_1482ca7ca(void)

undefined4 *
FUN_1482ca7ca(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_1482b33ce(param_1 + 0x10,&local_48,param_3);
    if (local_40 != (longlong *)0x0) goto LAB_1482ca858;
    if (local_48._1_1_ != '\0') goto LAB_1482ca7fb;
  }
  else {
LAB_1482ca7fb:
    if ((*(char *)(param_1 + 0x138) == '\x02') &&
       (local_40 = *(longlong **)(param_1 + 0xd0), local_40 != (longlong *)0x0)) {
      pcVar1 = *(code **)(param_1 + 0xe0);
      if (pcVar1 != (code *)0x0) {
        plVar7 = (longlong *)(param_1 + 0x100);
        if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0xf0);
        }
        local_48 = param_3;
        uVar5 = (**(code **)(*plVar7 + 8))();
        uVar6 = (*pcVar1)(uVar5,&local_48);
        if ((uVar6 & 2) != 0) goto LAB_1482ca891;
        local_40 = *(longlong **)(param_1 + 0xd0);
      }
LAB_1482ca858:
      (**(code **)(*local_40 + 8))(local_40,param_2,param_4,param_3);
      goto LAB_1482ca89f;
    }
  }
LAB_1482ca891:
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_4 + 4);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *param_2 = *param_4;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
LAB_1482ca89f:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ca8c8 FUN_1482ca8c8 body=296 status=ok
// SIG undefined FUN_1482ca8c8(void)

void FUN_1482ca8c8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar7 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar9 = 0;
  if ((uVar7 != 0) && (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar10 = 1;
    uVar4 = 1;
    if (1 < (int)uVar7) {
      uVar10 = uVar7;
    }
    do {
      uVar9 = uVar10;
      if (uVar10 == uVar4) break;
      uVar6 = uVar4 >> 9;
      uVar8 = uVar4 & 0x1ff;
      uVar9 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar6] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  if (uVar9 != uVar7) {
    do {
      pcVar2 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      local_44 = uVar9;
      uVar3 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar3,&local_44);
      uVar10 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar7) {
        uVar10 = uVar7;
      }
      do {
        uVar4 = uVar10;
        if (uVar10 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar4 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x28) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar4;
    } while (uVar9 != uVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ca9f2 FUN_1482ca9f2 body=543 status=ok
// SIG undefined FUN_1482ca9f2(void)

ulonglong FUN_1482ca9f2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  int local_78;
  undefined8 local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  lVar6 = *(longlong *)(lVar1 + 8) + 0xb8;
  FUN_146be983e(&local_88,lVar6,param_2,0);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((((local_88 != lVar6) || (local_80 != param_2)) || ((int)local_70 != -1)) ||
     (local_70._4_4_ != -1)) {
    do {
      if (local_68 != *(uint *)(param_1 + 1)) {
        lVar2 = *(longlong *)(lVar1 + 8);
        uVar4 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(local_68 >> 9) * 8) +
                 (ulonglong)((local_68 & 0x1ff) << 4));
        if ((int)uVar4 == param_2) {
          plVar3 = (longlong *)
                   ((ulonglong)((uint)(uVar4 >> 0x29) << 3) + *(longlong *)(lVar2 + 0x10));
          uVar4 = uVar4 >> 0x20;
        }
        else {
          plVar3 = (longlong *)
                   ((ulonglong)((uint)(uVar4 >> 6) & 0x3fffff8) + *(longlong *)(lVar2 + 0x10));
        }
        lVar2 = *plVar3;
        uVar4 = (ulonglong)((uint)uVar4 & 0x1ff);
        local_90 = (*(double *)(lVar2 + 0x10 + uVar4 * 0x18) + (double)param_1[4]) * 0.5;
        local_98 = (*(double *)(lVar2 + 8 + uVar4 * 0x18) + (double)param_1[3]) * 0.5;
        local_a0 = (*(double *)(lVar2 + uVar4 * 0x18) + (double)param_1[2]) * 0.5;
        (**(code **)(**(longlong **)(lVar1 + 0xd0) + 8))
                  (*(longlong **)(lVar1 + 0xd0),&local_b8,&local_a0,0xffffffff);
        dVar7 = (local_a8 - local_90) * (local_a8 - local_90) +
                (local_b8 - local_a0) * (local_b8 - local_a0) +
                (local_b0 - local_98) * (local_b0 - local_98);
        if ((double)param_1[5] <= dVar7 && dVar7 != (double)param_1[5]) {
          uVar5 = 0;
          break;
        }
      }
      if (local_78 == 0) {
        local_7c = 0xffffffff;
        local_70 = 0xffffffffffffffff;
        local_70._4_4_ = -1;
        local_70._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_88);
      }
    } while (((local_88 != lVar6) || (local_80 != param_2)) ||
            (((int)local_70 != -1 || (local_70._4_4_ != -1))));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1482cac12 FUN_1482cac12 body=158 status=ok
// SIG undefined FUN_1482cac12(void)

undefined1 FUN_1482cac12(longlong *param_1)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *param_1;
  local_68 = &local_11;
  local_11 = 1;
  local_20 = &local_68;
  local_60 = param_1 + 2;
  local_58 = (longlong)param_1 + 0x14;
  local_48 = (longlong)param_1 + 0xc;
  local_40 = param_1 + 1;
  local_38 = param_1 + 3;
  local_30 = param_1 + 6;
  local_28 = &LAB_1482f6aba;
  FUN_146c03fd0(*(undefined8 *)(local_50 + 8));
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482cacda FUN_1482cacda body=31 status=ok
// SIG undefined FUN_1482cacda(void)

undefined8 FUN_1482cacda(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_146c14004(param_2,param_3,param_1);
  return param_1;
}



// FUNCTION 1482cacfa FUN_1482cacfa body=702 status=ok
// SIG undefined FUN_1482cacfa(void)

double * FUN_1482cacfa(double *param_1,code *param_2,undefined8 param_3,undefined8 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  double dVar9;
  undefined1 auStack_208 [40];
  double *local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  double local_1d0;
  double local_1c8;
  undefined4 local_1bc;
  undefined1 *local_1b8;
  int local_1b0;
  int local_1a0;
  int local_19c;
  longlong local_188;
  longlong *local_178;
  longlong local_168 [4];
  undefined1 *local_148;
  int local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined **local_128;
  undefined4 local_120;
  code *local_118;
  longlong *local_108;
  longlong local_f8 [4];
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [5];
  ulonglong local_80;
  
  dVar3 = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  dVar1 = DAT_14c8464e0;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_138 = 0;
  local_128 = &PTR_LAB_149f3b7b0;
  local_148 = &LAB_146c413d0;
  local_1e0 = param_1;
  local_120 = (int)param_3;
  local_118 = param_2;
  FUN_146c41260(param_2 + 0xb8,&local_d8,param_3,&local_148);
  FUN_146c41458(local_d8,&local_148,local_d0,local_c8);
  FUN_146c41662(local_d8,&local_1b8,local_d0,local_c8);
  iVar8 = 0;
  while ((((pcVar5 = local_118, local_148 != local_1b8 || (local_140 != local_1b0)) ||
          ((int)local_130 != local_1a0)) || (local_130._4_4_ != local_19c))) {
    local_1d8 = local_128._0_4_;
    plVar7 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar7 = local_f8;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    local_1bc = (*pcVar5)(uVar6,&local_1d8);
    (*(code *)*param_4)(&local_1d8,param_4[1],&local_1bc);
    dVar1 = dVar1 + (double)CONCAT44(uStack_1d4,local_1d8);
    dVar2 = dVar2 + local_1d0;
    dVar3 = dVar3 + local_1c8;
    if ((int)local_138 == 0) {
      local_13c = 0xffffffff;
      local_130 = 0xffffffffffffffff;
    }
    else {
      FUN_146be9922(&local_148);
    }
    iVar8 = iVar8 + 1;
  }
  if (local_188 != 0) {
    if (local_178 == (longlong *)0x0) {
      local_178 = local_168;
    }
    (**(code **)(*local_178 + 0x10))();
  }
  if (local_118 != (code *)0x0) {
    plVar7 = local_f8;
    if (local_108 != (longlong *)0x0) {
      plVar7 = local_108;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if (local_c8[0] != 0) {
    if (local_b8 == (longlong *)0x0) {
      local_b8 = local_a8;
    }
    (**(code **)(*local_b8 + 0x10))();
  }
  pdVar4 = local_1e0;
  if (iVar8 == 0) {
    local_148 = (undefined1 *)CONCAT44(local_148._4_4_,(int)param_3);
    (*(code *)*param_4)(local_1e0,param_4[1]);
  }
  else {
    dVar9 = 1.0 / (double)iVar8;
    *local_1e0 = dVar1 * dVar9;
    local_1e0[1] = dVar2 * dVar9;
    local_1e0[2] = dVar3 * dVar9;
  }
  if ((local_80 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return pdVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482cafba FUN_1482cafba body=742 status=ok
// SIG undefined FUN_1482cafba(void)

double * FUN_1482cafba(double *param_1,code *param_2,undefined8 param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  code *pcVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  double dVar11;
  undefined1 auStack_208 [36];
  undefined4 local_1e4;
  double *local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  double local_1d0;
  double local_1c8;
  undefined4 local_1bc;
  undefined1 *local_1b8;
  int local_1b0;
  int local_1a0;
  int local_19c;
  longlong local_188;
  longlong *local_178;
  longlong local_168 [4];
  undefined1 *local_148;
  int local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined **local_128;
  undefined4 local_120;
  code *local_118;
  longlong *local_108;
  longlong local_f8 [4];
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [5];
  ulonglong local_80;
  
  dVar1 = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  dVar3 = DAT_14c8464e0;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_138 = 0;
  local_128 = &PTR_LAB_149f3b7b0;
  local_1e4 = (undefined4)param_3;
  local_148 = &LAB_146c413d0;
  local_1e0 = param_1;
  local_120 = local_1e4;
  local_118 = param_2;
  FUN_146c41260(param_2 + 0xb8,&local_d8,param_3,&local_148);
  FUN_146c41458(local_d8,&local_148,local_d0,local_c8);
  FUN_146c41662(local_d8,&local_1b8,local_d0,local_c8);
  iVar10 = 0;
  while ((((pcVar5 = local_118, local_148 != local_1b8 || (local_140 != local_1b0)) ||
          ((int)local_130 != local_1a0)) || (local_130._4_4_ != local_19c))) {
    local_1d8 = local_128._0_4_;
    plVar9 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar9 = local_f8;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    uVar7 = (*pcVar5)(uVar8,&local_1d8);
    local_1d8 = uVar7;
    cVar6 = (*(code *)*param_5)(param_5[1],&local_1d8);
    if (cVar6 != '\0') {
      local_1bc = uVar7;
      (*(code *)*param_4)(&local_1d8,param_4[1],&local_1bc);
      dVar3 = dVar3 + (double)CONCAT44(uStack_1d4,local_1d8);
      dVar2 = dVar2 + local_1d0;
      dVar1 = dVar1 + local_1c8;
      iVar10 = iVar10 + 1;
    }
    if ((int)local_138 == 0) {
      local_13c = 0xffffffff;
      local_130 = 0xffffffffffffffff;
    }
    else {
      FUN_146be9922(&local_148);
    }
  }
  if (local_188 != 0) {
    if (local_178 == (longlong *)0x0) {
      local_178 = local_168;
    }
    (**(code **)(*local_178 + 0x10))();
  }
  if (local_118 != (code *)0x0) {
    plVar9 = local_f8;
    if (local_108 != (longlong *)0x0) {
      plVar9 = local_108;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if (local_c8[0] != 0) {
    if (local_b8 == (longlong *)0x0) {
      local_b8 = local_a8;
    }
    (**(code **)(*local_b8 + 0x10))();
  }
  pdVar4 = local_1e0;
  if (iVar10 == 0) {
    local_148 = (undefined1 *)CONCAT44(local_148._4_4_,local_1e4);
    (*(code *)*param_4)(local_1e0,param_4[1]);
  }
  else {
    dVar11 = 1.0 / (double)iVar10;
    *local_1e0 = dVar3 * dVar11;
    local_1e0[1] = dVar2 * dVar11;
    local_1e0[2] = dVar1 * dVar11;
  }
  if ((local_80 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return pdVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482cb2a2 FUN_1482cb2a2 body=1683 status=ok
// SIG undefined FUN_1482cb2a2(void)

double * FUN_1482cb2a2(double *param_1,longlong param_2,ulonglong param_3,double param_4)

{
  undefined1 *puVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  uint uVar9;
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
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_1c8 [32];
  uint *local_1a8;
  uint *local_1a0;
  undefined4 *local_198;
  undefined4 *local_190;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double *local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined1 *local_138;
  undefined8 local_130;
  int local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  longlong local_f8;
  ulonglong local_f0;
  
  dVar5 = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  dVar13 = DAT_14c8464e0;
  uVar9 = (uint)param_3;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (param_3 >> 9 & 0x7fffff) * 8);
  uVar8 = (ulonglong)(uVar9 & 0x1ff);
  local_170 = *(double *)(lVar3 + uVar8 * 0x18);
  local_178 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
  local_180 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
  local_fc = 0xffffffff;
  local_100 = 0xffffffff;
  local_104 = 0xffffffff;
  local_108 = 0xffffffff;
  local_10c = 0xffffffff;
  puVar1 = (undefined1 *)(param_2 + 0xb8);
  local_168 = param_4;
  local_f8 = param_2;
  FUN_146be983e(&local_138,puVar1,param_3,0);
  if ((((local_138 != puVar1) || ((uint)local_130 != uVar9)) || ((int)local_120 != -1)) ||
     (local_120._4_4_ != -1)) {
    local_160 = local_168;
    if (10000.0 <= local_168) {
      local_160 = 10000.0;
    }
    dVar14 = 0.0;
    local_158 = param_1;
    do {
      local_104 = 0xffffffff;
      local_1a8 = &local_100;
      local_1a0 = &local_104;
      local_198 = &local_108;
      local_190 = &local_10c;
      local_150 = dVar14;
      local_148 = dVar2;
      local_140 = dVar13;
      FUN_146c12c58(param_2,local_118,param_3 & 0xffffffff,&local_fc);
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_fc >> 9) * 8);
      uVar8 = (ulonglong)(local_fc & 0x1ff);
      dVar13 = *(double *)(lVar3 + uVar8 * 0x18);
      dVar2 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
      dVar14 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
      dVar6 = dVar14 - local_180;
      dVar11 = dVar2 - local_178;
      dVar12 = dVar13 - local_170;
      dVar7 = SQRT(dVar6 * dVar6 + dVar12 * dVar12 + dVar11 * dVar11);
      uVar20 = SUB84(local_160,0);
      uVar21 = (undefined4)((ulonglong)local_160 >> 0x20);
      if (0.0 < dVar7) {
        if (9.999999974752427e-07 <= dVar7) {
          lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_100 >> 9) * 8);
          uVar8 = (ulonglong)(local_100 & 0x1ff);
          dVar15 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18) - local_180;
          dVar10 = *(double *)(lVar3 + 8 + uVar8 * 0x18) - local_178;
          dVar16 = *(double *)(lVar3 + uVar8 * 0x18) - local_170;
          dVar17 = SQRT(dVar15 * dVar15 + dVar16 * dVar16 + dVar10 * dVar10);
          dVar18 = 1.0 / dVar17;
          if (0.0 < dVar17) {
            dVar15 = dVar15 * dVar18;
            dVar10 = dVar10 * dVar18;
          }
          else {
            dVar10 = 0.0;
            dVar15 = 0.0;
          }
          dVar4 = 1.0 / dVar7;
          dVar10 = dVar15 * dVar6 * dVar4 +
                   (double)(-(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar16 * dVar18)) *
                   dVar12 * dVar4 + dVar10 * dVar11 * dVar4;
          dVar15 = (1.0 - dVar10) / (dVar10 + 1.0);
          dVar10 = 1.79769313486232e+308;
          if (dVar15 <= 1.79769313486232e+308) {
            dVar10 = dVar15;
          }
          dVar10 = (double)(~-(ulonglong)(dVar15 < 0.0) & (ulonglong)dVar10);
          if (dVar10 < 0.0) {
            dVar10 = sqrt(dVar10);
          }
          else {
            dVar10 = SQRT(dVar10);
          }
          if (local_104 != 0xffffffff) {
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_104 >> 9) * 8);
            uVar8 = (ulonglong)(local_104 & 0x1ff);
            dVar15 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18) - local_180;
            dVar17 = *(double *)(lVar3 + 8 + uVar8 * 0x18) - local_178;
            dVar16 = *(double *)(lVar3 + uVar8 * 0x18) - local_170;
            dVar18 = SQRT(dVar15 * dVar15 + dVar16 * dVar16 + dVar17 * dVar17);
            dVar19 = 1.0 / dVar18;
            if (0.0 < dVar18) {
              dVar15 = dVar15 * dVar19;
              dVar17 = dVar17 * dVar19;
            }
            else {
              dVar15 = 0.0;
              dVar17 = 0.0;
            }
            dVar12 = dVar6 * dVar4 * dVar15 +
                     dVar12 * dVar4 *
                     (double)(-(ulonglong)(0.0 < dVar18) & (ulonglong)(dVar16 * dVar19)) +
                     dVar11 * dVar4 * dVar17;
            dVar11 = (1.0 - dVar12) / (dVar12 + 1.0);
            dVar12 = 1.79769313486232e+308;
            if (dVar11 <= 1.79769313486232e+308) {
              dVar12 = dVar11;
            }
            dVar12 = (double)(~-(ulonglong)(dVar11 < 0.0) & (ulonglong)dVar12);
            if (dVar12 < 0.0) {
              dVar12 = sqrt(dVar12);
            }
            else {
              dVar12 = SQRT(dVar12);
            }
            dVar10 = dVar10 + dVar12;
          }
          dVar10 = dVar10 / dVar7;
          dVar12 = local_168;
          if (dVar10 <= local_168) {
            dVar12 = dVar10;
          }
          uVar8 = ~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar12;
          uVar20 = (undefined4)uVar8;
          uVar21 = (undefined4)(uVar8 >> 0x20);
        }
      }
      if (local_128 == 0) {
        local_130 = (longlong *)CONCAT44(0xffffffff,(uint)local_130);
        local_120 = 0xffffffffffffffff;
        local_120._4_4_ = -1;
        local_120._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_138);
      }
      dVar5 = dVar5 + dVar14 * (double)CONCAT44(uVar21,uVar20);
      dVar2 = local_148 + dVar2 * (double)CONCAT44(uVar21,uVar20);
      dVar13 = local_140 + dVar13 * (double)CONCAT44(uVar21,uVar20);
      dVar14 = local_150 + (double)CONCAT44(uVar21,uVar20);
    } while (((local_138 != puVar1) || ((uint)local_130 != uVar9)) ||
            (((int)local_120 != -1 || (local_120._4_4_ != -1))));
    param_1 = local_158;
    if (9.999999974752427e-07 <= dVar14) {
      dVar14 = 1.0 / dVar14;
      *local_158 = dVar13 * dVar14;
      local_158[1] = dVar2 * dVar14;
      local_158[2] = dVar5 * dVar14;
      goto LAB_1482cb87c;
    }
  }
  local_130 = &local_f8;
  local_138 = &LAB_143b031b8;
  FUN_1482cacfa(param_1,param_2,param_3 & 0xffffffff);
LAB_1482cb87c:
  if ((local_f0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482cb936 FUN_1482cb936 body=1511 status=ok
// SIG undefined FUN_1482cb936(void)

double * FUN_1482cb936(double *param_1,longlong param_2,ulonglong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_1a8 [32];
  uint *local_188;
  uint *local_180;
  undefined4 *local_178;
  undefined4 *local_170;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_148 [16];
  longlong local_130;
  uint local_128;
  undefined4 local_124;
  int local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  ulonglong local_f0;
  
  dVar6 = DAT_14c8464f0;
  dVar7 = DAT_14c8464e8;
  dVar9 = DAT_14c8464e0;
  uVar11 = (uint)param_3;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (param_3 >> 9 & 0x7fffff) * 8);
  uVar10 = (ulonglong)(uVar11 & 0x1ff);
  dVar1 = *(double *)(lVar4 + uVar10 * 0x18);
  dVar2 = *(double *)(lVar4 + 8 + uVar10 * 0x18);
  dVar3 = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
  local_f4 = 0xffffffff;
  local_f8 = 0xffffffff;
  local_100 = 0xffffffff;
  local_104 = 0xffffffff;
  lVar4 = param_2 + 0xb8;
  FUN_146be983e(&local_130,lVar4,param_3,0);
  if (((local_130 == lVar4) && (local_128 == uVar11)) && ((int)local_118 == -1)) {
    dVar12 = 0.0;
    if (local_118._4_4_ == -1) goto LAB_1482cba7b;
  }
  dVar12 = 0.0;
  do {
    local_fc = 0xffffffff;
    local_170 = &local_104;
    local_178 = &local_100;
    local_188 = &local_f8;
    local_180 = &local_fc;
    FUN_146c12c58(param_2,local_110,param_3 & 0xffffffff,&local_f4);
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_f4 >> 9) * 8);
    uVar10 = (ulonglong)local_f4 & 0x1ff;
    local_150 = *(double *)(lVar5 + uVar10 * 0x18);
    local_158 = *(double *)(lVar5 + 8 + uVar10 * 0x18);
    local_160 = *(double *)(lVar5 + 0x10 + uVar10 * 0x18);
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_f8 >> 9) * 8);
    uVar10 = (ulonglong)local_f8 & 0x1ff;
    dVar19 = *(double *)(lVar5 + uVar10 * 0x18);
    dVar14 = *(double *)(lVar5 + 8 + uVar10 * 0x18);
    dVar15 = *(double *)(lVar5 + 0x10 + uVar10 * 0x18);
    dVar13 = local_160 - dVar15;
    dVar17 = local_158 - dVar14;
    dVar16 = local_150 - dVar19;
    dVar15 = dVar3 - dVar15;
    dVar14 = dVar2 - dVar14;
    dVar19 = dVar1 - dVar19;
    dVar8 = dVar15 * dVar13 + dVar19 * dVar16 + dVar14 * dVar17;
    dVar14 = (dVar13 * dVar13 + dVar16 * dVar16 + dVar17 * dVar17) *
             (dVar15 * dVar15 + dVar19 * dVar19 + dVar14 * dVar14) - dVar8 * dVar8;
    dVar19 = 1.79769313486232e+308;
    if (dVar14 <= 1.79769313486232e+308) {
      dVar19 = dVar14;
    }
    dVar19 = (double)(~-(ulonglong)(dVar14 < 0.0) & (ulonglong)dVar19);
    if (dVar19 < 1e-08) goto LAB_1482cbac0;
    if (dVar19 < 0.0) {
      dVar19 = sqrt(dVar19);
    }
    else {
      dVar19 = SQRT(dVar19);
    }
    dVar8 = dVar8 / dVar19;
    if ((dVar8 == 0.0) && (!NAN(dVar8))) goto LAB_1482cbac0;
    if (local_fc != 0xffffffff) {
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_fc >> 9) * 8);
      uVar10 = (ulonglong)(local_fc & 0x1ff);
      dVar19 = *(double *)(lVar5 + uVar10 * 0x18);
      dVar14 = *(double *)(lVar5 + 8 + uVar10 * 0x18);
      dVar15 = *(double *)(lVar5 + 0x10 + uVar10 * 0x18);
      dVar16 = local_160 - dVar15;
      dVar18 = local_158 - dVar14;
      dVar17 = local_150 - dVar19;
      dVar15 = dVar3 - dVar15;
      dVar14 = dVar2 - dVar14;
      dVar19 = dVar1 - dVar19;
      local_148._8_8_ = 0;
      local_148._0_8_ = dVar12;
      dVar13 = dVar15 * dVar16 + dVar19 * dVar17 + dVar14 * dVar18;
      dVar14 = (dVar16 * dVar16 + dVar17 * dVar17 + dVar18 * dVar18) *
               (dVar15 * dVar15 + dVar19 * dVar19 + dVar14 * dVar14) - dVar13 * dVar13;
      dVar19 = 1.79769313486232e+308;
      if (dVar14 <= 1.79769313486232e+308) {
        dVar19 = dVar14;
      }
      dVar19 = (double)(~-(ulonglong)(dVar14 < 0.0) & (ulonglong)dVar19);
      if (dVar19 < 1e-08) goto LAB_1482cbac0;
      if (dVar19 < 0.0) {
        dVar19 = sqrt(dVar19);
      }
      else {
        dVar19 = SQRT(dVar19);
      }
      dVar13 = dVar13 / dVar19;
      if ((dVar13 == 0.0) && (!NAN(dVar13))) goto LAB_1482cbac0;
      dVar8 = dVar8 + dVar13;
    }
    if (local_120 == 0) {
      local_124 = 0xffffffff;
      local_118 = 0xffffffffffffffff;
      local_118._4_4_ = -1;
      local_118._0_4_ = -1;
    }
    else {
      FUN_146be9922(&local_130);
    }
    dVar6 = dVar6 + local_160 * dVar8;
    dVar7 = dVar7 + local_158 * dVar8;
    dVar9 = dVar9 + local_150 * dVar8;
    dVar12 = dVar12 + dVar8;
  } while ((((local_130 != lVar4) || (local_128 != uVar11)) || ((int)local_118 != -1)) ||
          (local_118._4_4_ != -1));
LAB_1482cba7b:
  if (1e-08 <= ABS(dVar12)) {
    dVar12 = 1.0 / dVar12;
    dVar3 = dVar6 * dVar12;
    dVar2 = dVar7 * dVar12;
    dVar1 = dVar9 * dVar12;
  }
LAB_1482cbac0:
  *param_1 = dVar1;
  param_1[1] = dVar2;
  param_1[2] = dVar3;
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1482cbf1e FUN_1482cbf1e body=1604 status=ok
// SIG undefined FUN_1482cbf1e(void)

double * FUN_1482cbf1e(double *param_1,longlong param_2,ulonglong param_3,double param_4,
                      char *param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_1a8 [32];
  uint *local_188;
  uint *local_180;
  undefined4 *local_178;
  undefined4 *local_170;
  double *local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  longlong local_130;
  uint local_128;
  undefined4 local_124;
  int local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  ulonglong local_f0;
  
  dVar7 = DAT_14c8464f0;
  dVar6 = DAT_14c8464e8;
  dVar5 = DAT_14c8464e0;
  uVar10 = (uint)param_3;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (param_3 >> 9 & 0x7fffff) * 8);
  uVar8 = (ulonglong)(uVar10 & 0x1ff);
  local_148 = *(double *)(lVar3 + uVar8 * 0x18);
  local_150 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
  local_158 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
  local_f4 = 0xffffffff;
  local_f8 = 0xffffffff;
  local_fc = 0xffffffff;
  local_100 = 0xffffffff;
  local_104 = 0xffffffff;
  lVar3 = param_2 + 0xb8;
  cVar9 = '\0';
  local_138 = param_4;
  FUN_146be983e(&local_130,lVar3,param_3,0);
  if (((local_130 == lVar3) && (local_128 == uVar10)) && ((int)local_118 == -1)) {
    dVar13 = 0.0;
    if (local_118._4_4_ == -1) goto LAB_1482cc473;
  }
  dVar13 = 0.0;
  local_160 = param_1;
  do {
    local_fc = 0xffffffff;
    local_170 = &local_104;
    local_178 = &local_100;
    local_188 = &local_f8;
    local_180 = &local_fc;
    FUN_146c12c58(param_2,local_110,param_3 & 0xffffffff,&local_f4);
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_f4 >> 9) * 8);
    uVar8 = (ulonglong)local_f4 & 0x1ff;
    dVar1 = *(double *)(lVar4 + uVar8 * 0x18);
    dVar2 = *(double *)(lVar4 + 8 + uVar8 * 0x18);
    local_140 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_f8 >> 9) * 8);
    uVar8 = (ulonglong)local_f8 & 0x1ff;
    dVar19 = *(double *)(lVar4 + uVar8 * 0x18);
    dVar12 = *(double *)(lVar4 + 8 + uVar8 * 0x18);
    dVar14 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
    dVar11 = local_140 - dVar14;
    dVar17 = dVar2 - dVar12;
    dVar16 = dVar1 - dVar19;
    dVar14 = local_158 - dVar14;
    dVar12 = local_150 - dVar12;
    dVar19 = local_148 - dVar19;
    dVar15 = dVar14 * dVar11 + dVar19 * dVar16 + dVar12 * dVar17;
    dVar12 = (dVar11 * dVar11 + dVar16 * dVar16 + dVar17 * dVar17) *
             (dVar14 * dVar14 + dVar19 * dVar19 + dVar12 * dVar12) - dVar15 * dVar15;
    dVar19 = 1.79769313486232e+308;
    if (dVar12 <= 1.79769313486232e+308) {
      dVar19 = dVar12;
    }
    dVar19 = (double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar19);
    dVar12 = 0.0;
    if (1e-08 <= dVar19) {
      if (dVar19 < 0.0) {
        dVar19 = sqrt(dVar19);
      }
      else {
        dVar19 = SQRT(dVar19);
      }
      dVar12 = dVar15 / dVar19;
    }
    if (local_fc == 0xffffffff) {
      dVar19 = 0.0;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_fc >> 9) * 8);
      uVar8 = (ulonglong)(local_fc & 0x1ff);
      dVar19 = *(double *)(lVar4 + uVar8 * 0x18);
      dVar14 = *(double *)(lVar4 + 8 + uVar8 * 0x18);
      dVar15 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
      dVar16 = local_140 - dVar15;
      dVar18 = dVar2 - dVar14;
      dVar17 = dVar1 - dVar19;
      dVar15 = local_158 - dVar15;
      dVar14 = local_150 - dVar14;
      dVar19 = local_148 - dVar19;
      dVar11 = dVar15 * dVar16 + dVar19 * dVar17 + dVar14 * dVar18;
      dVar15 = (dVar16 * dVar16 + dVar17 * dVar17 + dVar18 * dVar18) *
               (dVar15 * dVar15 + dVar19 * dVar19 + dVar14 * dVar14) - dVar11 * dVar11;
      dVar14 = 1.79769313486232e+308;
      if (dVar15 <= 1.79769313486232e+308) {
        dVar14 = dVar15;
      }
      dVar19 = 0.0;
      dVar14 = (double)(~-(ulonglong)(dVar15 < 0.0) & (ulonglong)dVar14);
      if (1e-08 <= dVar14) {
        if (dVar14 < 0.0) {
          dVar14 = sqrt(dVar14);
        }
        else {
          dVar14 = SQRT(dVar14);
        }
        dVar19 = dVar11 / dVar14;
      }
    }
    dVar12 = dVar12 + dVar19;
    uVar8 = -(ulonglong)(-dVar12 <= dVar12);
    if (local_138 < (double)(~uVar8 & (ulonglong)-dVar12 | uVar8 & (ulonglong)dVar12)) {
      cVar9 = '\x01';
      param_1 = local_160;
      goto LAB_1482cc473;
    }
    if (local_120 == 0) {
      local_124 = 0xffffffff;
      local_118 = 0xffffffffffffffff;
      local_118._4_4_ = -1;
      local_118._0_4_ = -1;
    }
    else {
      FUN_146be9922(&local_130);
    }
    dVar5 = dVar5 + dVar1 * dVar12;
    dVar6 = dVar6 + dVar2 * dVar12;
    dVar7 = dVar7 + local_140 * dVar12;
    dVar13 = dVar13 + dVar12;
  } while (((local_130 != lVar3) || (local_128 != uVar10)) ||
          (((int)local_118 != -1 || (local_118._4_4_ != -1))));
  cVar9 = '\0';
  param_1 = local_160;
LAB_1482cc473:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar9;
  }
  if ((cVar9 != '\0') || (ABS(dVar13) < 1e-08)) {
    FUN_146c14004(param_2,param_3 & 0xffffffff,param_1);
  }
  else {
    dVar13 = 1.0 / dVar13;
    *param_1 = dVar5 * dVar13;
    param_1[1] = dVar6 * dVar13;
    param_1[2] = dVar7 * dVar13;
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1482cc563 FUN_1482cc563 body=1589 status=ok
// SIG undefined FUN_1482cc563(void)

double * FUN_1482cc563(double *param_1,longlong param_2,int param_3,undefined8 *param_4,
                      double param_5,char *param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  int *local_1c0;
  undefined4 *local_1b8;
  undefined4 *local_1b0;
  double *local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  double local_190;
  double local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  int local_150;
  undefined4 uStack_14c;
  int local_148;
  undefined4 local_144;
  int local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  double local_110;
  double local_108;
  double local_100;
  int local_f4;
  ulonglong local_f0;
  
  dVar4 = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  dVar2 = DAT_14c8464e0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_150 = param_3;
  (*(code *)*param_4)(&local_110,param_4[1]);
  local_114 = 0xffffffff;
  local_118 = 0xffffffff;
  local_11c = -1;
  local_120 = 0xffffffff;
  local_124 = 0xffffffff;
  lVar1 = param_2 + 0xb8;
  cVar5 = '\0';
  FUN_146be983e(&local_150,lVar1,param_3,0);
  if (((CONCAT44(uStack_14c,local_150) == lVar1) && (local_148 == param_3)) &&
     ((int)local_138 == -1)) {
    dVar9 = 0.0;
    if (local_138._4_4_ == -1) goto LAB_1482ccaaa;
  }
  dVar9 = 0.0;
  local_1a0 = param_1;
  do {
    local_11c = -1;
    local_1b0 = &local_124;
    local_1b8 = &local_120;
    local_1c0 = &local_11c;
    local_1c8 = &local_118;
    FUN_146c12c58(param_2,local_130,param_3,&local_114);
    local_180 = local_114;
    (*(code *)*param_4)(&local_168,param_4[1],&local_180);
    local_198 = local_118;
    (*(code *)*param_4)(&local_180,param_4[1],&local_198);
    dVar7 = local_158 - local_170;
    dVar12 = local_160 - local_178;
    dVar10 = local_168 - (double)CONCAT44(uStack_17c,local_180);
    dVar13 = local_100 - local_170;
    dVar8 = local_108 - local_178;
    dVar14 = local_110 - (double)CONCAT44(uStack_17c,local_180);
    dVar11 = dVar13 * dVar7 + dVar14 * dVar10 + dVar12 * dVar8;
    dVar7 = (dVar7 * dVar7 + dVar10 * dVar10 + dVar12 * dVar12) *
            (dVar13 * dVar13 + dVar14 * dVar14 + dVar8 * dVar8) - dVar11 * dVar11;
    dVar8 = 1.79769313486232e+308;
    if (dVar7 <= 1.79769313486232e+308) {
      dVar8 = dVar7;
    }
    dVar8 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar8);
    dVar7 = 0.0;
    if (1e-08 <= dVar8) {
      if (dVar8 < 0.0) {
        dVar8 = sqrt(dVar8);
      }
      else {
        dVar8 = SQRT(dVar8);
      }
      dVar7 = dVar11 / dVar8;
    }
    if (local_11c == -1) {
      dVar11 = 0.0;
    }
    else {
      local_f4 = local_11c;
      (*(code *)*param_4)(&local_198,param_4[1],&local_f4);
      dVar10 = local_158 - local_188;
      dVar13 = local_160 - local_190;
      dVar12 = local_168 - (double)CONCAT44(uStack_194,local_198);
      dVar14 = local_100 - local_188;
      dVar11 = local_108 - local_190;
      dVar15 = local_110 - (double)CONCAT44(uStack_194,local_198);
      dVar8 = dVar14 * dVar10 + dVar15 * dVar12 + dVar13 * dVar11;
      dVar12 = (dVar10 * dVar10 + dVar12 * dVar12 + dVar13 * dVar13) *
               (dVar14 * dVar14 + dVar15 * dVar15 + dVar11 * dVar11) - dVar8 * dVar8;
      dVar10 = 1.79769313486232e+308;
      if (dVar12 <= 1.79769313486232e+308) {
        dVar10 = dVar12;
      }
      dVar11 = 0.0;
      dVar10 = (double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar10);
      if (1e-08 <= dVar10) {
        if (dVar10 < 0.0) {
          dVar10 = sqrt(dVar10);
        }
        else {
          dVar10 = SQRT(dVar10);
        }
        dVar11 = dVar8 / dVar10;
      }
    }
    dVar7 = dVar7 + dVar11;
    uVar6 = -(ulonglong)(-dVar7 <= dVar7);
    if (param_5 < (double)(~uVar6 & (ulonglong)-dVar7 | uVar6 & (ulonglong)dVar7)) {
      cVar5 = '\x01';
      param_1 = local_1a0;
      goto LAB_1482ccaaa;
    }
    dVar11 = local_158 * dVar7;
    dVar10 = local_160 * dVar7;
    dVar8 = local_168 * dVar7;
    if (local_140 == 0) {
      local_144 = 0xffffffff;
      local_138 = 0xffffffffffffffff;
      local_138._4_4_ = -1;
      local_138._0_4_ = -1;
    }
    else {
      FUN_146be9922(&local_150);
    }
    dVar2 = dVar2 + dVar8;
    dVar3 = dVar3 + dVar10;
    dVar4 = dVar4 + dVar11;
    dVar9 = dVar9 + dVar7;
  } while (((CONCAT44(uStack_14c,local_150) != lVar1) || (local_148 != param_3)) ||
          (((int)local_138 != -1 || (local_138._4_4_ != -1))));
  cVar5 = '\0';
  param_1 = local_1a0;
LAB_1482ccaaa:
  if (param_6 != (char *)0x0) {
    *param_6 = cVar5;
  }
  if ((cVar5 != '\0') || (ABS(dVar9) < 1e-08)) {
    FUN_146c14004(param_2,param_3,param_1);
  }
  else {
    dVar9 = 1.0 / dVar9;
    *param_1 = dVar2 * dVar9;
    param_1[1] = dVar3 * dVar9;
    param_1[2] = dVar4 * dVar9;
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1482ccb99 FUN_1482ccb99 body=2177 status=ok
// SIG undefined FUN_1482ccb99(void)

double FUN_1482ccb99(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
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
  undefined1 auStack_378 [40];
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  longlong local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  undefined4 local_2cc;
  code *local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  undefined8 local_2a8;
  code *local_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  int iStack_288;
  int iStack_284;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_26c;
  longlong local_268 [2];
  longlong *local_258;
  longlong local_248 [4];
  code *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  int iStack_210;
  int iStack_20c;
  undefined **local_208;
  code *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  longlong local_1c8 [2];
  longlong *local_1b8;
  longlong local_1a8 [4];
  longlong local_188 [2];
  longlong *local_178;
  longlong local_168 [4];
  code *local_148;
  undefined8 uStack_140;
  int iStack_130;
  int iStack_12c;
  undefined8 local_128;
  code *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_228 = (code *)CONCAT44(local_228._4_4_,param_2);
  (*(code *)*param_3)(&local_2e8,param_3[1],&local_228);
  local_218 = 0;
  local_208 = &PTR_LAB_149f3aae0;
  uStack_1f8 = CONCAT44(uStack_1f8._4_4_,param_2);
  local_228 = FUN_146be9588;
  local_2c8 = (code *)(param_1 + 0xb8);
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,param_2);
  local_330 = param_1;
  local_200 = (code *)param_1;
  FUN_146be94ac(local_188,&local_2c8,&local_228);
  local_1d8 = 0xffffffffffffffff;
  local_1c8[0] = 0;
  local_1b8 = (longlong *)0x0;
  local_228 = local_148;
  uStack_220 = uStack_140;
  iStack_210 = iStack_130;
  iStack_20c = iStack_12c;
  local_208 = (undefined **)local_128;
  local_200 = local_120;
  uStack_1f8 = uStack_118;
  local_1e0 = local_100;
  FUN_146be971a(local_1c8,local_188);
  local_1cc = 0;
  FUN_146bfd1f0(&local_228);
  local_278 = 0xffffffffffffffff;
  local_268[0] = 0;
  local_258 = (longlong *)0x0;
  local_2c8 = local_120;
  uStack_2c0 = uStack_118;
  local_2b8 = local_110;
  uStack_2b4 = uStack_10c;
  iStack_2b0 = iStack_108;
  iStack_2ac = iStack_104;
  local_2a8 = local_100;
  local_2a0 = local_120;
  uStack_298 = uStack_118;
  local_290 = local_110;
  uStack_28c = uStack_10c;
  iStack_288 = iStack_108;
  iStack_284 = iStack_104;
  local_280 = local_100;
  FUN_146be971a(local_268,local_188);
  local_26c = 0;
  FUN_146bfd1f0(&local_2c8);
  dVar12 = 0.0;
  while ((((local_228 != local_2c8 || ((int)uStack_220 != (int)uStack_2c0)) ||
          (iStack_210 != iStack_2b0)) || (iStack_20c != iStack_2ac))) {
    lVar1 = *(longlong *)(*(longlong *)(local_330 + 0x130) + (ulonglong)(local_1d0 >> 9) * 8);
    uVar2 = *(undefined8 *)(lVar1 + (ulonglong)(local_1d0 & 0x1ff) * 0xc);
    local_2f8 = uVar2;
    uVar2 = local_2f8;
    local_2f0 = *(undefined4 *)(lVar1 + 8 + (ulonglong)(local_1d0 & 0x1ff) * 0xc);
    local_2f8._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    iVar10 = (local_2f8._4_4_ != param_2) + 1;
    if ((int)uVar2 == param_2) {
      iVar10 = 0;
    }
    iVar8 = iVar10 + 1;
    if (iVar10 + 1 == 3) {
      iVar8 = 0;
    }
    local_328 = *(undefined4 *)((longlong)&local_2f8 + (longlong)iVar8 * 4);
    local_2f8 = uVar2;
    (*(code *)*param_3)(&local_310,param_3[1],&local_328);
    local_2cc = *(undefined4 *)
                 ((longlong)&local_2f8 + (ulonglong)(((iVar10 + 2U) / 3) * -3 + iVar10 + 2) * 4);
    (*(code *)*param_3)(&local_328,param_3[1],&local_2cc);
    cVar7 = FUN_1482ffd46(&local_2e8,&local_310,&local_328);
    dVar11 = local_2d8;
    dVar3 = local_2e8;
    dVar13 = local_310;
    dVar20 = (double)CONCAT44(uStack_324,local_328);
    if (cVar7 == '\0') {
      dVar6 = local_2d8 - local_318;
      dVar14 = local_2e0 - local_320;
      dVar4 = local_2e8 - dVar20;
      local_340 = local_300;
      dVar5 = local_300 - local_318;
      local_348 = local_308;
      dVar18 = local_308 - local_320;
      dVar20 = local_310 - dVar20;
      dVar15 = dVar6 * dVar5 + dVar4 * dVar20 + dVar14 * dVar18;
      dVar6 = dVar6 * dVar6 + dVar4 * dVar4 + dVar14 * dVar14;
      dVar4 = dVar5 * dVar5 + dVar20 * dVar20 + dVar18 * dVar18;
      dVar16 = dVar6 * dVar4 - dVar15 * dVar15;
      dVar14 = 1.79769313486232e+308;
      if (dVar16 <= 1.79769313486232e+308) {
        dVar14 = dVar16;
      }
      dVar19 = 0.0;
      dVar14 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar14);
      dVar16 = 0.0;
      dVar17 = local_2e0;
      local_338 = dVar12;
      if (1e-08 <= dVar14) {
        if (dVar14 < 0.0) {
          local_350 = local_2e0;
          dVar14 = sqrt(dVar14);
          dVar17 = local_350;
        }
        else {
          dVar14 = SQRT(dVar14);
        }
        dVar16 = dVar15 / dVar14;
      }
      dVar15 = local_338;
      dVar11 = dVar11 - local_340;
      dVar17 = dVar17 - local_348;
      dVar3 = dVar3 - dVar13;
      dVar13 = (-dVar20 * dVar3 - dVar18 * dVar17) - dVar5 * dVar11;
      dVar20 = dVar11 * dVar11 + dVar3 * dVar3 + dVar17 * dVar17;
      dVar12 = dVar4 * dVar20 - dVar13 * dVar13;
      dVar11 = 1.79769313486232e+308;
      if (dVar12 <= 1.79769313486232e+308) {
        dVar11 = dVar12;
      }
      dVar11 = (double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar11);
      if (1e-08 <= dVar11) {
        if (dVar11 < 0.0) {
          dVar11 = sqrt(dVar11);
        }
        else {
          dVar11 = SQRT(dVar11);
        }
        dVar19 = dVar13 / dVar11;
      }
      dVar12 = 1000.0;
      if (dVar16 <= 1000.0) {
        dVar12 = dVar16;
      }
      dVar11 = 1000.0;
      if (dVar19 <= 1000.0) {
        dVar11 = dVar19;
      }
      dVar12 = dVar6 * (double)(-(ulonglong)(dVar19 < -1000.0) & 0xc08f400000000000 |
                               ~-(ulonglong)(dVar19 < -1000.0) & (ulonglong)dVar11) * 0.125 +
               dVar20 * (double)(-(ulonglong)(dVar16 < -1000.0) & 0xc08f400000000000 |
                                ~-(ulonglong)(dVar16 < -1000.0) & (ulonglong)dVar12) * 0.125 +
               dVar15;
    }
    else {
      dVar4 = local_300 - local_2d8;
      dVar3 = local_308 - local_2e0;
      dVar6 = local_310 - local_2e8;
      dVar5 = local_318 - local_2d8;
      dVar18 = local_320 - local_2e0;
      dVar20 = dVar20 - local_2e8;
      dVar13 = dVar4 * dVar5 + dVar6 * dVar20 + dVar3 * dVar18;
      dVar11 = dVar4 * dVar4 + dVar6 * dVar6 + dVar3 * dVar3;
      dVar15 = dVar5 * dVar5 + dVar20 * dVar20 + dVar18 * dVar18;
      dVar13 = dVar11 * dVar15 - dVar13 * dVar13;
      if (dVar13 < 0.0) {
        dVar13 = sqrt(dVar13);
      }
      else {
        dVar13 = SQRT(dVar13);
      }
      dVar11 = SQRT(dVar11);
      dVar14 = 1.0 / dVar11;
      if (0.0 < dVar11) {
        dVar6 = dVar6 * dVar14;
        dVar3 = dVar3 * dVar14;
      }
      else {
        dVar6 = 0.0;
        dVar3 = 0.0;
      }
      dVar15 = SQRT(dVar15);
      dVar16 = 1.0 / dVar15;
      if (0.0 < dVar15) {
        dVar20 = dVar20 * dVar16;
        dVar18 = dVar18 * dVar16;
      }
      else {
        dVar20 = 0.0;
        dVar18 = 0.0;
      }
      dVar20 = (double)(-(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar5 * dVar16)) *
               (double)(-(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar4 * dVar14)) +
               dVar3 * dVar18 + dVar6 * dVar20;
      dVar11 = 1.0;
      if (dVar20 <= 1.0) {
        dVar11 = dVar20;
      }
      dVar11 = acos((double)(-(ulonglong)(dVar20 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar20 < -1.0) & (ulonglong)dVar11));
      dVar12 = dVar12 + dVar13 * 0.5 *
                        *(double *)(&DAT_14ae72850 + (ulonglong)(1.5707963267948966 < dVar11) * 8);
    }
    FUN_146bfd1f0(&local_228);
  }
  if (local_268[0] != 0) {
    plVar9 = local_258;
    if (local_258 == (longlong *)0x0) {
      plVar9 = local_248;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_1c8[0] != 0) {
    plVar9 = local_1b8;
    if (local_1b8 == (longlong *)0x0) {
      plVar9 = local_1a8;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_188[0] != 0) {
    if (local_178 == (longlong *)0x0) {
      local_178 = local_168;
    }
    (**(code **)(*local_178 + 0x10))();
  }
  if ((local_f0 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return dVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482cd41c FUN_1482cd41c body=646 status=ok
// SIG undefined FUN_1482cd41c(void)

void FUN_1482cd41c(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  double local_78;
  undefined1 *local_70;
  double *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1[1] + 0x170) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x254) = 0;
    FUN_145a22d80(param_1 + 0x56);
    if (0 < (int)param_1[0x54]) {
      iVar5 = 0;
      do {
        cVar3 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar3 != '\0') goto LAB_1482cd455;
        iVar4 = FUN_14837c154(param_1);
      } while ((0.01 <= (double)iVar4 / (double)*(int *)(param_1[1] + 0x200)) &&
              (iVar5 = iVar5 + 1, iVar5 < (int)param_1[0x54]));
    }
    FUN_145a22d80(param_1 + 0x56);
    lVar1 = param_1[0x2f];
    dVar2 = (double)param_1[0x2d];
    cVar3 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar3 == '\0') {
      iVar5 = 0;
      do {
        local_70 = &LAB_143b031ec;
        local_68 = &local_78;
        FUN_14837c7a2(param_1,&local_70);
        if (*(int *)((longlong)param_1 + 0x2a4) / 2 < iVar5) {
          param_1[0x2f] = (longlong)((double)param_1[0x2f] * 0.9);
        }
        local_78 = 0.0;
        if ((char)param_1[0x4a] == '\x01') {
          FUN_1482cd6a4(param_1,&local_78);
        }
        else {
          FUN_1482cdc86(param_1,&local_78,0);
        }
        if (((*(int *)((longlong)param_1 + 0x2a4) <= iVar5) ||
            (((int)param_1[0x57] <= *(int *)((longlong)param_1 + 0x2e4) && (local_78 <= dVar2 * 0.1)
             ))) || ((*(int *)((longlong)param_1 + 0x3ec) != 0 &&
                     (*(int *)((longlong)param_1 + 0x3ec) <= *(int *)(param_1[1] + 0x170))))) break;
        iVar5 = iVar5 + 1;
        cVar3 = (**(code **)(*param_1 + 8))(param_1);
      } while (cVar3 == '\0');
    }
    param_1[0x2f] = lVar1;
    if ((param_1[0x1a] != 0) && (0 < *(int *)((longlong)param_1 + 0x3cc))) {
      iVar5 = 0;
      do {
        cVar3 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar3 != '\0') break;
        local_78 = 0.0;
        if ((char)param_1[0x4a] == '\x01') {
          FUN_1482cd6a4(param_1,&local_78,1);
        }
        else {
          FUN_1482cdc86(param_1,&local_78,1);
        }
        if ((local_78 == 0.0) && (!NAN(local_78))) break;
        FUN_1482cf0e6(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((longlong)param_1 + 0x3cc));
    }
  }
LAB_1482cd455:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482cd6a4 FUN_1482cd6a4 body=1505 status=ok
// SIG undefined FUN_1482cd6a4(void)

void FUN_1482cd6a4(double *param_1,undefined8 *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar15 [12];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_1c8 [40];
  undefined4 local_1a0;
  double **local_198;
  undefined8 *local_188;
  double local_180;
  longlong local_178;
  undefined8 uStack_170;
  int local_15c;
  int local_158;
  undefined1 local_151;
  double *local_150;
  double *local_148;
  double **local_140;
  code *local_138;
  undefined8 local_130;
  double *local_128;
  int *local_120;
  int *local_118;
  double **local_110;
  undefined1 *local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [4];
  double local_c8;
  longlong local_b8 [2];
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  undefined8 extraout_XMM0_Qb;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  iVar8 = *(int *)((longlong)param_1[1] + 0x140) * 0x200 + *(int *)((longlong)param_1[1] + 0x144);
  dVar9 = param_1[0x1a];
  if (*(int *)(param_1 + 0x84) < iVar8 * 3) {
    FUN_140b463b8(param_1 + 0x83,iVar8 * 6,1);
  }
  if (*(int *)(param_1 + 0x82) < iVar8 * 3) {
    FUN_146bad8b2(param_1 + 0x81,iVar8 * 6,1);
  }
  iVar8 = *(int *)((longlong)param_1[1] + 0x20) * 0x200 + *(int *)((longlong)param_1[1] + 0x24);
  if (*(int *)(param_1 + 0x80) < iVar8) {
    FUN_146bad8b2(param_1 + 0x7f,iVar8 * 2,1);
  }
  if ((ulonglong)(uint)(*(int *)(param_1 + 0x4d) * 0x200 + *(int *)((longlong)param_1 + 0x26c)) <
      (ulonglong)(longlong)iVar8) {
    FUN_146bee1a4(param_1 + 0x4d,iVar8 * 2);
  }
  if (*(int *)(param_1 + 0x51) < iVar8) {
    FUN_144aa2a62(param_1 + 0x50,iVar8 * 2,1);
  }
  iVar8 = *(int *)((longlong)param_1[1] + 0x1d0) * 0x200 + *(int *)((longlong)param_1[1] + 0x1d4);
  if (*(int *)(param_1 + 0x78) < iVar8) {
    FUN_144aa2a62(param_1 + 0x77,iVar8 * 2,1);
  }
  if (param_3 == '\0') {
    uVar10 = 0x3fe00000;
  }
  else {
    uVar10 = 0x3fd00000;
  }
  dVar1 = (double)((ulonglong)uVar10 << 0x20) * param_1[0x2e];
  dVar2 = (double)*(float *)((longlong)param_1 + 0x3e4) * param_1[0x2e];
  (**(code **)((longlong)*param_1 + 0xa0))(param_1,local_b8);
  local_118 = (int *)CONCAT71(local_118._1_7_,param_3);
  local_108 = (undefined1 *)local_b8[0];
  local_f8[0] = (longlong *)0x0;
  local_128 = param_1;
  local_120 = (int *)dVar9;
  local_110 = (double **)dVar2;
  if (local_b8[0] != 0) {
    plVar6 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar6 = local_98;
    }
    (**(code **)*plVar6)(plVar6,local_f8);
  }
  local_138 = (code *)0x0;
  local_130 = (double **)((ulonglong)local_130._4_4_ << 0x20);
  local_148 = (double *)FUN_143b031f0;
  local_1a0 = 0;
  local_198 = (double **)&local_138;
  local_140 = &local_128;
  local_c8 = dVar1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)((longlong)param_1[1] + 0x140) * 0x200 +
                *(int *)((longlong)param_1[1] + 0x144),1);
  if (local_108 != (undefined1 *)0x0) {
    plVar6 = local_f8[0];
    if (local_f8[0] == (longlong *)0x0) {
      plVar6 = local_e8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_118 = (int *)CONCAT71(local_118._1_7_,param_3);
  local_138 = (code *)0x0;
  local_130 = (double **)((ulonglong)local_130 & 0xffffffff00000000);
  local_148 = (double *)FUN_143b03d10;
  local_1a0 = 0;
  local_198 = (double **)&local_138;
  local_188 = param_2;
  local_140 = &local_128;
  local_128 = param_1;
  local_120 = (int *)param_2;
  local_110 = (double **)dVar1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)((longlong)param_1[1] + 0x20) * 0x200 +
                *(int *)((longlong)param_1[1] + 0x24),1,&local_148);
  local_128 = (double *)0x0;
  local_120 = (int *)((ulonglong)local_120 & 0xffffffff00000000);
  local_138 = FUN_143b04218;
  local_1a0 = 0;
  local_198 = &local_128;
  local_148 = param_1;
  local_130 = &local_148;
  auVar14._0_8_ =
       FUN_1401f8d10(L"ParallelFor Task",
                     *(int *)((longlong)param_1[1] + 0x1d0) * 0x200 +
                     *(int *)((longlong)param_1[1] + 0x1d4),1,&local_138);
  auVar14._8_8_ = extraout_XMM0_Qb;
  auVar15 = auVar14._4_12_;
  dVar9 = param_1[1];
  uVar12 = *(int *)((longlong)dVar9 + 0x1d0) * 0x200 + *(int *)((longlong)dVar9 + 0x1d4);
  uVar10 = 0;
  if ((uVar12 != 0) &&
     (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)dVar9 + 0x1d8) - 1U))) {
    uVar3 = 1;
    uVar11 = 1;
    if (1 < (int)uVar12) {
      uVar11 = uVar12;
    }
    do {
      uVar5 = uVar3;
      uVar10 = uVar11;
      if (uVar11 == uVar5) break;
      uVar3 = uVar5 + 1;
      uVar10 = uVar5;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)dVar9 + 0x1d8))[uVar5 >> 9] +
                                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
  }
  if (uVar10 != uVar12) {
    do {
      if (*(char *)((longlong)param_1[0x77] + (longlong)(int)uVar10) == '\x01') {
        local_128 = (double *)CONCAT44(local_128._4_4_,uVar10);
        auVar14._0_8_ = FUN_1447cbafe(param_1 + 0x56,&local_138,&local_128,0);
        auVar14._8_8_ = extraout_XMM0_Qb_00;
      }
      auVar15 = auVar14._4_12_;
      uVar3 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar12) {
        uVar3 = uVar12;
      }
      do {
        uVar11 = uVar3;
        if (uVar3 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar11 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)dVar9 + 0x1d8) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      uVar10 = uVar11;
    } while (uVar10 != uVar12);
    dVar9 = param_1[1];
  }
  local_180 = 0.0;
  local_158 = *(int *)((longlong)dVar9 + 0x20) * 0x200 + *(int *)((longlong)dVar9 + 0x24);
  auVar13._0_4_ = (float)local_158 * 0.03125;
  auVar13._4_12_ = auVar15;
  auVar14 = roundss(auVar13,auVar13,10);
  local_15c = (int)auVar14._0_4_;
  local_178 = 0;
  uStack_170 = 0;
  local_150 = param_1;
  FUN_1400bd09c(&local_178,0x20,1);
  local_108 = &local_151;
  local_138 = (code *)0x0;
  local_130 = (double **)((ulonglong)local_130 & 0xffffffff00000000);
  local_148 = (double *)FUN_143b04332;
  local_140 = &local_128;
  local_198 = (double **)&local_138;
  local_1a0 = 0;
  local_128 = &local_180;
  local_120 = &local_15c;
  local_118 = &local_158;
  local_110 = &local_150;
  local_100 = &local_178;
  FUN_1401f8d10(L"ParallelFor Task",0x20,1);
  puVar4 = local_188;
  if ((longlong)(int)uStack_170 == 0) {
    uVar16 = SUB84(local_180,0);
    uVar17 = (undefined4)((ulonglong)local_180 >> 0x20);
  }
  else {
    lVar7 = 0;
    dVar9 = local_180;
    do {
      dVar1 = *(double *)(local_178 + lVar7);
      uVar16 = SUB84(dVar1,0);
      uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= dVar9) {
        uVar16 = SUB84(dVar9,0);
        uVar17 = (undefined4)((ulonglong)dVar9 >> 0x20);
      }
      lVar7 = lVar7 + 8;
      dVar9 = (double)CONCAT44(uVar17,uVar16);
    } while ((longlong)(int)uStack_170 * 8 != lVar7);
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  *puVar4 = CONCAT44(uVar17,uVar16);
  (**(code **)((longlong)*param_1 + 0x80))(param_1,1);
  if (local_b8[0] != 0) {
    if (local_a8 == (longlong *)0x0) {
      local_a8 = local_98;
    }
    (**(code **)(*local_a8 + 0x10))();
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482cdc86 FUN_1482cdc86 body=5215 status=ok
// SIG undefined FUN_1482cdc86(void)

void FUN_1482cdc86(longlong *param_1,double *param_2,char param_3)

{
  double *pdVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  double dVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_338 [32];
  double *local_318;
  char local_309;
  double local_308;
  longlong *local_300;
  longlong *local_2f8;
  double *local_2f0;
  double local_2e8;
  longlong local_2e0;
  double local_2d8;
  ulonglong uStack_2d0;
  double local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 *local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 local_1e0;
  uint local_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  longlong local_178 [2];
  undefined8 local_168 [6];
  longlong local_138 [2];
  longlong *local_128;
  longlong local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_2f8 = (longlong *)param_1[0x1a];
  local_2f0 = param_2;
  FUN_1482cf4e4();
  if (param_3 == '\0') {
    uVar15 = 0x3fe00000;
  }
  else {
    uVar15 = 0x3fd00000;
  }
  dVar25 = (double)param_1[0x2e];
  fVar2 = *(float *)((longlong)param_1 + 0x3e4);
  local_309 = param_3;
  (**(code **)(*param_1 + 0xa0))(param_1,local_138);
  lVar3 = param_1[1];
  uVar18 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
  uVar21 = 0;
  if ((uVar18 != 0) &&
     (uVar21 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) {
    uVar22 = 1;
    uVar14 = 1;
    if (1 < (int)uVar18) {
      uVar22 = uVar18;
    }
    do {
      uVar21 = uVar22;
      if (uVar22 == uVar14) break;
      uVar17 = uVar14 >> 9;
      uVar16 = uVar14 & 0x1ff;
      uVar21 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x148))[uVar17] +
                                         (ulonglong)uVar16 * 2) - 1U));
  }
  local_2d8 = (double)((ulonglong)uVar15 << 0x20) * dVar25;
  uStack_2d0 = 0;
  if (uVar21 != uVar18) {
    dVar25 = dVar25 * (double)fVar2;
    local_300 = (longlong *)CONCAT44(local_300._4_4_,uVar18);
    do {
      local_318 = &local_1c8;
      FUN_146c1477c(param_1[1],uVar21,&local_1b0,&local_1d0);
      lVar19 = *(longlong *)(*(longlong *)(param_1[1] + 0x130) + (ulonglong)(uVar21 >> 9) * 8);
      uVar12 = (ulonglong)(uVar21 & 0x1ff);
      local_2e0 = uVar12 * 3;
      local_1d8 = *(uint *)(lVar19 + 8 + uVar12 * 0xc);
      local_1e0 = *(undefined8 *)(lVar19 + uVar12 * 0xc);
      local_1f8 = 1e+30;
      dStack_1f0 = 1e+30;
      local_1e8 = 1e+30;
      local_318 = (double *)CONCAT44(local_318._4_4_,0xffffffff);
      (**(code **)(*local_2f8 + 0x10))(local_2f8,&local_210,&local_1c8,&local_1f8);
      if ((0.9 <= SQRT(local_1a0 * local_1a0 + local_1b0 * local_1b0 + dStack_1a8 * dStack_1a8)) &&
         (unaff_XMM13._8_8_ = 0, unaff_XMM13._0_8_ = dStack_1f0,
         0.9 <= SQRT(local_1e8 * local_1e8 + local_1f8 * local_1f8 + dStack_1f0 * dStack_1f0))) {
        if ((local_309 == '\0') ||
           (((local_308 = local_1b8, (char)param_1[0x7c] != '\x01' ||
             (SQRT((local_1b8 - local_200) * (local_1b8 - local_200) +
                   (local_1c8 - (double)local_210) * (local_1c8 - (double)local_210) +
                   (dStack_1c0 - dStack_208) * (dStack_1c0 - dStack_208)) <= dVar25)) ||
            (*(float *)(param_1 + 0x7d) <= 0.0)))) {
          local_308 = local_1b8;
          dVar24 = (double)param_1[0x7b];
          dVar26 = 1.0 - dVar24;
          local_1e8 = local_1a0 * dVar26 + local_1e8 * dVar24;
          dStack_1f0 = dStack_1a8 * dVar26 + dStack_1f0 * dVar24;
          dVar26 = dVar26 * local_1b0 + local_1f8 * dVar24;
          dVar30 = SQRT(local_1e8 * local_1e8 + dVar26 * dVar26 + dStack_1f0 * dStack_1f0);
          dVar24 = 1.0 / dVar30;
          if (0.0 < dVar30) {
            local_1e8 = local_1e8 * dVar24;
            dStack_1f0 = dStack_1f0 * dVar24;
          }
          else {
            dStack_1f0 = 0.0;
            local_1e8 = 0.0;
          }
          dVar27 = (double)param_1[0x7a];
          local_1f8 = (double)(-(ulonglong)(0.0 < dVar30) & (ulonglong)(dVar26 * dVar24));
          if (SQRT(local_1e8 * local_1e8 + local_1f8 * local_1f8 + dStack_1f0 * dStack_1f0) < 0.1) {
            local_1e8 = local_1a0;
            local_1f8 = local_1b0;
            dStack_1f0 = dStack_1a8;
          }
          dVar26 = 1.0 - dVar27;
          dVar28 = (dVar26 * local_1b8 + local_200 * dVar27) - local_1b8;
          dVar24 = (dVar26 * dStack_1c0 + dStack_208 * dVar27) - dStack_1c0;
          dVar29 = (dVar26 * local_1c8 + (double)local_210 * dVar27) - local_1c8;
          dVar32 = SQRT(dVar28 * dVar28 + dVar29 * dVar29 + dVar24 * dVar24);
          dVar31 = 0.0;
          dVar26 = 0.0;
          dVar30 = 0.0;
          dVar27 = 0.0;
          if (0.0 < dVar32) {
            dVar30 = 1.0 / dVar32;
            dVar31 = dVar29 * dVar30;
            dVar26 = dVar24 * dVar30;
            dVar30 = dVar28 * dVar30;
            dVar27 = dVar32;
          }
          unaff_XMM13._0_8_ = (double)((ulonglong)dVar27 & -(ulonglong)(dVar27 <= local_2d8));
          unaff_XMM13._8_8_ = 0;
          dVar24 = (double)(~-(ulonglong)(dVar27 <= local_2d8) & (ulonglong)local_2d8 |
                           (ulonglong)unaff_XMM13._0_8_);
          local_200 = local_1b8 + dVar30 * dVar24;
          dStack_208 = dStack_1c0 + dVar26 * dVar24;
          local_210 = (undefined8 *)(local_1c8 + dVar24 * dVar31);
          lVar19 = param_1[1];
          lVar5 = *(longlong *)(*(longlong *)(lVar19 + 0x130) + (ulonglong)(uVar21 >> 9) * 8);
          uVar15 = *(uint *)(lVar5 + local_2e0 * 4);
          lVar6 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar12 = (ulonglong)uVar15 & 0x1ff;
          local_218 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18);
          pdVar1 = (double *)(lVar6 + uVar12 * 0x18);
          local_228 = *pdVar1;
          dStack_220 = pdVar1[1];
          uVar15 = *(uint *)(lVar5 + 4 + local_2e0 * 4);
          lVar6 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar12 = (ulonglong)uVar15 & 0x1ff;
          local_238 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18);
          pdVar1 = (double *)(lVar6 + uVar12 * 0x18);
          local_248 = *pdVar1;
          dStack_240 = pdVar1[1];
          uVar15 = *(uint *)(lVar5 + 8 + local_2e0 * 4);
          lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar12 = (ulonglong)uVar15 & 0x1ff;
          local_258 = *(double *)(lVar19 + 0x10 + uVar12 * 0x18);
          pdVar1 = (double *)(lVar19 + uVar12 * 0x18);
          local_268 = *pdVar1;
          dStack_260 = pdVar1[1];
          local_290 = 0;
          uStack_288 = 0;
          local_280 = 0;
          local_278 = 0x3ff0000000000000;
          local_2a8 = (undefined8 *)local_1c8;
          uStack_2a0 = dStack_1c0;
          local_298 = local_1b8;
          local_188 = (double)DAT_14c8463c8;
          local_198 = DAT_14c8463b8;
          dStack_190 = (double)DAT_14c8463c0;
          local_2e8 = dVar25;
          FUN_146bfb7f2(&local_290,&local_198,&local_1b0);
          local_188 = local_218 - local_298;
          dStack_190 = dStack_220 - uStack_2a0;
          local_198 = local_228 - (double)local_2a8;
          FUN_146bf2028(&local_290,&local_2c0,&local_198);
          local_228 = local_2c0;
          dStack_220 = (double)uStack_2b8;
          local_188 = local_238 - local_298;
          dStack_190 = dStack_240 - uStack_2a0;
          local_198 = local_248 - (double)local_2a8;
          local_218 = (double)local_2b0;
          FUN_146bf2028(&local_290,&local_2c0,&local_198);
          local_248 = local_2c0;
          dStack_240 = (double)uStack_2b8;
          local_188 = local_258 - local_298;
          dStack_190 = dStack_260 - uStack_2a0;
          local_198 = local_268 - (double)local_2a8;
          local_238 = (double)local_2b0;
          FUN_146bf2028(&local_290,&local_2c0,&local_198);
          local_268 = local_2c0;
          dStack_260 = (double)uStack_2b8;
          local_258 = (double)local_2b0;
          FUN_1482ae234(&local_2a8,2,&local_1f8);
          local_298 = local_200;
          local_2a8 = local_210;
          uStack_2a0 = dStack_208;
          FUN_146bed047(&local_198,&local_290,&local_228);
          local_218 = local_188 + local_298;
          dStack_220 = dStack_190 + uStack_2a0;
          local_228 = local_198 + (double)local_2a8;
          FUN_146bed047(&local_198,&local_290,&local_248);
          local_238 = local_188 + local_298;
          dStack_240 = dStack_190 + uStack_2a0;
          local_248 = local_198 + (double)local_2a8;
          FUN_146bed047(&local_198,&local_290,&local_268);
          local_258 = local_188 + local_298;
          dStack_260 = dStack_190 + uStack_2a0;
          local_268 = local_198 + (double)local_2a8;
          dVar25 = local_1a0 * local_1e8 + local_1b0 * local_1f8 + dStack_1a8 * dStack_1f0;
          if (1.0 <= dVar25) {
            dVar25 = 1.0;
          }
          if (dVar25 <= 0.0) {
            dVar25 = 0.0;
          }
          dVar25 = dVar25 * dVar25 * dVar25 * local_1d0;
          uVar12 = (ulonglong)(int)(uint)local_1e0;
          lVar19 = *(longlong *)(param_1[0x4e] + (ulonglong)((uint)local_1e0 >> 9) * 8);
          uVar23 = uVar12 & 0x1ff;
          *(double *)(lVar19 + uVar23 * 0x18) =
               local_228 * dVar25 + *(double *)(lVar19 + uVar23 * 0x18);
          *(double *)(lVar19 + 8 + uVar23 * 0x18) =
               dStack_220 * dVar25 + *(double *)(lVar19 + 8 + uVar23 * 0x18);
          *(double *)(lVar19 + 0x10 + uVar23 * 0x18) =
               local_218 * dVar25 + *(double *)(lVar19 + 0x10 + uVar23 * 0x18);
          *(double *)(param_1[0x7f] + uVar12 * 8) = *(double *)(param_1[0x7f] + uVar12 * 8) + dVar25
          ;
          uVar12 = (ulonglong)(int)local_1e0._4_4_;
          lVar19 = *(longlong *)(param_1[0x4e] + (ulonglong)(local_1e0._4_4_ >> 9) * 8);
          uVar23 = uVar12 & 0x1ff;
          *(double *)(lVar19 + uVar23 * 0x18) =
               local_248 * dVar25 + *(double *)(lVar19 + uVar23 * 0x18);
          *(double *)(lVar19 + 8 + uVar23 * 0x18) =
               dStack_240 * dVar25 + *(double *)(lVar19 + 8 + uVar23 * 0x18);
          *(double *)(lVar19 + 0x10 + uVar23 * 0x18) =
               local_238 * dVar25 + *(double *)(lVar19 + 0x10 + uVar23 * 0x18);
          *(double *)(param_1[0x7f] + uVar12 * 8) = *(double *)(param_1[0x7f] + uVar12 * 8) + dVar25
          ;
          uVar12 = (ulonglong)(int)local_1d8;
          lVar19 = *(longlong *)(param_1[0x4e] + (ulonglong)(local_1d8 >> 9) * 8);
          uVar23 = uVar12 & 0x1ff;
          *(double *)(lVar19 + uVar23 * 0x18) =
               local_268 * dVar25 + *(double *)(lVar19 + uVar23 * 0x18);
          *(double *)(lVar19 + 8 + uVar23 * 0x18) =
               dStack_260 * dVar25 + *(double *)(lVar19 + 8 + uVar23 * 0x18);
          *(double *)(lVar19 + 0x10 + uVar23 * 0x18) =
               local_258 * dVar25 + *(double *)(lVar19 + 0x10 + uVar23 * 0x18);
          *(double *)(param_1[0x7f] + uVar12 * 8) = dVar25 + *(double *)(param_1[0x7f] + uVar12 * 8)
          ;
          dVar25 = local_2e8;
        }
        else {
          lVar19 = 0;
          do {
            local_198 = (double)((ulonglong)local_198 & 0xffffffffffffff00);
            local_178[0] = local_138[0];
            local_168[0] = 0;
            if (local_138[0] != 0) {
              plVar13 = local_128;
              if (local_128 == (longlong *)0x0) {
                plVar13 = local_118;
              }
              (**(code **)*plVar13)(plVar13,local_168);
            }
            uVar15 = *(uint *)((longlong)&local_1e0 + lVar19 * 4);
            local_318 = &local_198;
            (**(code **)(*param_1 + 0x90))(param_1,&local_2a8,uVar15,local_178);
            if (local_198._0_1_ == '\x01') {
              dVar26 = (double)*(float *)(param_1 + 0x7d) * (double)param_1[0x2f];
              dVar24 = 1.0 - dVar26;
              local_298 = local_1b8 * dVar24 + local_298 * dVar26;
              uStack_2a0 = dStack_1c0 * dVar24 + uStack_2a0 * dVar26;
              local_2a8 = (undefined8 *)(dVar24 * local_1c8 + dVar26 * (double)local_2a8);
              lVar5 = *(longlong *)(param_1[0x4e] + (ulonglong)(uVar15 >> 9) * 8);
              uVar12 = (ulonglong)(uVar15 & 0x1ff);
              *(double *)(lVar5 + uVar12 * 0x18) =
                   (double)local_2a8 * local_1d0 + *(double *)(lVar5 + uVar12 * 0x18);
              *(double *)(lVar5 + 8 + uVar12 * 0x18) =
                   uStack_2a0 * local_1d0 + *(double *)(lVar5 + 8 + uVar12 * 0x18);
              *(double *)(lVar5 + 0x10 + uVar12 * 0x18) =
                   local_298 * local_1d0 + *(double *)(lVar5 + 0x10 + uVar12 * 0x18);
              *(double *)(param_1[0x7f] + (longlong)(int)uVar15 * 8) =
                   local_1d0 + *(double *)(param_1[0x7f] + (longlong)(int)uVar15 * 8);
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 != 3);
        }
      }
      uVar15 = uVar21 + 1;
      if ((int)(uVar21 + 1) < (int)(uint)local_300) {
        uVar15 = (uint)local_300;
      }
      do {
        uVar18 = uVar15;
        if (uVar15 - 1 == uVar21) break;
        uVar21 = uVar21 + 1;
        uVar18 = uVar21;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar3 + 0x148) +
                                             (ulonglong)(uVar21 >> 9) * 8) +
                                           (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
      uVar21 = uVar18;
    } while (uVar21 != (uint)local_300);
  }
  *local_2f0 = 0.0;
  lVar3 = param_1[1];
  uVar21 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
  uVar15 = 0;
  if ((uVar21 != 0) &&
     (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x28) - 1U))) {
    uVar18 = 1;
    uVar22 = 1;
    if (1 < (int)uVar21) {
      uVar18 = uVar21;
    }
    do {
      uVar15 = uVar18;
      if (uVar18 == uVar22) break;
      uVar14 = uVar22 >> 9;
      uVar17 = uVar22 & 0x1ff;
      uVar15 = uVar22;
      uVar22 = uVar22 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x28))[uVar14] +
                                         (ulonglong)uVar17 * 2) - 1U));
  }
  if (uVar15 != uVar21) {
    local_2f8 = param_1 + 0x20;
    local_300 = param_1 + 2;
    do {
      lVar19 = (longlong)(int)uVar15;
      *(undefined1 *)(param_1[0x50] + lVar19) = 0;
      if (1e-08 < ABS(*(double *)(param_1[0x7f] + lVar19 * 8))) {
        if ((char)param_1[0x19] == '\x01') {
          FUN_1482b33ce(local_300,&local_2a8,uVar15);
          if ((local_2a8._1_1_ != '\x01') || (uStack_2a0 != 0.0)) goto LAB_1482ce490;
        }
        pcVar4 = (code *)param_1[0x1c];
        if (pcVar4 != (code *)0x0) {
          local_2a8 = (undefined8 *)CONCAT44(local_2a8._4_4_,uVar15);
          plVar13 = (longlong *)param_1[0x1e];
          if ((longlong *)param_1[0x1e] == (longlong *)0x0) {
            plVar13 = local_2f8;
          }
          uVar11 = (**(code **)(*plVar13 + 8))();
          uVar12 = (*pcVar4)(uVar11,&local_2a8);
          if ((uVar12 & 2) != 0) goto LAB_1482ce490;
        }
        uVar23 = (ulonglong)((uVar15 >> 9) * 8);
        lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + uVar23);
        uVar12 = (ulonglong)(uVar15 & 0x1ff);
        lVar6 = *(longlong *)(param_1[0x4e] + uVar23);
        dVar27 = 1.0 / *(double *)(param_1[0x7f] + lVar19 * 8);
        lVar8 = (ulonglong)((uVar15 & 0x1ff) * 8) * 3;
        dVar25 = *(double *)(lVar5 + lVar8);
        dVar24 = *(double *)(lVar5 + 8 + lVar8);
        dVar29 = *(double *)(lVar6 + lVar8 + 0x10) * dVar27;
        dVar31 = *(double *)(lVar6 + lVar8 + 8) * dVar27;
        dVar27 = dVar27 * *(double *)(lVar6 + lVar8);
        dVar26 = *(double *)(lVar5 + 0x10 + lVar8);
        dVar30 = dVar25 - dVar27;
        uVar23 = -(ulonglong)(-dVar30 <= dVar30);
        if (((1e-08 <= (double)(~uVar23 & (ulonglong)-dVar30 | (ulonglong)dVar30 & uVar23)) ||
            (dVar30 = dVar24 - dVar31, uVar23 = -(ulonglong)(-dVar30 <= dVar30),
            1e-08 <= (double)(~uVar23 & (ulonglong)-dVar30 | (ulonglong)dVar30 & uVar23))) ||
           (dVar30 = dVar26 - dVar29, uVar23 = -(ulonglong)(-dVar30 <= dVar30),
           1e-08 <= (double)(~uVar23 & (ulonglong)-dVar30 | (ulonglong)dVar30 & uVar23))) {
          dVar29 = dVar29 - dVar26;
          dVar31 = dVar31 - dVar24;
          dVar27 = dVar27 - dVar25;
          dVar33 = SQRT(dVar29 * dVar29 + dVar27 * dVar27 + dVar31 * dVar31);
          dVar28 = 0.0;
          dVar32 = 0.0;
          dVar30 = 0.0;
          uVar35 = 0;
          uVar36 = 0;
          dVar9 = 0.0;
          if (0.0 < dVar33) {
            dVar30 = 1.0 / dVar33;
            dVar28 = dVar27 * dVar30;
            dVar32 = dVar31 * dVar30;
            dVar30 = dVar29 * dVar30;
            uVar35 = unaff_XMM13._8_4_;
            uVar36 = unaff_XMM13._12_4_;
            dVar9 = dVar33;
          }
          auVar34._0_8_ = ~-(ulonglong)(dVar9 <= local_2d8) & (ulonglong)local_2d8;
          auVar34._8_8_ = ~CONCAT44(uVar36,uVar35) & uStack_2d0;
          auVar7._8_4_ = uVar35;
          auVar7._0_8_ = (ulonglong)dVar9 & -(ulonglong)(dVar9 <= local_2d8);
          auVar7._12_4_ = uVar36;
          dVar29 = SUB168(auVar34 | auVar7,0);
          unaff_XMM13._8_8_ = SUB168(auVar34 | auVar7,8);
          dVar27 = dVar30 * dVar29 + dVar26;
          dVar30 = dVar32 * dVar29 + dVar24;
          unaff_XMM13._0_8_ = dVar29 * dVar28 + dVar25;
          dVar24 = SQRT((dVar27 - dVar26) * (dVar27 - dVar26) +
                        (unaff_XMM13._0_8_ - dVar25) * (unaff_XMM13._0_8_ - dVar25) +
                        (dVar30 - dVar24) * (dVar30 - dVar24));
          dVar25 = *local_2f0;
          if (*local_2f0 <= dVar24) {
            dVar25 = dVar24;
          }
          *local_2f0 = dVar25;
          *(undefined1 *)(param_1[0x50] + lVar19) = 1;
          lVar19 = *(longlong *)(param_1[0x4e] + (ulonglong)(uVar15 >> 9) * 8);
          *(double *)(lVar19 + uVar12 * 0x18) = unaff_XMM13._0_8_;
          *(double *)(lVar19 + 8 + uVar12 * 0x18) = dVar30;
          *(double *)(lVar19 + 0x10 + uVar12 * 0x18) = dVar27;
          puVar20 = (undefined8 *)(param_1[1] + 0xb8);
          FUN_146be983e(&local_2a8,puVar20,uVar15,0);
          if (local_2a8 != puVar20) goto LAB_1482ce675;
          if ((uint)uStack_2a0 != uVar15) goto LAB_1482ce675;
          if ((int)local_290 != -1) goto LAB_1482ce675;
          iVar10 = local_290._4_4_;
          while (iVar10 != -1) {
LAB_1482ce675:
            do {
              uVar12 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)(param_1[1] + 0x1c0) +
                          (ulonglong)((uint)uStack_288 >> 9) * 8) +
                        (ulonglong)(((uint)uStack_288 & 0x1ff) << 4));
              uVar23 = uVar12 >> 0x20;
              if (uVar15 != (uint)uVar12) {
                uVar23 = uVar12;
              }
              lVar19 = *(longlong *)
                        (*(longlong *)(param_1[1] + 0x10) + ((uVar23 & 0xffffffff) >> 9) * 8);
              uVar12 = (ulonglong)((uint)uVar23 & 0x1ff);
              dVar25 = *(double *)(lVar19 + uVar12 * 0x18) - unaff_XMM13._0_8_;
              dVar24 = *(double *)(lVar19 + 8 + uVar12 * 0x18) - dVar30;
              dVar26 = *(double *)(lVar19 + 0x10 + uVar12 * 0x18) - dVar27;
              dVar25 = SQRT(dVar26 * dVar26 + dVar25 * dVar25 + dVar24 * dVar24);
              if ((dVar25 < (double)param_1[0x2d]) ||
                 ((double)param_1[0x2e] <= dVar25 && dVar25 != (double)param_1[0x2e])) {
                local_198 = (double)CONCAT44(local_198._4_4_,(uint)uStack_288);
                FUN_1447cbafe(param_1 + 0x56,&local_1b0,&local_198,0);
              }
              if (local_298._0_4_ == 0) {
                uStack_2a0 = (double)CONCAT44(0xffffffff,(uint)uStack_2a0);
                local_290 = 0xffffffffffffffff;
                local_290._4_4_ = -1;
                local_290._0_4_ = -1;
              }
              else {
                FUN_146be9922(&local_2a8);
              }
            } while (((local_2a8 != puVar20) || ((uint)uStack_2a0 != uVar15)) ||
                    (iVar10 = local_290._4_4_, (int)local_290 != -1));
          }
        }
      }
LAB_1482ce490:
      uVar18 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar21) {
        uVar18 = uVar21;
      }
      do {
        uVar22 = uVar18;
        if (uVar18 - 1 == uVar15) break;
        uVar15 = uVar15 + 1;
        uVar22 = uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar3 + 0x28) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      uVar15 = uVar22;
    } while (uVar15 != uVar21);
  }
  (**(code **)(*param_1 + 0x80))(param_1,1);
  if (local_138[0] != 0) {
    if (local_128 == (longlong *)0x0) {
      local_128 = local_118;
    }
    (**(code **)(*local_128 + 0x10))();
  }
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482cf0e6 FUN_1482cf0e6 body=1021 status=ok
// SIG undefined FUN_1482cf0e6(void)

void FUN_1482cf0e6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((char)param_1[0x7e] == '\x01') {
    plVar1 = param_1 + 0x77;
    iVar4 = (int)param_1[0x78];
    iVar6 = *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4);
    if (iVar4 < iVar6) {
      FUN_1448c4dd6(plVar1,iVar6 * 2,CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1));
      iVar4 = (int)param_1[0x78];
    }
    local_88 = local_88 & 0xffffffffffffff00;
    FUN_14475e60e(plVar1,&local_88,iVar4);
    uVar8 = *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4);
    local_98 = &local_68;
    local_88 = 0;
    uStack_80 = 0;
    local_a0 = FUN_143b04460;
    local_c0 = 0;
    local_b8 = &local_88;
    local_68 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",uVar8,1);
    if (0 < (int)uVar8) {
      uVar9 = 0;
      do {
        if ((*(char *)(*plVar1 + uVar9) == '\x01') &&
           (lVar2 = param_1[1],
           (longlong)uVar9 < (longlong)(*(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4))))
        {
          uVar12 = uVar9 >> 9 & 0x7fffff;
          uVar13 = (uint)uVar9 & 0x1ff;
          if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x1d8) + uVar12 * 8) +
                                  (ulonglong)uVar13 * 2) - 1U) < 0xfffe) &&
             (cVar3 = FUN_1482cf602(param_1,uVar9 & 0xffffffff), cVar3 != '\0')) {
            local_88 = CONCAT44(0xffffffff,(undefined4)local_88);
            uStack_80 = 0xffffffff;
            uStack_7c = 0xffffffff;
            uStack_78 = 0xffffffff;
            local_74 = 0xffffffffffffffff;
            iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x40))
                              ((longlong *)param_1[1],uVar9 & 0xffffffff,&local_88);
            if (iVar4 == 0) {
              uVar12 = *(ulonglong *)
                        (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + uVar12 * 8) +
                        (ulonglong)(uVar13 << 4));
              FUN_146c12888(param_1[1],&local_a0,uVar9 & 0xffffffff);
              FUN_1482cf8b8(param_1,uVar12 & 0xffffffff);
              FUN_1482cf8b8(param_1,uVar12 >> 0x20);
              FUN_1482cf8b8(param_1,(ulonglong)local_a0 & 0xffffffff);
              FUN_1482cf8b8(param_1,local_a0._4_4_);
              (**(code **)(*param_1 + 0x50))(param_1,uVar9 & 0xffffffff,&local_88);
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
    }
  }
  else {
    lVar2 = param_1[1];
    uVar13 = *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4);
    uVar8 = 0;
    if ((uVar13 != 0) &&
       (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x1d8) - 1U))) {
      uVar10 = 1;
      uVar5 = 1;
      if (1 < (int)uVar13) {
        uVar10 = uVar13;
      }
      do {
        uVar8 = uVar10;
        if (uVar10 == uVar5) break;
        uVar7 = uVar5 >> 9;
        uVar11 = uVar5 & 0x1ff;
        uVar8 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x1d8))[uVar7] +
                                           (ulonglong)uVar11 * 2) - 1U));
    }
    if (uVar8 != uVar13) {
      do {
        if ((char)param_1[0x19] == '\0') {
          local_a0 = (code *)((ulonglong)local_a0 & 0xffffffff00000000);
          local_98 = (undefined8 *)0x0;
          local_90 = 0xffffffff;
LAB_1482cf367:
          cVar3 = FUN_1482cf602(param_1,uVar8);
          if (cVar3 != '\0') {
            local_88 = CONCAT44(0xffffffff,(undefined4)local_88);
            uStack_80 = 0xffffffff;
            uStack_7c = 0xffffffff;
            uStack_78 = 0xffffffff;
            local_74 = 0xffffffffffffffff;
            iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x40))
                              ((longlong *)param_1[1],uVar8,&local_88);
            if (iVar4 == 0) {
              local_a8 = *(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(uVar8 >> 9) * 8) +
                          (ulonglong)((uVar8 & 0x1ff) << 4));
              uVar9 = local_a8 >> 0x20;
              FUN_146c12888(param_1[1],&local_68,uVar8);
              FUN_1482cf8b8(param_1,local_a8);
              FUN_1482cf8b8(param_1,uVar9);
              FUN_1482cf8b8(param_1,(ulonglong)local_68 & 0xffffffff);
              FUN_1482cf8b8(param_1,local_68._4_4_);
              (**(code **)(*param_1 + 0x50))(param_1,uVar8,&local_88);
            }
          }
        }
        else {
          FUN_1482b3344(param_1 + 2,&local_a0,uVar8);
          if (((ulonglong)local_a0 & 1) == 0) goto LAB_1482cf367;
        }
        uVar10 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar13) {
          uVar10 = uVar13;
        }
        do {
          uVar5 = uVar10;
          if (uVar10 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar5 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar2 + 0x1d8) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        uVar8 = uVar5;
      } while (uVar8 != uVar13);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482cf4e4 FUN_1482cf4e4 body=284 status=ok
// SIG undefined FUN_1482cf4e4(void)

void FUN_1482cf4e4(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14837ccd4();
  iVar1 = *(int *)(param_1 + 0x400);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
          *(int *)(*(longlong *)(param_1 + 8) + 0x24);
  if (iVar1 < iVar2) {
    FUN_1400bd09c(param_1 + 0x3f8,iVar2 * 2,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
    iVar1 = *(int *)(param_1 + 0x400);
  }
  local_48 = 0;
  FUN_146bfae00(param_1 + 0x3f8,&local_48,iVar1);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x140) * 0x200 +
          *(int *)(*(longlong *)(param_1 + 8) + 0x144);
  iVar1 = *(int *)(param_1 + 0x410);
  if (iVar1 < iVar2 * 3) {
    FUN_1400bd09c(param_1 + 0x408,iVar2 * 6,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
    iVar1 = *(int *)(param_1 + 0x410);
  }
  local_48 = 0;
  FUN_146bfae00(param_1 + 0x408,&local_48,iVar1);
  if (*(int *)(param_1 + 0x420) < iVar2 * 3) {
    FUN_14051b394(param_1 + 0x418,iVar2 * 6,1);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1447a8a24(param_1 + 0x418,&local_48,*(undefined4 *)(param_1 + 0x410));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482cf602 FUN_1482cf602 body=693 status=ok
// SIG undefined FUN_1482cf602(void)

bool FUN_1482cf602(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double extraout_XMM0_Qa;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = *(longlong *)(param_1 + 0xd0);
  if (lVar6 != 0) {
    lVar9 = *(longlong *)(param_1 + 8);
    lVar14 = *(longlong *)(*(longlong *)(lVar9 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
    uVar8 = (ulonglong)((param_2 & 0x1ff) << 4);
    uVar1 = *(uint *)(lVar14 + 0xc + uVar8);
    if (uVar1 != 0xffffffff) {
      iVar7 = *(int *)(lVar14 + uVar8);
      iVar2 = *(int *)(lVar14 + 4 + uVar8);
      uVar3 = *(uint *)(lVar14 + uVar8 + 8);
      uVar11 = (ulonglong)(uVar3 >> 9);
      lVar14 = *(longlong *)(*(longlong *)(lVar9 + 0x130) + uVar11 * 8);
      uVar8 = (ulonglong)(uVar3 & 0x1ff);
      local_78 = *(undefined4 *)(lVar14 + 8 + uVar8 * 0xc);
      local_80 = *(undefined8 *)(lVar14 + uVar8 * 0xc);
      dVar19 = (double)FUN_143afe948(lVar9,lVar6);
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
      uVar15 = (ulonglong)(uVar1 & 0x1ff);
      local_90 = *(undefined8 *)(lVar9 + uVar15 * 0xc);
      local_88 = *(undefined4 *)(lVar9 + 8 + uVar15 * 0xc);
      dVar20 = (double)FUN_143afe948(*(longlong *)(param_1 + 8),lVar6);
      dVar20 = dVar20 + dVar19 + 0.0;
      if (0.01 < dVar20) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        lVar14 = *(longlong *)(lVar9 + uVar11 * 8);
        local_98 = *(undefined4 *)(lVar14 + 8 + uVar8 * 0xc);
        local_a0 = *(undefined8 *)(lVar14 + uVar8 * 0xc);
        lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar1 >> 9) * 8);
        local_a8 = *(undefined4 *)(lVar9 + 8 + uVar15 * 0xc);
        local_b0 = *(undefined8 *)(lVar9 + uVar15 * 0xc);
        lVar9 = 0;
        do {
          lVar13 = lVar9 + 1;
          lVar14 = 0;
          if (lVar9 != 2) {
            lVar14 = lVar13;
          }
          iVar4 = *(int *)((longlong)&local_a0 + lVar14 * 4);
          iVar5 = *(int *)((longlong)&local_a0 + lVar9 * 4);
          iVar17 = iVar2;
          iVar16 = iVar7;
          if (((iVar7 == iVar5) ||
              (bVar18 = iVar7 == iVar4, iVar17 = iVar7, iVar16 = iVar2, iVar4 = iVar5, bVar18)) &&
             (iVar2 == iVar4)) {
            uVar8 = 2;
            if (lVar9 != 0) {
              uVar8 = (ulonglong)((int)lVar9 - 1);
            }
            uVar10 = *(undefined4 *)((longlong)&local_a0 + uVar8 * 4);
            goto LAB_1482cf7be;
          }
          lVar9 = lVar13;
        } while (lVar13 != 3);
        uVar10 = 0xffffffff;
        iVar16 = iVar7;
        iVar17 = iVar2;
LAB_1482cf7be:
        lVar9 = 0;
        do {
          lVar13 = lVar9 + 1;
          lVar14 = 0;
          if (lVar9 != 2) {
            lVar14 = lVar13;
          }
          iVar2 = *(int *)((longlong)&local_b0 + lVar14 * 4);
          iVar7 = *(int *)((longlong)&local_b0 + lVar9 * 4);
          if (((iVar7 == iVar16) || (bVar18 = iVar2 == iVar16, iVar2 = iVar7, bVar18)) &&
             (iVar2 == iVar17)) {
            uVar8 = 2;
            if (lVar9 != 0) {
              uVar8 = (ulonglong)((int)lVar9 - 1);
            }
            uVar12 = *(undefined4 *)((longlong)&local_b0 + uVar8 * 4);
            goto LAB_1482cf814;
          }
          lVar9 = lVar13;
        } while (lVar13 != 3);
        uVar12 = 0xffffffff;
LAB_1482cf814:
        iVar7 = FUN_146c061e0(*(longlong *)(param_1 + 8),uVar10,uVar12);
        if (iVar7 == -1) {
          local_bc = uVar10;
          local_b8 = uVar12;
          local_b4 = iVar17;
          dVar19 = (double)FUN_143afe948(*(undefined8 *)(param_1 + 8),lVar6);
          local_c8 = uVar12;
          local_c4 = uVar10;
          local_c0 = iVar16;
          FUN_143afe948(*(undefined8 *)(param_1 + 8),lVar6);
          bVar18 = extraout_XMM0_Qa + dVar19 + 0.0 < dVar20 * 0.75;
          goto LAB_1482cf825;
        }
      }
    }
  }
  bVar18 = false;
LAB_1482cf825:
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return bVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482cf8b8 FUN_1482cf8b8 body=304 status=ok
// SIG undefined FUN_1482cf8b8(void)

void FUN_1482cf8b8(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  longlong local_60;
  uint local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((-1 < (int)param_2) &&
      (lVar1 = *(longlong *)(param_1 + 8),
      (int)param_2 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(param_2 >> 9) * 8)
                         + (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar1 = lVar1 + 0xb8;
    FUN_146be983e(&local_60,lVar1,param_2,0);
    if (((local_60 != lVar1) || (local_58 != param_2)) ||
       (((int)local_48 != -1 || (local_48._4_4_ != -1)))) {
      do {
        local_64 = local_40;
        FUN_1447cbafe(param_1 + 0x2b0,local_68,&local_64,0);
        if (local_50 == 0) {
          local_54 = 0xffffffff;
          local_48 = 0xffffffffffffffff;
          local_48._4_4_ = -1;
          local_48._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_60);
        }
      } while (((local_60 != lVar1) || (local_58 != param_2)) ||
              (((int)local_48 != -1 || (local_48._4_4_ != -1))));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482cf9ea FUN_1482cf9ea body=33 status=ok
// SIG undefined FUN_1482cf9ea(void)

void FUN_1482cf9ea(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14ae72b68;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 2;
  param_1[5] = param_2;
  return;
}



// FUNCTION 1482cfa0c FUN_1482cfa0c body=332 status=ok
// SIG undefined FUN_1482cfa0c(void)

bool FUN_1482cfa0c(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined1 *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
    local_58[0] = 0;
    local_58[1] = 0;
    if (*(int *)(param_1 + 0x18) == 0) {
      local_88 = local_58;
      local_98 = param_3;
      local_90 = param_4;
      FUN_1482d008b(*(undefined8 *)(param_1 + 0x28),param_2,(byte)(bVar1 - 1) < 2,
                    (bVar1 & 0xfd) == 0);
    }
    else {
      local_80 = local_58;
      local_98 = CONCAT71(local_98._1_7_,(bVar1 & 0xfd) == 0);
      local_90 = param_3;
      local_88 = (longlong *)param_4;
      FUN_1482cfb59(*(undefined8 *)(param_1 + 0x28),param_2,param_1 + 0x10,(byte)(bVar1 - 1) < 2);
    }
    local_40 = &local_70;
    local_60 = local_58;
    local_88 = &local_38;
    local_38 = 0;
    local_30 = 0;
    local_48 = &LAB_148303100;
    local_90 = CONCAT44(local_90._4_4_,(uint)*(byte *)(param_1 + 8)) ^ 1;
    local_70 = param_3;
    local_68 = param_4;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482cfb59 FUN_1482cfb59 body=1328 status=ok
// SIG undefined FUN_1482cfb59(void)

void FUN_1482cfb59(longlong param_1,longlong param_2,longlong *param_3,char param_4,char param_5,
                  longlong *param_6,longlong *param_7,longlong *param_8)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  uint *puVar19;
  double dVar20;
  undefined1 auStack_158 [47];
  char local_129;
  longlong local_128;
  longlong *local_120;
  uint *local_118;
  longlong local_110;
  uint *local_108;
  uint *puStack_100;
  double local_f8;
  uint local_e4 [3];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  uVar17 = *(uint *)(param_3 + 1);
  local_129 = param_4;
  local_128 = param_1;
  local_120 = param_3;
  local_110 = param_2;
  if ((longlong)(int)uVar17 != 0) {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar17);
    }
    FUN_140ab2830(&local_b8,uVar17);
    iVar10 = 1;
    if (3 < uVar17) {
      uVar17 = (uVar17 | 1) + 0xe;
      iVar10 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      iVar10 = 1 << ((byte)iVar10 & 0x1f);
    }
    if ((local_70 == 0) || (local_70 < iVar10)) {
      local_70 = iVar10;
      FUN_140264164();
    }
    if ((longlong)(int)local_120[1] != 0) {
      lVar6 = *local_120;
      lVar18 = (longlong)(int)local_120[1] << 2;
      lVar11 = 0;
      do {
        local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(lVar6 + lVar11 * 4));
        local_e4[0] = (uint)lVar11;
        local_108 = (uint *)&local_d8;
        puStack_100 = local_e4;
        FUN_140c0fbee(&local_b8,&local_c8,&local_108,0);
        lVar11 = lVar11 + 1;
        lVar18 = lVar18 + -4;
      } while (lVar18 != 0);
    }
  }
  plVar9 = local_120;
  FUN_148302d24(&local_108,local_128,local_120);
  local_118 = local_108;
  lVar18 = (longlong)(int)puStack_100;
  local_108 = (uint *)((ulonglong)local_108 & 0xffffffff00000000);
  FUN_1448158c6(param_6,&local_108,(int)plVar9[1] << 2);
  local_108 = (uint *)((ulonglong)local_108 & 0xffffffffffffff00);
  FUN_14475e60e(param_7,&local_108,(int)plVar9[1]);
  local_108 = (uint *)0x0;
  FUN_146bfae00(param_8,&local_108,(int)plVar9[1]);
  lVar6 = local_110;
  cVar8 = local_129;
  if (lVar18 != 0) {
    puVar1 = local_118 + lVar18;
    puVar19 = local_118;
    do {
      uVar17 = *puVar19;
      if ((-1 < (int)uVar17) &&
         ((int)uVar17 < *(int *)(local_128 + 0x140) * 0x200 + *(int *)(local_128 + 0x144))) {
        uVar15 = (ulonglong)(uVar17 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(local_128 + 0x148) + (ulonglong)(uVar17 >> 9) * 8) +
                               uVar15 * 2) - 1U) < 0xfffe) {
          uVar7 = (ulonglong)uVar17 * 3;
          lVar18 = *(longlong *)(lVar6 + 0x78);
          uVar12 = (uint)uVar7;
          uVar4 = *(uint *)(*(longlong *)(lVar18 + (uVar7 >> 9) * 8) +
                           (ulonglong)(uVar12 & 0x1ff) * 4);
          if (-1 < (int)uVar4) {
            lVar11 = *(longlong *)(*(longlong *)(local_128 + 0x130) + (ulonglong)(uVar17 >> 9) * 8);
            local_d0 = *(undefined4 *)(lVar11 + 8 + uVar15 * 0xc);
            local_d8 = *(undefined8 *)(lVar11 + uVar15 * 0xc);
            local_e4[2] = *(undefined4 *)
                           (*(longlong *)(lVar18 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                           (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
            local_e4[1] = *(undefined4 *)
                           (*(longlong *)(lVar18 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                           (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
            local_e4[0] = uVar4;
            dVar20 = (double)FUN_146c14650(local_128,(ulonglong)uVar17);
            local_108 = DAT_14c846510;
            puStack_100 = DAT_14c846518;
            local_f8 = DAT_14c846520;
            if (param_5 != '\0') {
              FUN_146c1544a(local_128,&local_108,uVar17);
            }
            if (cVar8 != '\0') {
              local_108 = (uint *)((double)local_108 * dVar20);
              puStack_100 = (uint *)((double)puStack_100 * dVar20);
              local_f8 = dVar20 * local_f8;
            }
            lVar18 = 0;
LAB_1482cfe10:
            if ((int)uStack_b0 != local_84) {
              uVar17 = *(uint *)((longlong)&local_d8 + lVar18 * 4);
              puVar13 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar13 = local_80;
              }
              iVar10 = *(int *)(puVar13 + (ulonglong)(local_70 - 1U & uVar17) * 4);
              for (iVar5 = iVar10; iVar5 != -1;
                  iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_b8 + 8)) {
                if (*(uint *)(local_b8 + (longlong)iVar5 * 0x10) == uVar17) {
                  puVar2 = (undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(lVar6 + 0x48) +
                             (ulonglong)(local_e4[lVar18] >> 4 & 0x3fffff8)) +
                           (ulonglong)((local_e4[lVar18] & 0x7f) << 4));
                  local_c8 = *puVar2;
                  uStack_c0 = puVar2[1];
                  goto LAB_1482cfeb5;
                }
              }
            }
            goto LAB_1482cfe20;
          }
        }
      }
LAB_1482cff36:
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar1);
  }
  if (local_118 != (uint *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar10 = *(int *)(lVar11 + 8), iVar10 != -1) {
LAB_1482cfeb5:
    lVar11 = local_b8 + (longlong)iVar10 * 0x10;
    if (*(uint *)(local_b8 + (longlong)iVar10 * 0x10) == uVar17) goto LAB_1482cfed3;
  }
  lVar11 = 0;
LAB_1482cfed3:
  lVar11 = (longlong)*(int *)(lVar11 + 4);
  puVar3 = (&local_108)[lVar18];
  *(double *)(*param_8 + lVar11 * 8) = *(double *)(*param_8 + lVar11 * 8) + (double)puVar3;
  lVar14 = 0;
  do {
    lVar16 = *param_6 + lVar11 * 0x10;
    *(float *)(lVar16 + lVar14 * 4) =
         (float)((double)*(float *)((longlong)&local_c8 + lVar14 * 4) * (double)puVar3) +
         *(float *)(lVar16 + lVar14 * 4);
    lVar14 = lVar14 + 1;
  } while (lVar14 != 4);
  *(undefined1 *)(*param_7 + lVar11) = 1;
LAB_1482cfe20:
  lVar18 = lVar18 + 1;
  if (lVar18 == 3) goto LAB_1482cff36;
  goto LAB_1482cfe10;
}



// FUNCTION 1482d008b FUN_1482d008b body=838 status=ok
// SIG undefined FUN_1482d008b(void)

void FUN_1482d008b(longlong param_1,longlong param_2,char param_3,char param_4,longlong *param_5,
                  longlong *param_6,longlong *param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auStack_e8 [46];
  char local_ba;
  char local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  uint local_94 [3];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = (double)((ulonglong)local_b8 & 0xffffffff00000000);
  local_ba = param_3;
  local_b9 = param_4;
  FUN_1448158c6(param_5,&local_b8,*(int *)(param_1 + 0x20) * 0x800 + *(int *)(param_1 + 0x24) * 4);
  local_b8 = (double)((ulonglong)local_b8 & 0xffffffffffffff00);
  FUN_14475e60e(param_6,&local_b8,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24));
  local_b8 = 0.0;
  FUN_146bfae00(param_7,&local_b8,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24));
  uVar8 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar2 = 0;
  uVar3 = local_94[0];
  if ((uVar8 != 0) &&
     (uVar2 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar9 = 1;
    uVar4 = 1;
    if (1 < (int)uVar8) {
      uVar9 = uVar8;
    }
    do {
      uVar6 = uVar4;
      uVar2 = uVar9;
      if (uVar9 == uVar6) break;
      uVar4 = uVar6 + 1;
      uVar2 = uVar6;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar6 >> 9] +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
  }
  do {
    uVar9 = uVar2;
    if (uVar9 == uVar8) {
      if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
        local_94[0] = uVar3;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    uVar2 = uVar9 * 3;
    lVar5 = *(longlong *)(param_2 + 0x78);
    local_94[0] = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) +
                           (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)local_94[0]) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
      local_80 = *(undefined4 *)(lVar7 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      local_88 = *(undefined8 *)(lVar7 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      local_94[2] = *(undefined4 *)
                     (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                     (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      local_94[1] = *(undefined4 *)
                     (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                     (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      dVar12 = (double)FUN_146c14650(param_1,uVar9);
      local_b8 = (double)CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
      uStack_b0 = (double)CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
      local_a8 = DAT_14c846520;
      if (local_b9 != '\0') {
        FUN_146c1544a(param_1,&local_b8,uVar9);
      }
      if (local_ba != '\0') {
        local_b8 = local_b8 * dVar12;
        uStack_b0 = uStack_b0 * dVar12;
        local_a8 = dVar12 * local_a8;
      }
      lVar5 = 0;
      do {
        lVar7 = (longlong)*(int *)((longlong)&local_88 + lVar5 * 4);
        puVar1 = (undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(param_2 + 0x48) + (ulonglong)(local_94[lVar5] >> 4 & 0x3fffff8)) +
                 (ulonglong)((local_94[lVar5] & 0x7f) << 4));
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        dVar12 = (double)(&local_b8)[lVar5];
        *(double *)(*param_7 + lVar7 * 8) = *(double *)(*param_7 + lVar7 * 8) + dVar12;
        lVar10 = 0;
        do {
          lVar11 = *param_5 + lVar7 * 0x10;
          *(float *)(lVar11 + lVar10 * 4) =
               (float)((double)*(float *)((longlong)&local_78 + lVar10 * 4) * dVar12) +
               *(float *)(lVar11 + lVar10 * 4);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 4);
        *(undefined1 *)(*param_6 + lVar7) = 1;
        lVar5 = lVar5 + 1;
        uVar3 = local_94[0];
      } while (lVar5 != 3);
    }
    local_94[0] = uVar3;
    uVar4 = uVar9 + 1;
    if ((int)(uVar9 + 1) < (int)uVar8) {
      uVar4 = uVar8;
    }
    do {
      uVar2 = uVar4;
      uVar3 = local_94[0];
      if (uVar4 - 1 == uVar9) break;
      uVar9 = uVar9 + 1;
      uVar2 = uVar9;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x148) +
                                           (ulonglong)(uVar9 >> 9) * 8) +
                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 1482d03d2 FUN_1482d03d2 body=144 status=ok
// SIG undefined FUN_1482d03d2(void)

void FUN_1482d03d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [216];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_146ba21d6(local_108,param_1,1);
  local_118 = *param_4;
  uStack_114 = param_4[1];
  uStack_110 = param_4[2];
  uStack_10c = param_4[3];
  local_128 = &local_118;
  FUN_1482d0463(param_1,local_108,param_2,param_3);
  FUN_1457e5b52(local_108);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d0463 FUN_1482d0463 body=3927 status=ok
// SIG undefined FUN_1482d0463(void)

void FUN_1482d0463(double param_1,undefined8 param_2,longlong *param_3,double *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  void **ppvVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  undefined1 auStack_278 [40];
  undefined4 local_250;
  undefined8 *local_248;
  double *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  void **local_228;
  longlong *local_220;
  undefined1 **local_218;
  double *local_210;
  double *local_208;
  uint *local_200;
  longlong *local_1f8;
  undefined8 *local_1f0;
  double *local_1e8;
  undefined1 **local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  uint local_1bc;
  longlong local_1b8;
  ulonglong uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188 [3];
  double local_170;
  double local_168;
  double local_160;
  void *local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  uint local_f4;
  undefined8 local_f0;
  undefined1 local_e2;
  char local_e1;
  undefined1 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_e1 = '\x01';
  local_e2 = *(undefined1 *)(param_4 + 1);
  uVar21 = 0xeb1c432d;
  uVar22 = 0x3f1a36e2;
  dVar23 = *param_4;
  if (0.0001 <= dVar23) {
    uVar21 = SUB84(dVar23,0);
    uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
  }
  local_f0 = CONCAT44(uVar22,uVar21);
  local_f4 = 3;
  if (3 < (int)*(uint *)((longlong)param_4 + 0xc)) {
    local_f4 = *(uint *)((longlong)param_4 + 0xc);
  }
  local_240 = param_4;
  FUN_146ba0128(param_2,&local_128);
  local_130 = SQRT((local_100 - local_118) * (local_100 - local_118) +
                   (local_110 - local_128) * (local_110 - local_128) +
                   (local_108 - local_120) * (local_108 - local_120));
  local_138 = 0x3fb64fd6b8c28100;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  local_170 = 0.0001;
  local_168 = 1.7000000000000003e-05;
  local_160 = 3e-05;
  lVar18 = 0;
  local_148 = &local_e2;
  local_140 = param_2;
  do {
    local_228 = (void **)local_160;
    local_238 = local_170;
    uStack_230 = (longlong *)local_168;
    (&local_238)[lVar18] = 0x3ff0000000000000;
    dVar23 = (double)local_228 * (double)local_228 +
             local_238 * local_238 + (double)uStack_230 * (double)uStack_230;
    if (9.99999993922529e-09 < dVar23) {
      dVar23 = 1.0 / SQRT(dVar23);
      local_238 = local_238 * dVar23;
      uStack_230 = (longlong *)((double)uStack_230 * dVar23);
      local_228 = (void **)((double)local_228 * dVar23);
    }
    ppvVar7 = local_228;
    dVar3 = (double)uStack_230;
    dVar23 = local_238;
    lVar19 = (longlong)(int)(uint)uStack_150;
    uVar14 = (uint)uStack_150 + 1;
    if (uStack_150._4_4_ < uVar14) {
      uVar17 = uStack_150 & 0xffffffff;
      uStack_150._0_4_ = uVar14;
      FUN_1403e3958(&local_158,uVar17);
      uVar14 = (uint)uStack_150;
    }
    *(void ***)((longlong)local_158 + lVar19 * 0x18 + 0x10) = local_228;
    puVar1 = (undefined4 *)((longlong)local_158 + lVar19 * 0x18);
    *puVar1 = (undefined4)local_238;
    puVar1[1] = local_238._4_4_;
    puVar1[2] = (undefined4)uStack_230;
    puVar1[3] = uStack_230._4_4_;
    uStack_150 = CONCAT44(uStack_150._4_4_,uVar14 + 1);
    if (uStack_150._4_4_ < uVar14 + 1) {
      FUN_1403e3958(&local_158,uVar14);
    }
    lVar19 = (longlong)(int)uVar14;
    *(double *)((longlong)local_158 + lVar19 * 0x18) = -dVar23;
    *(double *)((longlong)local_158 + lVar19 * 0x18 + 8) = -dVar3;
    *(double *)((longlong)local_158 + lVar19 * 0x18 + 0x10) = -(double)ppvVar7;
    lVar18 = lVar18 + 1;
  } while (lVar18 != 3);
  local_188[0] = 0;
  local_188[1] = 0;
  FUN_14830318c(local_188,
                *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144));
  uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
  uVar14 = 0;
  if ((uVar8 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U))) {
    uVar9 = 1;
    uVar12 = 1;
    if (1 < (int)uVar8) {
      uVar9 = uVar8;
    }
    do {
      uVar14 = uVar9;
      if (uVar9 == uVar12) break;
      uVar11 = uVar12 >> 9;
      uVar15 = uVar12 & 0x1ff;
      uVar14 = uVar12;
      uVar12 = uVar12 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar11] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  uVar9 = 0xffffffff;
  if (uVar14 != uVar8) {
    uVar12 = *(uint *)(param_5 + 1);
    uVar11 = 0xffffffff;
    do {
      uVar9 = uVar14;
      if ((uVar12 == uVar8) && (*(char *)(*param_5 + (longlong)(int)uVar14) == '\x01')) {
        *(undefined1 *)(local_188[0] + (int)uVar14) = 1;
        uVar9 = uVar11;
      }
      uVar11 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar8) {
        uVar11 = uVar8;
      }
      do {
        uVar15 = uVar11;
        if (uVar11 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar15 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      uVar14 = uVar15;
      uVar11 = uVar9;
    } while (uVar14 != uVar8);
  }
  local_d8 = &local_238;
  local_220 = &local_138;
  local_218 = &local_148;
  local_210 = &local_130;
  local_208 = &local_170;
  local_248 = &local_d0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = &LAB_1483033d4;
  local_250 = 0;
  local_238 = param_1;
  uStack_230 = local_188;
  local_228 = &local_158;
  FUN_1401f8d10(L"ParallelFor Task",uVar9 + 1,1);
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  if (local_e1 != '\0') {
    local_238 = (double)CONCAT71(local_238._1_7_,2);
    FUN_1483031fc(&local_198,&local_238,*(undefined4 *)((longlong)param_1 + 0x1b0));
    uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
    uVar14 = 0;
    if ((uVar8 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U)))
    {
      uVar9 = 1;
      uVar12 = 1;
      if (1 < (int)uVar8) {
        uVar9 = uVar8;
      }
      do {
        uVar14 = uVar9;
        if (uVar9 == uVar12) break;
        uVar11 = uVar12 >> 9;
        uVar15 = uVar12 & 0x1ff;
        uVar14 = uVar12;
        uVar12 = uVar12 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar11] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
LAB_1482d0928:
    if (uVar14 != uVar8) {
      if (*(char *)(local_188[0] + (int)uVar14) == '\0') {
        uVar9 = FUN_146bc96d4(param_1,uVar14);
        if (((-1 < (int)uVar9) && ((int)uVar9 < (int)uStack_190)) &&
           (*(char *)(local_198 + (ulonglong)uVar9) == '\x02')) {
          *(undefined1 *)(local_198 + (ulonglong)uVar9) = 0;
        }
      }
      else if (((*(char *)(local_188[0] + (int)uVar14) == '\x01') &&
               (uVar9 = FUN_146bc96d4(param_1,uVar14), -1 < (int)uVar9)) &&
              ((int)uVar9 < (int)uStack_190)) {
        *(undefined1 *)(local_198 + (ulonglong)uVar9) = 1;
      }
      uVar9 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar12 = uVar14;
      do {
        uVar14 = uVar9;
        if (uVar9 - 1 == uVar12) break;
        uVar14 = uVar12 + 1;
        uVar12 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_1482d0928;
    }
    FUN_14830326e(&local_1a8,*(undefined4 *)((longlong)param_1 + 0x1b0),1);
    if (0 < (int)uStack_190) {
      lVar18 = 0;
      do {
        LOCK();
        *(bool *)(local_1a8 + lVar18) = *(char *)(local_198 + lVar18) == '\x01';
        UNLOCK();
        lVar18 = lVar18 + 1;
      } while (lVar18 < (int)uStack_190);
    }
    uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
    uVar14 = 0;
    if ((uVar8 != 0) &&
       (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U))) {
      uVar9 = 1;
      uVar12 = 1;
      if (1 < (int)uVar8) {
        uVar9 = uVar8;
      }
      do {
        uVar14 = uVar9;
        if (uVar9 == uVar12) break;
        uVar11 = uVar12 >> 9;
        uVar15 = uVar12 & 0x1ff;
        uVar14 = uVar12;
        uVar12 = uVar12 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar11] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
LAB_1482d0b2c:
    if (uVar14 != uVar8) {
      uVar9 = FUN_146bc96d4(param_1,uVar14);
      if (((-1 < (int)uVar9) && ((int)uVar9 < (int)uStack_190)) &&
         (*(char *)(local_198 + (ulonglong)uVar9) == '\x01')) {
        *(undefined1 *)(local_188[0] + (int)uVar14) = 1;
      }
      uVar9 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar12 = uVar14;
      do {
        uVar14 = uVar9;
        if (uVar9 - 1 == uVar12) break;
        uVar14 = uVar12 + 1;
        uVar12 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_1482d0b2c;
    }
  }
  local_1b8 = 0;
  uStack_1b0 = 0;
  FUN_14830326e(&local_1b8,
                *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144),1)
  ;
  uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
  uVar14 = 0;
  if ((uVar8 != 0) &&
     (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U))) {
    uVar17 = 1;
    uVar9 = 1;
    if (1 < (int)uVar8) {
      uVar9 = uVar8;
    }
    do {
      uVar12 = (uint)uVar17;
      uVar14 = uVar9;
      if (uVar9 == uVar12) break;
      uVar20 = uVar17 >> 9;
      uVar17 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar12;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar20] +
                                         (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
  }
  uVar9 = 0xffffffff;
LAB_1482d0b83:
  if (uVar14 != uVar8) {
    cVar2 = *(char *)(local_188[0] + (int)uVar14);
    LOCK();
    *(bool *)(local_1b8 + (int)uVar14) = cVar2 == '\x01';
    UNLOCK();
    if (cVar2 == '\0') {
      uVar9 = uVar14;
    }
    uVar12 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar8) {
      uVar12 = uVar8;
    }
    uVar11 = uVar14;
    do {
      uVar14 = uVar12;
      if (uVar12 - 1 == uVar11) break;
      uVar14 = uVar11 + 1;
      uVar11 = uVar14;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)((longlong)param_1 + 0x148) +
                                           (ulonglong)(uVar14 >> 9) * 8) +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    goto LAB_1482d0b83;
  }
  uVar20 = (ulonglong)local_f4;
  uVar17 = uVar20 + (uVar20 == 0);
  local_1bc = local_f4;
  local_1d8 = 0;
  uStack_1d0 = 0;
  if (uVar20 == 0) {
    uVar14 = 0;
  }
  else {
    uVar10 = 0xbf400001;
    uVar16 = 0;
    do {
      uVar13 = uVar10 % uVar17;
      FUN_148303adc(&local_1bc,&local_238,uVar16);
      dVar23 = (double)local_228 + local_160;
      dVar3 = (double)uStack_230 + local_168;
      dVar4 = local_238 + local_170;
      dVar5 = SQRT(dVar23 * dVar23 + dVar4 * dVar4 + dVar3 * dVar3);
      dVar6 = 1.0 / dVar5;
      if (0.0 < dVar5) {
        dVar23 = dVar23 * dVar6;
        dVar3 = dVar3 * dVar6;
      }
      else {
        dVar3 = 0.0;
        dVar23 = 0.0;
      }
      lVar18 = (longlong)(int)(uint)uStack_1d0;
      uVar14 = (uint)uStack_1d0 + 1;
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar14);
      if (uStack_1d0._4_4_ < uVar14) {
        FUN_1403e3958(&local_1d8);
      }
      *(ulonglong *)(local_1d8 + lVar18 * 0x18) =
           -(ulonglong)(0.0 < dVar5) & (ulonglong)(dVar4 * dVar6);
      *(double *)(local_1d8 + 8 + lVar18 * 0x18) = dVar3;
      *(double *)(local_1d8 + 0x10 + lVar18 * 0x18) = dVar23;
      uVar10 = uVar13 + 0xbf400001;
      uVar20 = uVar20 - 1;
      uVar16 = uVar13;
    } while (uVar20 != 0);
    uVar14 = (uint)uStack_1d0;
  }
  lVar18 = (longlong)(int)(uint)uStack_150;
  if (lVar18 != 0) {
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)uStack_150 + uVar14);
    if (uStack_1d0._4_4_ - uVar14 < (uint)uStack_150) {
      FUN_1403e3958(&local_1d8,uVar14);
    }
    memcpy((void *)((longlong)(int)uVar14 * 0x18 + local_1d8),local_158,lVar18 * 0x18);
    uVar14 = (uint)uStack_1d0;
  }
  local_200 = &local_f4;
  uStack_230 = (longlong *)&local_e1;
  local_228 = (void **)&local_198;
  local_220 = &local_1a8;
  local_210 = (double *)&local_1b8;
  local_208 = (double *)&local_f0;
  local_1f8 = &local_1d8;
  local_1f0 = &local_138;
  local_1e8 = &local_130;
  local_1e0 = &local_148;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = &LAB_148303c10;
  local_d8 = &local_238;
  local_248 = &local_d0;
  local_250 = 0;
  local_238 = param_1;
  local_218 = (undefined1 **)local_188;
  local_f4 = uVar14;
  FUN_1401f8d10(L"ParallelFor Task",uVar9 + 1,1);
  if (local_e1 == '\x01') {
    uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
    uVar14 = 0;
    if ((uVar8 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U)))
    {
      uVar9 = 1;
      uVar12 = 1;
      if (1 < (int)uVar8) {
        uVar9 = uVar8;
      }
      do {
        uVar14 = uVar9;
        if (uVar9 == uVar12) break;
        uVar11 = uVar12 >> 9;
        uVar15 = uVar12 & 0x1ff;
        uVar14 = uVar12;
        uVar12 = uVar12 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar11] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
    if (uVar14 != uVar8) {
      do {
        if ((((*(byte *)(local_1b8 + (int)uVar14) & 1) != 0) &&
            (uVar9 = FUN_146bc96d4(param_1,uVar14), -1 < (int)uVar9)) &&
           ((int)uVar9 < (int)uStack_1a0)) {
          LOCK();
          *(undefined1 *)(local_1a8 + (ulonglong)uVar9) = 1;
          UNLOCK();
        }
        uVar9 = uVar14 + 1;
        if ((int)(uVar14 + 1) < (int)uVar8) {
          uVar9 = uVar8;
        }
        uVar12 = uVar14;
        do {
          uVar14 = uVar9;
          if (uVar9 - 1 == uVar12) break;
          uVar14 = uVar12 + 1;
          uVar12 = uVar14;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)((longlong)param_1 + 0x148) +
                                               (ulonglong)(uVar14 >> 9) * 8) +
                                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      } while (uVar14 != uVar8);
      uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
    }
    uVar14 = 0;
    if ((uVar8 != 0) &&
       (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U))) {
      uVar9 = 1;
      uVar12 = 1;
      if (1 < (int)uVar8) {
        uVar9 = uVar8;
      }
      do {
        uVar14 = uVar9;
        if (uVar9 == uVar12) break;
        uVar11 = uVar12 >> 9;
        uVar15 = uVar12 & 0x1ff;
        uVar14 = uVar12;
        uVar12 = uVar12 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar11] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
LAB_1482d123e:
    if (uVar14 != uVar8) {
      uVar9 = FUN_146bc96d4(param_1,uVar14);
      if (((-1 < (int)uVar9) && ((int)uVar9 < (int)uStack_1a0)) &&
         (((*(byte *)(local_1a8 + (ulonglong)uVar9) & 1) != 0 ||
          ((*(char *)(local_240 + 2) == '\x01' &&
           (*(char *)(local_198 + (ulonglong)uVar9) == '\x02')))))) {
        LOCK();
        *(undefined1 *)(local_1b8 + (int)uVar14) = 1;
        UNLOCK();
      }
      uVar9 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar12 = uVar14;
      do {
        uVar14 = uVar9;
        if (uVar9 - 1 == uVar12) break;
        uVar14 = uVar12 + 1;
        uVar12 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_1482d123e;
    }
  }
  else if (*(char *)(local_240 + 2) == '\x01') {
    uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
    uVar14 = 0;
    if (uVar8 != 0) {
      uVar14 = 0;
      if (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U)) {
        uVar17 = 1;
        uVar9 = 1;
        if (1 < (int)uVar8) {
          uVar9 = uVar8;
        }
        do {
          uVar12 = (uint)uVar17;
          uVar14 = uVar9;
          if (uVar9 == uVar12) break;
          uVar20 = uVar17 >> 9;
          uVar17 = (ulonglong)(uVar12 + 1);
          uVar14 = uVar12;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar20]
                                             + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      }
    }
LAB_1482d105e:
    if (uVar14 != uVar8) {
      if (*(char *)(local_188[0] + (int)uVar14) == '\x02') {
        LOCK();
        *(undefined1 *)(local_1b8 + (int)uVar14) = 1;
        UNLOCK();
      }
      uVar9 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar12 = uVar14;
      do {
        uVar14 = uVar9;
        if (uVar9 - 1 == uVar12) break;
        uVar14 = uVar12 + 1;
        uVar12 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_1482d105e;
    }
  }
  FUN_1448c4dd6(param_3,uStack_1b0 & 0xffffffff,1);
  if (0 < (int)param_3[1]) {
    lVar18 = 0;
    do {
      *(byte *)(*param_3 + lVar18) = ~*(byte *)(local_1b8 + lVar18) & 1;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)param_3[1]);
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482d13bc FUN_1482d13bc body=230 status=ok
// SIG undefined FUN_1482d13bc(void)

void FUN_1482d13bc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_130 = *param_2;
  local_128 = param_2[1];
  local_138 = param_1;
  local_118 = local_130;
  local_110 = local_128;
  local_120 = FUN_1482f6c64(param_1);
  FUN_1482d14a4(&local_118,&local_138);
  local_148 = *param_2;
  local_160 = &local_148;
  local_140 = param_2[1];
  local_158 = *param_5;
  uStack_154 = param_5[1];
  uStack_150 = param_5[2];
  uStack_14c = param_5[3];
  local_168 = &local_158;
  FUN_1482d1565(param_1,&local_118,param_3,param_4);
  FUN_1482d24ce(&local_118);
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d14a4 FUN_1482d14a4 body=193 status=ok
// SIG undefined FUN_1482d14a4(void)

undefined8 * FUN_1482d14a4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14ae72be0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_149f3aac0;
  param_1[9] = &LAB_148304682;
  param_1[4] = &LAB_146beded0;
  param_1[0xc] = 0x3e45798ee2308c3a;
  FUN_141040b84(param_1 + 0xd);
  FUN_141040be6(param_1 + 0x10);
  FUN_141040be6(param_1 + 0x13);
  FUN_141040b84(param_1 + 0x16);
  param_1[0x19] = 0xffffffffffffffff;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_1483046a0(param_1);
  param_1[2] = (ulonglong)
               (uint)(*(int *)(*(longlong *)param_1[1] + 0x214) +
                     *(int *)(*(longlong *)param_1[1] + 0x218));
  return param_1;
}



// FUNCTION 1482d1565 FUN_1482d1565 body=3943 status=ok
// SIG undefined FUN_1482d1565(void)

void FUN_1482d1565(double param_1,undefined8 param_2,longlong *param_3,double *param_4,
                  longlong *param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  void **ppvVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  undefined1 auStack_288 [40];
  undefined4 local_260;
  undefined8 *local_258;
  double *local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  void **local_238;
  longlong *local_230;
  undefined1 **local_228;
  double *local_220;
  double *local_218;
  uint *local_210;
  longlong *local_208;
  undefined8 *local_200;
  double *local_1f8;
  undefined1 **local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  uint local_1cc;
  longlong local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198 [3];
  double local_180;
  double local_178;
  double local_170;
  void *local_168;
  undefined8 uStack_160;
  undefined1 *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  uint local_f4;
  undefined8 local_f0;
  undefined1 local_e2;
  char local_e1;
  undefined1 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_e1 = '\x01';
  local_e2 = *(undefined1 *)(param_4 + 1);
  uVar21 = 0xeb1c432d;
  uVar22 = 0x3f1a36e2;
  dVar23 = *param_4;
  if (0.0001 <= dVar23) {
    uVar21 = SUB84(dVar23,0);
    uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
  }
  local_f0 = CONCAT44(uVar22,uVar21);
  local_f4 = 3;
  if (3 < (int)*(uint *)((longlong)param_4 + 0xc)) {
    local_f4 = *(uint *)((longlong)param_4 + 0xc);
  }
  local_250 = param_4;
  FUN_14830564e(param_2,&local_128);
  local_130 = SQRT((local_100 - local_118) * (local_100 - local_118) +
                   (local_110 - local_128) * (local_110 - local_128) +
                   (local_108 - local_120) * (local_108 - local_120));
  local_138 = 0x3fb64fd6b8c28100;
  local_148 = param_6;
  local_168 = (void *)0x0;
  uStack_160 = 0;
  local_180 = 0.0001;
  local_178 = 1.7000000000000003e-05;
  local_170 = 3e-05;
  lVar18 = 0;
  local_150 = &local_e2;
  local_140 = param_2;
  do {
    local_238 = (void **)local_170;
    local_248 = local_180;
    uStack_240 = (longlong *)local_178;
    (&local_248)[lVar18] = 0x3ff0000000000000;
    dVar23 = (double)local_238 * (double)local_238 +
             local_248 * local_248 + (double)uStack_240 * (double)uStack_240;
    if (9.99999993922529e-09 < dVar23) {
      dVar23 = 1.0 / SQRT(dVar23);
      local_248 = local_248 * dVar23;
      uStack_240 = (longlong *)((double)uStack_240 * dVar23);
      local_238 = (void **)((double)local_238 * dVar23);
    }
    ppvVar7 = local_238;
    dVar3 = (double)uStack_240;
    dVar23 = local_248;
    lVar19 = (longlong)(int)(uint)uStack_160;
    uVar14 = (uint)uStack_160 + 1;
    if (uStack_160._4_4_ < uVar14) {
      uVar17 = uStack_160 & 0xffffffff;
      uStack_160._0_4_ = uVar14;
      FUN_1403e3958(&local_168,uVar17);
      uVar14 = (uint)uStack_160;
    }
    *(void ***)((longlong)local_168 + lVar19 * 0x18 + 0x10) = local_238;
    puVar1 = (undefined4 *)((longlong)local_168 + lVar19 * 0x18);
    *puVar1 = (undefined4)local_248;
    puVar1[1] = local_248._4_4_;
    puVar1[2] = (undefined4)uStack_240;
    puVar1[3] = uStack_240._4_4_;
    uStack_160 = CONCAT44(uStack_160._4_4_,uVar14 + 1);
    if (uStack_160._4_4_ < uVar14 + 1) {
      FUN_1403e3958(&local_168,uVar14);
    }
    lVar19 = (longlong)(int)uVar14;
    *(double *)((longlong)local_168 + lVar19 * 0x18) = -dVar23;
    *(double *)((longlong)local_168 + lVar19 * 0x18 + 8) = -dVar3;
    *(double *)((longlong)local_168 + lVar19 * 0x18 + 0x10) = -(double)ppvVar7;
    lVar18 = lVar18 + 1;
  } while (lVar18 != 3);
  local_198[0] = 0;
  local_198[1] = 0;
  FUN_14830573e(local_198,
                *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144));
  uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
  uVar14 = 0;
  if ((uVar8 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U))) {
    uVar9 = 1;
    uVar12 = 1;
    if (1 < (int)uVar8) {
      uVar9 = uVar8;
    }
    do {
      uVar14 = uVar9;
      if (uVar9 == uVar12) break;
      uVar11 = uVar12 >> 9;
      uVar15 = uVar12 & 0x1ff;
      uVar14 = uVar12;
      uVar12 = uVar12 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar11] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  uVar9 = 0xffffffff;
  if (uVar14 != uVar8) {
    uVar12 = *(uint *)(param_5 + 1);
    uVar11 = 0xffffffff;
    do {
      uVar9 = uVar14;
      if ((uVar12 == uVar8) && (*(char *)(*param_5 + (longlong)(int)uVar14) == '\x01')) {
        *(undefined1 *)(local_198[0] + (int)uVar14) = 1;
        uVar9 = uVar11;
      }
      uVar11 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar8) {
        uVar11 = uVar8;
      }
      do {
        uVar15 = uVar11;
        if (uVar11 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar15 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      uVar14 = uVar15;
      uVar11 = uVar9;
    } while (uVar14 != uVar8);
  }
  local_d8 = &local_248;
  local_230 = &local_138;
  local_228 = &local_150;
  local_220 = &local_130;
  local_218 = &local_180;
  local_258 = &local_d0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = &LAB_148305916;
  local_260 = 0;
  local_248 = param_1;
  uStack_240 = local_198;
  local_238 = &local_168;
  FUN_1401f8d10(L"ParallelFor Task",uVar9 + 1,1);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  if (local_e1 != '\0') {
    local_248 = (double)CONCAT71(local_248._1_7_,2);
    FUN_1483057ae(&local_1a8,&local_248,*(undefined4 *)((longlong)param_1 + 0x1b0));
    uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
    uVar14 = 0;
    if ((uVar8 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U)))
    {
      uVar9 = 1;
      uVar12 = 1;
      if (1 < (int)uVar8) {
        uVar9 = uVar8;
      }
      do {
        uVar14 = uVar9;
        if (uVar9 == uVar12) break;
        uVar11 = uVar12 >> 9;
        uVar15 = uVar12 & 0x1ff;
        uVar14 = uVar12;
        uVar12 = uVar12 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar11] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
LAB_1482d1a3a:
    if (uVar14 != uVar8) {
      if (*(char *)(local_198[0] + (int)uVar14) == '\0') {
        uVar9 = FUN_146bc96d4(param_1,uVar14);
        if (((-1 < (int)uVar9) && ((int)uVar9 < (int)uStack_1a0)) &&
           (*(char *)(local_1a8 + (ulonglong)uVar9) == '\x02')) {
          *(undefined1 *)(local_1a8 + (ulonglong)uVar9) = 0;
        }
      }
      else if (((*(char *)(local_198[0] + (int)uVar14) == '\x01') &&
               (uVar9 = FUN_146bc96d4(param_1,uVar14), -1 < (int)uVar9)) &&
              ((int)uVar9 < (int)uStack_1a0)) {
        *(undefined1 *)(local_1a8 + (ulonglong)uVar9) = 1;
      }
      uVar9 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar12 = uVar14;
      do {
        uVar14 = uVar9;
        if (uVar9 - 1 == uVar12) break;
        uVar14 = uVar12 + 1;
        uVar12 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_1482d1a3a;
    }
    FUN_14830326e(&local_1b8,*(undefined4 *)((longlong)param_1 + 0x1b0),1);
    if (0 < (int)uStack_1a0) {
      lVar18 = 0;
      do {
        LOCK();
        *(bool *)(local_1b8 + lVar18) = *(char *)(local_1a8 + lVar18) == '\x01';
        UNLOCK();
        lVar18 = lVar18 + 1;
      } while (lVar18 < (int)uStack_1a0);
    }
    uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
    uVar14 = 0;
    if ((uVar8 != 0) &&
       (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U))) {
      uVar9 = 1;
      uVar12 = 1;
      if (1 < (int)uVar8) {
        uVar9 = uVar8;
      }
      do {
        uVar14 = uVar9;
        if (uVar9 == uVar12) break;
        uVar11 = uVar12 >> 9;
        uVar15 = uVar12 & 0x1ff;
        uVar14 = uVar12;
        uVar12 = uVar12 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar11] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
LAB_1482d1c3e:
    if (uVar14 != uVar8) {
      uVar9 = FUN_146bc96d4(param_1,uVar14);
      if (((-1 < (int)uVar9) && ((int)uVar9 < (int)uStack_1a0)) &&
         (*(char *)(local_1a8 + (ulonglong)uVar9) == '\x01')) {
        *(undefined1 *)(local_198[0] + (int)uVar14) = 1;
      }
      uVar9 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar12 = uVar14;
      do {
        uVar14 = uVar9;
        if (uVar9 - 1 == uVar12) break;
        uVar14 = uVar12 + 1;
        uVar12 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_1482d1c3e;
    }
  }
  local_1c8 = 0;
  uStack_1c0 = 0;
  FUN_14830326e(&local_1c8,
                *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144),1)
  ;
  uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
  uVar14 = 0;
  if ((uVar8 != 0) &&
     (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U))) {
    uVar17 = 1;
    uVar9 = 1;
    if (1 < (int)uVar8) {
      uVar9 = uVar8;
    }
    do {
      uVar12 = (uint)uVar17;
      uVar14 = uVar9;
      if (uVar9 == uVar12) break;
      uVar20 = uVar17 >> 9;
      uVar17 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar12;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar20] +
                                         (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
  }
  uVar9 = 0xffffffff;
LAB_1482d1c95:
  if (uVar14 != uVar8) {
    cVar2 = *(char *)(local_198[0] + (int)uVar14);
    LOCK();
    *(bool *)(local_1c8 + (int)uVar14) = cVar2 == '\x01';
    UNLOCK();
    if (cVar2 == '\0') {
      uVar9 = uVar14;
    }
    uVar12 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar8) {
      uVar12 = uVar8;
    }
    uVar11 = uVar14;
    do {
      uVar14 = uVar12;
      if (uVar12 - 1 == uVar11) break;
      uVar14 = uVar11 + 1;
      uVar11 = uVar14;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)((longlong)param_1 + 0x148) +
                                           (ulonglong)(uVar14 >> 9) * 8) +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    goto LAB_1482d1c95;
  }
  uVar20 = (ulonglong)local_f4;
  uVar17 = uVar20 + (uVar20 == 0);
  local_1cc = local_f4;
  local_1e8 = 0;
  uStack_1e0 = 0;
  if (uVar20 == 0) {
    uVar14 = 0;
  }
  else {
    uVar10 = 0xbf400001;
    uVar16 = 0;
    do {
      uVar13 = uVar10 % uVar17;
      FUN_148303adc(&local_1cc,&local_248,uVar16);
      dVar23 = (double)local_238 + local_170;
      dVar3 = (double)uStack_240 + local_178;
      dVar4 = local_248 + local_180;
      dVar5 = SQRT(dVar23 * dVar23 + dVar4 * dVar4 + dVar3 * dVar3);
      dVar6 = 1.0 / dVar5;
      if (0.0 < dVar5) {
        dVar23 = dVar23 * dVar6;
        dVar3 = dVar3 * dVar6;
      }
      else {
        dVar3 = 0.0;
        dVar23 = 0.0;
      }
      lVar18 = (longlong)(int)(uint)uStack_1e0;
      uVar14 = (uint)uStack_1e0 + 1;
      uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar14);
      if (uStack_1e0._4_4_ < uVar14) {
        FUN_1403e3958(&local_1e8);
      }
      *(ulonglong *)(local_1e8 + lVar18 * 0x18) =
           -(ulonglong)(0.0 < dVar5) & (ulonglong)(dVar4 * dVar6);
      *(double *)(local_1e8 + 8 + lVar18 * 0x18) = dVar3;
      *(double *)(local_1e8 + 0x10 + lVar18 * 0x18) = dVar23;
      uVar10 = uVar13 + 0xbf400001;
      uVar20 = uVar20 - 1;
      uVar16 = uVar13;
    } while (uVar20 != 0);
    uVar14 = (uint)uStack_1e0;
  }
  lVar18 = (longlong)(int)(uint)uStack_160;
  if (lVar18 != 0) {
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(uint)uStack_160 + uVar14);
    if (uStack_1e0._4_4_ - uVar14 < (uint)uStack_160) {
      FUN_1403e3958(&local_1e8,uVar14);
    }
    memcpy((void *)((longlong)(int)uVar14 * 0x18 + local_1e8),local_168,lVar18 * 0x18);
    uVar14 = (uint)uStack_1e0;
  }
  local_210 = &local_f4;
  uStack_240 = (longlong *)&local_e1;
  local_238 = (void **)&local_1a8;
  local_230 = &local_1b8;
  local_220 = (double *)&local_1c8;
  local_218 = (double *)&local_f0;
  local_208 = &local_1e8;
  local_200 = &local_138;
  local_1f8 = &local_130;
  local_1f0 = &local_150;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = &LAB_148306000;
  local_d8 = &local_248;
  local_258 = &local_d0;
  local_260 = 0;
  local_248 = param_1;
  local_228 = (undefined1 **)local_198;
  local_f4 = uVar14;
  FUN_1401f8d10(L"ParallelFor Task",uVar9 + 1,1);
  if (local_e1 == '\x01') {
    uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
    uVar14 = 0;
    if ((uVar8 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U)))
    {
      uVar9 = 1;
      uVar12 = 1;
      if (1 < (int)uVar8) {
        uVar9 = uVar8;
      }
      do {
        uVar14 = uVar9;
        if (uVar9 == uVar12) break;
        uVar11 = uVar12 >> 9;
        uVar15 = uVar12 & 0x1ff;
        uVar14 = uVar12;
        uVar12 = uVar12 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar11] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
    if (uVar14 != uVar8) {
      do {
        if ((((*(byte *)(local_1c8 + (int)uVar14) & 1) != 0) &&
            (uVar9 = FUN_146bc96d4(param_1,uVar14), -1 < (int)uVar9)) &&
           ((int)uVar9 < (int)uStack_1b0)) {
          LOCK();
          *(undefined1 *)(local_1b8 + (ulonglong)uVar9) = 1;
          UNLOCK();
        }
        uVar9 = uVar14 + 1;
        if ((int)(uVar14 + 1) < (int)uVar8) {
          uVar9 = uVar8;
        }
        uVar12 = uVar14;
        do {
          uVar14 = uVar9;
          if (uVar9 - 1 == uVar12) break;
          uVar14 = uVar12 + 1;
          uVar12 = uVar14;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)((longlong)param_1 + 0x148) +
                                               (ulonglong)(uVar14 >> 9) * 8) +
                                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      } while (uVar14 != uVar8);
      uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
    }
    uVar14 = 0;
    if ((uVar8 != 0) &&
       (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U))) {
      uVar9 = 1;
      uVar12 = 1;
      if (1 < (int)uVar8) {
        uVar9 = uVar8;
      }
      do {
        uVar14 = uVar9;
        if (uVar9 == uVar12) break;
        uVar11 = uVar12 >> 9;
        uVar15 = uVar12 & 0x1ff;
        uVar14 = uVar12;
        uVar12 = uVar12 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar11] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
LAB_1482d2350:
    if (uVar14 != uVar8) {
      uVar9 = FUN_146bc96d4(param_1,uVar14);
      if (((-1 < (int)uVar9) && ((int)uVar9 < (int)uStack_1b0)) &&
         (((*(byte *)(local_1b8 + (ulonglong)uVar9) & 1) != 0 ||
          ((*(char *)(local_250 + 2) == '\x01' &&
           (*(char *)(local_1a8 + (ulonglong)uVar9) == '\x02')))))) {
        LOCK();
        *(undefined1 *)(local_1c8 + (int)uVar14) = 1;
        UNLOCK();
      }
      uVar9 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar12 = uVar14;
      do {
        uVar14 = uVar9;
        if (uVar9 - 1 == uVar12) break;
        uVar14 = uVar12 + 1;
        uVar12 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_1482d2350;
    }
  }
  else if (*(char *)(local_250 + 2) == '\x01') {
    uVar8 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
    uVar14 = 0;
    if (uVar8 != 0) {
      uVar14 = 0;
      if (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U)) {
        uVar17 = 1;
        uVar9 = 1;
        if (1 < (int)uVar8) {
          uVar9 = uVar8;
        }
        do {
          uVar12 = (uint)uVar17;
          uVar14 = uVar9;
          if (uVar9 == uVar12) break;
          uVar20 = uVar17 >> 9;
          uVar17 = (ulonglong)(uVar12 + 1);
          uVar14 = uVar12;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))[uVar20]
                                             + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      }
    }
LAB_1482d2170:
    if (uVar14 != uVar8) {
      if (*(char *)(local_198[0] + (int)uVar14) == '\x02') {
        LOCK();
        *(undefined1 *)(local_1c8 + (int)uVar14) = 1;
        UNLOCK();
      }
      uVar9 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar12 = uVar14;
      do {
        uVar14 = uVar9;
        if (uVar9 - 1 == uVar12) break;
        uVar14 = uVar12 + 1;
        uVar12 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_1482d2170;
    }
  }
  FUN_1448c4dd6(param_3,uStack_1c0 & 0xffffffff,1);
  if (0 < (int)param_3[1]) {
    lVar18 = 0;
    do {
      *(byte *)(*param_3 + lVar18) = ~*(byte *)(local_1c8 + lVar18) & 1;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)param_3[1]);
  }
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_198[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482d24ce FUN_1482d24ce body=180 status=ok
// SIG undefined FUN_1482d24ce(void)

void FUN_1482d24ce(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae72be0;
  FUN_141082b5c(param_1 + 0x17,0);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x14,0);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x11,0);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0xe,0);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x0001482d2577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1482d2582 FUN_1482d2582 body=1810 status=ok
// SIG undefined FUN_1482d2582(void)

void FUN_1482d2582(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_628 [32];
  longlong *local_608;
  int local_5f4;
  longlong local_5f0;
  undefined4 local_5e8;
  int local_5e0;
  int local_5dc;
  undefined1 *local_5d8;
  int *local_5d0;
  longlong local_5c8;
  undefined4 local_5c0;
  longlong local_5b8 [2];
  longlong local_5a8;
  undefined8 uStack_5a0;
  longlong local_590;
  undefined1 *local_588;
  undefined1 **local_580;
  undefined8 *local_578;
  uint **local_570;
  uint *local_568;
  undefined8 uStack_560;
  undefined1 *local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_528;
  undefined4 local_520;
  undefined8 local_51c;
  undefined4 local_514;
  undefined8 local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4cc;
  undefined4 local_4c4;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined2 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_480;
  undefined4 local_478;
  undefined8 local_474;
  undefined4 local_46c;
  undefined8 local_460;
  undefined4 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_424;
  undefined4 local_41c;
  undefined8 local_410;
  undefined4 local_408;
  undefined2 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  undefined4 local_374;
  undefined8 local_368;
  undefined4 local_360;
  undefined1 local_358;
  undefined1 local_357;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined4 local_2cc;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_280 [320];
  int local_140;
  int local_13c;
  undefined8 *local_138;
  int local_128;
  int local_124;
  longlong local_e8;
  char local_d8;
  int local_d0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_628;
  FUN_1403ed7b2(param_2,*(undefined4 *)(param_1 + 8),1);
  if (param_3 == (longlong *)0x0) {
    if (*(int *)(param_1 + 8) == 0) goto LAB_1482d25fc;
    bVar15 = false;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x28);
    bVar15 = iVar12 != 0;
    FUN_1403ed7b2(param_3,iVar12,1);
    if (*(int *)(param_1 + 8) == 0) {
      if ((iVar12 == 0) || (*(int *)(param_1 + 0x28) == 0)) goto LAB_1482d25fc;
      bVar15 = true;
    }
  }
  local_608 = (longlong *)((ulonglong)local_608 & 0xffffffffffffff00);
  FUN_1411b354a(local_280,0,0,0);
  local_580 = &local_550;
  local_578 = &local_548;
  local_528 = 0;
  local_520 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_51c = 0xffffffff00000080;
  local_514 = 0;
  local_508 = 0;
  local_500 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4cc = 0xffffffff00000080;
  local_4c4 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4a8 = 0x101;
  local_480 = 0;
  local_478 = 0;
  local_4a0 = 0;
  uStack_498 = 0;
  local_474 = 0xffffffff00000080;
  local_46c = 0;
  local_460 = 0;
  local_458 = 0;
  local_430 = 0;
  local_428 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_424 = 0xffffffff00000080;
  local_41c = 0;
  local_410 = 0;
  local_408 = 0;
  local_400 = 0x101;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3cc = 0xffffffff00000080;
  local_3c4 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_388 = 0;
  local_380 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_37c = 0xffffffff00000080;
  local_374 = 0;
  local_368 = 0;
  local_360 = 0;
  local_357 = 1;
  local_358 = 1;
  local_330 = 0;
  local_328 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_324 = 0xffffffff00000080;
  local_31c = 0;
  local_310 = 0;
  local_308 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_2d4 = 0xffffffff00000080;
  local_2cc = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0x101;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_570 = &local_568;
  local_568 = (uint *)0x0;
  uStack_560 = 0;
  local_590 = param_1;
  local_588 = local_280;
  local_550 = local_280;
  FUN_143afeb30(&local_590,param_1);
  iVar12 = local_140 * 0x200 + local_13c;
  local_5f4 = iVar12;
  if (bVar15) {
    FUN_143afeb30(&local_590,param_1 + 0x20);
    local_5f4 = local_140 * 0x200 + local_13c;
  }
  FUN_143afeb30(&local_590,param_1 + 0x10);
  if (local_128 * 0x200 + local_124 == 0) {
    local_5a8._0_1_ = 1;
    FUN_14475e60e(param_2,&local_5a8,*(undefined4 *)(param_1 + 8));
    iVar1 = (int)param_2[1];
    iVar14 = iVar1;
    if (bVar15) {
      local_5a8._0_1_ = 1;
      FUN_14475e60e(param_3,&local_5a8,*(undefined4 *)(param_1 + 0x28));
      iVar14 = *(int *)(param_1 + 0x28) + iVar1;
    }
    FUN_14582eef4(local_280,0);
    uVar3 = *local_568;
    iVar7 = local_140 * 0x200 + local_13c;
    if ((int)uVar3 < iVar7) {
      iVar5 = 1;
      do {
        iVar7 = iVar5;
        if (iVar5 < (int)uStack_560) {
          lVar13 = 0;
          do {
            if (uVar3 != local_568[iVar5 + lVar13]) {
              iVar7 = iVar5 + (int)lVar13;
              break;
            }
            lVar13 = lVar13 + 1;
            iVar7 = (int)uStack_560;
          } while ((longlong)(int)uStack_560 - (longlong)iVar5 != lVar13);
        }
        iVar5 = iVar7;
        iVar7 = local_d0;
        if (local_d8 == '\x01') {
          iVar8 = iVar14;
          if (iVar5 < iVar14) {
            iVar8 = iVar5;
          }
          *(int *)(*(longlong *)(local_e8 + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4) = iVar8;
          iVar7 = iVar8 + 1;
          if (iVar8 + 1 <= local_d0) {
            iVar7 = local_d0;
          }
        }
        local_d0 = iVar7;
        uVar3 = uVar3 + 1;
        iVar7 = local_140 * 0x200 + local_13c;
      } while ((int)uVar3 < iVar7);
    }
    local_5a8 = 0;
    uStack_5a0 = 0;
    FUN_1403ed7b2(&local_5a8,iVar7,CONCAT71((uint7)(uint3)((uint)local_140 >> 8),1));
    if (local_5f4 < local_140 * 0x200 + local_13c) {
      lVar13 = (longlong)local_5f4;
      do {
        *(undefined1 *)(local_5a8 + lVar13) = 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < local_140 * 0x200 + local_13c);
    }
    local_5b8[0] = 0;
    local_5b8[1] = 0;
    if (bVar15) {
      local_608 = &local_5c8;
      local_5c8 = local_5a8;
      local_5c0 = (undefined4)uStack_5a0;
      local_5d0 = &local_5e0;
      local_5dc = local_5f4;
      local_5d8 = &LAB_143b04532;
      local_5e0 = iVar12;
      FUN_1482d13bc(local_280,&local_5d8,local_5b8,param_1 + 0x30);
    }
    else {
      local_5f0 = local_5a8;
      local_5e8 = (undefined4)uStack_5a0;
      FUN_1482d03d2();
    }
    uVar4 = local_140 * 0x200 + local_13c;
    uVar3 = 0;
    if ((uVar4 != 0) && (uVar3 = 0, 0xfffd < (ushort)(*(short *)*local_138 - 1U))) {
      uVar10 = 1;
      uVar6 = 1;
      if (1 < (int)uVar4) {
        uVar6 = uVar4;
      }
      do {
        uVar9 = (uint)uVar10;
        uVar3 = uVar6;
        if (uVar6 == uVar9) break;
        uVar2 = uVar10 >> 9;
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar3 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(local_138[uVar2] + (ulonglong)(uVar9 & 0x1ff) * 2) - 1U)
              );
    }
    if (uVar3 != uVar4) {
      while (local_d8 == '\x01') {
        iVar12 = 0;
        if ((-1 < (int)uVar3) && (iVar12 = 0, (int)uVar3 < local_140 * 0x200 + local_13c)) {
          if ((ushort)(*(short *)(local_138[uVar3 >> 9] + (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) <
              0xfffe) {
            iVar12 = *(int *)(*(longlong *)(local_e8 + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 4);
          }
        }
        if ((iVar12 < 0) || (iVar14 <= iVar12)) break;
        iVar7 = iVar1;
        plVar11 = param_3;
        if (iVar12 < iVar1) {
          iVar7 = 0;
          plVar11 = param_2;
        }
        if (param_3 == (longlong *)0x0) {
          plVar11 = param_2;
        }
        if ((*(char *)(*plVar11 + (longlong)(iVar12 - iVar7)) == '\x01') &&
           (*(char *)(local_5b8[0] + (int)uVar3) == '\0')) {
          *(undefined1 *)(*plVar11 + (longlong)(iVar12 - iVar7)) = 0;
        }
        uVar6 = uVar3 + 1;
        if ((int)(uVar3 + 1) < (int)uVar4) {
          uVar6 = uVar4;
        }
        do {
          uVar9 = uVar6;
          if (uVar6 - 1 == uVar3) break;
          uVar3 = uVar3 + 1;
          uVar9 = uVar3;
        } while (0xfffd < (ushort)(*(short *)(local_138[uVar3 >> 9] + (ulonglong)(uVar3 & 0x1ff) * 2
                                             ) - 1U));
        uVar3 = uVar9;
        if (uVar3 == uVar4) break;
      }
    }
    if (local_5b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_5a8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_568 != (uint *)0x0) {
    FUN_1400020a8();
  }
  FUN_146bfdcfe(&local_548);
  FUN_141082778(local_280);
LAB_1482d25fc:
  if ((local_60 ^ (ulonglong)auStack_628) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d2c96 FUN_1482d2c96 body=349 status=ok
// SIG undefined FUN_1482d2c96(void)

undefined8 * FUN_1482d2c96(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14ae72b70;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[10] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_98 = param_1[2];
  local_50 = param_1[3];
  local_88 = (longlong *)param_1[4];
  local_40 = param_1[5];
  local_38 = param_1[6];
  uStack_30 = param_1[7];
  local_28 = param_1[8];
  uStack_20 = param_1[9];
  uVar1 = local_28;
  uVar2 = uStack_20;
  local_48 = local_88;
  local_58 = local_98;
  param_1[8] = CONCAT44(uStack_64,local_68);
  param_1[9] = CONCAT44(uStack_5c,uStack_60);
  param_1[6] = &PTR_LAB_14ae72f10;
  param_1[7] = param_1;
  param_1[4] = 0;
  param_1[5] = uStack_80;
  param_1[2] = &LAB_143b04542;
  param_1[3] = uStack_90;
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_90 = local_50;
  uStack_80 = local_40;
  local_28 = uVar1;
  uStack_20 = uVar2;
  if (local_98 != 0) {
    plVar3 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar3 = &local_78;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d2df4 FUN_1482d2df4 body=402 status=ok
// SIG undefined FUN_1482d2df4(void)

ulonglong FUN_1482d2df4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  ulonglong local_60;
  undefined7 uVar6;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  local_e0 = *(longlong *)(param_1 + 8);
  cVar1 = *(char *)(local_e0 + 0x70);
  if (cVar1 == '\0') {
    lStack_c0 = 0;
    local_b8 = 0;
    local_c8 = local_e0;
    FUN_146c37e28(&local_c8,1,1);
    local_e0 = *(longlong *)(param_1 + 8);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0;
  local_98 = 0;
  FUN_142984024(&local_e0);
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  FUN_1482d2f88((longlong *)(param_1 + 0x60),uStack_d0 & 0xffffffff,1);
  if (0 < (int)uStack_d0) {
    plVar9 = &local_c8;
    if (cVar1 != '\0') {
      plVar9 = (longlong *)0x0;
    }
    uVar5 = CONCAT71(uVar6,1);
    lVar8 = 0x100;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x60);
      puVar3 = *(undefined8 **)(local_d8 + lVar7 * 8);
      if ((undefined8 *)(lVar2 + lVar8) != puVar3) {
        if (*(longlong *)(lVar2 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar2 + lVar8) = *puVar3;
        *puVar3 = 0;
        *(undefined4 *)(lVar2 + 8 + lVar8) = *(undefined4 *)(puVar3 + 1);
        *(undefined4 *)(lVar2 + 0xc + lVar8) = *(undefined4 *)((longlong)puVar3 + 0xc);
        puVar3[1] = 0;
      }
      bVar4 = FUN_1482d3010(param_1,lVar2 + lVar8 + -0x100,plVar9);
      uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 & bVar4);
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x1c0;
    } while (lVar7 < (int)uStack_d0);
  }
  FUN_146be9400(&local_d8);
  if (lStack_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d2f88 FUN_1482d2f88 body=134 status=ok
// SIG undefined FUN_1482d2f88(void)

void FUN_1482d2f88(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148306aa8(param_1,iVar1);
    }
    FUN_148306a7e((longlong)iVar1 * 0x1c0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_148306c8c(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_148306cee(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482d3010 FUN_1482d3010 body=3795 status=ok
// SIG undefined FUN_1482d3010(void)

char FUN_1482d3010(longlong param_1,longlong param_2,longlong param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint *puVar17;
  void ***pppvVar18;
  longlong lVar19;
  int iVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  void **ppvVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  undefined1 auStack_5f8 [32];
  double *local_5d8;
  undefined4 local_5d0;
  char local_5c1;
  code *local_5c0;
  void **local_5b8;
  void **local_5b0;
  longlong *local_5a8;
  longlong local_5a0;
  longlong *local_598;
  longlong *local_590;
  longlong local_588;
  double local_580;
  double local_578;
  double local_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double dStack_548;
  double dStack_540;
  double local_538;
  double local_530;
  double local_528;
  ulonglong local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  double dStack_500;
  double dStack_4f8;
  double dStack_4f0;
  double local_4e8;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  double dStack_4a0;
  double dStack_498;
  double dStack_490;
  double local_488;
  longlong local_478;
  longlong lStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  longlong local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  void **local_438;
  ulonglong uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  longlong local_408 [4];
  void *local_3e8;
  ulonglong uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  void *local_3b8;
  ulonglong uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  longlong local_358 [4];
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_32c;
  undefined4 local_324;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined2 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined2 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_168;
  undefined1 local_167;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  ppvVar24 = (void **)(param_2 + 0x100);
  FUN_146c6a8a4(param_2,*(undefined8 *)(param_1 + 8),ppvVar24);
  cVar8 = FUN_146c6abd6(param_2);
  if ((cVar8 != '\0') && ((*(int *)(param_2 + 0x10) != 0 || (*(char *)(param_1 + 0x59) == '\0')))) {
    local_5a8 = (longlong *)CONCAT44(local_5a8._4_4_,*(int *)(param_2 + 0x10));
    local_5c1 = cVar8;
    local_590 = (longlong *)param_3;
    FUN_146c36aac(*(undefined8 *)(param_1 + 8),ppvVar24,param_2 + 0x110);
    local_380 = *(undefined8 *)(param_1 + 8);
    local_338 = 0;
    local_330 = 0;
    local_358[0] = 0;
    local_358[1] = 0;
    local_32c = 0xffffffff00000080;
    local_324 = 0;
    local_318 = 0;
    local_310 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_2dc = 0xffffffff00000080;
    local_2d4 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0x101;
    local_290 = 0;
    local_288 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_284 = 0xffffffff00000080;
    local_27c = 0;
    local_270 = 0;
    local_268 = 0;
    local_240 = 0;
    local_238 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_234 = 0xffffffff00000080;
    local_22c = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0x101;
    local_1e8 = 0;
    local_1e0 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1dc = 0xffffffff00000080;
    local_1d4 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_18c = 0xffffffff00000080;
    local_184 = 0;
    local_178 = 0;
    local_170 = 0;
    local_167 = 1;
    local_168 = 1;
    local_140 = 0;
    local_138 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_134 = 0xffffffff00000080;
    local_12c = 0;
    local_120 = 0;
    local_118 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_e4 = 0xffffffff00000080;
    local_dc = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0x101;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_398 = 0;
    uStack_390 = 0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_3b8 = (void *)0x0;
    uStack_3b0 = 0;
    local_3c8 = 0;
    uStack_3c0 = 0;
    local_3d8 = 0;
    uStack_3d0 = 0;
    local_3e8 = (void *)0x0;
    uStack_3e0 = 0;
    local_408[2] = 0;
    local_408[3] = 0;
    FUN_146bc6684(&local_380,ppvVar24,local_358,local_408 + 2);
    pvVar7 = local_3e8;
    ppvVar1 = (void **)(param_2 + 0x170);
    if (ppvVar1 != &local_3e8) {
      iVar13 = (int)uStack_3e0;
      lVar22 = (longlong)(int)uStack_3e0;
      *(int *)(param_2 + 0x178) = (int)uStack_3e0;
      if ((int)uStack_3e0 == 0 && *(int *)(param_2 + 0x17c) == 0) {
        *(undefined4 *)(param_2 + 0x17c) = 0;
      }
      else {
        FUN_144a06ca8(ppvVar1,uStack_3e0 & 0xffffffff);
        if (iVar13 != 0) {
          memcpy(*ppvVar1,pvVar7,lVar22 << 2);
        }
      }
    }
    pvVar7 = local_3b8;
    ppvVar2 = (void **)(param_2 + 0x180);
    local_5b0 = ppvVar24;
    if (ppvVar2 != &local_3b8) {
      iVar13 = (int)uStack_3b0;
      lVar22 = (longlong)(int)uStack_3b0;
      *(int *)(param_2 + 0x188) = (int)uStack_3b0;
      if ((int)uStack_3b0 == 0 && *(int *)(param_2 + 0x18c) == 0) {
        *(undefined4 *)(param_2 + 0x18c) = 0;
      }
      else {
        FUN_144a06ca8(ppvVar2,uStack_3b0 & 0xffffffff);
        if (iVar13 != 0) {
          memcpy(*ppvVar2,pvVar7,lVar22 << 2);
        }
      }
    }
    plVar3 = (longlong *)(param_2 + 0x120);
    local_5b8 = ppvVar1;
    FUN_140cae46a(plVar3,local_358);
    if ((longlong)*(int *)(param_2 + 0x118) != 0) {
      puVar21 = *(uint **)(param_2 + 0x110);
      puVar17 = puVar21 + *(int *)(param_2 + 0x118);
      local_598 = (longlong *)(param_1 + 0x30);
LAB_1482d3488:
      if (*(int *)(param_2 + 0x128) != *(int *)(param_2 + 0x154)) {
        uVar5 = *puVar21;
        lVar22 = *(longlong *)(param_2 + 0x160);
        if (*(longlong *)(param_2 + 0x160) == 0) {
          lVar22 = param_2 + 0x158;
        }
        iVar13 = *(int *)(lVar22 + (ulonglong)(*(int *)(param_2 + 0x168) - 1U & uVar5) * 4);
        if (iVar13 != -1) {
          lVar23 = (longlong)(int)uVar5;
          lVar22 = *plVar3;
          iVar20 = iVar13;
          do {
            if (*(uint *)(lVar22 + (longlong)iVar20 * 0x10) == uVar5) goto LAB_1482d34ed;
            iVar20 = *(int *)(lVar22 + ((longlong)iVar20 * 2 + 1) * 8);
          } while (iVar20 != -1);
        }
      }
      goto LAB_1482d3496;
    }
LAB_1482d335f:
    ppvVar24 = local_5b8;
    if (*(char *)(param_1 + 0x58) != '\0') {
      ppvVar24 = local_5b0;
    }
    FUN_146bcb306(&local_380,ppvVar24,1);
    plVar11 = local_5a8;
    local_590 = (longlong *)(param_2 + 400);
    FUN_146c6b324(local_590,(ulonglong)local_5a8 & 0xffffffff,1);
    local_5c0 = (code *)(param_2 + 0x1a0);
    FUN_140bfc200(local_5c0,(ulonglong)plVar11 & 0xffffffff,1);
    local_598 = (longlong *)(param_2 + 0x1b0);
    FUN_140bfc200(local_598,(ulonglong)plVar11 & 0xffffffff,1);
    if ((longlong)*(int *)(param_2 + 0x10) != 0) {
      lVar22 = *(longlong *)(param_2 + 8);
      lVar23 = (longlong)*(int *)(param_2 + 0x10) * 0x40 + lVar22;
      local_5b8 = (void **)0x0;
      local_5a0 = param_1;
      local_588 = lVar23;
      do {
        iVar13 = *(int *)(lVar22 + 0x10);
        plVar11 = local_408;
        local_408[0] = 0;
        local_408[1] = 0;
        FUN_144a1a59e(plVar11,iVar13);
        if (0 < (longlong)iVar13) {
          lVar10 = 0;
          do {
            if (*(int *)(param_2 + 0x128) != *(int *)(param_2 + 0x154)) {
              uVar5 = *(uint *)(*(longlong *)(lVar22 + 8) + lVar10 * 4);
              lVar14 = *(longlong *)(param_2 + 0x160);
              if (*(longlong *)(param_2 + 0x160) == 0) {
                lVar14 = param_2 + 0x158;
              }
              iVar20 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_2 + 0x168) - 1U & uVar5) * 4);
              if (iVar20 != -1) {
                do {
                  lVar14 = *plVar3 + (longlong)iVar20 * 0x10;
                  if (*(uint *)(*plVar3 + (longlong)iVar20 * 0x10) == uVar5) goto LAB_1482d372c;
                  iVar20 = *(int *)(lVar14 + 8);
                } while (iVar20 != -1);
              }
            }
            lVar14 = 0;
LAB_1482d372c:
            *(undefined4 *)(local_408[0] + lVar10 * 4) = *(undefined4 *)(lVar14 + 4);
            lVar10 = lVar10 + 1;
          } while (lVar10 != iVar13);
        }
        local_418 = 0;
        uStack_410 = 0;
        local_428 = 0;
        uStack_420 = 0;
        local_438 = (void **)0x0;
        uStack_430 = 0;
        local_448 = 0;
        uStack_440 = 0;
        local_458 = 0;
        uStack_450 = 0;
        local_468 = 0;
        uStack_460 = 0;
        local_478 = 0;
        lStack_470 = 0;
        local_5a8 = (longlong *)(lVar22 + 8);
        plVar15 = local_5a8;
        if (*(char *)(param_1 + 0x58) != '\0') {
          plVar15 = plVar11;
          plVar11 = local_5a8;
        }
        cVar8 = FUN_146bc50be(&local_380,plVar15,plVar11,&local_478);
        if (cVar8 != '\0') {
          lVar23 = (longlong)local_5b8 * 0x10;
          FUN_146bc4da6(&local_478,*(longlong *)local_5c0 + lVar23);
          pppvVar18 = (void ***)(lVar23 + *local_598);
          if (pppvVar18 != &local_438) {
            iVar13 = (int)uStack_430;
            lVar23 = (longlong)(int)uStack_430;
            *(int *)(pppvVar18 + 1) = (int)uStack_430;
            if ((int)uStack_430 == 0 && *(int *)((longlong)pppvVar18 + 0xc) == 0) {
              *(undefined4 *)((longlong)pppvVar18 + 0xc) = 0;
            }
            else {
              local_5b0 = local_438;
              FUN_144a06ca8(pppvVar18,uStack_430 & 0xffffffff);
              if (iVar13 != 0) {
                memcpy(*pppvVar18,local_5b0,lVar23 << 2);
              }
            }
          }
          lVar10 = *(longlong *)(param_1 + 8);
          if (*(longlong *)(lVar10 + 0x208) != 0) {
            local_4a8 = DAT_14c8464f0;
            local_4b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_4b0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            dStack_4a0 = 0.0;
            dStack_498 = 0.0;
            dStack_490 = 0.0;
            local_488 = 1.0;
            local_5b0 = (void **)(longlong)(int)uStack_450;
            if (0 < (longlong)local_5b0) {
              fVar28 = 0.0;
              lVar23 = 0;
              ppvVar24 = (void **)0x0;
              do {
                FUN_146bc9878(&local_380,&local_4dc,local_458 + lVar23,1);
                local_508 = DAT_14c8464f0;
                local_518 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_510 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                dStack_500 = 0.0;
                dStack_4f8 = 0.0;
                dStack_4f0 = 0.0;
                local_4e8 = 1.0;
                if (lVar23 == 0) {
                  uVar5 = *(uint *)*local_5a8;
                  uVar6 = ((uint *)*local_5a8)[1];
                  lVar10 = *(longlong *)(*(longlong *)(local_5a0 + 8) + 0x10);
                  lVar14 = *(longlong *)(lVar10 + (ulonglong)(uVar6 >> 9) * 8);
                  uVar12 = (ulonglong)uVar6 & 0x1ff;
                  lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar5 >> 9) * 8);
                  uVar16 = (ulonglong)uVar5 & 0x1ff;
                  dVar27 = *(double *)(lVar14 + 0x10 + uVar12 * 0x18) -
                           *(double *)(lVar10 + 0x10 + uVar16 * 0x18);
                  local_528 = *(double *)(lVar14 + 8 + uVar12 * 0x18) -
                              *(double *)(lVar10 + 8 + uVar16 * 0x18);
                  local_530 = *(double *)(lVar14 + uVar12 * 0x18) -
                              *(double *)(lVar10 + uVar16 * 0x18);
                  dVar25 = SQRT(dVar27 * dVar27 + local_530 * local_530 + local_528 * local_528);
                  dVar26 = 1.0 / dVar25;
                  if (0.0 < dVar25) {
                    local_530 = local_530 * dVar26;
                    local_528 = local_528 * dVar26;
                  }
                  else {
                    local_530 = 0.0;
                    local_528 = 0.0;
                  }
                  local_520 = -(ulonglong)(0.0 < dVar25) & (ulonglong)(dVar27 * dVar26);
                  local_570 = (double)local_4d4;
                  local_578 = (double)local_4d8;
                  local_580 = (double)local_4dc;
                  local_568 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  dStack_560 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  local_558 = (double)DAT_14c8464f0;
                  dStack_550 = 0.0;
                  dStack_548 = 0.0;
                  dStack_540 = 0.0;
                  local_538 = 1.0;
                  local_368 = DAT_14c8463c8;
                  local_378 = (undefined4)DAT_14c8463b8;
                  uStack_374 = DAT_14c8463b8._4_4_;
                  uStack_370 = (undefined4)DAT_14c8463c0;
                  uStack_36c = DAT_14c8463c0._4_4_;
                  FUN_146bfb7f2(&dStack_550,&local_378,&local_580);
                  local_4b8 = local_568;
                  uStack_4b0 = dStack_560;
                  local_4a8 = local_558;
                  dStack_4a0 = dStack_550;
                  dStack_498 = dStack_548;
                  dStack_490 = dStack_540;
                  local_558 = (double)local_4d4;
                  dStack_560 = (double)local_4d8;
                  local_568 = (double)local_4dc;
                  local_488 = local_538;
                  FUN_1482ae2be(&local_4b8,0,&local_530,&local_568);
                  dVar27 = dStack_490 + dStack_490;
                  local_4d0 = (dStack_498 + dStack_498) * dStack_4a0 - local_488 * dVar27;
                  local_4c0 = dStack_498 * dVar27 + (dStack_4a0 + dStack_4a0) * local_488;
                  local_4c8 = 1.0 - (dVar27 * dStack_490 + dStack_4a0 * (dStack_4a0 + dStack_4a0));
                  local_518 = local_4b8;
                  uStack_510 = uStack_4b0;
                  local_508 = local_4a8;
                  dStack_500 = dStack_4a0;
                  dStack_4f8 = dStack_498;
                  dStack_4f0 = dStack_490;
                  local_4e8 = local_488;
                }
                else {
                  dStack_4f8 = dStack_498;
                  dStack_4f0 = dStack_490;
                  local_508 = local_4a8;
                  dStack_500 = dStack_4a0;
                  local_518 = local_4b8;
                  uStack_510 = uStack_4b0;
                  local_558 = (double)local_4d4;
                  dStack_560 = (double)local_4d8;
                  local_568 = (double)local_4dc;
                  local_4e8 = local_488;
                  FUN_1482ae2be(&local_518,2,&local_568,&local_4d0);
                  uVar5 = *(uint *)(*local_5a8 + -4 + (longlong)ppvVar24 * 4);
                  uVar6 = *(uint *)(*local_5a8 + (longlong)ppvVar24 * 4);
                  lVar10 = *(longlong *)(*(longlong *)(local_5a0 + 8) + 0x10);
                  lVar14 = *(longlong *)(lVar10 + (ulonglong)(uVar5 >> 9) * 8);
                  lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar6 >> 9) * 8);
                  uVar16 = (ulonglong)uVar5 & 0x1ff;
                  uVar12 = (ulonglong)uVar6 & 0x1ff;
                  dVar27 = *(double *)(lVar14 + uVar16 * 0x18) - *(double *)(lVar10 + uVar12 * 0x18)
                  ;
                  dVar25 = *(double *)(lVar14 + 8 + uVar16 * 0x18) -
                           *(double *)(lVar10 + 8 + uVar12 * 0x18);
                  dVar26 = *(double *)(lVar14 + 0x10 + uVar16 * 0x18) -
                           *(double *)(lVar10 + 0x10 + uVar12 * 0x18);
                  fVar28 = fVar28 + (float)SQRT(dVar26 * dVar26 + dVar27 * dVar27 + dVar25 * dVar25)
                  ;
                }
                local_5d8 = &local_568;
                local_568 = (double)(ulonglong)(uint)(fVar28 * *(float *)(local_5a0 + 0x5c));
                local_5d0 = 0;
                FUN_146bca8d2(&local_380,local_458 + lVar23,&local_518);
                ppvVar24 = (void **)((longlong)ppvVar24 + 1);
                lVar23 = lVar23 + 8;
              } while (local_5b0 != ppvVar24);
              lVar10 = *(longlong *)(local_5a0 + 8);
              param_1 = local_5a0;
            }
          }
          lVar23 = local_588;
          lVar14 = *local_590;
          lVar19 = (longlong)local_5b8 * 0x40;
          *(longlong *)(lVar14 + lVar19) = lVar10;
          FUN_146c5d50a(lVar14 + lVar19,local_408,CONCAT71((int7)((ulonglong)lVar19 >> 8),1));
        }
        FUN_146bc8622(&local_478);
        if (local_408[0] != 0) {
          FUN_1400020a8();
        }
        local_5b8 = (void **)((longlong)local_5b8 + 1);
        lVar22 = lVar22 + 0x40;
      } while (lVar22 != lVar23);
    }
    FUN_146bc8622(local_408 + 2);
    FUN_146bfdcfe(local_358);
    cVar8 = local_5c1;
  }
  if ((local_90 ^ (ulonglong)auStack_5f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar8;
  while (iVar13 = *(int *)(lVar10 + 8), iVar13 != -1) {
LAB_1482d34ed:
    lVar10 = lVar22 + (longlong)iVar13 * 0x10;
    if (*(uint *)(lVar22 + (longlong)iVar13 * 0x10) == uVar5) goto LAB_1482d3508;
  }
  lVar10 = 0;
LAB_1482d3508:
  uVar6 = *(uint *)(lVar10 + 4);
  if (-1 < (int)uVar6) {
    lVar22 = *(longlong *)(param_1 + 8);
    if ((int)uVar6 < *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24)) {
      uVar12 = (ulonglong)(uVar6 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar22 + 0x28) + (ulonglong)(uVar6 >> 9) * 8) +
                             uVar12 * 2) - 1U) < 0xfffe) {
        uVar16 = (ulonglong)(uVar5 & 0x1ff);
        lVar10 = *(longlong *)(*(longlong *)(lVar22 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
        local_468 = *(undefined8 *)(lVar10 + 0x10 + uVar16 * 0x18);
        plVar11 = (longlong *)(lVar10 + uVar16 * 0x18);
        local_478 = *plVar11;
        lStack_470 = plVar11[1];
        if (local_590 == (longlong *)0x0) {
          local_518 = DAT_14c846370;
          fVar28 = DAT_14c846378;
          if (*(char *)(lVar22 + 0x70) != '\0') {
            lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x60) + (ulonglong)(uVar5 >> 9) * 8);
            local_518 = *(double *)(lVar22 + uVar16 * 0xc);
            fVar28 = *(float *)(lVar22 + 8 + uVar16 * 0xc);
          }
        }
        else {
          lVar22 = *(longlong *)((longlong)local_590 + 8);
          local_518 = (double)CONCAT44((float)*(double *)(lVar22 + 8 + lVar23 * 0x18),
                                       (float)*(double *)(lVar22 + lVar23 * 0x18));
          fVar28 = (float)*(double *)(lVar22 + 0x10 + lVar23 * 0x18);
        }
        uStack_510 = CONCAT44(uStack_510._4_4_,fVar28);
        local_568 = (double)CONCAT44(local_568._4_4_,uVar5);
        local_5c0 = *(code **)(param_1 + 0x10);
        plVar11 = *(longlong **)(param_1 + 0x20);
        if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
          plVar11 = local_598;
        }
        uVar9 = (**(code **)(*plVar11 + 8))();
        local_5d8 = &local_568;
        (*local_5c0)(&local_4b8,uVar9,&local_478,&local_518);
        local_5c0 = *(code **)(param_1 + 8);
        cVar8 = FUN_146bfed03(&local_4b8);
        if (cVar8 != '\0') {
          lVar22 = *(longlong *)
                    (*(longlong *)((longlong)local_5c0 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
          *(undefined8 *)(lVar22 + 0x10 + uVar12 * 0x18) = local_4a8;
          puVar4 = (undefined4 *)(lVar22 + uVar12 * 0x18);
          *puVar4 = (undefined4)local_4b8;
          puVar4[1] = local_4b8._4_4_;
          puVar4[2] = (undefined4)uStack_4b0;
          puVar4[3] = uStack_4b0._4_4_;
          if ((char)*(longlong *)((longlong)local_5c0 + 0x210) == '\x01') {
            LOCK();
            *(int *)((longlong)local_5c0 + 0x214) = *(int *)((longlong)local_5c0 + 0x214) + 1;
            UNLOCK();
          }
        }
      }
    }
  }
LAB_1482d3496:
  puVar21 = puVar21 + 1;
  if (puVar21 == puVar17) goto LAB_1482d335f;
  goto LAB_1482d3488;
}



// FUNCTION 1482d3ee4 FUN_1482d3ee4 body=772 status=ok
// SIG undefined FUN_1482d3ee4(void)

int * FUN_1482d3ee4(int *param_1,undefined8 *param_2,undefined8 param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1[2] = *(int *)(param_2 + 1);
  *(undefined8 *)param_1 = *param_2;
  param_1[4] = -1;
  param_1[5] = 0x7fefffff;
  param_1[6] = -1;
  param_1[7] = 0x7fefffff;
  param_1[8] = -1;
  param_1[9] = 0x7fefffff;
  param_1[10] = -1;
  param_1[0xb] = -0x100001;
  param_1[0xc] = -1;
  param_1[0xd] = -0x100001;
  param_1[0xe] = -1;
  param_1[0xf] = -0x100001;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_145c688c4(param_3,&local_b8,0);
  *(undefined8 *)(param_1 + 0xc) = local_98;
  *(undefined8 *)(param_1 + 0xe) = uStack_90;
  *(undefined8 *)(param_1 + 8) = local_a8;
  *(undefined8 *)(param_1 + 10) = uStack_a0;
  *(undefined8 *)(param_1 + 4) = local_b8;
  *(undefined8 *)(param_1 + 6) = uStack_b0;
  uVar6 = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  uVar4 = DAT_14c8464e0;
  dVar10 = *(double *)(param_1 + 4);
  uVar8 = SUB84(dVar10,0);
  uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar15 = *(double *)(param_1 + 10);
  uVar11 = SUB84(dVar15,0);
  uVar12 = (undefined4)((ulonglong)dVar15 >> 0x20);
  if (dVar10 <= dVar15) {
    dVar10 = *(double *)(param_1 + 6);
    dVar15 = *(double *)(param_1 + 0xc);
    if (dVar10 <= dVar15) {
      dVar14 = *(double *)(param_1 + 8);
      uVar18 = SUB84(dVar14,0);
      uVar19 = (undefined4)((ulonglong)dVar14 >> 0x20);
      dVar13 = *(double *)(param_1 + 0xe);
      if (dVar14 <= dVar13) goto LAB_1482d403f;
    }
  }
  uStack_90 = DAT_14c8464f0;
  uStack_a0 = DAT_14c8464e0;
  local_98 = DAT_14c8464e8;
  local_a8 = DAT_14c8464f0;
  local_b8 = DAT_14c8464e0;
  uStack_b0 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 4) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 6) = uVar5;
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar6;
  *(undefined8 *)(param_1 + 10) = uVar4;
  uVar18 = (undefined4)*(undefined8 *)(param_1 + 8);
  uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  dVar13 = *(double *)(param_1 + 0xe);
  uVar8 = (undefined4)*(undefined8 *)(param_1 + 4);
  uVar9 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
  dVar10 = *(double *)(param_1 + 6);
  dVar15 = *(double *)(param_1 + 0xc);
  uVar11 = (undefined4)*(undefined8 *)(param_1 + 10);
  uVar12 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20);
LAB_1482d403f:
  if (5.0 <= param_4) {
    param_4 = 5.0;
  }
  if (param_4 <= 0.01) {
    param_4 = 0.01;
  }
  dVar17 = (dVar13 + (double)CONCAT44(uVar19,uVar18)) * 0.5;
  dVar2 = (dVar15 + dVar10) * 0.5;
  dVar3 = ((double)CONCAT44(uVar12,uVar11) + (double)CONCAT44(uVar9,uVar8)) * 0.5;
  dVar13 = dVar13 - (double)CONCAT44(uVar19,uVar18);
  dVar15 = dVar15 - dVar10;
  dVar14 = (double)CONCAT44(uVar12,uVar11) - (double)CONCAT44(uVar9,uVar8);
  dVar10 = (double)(~-(ulonglong)(dVar15 <= dVar14) & (ulonglong)dVar15 |
                   (ulonglong)dVar14 & -(ulonglong)(dVar15 <= dVar14));
  uVar7 = -(ulonglong)(dVar13 <= dVar10);
  dVar1 = (double)param_4 * 0.5 * (double)(~uVar7 & (ulonglong)dVar13 | uVar7 & (ulonglong)dVar10);
  dVar10 = dVar13 * 0.5 + dVar1;
  dVar13 = dVar15 * 0.5 + dVar1;
  dVar1 = dVar1 + dVar14 * 0.5;
  dVar14 = dVar17 - dVar10;
  dVar16 = dVar2 - dVar13;
  dVar15 = dVar3 - dVar1;
  *(double *)(param_1 + 4) = dVar15;
  *(double *)(param_1 + 6) = dVar16;
  *(double *)(param_1 + 8) = dVar14;
  dVar10 = dVar10 + dVar17;
  dVar13 = dVar13 + dVar2;
  dVar1 = dVar1 + dVar3;
  *(double *)(param_1 + 10) = dVar1;
  *(double *)(param_1 + 0xc) = dVar13;
  *(double *)(param_1 + 0xe) = dVar10;
  *(double *)(param_1 + 0x10) = (dVar1 - dVar15) / (double)(*param_1 + -1);
  *(double *)(param_1 + 0x12) = (dVar13 - dVar16) / (double)(param_1[1] + -1);
  *(double *)(param_1 + 0x14) = (dVar10 - dVar14) / (double)(param_1[2] + -1);
  FUN_1482d41ea(param_1,param_3);
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d41ea FUN_1482d41ea body=164 status=ok
// SIG undefined FUN_1482d41ea(void)

void FUN_1482d41ea(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_58;
  longlong local_50;
  int local_48;
  undefined1 *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  FUN_1482d45b4(param_1 + 0x58);
  local_38 = &local_58;
  local_68 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = &LAB_143b045d2;
  local_70 = 0;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = iVar1;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d4290 FUN_1482d4290 body=216 status=ok
// SIG undefined FUN_1482d4290(void)

void FUN_1482d4290(int *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  FUN_14051b394(param_2,param_1[1] * *param_1 * param_1[2],1);
  iVar8 = *param_1;
  if (0 < iVar8) {
    iVar10 = param_1[1];
    iVar7 = 0;
    do {
      if (0 < iVar10) {
        dVar1 = *(double *)(param_1 + 0x10);
        iVar8 = param_1[2];
        iVar9 = 0;
        do {
          if (0 < iVar8) {
            dVar2 = *(double *)(param_1 + 0x12);
            lVar11 = 0;
            do {
              dVar3 = *(double *)(param_1 + 0x14);
              dVar4 = *(double *)(param_1 + 8);
              dVar5 = *(double *)(param_1 + 6);
              lVar6 = *param_2;
              lVar12 = (param_1[1] * iVar7 + iVar9) * iVar8 + lVar11;
              *(double *)(lVar6 + lVar12 * 0x18) = *(double *)(param_1 + 4) + (double)iVar7 * dVar1;
              *(double *)(lVar6 + 8 + lVar12 * 0x18) = dVar5 + (double)iVar9 * dVar2;
              *(double *)(lVar6 + 0x10 + lVar12 * 0x18) = (double)(int)lVar11 * dVar3 + dVar4;
              iVar8 = param_1[2];
              lVar11 = lVar11 + 1;
            } while ((int)lVar11 < iVar8);
            iVar10 = param_1[1];
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar10);
        iVar8 = *param_1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
  }
  return;
}



// FUNCTION 1482d4368 FUN_1482d4368 body=546 status=ok
// SIG undefined FUN_1482d4368(void)

void FUN_1482d4368(int *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  FUN_1482d458a(param_2,*param_1 * param_1[1] * param_1[2] * 3);
  iVar5 = *param_1;
  if (0 < iVar5) {
    iVar3 = param_1[1];
    iVar6 = 1;
    iVar8 = 0;
    do {
      iVar7 = iVar8 + 1;
      if (0 < iVar3) {
        iVar5 = param_1[2];
        iVar9 = 1;
        iVar11 = 0;
        do {
          iVar10 = iVar11 + 1;
          if (0 < iVar5) {
            iVar3 = 0;
            do {
              iVar12 = param_1[1];
              iVar4 = (iVar8 * iVar12 + iVar11) * iVar5 + iVar3;
              if (iVar7 < *param_1) {
                iVar1 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar1 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                  FUN_148306f12(param_2,iVar1);
                }
                *(ulonglong *)(*param_2 + (longlong)iVar1 * 8) =
                     CONCAT44(iVar5 * (iVar12 * iVar6 + iVar11) + iVar3,iVar4);
                iVar12 = param_1[1];
                iVar5 = param_1[2];
              }
              if (iVar10 < iVar12) {
                iVar1 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar1 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                  FUN_148306f12(param_2,iVar1);
                }
                *(ulonglong *)(*param_2 + (longlong)iVar1 * 8) =
                     CONCAT44(iVar5 * (iVar12 * iVar8 + iVar9) + iVar3,iVar4);
                iVar5 = param_1[2];
              }
              iVar12 = iVar3 + 1;
              if (iVar12 < iVar5) {
                iVar1 = param_1[1];
                iVar2 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar2 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
                  FUN_148306f12(param_2,iVar2);
                }
                *(ulonglong *)(*param_2 + (longlong)iVar2 * 8) =
                     CONCAT44(iVar3 + iVar5 * (iVar1 * iVar8 + iVar11) + 1,iVar4);
                iVar5 = param_1[2];
              }
              iVar3 = iVar12;
            } while (iVar12 < iVar5);
            iVar3 = param_1[1];
          }
          iVar9 = iVar9 + 1;
          iVar11 = iVar10;
        } while (iVar10 < iVar3);
        iVar5 = *param_1;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar7;
    } while (iVar7 < iVar5);
  }
  return;
}



// FUNCTION 1482d458a FUN_1482d458a body=41 status=ok
// SIG undefined FUN_1482d458a(void)

void FUN_1482d458a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_148306eb2();
  return;
}



// FUNCTION 1482d45b4 FUN_1482d45b4 body=110 status=ok
// SIG undefined FUN_1482d45b4(void)

void FUN_1482d45b4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148306fc2(param_1,iVar1);
    }
    FUN_148306f97((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148307056(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482d4624 FUN_1482d4624 body=279 status=ok
// SIG undefined FUN_1482d4624(void)

void FUN_1482d4624(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_e8 [40];
  uint local_c0;
  undefined8 *local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_81;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined1 local_69;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  FUN_146ba0be8(param_3,uVar1,1);
  local_c0 = (uint)param_5 & 1 ^ 9;
  local_90 = &local_69;
  local_69 = 0;
  local_60 = &local_a8;
  local_88 = (undefined1)param_5;
  local_81 = (undefined1)((ulonglong)param_5 >> 0x38);
  local_83 = (undefined2)((ulonglong)param_5 >> 0x28);
  local_87 = (undefined4)((ulonglong)param_5 >> 8);
  local_78 = param_6;
  local_b8 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143b046c0;
  local_a8 = param_1;
  local_a0 = param_3;
  local_98 = param_2;
  local_80 = uVar1;
  local_7c = param_4;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d473c FUN_1482d473c body=302 status=ok
// SIG undefined FUN_1482d473c(void)

void FUN_1482d473c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [40];
  uint local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined1 local_90;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_71;
  longlong local_70;
  code *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined4 *)(param_3 + 0x38);
  local_70 = param_3;
  FUN_140676836(param_4,uVar1,1);
  local_d0 = (uint)param_6 & 1 ^ 9;
  local_98 = &local_71;
  local_71 = 0;
  local_60 = &local_b8;
  local_90 = (undefined1)param_6;
  local_89 = (undefined1)((ulonglong)param_6 >> 0x38);
  local_8b = (undefined2)((ulonglong)param_6 >> 0x28);
  local_8f = (undefined4)((ulonglong)param_6 >> 8);
  local_88 = param_5;
  local_80 = param_7;
  local_c8 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143b047bc;
  local_b8 = param_1;
  local_b0 = param_4;
  local_a8 = &local_70;
  local_a0 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d486c FUN_1482d486c body=294 status=ok
// SIG undefined FUN_1482d486c(void)

void FUN_1482d486c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_e8 [40];
  uint local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_81;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined1 local_69;
  code *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_140676836(param_4,uVar1,1);
  local_c0 = (uint)param_6 & 1 ^ 9;
  local_90 = &local_69;
  local_69 = 0;
  local_60 = &local_b0;
  local_88 = (undefined1)param_6;
  local_81 = (undefined1)((ulonglong)param_6 >> 0x38);
  local_83 = (undefined2)((ulonglong)param_6 >> 0x28);
  local_87 = (undefined4)((ulonglong)param_6 >> 8);
  local_7c = param_5;
  local_78 = param_7;
  local_b8 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143b04c02;
  local_b0 = param_1;
  local_a8 = param_4;
  local_a0 = param_3;
  local_98 = param_2;
  local_80 = uVar1;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d4994 FUN_1482d4994 body=1271 status=ok
// SIG undefined FUN_1482d4994(void)

void FUN_1482d4994(int *param_1,double *param_2,uint *param_3,longlong *param_4)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_1b8 [40];
  int local_190;
  int local_18c;
  double *local_188;
  ulonglong local_180;
  double local_178;
  double local_170;
  ulonglong local_168;
  ulonglong local_160;
  double local_158;
  double local_150;
  ulonglong local_148;
  longlong *local_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  int local_114;
  int local_110;
  int local_10c;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_178 = *(double *)(param_3 + 4);
  local_158 = *(double *)(param_3 + 6);
  dVar1 = *(double *)(param_3 + 8);
  local_180 = (ulonglong)*param_3;
  local_160 = (ulonglong)param_3[1];
  lVar2 = *param_4;
  local_190 = param_3[1] - 1;
  iVar11 = *param_3 - 1;
  local_18c = param_3[2] - 1;
  dVar4 = 0.0;
  uVar7 = 0xffffffff;
  dVar15 = -1.0;
  dVar3 = 0.0;
  dVar5 = 0.0;
  local_188 = param_2;
  local_140 = param_4;
  do {
    dVar18 = local_178 - dVar15;
    dVar16 = ABS(dVar18);
    if (1.0 <= dVar16) {
      local_138 = 0.0;
      if (dVar16 < 2.0) {
        dVar16 = 2.0 - dVar16;
        local_138 = dVar16 * dVar16 * dVar16;
        goto LAB_1482d4b03;
      }
    }
    else {
      local_138 = dVar18 * dVar18 * 3.0 * dVar16 + dVar18 * dVar18 * -6.0 + 4.0;
LAB_1482d4b03:
      local_138 = local_138 / 6.0;
    }
    iVar12 = (int)uVar7 + (int)local_180;
    uVar8 = 0xffffffff;
    dVar16 = -1.0;
    uStack_130 = 0;
    iVar13 = local_190;
    local_170 = dVar15;
    local_168 = uVar7;
    do {
      dVar15 = local_158 - dVar16;
      dVar18 = ABS(dVar15);
      if (1.0 <= dVar18) {
        local_128 = 0.0;
        if (dVar18 < 2.0) {
          dVar18 = 2.0 - dVar18;
          local_128 = dVar18 * dVar18 * dVar18;
          goto LAB_1482d4b78;
        }
      }
      else {
        local_128 = dVar15 * dVar15 * 3.0 * dVar18 + dVar15 * dVar15 * -6.0 + 4.0;
LAB_1482d4b78:
        local_128 = local_128 / 6.0;
      }
      local_128 = local_128 * local_138;
      uStack_120 = 0;
      iVar14 = (int)uVar8 + (int)local_160;
      iVar10 = 4;
      dVar15 = -1.0;
      iVar9 = local_18c;
      local_150 = dVar16;
      local_148 = uVar8;
      do {
        dVar16 = dVar1 - dVar15;
        dVar18 = ABS(dVar16);
        if (1.0 <= dVar18) {
          dVar16 = 0.0;
          if (dVar18 < 2.0) {
            dVar18 = 2.0 - dVar18;
            dVar16 = dVar18 * dVar18 * dVar18;
            goto LAB_1482d4beb;
          }
        }
        else {
          dVar16 = dVar16 * dVar16 * 3.0 * dVar18 + dVar16 * dVar16 * -6.0 + 4.0;
LAB_1482d4beb:
          dVar16 = dVar16 / 6.0;
        }
        if ((((iVar12 < 0) || (*param_1 <= iVar12)) || (iVar14 < 0)) ||
           (((param_1[1] <= iVar14 || (iVar9 < 0)) || (param_1[2] <= iVar9)))) {
          local_114 = iVar12;
          local_110 = iVar14;
          local_10c = iVar9;
          FUN_1482d4e8c(param_1,&local_108,&local_114,local_140);
          dVar18 = local_108;
          dVar17 = local_100;
          dVar19 = local_f8;
        }
        else {
          uVar7 = (ulonglong)(uint)(param_1[2] * (param_1[1] * iVar11 + iVar13) + iVar9);
          dVar18 = *(double *)(lVar2 + uVar7 * 0x18);
          dVar17 = *(double *)(lVar2 + 8 + uVar7 * 0x18);
          dVar19 = *(double *)(lVar2 + 0x10 + uVar7 * 0x18);
        }
        dVar16 = dVar16 * local_128;
        dVar5 = dVar5 + dVar19 * dVar16;
        dVar3 = dVar3 + dVar17 * dVar16;
        dVar4 = dVar4 + dVar16 * dVar18;
        dVar15 = dVar15 + 1.0;
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      dVar16 = local_150 + 1.0;
      uVar6 = (int)local_148 + 1;
      uVar8 = (ulonglong)uVar6;
      iVar13 = iVar13 + 1;
    } while (uVar6 != 3);
    dVar15 = local_170 + 1.0;
    uVar6 = (int)local_168 + 1;
    uVar7 = (ulonglong)uVar6;
    iVar11 = iVar11 + 1;
    if (uVar6 == 3) {
      *local_188 = dVar4;
      local_188[1] = dVar3;
      local_188[2] = dVar5;
      if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1482d4e8c FUN_1482d4e8c body=224 status=ok
// SIG undefined FUN_1482d4e8c(void)

double * FUN_1482d4e8c(int *param_1,double *param_2,int *param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  
  iVar6 = param_1[2];
  iVar7 = param_1[1];
  iVar8 = param_3[2];
  iVar16 = iVar6 + -1;
  if (iVar8 < iVar6 + -1) {
    iVar16 = iVar8;
  }
  iVar9 = param_3[1];
  iVar13 = iVar7 + -1;
  if (iVar9 < iVar7 + -1) {
    iVar13 = iVar9;
  }
  iVar10 = *param_3;
  iVar15 = *param_1 + -1;
  if (iVar10 < *param_1 + -1) {
    iVar15 = iVar10;
  }
  if (iVar16 < 1) {
    iVar16 = 0;
  }
  if (iVar13 < 1) {
    iVar13 = 0;
  }
  if (iVar15 < 1) {
    iVar15 = 0;
  }
  lVar11 = *param_4;
  lVar14 = (longlong)
           ((iVar16 * 2 - iVar8) + ((iVar13 * 2 - iVar9) + (iVar15 * 2 - iVar10) * iVar7) * iVar6);
  lVar12 = (longlong)((iVar15 * iVar7 + iVar13) * iVar6 + iVar16);
  dVar1 = *(double *)(lVar11 + 0x10 + lVar12 * 0x18);
  dVar2 = *(double *)(lVar11 + 0x10 + lVar14 * 0x18);
  dVar3 = *(double *)(lVar11 + 8 + lVar12 * 0x18);
  dVar4 = *(double *)(lVar11 + 8 + lVar14 * 0x18);
  dVar5 = *(double *)(lVar11 + lVar12 * 0x18);
  *param_2 = (dVar5 - *(double *)(lVar11 + lVar14 * 0x18)) + dVar5;
  param_2[1] = (dVar3 - dVar4) + dVar3;
  param_2[2] = (dVar1 - dVar2) + dVar1;
  return param_2;
}



// FUNCTION 1482d4f6c FUN_1482d4f6c body=759 status=ok
// SIG undefined FUN_1482d4f6c(void)

void FUN_1482d4f6c(longlong param_1,double *param_2,int *param_3,longlong *param_4)

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
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  double dVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  
  iVar18 = param_3[1];
  iVar19 = param_3[2];
  dVar1 = *(double *)(param_3 + 4);
  dVar35 = *(double *)(param_3 + 6);
  dVar2 = *(double *)(param_3 + 8);
  dVar36 = 1.0 - dVar1;
  iVar34 = *(int *)(param_1 + 8);
  iVar25 = *(int *)(param_1 + 4) * *param_3;
  iVar26 = (iVar25 + iVar18) * iVar34;
  lVar20 = *param_4;
  lVar30 = (longlong)(iVar26 + iVar19);
  iVar33 = (*param_3 + 1) * *(int *)(param_1 + 4);
  iVar29 = (iVar33 + iVar18) * iVar34;
  lVar24 = (longlong)(iVar29 + iVar19);
  dVar38 = (1.0 - dVar35) * (1.0 - dVar2);
  dVar3 = *(double *)(lVar20 + 0x10 + lVar30 * 0x18);
  dVar4 = *(double *)(lVar20 + 8 + lVar30 * 0x18);
  dVar5 = *(double *)(lVar20 + 0x10 + lVar24 * 0x18);
  dVar6 = *(double *)(lVar20 + 8 + lVar24 * 0x18);
  lVar27 = (longlong)(iVar26 + 1 + iVar19);
  lVar31 = (longlong)(iVar29 + 1 + iVar19);
  dVar21 = (1.0 - dVar35) * dVar2;
  dVar7 = *(double *)(lVar20 + 0x10 + lVar27 * 0x18);
  dVar8 = *(double *)(lVar20 + 8 + lVar27 * 0x18);
  dVar9 = *(double *)(lVar20 + 0x10 + lVar31 * 0x18);
  dVar10 = *(double *)(lVar20 + 8 + lVar31 * 0x18);
  iVar25 = (iVar25 + iVar18 + 1) * iVar34;
  lVar32 = (longlong)(iVar25 + iVar19);
  iVar34 = (iVar33 + iVar18 + 1) * iVar34;
  lVar22 = (longlong)(iVar19 + iVar34);
  dVar37 = (1.0 - dVar2) * dVar35;
  dVar11 = *(double *)(lVar20 + 0x10 + lVar32 * 0x18);
  dVar12 = *(double *)(lVar20 + 8 + lVar32 * 0x18);
  dVar13 = *(double *)(lVar20 + 0x10 + lVar22 * 0x18);
  dVar14 = *(double *)(lVar20 + 8 + lVar22 * 0x18);
  lVar23 = (longlong)(iVar25 + iVar19 + 1);
  lVar28 = (longlong)(iVar34 + iVar19 + 1);
  dVar15 = *(double *)(lVar20 + 0x10 + lVar23 * 0x18);
  dVar16 = *(double *)(lVar20 + 8 + lVar23 * 0x18);
  dVar35 = dVar35 * dVar2;
  dVar2 = *(double *)(lVar20 + 0x10 + lVar28 * 0x18);
  dVar17 = *(double *)(lVar20 + 8 + lVar28 * 0x18);
  *param_2 = (dVar1 * *(double *)(lVar20 + lVar28 * 0x18) +
             dVar36 * *(double *)(lVar20 + lVar23 * 0x18)) * dVar35 +
             (*(double *)(lVar20 + lVar22 * 0x18) * dVar1 +
             *(double *)(lVar20 + lVar32 * 0x18) * dVar36) * dVar37 +
             (*(double *)(lVar20 + lVar31 * 0x18) * dVar1 +
             *(double *)(lVar20 + lVar27 * 0x18) * dVar36) * dVar21 +
             (*(double *)(lVar20 + lVar24 * 0x18) * dVar1 +
             *(double *)(lVar20 + lVar30 * 0x18) * dVar36) * dVar38;
  param_2[1] = (dVar17 * dVar1 + dVar16 * dVar36) * dVar35 +
               (dVar14 * dVar1 + dVar12 * dVar36) * dVar37 +
               (dVar10 * dVar1 + dVar8 * dVar36) * dVar21 +
               (dVar6 * dVar1 + dVar4 * dVar36) * dVar38;
  param_2[2] = (dVar2 * dVar1 + dVar15 * dVar36) * dVar35 +
               (dVar13 * dVar1 + dVar11 * dVar36) * dVar37 +
               (dVar9 * dVar1 + dVar7 * dVar36) * dVar21 + (dVar5 * dVar1 + dVar3 * dVar36) * dVar38
  ;
  return;
}



// FUNCTION 1482d5264 FUN_1482d5264 body=1674 status=ok
// SIG undefined FUN_1482d5264(void)

void FUN_1482d5264(longlong param_1,double *param_2,int *param_3,longlong *param_4)

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
  double dVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  longlong lVar36;
  int iVar37;
  longlong lVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  longlong lVar42;
  int iVar43;
  longlong lVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  
  iVar28 = param_3[1];
  iVar29 = param_3[2];
  iVar40 = *(int *)(param_1 + 8);
  iVar37 = *(int *)(param_1 + 4) * *param_3;
  iVar41 = (iVar37 + iVar28) * iVar40;
  lVar30 = *param_4;
  lVar38 = (longlong)(iVar41 + iVar29);
  dVar1 = *(double *)(lVar30 + 8 + lVar38 * 0x18);
  dVar2 = *(double *)(lVar30 + 0x10 + lVar38 * 0x18);
  iVar39 = (*param_3 + 1) * *(int *)(param_1 + 4);
  iVar43 = (iVar39 + iVar28) * iVar40;
  lVar36 = (longlong)(iVar43 + iVar29);
  dVar3 = *(double *)(lVar30 + 8 + lVar36 * 0x18);
  dVar4 = *(double *)(lVar30 + 0x10 + lVar36 * 0x18);
  lVar42 = (longlong)(iVar41 + 1 + iVar29);
  dVar5 = *(double *)(lVar30 + 8 + lVar42 * 0x18);
  dVar6 = *(double *)(lVar30 + 0x10 + lVar42 * 0x18);
  lVar44 = (longlong)(iVar43 + 1 + iVar29);
  dVar7 = *(double *)(lVar30 + 8 + lVar44 * 0x18);
  dVar8 = *(double *)(lVar30 + 0x10 + lVar44 * 0x18);
  dVar9 = *(double *)(param_3 + 6);
  dVar10 = *(double *)(param_3 + 8);
  dVar45 = 1.0 - dVar9;
  dVar31 = 1.0 - dVar10;
  dVar11 = *(double *)(lVar30 + lVar38 * 0x18);
  dVar12 = *(double *)(lVar30 + lVar36 * 0x18);
  dVar13 = *(double *)(lVar30 + lVar42 * 0x18);
  dVar14 = *(double *)(lVar30 + lVar44 * 0x18);
  iVar37 = (iVar37 + iVar28 + 1) * iVar40;
  lVar36 = (longlong)(iVar37 + iVar29);
  iVar40 = (iVar39 + iVar28 + 1) * iVar40;
  lVar38 = (longlong)(iVar29 + iVar40);
  dVar15 = *(double *)(lVar30 + 0x10 + lVar36 * 0x18);
  dVar16 = *(double *)(lVar30 + 0x10 + lVar38 * 0x18);
  dVar17 = *(double *)(lVar30 + 8 + lVar36 * 0x18);
  dVar18 = *(double *)(lVar30 + 8 + lVar38 * 0x18);
  dVar19 = *(double *)(lVar30 + lVar36 * 0x18);
  dVar20 = *(double *)(lVar30 + lVar38 * 0x18);
  lVar38 = (longlong)(iVar37 + 1 + iVar29);
  lVar36 = (longlong)(iVar40 + 1 + iVar29);
  dVar21 = *(double *)(lVar30 + 0x10 + lVar38 * 0x18);
  dVar22 = *(double *)(lVar30 + 0x10 + lVar36 * 0x18);
  dVar23 = *(double *)(lVar30 + 8 + lVar38 * 0x18);
  dVar24 = *(double *)(lVar30 + 8 + lVar36 * 0x18);
  dVar25 = *(double *)(lVar30 + lVar38 * 0x18);
  dVar26 = *(double *)(lVar30 + lVar36 * 0x18);
  dVar27 = *(double *)(param_3 + 4);
  dVar49 = 1.0 - dVar27;
  dVar53 = dVar4 * dVar27 + dVar2 * dVar49;
  dVar46 = dVar3 * dVar27 + dVar1 * dVar49;
  dVar50 = dVar12 * dVar27 + dVar11 * dVar49;
  dVar47 = dVar8 * dVar27 + dVar6 * dVar49;
  dVar48 = dVar7 * dVar27 + dVar5 * dVar49;
  dVar35 = dVar14 * dVar27 + dVar13 * dVar49;
  dVar51 = dVar16 * dVar27 + dVar15 * dVar49;
  dVar54 = dVar18 * dVar27 + dVar17 * dVar49;
  dVar34 = dVar20 * dVar27 + dVar19 * dVar49;
  dVar32 = dVar22 * dVar27 + dVar21 * dVar49;
  dVar33 = dVar24 * dVar27 + dVar23 * dVar49;
  dVar52 = dVar26 * dVar27 + dVar49 * dVar25;
  dVar27 = dVar10 + -1.0;
  dVar49 = dVar9 + -1.0;
  *param_2 = (dVar26 - dVar25) * dVar9 * dVar10 +
             (dVar20 - dVar19) * dVar9 * dVar31 +
             (dVar14 - dVar13) * dVar45 * dVar10 + (dVar12 - dVar11) * dVar45 * dVar31;
  param_2[1] = dVar10 * dVar52 + dVar31 * dVar34 + (dVar27 * dVar50 - dVar10 * dVar35);
  param_2[2] = dVar52 * dVar9 + ((dVar35 * dVar45 + dVar49 * dVar50) - dVar34 * dVar9);
  param_2[3] = (dVar24 - dVar23) * dVar9 * dVar10 +
               (dVar18 - dVar17) * dVar9 * dVar31 +
               (dVar7 - dVar5) * dVar45 * dVar10 + (dVar3 - dVar1) * dVar45 * dVar31;
  param_2[4] = dVar10 * dVar33 + dVar54 * dVar31 + (dVar46 * dVar27 - dVar10 * dVar48);
  param_2[5] = dVar33 * dVar9 + ((dVar48 * dVar45 + dVar46 * dVar49) - dVar54 * dVar9);
  param_2[6] = (dVar22 - dVar21) * dVar9 * dVar10 +
               (dVar16 - dVar15) * dVar9 * dVar31 +
               (dVar8 - dVar6) * dVar45 * dVar10 + (dVar4 - dVar2) * dVar45 * dVar31;
  param_2[7] = dVar10 * dVar32 + dVar51 * dVar31 + (dVar53 * dVar27 - dVar10 * dVar47);
  param_2[8] = dVar32 * dVar9 + ((dVar47 * dVar45 + dVar53 * dVar49) - dVar51 * dVar9);
  return;
}



// FUNCTION 1482d58ee FUN_1482d58ee body=1895 status=ok
// SIG undefined FUN_1482d58ee(void)

void FUN_1482d58ee(int *param_1,double *param_2,uint *param_3,longlong *param_4)

{
  double dVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  undefined1 auStack_208 [40];
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  int local_1b0;
  int local_1ac;
  double local_1a8;
  undefined8 uStack_1a0;
  double *local_198;
  ulonglong local_190;
  double local_188;
  double local_180;
  ulonglong local_178;
  ulonglong local_170;
  double local_168;
  double local_160;
  ulonglong local_158;
  longlong *local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 uStack_120;
  int local_114;
  int local_110;
  int local_10c;
  double local_108;
  double local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_188 = *(double *)(param_3 + 4);
  local_168 = *(double *)(param_3 + 6);
  dVar1 = *(double *)(param_3 + 8);
  local_190 = (ulonglong)*param_3;
  local_170 = (ulonglong)param_3[1];
  lVar3 = *param_4;
  local_1b0 = param_3[1] - 1;
  iVar12 = *param_3 - 1;
  local_1ac = param_3[2] - 1;
  dVar23 = 0.0;
  uVar8 = 0xffffffff;
  dVar17 = -1.0;
  dVar4 = 0.0;
  local_1b8 = 0.0;
  dVar20 = 0.0;
  local_1c0 = 0.0;
  local_1c8 = 0.0;
  dVar6 = 0.0;
  local_1d0 = 0.0;
  local_1d8 = 0.0;
  local_198 = param_2;
  local_150 = param_4;
  do {
    dVar16 = local_188 - dVar17;
    dVar18 = ABS(dVar16);
    if (1.0 <= dVar18) {
      local_1a8 = 0.0;
      local_1e0 = 0.0;
      if (dVar18 < 2.0) {
        dVar19 = 2.0 - dVar18;
        local_1a8 = (dVar19 * dVar19 * dVar19) / 6.0;
        local_1e0 = (dVar16 * -dVar19 * dVar19) / (dVar18 + dVar18);
      }
    }
    else {
      local_1a8 = (dVar16 * dVar16 * 3.0 * dVar18 + dVar16 * dVar16 * -6.0 + 4.0) / 6.0;
      local_1e0 = (dVar18 * 3.0 + -4.0) * dVar16 * 0.5;
    }
    uStack_1a0 = 0;
    iVar13 = (int)uVar8 + (int)local_190;
    uVar9 = 0xffffffff;
    dVar16 = -1.0;
    iVar14 = local_1b0;
    local_180 = dVar17;
    local_178 = uVar8;
    do {
      dVar17 = local_168 - dVar16;
      dVar18 = ABS(dVar17);
      if (1.0 <= dVar18) {
        local_128 = 0.0;
        local_140 = 0.0;
        if (dVar18 < 2.0) {
          dVar19 = 2.0 - dVar18;
          local_128 = (dVar19 * dVar19 * dVar19) / 6.0;
          local_140 = (dVar17 * -dVar19 * dVar19) / (dVar18 + dVar18);
        }
      }
      else {
        local_128 = (dVar17 * dVar17 * 3.0 * dVar18 + dVar17 * dVar17 * -6.0 + 4.0) / 6.0;
        local_140 = (dVar18 * 3.0 + -4.0) * dVar17 * 0.5;
      }
      local_148 = local_1e0 * local_128;
      local_140 = local_140 * local_1a8;
      local_128 = local_128 * local_1a8;
      iVar15 = (int)uVar9 + (int)local_170;
      iVar11 = 4;
      dVar17 = -1.0;
      uStack_120 = 0;
      iVar10 = local_1ac;
      local_160 = dVar16;
      local_158 = uVar9;
      do {
        dVar16 = dVar1 - dVar17;
        dVar18 = ABS(dVar16);
        if (1.0 <= dVar18) {
          dVar5 = 0.0;
          dVar19 = 0.0;
          if (dVar18 < 2.0) {
            dVar19 = 2.0 - dVar18;
            dVar5 = (dVar19 * dVar19 * dVar19) / 6.0;
            dVar19 = (dVar16 * -dVar19 * dVar19) / (dVar18 + dVar18);
          }
        }
        else {
          dVar5 = (dVar16 * dVar16 * 3.0 * dVar18 + dVar16 * dVar16 * -6.0 + 4.0) / 6.0;
          dVar19 = (dVar18 * 3.0 + -4.0) * dVar16 * 0.5;
        }
        dVar19 = dVar19 * local_128;
        dVar16 = local_148 * dVar5;
        dVar5 = dVar5 * local_140;
        local_138 = dVar20;
        local_130 = dVar4;
        if ((((iVar13 < 0) || (*param_1 <= iVar13)) || (iVar15 < 0)) ||
           (((param_1[1] <= iVar15 || (iVar10 < 0)) || (param_1[2] <= iVar10)))) {
          local_114 = iVar13;
          local_110 = iVar15;
          local_10c = iVar10;
          FUN_1482d4e8c(param_1,&local_108,&local_114,local_150);
          uVar21 = (undefined4)local_f8;
          uVar22 = (undefined4)((ulonglong)local_f8 >> 0x20);
          dVar18 = local_108;
          dVar20 = local_100;
        }
        else {
          uVar8 = (ulonglong)(uint)(param_1[2] * (param_1[1] * iVar12 + iVar14) + iVar10);
          uVar2 = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
          uVar21 = (undefined4)uVar2;
          uVar22 = (undefined4)((ulonglong)uVar2 >> 0x20);
          dVar18 = *(double *)(lVar3 + uVar8 * 0x18);
          dVar20 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
        }
        local_1d8 = local_1d8 + dVar19 * (double)CONCAT44(uVar22,uVar21);
        local_1c8 = local_1c8 + dVar19 * dVar20;
        local_1b8 = local_1b8 + dVar19 * dVar18;
        local_1d0 = local_1d0 + dVar5 * (double)CONCAT44(uVar22,uVar21);
        local_1c0 = local_1c0 + dVar5 * dVar20;
        dVar4 = local_130 + dVar5 * dVar18;
        dVar6 = dVar6 + (double)CONCAT44(uVar22,uVar21) * dVar16;
        dVar20 = local_138 + dVar20 * dVar16;
        dVar23 = dVar23 + dVar16 * dVar18;
        dVar17 = dVar17 + 1.0;
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      dVar16 = local_160 + 1.0;
      uVar7 = (int)local_158 + 1;
      uVar9 = (ulonglong)uVar7;
      iVar14 = iVar14 + 1;
    } while (uVar7 != 3);
    dVar17 = local_180 + 1.0;
    uVar7 = (int)local_178 + 1;
    uVar8 = (ulonglong)uVar7;
    iVar12 = iVar12 + 1;
  } while (uVar7 != 3);
  *local_198 = dVar23;
  local_198[1] = dVar4;
  local_198[2] = local_1b8;
  local_198[3] = dVar20;
  local_198[4] = local_1c0;
  local_198[5] = local_1c8;
  local_198[6] = dVar6;
  local_198[7] = local_1d0;
  local_198[8] = local_1d8;
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d6056 FUN_1482d6056 body=87 status=ok
// SIG undefined FUN_1482d6056(void)

undefined4 FUN_1482d6056(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c))) {
    if (((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x40) + (ulonglong)(param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 8) + 0x18), lVar1 != 0)) {
      uVar2 = *(undefined4 *)(lVar1 + 8);
    }
  }
  return uVar2;
}



// FUNCTION 1482d60ae FUN_1482d60ae body=87 status=ok
// SIG undefined FUN_1482d60ae(void)

undefined4 FUN_1482d60ae(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c))) {
    if (((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x40) + (ulonglong)(param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 8) + 0x10), lVar1 != 0)) {
      uVar2 = *(undefined4 *)(lVar1 + 8);
    }
  }
  return uVar2;
}



// FUNCTION 1482d6106 FUN_1482d6106 body=124 status=ok
// SIG undefined FUN_1482d6106(void)

undefined4 FUN_1482d6106(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_146c08aba(param_1 + 0x38);
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = uVar1;
  FUN_1482d6184(param_1);
  local_38 = *(undefined8 *)(param_1 + 0x10);
  FUN_1482d61f6(param_1 + 0x20,&local_38,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d6184 FUN_1482d6184 body=114 status=ok
// SIG undefined FUN_1482d6184(void)

void FUN_1482d6184(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    if (param_1[2] == 0) {
      param_1[1] = (longlong)puVar1;
    }
    else {
      *(undefined8 **)(param_1[2] + 0x10) = puVar1;
      puVar1[3] = param_1[2];
    }
    param_1[2] = (longlong)puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001482d61e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
    return;
  }
  return;
}



// FUNCTION 1482d61f6 FUN_1482d61f6 body=90 status=ok
// SIG undefined FUN_1482d61f6(void)

void FUN_1482d61f6(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  uVar2 = (uint)param_3;
  if (uVar1 != uVar2) {
    if (uVar2 <= uVar1) {
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 8) = *param_2;
      return;
    }
    FUN_14830719c(param_1,param_3 & 0xffffffff);
  }
  FUN_148307104(param_1,param_2);
  return;
}



// FUNCTION 1482d6250 FUN_1482d6250 body=195 status=ok
// SIG undefined FUN_1482d6250(void)

undefined4 FUN_1482d6250(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)(uint)param_3 < 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x28) + (param_3 >> 9 & 0x7fffff) * 8) +
             (ulonglong)((uint)param_3 & 0x1ff) * 8);
  }
  uVar2 = FUN_146c08aba(param_1 + 0x38);
  uVar1 = *param_2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar3 = uVar1;
  *(undefined4 *)(puVar3 + 1) = uVar2;
  puVar3[2] = 0;
  puVar3[3] = 0;
  FUN_1483072c0(param_1,puVar3,lVar4);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  if (lVar4 != 0) {
    puVar3 = (undefined8 *)(lVar4 + 0x18);
  }
  local_30 = *puVar3;
  FUN_1482d61f6(param_1 + 0x20,&local_30,uVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d6314 FUN_1482d6314 body=157 status=ok
// SIG undefined FUN_1482d6314(void)

void FUN_1482d6314(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x40) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar1 = (ulonglong)((param_2 >> 9) << 3);
      uVar2 = (ulonglong)((param_2 & 0x1ff) << 3);
      FUN_1482d63b2(param_1,*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar1) + uVar2));
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar1) + uVar2) = 0;
      FUN_146c09a68(param_1 + 0x38,param_2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1482d63b2 FUN_1482d63b2 body=174 status=ok
// SIG undefined FUN_1482d63b2(void)

void FUN_1482d63b2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 != 0) {
    plVar1 = param_1 + 1;
    lVar2 = param_1[1];
    if ((int)param_1[3] == 1) {
      while (lVar2 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x10);
        FUN_1400020a8();
        *plVar1 = lVar2;
      }
      *plVar1 = 0;
      param_1[2] = 0;
      iVar3 = 0;
    }
    else {
      if (lVar2 == param_2) {
        lVar2 = *(longlong *)(lVar2 + 0x10);
        *plVar1 = lVar2;
        *(undefined8 *)(lVar2 + 0x18) = 0;
      }
      else if (param_1[2] == param_2) {
        lVar2 = *(longlong *)(param_1[2] + 0x18);
        param_1[2] = lVar2;
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      else {
        lVar2 = *(longlong *)(param_2 + 0x18);
        *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18) = lVar2;
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      }
      FUN_1400020a8(param_2);
      iVar3 = (int)param_1[3] + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001482d643a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,iVar3);
    return;
  }
  return;
}


