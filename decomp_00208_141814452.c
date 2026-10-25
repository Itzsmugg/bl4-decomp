// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141814452 FUN_141814452 body=60 status=ok
// SIG undefined FUN_141814452(void)

void FUN_141814452(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x40);
  FUN_140aa1618(param_1 + 0xd8,param_2);
  FUN_140aa1618(param_1 + 0x180,param_2);
  return;
}



// FUNCTION 14181448e FUN_14181448e body=102 status=ok
// SIG undefined FUN_14181448e(void)

void FUN_14181448e(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x40);
  FUN_140aa1618(param_1 + 0x60,param_2);
  FUN_140aa1618(param_1 + 0x100,param_2);
  FUN_140aa1618(param_1 + 0x120,param_2);
  FUN_140aa1618(param_1 + 0x140,param_2);
  FUN_140aa1618(param_1 + 0x160,param_2);
  return;
}



// FUNCTION 1418144f4 FUN_1418144f4 body=264 status=ok
// SIG undefined FUN_1418144f4(void)

void FUN_1418144f4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400ef488();
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x40) + 0x240;
  uVar3 = FUN_140309e34(lVar1 + 0x40,lVar2,lVar1 + 0x58);
  *(undefined4 *)(param_1 + 0x418) = uVar3;
  FUN_140309ec4(lVar1 + 0x60,&local_40,lVar2);
  *(undefined8 *)(param_1 + 0x430) = local_30;
  *(undefined4 *)(param_1 + 0x420) = local_40;
  *(undefined4 *)(param_1 + 0x424) = uStack_3c;
  *(undefined4 *)(param_1 + 0x428) = uStack_38;
  *(undefined4 *)(param_1 + 0x42c) = uStack_34;
  uVar3 = FUN_140e4cbdc(lVar1 + 0x100,lVar2,lVar1 + 0x118);
  *(undefined4 *)(param_1 + 0x438) = uVar3;
  uVar3 = FUN_140309e34(lVar1 + 0x120,lVar2,lVar1 + 0x138);
  *(undefined4 *)(param_1 + 0x43c) = uVar3;
  uVar3 = FUN_140309e34(lVar1 + 0x140,lVar2,lVar1 + 0x158);
  *(undefined4 *)(param_1 + 0x440) = uVar3;
  uVar3 = FUN_140309e34(lVar1 + 0x160,lVar2,lVar1 + 0x178);
  *(undefined4 *)(param_1 + 0x444) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418145fe FUN_1418145fe body=114 status=ok
// SIG undefined FUN_1418145fe(void)

void FUN_1418145fe(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x40);
  FUN_140aa1618(param_1 + 0xd8,param_2);
  FUN_140aa1618(param_1 + 0x138,param_2);
  FUN_140aa1618(param_1 + 0x158,param_2);
  if (*(char *)(param_1 + 0x178) == '\x01') {
    FUN_140aa1618(param_1 + 0x180,param_2);
  }
  FUN_140aa1618(param_1 + 0x1a0,param_2);
  return;
}



// FUNCTION 141814670 FUN_141814670 body=313 status=ok
// SIG undefined FUN_141814670(void)

void FUN_141814670(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400ef488();
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x40) + 0x240;
  FUN_140309ec4(lVar1 + 0x40,&local_40,lVar2);
  *(undefined8 *)(param_1 + 0x428) = local_30;
  *(undefined4 *)(param_1 + 0x418) = local_40;
  *(undefined4 *)(param_1 + 0x41c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x420) = uStack_38;
  *(undefined4 *)(param_1 + 0x424) = uStack_34;
  FUN_140d0fa06(lVar1 + 0xd8,&local_40,lVar2);
  *(undefined8 *)(param_1 + 0x440) = local_30;
  *(undefined4 *)(param_1 + 0x430) = local_40;
  *(undefined4 *)(param_1 + 0x434) = uStack_3c;
  *(undefined4 *)(param_1 + 0x438) = uStack_38;
  *(undefined4 *)(param_1 + 0x43c) = uStack_34;
  uVar3 = FUN_140309e34(lVar1 + 0x138,lVar2,lVar1 + 0x150);
  *(undefined4 *)(param_1 + 0x448) = uVar3;
  uVar3 = FUN_140309e34(lVar1 + 0x158,lVar2,lVar1 + 0x170);
  *(undefined4 *)(param_1 + 0x44c) = uVar3;
  if (*(char *)(lVar1 + 0x178) == '\x01') {
    uVar3 = FUN_140309e34(lVar1 + 0x180,lVar2,lVar1 + 0x198);
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x450) = uVar3;
  fVar4 = (float)FUN_140309e34(lVar1 + 0x1a0,lVar2,lVar1 + 0x1b8);
  fVar5 = 1.0;
  if (1.0 <= fVar4) {
    fVar5 = fVar4;
  }
  *(float *)(param_1 + 0x454) = fVar5;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418147aa FUN_1418147aa body=1476 status=ok
// SIG undefined FUN_1418147aa(void)

void FUN_1418147aa(longlong param_1,longlong param_2)

{
  void *_Dst;
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_158 [36];
  int local_134;
  int local_130;
  int local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined8 ***local_118;
  double local_110;
  double local_108;
  ushort local_100;
  byte local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar5 = *(longlong *)(param_1 + 0x48);
  fVar15 = *(float *)(param_1 + 0x454);
  local_134 = (int)(*(float *)(param_1 + 0x448) / fVar15);
  if (*(char *)(lVar5 + 0x178) == '\x01') {
    iVar9 = (int)(*(float *)(param_1 + 0x450) / fVar15);
  }
  else {
    iVar9 = 1;
  }
  if (((local_134 == 0) || (local_130 = (int)(*(float *)(param_1 + 0x44c) / fVar15), local_130 == 0)
      ) || (iVar9 == 0)) goto LAB_141814c8a;
  fVar10 = (float)FUN_1447c7e44();
  fVar15 = *(float *)(param_1 + 0x454);
  fVar11 = (float)FUN_1447c7e44(*(undefined4 *)(param_1 + 0x44c),fVar15);
  fVar16 = *(float *)(param_1 + 0x454);
  fVar12 = (float)FUN_1447c7e44(*(undefined4 *)(param_1 + 0x450),fVar16);
  fVar12 = fVar12 / (float)iVar9 + *(float *)(param_1 + 0x454);
  if (*(char *)(lVar5 + 0x178) == '\0') {
    fVar17 = 0.0;
  }
  else {
    fVar17 = fVar12 * 0.5;
  }
  fVar13 = (float)(*(double *)(param_1 + 0x438) * 0.017453292519943295);
  fVar13 = (float)(longlong)
                  (fVar13 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar13 < 0.0) * 4))
           * -6.2831855 + fVar13;
  if (1.5707964 < fVar13) {
    fVar18 = 3.1415927;
LAB_141814d2a:
    fVar13 = fVar18 - fVar13;
    fVar18 = -1.0;
  }
  else {
    if (fVar13 < -1.5707964) {
      fVar18 = -3.1415927;
      goto LAB_141814d2a;
    }
    fVar18 = 1.0;
  }
  iVar7 = local_130 * local_134 * iVar9 + *(int *)(param_2 + 0x388);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (*(int *)(param_2 + 0x38c) < iVar7) {
    FUN_14023a58c(param_2);
  }
  if (0 < local_134) {
    fVar14 = fVar13 * fVar13;
    local_124 = fVar10 / (float)local_134 + fVar15;
    local_11c = fVar11 / (float)local_130 + fVar16;
    fVar18 = fVar18 * (((((fVar14 * -2.6051615e-07 + 2.4760495e-05) * fVar14 + -0.0013888378) *
                         fVar14 + 0.041666638) * fVar14 + -0.5) * fVar14 + 1.0);
    local_128 = local_124 * 0.5;
    local_120 = local_11c * 0.5;
    fVar13 = (((((fVar14 * -2.3889859e-08 + 2.7525562e-06) * fVar14 + -0.00019840874) * fVar14 +
               0.008333331) * fVar14 + -0.16666667) * fVar14 + 1.0) * fVar13;
    local_12c = 0;
    do {
      if (0 < local_130) {
        fVar15 = (float)local_12c * local_124 + local_128;
        iVar7 = 0;
        do {
          if (0 < iVar9) {
            fVar16 = (float)iVar7 * local_11c + local_120;
            iVar8 = 0;
            do {
              fVar10 = fVar15 - *(float *)(param_1 + 0x448) * 0.5;
              fVar11 = fVar16 - *(float *)(param_1 + 0x44c) * 0.5;
              dVar3 = (double)(((float)iVar8 * fVar12 + fVar17) - *(float *)(param_1 + 0x450) * 0.5)
                      + *(double *)(param_1 + 0x428);
              dVar4 = (double)(fVar10 * fVar13 + fVar11 * fVar18) + *(double *)(param_1 + 0x420);
              ppppuVar6 = (undefined8 ****)
                          ((double)(fVar10 * fVar18 - fVar13 * fVar11) +
                          *(double *)(param_1 + 0x418));
              iVar1 = *(int *)(param_2 + 0x388);
              *(uint *)(param_2 + 0x388) = iVar1 + 1U;
              if (*(uint *)(param_2 + 0x38c) < iVar1 + 1U) {
                FUN_14052e0a0(param_2,iVar1);
              }
              lVar5 = *(longlong *)(param_2 + 0x380);
              if (*(longlong *)(param_2 + 0x380) == 0) {
                lVar5 = param_2;
              }
              _Dst = (void *)(lVar5 + (longlong)iVar1 * 0x38);
              local_100 = 0x18;
              local_f8 = 4;
              *(undefined2 *)(lVar5 + 0x18 + (longlong)iVar1 * 0x38) = 0x18;
              local_118 = ppppuVar6;
              local_110 = dVar4;
              local_108 = dVar3;
              if (DAT_14c9a8a30 == (code *)0x0) {
                memcpy(_Dst,&local_118,(longlong)DAT_14c9a8990);
              }
              else {
                (*DAT_14c9a8a30)(_Dst,&local_118);
              }
              *(byte *)((longlong)_Dst + 0x20) = local_f8;
              *(undefined8 *)((longlong)_Dst + 0x28) = 0;
              *(undefined8 *)((longlong)_Dst + 0x30) = 0;
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
              if (pcVar2 != (code *)0x0) {
                ppppuVar6 = &local_118;
                if (0x18 < local_100) {
                  ppppuVar6 = (undefined8 ****)local_118;
                }
                (*pcVar2)(ppppuVar6);
              }
              if (0x18 < local_100) {
                FUN_1400020a8(local_118);
              }
              iVar8 = iVar8 + 1;
            } while (iVar9 != iVar8);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != local_130);
      }
      local_12c = local_12c + 1;
    } while (local_12c != local_134);
  }
LAB_141814c8a:
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141814d70 FUN_141814d70 body=51 status=ok
// SIG undefined FUN_141814d70(void)

void FUN_141814d70(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_1400ef488();
  uVar1 = FUN_140e4cbdc(*(longlong *)(param_1 + 0x48) + 0x40,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x58);
  *(undefined4 *)(param_1 + 0x418) = uVar1;
  return;
}



// FUNCTION 141814da4 FUN_141814da4 body=146 status=ok
// SIG undefined FUN_141814da4(void)

undefined8 * FUN_141814da4(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  bVar1 = *(byte *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 3) = uVar2;
  _Dst = param_1;
  _Src = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    *param_1 = _Dst;
    _Src = (undefined8 *)*param_2;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar3)();
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  return param_1;
}



// FUNCTION 141814e40 FUN_141814e40 body=110 status=ok
// SIG undefined FUN_141814e40(void)

void FUN_141814e40(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400ef488();
  FUN_140309ec4(*(longlong *)(param_1 + 0x48) + 0x40,&local_30,*(longlong *)(param_1 + 0x40) + 0x240
               );
  *(undefined8 *)(param_1 + 0x428) = local_20;
  *(undefined4 *)(param_1 + 0x418) = local_30;
  *(undefined4 *)(param_1 + 0x41c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x420) = uStack_28;
  *(undefined4 *)(param_1 + 0x424) = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141814eb0 FUN_141814eb0 body=1453 status=ok
// SIG undefined FUN_141814eb0(void)

void FUN_141814eb0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *_Dst;
  float fVar2;
  float fVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  undefined1 auStack_148 [32];
  double *local_128;
  undefined8 uStack_120;
  undefined8 ***local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ushort local_100;
  byte local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  fVar2 = *(float *)(param_1 + 0x438);
  local_128 = (double *)0x0;
  uStack_120 = 0;
  iVar14 = *(int *)(param_1 + 0x448);
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (iVar14 != 0) {
    FUN_1447a8aa0(&local_128);
    if ((int)uStack_120 < *(int *)(param_1 + 0x448)) {
      do {
        lVar10 = (longlong)(int)uStack_120;
        iVar14 = 0;
LAB_141814fbf:
        do {
          fVar3 = *(float *)(param_1 + 0x418);
          fVar19 = *(float *)(param_1 + 0x43c) * 0.5;
          lVar18 = *(longlong *)(param_1 + 0x40);
          iVar12 = (int)*(float *)(param_1 + 0x41c) - (int)fVar3;
          iVar17 = 0;
          if (-1 < iVar12) {
            uVar16 = *(int *)(lVar18 + 0x4ec) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar18 + 0x4ec) = uVar16;
            iVar17 = (int)((float)(iVar12 + 1) * ((float)(uVar16 >> 9 | 0x3f800000) + -1.0));
          }
          iVar12 = (int)-fVar19;
          iVar13 = (int)fVar19 - iVar12;
          if (iVar13 < 0) {
            iVar13 = 0;
          }
          else {
            uVar16 = *(int *)(lVar18 + 0x4ec) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar18 + 0x4ec) = uVar16;
            iVar13 = (int)((float)(iVar13 + 1) * ((float)(uVar16 >> 9 | 0x3f800000) + -1.0));
          }
          fVar19 = ((float)(iVar13 + iVar12) + *(float *)(param_1 + 0x440)) * 0.017453292;
          fVar19 = (float)(longlong)
                          (fVar19 * 0.15915494 +
                          *(float *)(&DAT_14a184448 + (ulonglong)(fVar19 < 0.0) * 4)) * -6.2831855 +
                   fVar19;
          if (1.5707964 < fVar19) {
            fVar21 = 3.1415927;
LAB_141815230:
            fVar19 = fVar21 - fVar19;
            fVar21 = -1.0;
          }
          else {
            if (fVar19 < -1.5707964) {
              fVar21 = -3.1415927;
              goto LAB_141815230;
            }
            fVar21 = 1.0;
          }
          fVar23 = fVar19 * fVar19;
          dVar7 = (double)(iVar17 + (int)fVar3);
          dVar6 = (double)((((((fVar23 * -2.3889859e-08 + 2.7525562e-06) * fVar23 + -0.00019840874)
                              * fVar23 + 0.008333331) * fVar23 + -0.16666667) * fVar23 + 1.0) *
                          fVar19) * dVar7 + *(double *)(param_1 + 0x428);
          dVar4 = *(double *)(param_1 + 0x430);
          dVar8 = (double)((((((fVar23 * -2.6051615e-07 + 2.4760495e-05) * fVar23 + -0.0013888378) *
                              fVar23 + 0.041666638) * fVar23 + -0.5) * fVar23 + 1.0) * fVar21) *
                  dVar7 + *(double *)(param_1 + 0x420);
          if (iVar14 == 9) goto LAB_141815240;
          iVar14 = iVar14 + 1;
        } while (fVar2 <= 10.0);
        if ((int)uStack_120 != 0) {
          pdVar15 = local_128;
          while (dVar20 = *pdVar15 - dVar8, dVar22 = pdVar15[1] - dVar6,
                (double)(*(float *)(param_1 + 0x438) * *(float *)(param_1 + 0x438)) <
                dVar22 * dVar22 + dVar20 * dVar20) {
            pdVar15 = pdVar15 + 3;
            if (pdVar15 == local_128 + lVar10 * 3) goto LAB_141815240;
          }
          goto LAB_141814fbf;
        }
LAB_141815240:
        uVar16 = (int)uStack_120 + 1;
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar16);
        if (uStack_120._4_4_ < uVar16) {
          FUN_1403e3958(&local_128);
        }
        local_128[lVar10 * 3] = dVar8;
        local_128[lVar10 * 3 + 1] = dVar6;
        local_128[lVar10 * 3 + 2] = (double)((ulonglong)dVar7 & 0x8000000000000000) + dVar4;
      } while ((int)uStack_120 < *(int *)(param_1 + 0x448));
    }
    pdVar15 = local_128;
    if ((int)uStack_120 != 0) {
      lVar10 = (longlong)(int)uStack_120;
      lVar18 = 0;
      do {
        iVar14 = *(int *)(param_2 + 0x388);
        *(uint *)(param_2 + 0x388) = iVar14 + 1U;
        if (*(uint *)(param_2 + 0x38c) < iVar14 + 1U) {
          FUN_14052e0a0(param_2,iVar14);
        }
        lVar9 = *(longlong *)(param_2 + 0x380);
        if (*(longlong *)(param_2 + 0x380) == 0) {
          lVar9 = param_2;
        }
        puVar1 = (undefined8 *)((longlong)pdVar15 + lVar18);
        _Dst = (void *)(lVar9 + (longlong)iVar14 * 0x38);
        local_100 = 0x18;
        local_118 = (undefined8 ***)*puVar1;
        uStack_110 = puVar1[1];
        local_108 = puVar1[2];
        local_f8 = 4;
        *(undefined2 *)(lVar9 + 0x18 + (longlong)iVar14 * 0x38) = 0x18;
        if (DAT_14c9a8a30 == (code *)0x0) {
          memcpy(_Dst,&local_118,(longlong)DAT_14c9a8990);
        }
        else {
          (*DAT_14c9a8a30)(_Dst,&local_118);
        }
        *(byte *)((longlong)_Dst + 0x20) = local_f8;
        *(undefined8 *)((longlong)_Dst + 0x28) = 0;
        *(undefined8 *)((longlong)_Dst + 0x30) = 0;
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
        if (pcVar5 != (code *)0x0) {
          ppppuVar11 = &local_118;
          if (0x18 < local_100) {
            ppppuVar11 = (undefined8 ****)local_118;
          }
          (*pcVar5)(ppppuVar11);
        }
        if (0x18 < local_100) {
          FUN_1400020a8(local_118);
        }
        lVar18 = lVar18 + 0x18;
      } while (lVar10 * 0x18 != lVar18);
    }
    if (local_128 != (double *)0x0) {
      FUN_1400020a8(local_128);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141815460 FUN_141815460 body=1717 status=ok
// SIG undefined FUN_141815460(void)

void FUN_141815460(longlong param_1,longlong param_2)

{
  void *_Dst;
  code *pcVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 ****ppppuVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_258 [32];
  int *local_238;
  int *local_230;
  int local_228 [64];
  int *local_128;
  undefined8 local_120;
  undefined8 ***local_118;
  double local_110;
  double local_108;
  ushort local_100;
  byte local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (1.0 < *(float *)(param_1 + 0x438)) {
    fVar17 = *(float *)(param_1 + 0x43c) / 360.0;
    dVar14 = (double)FUN_144719204(SUB84((double)(*(float *)(param_1 + 0x43c) * -0.5 +
                                                 *(float *)(param_1 + 0x440)),0),0x4076800000000000)
    ;
    dVar14 = (double)(~-(ulonglong)(dVar14 < 0.0) & (ulonglong)dVar14 |
                     (ulonglong)(dVar14 + 360.0) & -(ulonglong)(dVar14 < 0.0));
    fVar16 = (*(float *)(param_1 + 0x41c) - *(float *)(param_1 + 0x418)) /
             *(float *)(param_1 + 0x438);
    iVar10 = (int)ROUND(fVar16 + fVar16 + 0.5) >> 1;
    iVar9 = 0;
    iVar13 = 0;
    if (0 < iVar10) {
      iVar13 = iVar10;
    }
    local_128 = (int *)0x0;
    local_120 = 0x2000000000;
    if (0x20 < iVar10) {
      FUN_147f5bc2c(local_228,iVar10);
    }
    iVar11 = 0;
    do {
      uVar4 = local_120;
      fVar16 = 0.5;
      if (0 < iVar10) {
        fVar16 = (float)iVar11 / (float)iVar13;
      }
      fVar16 = (*(float *)(param_1 + 0x41c) - *(float *)(param_1 + 0x418)) * fVar16 +
               *(float *)(param_1 + 0x418);
      fVar18 = ((fVar17 + fVar17) * 3.1415927 * fVar16) / *(float *)(param_1 + 0x438);
      lVar12 = (longlong)(int)local_120;
      uVar5 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar5);
      if (local_120._4_4_ < uVar5) {
        FUN_147f5bd0e(local_228,uVar4 & 0xffffffff);
      }
      iVar6 = (int)ROUND(fVar18 + fVar18 + 0.5) >> 1;
      iVar9 = iVar9 + iVar6;
      piVar7 = local_128;
      if (local_128 == (int *)0x0) {
        piVar7 = local_228;
      }
      piVar7[lVar12 * 2] = iVar6;
      piVar7[lVar12 * 2 + 1] = (int)fVar16;
      iVar11 = iVar11 + 1;
    } while (iVar13 + 1 != iVar11);
    iVar9 = iVar9 + *(int *)(param_2 + 0x388);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (*(int *)(param_2 + 0x38c) < iVar9) {
      FUN_14023a58c(param_2,iVar9);
    }
    piVar7 = local_228;
    if (local_128 != (int *)0x0) {
      piVar7 = local_128;
    }
    if ((longlong)(int)local_120 != 0) {
      local_230 = piVar7 + (longlong)(int)local_120 * 2;
      do {
        iVar13 = *piVar7;
        local_238 = piVar7;
        if (-1 < iVar13) {
          dVar2 = (double)(float)piVar7[1];
          iVar9 = 0;
          do {
            fVar16 = 0.5;
            if (iVar13 != 0) {
              fVar16 = (float)iVar9 / (float)iVar13;
            }
            dVar15 = (double)FUN_144719204(SUB84((double)(fVar16 * *(float *)(param_1 + 0x43c) +
                                                         (float)(double)(~-(ulonglong)
                                                                           (180.0 < dVar14) &
                                                                         (ulonglong)dVar14 |
                                                                        (ulonglong)(dVar14 + -360.0)
                                                                        & -(ulonglong)
                                                                           (180.0 < dVar14))),0),
                                           0x4076800000000000);
            dVar15 = (double)(~-(ulonglong)(dVar15 < 0.0) & (ulonglong)dVar15 |
                             (ulonglong)(dVar15 + 360.0) & -(ulonglong)(dVar15 < 0.0));
            fVar16 = (float)(double)(~-(ulonglong)(180.0 < dVar15) & (ulonglong)dVar15 |
                                    (ulonglong)(dVar15 + -360.0) & -(ulonglong)(180.0 < dVar15)) *
                     0.017453292;
            fVar16 = (float)(longlong)
                            (fVar16 * 0.15915494 +
                            *(float *)(&DAT_14a184448 + (ulonglong)(fVar16 < 0.0) * 4)) * -6.2831855
                     + fVar16;
            if (1.5707964 < fVar16) {
              fVar17 = 3.1415927;
LAB_1418159db:
              fVar16 = fVar17 - fVar16;
              fVar17 = -1.0;
            }
            else {
              if (fVar16 < -1.5707964) {
                fVar17 = -3.1415927;
                goto LAB_1418159db;
              }
              fVar17 = 1.0;
            }
            fVar18 = fVar16 * fVar16;
            dVar3 = (double)((((((fVar18 * -2.3889859e-08 + 2.7525562e-06) * fVar18 + -0.00019840874
                                ) * fVar18 + 0.008333331) * fVar18 + -0.16666667) * fVar18 + 1.0) *
                            fVar16) * dVar2 + *(double *)(param_1 + 0x428);
            dVar15 = *(double *)(param_1 + 0x430) + dVar2 * 0.0;
            ppppuVar8 = (undefined8 ****)
                        ((double)((((((fVar18 * -2.6051615e-07 + 2.4760495e-05) * fVar18 +
                                     -0.0013888378) * fVar18 + 0.041666638) * fVar18 + -0.5) *
                                   fVar18 + 1.0) * fVar17) * dVar2 + *(double *)(param_1 + 0x420));
            iVar10 = *(int *)(param_2 + 0x388);
            *(uint *)(param_2 + 0x388) = iVar10 + 1U;
            if (*(uint *)(param_2 + 0x38c) < iVar10 + 1U) {
              FUN_14052e0a0(param_2,iVar10);
            }
            lVar12 = *(longlong *)(param_2 + 0x380);
            if (*(longlong *)(param_2 + 0x380) == 0) {
              lVar12 = param_2;
            }
            _Dst = (void *)(lVar12 + (longlong)iVar10 * 0x38);
            local_100 = 0x18;
            local_f8 = 4;
            *(undefined2 *)(lVar12 + 0x18 + (longlong)iVar10 * 0x38) = 0x18;
            local_118 = ppppuVar8;
            local_110 = dVar3;
            local_108 = dVar15;
            if (DAT_14c9a8a30 == (code *)0x0) {
              memcpy(_Dst,&local_118,(longlong)DAT_14c9a8990);
            }
            else {
              (*DAT_14c9a8a30)(_Dst,&local_118);
            }
            *(byte *)((longlong)_Dst + 0x20) = local_f8;
            *(undefined8 *)((longlong)_Dst + 0x28) = 0;
            *(undefined8 *)((longlong)_Dst + 0x30) = 0;
            pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
            if (pcVar1 != (code *)0x0) {
              ppppuVar8 = &local_118;
              if (0x18 < local_100) {
                ppppuVar8 = (undefined8 ****)local_118;
              }
              (*pcVar1)(ppppuVar8);
            }
            if (0x18 < local_100) {
              FUN_1400020a8(local_118);
            }
            iVar9 = iVar9 + 1;
          } while (iVar13 + 1 != iVar9);
        }
        piVar7 = local_238 + 2;
      } while (piVar7 != local_230);
    }
    if (local_128 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141815b16 FUN_141815b16 body=9 status=ok
// SIG undefined FUN_141815b16(void)

void FUN_141815b16(longlong param_1)

{
  FUN_140aa1618(param_1 + 0x38);
  return;
}



// FUNCTION 141815b20 FUN_141815b20 body=67 status=ok
// SIG undefined FUN_141815b20(void)

void FUN_141815b20(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8c3e0);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8c3d0);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 141815b64 FUN_141815b64 body=128 status=ok
// SIG undefined FUN_141815b64(void)

void FUN_141815b64(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8c3f0);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  FUN_140a6acaa(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141815be6 FUN_141815be6 body=40 status=ok
// SIG undefined FUN_141815be6(void)

void FUN_141815be6(longlong param_1)

{
  FUN_140936086();
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  return;
}



// FUNCTION 141815c28 FUN_141815c28 body=40 status=ok
// SIG undefined FUN_141815c28(void)

undefined8 FUN_141815c28(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141815c50 FUN_141815c50 body=62 status=ok
// SIG undefined FUN_141815c50(void)

void FUN_141815c50(longlong *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14071ed30();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x000141815c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 141815c8e FUN_141815c8e body=68 status=ok
// SIG undefined FUN_141815c8e(void)

undefined8 * FUN_141815c8e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac8c680;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141815cd2 FUN_141815cd2 body=118 status=ok
// SIG undefined FUN_141815cd2(void)

void FUN_141815cd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c85c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8c680;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141815d48 FUN_141815d48 body=85 status=ok
// SIG undefined FUN_141815d48(void)

undefined8 * FUN_141815d48(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac8c750;
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



// FUNCTION 141815d9e FUN_141815d9e body=85 status=ok
// SIG undefined FUN_141815d9e(void)

undefined8 * FUN_141815d9e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac8c790;
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



// FUNCTION 141815df4 FUN_141815df4 body=691 status=ok
// SIG undefined FUN_141815df4(void)

void FUN_141815df4(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  undefined8 ****ppppuVar14;
  uint uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined1 auStack_b8 [44];
  uint local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 **local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar17 = *(longlong *)(param_1 + 0x20);
  if (lVar17 == 0) {
LAB_14181607d:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  if (0.0 < *(float *)(lVar17 + 0x178)) {
    plVar4 = *(longlong **)(param_1 + 0x30);
    puVar16 = (undefined4 *)(lVar17 + 0x4f8);
    if (*(undefined4 **)(lVar17 + 0x878) != (undefined4 *)0x0) {
      puVar16 = *(undefined4 **)(lVar17 + 0x878);
    }
    if ((longlong)*(int *)(lVar17 + 0x880) != 0) {
      local_8c = *(uint *)(param_1 + 0x38);
      uVar11 = (ulonglong)local_8c;
      lVar17 = (longlong)*(int *)(lVar17 + 0x880) * 0x38;
      while ((*(byte *)(puVar16 + 0xd) & 1) == 0) {
        bVar2 = *(byte *)(puVar16 + 8);
        cVar9 = '\x01';
        if (bVar2 != 4) {
          uVar15 = (uint)bVar2 * 0x120;
          if (*(code **)(&DAT_14c9a8560 + uVar15) != (code *)0x0) {
            cVar8 = (**(code **)(&DAT_14c9a8560 + uVar15))(CONCAT71((int7)(uVar11 >> 8),4));
            if (cVar8 != '\0') goto LAB_141815ef2;
          }
          if ((DAT_14c9a89e8 == (code *)0x0) || (cVar8 = (*DAT_14c9a89e8)(bVar2), cVar8 == '\0')) {
            if ((((&DAT_14c9a8514)[uVar15] & 0x20) == 0) || ((DAT_14c9a8994 & 0x20) != 0)) break;
            if (*(code **)(&DAT_14c9a8588 + uVar15) != (code *)0x0) {
              cVar9 = (**(code **)(&DAT_14c9a8588 + uVar15))(4);
            }
          }
        }
LAB_141815ef2:
        iVar13 = (int)plVar4[1];
        if ((cVar9 == '\0') || ((int)local_8c <= iVar13)) goto LAB_141815f66;
        if (*(char *)(puVar16 + 8) == '\x04') {
          local_78 = *(undefined8 ***)(puVar16 + 4);
          local_88 = *puVar16;
          uStack_84 = puVar16[1];
          uStack_80 = puVar16[2];
          uStack_7c = puVar16[3];
        }
        else {
          ppppuVar14 = local_70;
          FUN_1400b56fe(ppppuVar14,puVar16,4);
          if (local_50 == 0) {
            ppppuVar14 = (undefined8 ****)&DAT_14c9ab228;
          }
          local_78 = ppppuVar14[2];
          local_88 = *(undefined4 *)ppppuVar14;
          uStack_84 = *(undefined4 *)((longlong)ppppuVar14 + 4);
          uStack_80 = *(undefined4 *)(ppppuVar14 + 1);
          uStack_7c = *(undefined4 *)((longlong)ppppuVar14 + 0xc);
          pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          if (pcVar7 != (code *)0x0) {
            ppppuVar14 = local_70;
            if (0x18 < local_58) {
              ppppuVar14 = (undefined8 ****)local_70[0];
            }
            (*pcVar7)(ppppuVar14);
          }
          if (0x18 < local_58) {
            FUN_1400020a8(local_70[0]);
          }
          iVar13 = (int)plVar4[1];
        }
        *(uint *)(plVar4 + 1) = iVar13 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar13 + 1U) {
          FUN_1403e3958(plVar4,iVar13);
        }
        lVar10 = *plVar4;
        lVar12 = (longlong)iVar13;
        uVar11 = lVar12 * 3;
        *(undefined8 ***)(lVar10 + 0x10 + lVar12 * 0x18) = local_78;
        puVar1 = (undefined4 *)(lVar10 + lVar12 * 0x18);
        *puVar1 = local_88;
        puVar1[1] = uStack_84;
        puVar1[2] = uStack_80;
        puVar1[3] = uStack_7c;
        puVar16 = puVar16 + 0xe;
        lVar17 = lVar17 + -0x38;
        if (lVar17 == 0) break;
      }
    }
    iVar13 = (int)plVar4[1];
LAB_141815f66:
    if (iVar13 < 1) goto LAB_14181607d;
    **(undefined1 **)(param_1 + 0x40) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0xc);
    *(undefined1 *)(param_2 + 0x60) = 1;
    iVar13 = *(int *)(param_2 + 0x58);
    lVar17 = (longlong)iVar13;
    *(uint *)(param_2 + 0x58) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar13 + 1U) {
      FUN_14579eadc(param_2,iVar13);
    }
    lVar10 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar10 = param_2;
    }
    *(undefined8 *)(lVar10 + lVar17 * 0x14) = uVar6;
    *(undefined4 *)(lVar10 + 8 + lVar17 * 0x14) = uVar3;
    *(undefined8 *)(lVar10 + 0xc + lVar17 * 0x14) = uVar5;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418160c4 FUN_1418160c4 body=85 status=ok
// SIG undefined FUN_1418160c4(void)

undefined8 * FUN_1418160c4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac8c7b0;
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



// FUNCTION 14181611a FUN_14181611a body=62 status=ok
// SIG undefined FUN_14181611a(void)

void FUN_14181611a(longlong *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14064d6a4();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00014181614d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 141816158 FUN_141816158 body=353 status=ok
// SIG undefined FUN_141816158(void)

void FUN_141816158(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418161dd;
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
LAB_1418161dd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418162ba FUN_1418162ba body=29 status=ok
// SIG undefined FUN_1418162ba(void)

undefined8 FUN_1418162ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418162d8 FUN_1418162d8 body=269 status=ok
// SIG undefined FUN_1418162d8(void)

void FUN_1418162d8(longlong param_1,int param_2)

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



// FUNCTION 1418163e6 FUN_1418163e6 body=162 status=ok
// SIG undefined FUN_1418163e6(void)

void FUN_1418163e6(longlong *param_1,undefined8 param_2)

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
        goto LAB_141816473;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141816473:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141816488 FUN_141816488 body=272 status=ok
// SIG undefined FUN_141816488(void)

int FUN_141816488(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar13 = 0;
    bVar12 = *plVar1 == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar10 = (longlong)iVar3;
      iVar8 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar8 = iVar6;
      }
      plVar9 = plVar1 + lVar10 * 2 + 2;
      iVar4 = iVar3;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar5 = iVar8;
        if (lVar7 <= lVar11) break;
        lVar2 = *plVar9;
        iVar4 = iVar4 + 1;
        plVar9 = plVar9 + 2;
        iVar5 = iVar4;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      iVar8 = iVar5 - iVar3;
      if (bVar12 == false) {
        if (iVar13 != iVar3) {
          memmove(plVar1 + (longlong)iVar13 * 2,plVar1 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar13 = iVar13 + iVar8;
      }
      else {
        FUN_14032314d(plVar1 + lVar10 * 2,iVar8);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar3 = iVar5;
    } while (lVar11 < lVar7);
    *(int *)(param_1 + 1) = iVar13;
    iVar6 = iVar6 - iVar13;
  }
  return iVar6;
}



// FUNCTION 141816598 FUN_141816598 body=448 status=ok
// SIG undefined FUN_141816598(void)

void FUN_141816598(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 14181675a FUN_14181675a body=353 status=ok
// SIG undefined FUN_14181675a(void)

void FUN_14181675a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418167df;
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
LAB_1418167df:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418168bc FUN_1418168bc body=353 status=ok
// SIG undefined FUN_1418168bc(void)

void FUN_1418168bc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141816941;
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
LAB_141816941:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141816a1e FUN_141816a1e body=102 status=ok
// SIG undefined FUN_141816a1e(void)

void FUN_141816a1e(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0xa0,param_2);
  FUN_140aa1618(param_1 + 0xc0,param_2);
  FUN_140d4e44a(param_1 + 0x158,param_2);
  return;
}



// FUNCTION 141816a84 FUN_141816a84 body=186 status=ok
// SIG undefined FUN_141816a84(void)

void FUN_141816a84(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_140337e44(lVar1 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar1 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar1 + 0x51) != cVar2;
  uVar4 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  lVar3 = *(longlong *)(param_1 + 0x40) + 0x240;
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar4 = FUN_140309e34(lVar1 + 0x80,lVar3,lVar1 + 0x98);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  uVar4 = FUN_140309e34(lVar1 + 0xa0,lVar3,lVar1 + 0xb8);
  *(undefined4 *)(param_1 + 100) = uVar4;
  uVar4 = FUN_140309e34(lVar1 + 0xc0,lVar3,lVar1 + 0xd8);
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  return;
}



// FUNCTION 141816b3e FUN_141816b3e body=57 status=ok
// SIG undefined FUN_141816b3e(void)

void FUN_141816b3e(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x88,param_2);
  return;
}



// FUNCTION 141816b78 FUN_141816b78 body=72 status=ok
// SIG undefined FUN_141816b78(void)

void FUN_141816b78(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x88,param_2);
  FUN_140aa1618(param_1 + 0xa8,param_2);
  return;
}



// FUNCTION 141816bc0 FUN_141816bc0 body=360 status=ok
// SIG undefined FUN_141816bc0(void)

ulonglong FUN_141816bc0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (((((lVar4 != 0) && (*(int *)(lVar4 + 0x4c) != 0)) &&
       (uVar1 = *(uint *)(lVar4 + 0x48), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0)))) &&
     (((int)plVar3[2] == *(int *)(lVar4 + 0x4c) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar4 = *plVar3, lVar4 != 0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_141816c5e;
  }
  lVar4 = 0;
LAB_141816c5e:
  uVar2 = FUN_1408fa38b(lVar4);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141816d48 FUN_141816d48 body=521 status=ok
// SIG undefined FUN_141816d48(void)

/* WARNING: Removing unreachable block (ram,0x000141816f08) */
/* WARNING: Removing unreachable block (ram,0x000141816f12) */

void FUN_141816d48(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *plStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if ((*(char *)(lVar3 + 0x171) == '\x01') && (*(int *)(param_1 + 0x7c) == 2)) {
    local_30 = 0xffffffffffffffff;
    local_24 = 0xffffffff;
    local_38 = *(undefined8 *)(param_1 + 0x80);
    local_50 = *(undefined4 *)(param_1 + 0x98);
    local_58 = *(undefined8 *)(param_1 + 0x90);
    local_48 = *(undefined8 *)(param_1 + 0xa0);
    plStack_40 = *(longlong **)(param_1 + 0xa8);
    if (plStack_40 == (longlong *)0x0) {
      plStack_40 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plStack_40 + 0xc) = *(int *)((longlong)plStack_40 + 0xc) + 1;
      UNLOCK();
    }
    local_68 = *(undefined8 *)(param_1 + 0x70);
    local_78 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    local_60 = *(undefined4 *)(lVar3 + 0x174);
    local_28 = 0;
    local_d0 = 0xffffffffffffffff;
    local_c8 = 0;
    local_c0 = DAT_14cb242e8;
    uStack_b8 = DAT_14cb242f0;
    local_b0 = DAT_14cb242f8;
    local_a8 = DAT_14cb242e8;
    uStack_a0 = DAT_14cb242f0;
    local_98 = DAT_14cb242f8;
    local_90 = 0;
    plStack_88 = (longlong *)0x0;
    local_80 = 0xffffffff;
    iVar5 = FUN_14022b7ff();
    plVar4 = plStack_88;
    if (iVar5 == 0) {
      *(undefined8 *)(param_1 + 0x70) = local_b0;
    }
    if (plStack_88 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_88 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_88)(plStack_88);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_40 + 0x10))();
      }
    }
  }
  *(double *)(param_1 + 0x70) = (double)*(float *)(param_1 + 0x78) + *(double *)(param_1 + 0x70);
  if ((local_18 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141816f52 FUN_141816f52 body=87 status=ok
// SIG undefined FUN_141816f52(void)

void FUN_141816f52(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x88,param_2);
  FUN_140aa1618(param_1 + 200,param_2);
  FUN_140aa1618(param_1 + 0xe8,param_2);
  return;
}



// FUNCTION 141816faa FUN_141816faa body=75 status=ok
// SIG undefined FUN_141816faa(void)

void FUN_141816faa(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_14024bdb0();
  fVar1 = (float)FUN_1411259a0();
  fVar2 = *(float *)(param_1 + 0xe0);
  if (fVar1 <= *(float *)(param_1 + 0xe0)) {
    fVar2 = fVar1;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0xe0) = fVar2;
  fVar2 = *(float *)(param_1 + 0x100);
  if (fVar1 <= *(float *)(param_1 + 0x100)) {
    fVar2 = fVar1;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x100) = fVar2;
  return;
}



// FUNCTION 141816ff6 FUN_141816ff6 body=360 status=ok
// SIG undefined FUN_141816ff6(void)

ulonglong FUN_141816ff6(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (((((lVar4 != 0) && (*(int *)(lVar4 + 0x4c) != 0)) &&
       (uVar1 = *(uint *)(lVar4 + 0x48), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0)))) &&
     (((int)plVar3[2] == *(int *)(lVar4 + 0x4c) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar4 = *plVar3, lVar4 != 0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_141817094;
  }
  lVar4 = 0;
LAB_141817094:
  uVar2 = FUN_1408fa38b(lVar4);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181717e FUN_14181717e body=129 status=ok
// SIG undefined FUN_14181717e(void)

void FUN_14181717e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_140337e44(lVar1 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar1 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar1 + 0x51) != cVar2;
  uVar3 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar3 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x80,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x98);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  return;
}



// FUNCTION 141817200 FUN_141817200 body=129 status=ok
// SIG undefined FUN_141817200(void)

void FUN_141817200(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_140337e44(lVar1 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar1 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar1 + 0x51) != cVar2;
  uVar3 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar3 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x90,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0xa8);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  return;
}



// FUNCTION 141817282 FUN_141817282 body=188 status=ok
// SIG undefined FUN_141817282(void)

void FUN_141817282(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_140337e44(lVar1 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar1 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar1 + 0x51) != cVar2;
  uVar4 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  lVar3 = *(longlong *)(param_1 + 0x40) + 0x240;
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar4 = FUN_140309e34(lVar1 + 0x80,lVar3,lVar1 + 0x98);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  uVar4 = FUN_140309e34(lVar1 + 0xa0,lVar3,lVar1 + 0xb8);
  *(undefined4 *)(param_1 + 100) = uVar4;
  cVar2 = FUN_140337e44(lVar1 + 0xc0,lVar3,lVar1 + 0xd8);
  *(bool *)(param_1 + 0x68) = *(char *)(lVar1 + 0xd9) != cVar2;
  return;
}



// FUNCTION 14181733e FUN_14181733e body=460 status=ok
// SIG undefined FUN_14181733e(void)

void FUN_14181733e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined4 uVar7;
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
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar3 = *(longlong *)(param_1 + 0x48);
  cVar5 = FUN_140337e44(lVar3 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar3 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar3 + 0x51) != cVar5;
  uVar7 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if (((((iVar1 != 0) && (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), -1 < (int)uVar2))
       && ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))) &&
     ((lVar3 = *(longlong *)(param_1 + 0x48), (*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
      (lVar4 = *plVar6, lVar4 != 0)))) {
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
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      uVar7 = FUN_140309e34(lVar3 + 0x88,*(longlong *)(param_1 + 0x40) + 0x240,lVar3 + 0xa0);
      *(undefined4 *)(param_1 + 0x60) = uVar7;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181750c FUN_14181750c body=492 status=ok
// SIG undefined FUN_14181750c(void)

undefined8 FUN_14181750c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cb22108 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f28909;
      local_50 = FUN_1464376d6;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
    }
    lVar1 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14cb22108);
    if (lVar1 != 0) {
      if (DAT_14cb22108 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f28909;
        local_50 = FUN_1464376d6;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb22108);
      if ((lVar1 != lVar2) && (lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181770c FUN_14181770c body=222 status=ok
// SIG undefined FUN_14181770c(void)

uint * FUN_14181770c(uint *param_1,longlong *param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  param_1[4] = param_3;
  *(undefined1 *)(param_1 + 5) = param_4;
  return param_1;
}



// FUNCTION 1418177ea FUN_1418177ea body=1085 status=ok
// SIG undefined FUN_1418177ea(void)

void FUN_1418177ea(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  code *local_48;
  code *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar5 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_140337e44(lVar5 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar5 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar5 + 0x51) != cVar2;
  uVar9 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar9;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if (((((iVar3 == 0) || (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), (int)uVar1 < 0))
       || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != iVar3)))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
      (plVar6 = (longlong *)*plVar6, plVar6 == (longlong *)0x0)))) {
LAB_1418179ee:
    plStack_30 = (longlong *)0x0;
    plVar4 = (longlong *)0x0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = (code *)&LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
        DAT_14cac9ca8 + 0x30)) goto LAB_1418179ee;
    if (DAT_14cb22240 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = (code *)&LAB_1464376fa;
      local_58 = &LAB_147f28935;
      local_60 = FUN_146437c39;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,DAT_14cb22240);
    if (plVar6 == (longlong *)0x0) goto LAB_1418179ee;
    if (DAT_14cb22240 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = (code *)&LAB_1464376fa;
      local_58 = &LAB_147f28935;
      local_60 = FUN_146437c39;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar4 = (longlong *)FUN_144718840(plVar6,DAT_14cb22240);
    if (plVar6 == plVar4) goto LAB_1418179ee;
    local_38 = (code *)0x0;
    plStack_30 = (longlong *)0x0;
    if (plVar4 == (longlong *)0x0) goto LAB_1418179ee;
    lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0xc);
      local_38 = (code *)CONCAT44(local_38._4_4_,uVar1);
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
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar3 = *(int *)(lVar5 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar5 + 0x10) = iVar7;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar7;
        }
      }
      goto LAB_141817994;
    }
  }
  local_38 = (code *)0x0;
  iVar3 = 0;
LAB_141817994:
  local_38 = (code *)CONCAT44(iVar3,(undefined4)local_38);
  cVar2 = FUN_14493c216(&local_38,0);
  if (cVar2 == '\0') {
    plStack_30 = plVar4;
  }
  *(code **)(param_1 + 0x60) = local_38;
  *(longlong **)(param_1 + 0x68) = plStack_30;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141817c28 FUN_141817c28 body=515 status=ok
// SIG undefined FUN_141817c28(void)

longlong FUN_141817c28(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cb223d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f29feb;
      local_50 = FUN_1464384fe;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    lVar1 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14cb223d8);
    if (lVar1 != 0) {
      if (DAT_14cb223d8 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f29feb;
        local_50 = FUN_1464384fe;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb223d8);
      if ((lVar1 != lVar2) && (lVar2 != 0)) goto LAB_141817c9d;
    }
  }
  lVar1 = FUN_140fb058a(param_1);
  if (lVar1 != 0) {
    FUN_1449d6ade();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  lVar2 = 0;
LAB_141817c9d:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141817e40 FUN_141817e40 body=40 status=ok
// SIG undefined FUN_141817e40(void)

undefined8 FUN_141817e40(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141817e68 FUN_141817e68 body=337 status=ok
// SIG undefined FUN_141817e68(void)

void FUN_141817e68(longlong param_1,uint param_2)

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
    uVar4 = (ulonglong)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x1c7) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x7ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141817ed5;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x7ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_141817ed5:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x48)) {
      uVar3 = uVar4 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x48,8);
  }
  return;
}



// FUNCTION 141817fba FUN_141817fba body=186 status=ok
// SIG undefined FUN_141817fba(void)

int FUN_141817fba(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x2b0);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14181804e;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x2a8 + (longlong)iVar4 * 0x2b0);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14181804e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141818076 FUN_141818076 body=238 status=ok
// SIG undefined FUN_141818076(void)

void FUN_141818076(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141818164 FUN_141818164 body=695 status=ok
// SIG undefined FUN_141818164(void)

void FUN_141818164(longlong *param_1)

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
  uint uVar12;
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
    iVar9 = local_48;
    if (local_50._4_4_ < (int)local_58[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x70;
        uVar12 = *(uint *)(lVar11 + 8 + lVar10) ^ *(uint *)(lVar11 + 4 + lVar10);
        uVar15 = uVar12 >> 0xd ^ *(int *)(lVar11 + lVar10) - uVar12;
        uVar3 = uVar15 << 8 ^ (-0x61c88647 - uVar12) - uVar15;
        uVar12 = uVar3 >> 0xd ^ (uVar12 - uVar15) - uVar3;
        uVar15 = uVar12 >> 0xc ^ (uVar15 - uVar3) - uVar12;
        uVar16 = uVar15 << 0x10 ^ (uVar3 - uVar12) - uVar15;
        uVar3 = uVar16 >> 5 ^ (uVar12 - uVar15) - uVar16;
        uVar12 = uVar3 >> 3 ^ (uVar15 - uVar16) - uVar3;
        uVar15 = uVar12 << 10 ^ (uVar16 - uVar3) - uVar12;
        uVar14 = (longlong)(int)(uVar15 >> 0xf ^ uVar3 - (uVar12 + uVar15)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar11 + 0x6c + lVar10) = iVar13;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x68 + lVar10) =
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
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
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
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1418183d4;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar14 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar13);
    }
  }
LAB_1418183d4:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181841c FUN_14181841c body=68 status=ok
// SIG undefined FUN_14181841c(void)

undefined8 * FUN_14181841c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac8d7a0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141818460 FUN_141818460 body=118 status=ok
// SIG undefined FUN_141818460(void)

void FUN_141818460(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8d7a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1418184d6 FUN_1418184d6 body=29 status=ok
// SIG undefined FUN_1418184d6(void)

undefined8 FUN_1418184d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418184f4 FUN_1418184f4 body=353 status=ok
// SIG undefined FUN_1418184f4(void)

void FUN_1418184f4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141818579;
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
LAB_141818579:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 141818656 FUN_141818656 body=429 status=ok
// SIG undefined FUN_141818656(void)

void FUN_141818656(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
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
  (**(code **)(*param_1 + 0x58))(param_1,local_1c != 0);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141818810 FUN_141818810 body=127 status=ok
// SIG undefined FUN_141818810(void)

void FUN_141818810(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1418188a4 FUN_1418188a4 body=40 status=ok
// SIG undefined FUN_1418188a4(void)

undefined8 FUN_1418188a4(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418188cc FUN_1418188cc body=40 status=ok
// SIG undefined FUN_1418188cc(void)

undefined8 FUN_1418188cc(undefined8 param_1,int param_2)

{
  FUN_140aee5f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418188f4 FUN_1418188f4 body=49 status=ok
// SIG undefined FUN_1418188f4(void)

longlong FUN_1418188f4(void)

{
  if (DAT_14cb24cb8 == 0) {
    FUN_14086a14e(&DAT_14cb24cb8,&PTR_FUN_14ac9bf68);
  }
  return DAT_14cb24cb8;
}



// FUNCTION 141818925 FUN_141818925 body=49 status=ok
// SIG undefined FUN_141818925(void)

longlong FUN_141818925(void)

{
  if (DAT_14cb24c48 == 0) {
    FUN_14073dd9a(&DAT_14cb24c48,&PTR_LAB_14ac9baa0);
  }
  return DAT_14cb24c48;
}



// FUNCTION 141818956 FUN_141818956 body=296 status=ok
// SIG undefined FUN_141818956(void)

void FUN_141818956(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xffffffffffffffff;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
  puVar5 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_144904448(puVar5);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141818a80 FUN_141818a80 body=294 status=ok
// SIG undefined FUN_141818a80(void)

undefined8 FUN_141818a80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar8 = param_2 + 0x20;
    lVar9 = 0;
    do {
      *(undefined4 *)(param_2 + 8 + lVar9) = *(undefined4 *)(param_3 + 8 + lVar9);
      *(undefined8 *)(param_2 + lVar9) = *(undefined8 *)(param_3 + lVar9);
      lVar3 = *(longlong *)(param_3 + 0x10 + lVar9);
      if (*(longlong *)(param_2 + 0x10 + lVar9) != lVar3) {
        *(undefined8 *)(lVar8 + lVar9) = 0;
      }
      lVar1 = param_3 + lVar9;
      puVar2 = (undefined8 *)(lVar8 + lVar9);
      puVar2[-2] = lVar3;
      if (puVar2[-1] != *(longlong *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar8 + lVar9) = 0;
      }
      uVar6 = FUN_14477b664();
      uVar6 = FUN_14477b664(uVar6);
      puVar2[-1] = uVar6;
      *puVar2 = *(undefined8 *)(lVar1 + 0x20);
      if ((puVar2[1] != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(puVar2[1] + 0x50));
      }
      bVar5 = DAT_14cb26569;
      lVar3 = *(longlong *)(lVar1 + 0x28);
      puVar2[1] = lVar3;
      if ((lVar3 != 0) && ((bVar5 & 1) != 0)) {
        piVar4 = *(int **)(lVar3 + 0x50);
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar7 = 5;
        }
        else {
          if ((char)piVar4[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_141818b2a;
          }
          iVar7 = 2;
        }
        LOCK();
        piVar4[2] = iVar7;
        UNLOCK();
      }
LAB_141818b2a:
      lVar9 = lVar9 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141818ba6 FUN_141818ba6 body=84 status=ok
// SIG undefined FUN_141818ba6(void)

longlong * FUN_141818ba6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141818bfa FUN_141818bfa body=87 status=ok
// SIG undefined FUN_141818bfa(void)

void FUN_141818bfa(longlong *param_1)

{
  FUN_1405b4658(param_1 + 0xc);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141818c51 FUN_141818c51 body=49 status=ok
// SIG undefined FUN_141818c51(void)

longlong FUN_141818c51(void)

{
  if (DAT_14cb252f0 == 0) {
    FUN_14086a14e(&DAT_14cb252f0,&PTR_FUN_14aca61b8);
  }
  return DAT_14cb252f0;
}



// FUNCTION 141818c82 FUN_141818c82 body=49 status=ok
// SIG undefined FUN_141818c82(void)

longlong FUN_141818c82(void)

{
  if (DAT_14cb25458 == 0) {
    FUN_14086a14e(&DAT_14cb25458,&PTR_FUN_14aca9c18);
  }
  return DAT_14cb25458;
}



// FUNCTION 141818cb3 FUN_141818cb3 body=64 status=ok
// SIG undefined FUN_141818cb3(void)

void FUN_141818cb3(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_1406078d6(puVar1,uVar2);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *puVar1 = &PTR_FUN_14acab130;
  puVar1[0x22] = &PTR_FUN_14acab480;
  return;
}



// FUNCTION 141818d0c FUN_141818d0c body=166 status=ok
// SIG undefined FUN_141818d0c(void)

void FUN_141818d0c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb0);
  if (plVar1 == (longlong *)0x0) goto LAB_141818d52;
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if ((int)plVar1[0x26] < 1) {
    FUN_1400847bc(plVar1 + 0x17,0);
    if ((int)plVar1[0x21] == 0) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_141818d47;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
LAB_141818d47:
  *(undefined8 *)(param_2 + 0xb0) = 0;
LAB_141818d52:
  if (*(longlong *)(param_2 + 0x98) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141818db2 FUN_141818db2 body=38 status=ok
// SIG undefined FUN_141818db2(void)

undefined8 FUN_141818db2(undefined8 param_1,int param_2)

{
  FUN_14060fc84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141818dd8 FUN_141818dd8 body=178 status=ok
// SIG undefined FUN_141818dd8(void)

void FUN_141818dd8(longlong *param_1)

{
  longlong *plVar1;
  
  param_1[2] = 0;
  param_1[3] = -1;
  if ((param_1[1] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[1] + 0x50));
  }
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if (((int)plVar1[0x26] < 1) && (FUN_1400847bc(plVar1 + 0x17,0), (int)plVar1[0x21] == 0)) {
    FUN_140087e46(plVar1);
    if (*plVar1 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_141818e3a;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
    }
  }
LAB_141818e3a:
  *param_1 = 0;
  return;
}



// FUNCTION 141818e8a FUN_141818e8a body=239 status=ok
// SIG undefined FUN_141818e8a(void)

undefined8 * FUN_141818e8a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  puVar4 = param_2 + 2;
  puVar5 = param_1 + 2;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  uVar2 = param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_140d27400(param_1 + 0x13,iVar1,0);
    FUN_144796a68(param_1[0x13],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  lVar3 = param_2[0x16];
  param_1[0x16] = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x108) = *(int *)(lVar3 + 0x108) + 1;
  }
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  return param_1;
}



// FUNCTION 141818f7a FUN_141818f7a body=71 status=ok
// SIG undefined FUN_141818f7a(void)

undefined8 * FUN_141818f7a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141818fc2 FUN_141818fc2 body=29 status=ok
// SIG undefined FUN_141818fc2(void)

undefined8 FUN_141818fc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141818fdf FUN_141818fdf body=49 status=ok
// SIG undefined FUN_141818fdf(void)

longlong FUN_141818fdf(void)

{
  if (DAT_14cb25690 == 0) {
    FUN_14086a14e(&DAT_14cb25690,&PTR_FUN_14acb24a0);
  }
  return DAT_14cb25690;
}



// FUNCTION 141819010 FUN_141819010 body=49 status=ok
// SIG undefined FUN_141819010(void)

longlong FUN_141819010(void)

{
  if (DAT_14cb256c0 == 0) {
    FUN_14086a14e(&DAT_14cb256c0,&PTR_FUN_14acb2668);
  }
  return DAT_14cb256c0;
}



// FUNCTION 141819041 FUN_141819041 body=49 status=ok
// SIG undefined FUN_141819041(void)

longlong FUN_141819041(void)

{
  if (DAT_14cb25780 == 0) {
    FUN_14086a14e(&DAT_14cb25780,&PTR_FUN_14acb33b0);
  }
  return DAT_14cb25780;
}



// FUNCTION 141819072 FUN_141819072 body=1658 status=ok
// SIG undefined FUN_141819072(void)

void FUN_141819072(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  undefined8 local_250;
  longlong local_248;
  longlong *local_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228 [12];
  longlong local_1c8;
  longlong *local_1c0;
  longlong local_1b8 [2];
  undefined8 local_1a8;
  undefined1 local_1a0 [8];
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  undefined1 local_180 [8];
  longlong local_178;
  longlong *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong *plStack_140;
  undefined8 local_138 [12];
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_cc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (((param_2 == 0) || (cVar6 = FUN_1404fa388(param_1 + 0xb0), cVar6 != '\0')) ||
     ((*(char *)(param_1 + 0xac) == '\0' && (cVar6 = FUN_140b329fc(param_2), cVar6 == '\0'))))
  goto LAB_141819266;
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    local_148 = 0;
    plStack_140 = (longlong *)0x0;
  }
  else {
    FUN_14026e798(&local_148);
    if (local_148 != 0) {
      local_158 = local_148;
      local_150 = plStack_140;
      if (plStack_140 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
        UNLOCK();
      }
      lVar7 = FUN_140206ee8(param_1 + 0x38,&local_158);
      lVar9 = local_148;
      if (lVar7 != 0) {
        iVar3 = *(int *)(param_1 + 0x30);
        if (iVar3 == 0) {
          local_1b8[0] = lVar7;
          FUN_140942716(local_1b8);
          lVar9 = local_1b8[0];
          FUN_1403c747e(local_148,local_180,*(undefined8 *)(param_1 + 0x9c));
          local_190 = local_148;
          local_188 = plStack_140;
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
            UNLOCK();
          }
          FUN_140c72376(&local_178,&local_190,local_180,lVar9);
          *(longlong *)(param_1 + 0xb0) = local_178;
          local_178 = 0;
          plVar4 = *(longlong **)(param_1 + 0xb8);
          *(longlong **)(param_1 + 0xb8) = local_170;
          local_170 = (longlong *)0x0;
          if (plVar4 == (longlong *)0x0) {
            *(undefined4 *)(param_1 + 0xc0) = local_168;
            *(undefined4 *)(param_1 + 0xc4) = uStack_164;
            *(undefined4 *)(param_1 + 200) = uStack_160;
            *(undefined4 *)(param_1 + 0xcc) = uStack_15c;
            lVar9 = local_1b8[0];
          }
          else {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
            *(undefined4 *)(param_1 + 0xc0) = local_168;
            *(undefined4 *)(param_1 + 0xc4) = uStack_164;
            *(undefined4 *)(param_1 + 200) = uStack_160;
            *(undefined4 *)(param_1 + 0xcc) = uStack_15c;
            lVar9 = local_1b8[0];
            if (local_170 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_170 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_170 + 0x10))();
                lVar9 = local_1b8[0];
              }
            }
          }
        }
        else {
          if (iVar3 != 1) {
            if (iVar3 == 2) {
              FUN_1400b22c2(&local_178,"AnimNotifyState");
              local_258 = (undefined8 *)((ulonglong)local_258 & 0xffffffffffffff00);
              FUN_14084a140(lVar9,local_1b8,&local_178,0);
              if (local_178 != 0) {
                FUN_1400020a8();
              }
              lVar8 = local_148;
              lVar9 = local_1b8[0];
              if (local_1b8[0] != 0) {
                if (*(longlong *)(param_5 + 0x18) == 0) {
                  local_230 = *(undefined8 *)(param_1 + 0xa4);
                }
                else {
                  FUN_1407f8cf8(*(longlong *)(param_5 + 0x18),&local_230,
                                (undefined8 *)(param_1 + 0xa4),1);
                }
                uVar5 = local_230;
                if ((*(longlong *)(lVar8 + 0x20) == 0) ||
                   (cVar6 = FUN_144729dda(lVar8 + 0x18), cVar6 == '\0')) {
                  puVar10 = &DAT_14c846480;
                  puVar11 = local_228;
                  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                    *puVar11 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar11 = puVar11 + 1;
                  }
                }
                else {
                  (**(code **)(**(longlong **)(lVar8 + 0x20) + 0x28))
                            (*(longlong **)(lVar8 + 0x20),local_228,uVar5,0);
                }
                puVar10 = local_228;
                puVar11 = local_138;
                for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *puVar11 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar11 = puVar11 + 1;
                }
                local_d8 = 0x3f800000;
                local_d0 = 0;
                local_cc = 0;
                FUN_14150591e(lVar9);
                local_198 = lVar7;
                FUN_140942716(&local_198);
                local_238 = lVar9;
                *(int *)(lVar9 + 0x108) = *(int *)(lVar9 + 0x108) + 1;
                local_248 = local_148;
                local_240 = plStack_140;
                if (plStack_140 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
                  UNLOCK();
                }
                FUN_140c72376(&local_178,&local_248,&local_238,local_198);
                *(longlong *)(param_1 + 0xb0) = local_178;
                local_178 = 0;
                plVar4 = *(longlong **)(param_1 + 0xb8);
                *(longlong **)(param_1 + 0xb8) = local_170;
                local_170 = (longlong *)0x0;
                if (plVar4 == (longlong *)0x0) {
                  *(undefined4 *)(param_1 + 0xc0) = local_168;
                  *(undefined4 *)(param_1 + 0xc4) = uStack_164;
                  *(undefined4 *)(param_1 + 200) = uStack_160;
                  *(undefined4 *)(param_1 + 0xcc) = uStack_15c;
                }
                else {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar4 + 0x10))();
                  }
                  *(undefined4 *)(param_1 + 0xc0) = local_168;
                  *(undefined4 *)(param_1 + 0xc4) = uStack_164;
                  *(undefined4 *)(param_1 + 200) = uStack_160;
                  *(undefined4 *)(param_1 + 0xcc) = uStack_15c;
                  if (local_170 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)local_170 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_170 + 0x10))();
                    }
                  }
                }
                if ((local_198 != 0) && ((DAT_14cb26569 & 1) != 0)) {
                  FUN_1400848c0(*(undefined8 *)(local_198 + 0x50));
                }
                if (local_1b8[0] != 0) {
                  *(int *)(local_1b8[0] + 0x108) = *(int *)(local_1b8[0] + 0x108) + -1;
                  FUN_140d274d8();
                }
              }
            }
            goto LAB_14181924f;
          }
          local_198 = lVar7;
          FUN_140942716(&local_198);
          lVar7 = local_148;
          lVar9 = local_198;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          uStack_9c = 0x3ff00000;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_74 = 0x3ff00000;
          uStack_70 = 0;
          uStack_6c = 0x3ff00000;
          local_68 = 0x3ff0000000000000;
          uStack_60 = 0;
          local_58 = 0x3f800000;
          local_50 = 0;
          local_4c = 0;
          if (*(longlong *)(param_5 + 0x18) == 0) {
            local_1a8 = *(undefined8 *)(param_1 + 0xa4);
          }
          else {
            FUN_1407f8cf8(*(longlong *)(param_5 + 0x18),&local_1a8,(undefined8 *)(param_1 + 0xa4),1)
            ;
          }
          FUN_1400b22c2(local_1b8,"AnimNotifyState");
          local_258 = &local_b8;
          local_250 = 0;
          FUN_14071b0f2(lVar7,local_1a0,local_1b8,local_1a8);
          local_1c8 = local_148;
          local_1c0 = plStack_140;
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
            UNLOCK();
          }
          FUN_140c72376(&local_178,&local_1c8,local_1a0,lVar9);
          *(longlong *)(param_1 + 0xb0) = local_178;
          local_178 = 0;
          plVar4 = *(longlong **)(param_1 + 0xb8);
          *(longlong **)(param_1 + 0xb8) = local_170;
          local_170 = (longlong *)0x0;
          if (plVar4 == (longlong *)0x0) {
            *(undefined4 *)(param_1 + 0xc0) = local_168;
            *(undefined4 *)(param_1 + 0xc4) = uStack_164;
            *(undefined4 *)(param_1 + 200) = uStack_160;
            *(undefined4 *)(param_1 + 0xcc) = uStack_15c;
          }
          else {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
            *(undefined4 *)(param_1 + 0xc0) = local_168;
            *(undefined4 *)(param_1 + 0xc4) = uStack_164;
            *(undefined4 *)(param_1 + 200) = uStack_160;
            *(undefined4 *)(param_1 + 0xcc) = uStack_15c;
            if (local_170 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_170 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_170 + 0x10))();
              }
            }
          }
          lVar9 = local_198;
          if (local_1b8[0] != 0) {
            FUN_1400020a8();
            lVar9 = local_198;
          }
        }
        if ((lVar9 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(lVar9 + 0x50));
        }
      }
    }
  }
LAB_14181924f:
  plVar4 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_140 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_141819266:
  if ((local_38 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418196ee FUN_1418196ee body=307 status=ok
// SIG undefined FUN_1418196ee(void)

void FUN_1418196ee(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0xa8) == 0)) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    FUN_14026e798(&local_48);
    if (local_48 != 0) {
      local_58 = local_48;
      local_50 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      lVar5 = FUN_140206ee8(param_1 + 0x68,&local_58);
      if (lVar5 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x98);
        local_60 = lVar5;
        FUN_140942716(&local_60);
        FUN_140bd765a(param_1 + 0xb0,local_60,uVar3);
        if ((local_60 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_60 + 0x50));
        }
        goto LAB_1418197b3;
      }
    }
  }
  FUN_140bd765a(param_1 + 0xb0,0,*(undefined4 *)(param_1 + 0x98));
LAB_1418197b3:
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141819822 FUN_141819822 body=107 status=ok
// SIG undefined FUN_141819822(void)

void FUN_141819822(longlong param_1)

{
  byte bVar1;
  
  if ((*(longlong *)(param_1 + 0x60) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x50));
  }
  bVar1 = DAT_14cb26569;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((*(longlong *)(param_1 + 0x90) != 0) && ((bVar1 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x50));
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14181988e FUN_14181988e body=58 status=ok
// SIG undefined FUN_14181988e(void)

void FUN_14181988e(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x68) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x50));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1418198c8 FUN_1418198c8 body=462 status=ok
// SIG undefined FUN_1418198c8(void)

longlong * FUN_1418198c8(ulonglong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  
  if (*param_1 == 0xffffffffffffffff) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    puVar6[3] = 0;
    *(undefined2 *)(puVar6 + 4) = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x22) = 2;
    puVar6[5] = 0;
    puVar6[6] = 0;
    *puVar6 = param_1;
    iVar5 = 0;
    if (param_3 != 0) {
      uVar3 = *(uint *)(param_3 + 0xc);
      *(uint *)((longlong)puVar6 + 0xc) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar5 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar5 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar5 = iVar9;
        }
      }
    }
    *(int *)(puVar6 + 2) = iVar5;
    *(undefined1 *)((longlong)puVar6 + 0x21) = 1;
    if (puVar6 != (undefined8 *)0x0) {
      uVar4 = param_1[0x25];
      puVar6[5] = uVar4;
      puVar8 = (ulonglong *)(uVar4 + 0x30);
      if (uVar4 == 0) {
        puVar8 = param_1 + 0x24;
      }
      *puVar8 = (ulonglong)puVar6;
      param_1[0x25] = (ulonglong)puVar6;
      *(int *)(param_1 + 0x26) = (int)param_1[0x26] + 1;
    }
    uVar4 = *param_1;
    plVar7 = (longlong *)FUN_14001cc68(0x38,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14acb5260;
    plVar7[2] = uVar4;
    plVar7[3] = (longlong)param_1;
    plVar7[4] = -(ulonglong)(param_1 == (ulonglong *)0x0) | uVar4;
    plVar7[5] = (longlong)puVar6;
    *(undefined4 *)(plVar7 + 6) = 0;
    *(undefined1 *)((longlong)plVar7 + 0x34) = param_4;
    *param_2 = (longlong)(plVar7 + 2);
    param_2[1] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  return param_2;
}



// FUNCTION 141819a96 FUN_141819a96 body=109 status=ok
// SIG undefined FUN_141819a96(void)

undefined8 *
FUN_141819a96(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x70))(DAT_14c8407a8,param_2,param_3,param_4,param_5);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = &PTR_FUN_14acb7c88;
  return param_1;
}



// FUNCTION 141819b04 FUN_141819b04 body=124 status=ok
// SIG undefined FUN_141819b04(void)

void FUN_141819b04(__uint64 *param_1,__uint64 param_2,uint param_3)

{
  __uint64 _Var1;
  __uint64 *p_Var2;
  
  if (param_2 != 0) {
    p_Var2 = param_1 + 0x24;
    do {
      _Var1 = *p_Var2;
      p_Var2 = (__uint64 *)(_Var1 + 0x30);
    } while (_Var1 != 0 && _Var1 != param_2);
    if (_Var1 != 0) {
      if (DAT_14cb26560 != 0) {
        FUN_14033a908(DAT_14cb26560,_Var1);
      }
      if (DAT_14cb25ab0 == '\x01') {
        AK::SoundEngine::StopMIDIOnEvent(0,*param_1,param_3);
      }
      FUN_140396cf6(param_1,_Var1);
      return;
    }
  }
  return;
}



// FUNCTION 141819b80 FUN_141819b80 body=64 status=ok
// SIG undefined FUN_141819b80(void)

void FUN_141819b80(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144904448(param_1 + 0x10);
  if (cVar1 == '\0') {
    return;
  }
  FUN_14072d42a(param_1 + 0x10,param_2);
  return;
}



// FUNCTION 141819bfc FUN_141819bfc body=117 status=ok
// SIG undefined FUN_141819bfc(void)

undefined8 * FUN_141819bfc(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 141819c72 FUN_141819c72 body=117 status=ok
// SIG undefined FUN_141819c72(void)

undefined8 * FUN_141819c72(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 141819ce7 FUN_141819ce7 body=41 status=ok
// SIG undefined FUN_141819ce7(void)

void FUN_141819ce7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140088e14(param_1);
    param_1 = param_1 + 0x2c0;
  }
  return;
}



// FUNCTION 141819d10 FUN_141819d10 body=93 status=ok
// SIG undefined FUN_141819d10(void)

void FUN_141819d10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb7d20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb7cb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 141819d6e FUN_141819d6e body=29 status=ok
// SIG undefined FUN_141819d6e(void)

undefined8 FUN_141819d6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141819d8c FUN_141819d8c body=283 status=ok
// SIG undefined FUN_141819d8c(void)

void FUN_141819d8c(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14cb25a08;
  if (param_1 <= (int)DAT_14cb25a08) {
    if (DAT_14cb25a0c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb25a08) {
        uVar2 = DAT_14cb25a08;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb25a08 * 3) >> 3) + (longlong)(int)DAT_14cb25a08 +
              0x10;
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
    DAT_14cb25a0c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb25a00,param_1,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141819ea8 FUN_141819ea8 body=172 status=ok
// SIG undefined FUN_141819ea8(void)

void FUN_141819ea8(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_14cb25a08;
  if (((0x3fff < (ulonglong)((longlong)(int)(DAT_14cb25a0c - DAT_14cb25a08) * 0x30)) ||
      ((int)(DAT_14cb25a08 * 3) < DAT_14cb25a0c * 2)) &&
     (DAT_14cb25a08 == 0 || 0x40 < (int)(DAT_14cb25a0c - DAT_14cb25a08))) {
    if (0 < (int)DAT_14cb25a08) {
      uVar1 = FUN_144a3809e(uVar1 * 0x30,8);
      uVar1 = uVar1 / 0x30;
    }
    if ((int)uVar1 != DAT_14cb25a0c) {
      DAT_14cb25a0c = (int)uVar1;
      FUN_1446f8d3c(&DAT_14cb25a00,DAT_14cb25a08,uVar1,0x30,8);
    }
  }
  return;
}



// FUNCTION 141819f54 FUN_141819f54 body=297 status=ok
// SIG undefined FUN_141819f54(void)

void FUN_141819f54(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar4 = param_2;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = (longlong)(int)param_2 + 0xf;
      if (param_2 < 0x7ff1) {
        uVar4 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar3) {
            uVar5 = (ulonglong)bVar3;
          }
          uVar7 = 0x32 - (ulonglong)bVar3;
          do {
            uVar4 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_141819fb1;
            lVar2 = uVar5 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar2 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((int)(uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,1);
    }
  }
LAB_141819fb1:
  uVar6 = 0x7fffffff;
  if ((int)param_2 <= (int)uVar4) {
    uVar6 = uVar4;
  }
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,1,1);
  }
  *(uint *)(param_1 + 0xc) = uVar6;
  return;
}



// FUNCTION 14181a07e FUN_14181a07e body=277 status=ok
// SIG undefined FUN_14181a07e(void)

void FUN_14181a07e(uint param_1)

{
  void *_Dst;
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = DAT_14cb25a00;
  _Dst = (void *)(DAT_14cb25a00 + (longlong)(int)param_1 * 0x30);
  if (*(longlong *)(DAT_14cb25a00 + 0x20 + (longlong)(int)param_1 * 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)((longlong)_Dst + 0x18);
  if (plVar1 == (longlong *)0x0) goto LAB_14181a0e7;
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if ((int)plVar1[0x26] < 1) {
    FUN_1400847bc(plVar1 + 0x17,0);
    if ((int)plVar1[0x21] == 0) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14181a0df;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
LAB_14181a0df:
  *(undefined8 *)((longlong)_Dst + 0x18) = 0;
LAB_14181a0e7:
  iVar4 = ~param_1 + DAT_14cb25a08;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar2 + (longlong)(DAT_14cb25a08 - iVar3) * 0x30),(longlong)iVar3 * 0x30);
  }
  DAT_14cb25a08 = DAT_14cb25a08 + -1;
  return;
}



// FUNCTION 14181a194 FUN_14181a194 body=29 status=ok
// SIG undefined FUN_14181a194(void)

undefined8 FUN_14181a194(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181a1b2 FUN_14181a1b2 body=29 status=ok
// SIG undefined FUN_14181a1b2(void)

undefined8 FUN_14181a1b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181a1d0 FUN_14181a1d0 body=269 status=ok
// SIG undefined FUN_14181a1d0(void)

void FUN_14181a1d0(longlong param_1,int param_2)

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



// FUNCTION 14181a2de FUN_14181a2de body=269 status=ok
// SIG undefined FUN_14181a2de(void)

void FUN_14181a2de(longlong param_1,int param_2)

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



// FUNCTION 14181a3ec FUN_14181a3ec body=29 status=ok
// SIG undefined FUN_14181a3ec(void)

undefined8 FUN_14181a3ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181a40a FUN_14181a40a body=270 status=ok
// SIG undefined FUN_14181a40a(void)

void FUN_14181a40a(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0xc0);
  plVar2 = *(longlong **)(lVar1 + 0xb0 + (longlong)(int)param_2 * 0xc0);
  if (plVar2 == (longlong *)0x0) goto LAB_14181a438;
  *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + -1;
  if ((int)plVar2[0x26] < 1) {
    FUN_1400847bc(plVar2 + 0x17,0);
    if ((int)plVar2[0x21] == 0) {
      FUN_140087e46(plVar2);
      if (*plVar2 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14181a4bc;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
      }
    }
  }
LAB_14181a4bc:
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
LAB_14181a438:
  if (*(longlong *)((longlong)_Dst + 0x98) != 0) {
    FUN_1400020a8();
  }
  iVar3 = (int)param_1[1];
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar3 - iVar4) * 0xc0),(longlong)iVar4 * 0xc0);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 14181a51d FUN_14181a51d body=597 status=ok
// SIG undefined FUN_14181a51d(void)

undefined8
FUN_14181a51d(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,float *param_5
             ,char param_6,char param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  float *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_5 = 0.0;
  param_3[2] = DAT_14c8464f0;
  uVar8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *param_3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_3[1] = uVar8;
  param_4[2] = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_4 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_4 + 4) = uVar4;
  *(undefined4 *)(param_4 + 1) = uVar5;
  *(undefined4 *)((longlong)param_4 + 0xc) = uVar6;
  uVar8 = 0;
  if ((param_1 != 0) && (DAT_14cb259f8 != 0)) {
    local_b0 = &local_4c;
    local_4c = 3.4e+38;
    local_a0 = &local_68;
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_98 = &local_88;
    local_78 = 0.0;
    local_88 = 0;
    uStack_80 = 0;
    local_a8 = &local_90;
    local_90 = 0;
    local_b8 = param_2;
    if (DAT_14cb25ab0 == '\x01') {
      lVar10 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
      if (lVar10 != 0) {
        plVar9 = *(longlong **)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10);
        plVar11 = plVar9 + lVar10 * 2;
        do {
          while ((*plVar9 != 0 && (*(longlong *)(*plVar9 + 8) == param_1))) {
            bVar7 = FUN_140072078(&local_b8);
            plVar9 = plVar9 + 2;
            if ((bVar7 & plVar9 != plVar11) == 0) goto LAB_14181a662;
          }
          plVar9 = plVar9 + 2;
        } while (plVar9 != plVar11);
LAB_14181a662:
        if (local_90 != 0) {
          fVar12 = local_4c;
          if (param_7 != '\0') {
            if (local_4c < 0.0) {
              fVar12 = sqrtf(local_4c);
            }
            else {
              fVar12 = SQRT(local_4c);
            }
          }
          *param_5 = fVar12;
          param_3[2] = local_58;
          *param_3 = local_68;
          param_3[1] = uStack_60;
          param_4[2] = local_78;
          *(undefined4 *)param_4 = (undefined4)local_88;
          *(undefined4 *)((longlong)param_4 + 4) = local_88._4_4_;
          *(undefined4 *)(param_4 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)param_4 + 0xc) = uStack_80._4_4_;
          uVar8 = 1;
          if (param_6 != '\0') {
            dVar1 = *param_4;
            dVar2 = param_4[1];
            dVar3 = param_4[2];
            dVar13 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
            if (9.99999993922529e-09 < dVar13) {
              dVar13 = 1.0 / SQRT(dVar13);
              *param_4 = dVar1 * dVar13;
              param_4[1] = dVar2 * dVar13;
              param_4[2] = dVar3 * dVar13;
            }
          }
          goto LAB_14181a6b6;
        }
      }
    }
    uVar8 = 0;
  }
LAB_14181a6b6:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14181a77a FUN_14181a77a body=1154 status=ok
// SIG undefined FUN_14181a77a(void)

void FUN_14181a77a(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  undefined **ppuVar8;
  longlong lVar9;
  longlong *in_stack_00000028;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong lStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  void *local_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (DAT_14cb259f8 != 0) {
    local_108 = (undefined4)in_stack_00000028[0x24];
    local_118 = in_stack_00000028[0x22];
    lStack_110 = in_stack_00000028[0x23];
    uStack_104 = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 0x124);
    uStack_100 = (undefined4)
                 ((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x124) >> 0x20);
    uStack_fc = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 300);
    uStack_f8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 300) >> 0x20);
    local_f0 = (undefined4)in_stack_00000028[0x27];
    uStack_ec = *(undefined4 *)((longlong)in_stack_00000028 + 0x13c);
    uStack_e8 = (undefined4)in_stack_00000028[0x28];
    uStack_e4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x144);
    local_e0 = (undefined4)in_stack_00000028[0x29];
    uStack_dc = *(undefined4 *)((longlong)in_stack_00000028 + 0x14c);
    uStack_d8 = (undefined4)in_stack_00000028[0x2a];
    uStack_d4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x154);
    local_d0 = in_stack_00000028[0x2b];
    local_c0 = (undefined4)in_stack_00000028[0x2d];
    local_c8 = in_stack_00000028[0x2c];
    local_b8 = 0;
    iVar4 = (int)in_stack_00000028[0x2f];
    lVar7 = in_stack_00000028[0x2e];
    local_b0 = CONCAT44(local_b0._4_4_,iVar4);
    if (iVar4 == 0) {
      local_b0 = 0;
    }
    else {
      FUN_14753cf4a(&local_b8,iVar4,0);
      FUN_14753cfbd(local_b8,lVar7,iVar4);
    }
    local_a8 = (void *)0x0;
    uVar5 = *(uint *)(in_stack_00000028 + 0x31);
    pvVar6 = (void *)in_stack_00000028[0x30];
    local_a0 = CONCAT44(local_a0._4_4_,uVar5);
    if ((longlong)(int)uVar5 == 0) {
      local_a0 = (ulonglong)uVar5;
    }
    else {
      FUN_1456c5740(&local_a8,uVar5,0);
      memcpy(local_a8,pvVar6,(longlong)(int)uVar5 << 3);
    }
    local_98 = (undefined1)in_stack_00000028[0x32];
    local_90 = (void *)0x0;
    uVar5 = *(uint *)(in_stack_00000028 + 0x34);
    pvVar6 = (void *)in_stack_00000028[0x33];
    local_88 = CONCAT44(local_88._4_4_,uVar5);
    if ((longlong)(int)uVar5 == 0) {
      local_88 = (ulonglong)uVar5;
    }
    else {
      FUN_1447bda9e(&local_90,uVar5,0);
      memcpy(local_90,pvVar6,(longlong)(int)uVar5 << 2);
    }
    uStack_78 = (undefined5)
                ((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x1ad) >> 0x18);
    uStack_80 = (undefined5)in_stack_00000028[0x35];
    local_7b = (undefined3)((ulonglong)in_stack_00000028[0x35] >> 0x28);
    local_30 = local_30 | 3;
    local_70 = &PTR_FUN_14acb8860;
    iVar4 = (int)in_stack_00000028[1];
    *(uint *)(in_stack_00000028 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar4 + 1U) {
      FUN_140ac5684(in_stack_00000028,iVar4);
    }
    lVar7 = *in_stack_00000028;
    lVar9 = (longlong)iVar4 * 0xf0;
    *(undefined4 *)(lVar7 + 0x20 + lVar9) = uStack_f8;
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar9);
    *puVar1 = CONCAT44(uStack_104,local_108);
    puVar1[1] = CONCAT44(uStack_fc,uStack_100);
    *(longlong *)(lVar7 + lVar9) = local_118;
    ((longlong *)(lVar7 + lVar9))[1] = lStack_110;
    *(longlong *)(lVar7 + 0x48 + lVar9) = local_d0;
    puVar2 = (undefined4 *)(lVar7 + 0x38 + lVar9);
    *puVar2 = local_e0;
    puVar2[1] = uStack_dc;
    puVar2[2] = uStack_d8;
    puVar2[3] = uStack_d4;
    puVar2 = (undefined4 *)(lVar7 + 0x28 + lVar9);
    *puVar2 = local_f0;
    puVar2[1] = uStack_ec;
    puVar2[2] = uStack_e8;
    puVar2[3] = uStack_e4;
    *(longlong *)(lVar7 + 0x50 + lVar9) = local_c8;
    *(undefined4 *)(lVar7 + 0x58 + lVar9) = local_c0;
    *(undefined8 *)(lVar7 + 0x60 + lVar9) = 0;
    *(longlong *)(lVar7 + 0x60 + lVar9) = local_b8;
    local_b8 = 0;
    *(undefined4 *)(lVar7 + 0x68 + lVar9) = (undefined4)local_b0;
    *(undefined4 *)(lVar7 + 0x6c + lVar9) = local_b0._4_4_;
    local_b0 = 0;
    *(undefined8 *)(lVar7 + 0x70 + lVar9) = 0;
    *(void **)(lVar7 + 0x70 + lVar9) = local_a8;
    local_a8 = (void *)0x0;
    *(undefined4 *)(lVar7 + 0x78 + lVar9) = (undefined4)local_a0;
    *(undefined4 *)(lVar7 + 0x7c + lVar9) = local_a0._4_4_;
    local_a0 = 0;
    *(undefined1 *)(lVar7 + 0x80 + lVar9) = local_98;
    *(undefined8 *)(lVar7 + 0x88 + lVar9) = 0;
    *(void **)(lVar7 + 0x88 + lVar9) = local_90;
    local_90 = (void *)0x0;
    *(undefined4 *)(lVar7 + 0x90 + lVar9) = (undefined4)local_88;
    *(undefined4 *)(lVar7 + 0x94 + lVar9) = local_88._4_4_;
    local_88 = 0;
    *(ulonglong *)(lVar7 + 0x9d + lVar9) = CONCAT53(uStack_78,local_7b);
    *(ulonglong *)(lVar7 + 0x98 + lVar9) = CONCAT35(local_7b,uStack_80);
    bVar3 = *(byte *)(lVar7 + 0xe8 + lVar9);
    *(byte *)(lVar7 + 0xe8 + lVar9) = bVar3 & 0xfc | 2;
    if ((local_30 & 1) != 0) {
      lVar7 = lVar7 + lVar9;
      *(byte *)(lVar7 + 0xe8) = bVar3 | 3;
      *(byte *)(lVar7 + 0xe8) = *(byte *)(lVar7 + 0xe8) & 0xfd | local_30 & 2;
      *(undefined8 *)(lVar7 + 0xd8) = local_40;
      *(undefined8 *)(lVar7 + 0xe0) = uStack_38;
      *(undefined8 *)(lVar7 + 200) = local_50;
      *(undefined8 *)(lVar7 + 0xd0) = uStack_48;
      *(undefined4 *)(lVar7 + 0xb8) = local_60;
      *(undefined4 *)(lVar7 + 0xbc) = uStack_5c;
      *(undefined4 *)(lVar7 + 0xc0) = uStack_58;
      *(undefined4 *)(lVar7 + 0xc4) = uStack_54;
      *(undefined4 *)(lVar7 + 0xa8) = (undefined4)local_70;
      *(undefined4 *)(lVar7 + 0xac) = local_70._4_4_;
      *(undefined4 *)(lVar7 + 0xb0) = uStack_68;
      *(undefined4 *)(lVar7 + 0xb4) = uStack_64;
      local_30 = local_30 & 0xfe;
    }
    if ((local_30 & 1) != 0) {
      ppuVar8 = (undefined **)&local_70;
      if ((local_30 & 2) == 0) {
        ppuVar8 = local_70;
      }
      local_30 = local_30 & 0xfe;
      (**(code **)*ppuVar8)(ppuVar8,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70);
      }
    }
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447bda9c(local_b8,local_b0 & 0xffffffff);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181abfe FUN_14181abfe body=161 status=ok
// SIG undefined FUN_14181abfe(void)

void FUN_14181abfe(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (DAT_14cb259f8 != 0) {
    lVar4 = FUN_14094275a(param_2,param_2 + 0x24);
    plVar2 = *(longlong **)(lVar4 + 8);
    plVar3 = *(longlong **)(lVar4 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
      if (*(char *)(lVar4 + 0x10c) == '\x01') {
        FUN_140942aa0();
        lVar4 = *plVar2;
      }
      *(undefined8 *)(lVar4 + 0x104) = 0x3f800000bf800000;
      *(undefined4 *)(lVar4 + 0x100) = *(undefined4 *)(lVar4 + 0x120);
      *(undefined4 *)(lVar4 + 0xfc) = *(undefined4 *)(lVar4 + 0x120);
    }
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
                    /* WARNING: Could not recover jumptable at 0x00014181ac9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14181aca0 FUN_14181aca0 body=35 status=ok
// SIG undefined FUN_14181aca0(void)

undefined8 * FUN_14181aca0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1448417d2(param_2);
  return param_2;
}



// FUNCTION 14181acc4 FUN_14181acc4 body=84 status=ok
// SIG undefined FUN_14181acc4(void)

void FUN_14181acc4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x800,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 8;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 14181ad18 FUN_14181ad18 body=87 status=ok
// SIG undefined FUN_14181ad18(void)

void FUN_14181ad18(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x5000,0);
    lVar4 = 0xff;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 10;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x100;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 14181ad70 FUN_14181ad70 body=71 status=ok
// SIG undefined FUN_14181ad70(void)

void FUN_14181ad70(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_1400e3b02(param_1,param_2);
    return;
  }
  if (1 < *(int *)(param_2 + 4)) {
    FUN_140d47262();
    return;
  }
  FUN_14013f0a2();
  return;
}



// FUNCTION 14181adb8 FUN_14181adb8 body=87 status=ok
// SIG undefined FUN_14181adb8(void)

void FUN_14181adb8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x6000,0);
    lVar4 = 0xff;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0xc;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x100;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 14181ae10 FUN_14181ae10 body=71 status=ok
// SIG undefined FUN_14181ae10(void)

void FUN_14181ae10(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_1400e3b02(param_1,param_2);
    return;
  }
  if (1 < *(int *)(param_2 + 4)) {
    FUN_140067708();
    return;
  }
  FUN_14013f0a2();
  return;
}



// FUNCTION 14181ae72 FUN_14181ae72 body=71 status=ok
// SIG undefined FUN_14181ae72(void)

void FUN_14181ae72(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_1400e3b02(param_1,param_2);
    return;
  }
  if (1 < *(int *)(param_2 + 4)) {
    FUN_1407f787c();
    return;
  }
  FUN_14013f0a2();
  return;
}



// FUNCTION 14181aeba FUN_14181aeba body=71 status=ok
// SIG undefined FUN_14181aeba(void)

void FUN_14181aeba(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_1400e3b02(param_1,param_2);
    return;
  }
  if (1 < *(int *)(param_2 + 4)) {
    FUN_140c9dc26();
    return;
  }
  FUN_14013f0a2();
  return;
}



// FUNCTION 14181af1c FUN_14181af1c body=71 status=ok
// SIG undefined FUN_14181af1c(void)

void FUN_14181af1c(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_1400e3b02(param_1,param_2);
    return;
  }
  if (1 < *(int *)(param_2 + 4)) {
    FUN_1405b1a32();
    return;
  }
  FUN_14013f0a2();
  return;
}



// FUNCTION 14181af64 FUN_14181af64 body=248 status=ok
// SIG undefined FUN_14181af64(void)

void FUN_14181af64(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar3 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
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
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 14181b05c FUN_14181b05c body=269 status=ok
// SIG undefined FUN_14181b05c(void)

void FUN_14181b05c(longlong param_1,int param_2)

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



// FUNCTION 14181b16a FUN_14181b16a body=29 status=ok
// SIG undefined FUN_14181b16a(void)

undefined8 FUN_14181b16a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181b188 FUN_14181b188 body=29 status=ok
// SIG undefined FUN_14181b188(void)

undefined8 FUN_14181b188(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181b1a6 FUN_14181b1a6 body=29 status=ok
// SIG undefined FUN_14181b1a6(void)

undefined8 FUN_14181b1a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181b1c4 FUN_14181b1c4 body=29 status=ok
// SIG undefined FUN_14181b1c4(void)

undefined8 FUN_14181b1c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181b1e2 FUN_14181b1e2 body=29 status=ok
// SIG undefined FUN_14181b1e2(void)

undefined8 FUN_14181b1e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181b1ff FUN_14181b1ff body=49 status=ok
// SIG undefined FUN_14181b1ff(void)

longlong FUN_14181b1ff(void)

{
  if (DAT_14cb26800 == 0) {
    FUN_14086a14e(&DAT_14cb26800,&PTR_FUN_14acbe370);
  }
  return DAT_14cb26800;
}



// FUNCTION 14181b230 FUN_14181b230 body=46 status=ok
// SIG undefined FUN_14181b230(void)

void FUN_14181b230(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14acc0da0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 14181b25e FUN_14181b25e body=49 status=ok
// SIG undefined FUN_14181b25e(void)

longlong FUN_14181b25e(void)

{
  if (DAT_14cb267c0 == 0) {
    FUN_14073dd9a(&DAT_14cb267c0,&PTR_LAB_14acbd8b0);
  }
  return DAT_14cb267c0;
}



// FUNCTION 14181b28f FUN_14181b28f body=97 status=ok
// SIG undefined FUN_14181b28f(void)

void FUN_14181b28f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14acbd8f0;
  puVar1[5] = &PTR_FUN_14acbdd70;
  puVar1[6] = &PTR_LAB_14acbddb0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  *(undefined2 *)(puVar1 + 0x2a) = 0x100;
  return;
}



// FUNCTION 14181b2f0 FUN_14181b2f0 body=555 status=ok
// SIG undefined FUN_14181b2f0(void)

void FUN_14181b2f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    uStack_44 = *(undefined4 *)(param_1 + 0x20);
    local_58 = (undefined4)*param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = (undefined4)param_2[1];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_48 = (undefined4)param_2[2];
    uStack_40 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_38 = (undefined4)param_2[4];
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_30 = (undefined4)param_2[5];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
    if ((plVar2[1] != 0) && ((*(byte *)(plVar2[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_58,plVar2);
      FUN_144b1fd46(&local_58,*(undefined8 *)(param_1 + 0x18));
      FUN_144b1fe18(&local_58,*(undefined8 *)(param_1 + 0x18));
      plVar2 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_58);
  }
  uVar3 = FUN_14477dc2a(param_1);
  FUN_14477dadc(uVar3,param_2);
  fVar5 = *(float *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = 1.0 - fVar5;
  }
  *(float *)(param_1 + 0x84) = fVar5;
  if ((*(char *)(param_1 + 0x69) != '\x01') || (fVar5 <= 1e-08)) goto LAB_14181b430;
  if (*param_2 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x60);
    if (lVar4 != 0) {
LAB_14181b499:
      if (0 < *(int *)(lVar4 + 0x148)) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x140) + 0x38);
        if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
          FUN_1456cec3c(lVar4);
        }
        else {
LAB_14181b40b:
          if (lVar4 == 0) goto LAB_14181b4d0;
        }
        fVar5 = 0.0;
        if (*(char *)(lVar4 + 0x188) == '\0') {
          fVar5 = *(float *)(lVar4 + 0x174) * 4.0;
          if (1.0 <= fVar5) {
            fVar5 = 1.0;
          }
          fVar6 = (*(float *)(lVar4 + 0x178) - *(float *)(lVar4 + 0x174)) * 4.0;
          if (1.0 <= fVar6) {
            fVar6 = 1.0;
          }
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          if (fVar6 <= fVar5) {
            fVar5 = fVar6;
          }
        }
        fVar5 = fVar5 * *(float *)(param_1 + 0x84);
        goto LAB_14181b428;
      }
    }
LAB_14181b4d0:
    fVar5 = 0.0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x60);
    fVar5 = 0.0;
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(*param_2 + 0x148);
      if (lVar1 == 0) goto LAB_14181b499;
      if ((longlong)*(int *)(lVar4 + 0x148) != 0) {
        plVar2 = *(longlong **)(lVar4 + 0x140);
        lVar4 = (longlong)*(int *)(lVar4 + 0x148) * 0x48;
        do {
          if (*plVar2 == lVar1) {
            if (plVar2 != (longlong *)0x0) {
              lVar4 = plVar2[7];
              goto LAB_14181b40b;
            }
            break;
          }
          plVar2 = plVar2 + 9;
          lVar4 = lVar4 + -0x48;
        } while (lVar4 != 0);
      }
    }
  }
LAB_14181b428:
  *(float *)(param_1 + 0x84) = fVar5;
LAB_14181b430:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14181b51c FUN_14181b51c body=289 status=ok
// SIG undefined FUN_14181b51c(void)

undefined8 FUN_14181b51c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      *(undefined2 *)(param_2 + 0x10 + lVar14) = *(undefined2 *)(param_3 + 0x10 + lVar14);
      *(undefined8 *)(param_2 + 8 + lVar14) = *(undefined8 *)(param_3 + 8 + lVar14);
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar14);
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 0x24 + lVar14);
      uVar9 = *puVar4;
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x18 + lVar14);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar4[2] = uVar7;
      puVar4[3] = uVar8;
      puVar3 = (undefined4 *)(param_2 + 0x24 + lVar14);
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      if (param_2 != param_3) {
        iVar5 = *(int *)(param_3 + 0x40 + lVar14);
        _Src = *(void **)(param_3 + 0x38 + lVar14);
        *(int *)(param_2 + 0x40 + lVar14) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x44 + lVar14) == 0) {
          *(undefined4 *)(param_2 + 0x44 + lVar14) = 0;
        }
        else {
          puVar13 = (undefined8 *)(param_2 + lVar14 + 0x38);
          FUN_147f87054(puVar13,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar13,_Src,(longlong)iVar5 * 0x60);
          }
        }
      }
      lVar1 = param_2 + lVar14;
      lVar2 = param_3 + lVar14;
      FUN_140d2c6ac(lVar1 + 0x48,lVar2 + 0x48);
      uVar6 = *(undefined4 *)(lVar2 + 0x5c);
      uVar7 = *(undefined4 *)(lVar2 + 0x60);
      uVar8 = *(undefined4 *)(lVar2 + 100);
      *(undefined4 *)(lVar1 + 0x58) = *(undefined4 *)(lVar2 + 0x58);
      *(undefined4 *)(lVar1 + 0x5c) = uVar6;
      *(undefined4 *)(lVar1 + 0x60) = uVar7;
      *(undefined4 *)(lVar1 + 100) = uVar8;
      *(undefined2 *)(lVar1 + 0x68) = *(undefined2 *)(lVar2 + 0x68);
      lVar1 = param_2 + 0x70 + lVar14;
      FUN_1406fa324(lVar1,param_3 + lVar14 + 0x70);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_3 + lVar14 + 0x80);
      lVar14 = lVar14 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14181b63e FUN_14181b63e body=275 status=ok
// SIG undefined FUN_14181b63e(void)

void FUN_14181b63e(longlong param_1,int param_2)

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



// FUNCTION 14181b752 FUN_14181b752 body=370 status=ok
// SIG undefined FUN_14181b752(void)

void FUN_14181b752(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14181b7db;
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
LAB_14181b7db:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 14181b8d0 FUN_14181b8d0 body=128 status=ok
// SIG undefined FUN_14181b8d0(void)

void FUN_14181b8d0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14acc1b38);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181b952 FUN_14181b952 body=127 status=ok
// SIG undefined FUN_14181b952(void)

void FUN_14181b952(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14181b9e6 FUN_14181b9e6 body=48 status=ok
// SIG undefined FUN_14181b9e6(void)

void FUN_14181b9e6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,4);
  }
  return;
}



// FUNCTION 14181ba16 FUN_14181ba16 body=370 status=ok
// SIG undefined FUN_14181ba16(void)

void FUN_14181ba16(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14181ba9f;
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
LAB_14181ba9f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,4);
  return;
}



// FUNCTION 14181bb88 FUN_14181bb88 body=49 status=ok
// SIG undefined FUN_14181bb88(void)

longlong FUN_14181bb88(void)

{
  if (DAT_14cb26c88 == 0) {
    FUN_14073dd9a(&DAT_14cb26c88,&PTR_LAB_14acc5560);
  }
  return DAT_14cb26c88;
}



// FUNCTION 14181bbb9 FUN_14181bbb9 body=49 status=ok
// SIG undefined FUN_14181bbb9(void)

longlong FUN_14181bbb9(void)

{
  if (DAT_14cb26cb0 == 0) {
    FUN_14086a14e(&DAT_14cb26cb0,&PTR_FUN_14acc5af8);
  }
  return DAT_14cb26cb0;
}



// FUNCTION 14181bbea FUN_14181bbea body=49 status=ok
// SIG undefined FUN_14181bbea(void)

longlong FUN_14181bbea(void)

{
  if (DAT_14cb26d58 == 0) {
    FUN_14086a14e(&DAT_14cb26d58,&PTR_FUN_14acc65a8);
  }
  return DAT_14cb26d58;
}



// FUNCTION 14181bc1b FUN_14181bc1b body=49 status=ok
// SIG undefined FUN_14181bc1b(void)

longlong FUN_14181bc1b(void)

{
  if (DAT_14cb26ed0 == 0) {
    FUN_14073dd9a(&DAT_14cb26ed0,&PTR_LAB_14acc9d30);
  }
  return DAT_14cb26ed0;
}



// FUNCTION 14181bc4c FUN_14181bc4c body=91 status=ok
// SIG undefined FUN_14181bc4c(void)

void FUN_14181bc4c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14181bca7 FUN_14181bca7 body=49 status=ok
// SIG undefined FUN_14181bca7(void)

longlong FUN_14181bca7(void)

{
  if (DAT_14cb27020 == 0) {
    FUN_14073dd9a(&DAT_14cb27020,&PTR_LAB_14accd220);
  }
  return DAT_14cb27020;
}



// FUNCTION 14181bcd8 FUN_14181bcd8 body=97 status=ok
// SIG undefined FUN_14181bcd8(void)

void FUN_14181bcd8(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1402a61c0(param_1,iVar2);
    }
    FUN_1405b83ac((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 14181bd3a FUN_14181bd3a body=112 status=ok
// SIG undefined FUN_14181bd3a(void)

undefined8 * FUN_14181bd3a(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((param_3 != 0) && (lVar1 = (**(code **)(*param_1 + 0x10))(), lVar1 != 0)) &&
     ((longlong)*(int *)(lVar1 + 0x548) != 0)) {
    lVar2 = (longlong)*(int *)(lVar1 + 0x548) * 0x50;
    lVar1 = *(longlong *)(lVar1 + 0x540) + 0x28;
    do {
      if (*(longlong *)(lVar1 + -8) == param_3) {
        FUN_14011b67e(param_2,lVar1);
      }
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  return param_2;
}



// FUNCTION 14181bdaa FUN_14181bdaa body=306 status=ok
// SIG undefined FUN_14181bdaa(void)

longlong * FUN_14181bdaa(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  lVar4 = param_2[4];
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[4];
    }
  }
  param_1[4] = lVar4;
  param_1[5] = param_2[5];
  if (param_1 != param_2) {
    param_1[6] = param_2[6];
    param_2[6] = 0;
    plVar2 = (longlong *)param_2[7];
    plVar3 = (longlong *)param_1[7];
    if (plVar2 != plVar3) {
      param_2[7] = 0;
      param_1[7] = (longlong)plVar2;
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
  *(short *)(param_1 + 8) = (short)param_2[8];
  lVar4 = param_2[9];
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[9];
    }
  }
  param_1[9] = lVar4;
  return param_1;
}



// FUNCTION 14181beea FUN_14181beea body=455 status=ok
// SIG undefined FUN_14181beea(void)

void FUN_14181beea(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  void *_Dst;
  int iVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  
  iVar11 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar11 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar15 = uVar3 - iVar11;
    iVar10 = iVar15;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar9 = (int)param_1[6];
      uVar17 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar9 * 0x18);
        if (iVar9 < iVar15) {
          puVar1 = (undefined8 *)(lVar5 + (longlong)iVar9 * 0x18);
          plVar12 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar12 = param_1 + 2;
          }
          puVar8 = (undefined8 *)(lVar5 + 0x18 + (longlong)(int)(uVar17 - 1) * 0x18);
          uVar16 = uVar17;
          do {
            puVar18 = puVar8;
            uVar17 = uVar16 - 1;
            uVar19 = uVar16 + 0x1e;
            if (-1 < (int)uVar17) {
              uVar19 = uVar17;
            }
            puVar8 = puVar18 + -3;
            uVar16 = uVar17;
          } while ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar19 >> 5) * 4) >>
                    (uVar17 & 0x1f) & 1) == 0);
          uVar6 = puVar18[-3];
          uVar7 = puVar18[-2];
          puVar1[2] = puVar18[-1];
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          plVar12 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar12 = param_1 + 2;
          }
          iVar13 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar13 = iVar9;
          }
          puVar2 = (uint *)((longlong)plVar12 + (longlong)(iVar13 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
        }
        iVar9 = iVar4;
      } while (iVar4 != -1);
      iVar9 = (int)param_1[1] - uVar3;
      if (iVar9 != 0) {
        _Dst = (void *)((longlong)iVar15 * 0x18 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar11 * 0x18),(longlong)iVar9 * 0x18);
        iVar10 = (int)param_1[1] - iVar11;
      }
    }
    *(int *)(param_1 + 1) = iVar10;
    iVar10 = (int)param_1[5] - uVar3;
    if (iVar10 != 0) {
      plVar12 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      FUN_14493566c(plVar12,iVar15,plVar12,uVar3,iVar10);
      iVar15 = (int)param_1[5] - iVar11;
    }
    iVar11 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar11 = iVar15;
    }
    *(int *)(param_1 + 5) = iVar15;
    if (iVar15 % 0x20 != 0) {
      plVar12 = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar12 = (longlong *)param_1[4];
      }
      bVar14 = -(char)(iVar15 % 0x20);
      *(uint *)((longlong)plVar12 + (longlong)(iVar11 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar11 >> 5) * 4) << (bVar14 & 0x1f)) >>
           (bVar14 & 0x1f);
    }
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_144727cd0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14181c0b2 FUN_14181c0b2 body=353 status=ok
// SIG undefined FUN_14181c0b2(void)

void FUN_14181c0b2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14181c139;
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
LAB_14181c139:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14181c214 FUN_14181c214 body=118 status=ok
// SIG undefined FUN_14181c214(void)

void FUN_14181c214(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14181c28a FUN_14181c28a body=231 status=ok
// SIG undefined FUN_14181c28a(void)

void FUN_14181c28a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x50;
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
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 14181c380 FUN_14181c380 body=745 status=ok
// SIG undefined FUN_14181c380(void)

longlong FUN_14181c380(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  code *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined2 local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb27848) {
    FUN_144b3d300(&DAT_14cb27848);
    if (DAT_14cb27848 == -1) {
      FUN_1446ddc76(&local_88,"EnhancedInput",1);
      uVar8 = FUN_144a52528();
      DAT_14cb27840 = (longlong *)FUN_1402c9134(uVar8,local_88,&local_38,1);
      _Init_thread_footer(&DAT_14cb27848);
    }
  }
  (**(code **)(*DAT_14cb27840 + 0x40))();
  local_80 = &local_38;
  local_30 = 0;
  local_88 = FUN_1438bada8;
  local_38 = param_1;
  FUN_14032f414();
  local_a0 = *param_3;
  local_98 = param_3[1];
  local_90 = param_3[2];
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  FUN_1409f7bea(&local_88,param_2,&local_a0);
  iVar4 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
    FUN_1405b89f8((longlong *)(param_1 + 0x30),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  lVar9 = (longlong)iVar4 * 0x50;
  lVar3 = lVar5 + lVar9;
  *(undefined8 *)(lVar5 + lVar9) = 0;
  *(code **)(lVar5 + lVar9) = local_88;
  local_88 = (code *)0x0;
  *(undefined4 *)(lVar5 + 8 + lVar9) = (undefined4)local_80;
  *(undefined4 *)(lVar5 + 0xc + lVar9) = local_80._4_4_;
  local_80 = (longlong *)0x0;
  *(undefined8 *)(lVar5 + 0x10 + lVar9) = 0;
  *(longlong *)(lVar5 + 0x10 + lVar9) = local_78;
  local_78 = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar9) = (undefined4)local_70;
  *(undefined4 *)(lVar5 + 0x1c + lVar9) = local_70._4_4_;
  local_70 = 0;
  *(longlong *)(lVar5 + 0x20 + lVar9) = local_68;
  if ((local_68 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar7 = DAT_14c950c29;
  *(undefined8 *)(lVar3 + 0x28) = local_60;
  *(undefined8 *)(lVar3 + 0x30) = local_58;
  *(longlong **)(lVar3 + 0x38) = plStack_50;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined2 *)(lVar3 + 0x40) = local_48;
  *(longlong *)(lVar3 + 0x48) = local_40;
  if ((local_40 != 0 & bVar7) == 1) {
    FUN_1456cec3c();
  }
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)param_3[2];
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
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181c66a FUN_14181c66a body=258 status=ok
// SIG undefined FUN_14181c66a(void)

void FUN_14181c66a(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14acd35a0;
  puVar1[6] = 0;
  puVar1[7] = 0;
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
  plVar2 = DAT_14c844840;
  puVar1[8] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(puVar1 + 9) = 0;
  return;
}



// FUNCTION 14181c76c FUN_14181c76c body=127 status=ok
// SIG undefined FUN_14181c76c(void)

void FUN_14181c76c(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14181c7ff FUN_14181c7ff body=49 status=ok
// SIG undefined FUN_14181c7ff(void)

longlong FUN_14181c7ff(void)

{
  if (DAT_14cb272a8 == 0) {
    FUN_14073dd9a(&DAT_14cb272a8,&PTR_LAB_14acd3c40);
  }
  return DAT_14cb272a8;
}



// FUNCTION 14181c836 FUN_14181c836 body=244 status=ok
// SIG undefined FUN_14181c836(void)

double * FUN_14181c836(longlong param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  lVar4 = FUN_140266114(param_3);
  if (lVar4 == 0) {
    dVar1 = *param_4;
    dVar2 = param_4[1];
    dVar3 = param_4[3];
    param_2[2] = param_4[2];
    param_2[3] = dVar3;
    *param_2 = dVar1;
    param_2[1] = dVar2;
    return param_2;
  }
  if (*(longlong **)(lVar4 + 0x448) == (longlong *)0x0) {
    fVar5 = 1.0;
  }
  else {
    fVar5 = (float)(**(code **)(**(longlong **)(lVar4 + 0x448) + 0x6e8))();
  }
  fVar6 = *(float *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (*(longlong *)(lVar4 + 0x448) == 0) goto LAB_14181c8b7;
    fVar5 = tanf(fVar5 * 0.5 * 0.017453292);
    fVar5 = fVar5 / 0.8390996;
  }
  else if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_14181c8b7;
  fVar6 = fVar6 * fVar5;
LAB_14181c8b7:
  dVar1 = param_4[1];
  dVar2 = param_4[2];
  dVar3 = param_4[3];
  *param_2 = *param_4;
  param_2[1] = dVar1;
  param_2[2] = dVar2;
  param_2[3] = dVar3;
  dVar1 = (double)fVar6;
  *param_2 = *param_2 * dVar1;
  param_2[1] = param_2[1] * dVar1;
  param_2[2] = dVar1 * param_2[2];
  return param_2;
}



// FUNCTION 14181c92a FUN_14181c92a body=70 status=ok
// SIG undefined FUN_14181c92a(void)

char FUN_14181c92a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_14014127e(param_3);
  fVar3 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28);
  cVar1 = '\x01';
  if (fVar2 < fVar3) {
    fVar2 = (float)FUN_14014127e(param_1 + 0x30);
    cVar1 = (fVar3 <= fVar2) * '\x02';
  }
  return cVar1;
}



// FUNCTION 14181c970 FUN_14181c970 body=185 status=ok
// SIG undefined FUN_14181c970(void)

char FUN_14181c970(longlong param_1,longlong param_2,undefined4 *param_3,float param_4)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    fVar4 = 1.0;
  }
  else {
    fVar3 = (float)FUN_1402660b2(param_2);
    fVar4 = param_4;
    if (*(char *)(param_1 + 0x54) != '\0') {
      fVar4 = fVar3 * param_4;
    }
    fVar4 = fVar4 + *(float *)(param_1 + 0x50);
  }
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_58 = param_3[4];
  uStack_54 = param_3[5];
  uStack_50 = param_3[6];
  uStack_4c = param_3[7];
  cVar1 = FUN_140266042(param_1,param_2,&local_68,param_4);
  cVar2 = '\x02';
  if (fVar4 < *(float *)(param_1 + 0x58)) {
    cVar2 = cVar1;
  }
  if (cVar1 != '\0') {
    cVar2 = cVar1;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar2;
}



// FUNCTION 14181ca2a FUN_14181ca2a body=157 status=ok
// SIG undefined FUN_14181ca2a(void)

ulonglong FUN_14181ca2a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar1 = *(float *)(param_1 + 0x50);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = param_3[4];
  uStack_44 = param_3[5];
  uStack_40 = param_3[6];
  uStack_3c = param_3[7];
  uVar2 = FUN_140266042();
  uVar3 = (ulonglong)uVar2;
  fVar4 = (float)FUN_14014127e(param_1 + 0x30);
  if ((((char)uVar2 != '\0') || (fVar4 < *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28)))
     || (*(float *)(param_1 + 0x58) <= fVar1)) {
    if (*(float *)(param_1 + 0x58) <= *(float *)(param_1 + 0x50)) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181cac8 FUN_14181cac8 body=159 status=ok
// SIG undefined FUN_14181cac8(void)

ulonglong FUN_14181cac8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(longlong *)(param_1 + 0x50);
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar3 = &local_18;
  lVar1 = FUN_144a7a2cc(param_2,plVar3);
  if (lVar1 == 0) {
LAB_14181cb16:
    plVar3 = (longlong *)0x0;
  }
  else {
    if (*(char *)(lVar1 + 0xb) == '\x01') {
      if (*(char *)(lVar1 + 0x10) != '\0') goto LAB_14181cb16;
      if ((*(char *)(lVar1 + 0xe) != '\x01') || (lVar2 = 0xc, *(char *)(lVar1 + 0xd) == '\x01')) {
        lVar2 = 0xc;
        plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),2);
        if (*(char *)(lVar1 + 0xf) != '\0') goto LAB_14181cb18;
      }
    }
    else {
      lVar2 = 9;
    }
    plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),*(undefined1 *)(lVar1 + lVar2));
  }
LAB_14181cb18:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar3 & 0xffffffff;
}



// FUNCTION 14181cb68 FUN_14181cb68 body=94 status=ok
// SIG undefined FUN_14181cb68(void)

undefined8 * FUN_14181cb68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acd35a0;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  FUN_140dde623(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181cbc6 FUN_14181cbc6 body=40 status=ok
// SIG undefined FUN_14181cbc6(void)

undefined8 FUN_14181cbc6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181cbee FUN_14181cbee body=40 status=ok
// SIG undefined FUN_14181cbee(void)

undefined8 FUN_14181cbee(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181cc16 FUN_14181cc16 body=40 status=ok
// SIG undefined FUN_14181cc16(void)

undefined8 FUN_14181cc16(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181cc3e FUN_14181cc3e body=40 status=ok
// SIG undefined FUN_14181cc3e(void)

undefined8 FUN_14181cc3e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181cc66 FUN_14181cc66 body=40 status=ok
// SIG undefined FUN_14181cc66(void)

undefined8 FUN_14181cc66(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181cc8e FUN_14181cc8e body=40 status=ok
// SIG undefined FUN_14181cc8e(void)

undefined8 FUN_14181cc8e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181ccb6 FUN_14181ccb6 body=40 status=ok
// SIG undefined FUN_14181ccb6(void)

undefined8 FUN_14181ccb6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181ccde FUN_14181ccde body=40 status=ok
// SIG undefined FUN_14181ccde(void)

undefined8 FUN_14181ccde(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181cd06 FUN_14181cd06 body=40 status=ok
// SIG undefined FUN_14181cd06(void)

undefined8 FUN_14181cd06(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181cd2e FUN_14181cd2e body=40 status=ok
// SIG undefined FUN_14181cd2e(void)

undefined8 FUN_14181cd2e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181cd56 FUN_14181cd56 body=40 status=ok
// SIG undefined FUN_14181cd56(void)

undefined8 FUN_14181cd56(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181cd7e FUN_14181cd7e body=49 status=ok
// SIG undefined FUN_14181cd7e(void)

longlong FUN_14181cd7e(void)

{
  if (DAT_14cb27b90 == 0) {
    FUN_14086a14e(&DAT_14cb27b90,&PTR_FUN_14ace0e60);
  }
  return DAT_14cb27b90;
}



// FUNCTION 14181cdaf FUN_14181cdaf body=49 status=ok
// SIG undefined FUN_14181cdaf(void)

longlong FUN_14181cdaf(void)

{
  if (DAT_14cb28848 == 0) {
    FUN_14086a14e(&DAT_14cb28848,&PTR_FUN_14acf6b88);
  }
  return DAT_14cb28848;
}



// FUNCTION 14181cde0 FUN_14181cde0 body=49 status=ok
// SIG undefined FUN_14181cde0(void)

longlong FUN_14181cde0(void)

{
  if (DAT_14cb28878 == 0) {
    FUN_14086a14e(&DAT_14cb28878,&PTR_FUN_14acf6e58);
  }
  return DAT_14cb28878;
}



// FUNCTION 14181ce11 FUN_14181ce11 body=49 status=ok
// SIG undefined FUN_14181ce11(void)

longlong FUN_14181ce11(void)

{
  if (DAT_14cb28710 == 0) {
    FUN_14086a14e(&DAT_14cb28710,&PTR_FUN_14acf5bd8);
  }
  return DAT_14cb28710;
}



// FUNCTION 14181ce42 FUN_14181ce42 body=49 status=ok
// SIG undefined FUN_14181ce42(void)

longlong FUN_14181ce42(void)

{
  if (DAT_14cb28e20 == 0) {
    FUN_14086a14e(&DAT_14cb28e20,&PTR_FUN_14ad05a18);
  }
  return DAT_14cb28e20;
}



// FUNCTION 14181ce73 FUN_14181ce73 body=49 status=ok
// SIG undefined FUN_14181ce73(void)

longlong FUN_14181ce73(void)

{
  if (DAT_14cb28dd8 == 0) {
    FUN_14086a14e(&DAT_14cb28dd8,&PTR_FUN_14ad056e8);
  }
  return DAT_14cb28dd8;
}



// FUNCTION 14181cea4 FUN_14181cea4 body=49 status=ok
// SIG undefined FUN_14181cea4(void)

longlong FUN_14181cea4(void)

{
  if (DAT_14cb28e08 == 0) {
    FUN_14086a14e(&DAT_14cb28e08,&PTR_FUN_14ad05908);
  }
  return DAT_14cb28e08;
}



// FUNCTION 14181ced5 FUN_14181ced5 body=49 status=ok
// SIG undefined FUN_14181ced5(void)

longlong FUN_14181ced5(void)

{
  if (DAT_14cb29398 == 0) {
    FUN_14073dd9a(&DAT_14cb29398,&PTR_LAB_14ad10128);
  }
  return DAT_14cb29398;
}



// FUNCTION 14181cf06 FUN_14181cf06 body=193 status=ok
// SIG undefined FUN_14181cf06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14181cf06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb29438) {
    FUN_144b3d300(&DAT_14cb29438);
    if (DAT_14cb29438 == -1) {
      _DAT_14cb293d0 = 0;
      _DAT_14cb293d8 = 0;
      _DAT_14cb293b0 = 0;
      uRam000000014cb293b8 = 0;
      _DAT_14cb293dc = 0xffffffff00000080;
      _DAT_14cb293e4 = 0;
      DAT_14cb293f0 = 0;
      _DAT_14cb293f8 = 0;
      DAT_14cb29420 = 0;
      _DAT_14cb29428 = 0;
      DAT_14cb29400 = 0;
      _DAT_14cb29408 = 0;
      _DAT_14cb2942c = 0xffffffff00000080;
      _DAT_14cb29434 = 0;
      atexit((_func_5014 *)&LAB_1438d8d35);
      _Init_thread_footer(&DAT_14cb29438);
    }
  }
  return &DAT_14cb293b0;
}



// FUNCTION 14181cfc7 FUN_14181cfc7 body=49 status=ok
// SIG undefined FUN_14181cfc7(void)

longlong FUN_14181cfc7(void)

{
  if (DAT_14cb2ac08 == 0) {
    FUN_14073dd9a(&DAT_14cb2ac08,&PTR_LAB_14ad1a760);
  }
  return DAT_14cb2ac08;
}



// FUNCTION 14181cff8 FUN_14181cff8 body=49 status=ok
// SIG undefined FUN_14181cff8(void)

longlong FUN_14181cff8(void)

{
  if (DAT_14cb2ad90 == 0) {
    FUN_14086a14e(&DAT_14cb2ad90,&PTR_FUN_14ad1d5f8);
  }
  return DAT_14cb2ad90;
}



// FUNCTION 14181d029 FUN_14181d029 body=49 status=ok
// SIG undefined FUN_14181d029(void)

longlong FUN_14181d029(void)

{
  if (DAT_14cb2ae60 == 0) {
    FUN_14086a14e(&DAT_14cb2ae60,&PTR_FUN_14ad1f0a8);
  }
  return DAT_14cb2ae60;
}



// FUNCTION 14181d05a FUN_14181d05a body=49 status=ok
// SIG undefined FUN_14181d05a(void)

longlong FUN_14181d05a(void)

{
  if (DAT_14cb2ae50 == 0) {
    FUN_14073dd9a(&DAT_14cb2ae50,&PTR_LAB_14ad1ecd0);
  }
  return DAT_14cb2ae50;
}



// FUNCTION 14181d08b FUN_14181d08b body=49 status=ok
// SIG undefined FUN_14181d08b(void)

longlong FUN_14181d08b(void)

{
  if (DAT_14cb2af10 == 0) {
    FUN_14073dd9a(&DAT_14cb2af10,&PTR_LAB_14ad209c0);
  }
  return DAT_14cb2af10;
}



// FUNCTION 14181d0bc FUN_14181d0bc body=49 status=ok
// SIG undefined FUN_14181d0bc(void)

longlong FUN_14181d0bc(void)

{
  if (DAT_14cb2b740 == 0) {
    FUN_14086a14e(&DAT_14cb2b740,&PTR_FUN_14ad37388);
  }
  return DAT_14cb2b740;
}



// FUNCTION 14181d0ee FUN_14181d0ee body=141 status=ok
// SIG undefined FUN_14181d0ee(void)

undefined8 * FUN_14181d0ee(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ad40080;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1400ef079(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ad40d80;
  puVar1 = TlsGetValue(DAT_14c7627b4);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7627b4,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181d17c FUN_14181d17c body=140 status=ok
// SIG undefined FUN_14181d17c(void)

undefined8 * FUN_14181d17c(void)

{
  DWORD DVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar3 + 1) = DVar1;
  *puVar3 = &PTR_FUN_14ad40080;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(undefined8 *)((longlong)puVar3 + 0xa4) = 0xffffffff;
  *(undefined1 *)((longlong)puVar3 + 0xac) = 0;
  iVar2 = rand();
  *(int *)(puVar3 + 0x11) = iVar2;
  *(int *)((longlong)puVar3 + 0x8c) = iVar2;
  return puVar3;
}



// FUNCTION 14181d208 FUN_14181d208 body=575 status=ok
// SIG undefined FUN_14181d208(void)

void FUN_14181d208(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_268 [32];
  undefined1 local_248 [408];
  undefined8 *local_b0;
  undefined8 local_a8 [15];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (0 < *(int *)((longlong)param_3 + 0xc)) {
    lVar9 = *param_3;
    if ((void *)(lVar9 + 0x3400) != (void *)0x0) {
      memcpy((void *)(param_1 + 0x20),(void *)(lVar9 + 0x3400),0x198);
      puVar10 = *(undefined8 **)(lVar9 + 0x3598);
      puVar11 = *(undefined8 **)(param_1 + 0x1b8);
      if (puVar11 != puVar10) {
        *(undefined8 **)(param_1 + 0x1b8) = puVar10;
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
          UNLOCK();
        }
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar11 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
      }
      puVar10 = (undefined8 *)(lVar9 + 0x35a0);
      puVar11 = (undefined8 *)(param_1 + 0x1c0);
      for (lVar8 = 0xd; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      goto LAB_14181d28b;
    }
  }
  FUN_144a7ca2c(local_248);
  memcpy((undefined1 *)(param_1 + 0x20),local_248,0x198);
  if ((undefined1 *)(param_1 + 0x20) != local_248) {
    puVar10 = *(undefined8 **)(param_1 + 0x1b8);
    *(undefined8 **)(param_1 + 0x1b8) = local_b0;
    local_b0 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar10 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
  }
  puVar10 = local_a8;
  puVar11 = (undefined8 *)(param_1 + 0x1c0);
  for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  if (local_b0 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_b0 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_b0)(local_b0,1);
    }
  }
LAB_14181d28b:
  lVar9 = *(longlong *)(*param_3 + 0x18);
  lVar8 = *(longlong *)(param_1 + 0x230);
  if (lVar8 != lVar9) {
    *(longlong *)(param_1 + 0x230) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar8;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar12 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar12) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar12 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar12) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
  }
  if (*param_4 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_4 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14181d448 FUN_14181d448 body=76 status=ok
// SIG undefined FUN_14181d448(void)

void FUN_14181d448(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,0x10);
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
  *puVar1 = &PTR_FUN_14ad510e0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 14181d494 FUN_14181d494 body=29 status=ok
// SIG undefined FUN_14181d494(void)

undefined8 FUN_14181d494(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181d4b2 FUN_14181d4b2 body=29 status=ok
// SIG undefined FUN_14181d4b2(void)

undefined8 FUN_14181d4b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181d4d0 FUN_14181d4d0 body=194 status=ok
// SIG undefined FUN_14181d4d0(void)

undefined8 * FUN_14181d4d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad510e0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a388270;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181d592 FUN_14181d592 body=49 status=ok
// SIG undefined FUN_14181d592(void)

longlong FUN_14181d592(void)

{
  if (DAT_14cb35fc0 == 0) {
    FUN_14086a14e(&DAT_14cb35fc0,&PTR_FUN_14ad558c0);
  }
  return DAT_14cb35fc0;
}



// FUNCTION 14181d5c3 FUN_14181d5c3 body=49 status=ok
// SIG undefined FUN_14181d5c3(void)

longlong FUN_14181d5c3(void)

{
  if (DAT_14cb36020 == 0) {
    FUN_14086a14e(&DAT_14cb36020,&PTR_FUN_14ad55d80);
  }
  return DAT_14cb36020;
}



// FUNCTION 14181d5f4 FUN_14181d5f4 body=334 status=ok
// SIG undefined FUN_14181d5f4(void)

void FUN_14181d5f4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14181d666;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14181d666:
    iVar5 = (int)(uVar4 / 0xc);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xc,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14181d742 FUN_14181d742 body=81 status=ok
// SIG undefined FUN_14181d742(void)

void FUN_14181d742(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14181d794 FUN_14181d794 body=102 status=ok
// SIG undefined FUN_14181d794(void)

void FUN_14181d794(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_144830b78(param_2 + 2,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x1c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar1;
  param_2[4] = 0;
  uVar1 = FUN_144830b78(param_2 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 5) = uVar1;
  return;
}



// FUNCTION 14181d7fa FUN_14181d7fa body=142 status=ok
// SIG undefined FUN_14181d7fa(void)

undefined8 FUN_14181d7fa(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    do {
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_3 + 1);
      puVar2[-2] = *param_3;
      if (puVar2 + -2 != param_3) {
        iVar1 = *(int *)(param_3 + 3);
        _Src = (void *)param_3[2];
        *(int *)(puVar2 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar2 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1447a127e(puVar2,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar2,_Src,(longlong)iVar1);
          }
        }
      }
      param_3 = param_3 + 4;
      puVar2 = puVar2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14181d888 FUN_14181d888 body=49 status=ok
// SIG undefined FUN_14181d888(void)

longlong FUN_14181d888(void)

{
  if (DAT_14cb36550 == 0) {
    FUN_14086a14e(&DAT_14cb36550,&PTR_FUN_14ad631e8);
  }
  return DAT_14cb36550;
}



// FUNCTION 14181d8b9 FUN_14181d8b9 body=49 status=ok
// SIG undefined FUN_14181d8b9(void)

longlong FUN_14181d8b9(void)

{
  if (DAT_14cb367c0 == 0) {
    FUN_14086a14e(&DAT_14cb367c0,&PTR_FUN_14ad67250);
  }
  return DAT_14cb367c0;
}



// FUNCTION 14181d8ea FUN_14181d8ea body=49 status=ok
// SIG undefined FUN_14181d8ea(void)

longlong FUN_14181d8ea(void)

{
  if (DAT_14cb367f0 == 0) {
    FUN_14086a14e(&DAT_14cb367f0,&PTR_FUN_14ad674b0);
  }
  return DAT_14cb367f0;
}



// FUNCTION 14181d921 FUN_14181d921 body=49 status=ok
// SIG undefined FUN_14181d921(void)

longlong FUN_14181d921(void)

{
  if (DAT_14cb36900 == 0) {
    FUN_14073dd9a(&DAT_14cb36900,&PTR_LAB_14ad6d508);
  }
  return DAT_14cb36900;
}



// FUNCTION 14181d952 FUN_14181d952 body=155 status=ok
// SIG undefined FUN_14181d952(void)

uint * FUN_14181d952(uint *param_1)

{
  uint uVar1;
  
  *param_1 = *param_1 & 0xffffff80 | 7;
  *(undefined2 *)(param_1 + 1) = 0x200;
  *(undefined ***)(param_1 + 2) = &PTR_FUN_14ad6aa90;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = FUN_144830b78(param_1 + 7,&DAT_14cb42160);
  param_1[7] = uVar1;
  *(undefined ***)(param_1 + 2) = &PTR_FUN_14ad6ad70;
  param_1[4] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  *(undefined ***)(param_1 + 0xc) = &PTR_FUN_14ad6aa90;
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar1 = FUN_144830b78(param_1 + 0x11,&DAT_14cb42160);
  param_1[0x11] = uVar1;
  *(undefined ***)(param_1 + 0xc) = &PTR_FUN_14ad6ad70;
  param_1[0xe] = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14181d9ee FUN_14181d9ee body=269 status=ok
// SIG undefined FUN_14181d9ee(void)

void FUN_14181d9ee(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14181dafb FUN_14181dafb body=168 status=ok
// SIG undefined FUN_14181dafb(void)

void FUN_14181dafb(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14ad813e0;
  puVar1[7] = 1;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14ad87810;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar3) && (puVar1[5] = puVar3, puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014181dba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 14181dba4 FUN_14181dba4 body=269 status=ok
// SIG undefined FUN_14181dba4(void)

void FUN_14181dba4(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1c);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181dcb2 FUN_14181dcb2 body=824 status=ok
// SIG undefined FUN_14181dcb2(void)

void FUN_14181dcb2(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb37f68) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14ad88b10;
  }
  else if (lVar1 == DAT_14cb37f70) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14ad88b80;
  }
  else {
    if (lVar1 != DAT_14cb37f78) {
      if (lVar1 != DAT_14cb37f80) goto LAB_14181ddb7;
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      puVar3 = local_30;
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      *local_30 = &PTR_FUN_14ad88c60;
      local_30[3] = param_1;
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      if ((int)param_4[1] == 0) {
LAB_14181dd90:
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar2 = (undefined8 *)*param_4;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          FUN_1446efa72(param_4,0,0,0x10);
          *(undefined4 *)(param_4 + 1) = 0;
          goto LAB_14181dd90;
        }
      }
      *param_4 = (longlong)puVar3;
      *(undefined4 *)(param_4 + 1) = 2;
      if (local_28 != 0) {
        if (local_30 == (undefined8 *)0x0) goto LAB_14181ddb7;
        (**(code **)*local_30)(local_30,0);
        FUN_1446efa72(&local_30,0,0,0x10);
        local_28 = 0;
      }
      if (local_30 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14181ddb7;
    }
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14ad88bf0;
  }
  local_28 = 2;
  *local_30 = ppuVar4;
  local_30[3] = param_1;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_14181ddb7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181dfeb FUN_14181dfeb body=116 status=ok
// SIG undefined FUN_14181dfeb(void)

void FUN_14181dfeb(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14ad81900;
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14ad87880;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar3) && (puVar1[5] = puVar3, puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014181e05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 14181e060 FUN_14181e060 body=269 status=ok
// SIG undefined FUN_14181e060(void)

void FUN_14181e060(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181e16e FUN_14181e16e body=179 status=ok
// SIG undefined FUN_14181e16e(void)

void FUN_14181e16e(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  FUN_140579530();
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb38b48;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x10;
  return;
}



// FUNCTION 14181e221 FUN_14181e221 body=512 status=ok
// SIG undefined FUN_14181e221(void)

void FUN_14181e221(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14ad82c40;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  uVar3 = FUN_144830b78(puVar1 + 0xe,&DAT_14cb41380);
  *(undefined4 *)(puVar1 + 0xe) = uVar3;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  if (DAT_14c927740 == (code *)0x0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_146856450;
    local_70 = FUN_1427b121c;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000021;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  local_48 = DAT_14c927740;
  if ((DAT_14c927740 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar3 = FUN_144830b78(local_34);
  *(undefined4 *)(puVar1 + 0xe) = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14ad87c70;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x80;
  *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar4) && (puVar1[5] = puVar4, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181e422 FUN_14181e422 body=1108 status=ok
// SIG undefined FUN_14181e422(void)

undefined8 FUN_14181e422(undefined8 param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
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
  double dVar15;
  double dVar16;
  undefined1 auStack_2b8 [32];
  undefined8 local_298 [16];
  undefined1 local_218 [128];
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
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
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar1 = param_2[2];
  local_108 = param_2[8];
  local_f8 = param_2[9];
  dVar5 = param_2[10];
  dVar16 = dVar4 + dVar4;
  dVar14 = dVar1 + dVar1;
  dVar13 = dVar3 * (dVar3 + dVar3);
  local_118 = (1.0 - (dVar1 * dVar14 + dVar4 * dVar16)) * local_108;
  dStack_f0 = (1.0 - (dVar1 * dVar14 + dVar13)) * local_f8;
  local_c8 = (1.0 - (dVar13 + dVar4 * dVar16)) * dVar5;
  dVar13 = param_2[3];
  dVar1 = dVar14 * dVar13;
  dVar2 = (dVar3 + dVar3) * param_2[3];
  dVar13 = dVar16 * dVar13;
  dStack_110 = (dVar16 * dVar3 + dVar1) * local_108;
  local_e8 = (dVar14 * dVar4 + dVar2) * local_f8;
  local_108 = (*param_2 * dVar14 - dVar13) * local_108;
  local_f8 = (dVar16 * dVar3 - dVar1) * local_f8;
  dVar1 = (dVar14 * dVar4 - dVar2) * dVar5;
  uStack_100 = 0;
  uStack_e0 = 0;
  local_d8._8_4_ = SUB84(dVar1,0);
  local_d8._0_8_ = (dVar13 + *param_2 * dVar14) * dVar5;
  local_d8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_c0 = 0;
  local_b8 = param_2[4];
  dStack_b0 = param_2[5];
  local_a8 = param_2[6];
  uStack_a0 = 0x3ff0000000000000;
  dVar5 = *param_3;
  dVar16 = param_3[1];
  dVar13 = param_3[2];
  local_188 = param_3[8];
  dVar11 = param_3[9];
  dVar12 = param_3[10];
  dVar4 = dVar16 + dVar16;
  dVar1 = dVar13 + dVar13;
  dVar14 = dVar5 * (dVar5 + dVar5);
  dVar9 = (1.0 - (dVar13 * dVar1 + dVar16 * dVar4)) * local_188;
  dVar10 = (1.0 - (dVar13 * dVar1 + dVar14)) * dVar11;
  local_148 = (1.0 - (dVar14 + dVar16 * dVar4)) * dVar12;
  dVar13 = param_3[3];
  dVar2 = dVar1 * dVar13;
  dVar3 = (dVar5 + dVar5) * param_3[3];
  dVar13 = dVar4 * dVar13;
  dVar14 = (dVar4 * dVar5 + dVar2) * local_188;
  local_168 = (dVar1 * dVar16 + dVar3) * dVar11;
  dVar15 = (dVar13 + *param_3 * dVar1) * dVar12;
  local_188 = (*param_3 * dVar1 - dVar13) * local_188;
  dVar11 = (dVar4 * dVar5 - dVar2) * dVar11;
  dVar12 = (dVar1 * dVar16 - dVar3) * dVar12;
  local_198._8_4_ = SUB84(dVar14,0);
  local_198._0_8_ = dVar9;
  local_198._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  uStack_180 = 0;
  local_178._8_4_ = SUB84(dVar10,0);
  local_178._0_8_ = dVar11;
  local_178._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  uStack_160 = 0;
  local_158._8_4_ = SUB84(dVar12,0);
  local_158._0_8_ = dVar15;
  local_158._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  uStack_140 = 0;
  local_138 = param_3[4];
  dStack_130 = param_3[5];
  local_128 = param_3[6];
  uStack_120 = 0x3ff0000000000000;
  if ((((((9.99999993922529e-09 < ABS(dVar9)) || (9.99999993922529e-09 < ABS(dVar14))) ||
        (9.99999993922529e-09 < ABS(local_188))) ||
       ((9.99999993922529e-09 < ABS(dVar11) || (9.99999993922529e-09 < ABS(dVar10))))) ||
      ((9.99999993922529e-09 < ABS(local_168) ||
       ((9.99999993922529e-09 < ABS(dVar15) || (9.99999993922529e-09 < ABS(dVar12))))))) ||
     (9.99999993922529e-09 < ABS(local_148))) {
    FUN_14007522e(local_298,local_198);
  }
  else {
    puVar7 = &DAT_14c846400;
    puVar8 = local_298;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  FUN_1447fea8d(local_218,&local_118,local_298);
  FUN_1448ac920(param_1,local_218);
  if ((local_90 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14181e878 FUN_14181e878 body=226 status=ok
// SIG undefined FUN_14181e878(void)

void FUN_14181e878(longlong param_1,undefined8 param_2)

{
  FUN_140661c88(param_1 + 0x10,param_2,L"FNDIPhysicsAssetBuffer",0x10,900,1,1,0);
  FUN_140661c88(param_1 + 0x28,param_2,L"FNDIPhysicsAssetBuffer",0x10,900,1,1,0);
  FUN_140661c88(param_1 + 0x40,param_2,L"FNDIPhysicsAssetBuffer",0x10,100,1,1,0);
  FUN_140661c88(param_1 + 0x58,param_2,L"FNDIPhysicsAssetBuffer",4,100,0x1c,1,0);
  return;
}



// FUNCTION 14181e95a FUN_14181e95a body=52 status=ok
// SIG undefined FUN_14181e95a(void)

void FUN_14181e95a(longlong param_1)

{
  FUN_14011fb0c(param_1 + 0x10);
  FUN_14011fb0c(param_1 + 0x28);
  FUN_14011fb0c(param_1 + 0x40);
  FUN_14011fb0c(param_1 + 0x58);
  return;
}



// FUNCTION 14181e98e FUN_14181e98e body=509 status=ok
// SIG undefined FUN_14181e98e(void)

ulonglong FUN_14181e98e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  size_t unaff_RBX;
  ulonglong uVar8;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar8 = 0;
  }
  else {
    if (param_2 == param_1) {
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_2 + 0x50) = uVar6;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xa0);
      pvVar2 = *(void **)(param_1 + 0x98);
      *(int *)(param_2 + 0xa0) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0xa4) == 0) {
        *(undefined4 *)(param_2 + 0xa4) = 0;
      }
      else {
        FUN_1480b7630((undefined8 *)(param_2 + 0x98),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x98),pvVar2,(longlong)iVar1 << 3);
        }
      }
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      uVar4 = *(undefined4 *)(param_1 + 0x50);
      uVar5 = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
      *(undefined4 *)(param_2 + 0x50) = uVar4;
      *(undefined4 *)(param_2 + 0x54) = uVar5;
      iVar1 = *(int *)(param_1 + 0x60);
      pvVar2 = *(void **)(param_1 + 0x58);
      *(int *)(param_2 + 0x60) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 100) == 0) {
        *(undefined4 *)(param_2 + 100) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_2 + 0x58),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x58),pvVar2,(longlong)iVar1 * 2);
        }
      }
      iVar1 = *(int *)(param_1 + 0x90);
      unaff_RBX = (size_t)iVar1;
      pvVar2 = *(void **)(param_1 + 0x88);
      *(int *)(param_2 + 0x90) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0x94) == 0) {
        *(undefined4 *)(param_2 + 0x94) = 0;
      }
      else {
        FUN_140adb4c2((undefined8 *)(param_2 + 0x88),iVar1);
        if (iVar1 != 0) {
          unaff_RBX = unaff_RBX << 3;
          memcpy(*(void **)(param_2 + 0x88),pvVar2,unaff_RBX);
        }
      }
    }
    lVar7 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = *(longlong *)(param_1 + 0x38);
      }
    }
    *(longlong *)(param_2 + 0x38) = lVar7;
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x70);
    uVar8 = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (param_2 != param_1) {
      iVar1 = *(int *)(param_1 + 0x80);
      pvVar2 = *(void **)(param_1 + 0x78);
      *(int *)(param_2 + 0x80) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0x84) == 0) {
        *(undefined4 *)(param_2 + 0x84) = 0;
      }
      else {
        FUN_1447a127e((undefined8 *)(param_2 + 0x78),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x78),pvVar2,(longlong)iVar1);
        }
      }
    }
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14181eb8c FUN_14181eb8c body=275 status=ok
// SIG undefined FUN_14181eb8c(void)

void FUN_14181eb8c(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181eca0 FUN_14181eca0 body=641 status=ok
// SIG undefined FUN_14181eca0(void)

void FUN_14181eca0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
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
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14ad86b00;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined2 *)(puVar1 + 0x11) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x8a) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
  puVar1[0x12] = 0;
  uVar3 = FUN_144830b78(puVar1 + 0x13,&DAT_14cb41380);
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  uVar3 = FUN_144830b78(puVar1 + 0x17,&DAT_14cb41380);
  *(undefined4 *)(puVar1 + 0x17) = uVar3;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0xffffffff;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14ad88970;
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
  puVar4[10] = 0;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar4) && (puVar1[5] = puVar4, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  uVar3 = FUN_144830b78(&local_58,&DAT_14cb420d0);
  *(undefined4 *)(puVar1 + 0x13) = uVar3;
  if (DAT_14c927740 == (code *)0x0) {
    local_58 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_146856450;
    local_80 = FUN_1427b121c;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000021;
    local_a0 = 8;
    local_a8 = 0x28;
    local_70 = &local_58;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  local_58 = DAT_14c927740;
  if ((DAT_14c927740 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_50 = 1;
  local_4e = 0;
  local_4c = 0xffffffff;
  uVar3 = FUN_144830b78(local_44);
  *(undefined4 *)(puVar1 + 0x17) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181ef28 FUN_14181ef28 body=377 status=ok
// SIG undefined FUN_14181ef28(void)

void FUN_14181ef28(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  plVar4 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar4 + 2) = (int)plVar4[2] + 0xfU & 0xfffffff0;
  FUN_1402e30bc();
  iVar1 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar3 = plVar4[2];
  *(undefined2 **)(lVar2 + lVar5) = puVar6;
  *(undefined2 **)(lVar2 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar5) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar5) = &DAT_14cb390c8;
  *(int *)(plVar4 + 2) = (int)plVar4[2] + 0x240;
  lVar2 = FUN_1401ab454();
  lVar3 = (longlong)(int)((longlong *)param_2[1])[1];
  if (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)param_2[1] + lVar5) == lVar2) goto LAB_14181efec;
      lVar5 = lVar5 + 0x10;
    } while (lVar3 * 0x10 != lVar5);
  }
  plVar4 = (longlong *)FUN_1409683e4();
  *plVar4 = lVar2;
  *(uint *)(plVar4 + 1) = *(int *)(param_2[3] + 0x10) + 0xfU & 0xfffffff0;
  FUN_140968440(param_2[3],lVar2);
LAB_14181efec:
  lVar2 = FUN_1401d6c66();
  lVar3 = (longlong)(int)((longlong *)param_2[1])[1];
  if (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)param_2[1] + lVar5) == lVar2) {
        return;
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar3 * 0x10 != lVar5);
  }
  plVar4 = (longlong *)FUN_1409683e4();
  *plVar4 = lVar2;
  *(uint *)(plVar4 + 1) = *(int *)(param_2[3] + 0x10) + 0xfU & 0xfffffff0;
  FUN_140968440(param_2[3],lVar2,0);
  return;
}



// FUNCTION 14181f0a2 FUN_14181f0a2 body=40 status=ok
// SIG undefined FUN_14181f0a2(void)

undefined8 FUN_14181f0a2(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181f0ca FUN_14181f0ca body=40 status=ok
// SIG undefined FUN_14181f0ca(void)

undefined8 FUN_14181f0ca(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181f0f2 FUN_14181f0f2 body=119 status=ok
// SIG undefined FUN_14181f0f2(void)

undefined8 * FUN_14181f0f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad82c40;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181f16a FUN_14181f16a body=142 status=ok
// SIG undefined FUN_14181f16a(void)

undefined8 * FUN_14181f16a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad86b00;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181f1f8 FUN_14181f1f8 body=173 status=ok
// SIG undefined FUN_14181f1f8(void)

undefined8 * FUN_14181f1f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad87810;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140e9549c(param_1 + 2,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(param_1 + 4,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181f2a6 FUN_14181f2a6 body=29 status=ok
// SIG undefined FUN_14181f2a6(void)

undefined8 FUN_14181f2a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181f2c4 FUN_14181f2c4 body=399 status=ok
// SIG undefined FUN_14181f2c4(void)

undefined8 * FUN_14181f2c4(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ad87c10;
  if (param_1[0xc] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xc] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xb] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xb] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[9] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[9] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[8] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[8] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[6] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181f454 FUN_14181f454 body=171 status=ok
// SIG undefined FUN_14181f454(void)

undefined8 * FUN_14181f454(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad87c70;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1480b1fa2(param_1 + 2);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(param_1 + 4,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181f500 FUN_14181f500 body=212 status=ok
// SIG undefined FUN_14181f500(void)

void FUN_14181f500(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 14181f5d4 FUN_14181f5d4 body=96 status=ok
// SIG undefined FUN_14181f5d4(void)

void FUN_14181f5d4(longlong param_1,int param_2)

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



// FUNCTION 14181f634 FUN_14181f634 body=48 status=ok
// SIG undefined FUN_14181f634(void)

void FUN_14181f634(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 14181f664 FUN_14181f664 body=353 status=ok
// SIG undefined FUN_14181f664(void)

void FUN_14181f664(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14181f6e9;
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
LAB_14181f6e9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14181f7c6 FUN_14181f7c6 body=353 status=ok
// SIG undefined FUN_14181f7c6(void)

void FUN_14181f7c6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14181f84b;
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
LAB_14181f84b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14181f928 FUN_14181f928 body=301 status=ok
// SIG undefined FUN_14181f928(void)

void FUN_14181f928(ulonglong *param_1,uint param_2,undefined8 param_3,code *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = (uint)param_1[1];
  if ((int)uVar1 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
    uVar4 = (ulonglong)(int)uVar3;
  }
  else {
    uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = uVar4 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    param_4 = *(code **)(*DAT_14c872d28 + 0x60);
    if (param_4 != (code *)&LAB_14489e5c8) goto LAB_14181fa2a;
    if (uVar2 < 0x7ff1) {
      uVar2 = (ulonglong)
              (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]];
    }
    else {
      uVar4 = 0x10;
      if (0x10 < DAT_14c841df8) {
        uVar4 = (ulonglong)DAT_14c841df8;
      }
      uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
    }
  }
  do {
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 4)) {
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    uVar3 = (uint)uVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
    uVar2 = *param_1;
    if ((uVar2 & 1) == 0) {
      if ((uVar2 == 0) && ((int)uVar3 < 1)) {
        return;
      }
      if (-1 < (int)uVar3) {
        uVar4 = FUN_14001fdce(uVar2,uVar4 << 4,4);
        *param_1 = uVar4;
        return;
      }
    }
    else if (uVar3 <= param_2) {
      return;
    }
    FUN_1467ac767(uVar4,0x10);
LAB_14181fa2a:
    uVar2 = (*param_4)();
  } while( true );
}



// FUNCTION 14181fa56 FUN_14181fa56 body=4861 status=ok
// SIG undefined FUN_14181fa56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14181fa56(char *param_1)

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
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined8 *puVar33;
  char cVar34;
  undefined8 *puVar35;
  int iVar36;
  int *piVar37;
  int iVar38;
  uint uVar39;
  int *piVar40;
  ulonglong uVar41;
  uint uVar42;
  ulonglong uVar43;
  int iVar44;
  ulonglong uVar45;
  uint uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  float fVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar58;
  undefined1 auVar57 [16];
  double dVar59;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  double dVar64;
  undefined1 auVar65 [12];
  undefined1 in_XMM4 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  double dVar78;
  float fVar88;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar86;
  float fVar87;
  float fVar89;
  float fVar90;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auStack_398 [44];
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  undefined1 local_358 [8];
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 local_338 [16];
  undefined1 local_328 [8];
  float fStack_320;
  float fStack_31c;
  undefined1 local_318 [16];
  undefined1 local_308 [8];
  float fStack_300;
  float fStack_2fc;
  undefined1 local_2f8 [16];
  undefined8 local_2e8;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  longlong local_2c0;
  undefined4 local_2b8;
  char local_2b4;
  float *local_2b0;
  int local_2a8;
  float *local_2a0;
  int local_298;
  float *local_290;
  int local_288;
  float *local_280;
  int local_278;
  float *local_270;
  int local_268;
  float *local_260;
  int local_258;
  float *local_250;
  int local_248;
  float *local_240;
  int local_238;
  float *local_230;
  int local_228;
  float *local_220;
  int local_218;
  float *local_210;
  int local_208;
  float *local_200;
  int local_1f8;
  float *local_1f0;
  int local_1e8;
  float *local_1e0;
  int local_1d8;
  float *local_1d0;
  int local_1c8;
  float *local_1c0 [2];
  int local_1b0;
  float *local_1a8;
  int local_198;
  float *local_190;
  int local_180;
  int *local_178;
  undefined8 uStack_170;
  int local_168;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  int local_130;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar35 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar33 = local_150;
  puVar23 = local_150;
  if (local_150 != puVar35) {
    if (puVar35 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar35 + 1) = *(int *)(puVar35 + 1) + 1;
      UNLOCK();
    }
    puVar23 = puVar35;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar37 = (int *)(local_150 + 1);
      *piVar37 = *piVar37 + -1;
      UNLOCK();
      if (*piVar37 == 0) {
        puVar23 = (undefined8 *)*local_150;
        local_150 = puVar35;
        (*(code *)*puVar23)(puVar33,1);
        puVar23 = local_150;
      }
    }
  }
  local_150 = puVar23;
  local_178 = (int *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  FUN_144a98d08(&local_178,param_1);
  FUN_1448a432c(local_1c0,param_1);
  FUN_144a76c20(&local_1f0,param_1);
  FUN_144a76c20(&local_1e0,param_1);
  FUN_144a76c20(&local_1d0,param_1);
  FUN_144a76c20(&local_220,param_1);
  FUN_144a76c20(&local_210,param_1);
  FUN_144a76c20(&local_200,param_1);
  FUN_144a76c20(&local_250,param_1);
  FUN_144a76c20(&local_240,param_1);
  FUN_144a76c20(&local_230,param_1);
  FUN_144a76c20(&local_280,param_1);
  FUN_144a76c20(&local_270,param_1);
  FUN_144a76c20(&local_260,param_1);
  FUN_144a76c20(&local_2b0,param_1);
  FUN_144a76c20(&local_2a0,param_1);
  FUN_144a76c20(&local_290,param_1);
  if (local_150 == (undefined8 *)0x0) {
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b4 = '\0';
  }
  else {
    FUN_1461c3a4c(local_150 + 0x33,&local_2c0);
    if (((((local_150 != (undefined8 *)0x0) &&
          (FUN_1461c3a4c(local_150 + 0x33,local_138), 2 < local_130)) &&
         (local_150 != (undefined8 *)0x0)) &&
        (((local_150[0x28] != 0 &&
          (cVar34 = FUN_1461c3a34(local_150 + 0x23), puVar33 = local_150, cVar34 != '\0')) &&
         ((local_150 != (undefined8 *)0x0 &&
          ((0 < *(int *)((longlong)local_150 + 0x14c) && (local_150[0x1e] != 0)))))))) &&
       (((longlong *)local_150[0x1a] != (longlong *)0x0 &&
        ((((local_150[0x1c] != 0 &&
           (cVar34 = (**(code **)(*(longlong *)local_150[0x1a] + 0x58))(), cVar34 != '\0')) &&
          (cVar34 = (**(code **)(*(longlong *)puVar33[0x1c] + 0x58))(), cVar34 != '\0')) &&
         (0 < *(int *)((longlong)local_150 + 0x10c))))))) {
      piVar37 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar37 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar37) {
        iVar36 = local_130 / 3 + -1;
        iVar44 = 0;
        do {
          piVar37 = local_178 + local_168;
          iVar38 = *local_178;
          if (iVar36 <= *local_178) {
            iVar38 = iVar36;
          }
          if (iVar38 < 1) {
            iVar38 = 0;
          }
          pfVar1 = local_190 + local_180;
          local_35c = *local_190;
          pfVar2 = local_1a8 + local_198;
          fVar19 = *local_1a8;
          pfVar3 = local_1c0[0] + local_1b0;
          uVar41 = (ulonglong)(iVar38 * 3 + 2);
          uVar43 = (ulonglong)(uint)(iVar38 * 3);
          if (local_2b4 == '\x01') {
            uVar42 = *(uint *)(local_2c0 + uVar41 * 4);
            uVar46 = *(uint *)(local_2c0 + uVar43 * 4);
            uVar39 = *(uint *)(local_2c0 + 4 + uVar43 * 4);
          }
          else {
            uVar42 = (uint)*(ushort *)(local_2c0 + uVar41 * 2);
            uVar39 = (uint)*(ushort *)(local_2c0 + 2 + uVar43 * 2);
            uVar46 = (uint)*(ushort *)(local_2c0 + uVar43 * 2);
          }
          local_364 = *local_1c0[0];
          lVar21 = local_150[0x28];
          iVar20 = *(int *)(local_150 + 0x29);
          uVar49 = (ulonglong)(uVar46 * iVar20);
          uVar47 = (ulonglong)(uVar39 * iVar20);
          uVar45 = (ulonglong)(uVar42 * iVar20);
          uVar51 = (ulonglong)(iVar38 * 3 + 1);
          if (local_2b4 == '\0') {
            uVar42 = (uint)*(ushort *)(local_2c0 + uVar41 * 2);
            uVar46 = (uint)*(ushort *)(local_2c0 + uVar51 * 2);
            uVar39 = (uint)*(ushort *)(local_2c0 + uVar43 * 2);
          }
          else {
            uVar42 = *(uint *)(local_2c0 + uVar41 * 4);
            uVar46 = *(uint *)(local_2c0 + uVar51 * 4);
            uVar39 = *(uint *)(local_2c0 + uVar43 * 4);
          }
          cVar34 = *(char *)((longlong)local_150 + 0x111);
          lVar22 = local_150[0x1e];
          fVar52 = (float)DAT_14a8624f0;
          fVar58 = DAT_14a8624f0._4_4_;
          fStack_2e0 = DAT_14a8624f0._8_4_;
          fStack_2dc = DAT_14a8624f0._12_4_;
          if (cVar34 == '\x01') {
            auVar54 = pmovsxwd(ZEXT416((uint)local_35c),
                               *(undefined8 *)(lVar22 + (ulonglong)uVar39 * 0x10));
            auVar81._0_4_ = (float)auVar54._0_4_ * fVar52;
            auVar81._4_4_ = (float)auVar54._4_4_ * fVar58;
            auVar81._8_4_ = (float)auVar54._8_4_ * fStack_2e0;
            auVar81._12_4_ = (float)auVar54._12_4_ * fStack_2dc;
            auVar54._4_12_ = auVar81._4_12_;
            auVar54._0_4_ = auVar81._0_4_ * local_364;
            auVar82 = pmovsxwd(ZEXT416((uint)local_364),
                               *(undefined8 *)(lVar22 + (ulonglong)uVar46 * 0x10));
            fStack_2d4 = (float)auVar82._4_4_ * fVar58;
            fStack_2d0 = (float)auVar82._8_4_ * fStack_2e0;
            fStack_2cc = (float)auVar82._12_4_ * fStack_2dc;
            auVar29._4_8_ = auVar82._8_8_;
            auVar29._0_4_ = fStack_2d4;
            auVar83._0_8_ = auVar29._0_8_ << 0x20;
            auVar83._8_4_ = fStack_2d0;
            auVar83._12_4_ = fStack_2cc;
            auVar84._12_4_ = fStack_2cc;
            auVar84._8_4_ = fStack_2d0;
            auVar84._0_8_ = auVar83._8_8_;
            auVar80._4_12_ = auVar84._4_12_;
            auVar80._0_4_ = fStack_2d0 * fVar19 + auVar81._8_4_ * local_364;
            local_328._4_4_ = fStack_2d4;
            local_328._0_4_ = fStack_2d4 * fVar19 + auVar81._4_4_ * local_364;
            fStack_320 = fStack_2cc;
            fStack_31c = fStack_2cc;
            local_2d8 = (float)auVar82._0_4_ * fVar52 * fVar19 + auVar54._0_4_;
            auVar54 = pmovsxwd(auVar54,*(undefined8 *)(lVar22 + (ulonglong)uVar42 * 0x10));
            local_358._4_4_ = (float)auVar54._4_4_ * fVar58;
            local_358._0_4_ = (float)auVar54._0_4_ * fVar52;
            fStack_350 = (float)auVar54._8_4_ * fStack_2e0;
            fStack_34c = (float)auVar54._12_4_ * fStack_2dc;
            auVar54 = _DAT_14a8624f0;
            local_318 = auVar80;
          }
          else {
            auVar54 = pmovsxbd(ZEXT416((uint)local_35c),
                               *(undefined4 *)(lVar22 + (ulonglong)uVar39 * 8));
            auVar82._0_4_ = (float)auVar54._0_4_ * 0.007874016;
            auVar82._4_4_ = (float)auVar54._4_4_ * 0.007874016;
            auVar82._8_4_ = (float)auVar54._8_4_ * 0.007874016;
            auVar82._12_4_ = (float)auVar54._12_4_ * 0.0;
            auVar54 = pmovsxbd(in_XMM4,*(undefined4 *)(lVar22 + (ulonglong)uVar46 * 8));
            auVar55._4_12_ = auVar82._4_12_;
            auVar55._0_4_ = auVar82._0_4_ * local_364;
            fStack_2d4 = (float)auVar54._4_4_ * 0.007874016;
            fStack_2d0 = (float)auVar54._8_4_ * 0.007874016;
            fStack_2cc = (float)auVar54._12_4_ * 0.0;
            auVar27._4_8_ = auVar54._8_8_;
            auVar27._0_4_ = fStack_2d4;
            auVar66._0_8_ = auVar27._0_8_ << 0x20;
            auVar66._8_4_ = fStack_2d0;
            auVar66._12_4_ = fStack_2cc;
            auVar67._12_4_ = fStack_2cc;
            auVar67._8_4_ = fStack_2d0;
            auVar67._0_8_ = auVar66._8_8_;
            auVar79._4_4_ = fStack_2d4;
            auVar79._0_4_ = fStack_2d4;
            auVar79._8_4_ = fStack_2cc;
            auVar79._12_4_ = fStack_2cc;
            local_318._4_12_ = auVar67._4_12_;
            local_318._0_4_ = fStack_2d0 * fVar19 + auVar82._8_4_ * local_364;
            auVar80._4_12_ = auVar79._4_12_;
            auVar80._0_4_ = fStack_2d4 * fVar19 + auVar82._4_4_ * local_364;
            local_2d8 = (float)auVar54._0_4_ * 0.007874016 * fVar19 + auVar55._0_4_;
            auVar54 = pmovsxbd(auVar55,*(undefined4 *)(lVar22 + (ulonglong)uVar42 * 8));
            local_358._0_4_ = (float)auVar54._0_4_ * 0.007874016;
            local_358._4_4_ = (float)auVar54._4_4_ * 0.007874016;
            fStack_350 = (float)auVar54._8_4_ * 0.007874016;
            fStack_34c = (float)auVar54._12_4_ * 0.0;
            auVar54 = _local_358;
            _local_328 = auVar80;
          }
          if (local_2b4 == '\0') {
            uVar42 = (uint)*(ushort *)(local_2c0 + uVar41 * 2);
            uVar46 = (uint)*(ushort *)(local_2c0 + uVar51 * 2);
            uVar39 = (uint)*(ushort *)(local_2c0 + uVar43 * 2);
          }
          else {
            uVar42 = *(uint *)(local_2c0 + uVar41 * 4);
            uVar46 = *(uint *)(local_2c0 + uVar51 * 4);
            uVar39 = *(uint *)(local_2c0 + uVar43 * 4);
          }
          uVar50 = (ulonglong)uVar39;
          uVar48 = (ulonglong)uVar46;
          if (cVar34 == '\0') {
            auVar54 = pmovsxbd(auVar54,*(undefined4 *)(lVar22 + uVar50 * 8));
            dVar59 = (double)((float)auVar54._0_4_ * 0.007874016);
            dVar64 = (double)((float)auVar54._8_4_ * 0.007874016);
            auVar81 = pmovsxbd(auVar80,*(undefined4 *)(lVar22 + 4 + uVar50 * 8));
            dVar53 = (double)((float)auVar54._4_4_ * 0.007874016);
            auVar68._12_4_ = (float)auVar81._12_4_ * 0.007874016;
            dVar24 = (double)((float)auVar81._0_4_ * 0.007874016);
            auVar68._4_4_ = auVar68._12_4_;
            auVar68._0_4_ = auVar68._12_4_;
            auVar68._8_4_ = auVar68._12_4_;
            auVar69._8_8_ = auVar68._8_8_;
            auVar69._0_8_ = (double)auVar68._12_4_;
            dVar78 = (double)((float)auVar81._8_4_ * 0.007874016);
            dVar26 = (double)((float)auVar81._4_4_ * 0.007874016);
            auVar56._0_8_ = dVar53 * dVar78;
            auVar56._8_8_ = 0;
            dVar25 = (dVar24 * dVar53 - dVar59 * dVar26) * auVar69._0_8_;
            dVar53 = (dVar78 * dVar59 - dVar64 * dVar24) * auVar69._0_8_;
            dVar24 = (dVar26 * dVar64 - auVar56._0_8_) * auVar69._0_8_;
            auVar54 = pmovsxbd(auVar56,*(undefined4 *)(lVar22 + uVar48 * 8));
            fVar52 = (float)auVar54._0_4_ * 0.007874016;
            fVar58 = (float)auVar54._4_4_ * 0.007874016;
            fStack_2e0 = (float)auVar54._8_4_ * 0.007874016;
            fStack_2dc = (float)auVar54._12_4_ * 0.0;
            auVar32._4_4_ = fStack_2e0;
            auVar32._0_4_ = fVar58;
            auVar32._8_4_ = fStack_2dc;
            local_2e8 = auVar32._4_8_;
            local_2f8._4_4_ = fVar58;
            local_2f8._0_4_ = fVar58;
            local_2f8._8_4_ = fStack_2dc;
            local_2f8._12_4_ = fStack_2dc;
            auVar54 = pmovsxbd(local_2f8,*(undefined4 *)(lVar22 + 4 + uVar48 * 8));
            fVar58 = (float)auVar54._0_4_ * 0.007874016;
            fVar61 = (float)auVar54._4_4_ * 0.007874016;
            fVar62 = (float)auVar54._8_4_ * 0.007874016;
            fVar63 = (float)auVar54._12_4_ * 0.007874016;
          }
          else {
            auVar54 = pmovsxwd(auVar54,*(undefined8 *)(lVar22 + uVar50 * 0x10));
            fVar61 = (float)auVar54._4_4_ * fVar58;
            fVar62 = (float)auVar54._12_4_ * fStack_2dc;
            auVar85._4_4_ = fVar61;
            auVar85._0_4_ = fVar61;
            auVar85._8_4_ = fVar62;
            auVar85._12_4_ = fVar62;
            dVar59 = (double)((float)auVar54._0_4_ * fVar52);
            dVar64 = (double)((float)auVar54._8_4_ * fStack_2e0);
            auVar54 = pmovsxwd(auVar85,*(undefined8 *)(lVar22 + 8 + uVar50 * 0x10));
            dVar25 = (double)((float)auVar54._0_4_ * 3.051851e-05);
            dVar24 = (double)((float)auVar54._12_4_ * 3.051851e-05);
            dVar53 = (double)((float)auVar54._8_4_ * 3.051851e-05);
            dVar26 = (double)((float)auVar54._4_4_ * 3.051851e-05);
            auVar69._0_8_ = dVar64 * dVar25;
            auVar69._8_8_ = 0;
            auVar57._0_8_ = (double)fVar61 * dVar53;
            auVar57._8_8_ = 0;
            dVar25 = (dVar25 * (double)fVar61 - dVar59 * dVar26) * dVar24;
            dVar53 = (dVar53 * dVar59 - auVar69._0_8_) * dVar24;
            dVar24 = (dVar26 * dVar64 - auVar57._0_8_) * dVar24;
            auVar54 = pmovsxwd(auVar57,*(undefined8 *)(lVar22 + uVar48 * 0x10));
            fVar52 = (float)auVar54._0_4_ * fVar52;
            fVar58 = (float)auVar54._4_4_ * fVar58;
            fStack_2e0 = (float)auVar54._8_4_ * fStack_2e0;
            fStack_2dc = (float)auVar54._12_4_ * fStack_2dc;
            auVar30._4_8_ = DAT_14a8624f0._8_8_;
            auVar30._0_4_ = fVar58;
            auVar60._0_8_ = auVar30._0_8_ << 0x20;
            auVar60._8_4_ = fStack_2e0;
            auVar60._12_4_ = fStack_2dc;
            local_2e8 = auVar60._8_8_;
            local_2f8._4_4_ = fVar58;
            local_2f8._0_4_ = fVar58;
            local_2f8._8_4_ = fStack_2dc;
            local_2f8._12_4_ = fStack_2dc;
            auVar54 = pmovsxwd(local_2f8,*(undefined8 *)(lVar22 + 8 + uVar48 * 0x10));
            fVar58 = (float)auVar54._0_4_ * 3.051851e-05;
            fVar61 = (float)auVar54._4_4_ * 3.051851e-05;
            fVar62 = (float)auVar54._8_4_ * 3.051851e-05;
            fVar63 = (float)auVar54._12_4_ * 3.051851e-05;
          }
          uVar48 = (ulonglong)uVar42;
          if (cVar34 == '\0') {
            auVar54 = pmovsxbd(auVar69,*(undefined4 *)(lVar22 + uVar48 * 8));
            fVar76 = (float)auVar54._0_4_ * 0.007874016;
            fVar77 = (float)auVar54._4_4_ * 0.007874016;
            local_338._8_4_ = (float)auVar54._8_4_ * 0.007874016;
            local_338._12_4_ = (float)auVar54._12_4_ * 0.0;
            auVar28._4_8_ = auVar54._8_8_;
            auVar28._0_4_ = fVar77;
            auVar70._0_8_ = auVar28._0_8_ << 0x20;
            auVar70._8_4_ = local_338._8_4_;
            auVar70._12_4_ = local_338._12_4_;
            local_338._0_8_ = auVar70._8_8_;
            local_308._4_4_ = fVar77;
            local_308._0_4_ = fVar77;
            fStack_300 = (float)local_338._12_4_;
            fStack_2fc = (float)local_338._12_4_;
            auVar54 = pmovsxbd(_local_308,*(undefined4 *)(lVar22 + 4 + uVar48 * 8));
            fVar77 = (float)auVar54._0_4_ * 0.007874016;
            fVar86 = (float)auVar54._4_4_ * 0.007874016;
            fVar88 = (float)auVar54._8_4_ * 0.007874016;
            fVar90 = (float)auVar54._12_4_ * 0.007874016;
          }
          else {
            auVar54 = pmovsxwd(auVar69,*(undefined8 *)(lVar22 + uVar48 * 0x10));
            fVar76 = (float)auVar54._0_4_ * 3.051851e-05;
            local_308._4_4_ = (float)auVar54._4_4_ * 3.051851e-05;
            fVar77 = (float)auVar54._8_4_ * 3.051851e-05;
            fStack_300 = (float)auVar54._12_4_ * 0.0;
            auVar31._4_8_ = auVar54._8_8_;
            auVar31._0_4_ = local_308._4_4_;
            auVar74._0_8_ = auVar31._0_8_ << 0x20;
            auVar74._8_4_ = fVar77;
            auVar74._12_4_ = fStack_300;
            local_338._12_4_ = fStack_300;
            local_338._8_4_ = fVar77;
            local_338._0_8_ = auVar74._8_8_;
            auVar54 = pmovsxwd(local_338,*(undefined8 *)(lVar22 + 8 + uVar48 * 0x10));
            local_308._0_4_ = local_308._4_4_;
            fStack_2fc = fStack_300;
            fVar77 = (float)auVar54._0_4_ * 3.051851e-05;
            fVar86 = (float)auVar54._4_4_ * 3.051851e-05;
            fVar88 = (float)auVar54._8_4_ * 3.051851e-05;
            fVar90 = (float)auVar54._12_4_ * 3.051851e-05;
          }
          local_368 = *(float *)(lVar21 + uVar49) * local_364 + *(float *)(lVar21 + uVar47) * fVar19
                      + *(float *)(lVar21 + uVar45) * local_35c;
          local_360 = *(float *)(lVar21 + 4 + uVar49) * local_364 +
                      *(float *)(lVar21 + 4 + uVar47) * fVar19 +
                      *(float *)(lVar21 + 4 + uVar45) * local_35c;
          local_36c = *(float *)(lVar21 + 8 + uVar49) * local_364 +
                      *(float *)(lVar21 + 8 + uVar47) * fVar19 +
                      *(float *)(lVar21 + 8 + uVar45) * local_35c;
          if (local_2b4 == '\0') {
            uVar41 = (ulonglong)*(ushort *)(local_2c0 + uVar41 * 2);
            uVar42 = (uint)*(ushort *)(local_2c0 + uVar51 * 2);
            uVar43 = (ulonglong)*(ushort *)(local_2c0 + uVar43 * 2);
          }
          else {
            uVar41 = (ulonglong)*(uint *)(local_2c0 + uVar41 * 4);
            uVar42 = *(uint *)(local_2c0 + uVar51 * 4);
            uVar43 = (ulonglong)*(uint *)(local_2c0 + uVar43 * 4);
          }
          fVar75 = (float)(-(uint)(0.0 < *(float *)(local_158 + 0x2f0)) &
                          (uint)(1.0 / *(float *)(local_158 + 0x2f0)));
          auVar71._4_4_ = fVar86;
          auVar71._0_4_ = fVar86;
          auVar71._8_4_ = fVar90;
          auVar71._12_4_ = fVar90;
          auVar72._8_8_ = auVar71._8_8_;
          dVar26 = (double)fVar90;
          auVar72._0_8_ =
               ((double)fVar86 * (double)(float)local_338._0_4_ -
               (double)fVar88 * (double)(float)local_308._0_4_) * dVar26;
          local_348 = (float)local_358._4_4_ * local_35c;
          fStack_344 = (float)local_358._4_4_;
          uStack_340 = fStack_34c;
          uStack_33c = fStack_34c;
          if (cVar34 == '\0') {
            auVar54 = pmovsxbd(auVar72,*(undefined4 *)(lVar22 + 4 + uVar43 * 8));
            fVar90 = (float)auVar54._0_4_ * 0.007874016;
            fVar87 = (float)auVar54._4_4_ * 0.007874016;
            fVar89 = (float)auVar54._8_4_ * 0.007874016;
            auVar54 = pmovsxbd(auVar54,*(undefined4 *)(lVar22 + 4 + (ulonglong)uVar42 * 8));
            auVar73._0_4_ = (float)auVar54._0_4_ * 0.007874016;
            auVar73._4_4_ = (float)auVar54._4_4_ * 0.007874016;
            auVar73._8_4_ = (float)auVar54._8_4_ * 0.007874016;
            auVar73._12_4_ = (float)auVar54._12_4_ * 0.007874016;
          }
          else {
            auVar54 = pmovsxwd(auVar72,*(undefined8 *)(lVar22 + 8 + uVar43 * 0x10));
            fVar90 = (float)auVar54._0_4_ * 3.051851e-05;
            fVar87 = (float)auVar54._4_4_ * 3.051851e-05;
            fVar89 = (float)auVar54._8_4_ * 3.051851e-05;
            auVar54 = pmovsxwd(auVar54,*(undefined8 *)(lVar22 + 8 + (ulonglong)uVar42 * 0x10));
            auVar73._0_4_ = (float)auVar54._0_4_ * 3.051851e-05;
            auVar73._4_4_ = (float)auVar54._4_4_ * 3.051851e-05;
            auVar73._8_4_ = (float)auVar54._8_4_ * 3.051851e-05;
            auVar73._12_4_ = (float)auVar54._12_4_ * 3.051851e-05;
          }
          local_358._0_4_ = (float)local_358._0_4_ * local_35c + local_2d8;
          local_328._0_4_ = (float)local_328._0_4_ + local_348;
          local_318._0_4_ = (float)local_318._0_4_ + fStack_350 * local_35c;
          if (cVar34 == '\0') {
            auVar54 = pmovsxbd(auVar73,*(undefined4 *)(lVar22 + 4 + uVar41 * 8));
            auVar65._0_4_ = (float)auVar54._0_4_ * 0.007874016;
            auVar65._4_4_ = (float)auVar54._4_4_ * 0.007874016;
            auVar65._8_4_ = (float)auVar54._8_4_ * 0.007874016;
          }
          else {
            auVar54 = pmovsxwd(auVar73,*(undefined8 *)(lVar22 + 8 + uVar41 * 0x10));
            auVar65._0_4_ = (float)auVar54._0_4_ * 3.051851e-05;
            auVar65._4_4_ = (float)auVar54._4_4_ * 3.051851e-05;
            auVar65._8_4_ = (float)auVar54._8_4_ * 3.051851e-05;
          }
          pfVar4 = local_1f0 + local_1e8;
          *local_1f0 = local_368;
          pfVar5 = local_1e0 + local_1d8;
          in_XMM4 = ZEXT416((uint)local_360);
          *local_1e0 = local_360;
          pfVar6 = local_1d0 + local_1c8;
          *local_1d0 = local_36c;
          pfVar7 = local_220 + local_218;
          *local_220 = (local_368 - local_368) * fVar75;
          pfVar8 = local_210 + local_208;
          *local_210 = (local_360 - local_360) * fVar75;
          pfVar9 = local_200 + local_1f8;
          *local_200 = (local_36c - local_36c) * fVar75;
          pfVar10 = local_250 + local_248;
          *local_250 = fVar19 * auVar73._0_4_ + fVar90 * local_364 + local_35c * auVar65._0_4_;
          pfVar11 = local_240 + local_238;
          *local_240 = auVar73._4_4_ * fVar19 + fVar87 * local_364 + auVar65._4_4_ * local_35c;
          pfVar12 = local_230 + local_228;
          *local_230 = auVar73._8_4_ * fVar19 + fVar89 * local_364 + auVar65._8_4_ * local_35c;
          pfVar13 = local_280 + local_278;
          *local_280 = (fVar61 * (float)local_2e8 - fVar62 * (float)local_2f8._0_4_) * fVar63 *
                       fVar19 + (float)dVar24 * local_364 + (float)auVar72._0_8_ * local_35c;
          pfVar14 = local_270 + local_268;
          *local_270 = (fVar62 * fVar52 - fVar58 * (float)local_2e8) * fVar63 * fVar19 +
                       (float)dVar53 * local_364 +
                       (float)(((double)fVar88 * (double)fVar76 -
                               (double)fVar77 * (double)(float)local_338._0_4_) * dVar26) *
                       local_35c;
          pfVar15 = local_260 + local_258;
          *local_260 = (fVar58 * (float)local_2f8._0_4_ - fVar52 * fVar61) * fVar63 * fVar19 +
                       (float)dVar25 * local_364 +
                       (float)(((double)fVar77 * (double)(float)local_308._0_4_ -
                               (double)fVar76 * (double)fVar86) * dVar26) * local_35c;
          pfVar16 = local_2b0 + local_2a8;
          *local_2b0 = (float)local_358._0_4_;
          pfVar17 = local_2a0 + local_298;
          *local_2a0 = (float)local_328._0_4_;
          pfVar18 = local_290 + local_288;
          *local_290 = (float)local_318._0_4_;
          iVar44 = iVar44 + 1;
          piVar40 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar40 = (int *)(param_1 + 0x3c);
          }
          local_2b0 = pfVar16;
          local_2a0 = pfVar17;
          local_290 = pfVar18;
          local_280 = pfVar13;
          local_270 = pfVar14;
          local_260 = pfVar15;
          local_250 = pfVar10;
          local_240 = pfVar11;
          local_230 = pfVar12;
          local_220 = pfVar7;
          local_210 = pfVar8;
          local_200 = pfVar9;
          local_1f0 = pfVar4;
          local_1e0 = pfVar5;
          local_1d0 = pfVar6;
          local_1c0[0] = pfVar3;
          local_1a8 = pfVar2;
          local_190 = pfVar1;
          local_178 = piVar37;
        } while (iVar44 < *piVar40);
      }
      goto LAB_1418206f2;
    }
  }
  fVar62 = DAT_14c846338;
  fVar58 = DAT_14c846330._4_4_;
  fVar19 = (float)DAT_14c846330;
  FUN_144a928e2(local_138,local_158 + 0x40);
  FUN_144a928e2(local_138,local_158 + 0x140);
  fVar63 = DAT_14c846338;
  fVar61 = DAT_14c846330._4_4_;
  fVar52 = (float)DAT_14c846330;
  FUN_144a928e2(local_138,local_158 + 0xc0);
  FUN_144a928e2(local_138,local_158 + 0xc0);
  FUN_144a928e2(local_138,local_158 + 0xc0);
  piVar37 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar37 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar37) {
    iVar36 = 0;
    do {
      pfVar1 = local_1f0 + local_1e8;
      *local_1f0 = fVar19;
      pfVar2 = local_1e0 + local_1d8;
      *local_1e0 = fVar58;
      pfVar3 = local_1d0 + local_1c8;
      *local_1d0 = fVar62;
      pfVar4 = local_220 + local_218;
      *local_220 = fVar52;
      pfVar5 = local_210 + local_208;
      *local_210 = fVar61;
      pfVar6 = local_200 + local_1f8;
      *local_200 = fVar63;
      pfVar7 = local_250 + local_248;
      *local_250 = 0.0;
      pfVar8 = local_240 + local_238;
      *local_240 = 0.0;
      pfVar9 = local_230 + local_228;
      *local_230 = 1.0;
      pfVar10 = local_280 + local_278;
      *local_280 = 0.0;
      pfVar11 = local_270 + local_268;
      *local_270 = 1.0;
      pfVar12 = local_260 + local_258;
      *local_260 = 0.0;
      pfVar13 = local_2b0 + local_2a8;
      *local_2b0 = 1.0;
      pfVar14 = local_2a0 + local_298;
      *local_2a0 = 0.0;
      pfVar15 = local_290 + local_288;
      *local_290 = 0.0;
      iVar36 = iVar36 + 1;
      piVar37 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar37 = (int *)(param_1 + 0x3c);
      }
      local_2b0 = pfVar13;
      local_2a0 = pfVar14;
      local_290 = pfVar15;
      local_280 = pfVar10;
      local_270 = pfVar11;
      local_260 = pfVar12;
      local_250 = pfVar7;
      local_240 = pfVar8;
      local_230 = pfVar9;
      local_220 = pfVar4;
      local_210 = pfVar5;
      local_200 = pfVar6;
      local_1f0 = pfVar1;
      local_1e0 = pfVar2;
      local_1d0 = pfVar3;
    } while (iVar36 < *piVar37);
  }
LAB_1418206f2:
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar37 = (int *)(local_150 + 1);
    *piVar37 = *piVar37 + -1;
    UNLOCK();
    if (*piVar37 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141820d54 FUN_141820d54 body=60 status=ok
// SIG undefined FUN_141820d54(void)

void FUN_141820d54(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_1406ed334(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14ad8dc80;
  *(undefined1 *)((longlong)puVar1 + 0x59) = 1;
  puVar1[0x1f] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xfe) = 0;
  return;
}



// FUNCTION 141820d90 FUN_141820d90 body=59 status=ok
// SIG undefined FUN_141820d90(void)

void FUN_141820d90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *puVar1 = &PTR_FUN_14ad8e130;
  puVar1[0x21] = &PTR_LAB_14ad8e480;
  return;
}



// FUNCTION 141820dcb FUN_141820dcb body=122 status=ok
// SIG undefined FUN_141820dcb(void)

void FUN_141820dcb(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *puVar1 = &PTR_FUN_14ad90b00;
  puVar1[0x21] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x22,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x22) = uVar2;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *puVar1 = &PTR_FUN_14ad8f890;
  puVar1[0x25] = &PTR_FUN_14ad8fbe0;
  return;
}



// FUNCTION 141820e45 FUN_141820e45 body=122 status=ok
// SIG undefined FUN_141820e45(void)

void FUN_141820e45(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *puVar1 = &PTR_FUN_14ad90b00;
  puVar1[0x21] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x22,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x22) = uVar2;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *puVar1 = &PTR_FUN_14ad8fea0;
  puVar1[0x25] = &PTR_FUN_14ad901f0;
  return;
}



// FUNCTION 141820ebf FUN_141820ebf body=122 status=ok
// SIG undefined FUN_141820ebf(void)

void FUN_141820ebf(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *puVar1 = &PTR_FUN_14ad90b00;
  puVar1[0x21] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x22,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x22) = uVar2;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *puVar1 = &PTR_FUN_14ad91170;
  puVar1[0x25] = &PTR_FUN_14ad914c0;
  return;
}



// FUNCTION 141820f3a FUN_141820f3a body=642 status=ok
// SIG undefined FUN_141820f3a(void)

void FUN_141820f3a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_141821025;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_141821025:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(byte *)(param_1 + 0x73) & 1) != 0) {
    (**(code **)(*param_1 + 0x388))(param_1,0x38d1b717);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418211be FUN_1418211be body=829 status=ok
// SIG undefined FUN_1418211be(void)

void FUN_1418211be(longlong param_1)

{
  uint *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong lStack_70;
  wchar_t local_68 [20];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar5 = (longlong *)0x0;
  }
  (**(code **)(*plVar5 + 0x58))(plVar5,param_1);
  FUN_14020684a(param_1);
  lVar1 = *(longlong *)(param_1 + 0x390);
  if (lVar1 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb399c8) && (FUN_144b3d300(&DAT_14cb399c8), DAT_14cb399c8 == -1)) {
      builtin_wcsncpy(local_68 + 8,L"inished",8);
      builtin_wcsncpy(local_68,L"aSystemF",8);
      local_78 = 0x69004e006e004f;
      lStack_70 = 0x72006100670061;
      FUN_1446f470e(&DAT_14cb399c0);
      _Init_thread_footer(&DAT_14cb399c8);
    }
    lVar8 = DAT_14cb399c0;
    plVar5 = (longlong *)(lVar1 + 0x7a0);
    if (param_1 == 0) {
      uVar6 = 0;
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(param_1 + 0xc);
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar3 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar10 + 0x10);
        bVar12 = uVar3 == 0;
        if (bVar12) {
          *(uint *)(lVar10 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar12) {
          uVar3 = uVar7;
        }
      }
      uVar6 = (ulonglong)uVar3;
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else if (uVar3 == 0) {
        uVar6 = 0;
      }
      else if ((((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) &&
               (plVar4 = (longlong *)
                         ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
               plVar4 != (longlong *)0x0)) &&
              (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
               (*plVar4 != 0)))) {
        FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),lVar8);
      }
    }
    local_78 = (ulonglong)uVar11 | uVar6 << 0x20;
    lStack_70 = lVar8;
    FUN_1403350f6(plVar5);
    iVar2 = *(int *)(lVar1 + 0x7a8);
    if (0 < iVar2) {
      lVar8 = 0;
      bVar12 = false;
      do {
        while( true ) {
          lVar10 = *plVar5;
          _Dst = (uint *)(lVar10 + lVar8 * 0x10);
          if (((*(longlong *)(lVar10 + 8 + lVar8 * 0x10) != 0) && (_Dst[1] != 0)) &&
             ((uVar11 = *_Dst, -1 < (int)uVar11 &&
              (((((int)uVar11 < DAT_14c9647dc &&
                 (plVar4 = (longlong *)
                           ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                 plVar4 != (longlong *)0x0)) && (*(uint *)(plVar4 + 2) == _Dst[1])) &&
               (((*(uint *)(plVar4 + 1) >> 0x1c & 1) == 0 && (*plVar4 != 0)))))))) break;
          iVar9 = ~(uint)lVar8 + iVar2;
          if (iVar9 != 0) {
            if (0 < iVar9) {
              iVar9 = 1;
            }
            memmove(_Dst,(void *)(lVar10 + (longlong)(iVar2 - iVar9) * 0x10),(longlong)iVar9 << 4);
            iVar2 = *(int *)(lVar1 + 0x7a8);
          }
          iVar2 = iVar2 + -1;
          *(int *)(lVar1 + 0x7a8) = iVar2;
          bVar12 = true;
          if (iVar2 <= lVar8) goto LAB_141821431;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar2);
      if (bVar12) {
LAB_141821431:
        FUN_1400bbcfc(plVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418214fc FUN_1418214fc body=76 status=ok
// SIG undefined FUN_1418214fc(void)

void FUN_1418214fc(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar1 = (longlong *)0x0;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  if (*(longlong *)(param_1 + 0x390) == 0) {
    return;
  }
  FUN_1401073f6(*(longlong *)(param_1 + 0x390) + 0x7a0,param_1);
  return;
}



// FUNCTION 141821548 FUN_141821548 body=40 status=ok
// SIG undefined FUN_141821548(void)

undefined8 FUN_141821548(undefined8 param_1,int param_2)

{
  FUN_1404db908();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141821570 FUN_141821570 body=70 status=ok
// SIG undefined FUN_141821570(void)

undefined8 * FUN_141821570(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad8eb80;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418215b6 FUN_1418215b6 body=116 status=ok
// SIG undefined FUN_1418215b6(void)

undefined8 * FUN_1418215b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad8f770;
  FUN_1404dbc70(param_1 + 0x6e);
  FUN_1404dbc70(param_1 + 0x4c);
  FUN_1404dbc70(param_1 + 0x2a);
  FUN_1404dbc70(param_1 + 8);
  *param_1 = &PTR_FUN_14ad909b0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182162a FUN_14182162a body=40 status=ok
// SIG undefined FUN_14182162a(void)

undefined8 FUN_14182162a(undefined8 param_1,int param_2)

{
  FUN_140d1f616();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141821652 FUN_141821652 body=80 status=ok
// SIG undefined FUN_141821652(void)

undefined8 * FUN_141821652(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad8fd80;
  FUN_1404dbc70(param_1 + 8);
  *param_1 = &PTR_FUN_14ad909b0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418216a2 FUN_1418216a2 body=103 status=ok
// SIG undefined FUN_1418216a2(void)

undefined8 * FUN_1418216a2(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ad91010;
  lVar1 = 0x370;
  do {
    FUN_1404dbc70((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x110;
  } while (lVar1 != -0xd0);
  *param_1 = &PTR_FUN_14ad909b0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182170a FUN_14182170a body=40 status=ok
// SIG undefined FUN_14182170a(void)

undefined8 FUN_14182170a(undefined8 param_1,int param_2)

{
  FUN_140d1f616();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141821732 FUN_141821732 body=40 status=ok
// SIG undefined FUN_141821732(void)

undefined8 FUN_141821732(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182175a FUN_14182175a body=416 status=ok
// SIG undefined FUN_14182175a(void)

void FUN_14182175a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    (**(code **)(*param_2 + 0x2a8))(param_2,0);
  }
  else {
    lVar4 = param_2[0xec];
    plVar5 = (longlong *)param_2[0xed];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      FUN_14090ddfa(*(undefined8 *)(lVar4 + 0x30),1);
    }
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
    (**(code **)(*param_2 + 0x2b0))(param_2);
  }
  if (*(byte *)(param_1 + 9) != ((byte)*(uint *)(param_2 + 0xea) & 1)) {
    *(uint *)(param_2 + 0xea) =
         *(uint *)(param_2 + 0xea) & 0xfffffffe | (uint)*(byte *)(param_1 + 9);
    FUN_140c7193c(param_2);
  }
  *(uint *)(param_2 + 0xf2) =
       (*(uint *)(param_2 + 0xf2) & 0xfffffffd) + (uint)*(byte *)(param_1 + 10) * 2;
  *(undefined1 *)(param_2 + 0xee) = *(undefined1 *)(param_1 + 0x14);
  FUN_140388f42(param_2,*(undefined1 *)(param_1 + 0x15));
  *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)param_2 + 0x774) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)((longlong)param_2 + 0x78c) = 0;
  FUN_140388f42(param_2,*(undefined1 *)(param_1 + 0x15));
  *(undefined1 *)((longlong)param_2 + 0x784) = *(undefined1 *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    lVar4 = param_2[0xec];
    plVar5 = (longlong *)param_2[0xed];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0xc);
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (*(int *)(lVar4 + 0x868) != 4 && *(int *)(lVar4 + 0x868) != iVar3) {
        if (iVar3 == 4) {
          *(undefined4 *)(lVar4 + 0x86c) = 4;
          FUN_140389866(lVar4);
        }
        *(int *)(lVar4 + 0x868) = iVar3;
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001418218c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1418218fa FUN_1418218fa body=87 status=ok
// SIG undefined FUN_1418218fa(void)

void FUN_1418218fa(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14ad909b0;
  param_2[4] = 0;
  uVar1 = FUN_144830b78(param_2 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 5) = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14ad8fd80;
  FUN_1406ed278(param_2 + 8);
  return;
}



// FUNCTION 141821952 FUN_141821952 body=59 status=ok
// SIG undefined FUN_141821952(void)

undefined8 * FUN_141821952(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad972e0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


