// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149060476 FUN_149060476 body=47 status=ok
// SIG undefined FUN_149060476(void)

void FUN_149060476(undefined8 param_1,longlong *param_2)

{
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490604bc FUN_1490604bc body=87 status=ok
// SIG undefined FUN_1490604bc(void)

undefined8 FUN_1490604bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_3 + 0x34);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 14906053c FUN_14906053c body=59 status=ok
// SIG undefined FUN_14906053c(void)

undefined8 FUN_14906053c(longlong *param_1)

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



// FUNCTION 1490605d8 FUN_1490605d8 body=124 status=ok
// SIG undefined FUN_1490605d8(void)

undefined8 * FUN_1490605d8(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = DAT_14cbf6da8;
  _Src = DAT_14cbf6da0;
  lVar2 = (longlong)DAT_14cbf6da8;
  *(int *)(param_1 + 1) = DAT_14cbf6da8;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 6) = 2;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) & 0xfc | 2;
  *(undefined2 *)((longlong)param_1 + 0x32) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return param_1;
}



// FUNCTION 149060656 FUN_149060656 body=51 status=ok
// SIG undefined FUN_149060656(void)

void FUN_149060656(longlong *param_1)

{
  if ((char)param_1[7] == '\x01') {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 1490606d2 FUN_1490606d2 body=59 status=ok
// SIG undefined FUN_1490606d2(void)

undefined8 FUN_1490606d2(longlong *param_1)

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



// FUNCTION 149060774 FUN_149060774 body=53 status=ok
// SIG undefined FUN_149060774(void)

void FUN_149060774(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  *(undefined4 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 1490607aa FUN_1490607aa body=53 status=ok
// SIG undefined FUN_1490607aa(void)

void FUN_1490607aa(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  *(undefined4 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 1490607e0 FUN_1490607e0 body=47 status=ok
// SIG undefined FUN_1490607e0(void)

void FUN_1490607e0(undefined8 param_1,longlong *param_2)

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



// FUNCTION 149060826 FUN_149060826 body=73 status=ok
// SIG undefined FUN_149060826(void)

undefined8 FUN_149060826(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 149060898 FUN_149060898 body=59 status=ok
// SIG undefined FUN_149060898(void)

undefined8 FUN_149060898(longlong *param_1)

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



// FUNCTION 149060936 FUN_149060936 body=51 status=ok
// SIG undefined FUN_149060936(void)

void FUN_149060936(longlong *param_1)

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



// FUNCTION 1490609b2 FUN_1490609b2 body=59 status=ok
// SIG undefined FUN_1490609b2(void)

undefined8 FUN_1490609b2(longlong *param_1)

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



// FUNCTION 149060a9c FUN_149060a9c body=59 status=ok
// SIG undefined FUN_149060a9c(void)

undefined8 FUN_149060a9c(longlong *param_1)

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



// FUNCTION 149060b86 FUN_149060b86 body=59 status=ok
// SIG undefined FUN_149060b86(void)

undefined8 FUN_149060b86(longlong *param_1)

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



// FUNCTION 149060c70 FUN_149060c70 body=59 status=ok
// SIG undefined FUN_149060c70(void)

undefined8 FUN_149060c70(longlong *param_1)

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



// FUNCTION 149060d5a FUN_149060d5a body=59 status=ok
// SIG undefined FUN_149060d5a(void)

undefined8 FUN_149060d5a(longlong *param_1)

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



// FUNCTION 149060dfc FUN_149060dfc body=317 status=ok
// SIG undefined FUN_149060dfc(void)

void FUN_149060dfc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x2a8);
  lVar2 = param_1 + 0x2b8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x2d0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x2d0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar7 = (longlong)iStack_6c;
      lVar4 = *local_88;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1474acd28(param_2,iVar3);
      }
      lVar5 = *param_2;
      *(undefined8 *)(lVar5 + (longlong)iVar3 * 0xc) = *(undefined8 *)(lVar7 * 0x80 + lVar4);
      *(undefined1 *)(lVar5 + 8 + (longlong)iVar3 * 0xc) = 2;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149060f3a FUN_149060f3a body=2394 status=ok
// SIG undefined FUN_149060f3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_149060f3a(longlong param_1,double *param_2,longlong param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
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
  double *pdVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  double *pdVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar43 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
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
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
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
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_3 != 0) {
    uVar29 = (uint)param_3;
    iVar27 = (int)((ulonglong)param_3 >> 0x20);
    uVar30 = (uint)((ulonglong)param_3 >> 0x10);
    if (param_4 == 2) {
      if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
        lVar25 = param_1 + 0x2e0;
        if (*(longlong *)(param_1 + 0x2e8) != 0) {
          lVar25 = *(longlong *)(param_1 + 0x2e8);
        }
        iVar27 = *(int *)(lVar25 + (ulonglong)
                                   (*(int *)(param_1 + 0x2f0) - 1U &
                                   iVar27 + (uVar29 << 0x10 | uVar29 & 0xffff) +
                                   (uVar30 << 0x13 | uVar30 & 0xffff) + ((uVar29 & 0xffff) >> 4)) *
                                   4);
        if (iVar27 != -1) {
          do {
            lVar25 = *(longlong *)(param_1 + 0x2a8) + (longlong)iVar27 * 0x80;
            if (*(longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar27 * 0x80) == param_3)
            goto LAB_149061520;
            iVar27 = *(int *)(lVar25 + 0x70);
          } while (iVar27 != -1);
        }
      }
      lVar25 = 0;
LAB_149061520:
      FUN_1449437a2(lVar25 + 0x10,param_2,param_1 + 0x240);
      goto LAB_149061472;
    }
    if (param_4 == 1) {
      if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
        lVar25 = param_1 + 0x2e0;
        if (*(longlong *)(param_1 + 0x2e8) != 0) {
          lVar25 = *(longlong *)(param_1 + 0x2e8);
        }
        iVar27 = *(int *)(lVar25 + (ulonglong)
                                   (*(int *)(param_1 + 0x2f0) - 1U &
                                   iVar27 + (uVar29 << 0x10 | uVar29 & 0xffff) +
                                   (uVar30 << 0x13 | uVar30 & 0xffff) + ((uVar29 & 0xffff) >> 4)) *
                                   4);
        if (iVar27 != -1) {
          do {
            lVar25 = *(longlong *)(param_1 + 0x2a8) + (longlong)iVar27 * 0x80;
            if (*(longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar27 * 0x80) == param_3)
            goto LAB_1490614f8;
            iVar27 = *(int *)(lVar25 + 0x70);
          } while (iVar27 != -1);
        }
      }
      lVar25 = 0;
LAB_1490614f8:
      pdVar28 = (double *)(lVar25 + 0x10);
      for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
        *param_2 = *pdVar28;
        pdVar28 = pdVar28 + 1;
        param_2 = param_2 + 1;
      }
      goto LAB_149061472;
    }
    if (param_4 == 0) {
      if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
        lVar25 = param_1 + 0x2e0;
        if (*(longlong *)(param_1 + 0x2e8) != 0) {
          lVar25 = *(longlong *)(param_1 + 0x2e8);
        }
        iVar27 = *(int *)(lVar25 + (ulonglong)
                                   (*(int *)(param_1 + 0x2f0) - 1U &
                                   iVar27 + (uVar29 << 0x10 | uVar29 & 0xffff) +
                                   (uVar30 << 0x13 | uVar30 & 0xffff) + ((uVar29 & 0xffff) >> 4)) *
                                   4);
        if (iVar27 != -1) {
          do {
            lVar25 = *(longlong *)(param_1 + 0x2a8) + (longlong)iVar27 * 0x80;
            if (*(longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar27 * 0x80) == param_3)
            goto LAB_149060ff8;
            iVar27 = *(int *)(lVar25 + 0x70);
          } while (iVar27 != -1);
        }
      }
      lVar25 = 0;
LAB_149060ff8:
      lVar26 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
      pdVar28 = (double *)(lVar26 + 0x240);
      pdVar24 = (double *)&DAT_14c846480;
      if (lVar26 != 0) {
        pdVar24 = pdVar28;
      }
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      auVar7 = _DAT_149934d80;
      auVar37 = *(undefined1 (*) [16])(pdVar24 + 8);
      dVar41 = auVar37._0_8_;
      dVar10 = auVar37._8_8_;
      auVar47 = *(undefined1 (*) [16])(pdVar24 + 10);
      dVar45 = auVar47._0_8_;
      dVar6 = auVar47._8_8_;
      auVar1 = *(undefined1 (*) [16])(lVar25 + 0x50);
      auVar2 = *(undefined1 (*) [16])(lVar25 + 0x60);
      auVar37 = minpd(auVar1,auVar37);
      auVar42 = minpd(auVar2,auVar47);
      auVar47._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
      auVar47._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
      iVar27 = movmskpd((int)pdVar28,auVar47);
      auVar37._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
      auVar37._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
      uVar30 = movmskpd(uVar29,auVar37);
      if ((uVar30 & 0x3fffffff) == 0 && iVar27 == 0) {
        dVar16 = *(double *)(lVar25 + 0x10);
        dVar17 = *(double *)(lVar25 + 0x18);
        dVar18 = *(double *)(lVar25 + 0x20);
        dVar19 = *(double *)(lVar25 + 0x28);
        dVar20 = *pdVar24;
        dVar21 = pdVar24[1];
        dVar22 = pdVar24[2];
        dVar23 = pdVar24[3];
        dVar5 = pdVar24[3];
        dVar34 = pdVar24[3];
        dVar9 = *pdVar24;
        dVar8 = *pdVar24;
        dVar35 = pdVar24[1];
        dVar36 = pdVar24[1];
        dVar40 = pdVar24[2];
        dVar38 = pdVar24[2];
        dVar11 = *(double *)(lVar25 + 0x30) * dVar41;
        dVar12 = *(double *)(lVar25 + 0x38) * dVar10;
        dVar13 = *(double *)(lVar25 + 0x40) * dVar45;
        dVar14 = *(double *)(lVar25 + 0x48) * dVar6;
        dVar46 = dVar12 * dVar20 - dVar21 * dVar11;
        dVar49 = dVar13 * dVar21 - dVar22 * dVar12;
        dVar50 = dVar11 * dVar22 - dVar20 * dVar13;
        dVar15 = dVar14 * dVar23 - dVar23 * dVar14;
        dVar49 = dVar49 + dVar49;
        dVar50 = dVar50 + dVar50;
        dVar46 = dVar46 + dVar46;
        dVar15 = dVar15 + dVar15;
        dVar39 = pdVar24[4];
        dVar3 = pdVar24[5];
        dVar44 = pdVar24[6];
        dVar4 = pdVar24[7];
        *param_2 = dVar17 * dVar40 * -1.0 + dVar18 * dVar35 + dVar19 * dVar9 * 1.0 + dVar16 * dVar5;
        param_2[1] = dVar16 * dVar38 * 1.0 +
                     dVar19 * dVar36 + dVar18 * dVar8 * -1.0 + dVar17 * dVar34;
        param_2[2] = dVar19 * dVar40 * 1.0 +
                     ((dVar9 * dVar17 * 1.0 + dVar18 * dVar5) - dVar16 * dVar35);
        param_2[3] = dVar18 * dVar38 * -1.0 +
                     ((dVar8 * dVar16 * -1.0 + dVar19 * dVar34) - dVar17 * dVar36);
        param_2[4] = (dVar46 * dVar21 - dVar22 * dVar50) + dVar5 * dVar49 + dVar11 + dVar39;
        param_2[5] = (dVar49 * dVar22 - dVar46 * dVar20) + dVar34 * dVar50 + dVar12 + dVar3;
        param_2[6] = (dVar50 * dVar20 - dVar21 * dVar49) + dVar5 * dVar46 + dVar13 + dVar44;
        param_2[7] = (dVar15 * dVar23 - dVar15 * dVar23) + dVar34 * dVar15 + dVar14 + dVar4;
        dVar10 = auVar1._8_8_ * dVar10;
        dVar6 = auVar2._8_8_ * dVar6;
        auVar7._8_4_ = SUB84(dVar10,0);
        auVar7._0_8_ = auVar1._0_8_ * dVar41;
        auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 8) = auVar7;
        auVar1._8_4_ = SUB84(dVar6,0);
        auVar1._0_8_ = auVar2._0_8_ * dVar45;
        auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 10) = auVar1;
      }
      else {
        dVar8 = auVar1._0_8_ * dVar41;
        dVar9 = auVar1._8_8_ * dVar10;
        dVar5 = auVar2._0_8_ * dVar45;
        dVar6 = auVar2._8_8_ * dVar6;
        dVar35 = *pdVar24;
        dVar36 = pdVar24[1];
        dVar40 = pdVar24[2];
        dVar38 = dVar36 + dVar36;
        dVar39 = dVar40 + dVar40;
        dVar34 = dVar35 * (dVar35 + dVar35);
        local_1c8 = ((double)DAT_149934d80 - (dVar40 * dVar39 + dVar36 * dVar38)) * dVar41;
        dStack_1a0 = (DAT_149934d80._8_8_ - (dVar40 * dVar39 + dVar34)) * dVar10;
        local_178 = (1.0 - (dVar34 + dVar36 * dVar38)) * dVar45;
        dVar34 = pdVar24[3];
        dVar40 = dVar39 * dVar34;
        dVar44 = (dVar35 + dVar35) * pdVar24[3];
        dVar34 = dVar38 * dVar34;
        dStack_1c0 = (dVar38 * dVar35 + dVar40) * dVar41;
        local_198 = (dVar39 * dVar36 + dVar44) * dVar10;
        local_188 = (dVar34 + *pdVar24 * dVar39) * dVar45;
        local_1a8 = (dVar38 * dVar35 - dVar40) * dVar10;
        dStack_180 = (dVar39 * dVar36 - dVar44) * dVar45;
        local_1b8 = (*pdVar24 * dVar39 - dVar34) * dVar41;
        uStack_1b0 = 0;
        uStack_190 = 0;
        uStack_170 = 0;
        local_168 = pdVar24[4];
        dStack_160 = pdVar24[5];
        local_158 = pdVar24[6];
        uStack_150 = 0x3ff0000000000000;
        dVar10 = *(double *)(lVar25 + 0x10);
        dVar34 = *(double *)(lVar25 + 0x18);
        dVar45 = *(double *)(lVar25 + 0x20);
        local_238 = *(double *)(lVar25 + 0x50);
        local_228 = *(double *)(lVar25 + 0x58);
        dStack_200 = *(double *)(lVar25 + 0x60);
        dVar38 = dVar34 + dVar34;
        dVar35 = dVar45 + dVar45;
        dVar41 = dVar10 * (dVar10 + dVar10);
        local_248 = ((double)DAT_149934d80 - (dVar45 * dVar35 + dVar34 * dVar38)) * local_238;
        dStack_220 = (DAT_149934d80._8_8_ - (dVar45 * dVar35 + dVar41)) * local_228;
        local_1f8 = (1.0 - (dVar41 + dVar34 * dVar38)) * dStack_200;
        dVar45 = *(double *)(lVar25 + 0x10) * dVar35;
        dVar41 = *(double *)(lVar25 + 0x28);
        dVar36 = dVar35 * dVar41;
        dVar40 = (dVar10 + dVar10) * *(double *)(lVar25 + 0x28);
        dVar41 = dVar38 * dVar41;
        dStack_240 = (dVar38 * dVar10 + dVar36) * local_238;
        local_218 = (dVar35 * dVar34 + dVar40) * local_228;
        local_208 = (dVar41 + dVar45) * dStack_200;
        local_238 = (dVar45 - dVar41) * local_238;
        local_228 = (dVar38 * dVar10 - dVar36) * local_228;
        dStack_200 = (dVar35 * dVar34 - dVar40) * dStack_200;
        uStack_230 = 0;
        uStack_210 = 0;
        uStack_1f0 = 0;
        local_1e8 = *(undefined8 *)(lVar25 + 0x30);
        uStack_1e0 = *(undefined8 *)(lVar25 + 0x38);
        local_1d8 = *(undefined8 *)(lVar25 + 0x40);
        uStack_1d0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_148);
        FUN_144a1c686(&local_148,0x3e45798ee0000000);
        auVar32._8_8_ = -(ulonglong)(0.0 <= dVar9);
        auVar32._0_8_ = -(ulonglong)(0.0 <= dVar8);
        auVar37 = blendvpd(_DAT_149936790,auVar7,auVar32);
        uVar31 = -(ulonglong)(0.0 <= dVar5);
        dVar41 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
        dVar45 = auVar37._0_8_;
        local_138 = local_138 * dVar45;
        local_140 = local_140 * dVar45;
        local_148 = local_148 * dVar45;
        dVar45 = auVar37._8_8_;
        local_118 = local_118 * dVar45;
        local_120 = local_120 * dVar45;
        local_128 = dVar45 * local_128;
        local_f8 = local_f8 * dVar41;
        local_100 = local_100 * dVar41;
        local_108 = dVar41 * local_108;
        FUN_14481fd10(&local_268,&local_148);
        dVar41 = local_258 * local_258 + local_268 * local_268;
        dVar45 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
        auVar43._0_8_ = dVar41 + dVar45;
        auVar43._8_8_ = dVar41 + dVar45;
        auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
        auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
        auVar37 = sqrtpd(auVar43,auVar43);
        auVar47 = divpd(auVar7,auVar37);
        auVar48._0_8_ = auVar47._0_8_ * local_258;
        auVar48._8_8_ = auVar47._8_8_ * dStack_250;
        auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar33);
        auVar42._8_4_ = SUB84(dVar9,0);
        auVar42._0_8_ = dVar8;
        auVar42._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 8) = auVar42;
        auVar2._8_4_ = SUB84(dVar6,0);
        auVar2._0_8_ = dVar5;
        auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 10) = auVar2;
        *param_2 = (double)((ulonglong)(local_268 * auVar47._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
        param_2[1] = (double)((ulonglong)(dStack_260 * auVar47._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
        *(undefined1 (*) [16])(param_2 + 2) = auVar37;
        param_2[4] = local_e8;
        param_2[5] = dStack_e0;
        param_2[6] = local_d8;
        param_2[7] = 0.0;
      }
      if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  FUN_14494c736(param_1,param_2);
LAB_149061472:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_288);
}



// FUNCTION 149061956 FUN_149061956 body=322 status=ok
// SIG undefined FUN_149061956(void)

void FUN_149061956(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x74 + (longlong)iVar4 * 0x80) * 4) =
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



// FUNCTION 149061a9a FUN_149061a9a body=31 status=ok
// SIG undefined FUN_149061a9a(void)

undefined8 FUN_149061a9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149061ad6 FUN_149061ad6 body=93 status=ok
// SIG undefined FUN_149061ad6(void)

void FUN_149061ad6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba82f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149061b34 FUN_149061b34 body=126 status=ok
// SIG undefined FUN_149061b34(void)

void FUN_149061b34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba82f80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149061ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149061bb2 FUN_149061bb2 body=21 status=ok
// SIG undefined FUN_149061bb2(void)

undefined8 FUN_149061bb2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149061bc7 FUN_149061bc7 body=244 status=ok
// SIG undefined FUN_149061bc7(void)

longlong * FUN_149061bc7(longlong *param_1,undefined4 *param_2)

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
  param_2 = param_2 + 2;
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
  return param_1;
}



// FUNCTION 149061cbc FUN_149061cbc body=193 status=ok
// SIG undefined FUN_149061cbc(void)

void FUN_149061cbc(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  lVar5 = 0;
  iVar3 = 0;
  do {
    uVar8 = *(uint *)(param_2 + 3);
    uVar2 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
            ((byte)uVar8 & 0x3f) | param_2[2];
    param_2[2] = uVar2;
    *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar8 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
    *(uint *)(param_2 + 3) = uVar8 | 0x38;
    uVar7 = (ulonglong)((uint)uVar2 & 0x7ff);
    bVar1 = *(byte *)(param_1 + 0x10 + uVar7 * 2);
    uVar2 = uVar2 >> (bVar1 & 0x3f);
    param_2[2] = uVar2;
    iVar4 = (uVar8 | 0x38) - (int)(char)bVar1;
    *(int *)(param_2 + 3) = iVar4;
    uVar6 = (uint)*(char *)(param_1 + 0x11 + uVar7 * 2);
    uVar8 = uVar6 - 2;
    if (3 < (int)uVar6) {
      bVar1 = (byte)(uVar8 >> 1);
      param_2[2] = uVar2 >> (bVar1 & 0x3f);
      *(uint *)(param_2 + 3) = iVar4 - (uVar8 >> 1);
      uVar8 = (~(uint)(-1L << (bVar1 & 0x3f)) & (uint)uVar2) +
              *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar6 * 4);
    }
    iVar3 = iVar3 + uVar8;
    *(int *)(param_3 + lVar5 * 4) = iVar3;
    lVar5 = lVar5 + 1;
  } while (param_4 != (int)lVar5);
  return;
}



// FUNCTION 149061d7e FUN_149061d7e body=682 status=ok
// SIG undefined FUN_149061d7e(void)

void FUN_149061d7e(longlong param_1,longlong *param_2,float *param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_2;
  uVar8 = param_2[2];
  uVar11 = *(uint *)((longlong)param_2 + 0x1c);
  uVar3 = *(uint *)(param_2 + 3);
  lVar6 = 0;
  do {
    uVar4 = *(longlong *)(lVar1 + (ulonglong)uVar11) << ((byte)uVar3 & 0x3f) | uVar8;
    uVar11 = uVar11 + (0x3f - uVar3 >> 3);
    *(uint *)((longlong)param_2 + 0x1c) = uVar11;
    uVar8 = uVar4 >> 8;
    param_2[2] = uVar8;
    uVar3 = (uVar3 | 0x38) - 8;
    *(uint *)(param_2 + 3) = uVar3;
    *(char *)((longlong)&local_4c + lVar6) = (char)uVar4;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  iVar7 = 0;
  iVar5 = 0;
  iVar15 = 0;
  do {
    lVar1 = *param_2;
    uVar11 = *(uint *)(param_2 + 3);
    uVar8 = *(longlong *)(lVar1 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
            ((byte)uVar11 & 0x3f) | param_2[2];
    param_2[2] = uVar8;
    uVar13 = (0x3f - uVar11 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
    *(uint *)((longlong)param_2 + 0x1c) = uVar13;
    *(uint *)(param_2 + 3) = uVar11 | 0x38;
    uVar4 = (ulonglong)((uint)uVar8 & 0x7ff);
    bVar2 = *(byte *)(param_1 + 0x7010 + uVar4 * 2);
    uVar8 = uVar8 >> (bVar2 & 0x3f);
    param_2[2] = uVar8;
    uVar9 = (uVar11 | 0x38) - (int)(char)bVar2;
    *(uint *)(param_2 + 3) = uVar9;
    uVar3 = (uint)*(char *)(param_1 + 0x7011 + uVar4 * 2);
    uVar11 = uVar3 - 2;
    if (3 < (int)uVar3) {
      bVar2 = (byte)(uVar11 >> 1);
      uVar14 = (uint)uVar8;
      uVar8 = uVar8 >> (bVar2 & 0x3f);
      param_2[2] = uVar8;
      uVar9 = uVar9 - (uVar11 >> 1);
      *(uint *)(param_2 + 3) = uVar9;
      uVar11 = (~(uint)(-1L << (bVar2 & 0x3f)) & uVar14) +
               *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar3 * 4);
    }
    uVar8 = *(longlong *)(lVar1 + (ulonglong)uVar13) << ((byte)uVar9 & 0x3f) | uVar8;
    param_2[2] = uVar8;
    uVar13 = (0x3f - uVar9 >> 3) + uVar13;
    *(uint *)((longlong)param_2 + 0x1c) = uVar13;
    *(uint *)(param_2 + 3) = uVar9 | 0x38;
    uVar4 = (ulonglong)((uint)uVar8 & 0x7ff);
    bVar2 = *(byte *)(param_1 + 0x7010 + uVar4 * 2);
    uVar8 = uVar8 >> (bVar2 & 0x3f);
    param_2[2] = uVar8;
    uVar9 = (uVar9 | 0x38) - (int)(char)bVar2;
    *(uint *)(param_2 + 3) = uVar9;
    uVar14 = (uint)*(char *)(param_1 + 0x7011 + uVar4 * 2);
    uVar3 = uVar14 - 2;
    if (3 < (int)uVar14) {
      bVar2 = (byte)(uVar3 >> 1);
      uVar12 = (uint)uVar8;
      uVar8 = uVar8 >> (bVar2 & 0x3f);
      param_2[2] = uVar8;
      uVar9 = uVar9 - (uVar3 >> 1);
      *(uint *)(param_2 + 3) = uVar9;
      uVar3 = (~(uint)(-1L << (bVar2 & 0x3f)) & uVar12) +
              *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar14 * 4);
    }
    uVar8 = *(longlong *)(lVar1 + (ulonglong)uVar13) << ((byte)uVar9 & 0x3f) | uVar8;
    param_2[2] = uVar8;
    *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar9 >> 3) + uVar13;
    *(uint *)(param_2 + 3) = uVar9 | 0x38;
    uVar4 = (ulonglong)((uint)uVar8 & 0x7ff);
    bVar2 = *(byte *)(param_1 + 0x7010 + uVar4 * 2);
    uVar8 = uVar8 >> (bVar2 & 0x3f);
    param_2[2] = uVar8;
    iVar10 = (uVar9 | 0x38) - (int)(char)bVar2;
    *(int *)(param_2 + 3) = iVar10;
    uVar9 = (uint)*(char *)(param_1 + 0x7011 + uVar4 * 2);
    uVar13 = uVar9 - 2;
    if (3 < (int)uVar9) {
      bVar2 = (byte)(uVar13 >> 1);
      param_2[2] = uVar8 >> (bVar2 & 0x3f);
      *(uint *)(param_2 + 3) = iVar10 - (uVar13 >> 1);
      uVar13 = (~(uint)(-1L << (bVar2 & 0x3f)) & (uint)uVar8) +
               *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar9 * 4);
    }
    iVar7 = iVar7 + uVar13;
    iVar5 = iVar5 + uVar3;
    iVar15 = iVar15 + uVar11;
    *param_3 = (float)iVar15 * local_4c;
    param_3[1] = (float)iVar5 * local_4c;
    param_3[2] = (float)iVar7 * local_4c;
    param_3 = param_3 + 3;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
  local_58 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906202a FUN_14906202a body=612 status=ok
// SIG undefined FUN_14906202a(void)

void FUN_14906202a(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_b8 [44];
  int local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = *param_2;
  uVar7 = param_2[2];
  uVar4 = *(uint *)((longlong)param_2 + 0x1c);
  uVar3 = *(uint *)(param_2 + 3);
  lVar6 = 0;
  do {
    uVar9 = *(longlong *)(lVar8 + (ulonglong)uVar4) << ((byte)uVar3 & 0x3f) | uVar7;
    uVar4 = uVar4 + (0x3f - uVar3 >> 3);
    *(uint *)((longlong)param_2 + 0x1c) = uVar4;
    uVar7 = uVar9 >> 8;
    param_2[2] = uVar7;
    uVar3 = (uVar3 | 0x38) - 8;
    *(uint *)(param_2 + 3) = uVar3;
    *(char *)((longlong)&local_8c + lVar6) = (char)uVar9;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0xc);
  fVar16 = local_88;
  if (local_88 <= local_84) {
    fVar16 = local_84;
  }
  fVar14 = (float)exp2f((float)local_8c);
  fVar15 = (float)exp2f((float)local_8c);
  lVar8 = 0;
  iVar10 = 0;
  iVar5 = 0;
  do {
    uVar4 = *(uint *)(param_2 + 3);
    uVar9 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
            ((byte)uVar4 & 0x3f) | param_2[2];
    param_2[2] = uVar9;
    uVar11 = (0x3f - uVar4 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
    *(uint *)((longlong)param_2 + 0x1c) = uVar11;
    *(uint *)(param_2 + 3) = uVar4 | 0x38;
    uVar7 = (ulonglong)((uint)uVar9 & 0x7ff);
    bVar2 = *(byte *)(param_1 + 0x6010 + uVar7 * 2);
    uVar9 = uVar9 >> (bVar2 & 0x3f);
    param_2[2] = uVar9;
    uVar3 = (uVar4 | 0x38) - (int)(char)bVar2;
    *(uint *)(param_2 + 3) = uVar3;
    uVar12 = (uint)*(char *)(param_1 + 0x6011 + uVar7 * 2);
    uVar4 = uVar12 - 2;
    if (3 < (int)uVar12) {
      bVar2 = (byte)(uVar4 >> 1);
      uVar13 = (uint)uVar9;
      uVar9 = uVar9 >> (bVar2 & 0x3f);
      param_2[2] = uVar9;
      uVar3 = uVar3 - (uVar4 >> 1);
      *(uint *)(param_2 + 3) = uVar3;
      uVar4 = (~(uint)(-1L << (bVar2 & 0x3f)) & uVar13) +
              *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar12 * 4);
    }
    uVar9 = *(longlong *)(*param_2 + (ulonglong)uVar11) << ((byte)uVar3 & 0x3f) | uVar9;
    param_2[2] = uVar9;
    *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar3 >> 3) + uVar11;
    *(uint *)(param_2 + 3) = uVar3 | 0x38;
    uVar7 = (ulonglong)((uint)uVar9 & 0x7ff);
    bVar2 = *(byte *)(param_1 + 0x6010 + uVar7 * 2);
    uVar9 = uVar9 >> (bVar2 & 0x3f);
    param_2[2] = uVar9;
    iVar1 = (uVar3 | 0x38) - (int)(char)bVar2;
    *(int *)(param_2 + 3) = iVar1;
    uVar11 = (uint)*(char *)(param_1 + 0x6011 + uVar7 * 2);
    uVar3 = uVar11 - 2;
    if (3 < (int)uVar11) {
      bVar2 = (byte)(uVar3 >> 1);
      param_2[2] = uVar9 >> (bVar2 & 0x3f);
      *(uint *)(param_2 + 3) = iVar1 - (uVar3 >> 1);
      uVar3 = (~(uint)(-1L << (bVar2 & 0x3f)) & (uint)uVar9) +
              *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar11 * 4);
    }
    iVar10 = iVar10 + uVar3;
    iVar5 = iVar5 + uVar4;
    *(float *)(param_3 + lVar8 * 8) = (float)iVar5 * (fVar16 / (float)(int)fVar14);
    *(float *)(param_3 + 4 + lVar8 * 8) = (float)iVar10 * (fVar16 / (float)(int)fVar15);
    lVar8 = lVar8 + 1;
  } while (param_4 != (int)lVar8);
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149062290 FUN_149062290 body=253 status=ok
// SIG undefined FUN_149062290(void)

void FUN_149062290(longlong *param_1,longlong param_2,int param_3,longlong param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  ulonglong uVar11;
  
  cVar7 = -0x80;
  lVar5 = 0;
  cVar3 = -0x80;
  cVar4 = -0x80;
  cVar10 = -0x80;
  do {
    uVar2 = *(uint *)(param_1 + 3);
    uVar11 = *(longlong *)(*param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x1c)) <<
             ((byte)uVar2 & 0x3f) | param_1[2];
    param_1[2] = uVar11;
    *(uint *)((longlong)param_1 + 0x1c) = (0x3f - uVar2 >> 3) + *(uint *)((longlong)param_1 + 0x1c);
    *(uint *)(param_1 + 3) = uVar2 | 0x38;
    uVar8 = (ulonglong)((uint)uVar11 & 0x7ff);
    bVar1 = *(byte *)(param_4 + uVar8 * 2);
    uVar11 = uVar11 >> (bVar1 & 0x3f);
    iVar6 = (uVar2 | 0x38) - (int)(char)bVar1;
    param_1[2] = uVar11;
    *(int *)(param_1 + 3) = iVar6;
    uVar9 = (ulonglong)((uint)uVar11 & 0x7ff);
    bVar1 = *(byte *)(param_4 + uVar9 * 2);
    uVar11 = uVar11 >> (bVar1 & 0x3f);
    cVar7 = cVar7 + *(char *)(param_4 + 1 + uVar8 * 2);
    iVar6 = iVar6 - (char)bVar1;
    param_1[2] = uVar11;
    *(int *)(param_1 + 3) = iVar6;
    uVar8 = (ulonglong)((uint)uVar11 & 0x7ff);
    bVar1 = *(byte *)(param_4 + uVar8 * 2);
    uVar11 = uVar11 >> (bVar1 & 0x3f);
    cVar10 = cVar10 + *(char *)(param_4 + 1 + uVar9 * 2);
    iVar6 = iVar6 - (char)bVar1;
    param_1[2] = uVar11;
    *(int *)(param_1 + 3) = iVar6;
    uVar9 = (ulonglong)((uint)uVar11 & 0x7ff);
    bVar1 = *(byte *)(param_4 + uVar9 * 2);
    cVar4 = cVar4 + *(char *)(param_4 + 1 + uVar8 * 2);
    param_1[2] = uVar11 >> (bVar1 & 0x3f);
    *(int *)(param_1 + 3) = iVar6 - (char)bVar1;
    cVar3 = cVar3 + *(char *)(param_4 + 1 + uVar9 * 2);
    *(char *)(param_2 + lVar5 * 4) = cVar7;
    *(char *)(param_2 + 1 + lVar5 * 4) = cVar10;
    *(char *)(param_2 + 2 + lVar5 * 4) = cVar4;
    *(char *)(param_2 + 3 + lVar5 * 4) = cVar3;
    lVar5 = lVar5 + 1;
  } while (param_3 != (int)lVar5);
  return;
}



// FUNCTION 14906238e FUN_14906238e body=788 status=ok
// SIG undefined FUN_14906238e(void)

void FUN_14906238e(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  
  iVar16 = 0x80;
  iVar10 = 0xff;
  lVar17 = 0;
  iVar6 = 0x80;
  iVar3 = 0x80;
  do {
    lVar1 = *param_2;
    uVar7 = *(uint *)(param_2 + 3);
    uVar15 = *(longlong *)(lVar1 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
             ((byte)uVar7 & 0x3f) | param_2[2];
    uVar4 = (0x3f - uVar7 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
    *(uint *)((longlong)param_2 + 0x1c) = uVar4;
    uVar8 = uVar15 >> 1;
    param_2[2] = uVar8;
    uVar5 = (uVar7 | 0x38) - 1;
    *(uint *)(param_2 + 3) = uVar5;
    if ((uVar15 & 1) == 0) {
      uVar15 = *(longlong *)(lVar1 + (ulonglong)uVar4) << ((byte)uVar5 & 0x3f) | uVar8;
      param_2[2] = uVar15;
      uVar4 = (0x40 - (uVar7 | 0x38) >> 3) + uVar4;
      *(uint *)((longlong)param_2 + 0x1c) = uVar4;
      *(uint *)(param_2 + 3) = uVar5 | 0x38;
      uVar8 = (ulonglong)((uint)uVar8 & 0x7ff);
      bVar2 = *(byte *)(param_1 + 0x3010 + uVar8 * 2);
      uVar15 = uVar15 >> (bVar2 & 0x3f);
      param_2[2] = uVar15;
      uVar11 = (uVar5 | 0x38) - (int)(char)bVar2;
      *(uint *)(param_2 + 3) = uVar11;
      uVar7 = (uint)*(char *)(param_1 + 0x3011 + uVar8 * 2);
      uVar5 = uVar7 - 2;
      if (3 < (int)uVar7) {
        bVar2 = (byte)(uVar5 >> 1);
        uVar12 = (uint)uVar15;
        uVar15 = uVar15 >> (bVar2 & 0x3f);
        param_2[2] = uVar15;
        uVar11 = uVar11 - (uVar5 >> 1);
        *(uint *)(param_2 + 3) = uVar11;
        uVar5 = (~(uint)(-1L << (bVar2 & 0x3f)) & uVar12) +
                *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar7 * 4);
      }
      uVar15 = *(longlong *)(lVar1 + (ulonglong)uVar4) << ((byte)uVar11 & 0x3f) | uVar15;
      param_2[2] = uVar15;
      uVar4 = (0x3f - uVar11 >> 3) + uVar4;
      *(uint *)((longlong)param_2 + 0x1c) = uVar4;
      *(uint *)(param_2 + 3) = uVar11 | 0x38;
      uVar8 = (ulonglong)((uint)uVar15 & 0x7ff);
      bVar2 = *(byte *)(param_1 + 0x3010 + uVar8 * 2);
      uVar15 = uVar15 >> (bVar2 & 0x3f);
      param_2[2] = uVar15;
      uVar12 = (uVar11 | 0x38) - (int)(char)bVar2;
      *(uint *)(param_2 + 3) = uVar12;
      uVar11 = (uint)*(char *)(param_1 + 0x3011 + uVar8 * 2);
      uVar7 = uVar11 - 2;
      if (3 < (int)uVar11) {
        bVar2 = (byte)(uVar7 >> 1);
        uVar13 = (uint)uVar15;
        uVar15 = uVar15 >> (bVar2 & 0x3f);
        param_2[2] = uVar15;
        uVar12 = uVar12 - (uVar7 >> 1);
        *(uint *)(param_2 + 3) = uVar12;
        uVar7 = (~(uint)(-1L << (bVar2 & 0x3f)) & uVar13) +
                *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar11 * 4);
      }
      uVar15 = *(longlong *)(lVar1 + (ulonglong)uVar4) << ((byte)uVar12 & 0x3f) | uVar15;
      param_2[2] = uVar15;
      uVar4 = (0x3f - uVar12 >> 3) + uVar4;
      *(uint *)((longlong)param_2 + 0x1c) = uVar4;
      *(uint *)(param_2 + 3) = uVar12 | 0x38;
      uVar8 = (ulonglong)((uint)uVar15 & 0x7ff);
      bVar2 = *(byte *)(param_1 + 0x3010 + uVar8 * 2);
      uVar15 = uVar15 >> (bVar2 & 0x3f);
      param_2[2] = uVar15;
      uVar13 = (uVar12 | 0x38) - (int)(char)bVar2;
      *(uint *)(param_2 + 3) = uVar13;
      uVar12 = (uint)*(char *)(param_1 + 0x3011 + uVar8 * 2);
      uVar11 = uVar12 - 2;
      if (3 < (int)uVar12) {
        bVar2 = (byte)(uVar11 >> 1);
        uVar9 = (uint)uVar15;
        uVar15 = uVar15 >> (bVar2 & 0x3f);
        param_2[2] = uVar15;
        uVar13 = uVar13 - (uVar11 >> 1);
        *(uint *)(param_2 + 3) = uVar13;
        uVar11 = (~(uint)(-1L << (bVar2 & 0x3f)) & uVar9) +
                 *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar12 * 4);
      }
      uVar15 = *(longlong *)(lVar1 + (ulonglong)uVar4) << ((byte)uVar13 & 0x3f) | uVar15;
      param_2[2] = uVar15;
      *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar13 >> 3) + uVar4;
      *(uint *)(param_2 + 3) = uVar13 | 0x38;
      uVar8 = (ulonglong)((uint)uVar15 & 0x7ff);
      bVar2 = *(byte *)(param_1 + 0x3010 + uVar8 * 2);
      uVar15 = uVar15 >> (bVar2 & 0x3f);
      param_2[2] = uVar15;
      iVar14 = (uVar13 | 0x38) - (int)(char)bVar2;
      *(int *)(param_2 + 3) = iVar14;
      uVar12 = (uint)*(char *)(param_1 + 0x3011 + uVar8 * 2);
      uVar4 = uVar12 - 2;
      if (3 < (int)uVar12) {
        bVar2 = (byte)(uVar4 >> 1);
        param_2[2] = uVar15 >> (bVar2 & 0x3f);
        *(uint *)(param_2 + 3) = iVar14 - (uVar4 >> 1);
        uVar4 = (~(uint)(-1L << (bVar2 & 0x3f)) & (uint)uVar15) +
                *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar12 * 4);
      }
      iVar10 = iVar10 + uVar4;
      iVar16 = iVar16 + uVar11;
      iVar6 = iVar6 + uVar7;
      iVar3 = iVar3 + uVar5;
    }
    *(char *)(param_3 + 2 + lVar17 * 4) = (char)iVar3;
    *(char *)(param_3 + 1 + lVar17 * 4) = (char)iVar6;
    *(char *)(param_3 + lVar17 * 4) = (char)iVar16;
    *(char *)(param_3 + 3 + lVar17 * 4) = (char)iVar10;
    lVar17 = lVar17 + 1;
  } while (param_4 != (int)lVar17);
  return;
}



// FUNCTION 1490626a2 FUN_1490626a2 body=729 status=ok
// SIG undefined FUN_1490626a2(void)

void FUN_1490626a2(longlong param_1,longlong *param_2,float *param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  float local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  uVar9 = param_2[2];
  uVar13 = *(uint *)((longlong)param_2 + 0x1c);
  uVar3 = *(uint *)(param_2 + 3);
  lVar6 = 0;
  do {
    uVar4 = *(longlong *)(lVar1 + (ulonglong)uVar13) << ((byte)uVar3 & 0x3f) | uVar9;
    uVar13 = uVar13 + (0x3f - uVar3 >> 3);
    *(uint *)((longlong)param_2 + 0x1c) = uVar13;
    uVar9 = uVar4 >> 8;
    param_2[2] = uVar9;
    uVar3 = (uVar3 | 0x38) - 8;
    *(uint *)(param_2 + 3) = uVar3;
    *(char *)((longlong)&local_58 + lVar6) = (char)uVar4;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x10);
  local_60 = (ulonglong)local_54;
  local_68 = (ulonglong)local_50;
  iVar15 = 0;
  local_70 = (ulonglong)local_4c;
  iVar14 = 0;
  iVar5 = 0;
  do {
    lVar1 = *param_2;
    uVar13 = *(uint *)(param_2 + 3);
    uVar9 = *(longlong *)(lVar1 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
            ((byte)uVar13 & 0x3f) | param_2[2];
    param_2[2] = uVar9;
    uVar3 = (0x3f - uVar13 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
    *(uint *)((longlong)param_2 + 0x1c) = uVar3;
    *(uint *)(param_2 + 3) = uVar13 | 0x38;
    uVar4 = (ulonglong)((uint)uVar9 & 0x7ff);
    bVar2 = *(byte *)(param_1 + 0x1010 + uVar4 * 2);
    uVar9 = uVar9 >> (bVar2 & 0x3f);
    param_2[2] = uVar9;
    uVar10 = (uVar13 | 0x38) - (int)(char)bVar2;
    *(uint *)(param_2 + 3) = uVar10;
    uVar7 = (uint)*(char *)(param_1 + 0x1011 + uVar4 * 2);
    uVar13 = uVar7 - 2;
    if (3 < (int)uVar7) {
      bVar2 = (byte)(uVar13 >> 1);
      uVar11 = (uint)uVar9;
      uVar9 = uVar9 >> (bVar2 & 0x3f);
      param_2[2] = uVar9;
      uVar10 = uVar10 - (uVar13 >> 1);
      *(uint *)(param_2 + 3) = uVar10;
      uVar13 = (~(uint)(-1L << (bVar2 & 0x3f)) & uVar11) +
               *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar7 * 4);
    }
    uVar9 = *(longlong *)(lVar1 + (ulonglong)uVar3) << ((byte)uVar10 & 0x3f) | uVar9;
    param_2[2] = uVar9;
    uVar3 = (0x3f - uVar10 >> 3) + uVar3;
    *(uint *)((longlong)param_2 + 0x1c) = uVar3;
    *(uint *)(param_2 + 3) = uVar10 | 0x38;
    uVar4 = (ulonglong)((uint)uVar9 & 0x7ff);
    bVar2 = *(byte *)(param_1 + 0x1010 + uVar4 * 2);
    uVar9 = uVar9 >> (bVar2 & 0x3f);
    param_2[2] = uVar9;
    uVar11 = (uVar10 | 0x38) - (int)(char)bVar2;
    *(uint *)(param_2 + 3) = uVar11;
    uVar10 = (uint)*(char *)(param_1 + 0x1011 + uVar4 * 2);
    uVar7 = uVar10 - 2;
    if (3 < (int)uVar10) {
      bVar2 = (byte)(uVar7 >> 1);
      uVar8 = (uint)uVar9;
      uVar9 = uVar9 >> (bVar2 & 0x3f);
      param_2[2] = uVar9;
      uVar11 = uVar11 - (uVar7 >> 1);
      *(uint *)(param_2 + 3) = uVar11;
      uVar7 = (~(uint)(-1L << (bVar2 & 0x3f)) & uVar8) +
              *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar10 * 4);
    }
    uVar9 = *(longlong *)(lVar1 + (ulonglong)uVar3) << ((byte)uVar11 & 0x3f) | uVar9;
    param_2[2] = uVar9;
    *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar11 >> 3) + uVar3;
    *(uint *)(param_2 + 3) = uVar11 | 0x38;
    uVar4 = (ulonglong)((uint)uVar9 & 0x7ff);
    bVar2 = *(byte *)(param_1 + 0x1010 + uVar4 * 2);
    uVar9 = uVar9 >> (bVar2 & 0x3f);
    param_2[2] = uVar9;
    iVar12 = (uVar11 | 0x38) - (int)(char)bVar2;
    *(int *)(param_2 + 3) = iVar12;
    uVar10 = (uint)*(char *)(param_1 + 0x1011 + uVar4 * 2);
    uVar3 = uVar10 - 2;
    if (3 < (int)uVar10) {
      bVar2 = (byte)(uVar3 >> 1);
      param_2[2] = uVar9 >> (bVar2 & 0x3f);
      *(uint *)(param_2 + 3) = iVar12 - (uVar3 >> 1);
      uVar3 = (~(uint)(-1L << (bVar2 & 0x3f)) & (uint)uVar9) +
              *(int *)(&DAT_14cbf6e10 + (ulonglong)uVar10 * 4);
    }
    iVar15 = iVar15 + uVar3;
    iVar5 = iVar5 + uVar13;
    iVar14 = iVar14 + uVar7;
    *param_3 = (float)(int)(local_54 + iVar5) * local_58;
    param_3[1] = (float)(int)(iVar14 + local_50) * local_58;
    param_3[2] = (float)(int)(local_4c + iVar15) * local_58;
    param_3 = param_3 + 3;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
  local_78 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906297c FUN_14906297c body=225 status=ok
// SIG undefined FUN_14906297c(void)

void FUN_14906297c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0xb8) == '\0') {
    FUN_149062a5e(param_1 + 0x10,param_2);
  }
  FUN_149062a5e(param_1 + 0x1010,param_2);
  if (*(char *)(lVar1 + 0xb5) == '\x01') {
    FUN_149062a5e(param_1 + 0x2010,param_2);
  }
  if (*(char *)(lVar1 + 0xb3) == '\x01') {
    FUN_149062a5e(param_1 + 0x3010,param_2);
  }
  if (*(char *)(lVar1 + 0xb0) == '\x01') {
    FUN_149062a5e(param_1 + 0x4010,param_2);
  }
  if (*(char *)(lVar1 + 0xb1) == '\x01') {
    FUN_149062a5e(param_1 + 0x5010,param_2);
  }
  if (*(char *)(lVar1 + 0xb2) == '\x01') {
    FUN_149062a5e(param_1 + 0x6010,param_2);
  }
  if (*(char *)(lVar1 + 0xb4) != '\x01') {
    return;
  }
  FUN_149062a5e(param_1 + 0x7010,param_2);
  return;
}



// FUNCTION 149062a5e FUN_149062a5e body=329 status=ok
// SIG undefined FUN_149062a5e(void)

void FUN_149062a5e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_348 [32];
  ushort local_328 [256];
  byte local_128 [264];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_348;
  lVar2 = *param_2;
  uVar3 = *(uint *)(param_2 + 3);
  uVar5 = *(longlong *)(lVar2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
          ((byte)uVar3 & 0x3f) | param_2[2];
  uVar6 = (0x3f - uVar3 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
  *(uint *)((longlong)param_2 + 0x1c) = uVar6;
  uVar8 = uVar5 >> 9;
  uVar3 = (uVar3 | 0x38) - 9;
  param_2[2] = uVar8;
  *(uint *)(param_2 + 3) = uVar3;
  if ((uVar5 & 0x1ff) == 0) {
    FUN_14440b4db(local_328,local_128,0);
  }
  else {
    uVar5 = (ulonglong)((uint)uVar5 & 0x1ff);
    uVar7 = 0;
    do {
      uVar4 = *(longlong *)(lVar2 + (ulonglong)uVar6) << ((byte)uVar3 & 0x3f) | uVar8;
      uVar6 = uVar6 + (0x3f - uVar3 >> 3);
      *(uint *)((longlong)param_2 + 0x1c) = uVar6;
      uVar8 = uVar4 >> 4;
      param_2[2] = uVar8;
      uVar3 = (uVar3 | 0x38) - 4;
      *(uint *)(param_2 + 3) = uVar3;
      local_128[uVar7] = (byte)uVar4 & 0xf;
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    FUN_14440b4db(local_328,local_128);
    uVar8 = 0;
    do {
      bVar1 = local_128[uVar8];
      if (bVar1 != 0) {
        uVar3 = (uint)local_328[uVar8];
        do {
          *(byte *)(param_1 + (ulonglong)uVar3 * 2) = bVar1;
          *(char *)(param_1 + 1 + (ulonglong)uVar3 * 2) = (char)uVar8;
          uVar3 = uVar3 + (1 << (bVar1 & 0x1f));
        } while (uVar3 < 0x800);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149062ba8 FUN_149062ba8 body=653 status=ok
// SIG undefined FUN_149062ba8(void)

void FUN_149062ba8(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined1 *)(lVar2 + 0xb8) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  uVar1 = *(uint *)(param_2 + 3);
  uVar3 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
          ((byte)uVar1 & 0x3f) | param_2[2];
  *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar1 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
  param_2[2] = uVar3 >> 1;
  *(uint *)(param_2 + 3) = (uVar1 | 0x38) - 1;
  *(byte *)(lVar2 + 0xb0) = (byte)uVar3 & 1;
  uVar1 = *(uint *)(param_2 + 3);
  uVar3 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
          ((byte)uVar1 & 0x3f) | param_2[2];
  *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar1 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
  param_2[2] = uVar3 >> 1;
  *(uint *)(param_2 + 3) = (uVar1 | 0x38) - 1;
  *(byte *)(lVar2 + 0xb1) = (byte)uVar3 & 1;
  uVar1 = *(uint *)(param_2 + 3);
  uVar3 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
          ((byte)uVar1 & 0x3f) | param_2[2];
  *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar1 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
  param_2[2] = uVar3 >> 1;
  *(uint *)(param_2 + 3) = (uVar1 | 0x38) - 1;
  *(byte *)(lVar2 + 0xb2) = (byte)uVar3 & 1;
  uVar1 = *(uint *)(param_2 + 3);
  uVar3 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
          ((byte)uVar1 & 0x3f) | param_2[2];
  *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar1 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
  param_2[2] = uVar3 >> 1;
  *(uint *)(param_2 + 3) = (uVar1 | 0x38) - 1;
  *(byte *)(lVar2 + 0xb3) = (byte)uVar3 & 1;
  uVar1 = *(uint *)(param_2 + 3);
  uVar3 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
          ((byte)uVar1 & 0x3f) | param_2[2];
  *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar1 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
  param_2[2] = uVar3 >> 1;
  *(uint *)(param_2 + 3) = (uVar1 | 0x38) - 1;
  *(byte *)(lVar2 + 0xb4) = (byte)uVar3 & 1;
  if (0x7c < param_3) {
    uVar1 = *(uint *)(param_2 + 3);
    uVar3 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
            ((byte)uVar1 & 0x3f) | param_2[2];
    *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar1 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
    param_2[2] = uVar3 >> 1;
    *(uint *)(param_2 + 3) = (uVar1 | 0x38) - 1;
    *(byte *)(lVar2 + 0xb5) = (byte)uVar3 & 1;
  }
  uVar1 = *(uint *)(param_2 + 3);
  uVar3 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
          ((byte)uVar1 & 0x3f) | param_2[2];
  *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar1 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
  param_2[2] = uVar3 >> 1;
  *(uint *)(param_2 + 3) = (uVar1 | 0x38) - 1;
  *(byte *)(lVar2 + 0xb6) = (byte)uVar3 & 1;
  uVar1 = *(uint *)(param_2 + 3);
  uVar3 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
          ((byte)uVar1 & 0x3f) | param_2[2];
  *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar1 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
  param_2[2] = uVar3 >> 1;
  *(uint *)(param_2 + 3) = (uVar1 | 0x38) - 1;
  *(byte *)(lVar2 + 0xb7) = (byte)uVar3 & 1;
  uVar1 = *(uint *)(param_2 + 3);
  uVar3 = *(longlong *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c)) <<
          ((byte)uVar1 & 0x3f) | param_2[2];
  *(uint *)((longlong)param_2 + 0x1c) = (0x3f - uVar1 >> 3) + *(uint *)((longlong)param_2 + 0x1c);
  param_2[2] = uVar3 >> 1;
  *(uint *)(param_2 + 3) = (uVar1 | 0x38) - 1;
  *(byte *)(lVar2 + 0xb8) = (byte)uVar3 & 1;
  return;
}



// FUNCTION 149062e3a FUN_149062e3a body=75 status=ok
// SIG undefined FUN_149062e3a(void)

void FUN_149062e3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_149062e86(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149062e86 FUN_149062e86 body=365 status=ok
// SIG undefined FUN_149062e86(void)

void FUN_149062e86(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbe8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  local_28 = param_1;
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cbe8);
  if (iVar3 < 0x11) {
    FUN_14906c498(param_2,param_1 + 0x50);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      }
      else {
        FUN_14572512c(param_2,&local_30);
      }
    }
    else {
      local_30 = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
    if (0x10 < iVar3) {
      FUN_147b4fb58(param_2,param_1 + 0x30);
    }
  }
  else {
    switchD_143c3d4dc::caseD_21(param_1,param_2);
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3cb60);
    if (0x1b < iVar3) goto LAB_149062f09;
  }
  FUN_144403a52(&local_28);
LAB_149062f09:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149062ff4 FUN_149062ff4 body=105 status=ok
// SIG undefined FUN_149062ff4(void)

void FUN_149062ff4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x78) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x70), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  }
  local_20 = *param_2;
  *(int *)(local_20 + 0x94) = *(int *)(local_20 + 0x94) + 1;
  FUN_1468be722(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906305e FUN_14906305e body=36 status=ok
// SIG undefined FUN_14906305e(void)

undefined8 FUN_14906305e(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"%d Tracks",*(undefined4 *)(param_1 + 0x58));
  return param_2;
}



// FUNCTION 149063088 FUN_149063088 body=203 status=ok
// SIG undefined FUN_149063088(void)

void FUN_149063088(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  FUN_144a83b10(&local_78,*(undefined4 *)(param_1 + 0x58));
  FUN_1446ddc76(&local_80,"Total Tracks",1);
  local_60 = local_80;
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  uStack_50 = (undefined4)uStack_70;
  uStack_4c = uStack_70._4_4_;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 2;
  FUN_1407c67d8(param_2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_88,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_88);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149063154 FUN_149063154 body=124 status=ok
// SIG undefined FUN_149063154(void)

void FUN_149063154(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  
  switchD_143c3d4dc::caseD_38();
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 != (longlong *)0x0 & bVar4) == 1) {
        FUN_1456cec3c(plVar3);
LAB_14906319a:
        (**(code **)(*plVar3 + 400))(plVar3,param_2);
        bVar4 = DAT_14c950c29;
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_14906319a;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1490631d0 FUN_1490631d0 body=79 status=ok
// SIG undefined FUN_1490631d0(void)

float FUN_1490631d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 < 1) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 0.0;
    lVar2 = 0;
    do {
      fVar3 = (float)(**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x50) + lVar2 * 8) + 0x2d0
                                 ))();
      if (fVar4 <= fVar3) {
        fVar4 = fVar3;
      }
      lVar2 = lVar2 + 1;
    } while (iVar1 != lVar2);
  }
  return fVar4;
}



// FUNCTION 149063220 FUN_149063220 body=283 status=ok
// SIG undefined FUN_149063220(void)

void FUN_149063220(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128 [160];
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar6);
      local_68 = 0;
      memset(local_128,0,0x99);
      local_88 = 0;
      uStack_80 = 0;
      uStack_7f = 0;
      uStack_78 = 0;
      uStack_77 = 0;
      cVar5 = (**(code **)(*plVar4 + 0x2e8))(plVar4,param_2,local_128);
      if (cVar5 != '\0') {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_14906c9d2(param_3,iVar2);
        }
        FUN_14906c6c4((longlong)iVar2 * 200 + *param_3);
      }
      FUN_145f7cfa2(local_128);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906333c FUN_14906333c body=251 status=ok
// SIG undefined FUN_14906333c(void)

void FUN_14906333c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = *(longlong *)(param_2 + 0x10);
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    if (lVar2 != 0) {
      local_40 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      local_30 = &local_40;
      FUN_1474be378(param_1 + 7);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[8];
    *(uint *)(param_1 + 8) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x44) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 7,iVar1);
    }
    *(longlong *)(param_1[7] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149063438 FUN_149063438 body=172 status=ok
// SIG undefined FUN_149063438(void)

longlong FUN_149063438(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_14906347b:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_14906349d;
        }
        else {
          if (lVar3 != 0) goto LAB_14906347b;
LAB_14906349d:
          lVar3 = 0;
        }
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x40));
  }
  return 0;
}



// FUNCTION 1490634e4 FUN_1490634e4 body=256 status=ok
// SIG undefined FUN_1490634e4(void)

void FUN_1490634e4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x40);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_149063531:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_149063553;
        }
        else {
          if (lVar5 != 0) goto LAB_149063531;
LAB_149063553:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x40);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x40);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x38) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x38) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x40);
            }
            *(int *)(param_1 + 0x40) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x38));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 149063686 FUN_149063686 body=134 status=ok
// SIG undefined FUN_149063686(void)

undefined8 * FUN_149063686(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar2 = &PTR_FUN_14ba8a700;
  puVar2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  }
  else {
    FUN_144a06ca8(puVar2 + 1,iVar1,0);
    memcpy((void *)puVar2[1],_Src,(longlong)iVar1 << 2);
  }
  *puVar2 = &PTR_FUN_14ba8a6d0;
  return puVar2;
}



// FUNCTION 14906370c FUN_14906370c body=191 status=ok
// SIG undefined FUN_14906370c(void)

undefined4 FUN_14906370c(longlong param_1)

{
  void *_Src;
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined **local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &PTR_FUN_14ba8a700;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 0x30);
  lVar2 = (longlong)local_38;
  _Src = *(void **)(param_1 + 0x28);
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144a06ca8(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 << 2);
  }
  local_48 = &PTR_FUN_14ba8a6d0;
  uVar1 = FUN_144403cd6();
  local_48 = &PTR_FUN_14ba8a700;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490637d0 FUN_1490637d0 body=134 status=ok
// SIG undefined FUN_1490637d0(void)

undefined8 * FUN_1490637d0(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar2 = &PTR_FUN_14ba8a700;
  puVar2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  }
  else {
    FUN_144a06ca8(puVar2 + 1,iVar1,0);
    memcpy((void *)puVar2[1],_Src,(longlong)iVar1 << 2);
  }
  *puVar2 = &PTR_FUN_14ba84b80;
  return puVar2;
}



// FUNCTION 149063856 FUN_149063856 body=174 status=ok
// SIG undefined FUN_149063856(void)

undefined4 FUN_149063856(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_145adf2ae();
  uVar2 = (**(code **)(DAT_14cbf71a8 + 0xd8))
                    (&DAT_14cbf71a8,*(undefined8 *)(*param_2 + 0x18),(int)param_2[2],&local_2c);
  uVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,uVar2,local_2c,param_2[3]);
  FUN_145adf2ae();
  (**(code **)(DAT_14cbf71a8 + 0xe0))
            (&DAT_14cbf71a8,*(undefined8 *)(*param_2 + 0x18),(int)param_2[2]);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149063906 FUN_149063906 body=241 status=ok
// SIG undefined FUN_149063906(void)

bool FUN_149063906(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 auStack_108 [40];
  undefined **local_e0 [5];
  byte local_b8;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    FUN_144869430(local_e0);
    local_e0[0] = &PTR__purecall_149e30ac0;
    local_48 = 0;
    local_38 = '\0';
    local_b8 = local_b8 | 1;
    local_50 = param_2;
    local_40 = param_3 & 0xffffffff;
    FUN_1449c2eca(local_e0,1);
    local_e0[0] = &PTR_FUN_149e447c0;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
              (*(longlong **)(param_1 + 0x38),local_e0,param_4);
    if (local_38 == '\x01') {
      FUN_1400020a8(local_50);
      local_50 = 0;
    }
    FUN_144a7fc42(local_e0);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149063c44 FUN_149063c44 body=78 status=ok
// SIG undefined FUN_149063c44(void)

void FUN_149063c44(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x658) = 1;
  *(undefined4 *)(param_1 + 0x6b8) = 0x3f800000;
  FUN_145adf2ae();
                    /* WARNING: Could not recover jumptable at 0x000149063c8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_14cbf71a8 + 200))(&DAT_14cbf71a8,param_1);
  return;
}



// FUNCTION 149063c92 FUN_149063c92 body=88 status=ok
// SIG undefined FUN_149063c92(void)

void FUN_149063c92(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x66c) = 0;
  *(undefined1 *)(param_1 + 0x658) = 1;
  *(undefined4 *)(param_1 + 0x6b8) = 0x3f800000;
  FUN_145adf2ae();
                    /* WARNING: Could not recover jumptable at 0x000149063ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_14cbf71a8 + 200))(&DAT_14cbf71a8,param_1);
  return;
}



// FUNCTION 149063cea FUN_149063cea body=78 status=ok
// SIG undefined FUN_149063cea(void)

void FUN_149063cea(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x6b8) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x658) = 1;
  FUN_145adf2ae();
                    /* WARNING: Could not recover jumptable at 0x000149063d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_14cbf71a8 + 200))(&DAT_14cbf71a8,param_1);
  return;
}



// FUNCTION 149063d38 FUN_149063d38 body=94 status=ok
// SIG undefined FUN_149063d38(void)

void FUN_149063d38(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_1 + 0x6bc);
  *(undefined4 *)(param_1 + 0x6b8) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x658) = 1;
  FUN_145adf2ae();
                    /* WARNING: Could not recover jumptable at 0x000149063d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_14cbf71a8 + 200))(&DAT_14cbf71a8,param_1);
  return;
}



// FUNCTION 149063d9a FUN_149063d9a body=154 status=ok
// SIG undefined FUN_149063d9a(void)

void FUN_149063d9a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x65a) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149063e3c FUN_149063e3c body=163 status=ok
// SIG undefined FUN_149063e3c(void)

void FUN_149063e3c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149063ee0(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149063ee0 FUN_149063ee0 body=902 status=ok
// SIG undefined FUN_149063ee0(void)

undefined8 FUN_149063ee0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined1 local_c8 [8];
  undefined1 local_c0 [48];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_1[0xca] != param_2) {
    lVar2 = param_1[0x15];
    cVar3 = FUN_14342d5e4();
    if ((((cVar3 != '\0') || ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0)) || (lVar2 == 0)) ||
       (*(char *)((longlong)param_1 + 0x1fb) != '\0')) {
      FUN_145adf2ae();
      (**(code **)(DAT_14cbf71a8 + 0xc0))(&DAT_14cbf71a8,param_1);
      FUN_145968d90(param_1);
      FUN_1408e177a(param_1 + 0xb6,0);
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      param_1[0xca] = param_2;
      *(undefined4 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)(param_1 + 0xd6) = 0;
      if (*(int *)((longlong)param_1 + 0x6b4) != 0) {
        FUN_14906ca6a(param_1 + 0xd5);
      }
      FUN_1490648de(param_1);
      FUN_145adf2ae();
      (**(code **)(DAT_14cbf71a8 + 0xb8))(&DAT_14cbf71a8,param_1);
      FUN_1448215fa(param_1);
      FUN_1406cc378(param_1);
      plVar4 = (longlong *)FUN_140083894();
      (**(code **)(*plVar4 + 0x70))(plVar4,param_1);
      (**(code **)(*param_1 + 0x540))(param_1);
      uVar5 = 1;
      goto LAB_149064174;
    }
    FUN_1446ddc76(local_c8,&DAT_14a492018,1);
    FUN_14276766e(local_c0,local_c8);
    FUN_14010318a(param_1,local_f8,0);
    FUN_140233b1a(local_e8,local_f8);
    local_50 = L"SetGeometryCache";
    local_48 = 0x10;
    FUN_1446e940c(local_11c,&local_50);
    local_50 = L"GeometryCacheComponent";
    local_48 = 0x16;
    FUN_1446e940c(local_120,&local_50);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Calling SetGeometryCache on \'{0}\' but Mobility is Static.");
    FUN_14023409e(&local_108,local_118,1);
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    FUN_14023423e(local_40,local_e8);
    local_68 = &local_30;
    local_70 = &local_50;
    FUN_14010d304(&local_60);
    local_80 = local_108;
    local_78 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d8,&local_80,&local_60);
    FUN_14007f2db(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    FUN_1427679d4(local_c0,local_90,local_d8);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_c0);
  }
  uVar5 = 0;
LAB_149064174:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906426c FUN_14906426c body=154 status=ok
// SIG undefined FUN_14906426c(void)

void FUN_14906426c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x659) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149064308 FUN_149064308 body=171 status=ok
// SIG undefined FUN_149064308(void)

void FUN_149064308(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = local_1c;
  if (100.0 <= local_1c) {
    fVar1 = 100.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x664) = fVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490643b8 FUN_1490643b8 body=154 status=ok
// SIG undefined FUN_1490643b8(void)

void FUN_1490643b8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x6c1) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149064454 FUN_149064454 body=171 status=ok
// SIG undefined FUN_149064454(void)

void FUN_149064454(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = local_1c;
  if (512.0 <= local_1c) {
    fVar1 = 512.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x660) = fVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149064500 FUN_149064500 body=199 status=ok
// SIG undefined FUN_149064500(void)

void FUN_149064500(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (1e-08 < ABS(*(float *)(param_1 + 0x65c) - local_1c)) {
    *(float *)(param_1 + 0x65c) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490645c8 FUN_1490645c8 body=146 status=ok
// SIG undefined FUN_1490645c8(void)

void FUN_1490645c8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x6c4) = local_28;
  *(undefined4 *)(param_1 + 0x6c8) = uStack_24;
  *(undefined4 *)(param_1 + 0x6cc) = uStack_20;
  *(undefined4 *)(param_1 + 0x6d0) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149064686 FUN_149064686 body=457 status=ok
// SIG undefined FUN_149064686(void)

void FUN_149064686(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar2 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((*(char *)(param_1 + 0x6c0) == '\x01') && (*(longlong *)(param_1 + 0x650) != 0)) &&
     (*(char *)(param_1 + 0x658) == '\x01')) {
    local_48 = local_38 != 0;
    FUN_144404370(param_1,local_2c,iVar2 != 0,iVar1 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149064882 FUN_149064882 body=91 status=ok
// SIG undefined FUN_149064882(void)

void FUN_149064882(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x668) = 0;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (*(int *)(param_1 + 0x6b4) != 0) {
    FUN_14906ca6a(param_1 + 0x6a8);
  }
  FUN_1490648de(param_1);
  FUN_145adf2ae();
  (**(code **)(DAT_14cbf71a8 + 0xb8))(&DAT_14cbf71a8,param_1);
  FUN_1448aa298(param_1);
  return;
}



// FUNCTION 1490648de FUN_1490648de body=129 status=ok
// SIG undefined FUN_1490648de(void)

void FUN_1490648de(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  
  if (*(longlong *)(param_1 + 0x650) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x650) + 0x58);
    *(int *)(param_1 + 0x668) = iVar1;
    *(undefined4 *)(param_1 + 0x6bc) = 0;
    if (0 < iVar1) {
      uVar2 = 0;
      do {
        FUN_149064cfa(param_1,uVar2 & 0xffffffff);
        fVar3 = (float)(**(code **)(**(longlong **)
                                      (*(longlong *)(*(longlong *)(param_1 + 0x650) + 0x50) +
                                      uVar2 * 8) + 0x2d0))();
        fVar4 = *(float *)(param_1 + 0x6bc);
        if (*(float *)(param_1 + 0x6bc) <= fVar3) {
          fVar4 = fVar3;
        }
        *(float *)(param_1 + 0x6bc) = fVar4;
        uVar2 = uVar2 + 1;
      } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x668));
    }
  }
  FUN_149064ab8(param_1);
  return;
}



// FUNCTION 149064960 FUN_149064960 body=343 status=ok
// SIG undefined FUN_149064960(void)

char FUN_149064960(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined4 *local_120;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_d8 [17];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)(param_1 + 0x650) + 0x50) + (longlong)param_2 * 8);
  lVar4 = *(longlong *)(param_1 + 0x6a8);
  lVar7 = (longlong)param_2 * 0xc0;
  puVar6 = (undefined8 *)(lVar4 + lVar7);
  (**(code **)(*plVar1 + 0x300))(plVar1,param_3,*(undefined1 *)(param_1 + 0x659));
  local_e0 = 0;
  local_128 = local_d8;
  cVar2 = (**(code **)(*plVar1 + 0x2a0))
                    (plVar1,param_3,*(undefined1 *)(param_1 + 0x659),lVar4 + lVar7 + 0xb8);
  local_128 = (undefined8 *)(lVar4 + lVar7 + 0xbc);
  local_120 = &local_110;
  cVar3 = (**(code **)(*plVar1 + 0x2a8))
                    (plVar1,param_3,*(undefined1 *)(param_1 + 0x659),
                     *(float *)(param_1 + 0x6b8) <= 0.0 && *(float *)(param_1 + 0x6b8) != 0.0);
  if (cVar3 != '\0') {
    puVar6[0x16] = CONCAT71(uStack_df,local_e0);
    puVar6[0x14] = local_f0;
    puVar6[0x15] = uStack_e8;
    puVar6[0x12] = local_100;
    puVar6[0x13] = uStack_f8;
    *(undefined4 *)(puVar6 + 0x10) = local_110;
    *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_10c;
    *(undefined4 *)(puVar6 + 0x11) = uStack_108;
    *(undefined4 *)((longlong)puVar6 + 0x8c) = uStack_104;
  }
  if (cVar2 != '\0') {
    puVar5 = local_d8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar3 = '\x01';
  }
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149064ab8 FUN_149064ab8 body=576 status=ok
// SIG undefined FUN_149064ab8(void)

void FUN_149064ab8(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
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
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  char local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)(int)param_1[0xd6] != 0) {
    lVar8 = param_1[0xd5];
    lVar9 = (longlong)(int)param_1[0xd6] * 0xc0;
    uVar11 = 0;
    uVar12 = 0;
    cVar7 = '\0';
    uVar14 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar26 = 0;
    uVar27 = 0;
    do {
      FUN_144b12ece(lVar8 + 0x80,&local_c8,lVar8);
      uVar28 = (undefined4)((ulonglong)local_c8 >> 0x20);
      uVar25 = (undefined4)((ulonglong)local_c0 >> 0x20);
      uVar22 = (undefined4)((ulonglong)local_b8 >> 0x20);
      uVar19 = (undefined4)((ulonglong)local_b0 >> 0x20);
      uVar16 = (undefined4)((ulonglong)local_a8 >> 0x20);
      uVar13 = (undefined4)((ulonglong)local_a0 >> 0x20);
      if (local_98 == '\0' || cVar7 == '\0') {
        if (local_98 != '\0') {
          uVar11 = SUB84(local_a0,0);
          uVar12 = uVar13;
          uVar14 = SUB84(local_a8,0);
          uVar15 = uVar16;
          uVar17 = SUB84(local_b0,0);
          uVar18 = uVar19;
          uVar20 = SUB84(local_b8,0);
          uVar21 = uVar22;
          uVar23 = SUB84(local_c0,0);
          uVar24 = uVar25;
          uVar26 = SUB84(local_c8,0);
          uVar27 = uVar28;
          cVar7 = local_98;
        }
      }
      else {
        if (local_c8 <= (double)CONCAT44(uVar27,uVar26)) {
          uVar26 = SUB84(local_c8,0);
          uVar27 = uVar28;
        }
        if (local_c0 <= (double)CONCAT44(uVar24,uVar23)) {
          uVar23 = SUB84(local_c0,0);
          uVar24 = uVar25;
        }
        if (local_b8 <= (double)CONCAT44(uVar21,uVar20)) {
          uVar20 = SUB84(local_b8,0);
          uVar21 = uVar22;
        }
        if ((double)CONCAT44(uVar18,uVar17) <= local_b0) {
          uVar17 = SUB84(local_b0,0);
          uVar18 = uVar19;
        }
        if ((double)CONCAT44(uVar15,uVar14) <= local_a8) {
          uVar14 = SUB84(local_a8,0);
          uVar15 = uVar16;
        }
        if ((double)CONCAT44(uVar12,uVar11) <= local_a0) {
          uVar11 = SUB84(local_a0,0);
          uVar12 = uVar13;
        }
      }
      lVar8 = lVar8 + 0xc0;
      lVar9 = lVar9 + -0xc0;
    } while (lVar9 != 0);
    if (cVar7 != '\0') {
      dVar1 = ((double)CONCAT44(uVar12,uVar11) - (double)CONCAT44(uVar21,uVar20)) * 0.5;
      dVar2 = ((double)CONCAT44(uVar15,uVar14) - (double)CONCAT44(uVar24,uVar23)) * 0.5;
      dVar3 = ((double)CONCAT44(uVar18,uVar17) - (double)CONCAT44(uVar27,uVar26)) * 0.5;
      dVar4 = (double)CONCAT44(uVar21,uVar20) + dVar1;
      dVar5 = (double)CONCAT44(uVar24,uVar23) + dVar2;
      dVar6 = (double)CONCAT44(uVar27,uVar26) + dVar3;
      dVar10 = SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
      goto LAB_149064c5e;
    }
  }
  dVar10 = 0.0;
  dVar1 = 0.0;
  dVar2 = 0.0;
  dVar3 = 0.0;
  dVar4 = 0.0;
  dVar5 = 0.0;
  dVar6 = 0.0;
LAB_149064c5e:
  param_1[0xce] = (longlong)dVar6;
  param_1[0xcf] = (longlong)dVar5;
  param_1[0xd0] = (longlong)dVar4;
  param_1[0xd1] = (longlong)dVar3;
  param_1[0xd2] = (longlong)dVar2;
  param_1[0xd3] = (longlong)dVar1;
  param_1[0xd4] = (longlong)dVar10;
  (**(code **)(*param_1 + 0x540))(param_1);
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149064cfa FUN_149064cfa body=90 status=ok
// SIG undefined FUN_149064cfa(void)

void FUN_149064cfa(longlong param_1,int param_2)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x6b0) <= param_2) {
    FUN_149064faa(param_1 + 0x6a8,param_2 + 1);
  }
  fVar1 = *(float *)(param_1 + 0x65c);
  if (14400.0 <= fVar1) {
    fVar1 = 14400.0;
  }
  if (fVar1 <= -14400.0) {
    fVar1 = -14400.0;
  }
  FUN_149064960(param_1,param_2,fVar1 + *(float *)(param_1 + 0x66c));
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 149064d54 FUN_149064d54 body=92 status=ok
// SIG undefined FUN_149064d54(void)

void FUN_149064d54(longlong param_1)

{
  FUN_145adf2ae();
  (**(code **)(DAT_14cbf71a8 + 0xc0))(&DAT_14cbf71a8,param_1);
  FUN_1447c0e7a(param_1);
  *(undefined4 *)(param_1 + 0x668) = 0;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (*(int *)(param_1 + 0x6b4) == 0) {
    return;
  }
  FUN_14906ca6a(param_1 + 0x6a8);
  return;
}



// FUNCTION 149064db0 FUN_149064db0 body=7 status=ok
// SIG undefined FUN_149064db0(void)

undefined1 FUN_149064db0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x6c0);
}



// FUNCTION 149064dc4 FUN_149064dc4 body=29 status=ok
// SIG undefined FUN_149064dc4(void)

undefined8 FUN_149064dc4(longlong param_1,undefined8 param_2)

{
  FUN_144a80a4c(param_1 + 0x670);
  return param_2;
}



// FUNCTION 149064de2 FUN_149064de2 body=151 status=ok
// SIG undefined FUN_149064de2(void)

undefined8 FUN_149064de2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145adf2ae();
  (**(code **)(DAT_14cbf71a8 + 200))(&DAT_14cbf71a8,param_1);
  uVar1 = FUN_14001cc68(0x390,0x10);
  local_48 = 0;
  local_38 = &PTR_LAB_14ba8b230;
  local_58 = FUN_14440c26e;
  local_30 = uVar1;
  FUN_144405238(uVar1,param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149064e8e FUN_149064e8e body=98 status=ok
// SIG undefined FUN_149064e8e(void)

longlong FUN_149064e8e(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (-1 < (int)param_2) {
    if (((int)param_2 < *(int *)(param_1 + 0x628)) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x620) + (ulonglong)param_2 * 8), lVar1 != 0))
    {
      return lVar1;
    }
    lVar1 = *(longlong *)(param_1 + 0x650);
    if ((lVar1 != 0) && ((int)param_2 < *(int *)(lVar1 + 0x38))) {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + (ulonglong)param_2 * 8);
      if (DAT_14c950c29 != '\x01') {
        return lVar1;
      }
      if (lVar1 == 0) {
        return 0;
      }
      FUN_1456cec3c(lVar1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 149064f2a FUN_149064f2a body=104 status=ok
// SIG undefined FUN_149064f2a(void)

undefined8 * FUN_149064f2a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *(longlong *)(param_1 + 0x650);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x48);
    _Src = *(void **)(lVar2 + 0x40);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1401b309e(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
    }
  }
  return param_2;
}



// FUNCTION 149064f92 FUN_149064f92 body=24 status=ok
// SIG undefined FUN_149064f92(void)

bool FUN_149064f92(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x618))();
  return iVar1 != -1;
}



// FUNCTION 149064faa FUN_149064faa body=95 status=ok
// SIG undefined FUN_149064faa(void)

void FUN_149064faa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14906caf0(param_1,iVar1);
    }
    FUN_14906ca9a((longlong)iVar1 * 0xc0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14906500a FUN_14906500a body=958 status=ok
// SIG undefined FUN_14906500a(void)

longlong * FUN_14906500a(longlong *param_1,byte *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*param_2;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *param_2 = local_24 != 0;
  }
  else {
    *param_2 = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[1];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[1] = local_24 != 0;
  }
  else {
    param_2[1] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[2];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[2] = local_24 != 0;
  }
  else {
    param_2[2] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[3];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[3] = local_24 != 0;
  }
  else {
    param_2[3] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[4];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[4] = local_24 != 0;
  }
  else {
    param_2[4] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[5];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[5] = local_24 != 0;
  }
  else {
    param_2[5] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[6];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[6] = local_24 != 0;
  }
  else {
    param_2[6] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[7];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[7] = local_24 != 0;
  }
  else {
    param_2[7] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[8];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[8] = local_24 != 0;
  }
  else {
    param_2[8] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490653ca FUN_1490653ca body=71 status=ok
// SIG undefined FUN_1490653ca(void)

void FUN_1490653ca(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1470eb252();
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
      FUN_14906cb84();
      return;
    }
  }
  return;
}



// FUNCTION 149065412 FUN_149065412 body=376 status=ok
// SIG undefined FUN_149065412(void)

void FUN_149065412(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14ba87790;
  iVar1 = *(int *)(param_1 + 0x54);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[0x53];
    lVar6 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar6);
      if (puVar3 != (undefined8 *)0x0) {
        FUN_144725486(puVar3 + 0x15);
        FUN_144725486(puVar3 + 0x1a);
        FUN_144725486(puVar3 + 0x1f);
        FUN_144725486(puVar3 + 0x24);
        FUN_144725486(puVar3 + 0x29);
        FUN_144725486(puVar3 + 0x2e);
        (**(code **)(puVar3[8] + 0x20))(puVar3 + 8);
        (**(code **)(puVar3[0xd] + 0x20))(puVar3 + 0xd);
        FUN_14052082e(puVar3 + 0x7d);
        lVar4 = puVar3[1];
        if (lVar4 != 0) {
          FUN_145f7cfa2(lVar4);
          FUN_1400020a8(lVar4);
        }
        lVar4 = puVar3[2];
        if (lVar4 != 0) {
          FUN_145f7cfa2(lVar4);
          FUN_1400020a8(lVar4);
        }
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)((longlong)param_1 + 0x2a4) != 0) {
    FUN_14906d0f0(param_1 + 0x53,0);
  }
  if (param_1[0x6a] != 0) {
    plVar5 = param_1 + 0x6e;
    if ((longlong *)param_1[0x6c] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x6c];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_14906558a(param_1 + 0x55);
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 14906558a FUN_14906558a body=103 status=ok
// SIG undefined FUN_14906558a(void)

void FUN_14906558a(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1490655fa FUN_1490655fa body=921 status=ok
// SIG undefined FUN_1490655fa(void)

void FUN_1490655fa(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_618 [32];
  longlong local_5f8;
  longlong local_5e8;
  undefined4 *local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined8 local_598 [16];
  longlong local_518 [108];
  undefined8 auStack_1b8 [46];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_618;
  *(float *)(param_5 + 0x2c) = DAT_14c846358;
  *(ulonglong *)(param_5 + 0x24) = CONCAT44(DAT_14c846350._4_4_,(float)DAT_14c846350);
  *(undefined4 *)(param_5 + 0x20) = DAT_14c846338;
  *(undefined8 *)(param_5 + 0x18) = DAT_14c846330;
  lVar6 = *(longlong *)(param_3 + 8);
  if ((((*(char *)(lVar6 + 0xb4) == '\x01') &&
       (lVar3 = *(longlong *)(param_3 + 0x10), *(char *)(lVar3 + 0xb4) == '\x01')) &&
      (*(int *)(lVar6 + 8) == *(int *)(lVar6 + 0x68))) &&
     (*(int *)(lVar3 + 8) == *(int *)(lVar3 + 0x68))) {
    fVar9 = *(float *)(param_1 + 0x310);
    fVar8 = DAT_14c846358 * fVar9;
    fVar10 = DAT_14c846350._4_4_ * fVar9;
    fVar7 = *(float *)(param_3 + 0x2c);
    *(float *)(param_5 + 0x3c) = fVar9 * (float)DAT_14c846350 * fVar7;
    *(float *)(param_5 + 0x40) = fVar10 * fVar7;
    *(float *)(param_5 + 0x44) = fVar8 * fVar7;
    *(undefined8 *)(param_5 + 0x30) = DAT_14c846330;
    *(undefined4 *)(param_5 + 0x38) = DAT_14c846338;
    fVar7 = 1.0;
  }
  else {
    fVar9 = 0.0;
    if (DAT_14c75b13c <= *(uint *)(param_1 + 0x308)) {
      fVar9 = 1.0;
    }
    fVar8 = DAT_14c846358 * fVar9;
    fVar10 = DAT_14c846350._4_4_ * fVar9;
    fVar7 = 1.0 - fVar9;
    *(float *)(param_5 + 0x3c) = fVar9 * (float)DAT_14c846350;
    *(float *)(param_5 + 0x40) = fVar10;
    *(float *)(param_5 + 0x44) = fVar8;
    *(undefined8 *)(param_5 + 0x30) = DAT_14c846330;
    *(undefined4 *)(param_5 + 0x38) = DAT_14c846338;
  }
  *(float *)(param_5 + 0x48) = fVar7;
  local_5e0 = param_4;
  FUN_144a7ebcb();
  *(ulonglong *)(param_5 + 8) = param_3 + (ulonglong)(*(uint *)(param_3 + 0xa0) & 1) * 0x28 + 0x40;
  *(ulonglong *)(param_5 + 0x10) =
       param_3 + (ulonglong)(~*(uint *)(param_3 + 0xa0) & 1) * 0x28 + 0x40;
  local_5d0 = *(undefined4 *)(param_5 + 0x20);
  local_5d8 = *(undefined8 *)(param_5 + 0x18);
  local_5c0 = *(undefined4 *)(param_5 + 0x2c);
  local_5c8 = *(undefined8 *)(param_5 + 0x24);
  local_5b0 = *(undefined4 *)(param_5 + 0x38);
  local_5b8 = *(undefined8 *)(param_5 + 0x30);
  local_5a0 = *(undefined4 *)(param_5 + 0x44);
  local_5a8 = *(undefined8 *)(param_5 + 0x3c);
  local_59c = *(undefined4 *)(param_5 + 0x48);
  FUN_144406708(local_518);
  lVar6 = *(longlong *)(param_5 + 0x50);
  *(longlong *)(param_5 + 0x50) = local_518[0];
  local_518[0] = 0;
  if (lVar6 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (local_518[0] != 0) {
      LOCK();
      puVar1 = (uint *)(local_518[0] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  local_5f8 = param_5 + 8;
  FUN_14350e92a(param_3 + 0x170,param_2,*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10)
               );
  lVar6 = *(longlong *)(param_7 + 0xa8);
  if (*(longlong *)(param_7 + 0xa8) == 0) {
    lVar6 = param_7;
  }
  *(longlong *)(lVar6 + 0x18) = param_3 + 0x148;
  *(longlong *)(param_7 + 0xb8) = param_3 + 0x170;
  *(undefined4 *)(param_7 + 0xd8) = 0;
  local_5e8 = param_5 + 8;
  FUN_144a8b74e(local_518);
  FUN_144787006(param_1,local_518);
  FUN_1447fea8d(local_598,param_3 + 0x360,param_1 + 0x100);
  puVar4 = local_598;
  puVar5 = auStack_1b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_1417ed2e8(param_6,param_2,local_518);
  *(longlong *)(lVar6 + 8) = param_6 + 8;
  lVar3 = *(longlong *)(param_3 + 8 + (ulonglong)*(byte *)(param_3 + 0x3e0) * 8);
  *(undefined4 *)(lVar6 + 0x58) = *local_5e0;
  *(undefined4 *)(lVar6 + 0x5c) = local_5e0[1];
  *(undefined4 *)(lVar6 + 0x68) = 0;
  *(int *)(lVar6 + 0x6c) = *(int *)(lVar3 + 8) + -1;
  *(longlong *)(lVar6 + 0x40) = local_5e8;
  *(uint *)(param_7 + 0xe4) =
       *(uint *)(param_7 + 0xe4) & 0xffe03fbf | (*(byte *)(param_1 + 0x6b) & 1) << 6;
  if ((local_48 ^ (ulonglong)auStack_618) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149065994 FUN_149065994 body=1299 status=ok
// SIG undefined FUN_149065994(void)

void FUN_149065994(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined8 *local_2a0;
  undefined1 *local_298;
  longlong local_288;
  longlong local_280;
  undefined8 *local_278;
  longlong *local_270;
  longlong local_268;
  longlong *local_260;
  longlong local_258;
  longlong *local_250;
  longlong lStack_248;
  uint local_240;
  uint local_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_224;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong lStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined1 uStack_1a8;
  byte bStack_1a7;
  undefined2 uStack_1a6;
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_150 [168];
  undefined1 *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_288 = param_2;
  if ((*(int *)(DAT_14cbf7150 + 4) != 0) && ((longlong)*(int *)(param_1 + 0x2a0) != 0)) {
    plVar17 = *(longlong **)(param_1 + 0x298);
    plVar15 = plVar17 + *(int *)(param_1 + 0x2a0);
    local_278 = (undefined8 *)(param_1 + 0x100);
    local_280 = param_1;
    local_270 = plVar15;
    do {
      plVar3 = (longlong *)*plVar17;
      param_3 = CONCAT71((int7)(param_3 >> 8),*(undefined1 *)(param_1 + 0x340)) & 0xffffffffffffff01
      ;
      lVar9 = (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined4 *)(param_1 + 0x30c),param_3);
      if (*(char *)(lVar9 + 0x10) == '\x01') {
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        uStack_1b0 = 0;
        lStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        uStack_1a8 = 0xff;
        bStack_1a7 = bStack_1a7 & 0xe0;
        uStack_1a6 = 0;
        uStack_1a4 = 0x100;
        uStack_1a0 = 0;
        local_158 = 0;
        local_1d0 = plVar3 + 0x7d;
        uStack_188 = 0;
        uStack_184 = 0;
        uStack_180 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        local_18c = 0;
        uStack_168 = 0;
        uStack_164 = 0;
        local_178 = (undefined8 *)0x0;
        uStack_16c = 0;
        uStack_170 = 1;
        FUN_140518214(&local_178,0);
        puVar10 = local_278;
        puVar16 = local_178;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar16 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar16 = puVar16 + 1;
        }
        local_260 = plVar3;
        if (0 < *(int *)(plVar3[(ulonglong)*(byte *)(plVar3 + 0x7c) + 1] + 0x78)) {
          lVar9 = 0;
          lVar13 = 0;
          local_268 = plVar3[(ulonglong)*(byte *)(plVar3 + 0x7c) + 1];
          do {
            lVar14 = *(longlong *)(local_268 + 0x70);
            local_258 = lVar9 + lVar14;
            local_a8 = (undefined1 *)0x0;
            local_a0 = 0x100000000;
            local_88 = 0;
            local_98 = 0;
            uStack_90 = 0;
            uStack_80 = 0xffffffff;
            local_78 = 0xff0000ffffffff;
            uStack_70 = uStack_70 & 0xffffff00;
            uStack_6c = 0x40c00f07;
            local_68 = local_68 & 0xfc;
            FUN_141793e06(local_150);
            lVar4 = local_288;
            puVar10 = (undefined8 *)FUN_14440ce54(*(undefined8 *)(local_288 + 0xe8));
            puVar10[1] = 0;
            puVar10[2] = 0;
            puVar10[3] = 0;
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[8] = 0;
            puVar10[9] = 0;
            *puVar10 = &PTR_FUN_14ba8b478;
            puVar10[10] = 0;
            puVar10[0xb] = 0;
            puVar10[0xc] = 0;
            puVar10[0xd] = 0;
            puVar10[0xe] = 0;
            puVar10[0xf] = 0;
            puVar10[0x10] = 0;
            puVar10[0x11] = 0;
            local_2a0 = (undefined8 *)FUN_14337cb52(*(undefined8 *)(lVar4 + 0xe8));
            plVar15 = local_260;
            lVar4 = local_280;
            *local_2a0 = &PTR_FUN_14aa71480;
            *(undefined4 *)(local_2a0 + 2) = 0xffffffff;
            *(undefined2 *)((longlong)local_2a0 + 0x14) = 0x105;
            *(undefined1 *)((longlong)local_2a0 + 0x16) = 0;
            local_2a0[1] = &PTR_FUN_14a1ca300;
            *(undefined4 *)(local_2a0 + 3) = 2;
            local_2a0[4] = 0;
            local_2a0[5] = 0;
            local_2a8 = puVar10;
            local_298 = local_150;
            FUN_1490655fa(local_280,&DAT_14ca85100,local_260,local_258);
            iVar2 = *(int *)(lVar14 + 8 + lVar9);
            iVar12 = (int)lVar13;
            iVar8 = iVar12;
            if ((-1 < iVar2) && (iVar8 = iVar2, (int)plVar15[7] <= iVar2)) {
              iVar8 = iVar12;
            }
            uStack_90 = (**(code **)(**(longlong **)(plVar15[6] + (longlong)iVar8 * 8) + 0x2f0))();
            bVar7 = FUN_144914152(lVar4,*(undefined8 *)(local_288 + 0x148));
            uVar5 = uStack_1c0;
            uStack_6c = uStack_6c & 0xbfffffbf | (uint)bVar7 << 0x1e;
            local_78 = CONCAT44(local_78._4_4_,iVar12);
            lVar14 = (longlong)(int)uStack_1c0;
            uStack_1c0 = uStack_1c0 + 1;
            if (uStack_1bc < uStack_1c0) {
              FUN_147471df6(&lStack_1c8,uVar5);
            }
            lVar4 = lStack_1c8;
            lVar14 = lVar14 * 0xf0;
            *(undefined8 *)(lStack_1c8 + 0xa8 + lVar14) = 0;
            param_3 = local_a0 & 0xffffffff;
            puVar11 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar11 = local_150;
            }
            FUN_144739392(lStack_1c8 + lVar14,puVar11,param_3,0);
            *(byte *)(lVar4 + 0xe8 + lVar14) = local_68;
            puVar1 = (undefined4 *)(lVar4 + 0xd8 + lVar14);
            *puVar1 = (undefined4)local_78;
            puVar1[1] = local_78._4_4_;
            puVar1[2] = uStack_70;
            puVar1[3] = uStack_6c;
            puVar1 = (undefined4 *)(lVar4 + 200 + lVar14);
            *puVar1 = (undefined4)local_88;
            puVar1[1] = local_88._4_4_;
            puVar1[2] = (undefined4)uStack_80;
            puVar1[3] = uStack_80._4_4_;
            puVar1 = (undefined4 *)(lVar4 + 0xb8 + lVar14);
            *puVar1 = (undefined4)local_98;
            puVar1[1] = local_98._4_4_;
            puVar1[2] = (undefined4)uStack_90;
            puVar1[3] = uStack_90._4_4_;
            FUN_1446fc232(local_150);
            lVar13 = lVar13 + 1;
            lVar9 = lVar9 + 0xc;
          } while (lVar13 < *(int *)(local_268 + 0x78));
        }
        uVar6 = uStack_1bc;
        uVar5 = uStack_1c0;
        if (0 < (int)uStack_1c0) {
          local_250 = local_1d0;
          lStack_248 = lStack_1c8;
          lStack_1c8 = 0;
          uStack_1c0 = 0;
          uStack_1bc = 0;
          local_240 = uVar5;
          local_23c = uVar6;
          local_238 = CONCAT44(uStack_1b4,uStack_1b8);
          uStack_230 = uStack_1b0;
          uStack_228 = CONCAT22(uStack_1a6,CONCAT11(bStack_1a7,uStack_1a8));
          uStack_224 = CONCAT44(uStack_1a0,CONCAT22(uStack_1a2,uStack_1a4));
          uStack_210 = CONCAT44(local_18c,uStack_190);
          local_218 = uStack_198;
          uStack_198 = 0;
          uStack_190 = 0;
          local_18c = 0;
          local_208 = CONCAT44(uStack_184,uStack_188);
          uStack_200 = CONCAT44(uStack_17c,uStack_180);
          local_1f8 = local_178;
          local_178 = (undefined8 *)0x0;
          local_1f0 = uStack_170;
          local_1ec = uStack_16c;
          uStack_170 = 0;
          uStack_16c = 0;
          local_1e8 = uStack_168;
          uStack_1e4 = (undefined4)uStack_164;
          uStack_1e0 = uStack_164._4_4_;
          uStack_1dc = uStack_15c;
          local_1d8 = local_158;
          local_158 = 0;
          FUN_147cee9b0(local_288);
        }
        FUN_1472aaabe(&local_1d0);
        param_1 = local_280;
        plVar15 = local_270;
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar15);
  }
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149065ea8 FUN_149065ea8 body=193 status=ok
// SIG undefined FUN_149065ea8(void)

undefined8 * FUN_149065ea8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar1 = FUN_14480c900(0,param_3);
  bVar2 = FUN_144914152(param_1,param_3);
  bVar3 = FUN_144b26b6a(param_1);
  *(uint *)(param_2 + 2) =
       ((uint)bVar3 << 5 | (uint)bVar2 * 8 + (uint)bVar1 * 4) +
       (uint)(*(char *)(param_1 + 0x82) != '\x01') * 0x2000 + 0x82;
  FUN_144b252aa(param_1 + 0x330,param_2);
  if ((((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) ||
     ((*(byte *)(param_1 + 0x75) & 200) != 0)) {
    uVar5 = 0;
    uVar4 = *(uint *)(param_2 + 2);
    if ((*(byte *)((longlong)param_2 + 4) & 2) != 0) {
      uVar5 = uVar4 >> 3 & 0x10;
    }
  }
  else {
    uVar4 = *(uint *)(param_2 + 2);
    uVar5 = 0;
  }
  *(uint *)(param_2 + 2) = uVar4 & 0xffffffef | uVar5;
  return param_2;
}



// FUNCTION 149065f90 FUN_149065f90 body=1219 status=ok
// SIG undefined FUN_149065f90(void)

void FUN_149065f90(longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4,byte param_5,
                  undefined4 param_6,undefined4 param_7)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong *local_88;
  uint *local_80;
  longlong *local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 0x30c) = param_3;
  *(uint *)(param_1 + 0x340) =
       (param_4 & 0xff) + (uint)param_5 * 2 | *(uint *)(param_1 + 0x340) & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x310) = param_6;
  *(undefined4 *)(param_1 + 0x314) = param_7;
  *(int *)(param_1 + 0x308) = DAT_14c75b13c + 1;
  local_a0 = param_2;
  FUN_144406dc4();
  cVar3 = FUN_144a7ebcb();
  if ((cVar3 != '\0') && ((longlong)*(int *)(param_1 + 0x2a0) != 0)) {
    plVar5 = *(longlong **)(param_1 + 0x298);
    local_88 = plVar5 + *(int *)(param_1 + 0x2a0);
    do {
      lVar13 = *plVar5;
      if (lVar13 != 0) {
        uVar10 = (ulonglong)(*(uint *)(lVar13 + 0xa0) & 1);
        if (*(uint *)(lVar13 + 0xa0) == 0xffffffff) {
          uVar10 = 0;
        }
        lVar6 = *(longlong *)(lVar13 + 8 + (ulonglong)*(byte *)(lVar13 + 0x3e0) * 8);
        local_b0 = (longlong *)(lVar13 + 0x440);
        uVar8 = *(uint *)(lVar13 + 0x448);
        uVar7 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
        local_a4 = (undefined4)uVar7;
        if (uVar8 == *(uint *)(lVar6 + 0x78)) {
          if ((int)uVar8 < 1) {
            local_a4 = 0;
          }
          else {
            lVar15 = 0;
            uVar4 = 0;
            do {
              uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
              if ((uVar4 & 1) == 0) {
                uVar11 = *(uint *)(lVar13 + uVar10 * 0x28 + 0x58);
                uVar16 = *(uint *)(*local_b0 + 0x10 + lVar15);
                uVar7 = CONCAT71((int7)((ulonglong)uVar11 % (ulonglong)uVar16 >> 8),
                                 *(uint *)(*local_b0 + 0x14 + lVar15) != uVar11 / uVar16);
              }
              lVar15 = lVar15 + 0x28;
              local_a4 = (undefined4)uVar7;
              uVar4 = uVar7 & 0xffffffff;
            } while ((ulonglong)uVar8 * 0x28 != lVar15);
          }
        }
        iVar9 = *(int *)(lVar13 + 0x164);
        iVar2 = *(int *)(lVar13 + 0x44c);
        local_b8 = lVar13;
        local_98 = plVar5;
        FUN_14005bcf4(*(undefined8 *)(lVar13 + 0x440));
        *(undefined4 *)(lVar13 + 0x448) = 0;
        if ((iVar2 < 0) && (*(int *)(lVar13 + 0x44c) != 0)) {
          FUN_1472c1754(local_b0);
          lVar13 = local_b8;
        }
        if ((longlong)*(int *)(lVar6 + 0x78) == 0) {
          iVar9 = 0;
        }
        else {
          uVar7 = (ulonglong)(uint)(iVar9 / 3);
          puVar12 = *(uint **)(lVar6 + 0x70);
          local_80 = puVar12 + (longlong)*(int *)(lVar6 + 0x78) * 3;
          lVar6 = lVar13 + uVar10 * 0x28;
          iVar9 = 0;
          plVar5 = local_b0;
          local_90 = uVar7;
          do {
            uVar16 = (uint)uVar7;
            uVar11 = *puVar12 / 3;
            uVar8 = uVar16 - uVar11;
            if (uVar16 < uVar11) {
              uVar8 = 0;
            }
            if (*puVar12 / 3 + puVar12[1] <= uVar16) {
              uVar8 = puVar12[1];
            }
            lVar15 = *(longlong *)(lVar6 + 0x50);
            if (lVar15 != 0) {
              LOCK();
              *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              UNLOCK();
            }
            uVar16 = *(uint *)(lVar6 + 0x58);
            iVar2 = *(int *)(lVar13 + 0x448);
            *(uint *)(lVar13 + 0x448) = iVar2 + 1U;
            if (*(uint *)(lVar13 + 0x44c) < iVar2 + 1U) {
              FUN_1471b2628();
              plVar5 = local_b0;
              lVar13 = local_b8;
              uVar7 = local_90;
            }
            lVar14 = *plVar5;
            *(longlong *)(lVar14 + (longlong)iVar2 * 0x28) = lVar15;
            if (lVar15 != 0) {
              LOCK();
              *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              UNLOCK();
            }
            lVar14 = lVar14 + (longlong)iVar2 * 0x28;
            *(undefined8 *)(lVar14 + 8) = 3;
            *(undefined4 *)(lVar14 + 0x10) = 0xc;
            *(uint *)(lVar14 + 0x14) = uVar16 / 0xc;
            *(uint *)(lVar14 + 0x18) = uVar11;
            *(uint *)(lVar14 + 0x1c) = uVar8;
            *(undefined2 *)(lVar14 + 0x20) = 0x100;
            *(undefined1 *)(lVar14 + 0x22) = 1;
            if (lVar15 != 0) {
              LOCK();
              puVar1 = (uint *)(lVar15 + 8);
              uVar11 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar11 & 0x3fffffff) == 1) {
                FUN_144a54812(lVar15);
                plVar5 = local_b0;
                lVar13 = local_b8;
                uVar7 = local_90;
              }
            }
            iVar9 = iVar9 + uVar8;
            puVar12 = puVar12 + 3;
          } while (puVar12 != local_80);
        }
        plVar5 = local_98;
        if ((char)local_a4 == '\0') {
          lVar6 = *(longlong *)(lVar13 + 0x428);
          lVar15 = *(longlong *)(lVar13 + 0x158);
          if (lVar6 != lVar15) goto LAB_1490662b8;
          iVar2 = *(int *)(lVar13 + 0x438);
          *(int *)(lVar13 + 0x438) = iVar9;
          if (iVar2 == iVar9) {
            cVar3 = FUN_1474283cc(lVar13 + 1000);
            if ((cVar3 != '\0') && (cVar3 = FUN_1474283d8(), cVar3 == '\0')) {
              local_68 = 0;
              lVar13 = *(longlong *)(local_b8 + 0x478);
              if (lVar13 != 0) {
                LOCK();
                *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
                UNLOCK();
                local_68 = lVar13;
              }
              local_60 = 0;
              local_58 = *(undefined8 *)(local_b8 + 0x440);
              local_50 = *(undefined4 *)(local_b8 + 0x448);
              local_78 = &local_68;
              local_70 = 1;
              FUN_147412722(local_a0,&local_78);
              if (local_68 != 0) {
                LOCK();
                puVar12 = (uint *)(local_68 + 8);
                uVar8 = *puVar12;
                *puVar12 = *puVar12 - 1;
                UNLOCK();
                if ((uVar8 & 0x3fffffff) == 1) {
                  FUN_144a54812();
                }
              }
            }
            goto LAB_149066306;
          }
        }
        else {
          lVar6 = *(longlong *)(lVar13 + 0x428);
          lVar15 = *(longlong *)(lVar13 + 0x158);
LAB_1490662b8:
          lVar14 = lVar13;
          if (lVar6 != lVar15) {
            *(longlong *)(lVar13 + 0x428) = lVar15;
            if (lVar15 != 0) {
              LOCK();
              *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              UNLOCK();
            }
            if (lVar6 != 0) {
              LOCK();
              puVar12 = (uint *)(lVar6 + 8);
              uVar8 = *puVar12;
              *puVar12 = *puVar12 - 1;
              UNLOCK();
              if ((uVar8 & 0x3fffffff) == 1) {
                FUN_144a54812();
                lVar14 = local_b8;
              }
            }
          }
          *(int *)(lVar14 + 0x438) = iVar9;
        }
        FUN_1447fd100(lVar13 + 1000,local_a0);
      }
LAB_149066306:
      plVar5 = plVar5 + 1;
    } while (plVar5 != local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149066454 FUN_149066454 body=528 status=ok
// SIG undefined FUN_149066454(void)

void FUN_149066454(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_140678446(param_1,0);
  }
  lVar1 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_141742b1c(lVar1,0);
  }
  lVar2 = param_1 + 0x20;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_141742b1c(lVar2,0);
  }
  lVar3 = param_1 + 0x30;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) < 0) {
    FUN_14171ef34(lVar3,0);
  }
  lVar4 = param_1 + 0x40;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) < 0) {
    FUN_146971392(lVar4,0);
  }
  lVar5 = param_1 + 0x50;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_140678446(lVar5,0);
  }
  if (-1 < (int)param_2) {
    if (*(int *)(param_1 + 0xc) < (int)param_2) {
      FUN_140678446(param_1,param_2);
    }
    if (*(int *)(param_1 + 0x1c) < (int)param_2) {
      FUN_141742b1c(lVar1,param_2);
    }
    if (*(int *)(param_1 + 0x2c) < (int)param_2) {
      FUN_141742b1c(lVar2,param_2);
    }
    if (*(int *)(param_1 + 0x3c) < (int)param_2) {
      FUN_14171ef34(lVar3,param_2);
    }
    if (*(int *)(param_1 + 0x4c) < (int)param_2) {
      FUN_146971392(lVar4,param_2);
    }
    iVar7 = *(int *)(param_1 + 8);
    *(uint *)(param_1 + 8) = iVar7 + param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar7) < param_2) {
      FUN_140c0b6f2(param_1);
    }
    iVar7 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar7 + param_2;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar7) < param_2) {
      FUN_1470eb252(lVar1);
    }
    iVar7 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar7 + param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar7) < param_2) {
      FUN_1470eb252(lVar2);
    }
    iVar7 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar7 + param_2;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar7) < param_2) {
      FUN_140752556(lVar3);
    }
    iVar7 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar7 + param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar7) < param_2) {
      FUN_14602b1fc(lVar4);
    }
    if (param_3 != '\0') {
      iVar7 = *(int *)(param_1 + 0x5c);
      if (iVar7 < (int)param_2) {
        FUN_140678446(lVar5,param_2);
        iVar7 = *(int *)(param_1 + 0x5c);
      }
      iVar6 = *(int *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = iVar6 + param_2;
      if ((uint)(iVar7 - iVar6) < param_2) {
        FUN_140c0b6f2(lVar5);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149066666 FUN_149066666 body=340 status=ok
// SIG undefined FUN_149066666(void)

void FUN_149066666(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_3 * 4;
  *(int *)(param_1 + 0xc0) = iVar1;
  *(int *)(param_1 + 0xe8) = iVar1;
  *(int *)(param_1 + 0x110) = param_3 << 3;
  *(int *)(param_1 + 0x138) = iVar1;
  *(int *)(param_1 + 0x58) = param_3 * 0xc;
  *(int *)(param_1 + 0x80) = param_3 * 0xc;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x98) = 0xbf800000bf800000;
  *(undefined4 *)(param_1 + 0x160) = param_4;
  *(undefined4 *)(param_1 + 0x164) = 0;
  FUN_1490667ba(param_1 + 0x170,param_2,param_1 + 0x40,param_1 + 0x68,param_1 + 0xa8,param_1 + 0xd0,
                param_1 + 0xf8,param_1 + 0x120);
  (**(code **)(*(longlong *)(param_1 + 0x40) + 0x18))(param_1 + 0x40,param_2);
  (**(code **)(*(longlong *)(param_1 + 0x68) + 0x18))(param_1 + 0x68,param_2);
  FUN_14006bf18(param_1 + 0xa8,param_2);
  FUN_14006bf18(param_1 + 0xd0,param_2);
  FUN_14006bf18(param_1 + 0xf8,param_2);
  FUN_14006bf18(param_1 + 0x120,param_2);
  FUN_14006bf18(param_1 + 0x148,param_2);
  FUN_14006bf18(param_1 + 0x170,param_2);
  *(undefined1 *)(param_1 + 0x3e1) = 1;
  return;
}



// FUNCTION 1490667ba FUN_1490667ba body=219 status=ok
// SIG undefined FUN_1490667ba(void)

void FUN_1490667ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = 0x30c0000000000;
  local_48 = 0x400000001;
  local_88 = param_7;
  local_80 = 0x2080000000000;
  local_a8 = param_5;
  local_a0 = 0x5040000000000;
  local_98 = param_6;
  local_90 = 0x5040000000000;
  local_40 = param_8;
  local_38 = 0x8040000000000;
  local_28 = 0x30c0000000000;
  local_b8 = param_3;
  local_30 = param_4;
  FUN_147ad6928(param_1,param_2,&local_b8);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149066896 FUN_149066896 body=125 status=ok
// SIG undefined FUN_149066896(void)

undefined8
FUN_149066896(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x358);
  if (lVar1 != 0) {
    lVar3 = FUN_145b9d992();
    param_1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      uVar4 = FUN_144408120(lVar1 + 0x98,param_2,param_3,param_4,param_5);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar2 = 1;
      goto LAB_1490668b0;
    }
  }
  bVar6 = (byte)param_1;
  bVar2 = 0;
  uVar5 = 0;
LAB_1490668b0:
  return CONCAT71(uVar5,bVar2 & bVar6);
}



// FUNCTION 149066914 FUN_149066914 body=92 status=ok
// SIG undefined FUN_149066914(void)

undefined8 FUN_149066914(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x358);
  if (lVar1 != 0) {
    lVar3 = FUN_145b9d992();
    param_1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      uVar4 = (**(code **)(**(longlong **)(lVar1 + 0xa8) + 0x18))
                        (*(longlong **)(lVar1 + 0xa8),param_2,param_3);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar2 = 1;
      goto LAB_149066929;
    }
  }
  bVar6 = (byte)param_1;
  bVar2 = 0;
  uVar5 = 0;
LAB_149066929:
  return CONCAT71(uVar5,bVar2 & bVar6);
}



// FUNCTION 149066970 FUN_149066970 body=105 status=ok
// SIG undefined FUN_149066970(void)

undefined * FUN_149066970(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x358);
  if (lVar1 != 0) {
    lVar2 = FUN_145b9d992();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      puVar3 = (undefined *)FUN_1490669da(lVar1,param_2,param_3);
      return puVar3;
    }
  }
  return &DAT_14cbf7160;
}



// FUNCTION 1490669da FUN_1490669da body=158 status=ok
// SIG undefined FUN_1490669da(void)

longlong FUN_1490669da(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  
  if (param_3 != '\0') {
    auVar4._4_12_ = in_XMM1._4_12_;
    auVar4._0_4_ = in_XMM1._0_4_ / *(float *)(param_1 + 0x28);
    roundps(auVar4,ZEXT416((uint)auVar4._0_4_),1);
  }
  lVar3 = *(longlong *)(param_1 + 0x88);
  if ((longlong)*(int *)(param_1 + 0x90) == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = (longlong)*(int *)(param_1 + 0x90) * 0x14;
    do {
      cVar1 = FUN_1461b7448(lVar3);
      if (cVar1 != '\0') {
        return lVar3;
      }
      lVar3 = lVar3 + 0x14;
      lVar2 = lVar2 + -0x14;
    } while (lVar2 != 0);
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar2 = (longlong)(*(int *)(param_1 + 0x90) + -1);
  }
  return lVar3 + lVar2 * 0x14;
}



// FUNCTION 149066a78 FUN_149066a78 body=107 status=ok
// SIG undefined FUN_149066a78(void)

void FUN_149066a78(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x358);
  if (lVar1 != 0) {
    lVar2 = FUN_145b9d992();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_149066ae4(lVar1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 149066ae4 FUN_149066ae4 body=321 status=ok
// SIG undefined FUN_149066ae4(void)

void FUN_149066ae4(longlong param_1,undefined8 param_2,char param_3,char param_4,int *param_5,
                  int *param_6,float *param_7)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  fVar6 = (float)param_2;
  if (*(uint *)(param_1 + 0x80) < 2) {
    *param_5 = 0;
    *param_6 = 0;
    fVar6 = 0.0;
  }
  else {
    iVar3 = FUN_149068030();
    *param_5 = iVar3;
    if (param_3 == '\0') {
      iVar5 = *(int *)(param_1 + 0x80) + -1;
      iVar4 = iVar3 + 1;
      if (iVar5 <= iVar3 + 1) {
        iVar4 = iVar5;
      }
    }
    else {
      iVar4 = (iVar3 + 1) % *(int *)(param_1 + 0x80);
    }
    *param_6 = iVar4;
    lVar2 = *(longlong *)(param_1 + 0x78);
    fVar1 = *(float *)(lVar2 + (longlong)*param_5 * 0x48);
    fVar7 = *(float *)(lVar2 + (longlong)iVar4 * 0x48) - fVar1;
    fVar8 = 0.0;
    if (1e-08 < ABS(fVar7)) {
      if (param_3 == '\0') {
        fVar8 = *(float *)(lVar2 + (longlong)(*(int *)(param_1 + 0x80) + -1) * 0x48);
        if (fVar8 <= fVar6) {
          fVar6 = fVar8;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
      }
      else {
        auVar10._8_4_ = in_XMM1_Dc;
        auVar10._0_8_ = param_2;
        auVar10._12_4_ = in_XMM1_Dd;
        auVar9._4_12_ = auVar10._4_12_;
        auVar9._0_4_ = fVar6 / *(float *)(param_1 + 0x28);
        auVar10 = roundps(auVar9,ZEXT416((uint)auVar9._0_4_),1);
        fVar6 = fVar6 - auVar10._0_4_ * *(float *)(param_1 + 0x28);
      }
      fVar8 = (fVar6 - fVar1) / fVar7;
    }
    *param_7 = fVar8;
    if (param_4 == '\0') {
      return;
    }
    iVar3 = *param_5;
    *param_5 = *param_6;
    *param_6 = iVar3;
    fVar6 = 1.0 - *param_7;
  }
  *param_7 = fVar6;
  return;
}



// FUNCTION 149066c26 FUN_149066c26 body=63 status=ok
// SIG undefined FUN_149066c26(void)

void FUN_149066c26(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_140298d6a(param_1);
  return;
}



// FUNCTION 149066c66 FUN_149066c66 body=63 status=ok
// SIG undefined FUN_149066c66(void)

void FUN_149066c66(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 149066ca6 FUN_149066ca6 body=495 status=ok
// SIG undefined FUN_149066ca6(void)

void FUN_149066ca6(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  longlong *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar11;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  uVar11 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar15 = (float)param_3;
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar12 = (float)param_2;
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar3 != 0) {
    param_4 = param_4 & 0xffffffff;
    do {
      fVar14 = fVar15;
      if (((param_4 & 1) == 0) &&
         (fVar14 = fVar12, uVar11 = uVar13, in_XMM2_Dc = in_XMM1_Dc, in_XMM2_Dd = in_XMM1_Dd,
         fVar12 <= fVar15)) {
        fVar14 = fVar15;
      }
      fVar15 = fVar14;
      if ((*(int *)(param_1 + 0x80) != 0) && (fVar14 < **(float **)(param_1 + 0x78))) {
        uVar11 = 0;
        in_XMM2_Dc = 0;
        in_XMM2_Dd = 0;
        fVar15 = **(float **)(param_1 + 0x78);
      }
      if ((param_4 & 1) == 0) {
LAB_149066db7:
        if (iVar3 < 1) {
          return;
        }
        lVar4 = 0;
        uVar6 = FUN_149068030(param_1,fVar15,0);
        uVar2 = FUN_149068030(param_1,fVar12,0);
        lVar5 = 8;
        do {
          if ((*(float *)(*(longlong *)(param_1 + 0x68) + -4 + lVar5) <= (float)uVar6) &&
             ((float)uVar2 <= *(float *)(*(longlong *)(param_1 + 0x68) + lVar5))) {
            iVar3 = (int)param_5[1];
            *(uint *)(param_5 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
              FUN_1446f48e2(param_5,iVar3);
            }
            *(int *)(*param_5 + (longlong)iVar3 * 4) = (int)lVar4;
            iVar3 = *(int *)(param_1 + 0x70);
          }
          lVar4 = lVar4 + 1;
          lVar5 = lVar5 + 0x38;
        } while (lVar4 < iVar3);
        return;
      }
      fVar14 = *(float *)(param_1 + 0x28);
      uVar6 = -(uint)(fVar15 - fVar12 < 0.0);
      if (fVar14 <= (float)(uVar6 & (uint)((fVar14 - fVar12) + fVar15) |
                           ~uVar6 & (uint)(fVar15 - fVar12))) {
        if (iVar3 < 1) {
          return;
        }
        iVar3 = 0;
        do {
          iVar1 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_5,iVar1);
          }
          *(int *)(*param_5 + (longlong)iVar1 * 4) = iVar3;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x70));
        return;
      }
      auVar8._4_4_ = uVar13;
      auVar8._0_4_ = fVar12;
      auVar8._8_4_ = in_XMM1_Dc;
      auVar8._12_4_ = in_XMM1_Dd;
      auVar7._4_12_ = auVar8._4_12_;
      auVar7._0_4_ = fVar12 / fVar14;
      auVar8 = blendps(auVar7,ZEXT816(0),0xe);
      auVar8 = roundps(auVar8,auVar8,1);
      fVar12 = fVar12 - auVar8._0_4_ * fVar14;
      auVar9._4_4_ = uVar11;
      auVar9._0_4_ = fVar15;
      auVar9._8_4_ = in_XMM2_Dc;
      auVar9._12_4_ = in_XMM2_Dd;
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = fVar15 / fVar14;
      auVar8 = blendps(auVar10,ZEXT816(0),0xe);
      auVar8 = roundps(auVar8,auVar8,1);
      fVar15 = fVar15 - auVar8._0_4_ * fVar14;
      if (fVar12 <= fVar15) goto LAB_149066db7;
      param_4 = 0;
      FUN_149066ca6(param_1,fVar12,fVar14,0,param_5);
      iVar3 = *(int *)(param_1 + 0x70);
      fVar12 = 0.0;
      uVar13 = 0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 149066e9e FUN_149066e9e body=159 status=ok
// SIG undefined FUN_149066e9e(void)

ulonglong FUN_149066e9e(ulonglong param_1,ulonglong param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x78);
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      plVar1 = (longlong *)(param_1 + 0x18);
      do {
        bVar5 = *(ulonglong *)(*plVar1 + (longlong)iVar4 * 0x18) == param_2;
        param_1 = CONCAT71((int7)(param_1 >> 8),bVar5);
        if (bVar5) break;
        iVar4 = *(int *)(*plVar1 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
      goto LAB_149066ec2;
    }
  }
  param_1 = 0;
LAB_149066ec2:
  ReleaseSRWLockShared(SRWLock);
  return param_1 & 0xffffffff;
}



// FUNCTION 149066f3e FUN_149066f3e body=227 status=ok
// SIG undefined FUN_149066f3e(void)

ulonglong FUN_149066f3e(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar5;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x78));
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            uVar5 = puVar1[1];
            EnterCriticalSection((LPCRITICAL_SECTION)(uVar5 + 0x110));
            iVar4 = *(int *)(uVar5 + 0x80);
            lpCriticalSection = (LPCRITICAL_SECTION)(uVar5 + 0x110);
            if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
              LeaveCriticalSection(lpCriticalSection);
            }
            uVar5 = CONCAT71((int7)((ulonglong)lpCriticalSection >> 8),0 < iVar4);
            goto LAB_149066f62;
          }
          break;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  uVar5 = 0;
LAB_149066f62:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x78));
  return uVar5 & 0xffffffff;
}



// FUNCTION 149067022 FUN_149067022 body=91 status=ok
// SIG undefined FUN_149067022(void)

void FUN_149067022(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_14906d368(param_1 + 0xd);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000149067075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 200))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906707e FUN_14906707e body=71 status=ok
// SIG undefined FUN_14906707e(void)

void FUN_14906707e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = &local_18;
  local_18 = param_2;
  FUN_14906d45a(param_1 + 0x68);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490670c6 FUN_1490670c6 body=285 status=ok
// SIG undefined FUN_1490670c6(void)

void FUN_1490670c6(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x78));
  lVar5 = *(longlong *)(param_2 + 0x650);
  if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x58) != 0)) {
    puVar8 = *(ulonglong **)(lVar5 + 0x50);
    puVar1 = puVar8 + *(int *)(lVar5 + 0x58);
    do {
      uVar2 = *puVar8;
      if (uVar2 != 0) {
        lVar5 = FUN_145b9d992();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(uVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
            uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
            uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            lVar5 = *(longlong *)(param_1 + 0x58);
            if (*(longlong *)(param_1 + 0x58) == 0) {
              lVar5 = param_1 + 0x50;
            }
            iVar3 = *(int *)(lVar5 + (ulonglong)
                                     (*(int *)(param_1 + 0x60) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
            if (iVar3 != -1) {
              do {
                puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x18);
                if (*puVar6 == uVar2) goto LAB_149067151;
                iVar3 = (int)puVar6[2];
              } while (iVar3 != -1);
            }
          }
          puVar6 = (ulonglong *)0x0;
LAB_149067151:
          puVar7 = puVar6 + 1;
          if (puVar6 == (ulonglong *)0x0) {
            puVar7 = (ulonglong *)0x0;
          }
          FUN_14440ae7e(*puVar7,param_2);
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001490671dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x78));
  return;
}



// FUNCTION 1490671e4 FUN_1490671e4 body=157 status=ok
// SIG undefined FUN_1490671e4(void)

void FUN_1490671e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  local_70 = 0;
  FUN_14485c47a(&local_70,param_2);
  local_58 = 0;
  local_48 = &PTR_LAB_14ba8b480;
  local_38 = local_70;
  local_68 = FUN_14440d014;
  local_40 = param_1;
  FUN_1407461b0(1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490672c8 FUN_1490672c8 body=197 status=ok
// SIG undefined FUN_1490672c8(void)

void FUN_1490672c8(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x78));
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            FUN_14440b450(puVar1[1],param_3);
          }
          break;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001490672fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x78));
  return;
}



// FUNCTION 149067392 FUN_149067392 body=75 status=ok
// SIG undefined FUN_149067392(void)

void FUN_149067392(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1490673de(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490673de FUN_1490673de body=183 status=ok
// SIG undefined FUN_1490673de(void)

void FUN_1490673de(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbe8);
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cbe8);
  if (0x10 < iVar2) {
    switchD_143c3d4dc::caseD_21(param_1,param_2);
  }
  FUN_14906d524(param_2,param_1 + 0x30);
  FUN_146db24e8(param_2,param_1 + 0x40);
  puVar3 = (undefined4 *)(param_1 + 0x50);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014906746c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
      return;
    }
    FUN_14572512c(param_2,puVar3);
    return;
  }
  *puVar3 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 14906749a FUN_14906749a body=77 status=ok
// SIG undefined FUN_14906749a(void)

bool FUN_14906749a(longlong param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  iVar2 = FUN_1490674e8(param_1,param_1 + 0x40,param_2,param_3);
  iVar1 = *param_4;
  if (iVar2 != iVar1) {
    *param_4 = iVar2;
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x80 + *(longlong *)(param_1 + 0x30));
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_5 = *puVar4;
      puVar4 = puVar4 + 1;
      param_5 = param_5 + 1;
    }
  }
  return iVar2 != iVar1;
}



// FUNCTION 1490674e8 FUN_1490674e8 body=117 status=ok
// SIG undefined FUN_1490674e8(void)

ulonglong FUN_1490674e8(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  
  fVar8 = (float)param_3;
  uVar5 = (ulonglong)*(int *)(param_2 + 1);
  uVar2 = 0;
  if (1 < uVar5) {
    if (param_4 != '\0') {
      auVar7._8_4_ = in_XMM2_Dc;
      auVar7._0_8_ = param_3;
      auVar7._12_4_ = in_XMM2_Dd;
      auVar6._4_12_ = auVar7._4_12_;
      auVar6._0_4_ = fVar8 / *(float *)(param_1 + 0x28);
      auVar7 = roundps(auVar6,ZEXT416((uint)auVar6._0_4_),1);
      fVar8 = fVar8 - auVar7._0_4_ * *(float *)(param_1 + 0x28);
    }
    uVar4 = uVar5 - 1;
    pfVar1 = (float *)*param_2;
    if (pfVar1[uVar5 - 1] <= fVar8) {
      uVar2 = uVar4 & 0xffffffff;
    }
    else if (*pfVar1 < fVar8) {
      uVar2 = 0;
      do {
        uVar3 = (uint)((int)uVar2 + (int)uVar4) >> 1;
        if (pfVar1[uVar3] <= fVar8 && fVar8 != pfVar1[uVar3]) {
          uVar2 = (ulonglong)(uVar3 + 1);
        }
        else {
          uVar4 = (ulonglong)(uVar3 - 1);
        }
      } while (((uint)uVar4 != 0) && ((uint)uVar2 <= (uint)uVar4));
    }
  }
  return uVar2;
}



// FUNCTION 149067562 FUN_149067562 body=119 status=ok
// SIG undefined FUN_149067562(void)

void FUN_149067562(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_1490675da(param_1 + 0x30);
  uVar1 = *(uint *)(param_3 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar2) < uVar1) {
      FUN_14475e4ac((longlong *)(param_1 + 0x40),iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x40)),(void *)*param_3,
           (longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 1490675da FUN_1490675da body=101 status=ok
// SIG undefined FUN_1490675da(void)

void FUN_1490675da(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140518214(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x80 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 7);
    return;
  }
  return;
}



// FUNCTION 149067640 FUN_149067640 body=125 status=ok
// SIG undefined FUN_149067640(void)

void FUN_149067640(longlong param_1,undefined8 *param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_140518214(param_1 + 0x30,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x30));
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_14475e4ac(param_1 + 0x40,iVar1);
  }
  *(float *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 4) = param_3;
  fVar4 = *(float *)(param_1 + 0x28);
  if (*(float *)(param_1 + 0x28) <= param_3) {
    fVar4 = param_3;
  }
  *(float *)(param_1 + 0x28) = fVar4;
  return;
}



// FUNCTION 1490676e2 FUN_1490676e2 body=55 status=ok
// SIG undefined FUN_1490676e2(void)

void FUN_1490676e2(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x38) << 7);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x48) << 2);
  return;
}



// FUNCTION 149067722 FUN_149067722 body=306 status=ok
// SIG undefined FUN_149067722(void)

void FUN_149067722(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_118 [36];
  undefined4 local_f4;
  undefined1 local_f0 [160];
  undefined8 local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  memset(local_f0,0,0x99);
  local_50 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_f4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f4);
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_f0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149067856(param_1,puVar1,local_f4);
  FUN_145f7cfa2(local_f0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149067856 FUN_149067856 body=128 status=ok
// SIG undefined FUN_149067856(void)

void FUN_149067856(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
    FUN_14906c9d2(param_1 + 0x60,iVar1);
  }
  FUN_14906c6c4((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x60),param_2);
  iVar1 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
    FUN_14475e4ac(param_1 + 0x70,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 4) = param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  if (*(int *)(param_1 + 0x50) < *(int *)(param_2 + 0x78)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x78);
  }
  return;
}



// FUNCTION 1490678da FUN_1490678da body=161 status=ok
// SIG undefined FUN_1490678da(void)

void FUN_1490678da(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x38) << 7);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x48) << 2);
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_14906797c(*(longlong *)(param_1 + 0x60) + lVar1,param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (lVar2 < *(int *)(param_1 + 0x68));
  }
  FUN_14484255c(param_2,0x10);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x78) << 2);
  FUN_14484255c(param_2,0x10);
  FUN_14484255c(param_2,4);
  return;
}



// FUNCTION 14906797c FUN_14906797c body=294 status=ok
// SIG undefined FUN_14906797c(void)

void FUN_14906797c(longlong param_1,undefined8 param_2)

{
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 8) * 0xc);
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x18) << 3);
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x28) << 2);
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x38) << 2);
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x48) << 2);
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x68) * 0xc);
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x78) * 0xc);
  FUN_140347a44(param_2,0x10);
  FUN_140347a44(param_2,0x10);
  FUN_140347a44(param_2,0x10);
  FUN_140347a44(param_2,0x10);
  FUN_140347a44(param_2,0x10);
  FUN_140347a44(param_2,0x10);
  FUN_140347a44(param_2,0x1c);
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0xa8) << 2);
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x58) << 2);
  FUN_140347a44(param_2,0x10);
  FUN_140347a44(param_2,9);
  return;
}



// FUNCTION 149067aa2 FUN_149067aa2 body=69 status=ok
// SIG undefined FUN_149067aa2(void)

bool FUN_149067aa2(longlong param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                  longlong *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_1490674e8(param_1,param_1 + 0x70,param_2,param_3);
  iVar1 = *param_4;
  if (iVar2 != iVar1) {
    *param_5 = (longlong)iVar2 * 200 + *(longlong *)(param_1 + 0x60);
    *param_4 = iVar2;
  }
  return iVar2 != iVar1;
}



// FUNCTION 149067b18 FUN_149067b18 body=75 status=ok
// SIG undefined FUN_149067b18(void)

void FUN_149067b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_149067b64(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149067b64 FUN_149067b64 body=250 status=ok
// SIG undefined FUN_149067b64(void)

void FUN_149067b64(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490673de();
  local_2c = *(int *)(param_1 + 0x70);
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    }
    else {
      FUN_14572512c(param_2,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_149067ce6(param_1 + 0x68);
  }
  if (0 < local_2c) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_144403bbc(*(longlong *)(param_1 + 0x68) + lVar3,param_2,param_1);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x38;
    } while (lVar4 < local_2c);
  }
  FUN_14906d87e(param_2,param_1 + 0x78);
  FUN_14906daee(param_2,param_1 + 0x88);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149067c60 FUN_149067c60 body=134 status=ok
// SIG undefined FUN_149067c60(void)

void FUN_149067c60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x38) << 7);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x48) << 2);
  if (0 < *(int *)(param_1 + 0x70)) {
    iVar1 = 0;
    do {
      FUN_14484255c(param_2,4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x70));
  }
  FUN_14484255c(param_2,0x10);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x80) * 0x48);
  FUN_14484255c(param_2,0x10);
  return;
}



// FUNCTION 149067ce6 FUN_149067ce6 body=62 status=ok
// SIG undefined FUN_149067ce6(void)

void FUN_149067ce6(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14906d7ee(param_1,iVar1);
  }
  FUN_14906d7a4((longlong)iVar1 * 0x38 + *param_1,param_2);
  return;
}



// FUNCTION 149067d28 FUN_149067d28 body=514 status=ok
// SIG undefined FUN_149067d28(void)

undefined8 FUN_149067d28(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int *in_stack_00000028;
  double *in_stack_00000030;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int *local_c0;
  undefined1 *local_b8;
  undefined1 local_a4 [4];
  int local_a0;
  int local_9c;
  undefined4 uStack_98;
  undefined3 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = local_a4;
  local_c0 = &local_a0;
  local_c8 = &local_9c;
  FUN_149066ae4();
  lVar10 = (longlong)local_9c;
  lVar9 = *(longlong *)(param_1 + 0x78);
  dVar17 = *(double *)(lVar9 + 8 + lVar10 * 0x48);
  dVar16 = *(double *)(lVar9 + 0x10 + lVar10 * 0x48);
  dVar15 = *(double *)(lVar9 + 0x18 + lVar10 * 0x48);
  dVar14 = *(double *)(lVar9 + 0x20 + lVar10 * 0x48);
  dVar13 = *(double *)(lVar9 + 0x28 + lVar10 * 0x48);
  dVar12 = *(double *)(lVar9 + 0x30 + lVar10 * 0x48);
  cVar11 = *(char *)(lVar9 + 0x38 + lVar10 * 0x48);
  uStack_94 = (undefined3)((uint)*(undefined4 *)(lVar9 + 0x3c + lVar10 * 0x48) >> 8);
  uStack_98 = *(undefined4 *)(lVar9 + 0x39 + lVar10 * 0x48);
  lVar10 = (longlong)local_a0;
  dVar1 = *(double *)(lVar9 + 8 + lVar10 * 0x48);
  dVar2 = *(double *)(lVar9 + 0x10 + lVar10 * 0x48);
  dVar3 = *(double *)(lVar9 + 0x18 + lVar10 * 0x48);
  dVar4 = *(double *)(lVar9 + 0x20 + lVar10 * 0x48);
  dVar5 = *(double *)(lVar9 + 0x28 + lVar10 * 0x48);
  dVar6 = *(double *)(lVar9 + 0x30 + lVar10 * 0x48);
  cVar7 = *(char *)(lVar9 + 0x38 + lVar10 * 0x48);
  if ((cVar11 == '\0') || (cVar7 == '\0')) {
    if (cVar7 != '\0') {
      lVar9 = lVar9 + lVar10 * 0x48;
      uStack_98 = *(undefined4 *)(lVar9 + 0x39);
      uStack_94 = (undefined3)((uint)*(undefined4 *)(lVar9 + 0x3c) >> 8);
      dVar12 = dVar6;
      dVar13 = dVar5;
      dVar14 = dVar4;
      dVar15 = dVar3;
      dVar16 = dVar2;
      dVar17 = dVar1;
      cVar11 = cVar7;
    }
  }
  else {
    if (dVar1 <= dVar17) {
      dVar17 = dVar1;
    }
    if (dVar2 <= dVar16) {
      dVar16 = dVar2;
    }
    if (dVar3 <= dVar15) {
      dVar15 = dVar3;
    }
    if (dVar14 <= dVar4) {
      dVar14 = dVar4;
    }
    if (dVar13 <= dVar5) {
      dVar13 = dVar5;
    }
    if (dVar12 <= dVar6) {
      dVar12 = dVar6;
    }
  }
  *in_stack_00000030 = dVar17;
  in_stack_00000030[1] = dVar16;
  in_stack_00000030[2] = dVar15;
  in_stack_00000030[3] = dVar14;
  in_stack_00000030[4] = dVar13;
  in_stack_00000030[5] = dVar12;
  *(char *)(in_stack_00000030 + 6) = cVar11;
  *(uint *)((longlong)in_stack_00000030 + 0x34) = CONCAT31(uStack_94,uStack_98._3_1_);
  *(undefined4 *)((longlong)in_stack_00000030 + 0x31) = uStack_98;
  iVar8 = *in_stack_00000028;
  if (iVar8 != local_9c) {
    *in_stack_00000028 = local_9c;
  }
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return CONCAT71((int7)(int3)((uint)local_9c >> 8),iVar8 != local_9c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149067f60 FUN_149067f60 body=116 status=ok
// SIG undefined FUN_149067f60(void)

void FUN_149067f60(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_140414380(param_1 + 0x98,0);
  FUN_1400fb146(param_1 + 0xb8,0);
  FUN_1408e177a(param_1 + 0xb8,0);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2b0))();
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(longlong *)(param_1 + 0xb0) = param_1;
  FUN_140308182(param_1 + 0x98,0);
  return;
}



// FUNCTION 149067fd4 FUN_149067fd4 body=92 status=ok
// SIG undefined FUN_149067fd4(void)

void FUN_149067fd4(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1446e0b6e();
  FUN_145adf2ae();
  (**(code **)(DAT_14cbf71a8 + 0x98))(&DAT_14cbf71a8,param_1);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2b0))();
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(longlong *)(param_1 + 0xb0) = param_1;
  FUN_140308182(param_1 + 0x98,0);
  return;
}



// FUNCTION 149068030 FUN_149068030 body=154 status=ok
// SIG undefined FUN_149068030(void)

ulonglong FUN_149068030(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  fVar7 = (float)param_2;
  iVar1 = *(int *)(param_1 + 0x80);
  uVar3 = 0;
  if (1 < (ulonglong)(longlong)iVar1) {
    if (param_3 != '\0') {
      auVar9._8_4_ = in_XMM1_Dc;
      auVar9._0_8_ = param_2;
      auVar9._12_4_ = in_XMM1_Dd;
      auVar8._4_12_ = auVar9._4_12_;
      auVar8._0_4_ = fVar7 / *(float *)(param_1 + 0x28);
      auVar9 = roundps(auVar8,ZEXT416((uint)auVar8._0_4_),1);
      fVar7 = fVar7 - auVar9._0_4_ * *(float *)(param_1 + 0x28);
    }
    fVar7 = fVar7 + *(float *)(param_1 + 0xc0);
    uVar5 = (longlong)iVar1 - 1;
    pfVar2 = *(float **)(param_1 + 0x78);
    if (pfVar2[uVar5 * 0x12] <= fVar7) {
      uVar3 = uVar5 & 0xffffffff;
    }
    else if ((1 < iVar1) && (*pfVar2 < fVar7)) {
      uVar4 = 0;
      do {
        uVar6 = (int)uVar5 + (int)uVar4 + 1U >> 1;
        uVar3 = (ulonglong)uVar6;
        if (fVar7 < pfVar2[uVar3 * 0x12]) {
          uVar5 = (ulonglong)(uVar6 - 1);
          uVar3 = uVar4;
        }
      } while (((int)uVar5 != 0) && (uVar4 = uVar3, (int)uVar3 < (int)uVar5));
    }
  }
  return uVar3;
}



// FUNCTION 1490680ca FUN_1490680ca body=33 status=ok
// SIG undefined FUN_1490680ca(void)

longlong FUN_1490680ca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149068030();
  return (longlong)iVar1 * 0x48 + *(longlong *)(param_1 + 0x78);
}



// FUNCTION 1490680ec FUN_1490680ec body=63 status=ok
// SIG undefined FUN_1490680ec(void)

undefined8 FUN_1490680ec(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1[0xb] == 0) {
    return 0;
  }
  uVar1 = FUN_149068030(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x000149068128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x2f0))(param_1,uVar1,param_3,*(code **)(*param_1 + 0x2f0));
  return uVar2;
}



// FUNCTION 14906812c FUN_14906812c body=236 status=ok
// SIG undefined FUN_14906812c(void)

undefined4 FUN_14906812c(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_1a8 [44];
  int local_17c;
  undefined1 local_178 [8];
  undefined1 local_170 [312];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar1 = 0;
  if ((-1 < param_2) && (*(longlong *)(param_1 + 0x58) != 0)) {
    if (param_2 < *(int *)(param_1 + 0x80)) {
      FUN_14600e074(local_178,param_1);
      local_17c = param_2;
      FUN_144aa221c(local_170,&local_17c);
      FUN_144409d60(local_178);
      FUN_14440aa80(local_178,0);
      local_17c = 0;
      uVar2 = FUN_14440b382(local_178,param_2,&local_17c);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2a8))
                        (*(longlong **)(param_1 + 0x58),uVar2,local_17c,param_3);
      FUN_14440b450(local_178,param_2);
      FUN_1415cd930(local_178);
    }
    else {
      uVar1 = 0;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149068230 FUN_149068230 body=41 status=ok
// SIG undefined FUN_149068230(void)

void FUN_149068230(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 149068259 FUN_149068259 body=256 status=ok
// SIG undefined FUN_149068259(void)

longlong * FUN_149068259(longlong *param_1,undefined4 *param_2)

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
  FUN_140119d96(param_1,param_2 + 2);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x10,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x10] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 0x11;
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
  return param_1;
}



// FUNCTION 149068359 FUN_149068359 body=171 status=ok
// SIG undefined FUN_149068359(void)

longlong * FUN_149068359(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_147522b6f();
  FUN_147522b6f(uVar2,param_2 + 8);
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x10);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x10) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x10) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149068406 FUN_149068406 body=238 status=ok
// SIG undefined FUN_149068406(void)

void FUN_149068406(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [160];
  undefined8 local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  memset(local_f0,0,0x99);
  local_50 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_f0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149068560(param_1 + 0x58,puVar1);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar1 + 0x78);
  FUN_145f7cfa2(local_f0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490684f8 FUN_1490684f8 body=70 status=ok
// SIG undefined FUN_1490684f8(void)

void FUN_1490684f8(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x38) << 7);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x48) << 2);
  FUN_14906797c(param_1 + 0x58,param_2);
  return;
}



// FUNCTION 149068560 FUN_149068560 body=191 status=ok
// SIG undefined FUN_149068560(void)

longlong FUN_149068560(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  FUN_140de4b5e();
  FUN_1401f7650(param_1 + 0x10,param_2 + 0x10);
  FUN_14906bbfa(param_1 + 0x20,param_2 + 0x20);
  FUN_14906bbfa(param_1 + 0x30,param_2 + 0x30);
  FUN_147888ab0(param_1 + 0x40,param_2 + 0x40);
  FUN_1447bdc4c(param_1 + 0x50,param_2 + 0x50);
  FUN_140de4b5e(param_1 + 0x60,param_2 + 0x60);
  FUN_14906bc52(param_1 + 0x70,param_2 + 0x70);
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  uVar4 = *(undefined4 *)(param_2 + 0x8c);
  uVar5 = *(undefined4 *)(param_2 + 0x90);
  uVar6 = *(undefined4 *)(param_2 + 0x94);
  uVar7 = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x90) = uVar5;
  *(undefined4 *)(param_1 + 0x94) = uVar6;
  *(undefined4 *)(param_1 + 0x98) = uVar7;
  FUN_1447bdc4c(param_1 + 0xa0,param_2 + 0xa0);
  uVar8 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar8;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 149068620 FUN_149068620 body=238 status=ok
// SIG undefined FUN_149068620(void)

void FUN_149068620(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [160];
  undefined8 local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  memset(local_f0,0,0x99);
  local_50 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_f0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149068560(param_1 + 0x58,puVar1);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar1 + 0x78);
  FUN_145f7cfa2(local_f0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149068712 FUN_149068712 body=70 status=ok
// SIG undefined FUN_149068712(void)

void FUN_149068712(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x38) << 7);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x48) << 2);
  FUN_14906797c(param_1 + 0x58,param_2);
  return;
}



// FUNCTION 14906878e FUN_14906878e body=132 status=ok
// SIG undefined FUN_14906878e(void)

longlong FUN_14906878e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (-1 < (int)param_2) {
    if ((int)param_2 < (int)param_1[6]) {
      lVar2 = *(longlong *)(param_1[5] + (ulonglong)param_2 * 8);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
        goto LAB_1490687d5;
      }
      if (lVar2 != 0) goto LAB_1490687d5;
    }
    if ((int)param_2 < *(int *)(*param_1 + 0x38)) {
      lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x30) + (ulonglong)param_2 * 8);
      goto LAB_1490687d5;
    }
  }
  lVar2 = 0;
LAB_1490687d5:
  if ((longlong)(int)param_1[8] != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1[7] + lVar1) == lVar2) {
        return *(longlong *)(param_1[7] + 8 + lVar1);
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)(int)param_1[8] * 0x10 != lVar1);
  }
  return lVar2;
}



// FUNCTION 149068812 FUN_149068812 body=192 status=ok
// SIG undefined FUN_149068812(void)

void FUN_149068812(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  FUN_14042b052();
  (**(code **)(*param_1 + 0x340))(param_1,0);
  FUN_14042b016(param_1 + 0x4c);
  if ((longlong)(int)param_1[0x18] != 0) {
    lVar5 = param_1[0x17];
    lVar1 = lVar5 + (longlong)(int)param_1[0x18] * 0x48;
    do {
      iVar2 = *(int *)(lVar5 + 0x30);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(lVar5 + 0x28);
        lVar7 = 0;
        do {
          if (*(longlong *)(lVar3 + lVar7) != 0) {
            FUN_1400337aa();
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar2 * 8 != lVar7);
      }
      if ((longlong)*(int *)(lVar5 + 0x40) != 0) {
        plVar6 = *(longlong **)(lVar5 + 0x38);
        plVar4 = plVar6 + (longlong)*(int *)(lVar5 + 0x40) * 2;
        do {
          if (*plVar6 != 0) {
            FUN_1400337aa();
          }
          if (plVar6[1] != 0) {
            FUN_1400337aa();
          }
          plVar6 = plVar6 + 2;
        } while (plVar6 != plVar4);
      }
      lVar5 = lVar5 + 0x48;
    } while (lVar5 != lVar1);
  }
  return;
}



// FUNCTION 1490688d2 FUN_1490688d2 body=89 status=ok
// SIG undefined FUN_1490688d2(void)

longlong *
FUN_1490688d2(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14001cc68(0x148,0x10);
  FUN_14906892c(plVar1,param_2,param_1,param_3);
  (**(code **)(*plVar1 + 8))(plVar1,param_1,param_3,param_4);
  return plVar1;
}



// FUNCTION 14906892c FUN_14906892c body=102 status=ok
// SIG undefined FUN_14906892c(void)

undefined8 * FUN_14906892c(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  FUN_1401f77c6();
  *param_1 = &PTR_FUN_14ba8a410;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  iVar1 = *(int *)(param_3 + 0xcc);
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      FUN_14906de4a(param_1 + 0x25);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 149068994 FUN_149068994 body=188 status=ok
// SIG undefined FUN_149068994(void)

void FUN_149068994(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb8);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0xc0) * 0x48;
    do {
      lVar2 = FUN_149068a52(lVar3,param_2);
      if (lVar2 != 0) {
        iVar5 = *(int *)(lVar2 + 0x38);
        if (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x30)) {
          iVar5 = *(int *)(lVar3 + 0x30);
        }
        if (0 < iVar5) {
          iVar4 = 0;
          do {
            local_48 = FUN_14906878e(lVar3,iVar4);
            if (local_48 != 0) {
              FUN_14017a742(param_3,&local_48);
            }
            iVar4 = iVar4 + 1;
          } while (iVar5 != iVar4);
        }
      }
      lVar3 = lVar3 + 0x48;
    } while (lVar3 != lVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149068a52 FUN_149068a52 body=306 status=ok
// SIG undefined FUN_149068a52(void)

longlong FUN_149068a52(longlong *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  size_t _Size;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = (undefined4)param_1[2];
  local_50 = param_1[1];
  local_40 = (void *)0x0;
  local_38 = (int)param_1[4];
  _Size = (size_t)local_38;
  _Src = (void *)param_1[3];
  if (_Size == 0) {
    local_34 = 0;
  }
  else {
    FUN_1447a127e(&local_40,local_38,0);
    memcpy(local_40,_Src,_Size);
  }
  if (local_50 != 0) {
    plVar2 = (longlong *)FUN_144741050(local_48);
    lVar5 = 0;
    if ((param_2 == 0) || (*plVar2 == 0)) goto LAB_149068b39;
    piVar3 = (int *)(**(code **)(*(longlong *)(param_2 + 0x40) + 0x58))(param_2 + 0x40,&local_50,0);
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_2 + 0x88))) {
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x80) + (longlong)iVar1 * 8);
        if (lVar5 != 0) {
          lVar4 = FUN_14110cae2();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_149068b39;
        }
      }
    }
  }
  lVar5 = 0;
LAB_149068b39:
  lVar4 = *param_1;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (lVar5 != 0) {
    lVar4 = lVar5;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149068b86 FUN_149068b86 body=91 status=ok
// SIG undefined FUN_149068b86(void)

void FUN_149068b86(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140349a5c();
  uVar1 = FUN_144a84c36();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((lVar2 != 0) && ((longlong)*(int *)(param_1 + 0x268) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x260);
    lVar3 = (longlong)*(int *)(param_1 + 0x268) * 0x2c;
    do {
      FUN_140349dfc(lVar4,lVar2);
      lVar4 = lVar4 + 0x2c;
      lVar3 = lVar3 + -0x2c;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 149068be2 FUN_149068be2 body=578 status=ok
// SIG undefined FUN_149068be2(void)

ulonglong FUN_149068be2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  longlong local_80;
  undefined4 local_78 [2];
  void *local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_14021f064();
  uVar5 = (ulonglong)uVar3;
  iVar1 = *(int *)(param_1 + 0xb0);
  local_88 = param_1;
  if ((longlong)iVar1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0xa8);
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + lVar7);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x35) & 3) == 1)) {
        local_78[0] = *(undefined4 *)(lVar2 + 0x28);
        local_80 = *(longlong *)(lVar2 + 0x20);
        local_70 = (void *)0x0;
        uStack_68 = 0;
        local_98 = 0;
        (**(code **)(*param_2 + 0x10))(param_2,&local_80,0,1);
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  iVar1 = *(int *)(local_88 + 0xc0);
  if ((longlong)iVar1 != 0) {
    lVar6 = *(longlong *)(local_88 + 0xb8);
    lVar7 = 0;
    do {
      local_78[0] = *(undefined4 *)(lVar6 + 0x10 + lVar7);
      local_80 = *(longlong *)(lVar6 + 8 + lVar7);
      local_70 = (void *)0x0;
      uVar3 = *(uint *)(lVar6 + 0x20 + lVar7);
      _Src = *(void **)(lVar6 + 0x18 + lVar7);
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        uStack_68 = (ulonglong)uVar3;
      }
      else {
        FUN_1447a127e(&local_70,uVar3,0);
        memcpy(local_70,_Src,(longlong)(int)uVar3);
      }
      if ((local_80 != 0) && (plVar4 = (longlong *)FUN_144741050(local_78), *plVar4 != 0)) {
        local_98 = 0;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        (**(code **)(*param_2 + 0x10))(param_2,&local_80,0,1);
      }
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar7);
  }
  if ((longlong)*(int *)(local_88 + 0x268) != 0) {
    lVar6 = *(longlong *)(local_88 + 0x260);
    lVar7 = (longlong)*(int *)(local_88 + 0x268) * 0x2c;
    do {
      plVar4 = (longlong *)FUN_144b3458e(lVar6);
      local_80 = *plVar4;
      local_78[0] = (undefined4)plVar4[1];
      local_70 = (void *)0x0;
      uStack_68 = 0;
      local_98 = 0;
      (**(code **)(*param_2 + 0x10))(param_2,&local_80,0,1);
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x2c;
      lVar7 = lVar7 + -0x2c;
    } while (lVar7 != 0);
    uVar5 = CONCAT71((int7)((ulonglong)&local_80 >> 8),1);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffff01;
}



// FUNCTION 149068e26 FUN_149068e26 body=308 status=ok
// SIG undefined FUN_149068e26(void)

void FUN_149068e26(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x348))(param_1,(char)param_1[0x19],0);
  FUN_140a6f97c(param_1,param_1 + 0x56,param_2,param_1 + 0x1a);
  FUN_141291b7e(param_1,param_1 + 0x57,param_2,param_1 + 0x21);
  FUN_141291b7e(param_1,param_1 + 0x58,param_2,param_1 + 0x28);
  FUN_140a6f6fe(param_1,param_1 + 0x59,param_2,param_1 + 0x2f);
  FUN_140a6f8e8(param_1,param_1 + 0x5a,param_2,param_1 + 0x36);
  FUN_140a6f796(param_1,(longlong)param_1 + 0x2d4,param_2,param_1 + 0x3d);
  FUN_140a6f796(param_1,param_1 + 0x5b,param_2,param_1 + 0x44);
  FUN_1446ddc76(&local_20,"UniqueID",1);
  if (param_2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2dc) = 0xffffffff;
  }
  else {
    FUN_140a6f82a((undefined4 *)((longlong)param_1 + 0x2dc),param_2,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149068f5c FUN_149068f5c body=83 status=ok
// SIG undefined FUN_149068f5c(void)

void FUN_149068f5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba8a410;
  FUN_144716727(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140137a40(param_1);
  return;
}



// FUNCTION 149068fb0 FUN_149068fb0 body=406 status=ok
// SIG undefined FUN_149068fb0(void)

void FUN_149068fb0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  FUN_140722e22();
  plVar1 = (longlong *)(param_1 + 0x138);
  FUN_140bfc200(plVar1,*(undefined4 *)(param_2 + 0xc0),1);
  if (0 < *(int *)(param_2 + 0xc0)) {
    lVar9 = 0;
    do {
      lVar12 = lVar9 * 0x48 + *(longlong *)(param_2 + 0xb8);
      lVar4 = FUN_149068a52(lVar12,param_3);
      if (lVar4 != 0) {
        FUN_144a1a59e(*plVar1 + lVar9 * 0x10,*(undefined4 *)(lVar4 + 0x38),1);
        if (0 < *(int *)(lVar4 + 0x38)) {
          uVar11 = 0;
          do {
            lVar5 = FUN_14906878e(lVar12,uVar11 & 0xffffffff);
            uVar7 = 0xffffffff;
            if ((longlong)*(int *)(param_1 + 0x108) != 0) {
              lVar2 = *(longlong *)(param_1 + 0x100);
              lVar10 = (longlong)*(int *)(param_1 + 0x108) << 3;
              lVar8 = 0;
              do {
                lVar3 = *(longlong *)(lVar2 + lVar8 * 8);
                if (lVar3 == lVar5) {
LAB_1490690e7:
                  uVar7 = (undefined4)lVar8;
                  goto LAB_1490690f8;
                }
                if (lVar3 != 0) {
                  lVar6 = FUN_144a772c4();
                  if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                        (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
                     (*(longlong *)(lVar3 + 0x110) == lVar5)) goto LAB_1490690e7;
                }
                lVar8 = lVar8 + 1;
                lVar10 = lVar10 + -8;
              } while (lVar10 != 0);
              uVar7 = 0xffffffff;
            }
LAB_1490690f8:
            *(undefined4 *)(*(longlong *)(*plVar1 + lVar9 * 0x10) + uVar11 * 4) = uVar7;
            uVar11 = uVar11 + 1;
          } while ((longlong)uVar11 < (longlong)*(int *)(lVar4 + 0x38));
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_2 + 0xc0));
  }
  return;
}



// FUNCTION 149069146 FUN_149069146 body=134 status=ok
// SIG undefined FUN_149069146(void)

void FUN_149069146(longlong param_1)

{
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = *(undefined4 *)(param_1 + 0x128);
  uStack_2c = *(undefined4 *)(param_1 + 300);
  uStack_28 = *(undefined4 *)(param_1 + 0x130);
  uStack_24 = *(undefined4 *)(param_1 + 0x134);
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  local_20 = *(undefined8 *)(param_1 + 0x120);
  local_48 = 0;
  local_38 = &PTR_LAB_14ba8b4a0;
  local_58 = FUN_14440d0d4;
  FUN_1407461b0(1);
  *(undefined8 *)(param_1 + 0x120) = 0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490691cd FUN_1490691cd body=228 status=ok
// SIG undefined FUN_1490691cd(void)

ulonglong FUN_1490691cd(int *param_1,char param_2,longlong param_3,longlong param_4,int param_5,
                       int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  
  bVar5 = *(byte *)(param_1 + 1);
  if (param_2 == '\0') {
    uVar4 = 0xffffffff;
    if ((bVar5 & 1) == 0) goto LAB_149069206;
LAB_1490691f4:
    iVar6 = *param_1;
    if (iVar6 == -1) goto LAB_149069219;
  }
  else {
    if ((bVar5 & 1) != 0) goto LAB_1490691f4;
LAB_149069219:
    iVar1 = *(int *)(param_4 + 0xc0);
    if ((*(byte *)(param_3 + 0xd0) & 2) == 0) {
      if (iVar1 < 1) {
LAB_1490692aa:
        iVar6 = 0;
      }
      else {
        uVar2 = rand();
        iVar3 = (int)((float)iVar1 * ((float)(uVar2 & 0x7fff) / 32767.0));
        iVar6 = iVar1 + -1;
        if (iVar3 < iVar1 + -1) {
          iVar6 = iVar3;
        }
        bVar5 = *(byte *)(param_1 + 1);
      }
    }
    else {
      if (iVar1 < 0) goto LAB_1490692aa;
      if (*(char *)(param_4 + 0x25c) == '\0') {
        param_6 = param_5;
      }
      iVar6 = (int)((float)(iVar1 + 1) *
                   ((float)(param_6 * 0x6755c127 + 0x3619636bU >> 9 | 0x3f800000) + -1.0));
    }
  }
  uVar4 = (longlong)iVar6 % (longlong)*(int *)(param_4 + 0xc0) & 0xffffffff;
LAB_149069206:
  if ((bVar5 & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return uVar4;
}



// FUNCTION 1490692b2 FUN_1490692b2 body=858 status=ok
// SIG undefined FUN_1490692b2(void)

longlong *
FUN_1490692b2(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined4 *param_5,undefined4 param_6,undefined4 param_7,int *param_8)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  undefined7 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined4 local_f0;
  longlong local_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  char local_cc;
  undefined1 local_c8 [64];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_1 + 0x128);
  iVar2 = *param_8;
  uVar7 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar8 = CONCAT71(uVar7,1);
  if ((((longlong)iVar2 < 0) || (*(int *)(param_1 + 0x130) <= iVar2)) ||
     (plVar4 = (longlong *)FUN_14479d2ce((longlong)iVar2 * 0x14 + *plVar1),
     plVar4 == (longlong *)0x0)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar8 = CONCAT71(uVar7,(*(uint *)(plVar4 + 1) & 0x18000) != 0);
  }
  local_cc = *(char *)(param_5 + 1);
  if (local_cc == '\x01') {
    local_d0 = *param_5;
  }
  local_f0 = param_7;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,param_6);
  uVar3 = FUN_1490691cd(&local_d0,uVar8 & 0xffffffff,param_4,param_2);
  if (((int)uVar3 < 0) || (*(int *)(param_2 + 0xc0) <= (int)uVar3)) {
    if ((char)uVar8 != '\0') {
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    local_d8 = (ulonglong)uVar3;
    lVar5 = FUN_149068a52(local_d8 * 0x48 + *(longlong *)(param_2 + 0xb8),param_4);
    if (lVar5 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      if ((char)uVar8 != '\0') {
        local_e0 = lVar5;
        lVar5 = FUN_14479d2ce(param_1 + 0x120);
        if ((lVar5 == 0) && (lVar5 = *(longlong *)(param_3 + 0xa8), lVar5 == 0)) {
          lVar5 = *(longlong *)(param_3 + 0xb0);
          if (lVar5 == 0) {
            lVar5 = FUN_1448abda6(param_3);
          }
          FUN_1411371f6(local_c8);
          uVar6 = FUN_144a6c4d8();
          local_f8 = local_c8;
          lVar5 = FUN_141137228(lVar5,uVar6,0,0);
          if (local_88 != 0) {
            if (local_78 == (longlong *)0x0) {
              local_78 = local_68;
            }
            (**(code **)(*local_78 + 0x10))();
          }
          FUN_144757f48(lVar5,0x40);
          FUN_14485c47a(param_1 + 0x120,lVar5);
        }
        plVar4 = (longlong *)FUN_14906960d(lVar5);
        FUN_145adf2ae();
        (**(code **)(DAT_14cbf71a8 + 0xb8))(&DAT_14cbf71a8,plVar4);
        FUN_144757f48(plVar4,0x40);
        FUN_140486fc4(plVar4,param_3,0);
        FUN_140b506a4(plVar4);
        (**(code **)(*plVar4 + 0x440))(plVar4,param_3);
        *(undefined1 *)((longlong)plVar4 + 0x659) = *(undefined1 *)(param_2 + 0xc9);
        *(undefined1 *)(plVar4 + 0xd8) = 1;
        bVar10 = (*(byte *)(param_4 + 0xd0) & 1) == 0;
        FUN_14057a3b2(plVar4,bVar10,bVar10,bVar10);
        if ((longlong)*param_8 < 0) {
          *param_8 = *(int *)(param_1 + 0x130);
          lVar5 = FUN_1490696a2(plVar1);
        }
        else {
          lVar5 = (longlong)*param_8 * 0x14 + *plVar1;
        }
        FUN_14485c47a(lVar5,plVar4);
        *(undefined4 *)(*plVar1 + 0xc + (longlong)*param_8 * 0x14) = 0;
        lVar5 = local_e0;
      }
      FUN_149063ee0(plVar4,lVar5);
      lVar5 = *(longlong *)(param_1 + 0x138);
      lVar9 = local_d8 * 0x10;
      if (0 < *(int *)(lVar5 + 8 + lVar9)) {
        uVar8 = 0;
        do {
          iVar2 = *(int *)(*(longlong *)(lVar5 + lVar9) + uVar8 * 4);
          if (((longlong)iVar2 < 0) || (*(int *)(param_1 + 0x108) <= iVar2)) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar2 * 8);
          }
          (**(code **)(*plVar4 + 0x638))(plVar4,uVar8 & 0xffffffff,uVar6);
          uVar8 = uVar8 + 1;
          lVar5 = *(longlong *)(param_1 + 0x138);
        } while ((longlong)uVar8 < (longlong)*(int *)(lVar5 + 8 + lVar9));
      }
    }
  }
  if (*(char *)(param_5 + 1) == '\x01') {
    *(undefined1 *)(param_5 + 1) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 14906960d FUN_14906960d body=148 status=ok
// SIG undefined FUN_14906960d(void)

undefined8 FUN_14906960d(undefined8 param_1)

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
  uVar1 = FUN_1458d5f9a();
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



// FUNCTION 1490696a2 FUN_1490696a2 body=68 status=ok
// SIG undefined FUN_1490696a2(void)

longlong FUN_1490696a2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14906dec8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x14 + *param_1;
  FUN_14906deb1(lVar2,1);
  return lVar2;
}



// FUNCTION 1490696e6 FUN_1490696e6 body=6695 status=ok
// SIG undefined FUN_1490696e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1490696e6(longlong *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  double dVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  longlong lVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  float *pfVar23;
  ulonglong uVar24;
  int iVar25;
  char cVar26;
  byte bVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  double dVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_3a8 [32];
  undefined4 *local_388;
  uint local_380;
  uint local_378;
  int *local_370;
  byte local_368;
  char local_367;
  byte local_366;
  byte local_365;
  int local_364;
  byte local_35f;
  byte local_35e;
  char local_35d;
  undefined4 local_35c;
  ulonglong local_358;
  longlong local_350;
  longlong *local_348;
  ulonglong local_340;
  int local_334;
  int local_330;
  int local_32c;
  ulonglong local_328;
  longlong local_320;
  int local_314;
  int local_310;
  undefined4 local_30c;
  int *local_308;
  float local_2fc;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  int local_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 local_288;
  int local_27c;
  longlong local_278;
  undefined8 uStack_270;
  undefined1 local_260 [24];
  undefined8 local_248;
  undefined4 local_240;
  longlong local_238;
  undefined4 local_230;
  undefined4 local_228;
  char local_224;
  undefined4 local_220;
  char local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  longlong local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  int iStack_1e4;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b0;
  int local_1ac;
  longlong alStack_1a8 [3];
  undefined8 local_190;
  undefined8 local_188;
  undefined1 *puStack_180;
  undefined1 local_178 [16];
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  int local_134;
  undefined1 local_130 [8];
  undefined1 *local_128;
  int local_120;
  undefined8 local_110;
  undefined1 *apuStack_108 [2];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar28 = *(longlong *)(param_3 + 8);
  if ((((param_2 == 0 || lVar28 == 0) || (*(int *)(param_2 + 0xc0) == 0)) ||
      (*(char *)((longlong)param_1 + 0xf4) == '\x01')) ||
     (lVar14 = FUN_14479d2ce(lVar28 + 0x48), lVar14 == 0)) goto LAB_149069793;
  if (((0 < *(int *)(param_2 + 0x268)) || (0 < *(int *)(param_2 + 0x278))) ||
     ((0 < *(int *)(param_2 + 0x288) || (0 < *(int *)(param_2 + 0x298))))) {
    local_238 = param_1[0x20];
    local_230 = (undefined4)param_1[0x21];
    (**(code **)(*param_1 + 0x80))(param_1,param_2 + 0x260,param_3);
  }
  plVar20 = (longlong *)(param_3 + 0x40);
  piVar15 = (int *)(**(code **)(*(longlong *)(param_3 + 0x40) + 0x58))(plVar20,param_2 + 0x1d0,0);
  local_364 = -1;
  if ((piVar15 != (int *)0x0) && ((longlong)*piVar15 != -1)) {
    local_364 = *(int *)(*(longlong *)(param_3 + 0x60) + (longlong)*piVar15);
  }
  piVar15 = (int *)(param_2 + 600);
  piVar16 = (int *)(**(code **)(*plVar20 + 0x58))(plVar20,param_2 + 0x240,0);
  piVar17 = piVar15;
  if ((piVar16 != (int *)0x0) && ((longlong)*piVar16 != -1)) {
    piVar17 = (int *)((longlong)*piVar16 + *(longlong *)(param_3 + 0x60));
  }
  local_330 = *piVar17;
  piVar17 = (int *)(**(code **)(*plVar20 + 0x58))(plVar20,param_2 + 0x208,0);
  if ((piVar17 == (int *)0x0) || ((longlong)*piVar17 == -1)) {
    local_35c = 0;
  }
  else {
    local_30c = *(undefined4 *)(*(longlong *)(param_3 + 0x60) + (longlong)*piVar17);
    local_35c = (undefined4)CONCAT71((uint7)(uint3)((uint)local_30c >> 8),1);
  }
  puVar18 = &local_218;
  local_218 = 0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  piVar17 = (int *)(**(code **)(*plVar20 + 0x58))(plVar20,param_2 + 0xf0,0);
  if ((piVar17 != (int *)0x0) && ((longlong)*piVar17 != -1)) {
    puVar18 = (undefined8 *)((longlong)*piVar17 + *(longlong *)(param_3 + 0x60));
  }
  local_240 = *(undefined4 *)(puVar18 + 1);
  local_248 = *puVar18;
  piVar17 = (int *)(**(code **)(*plVar20 + 0x58))(plVar20,param_2 + 0x128,0);
  pfVar23 = (float *)&DAT_14c846330;
  cVar26 = (char)local_35c;
  if ((piVar17 != (int *)0x0) && ((longlong)*piVar17 != -1)) {
    pfVar23 = (float *)((longlong)*piVar17 + *(longlong *)(param_3 + 0x60));
  }
  fVar13 = *pfVar23;
  fVar38 = pfVar23[1];
  lVar6 = *(longlong *)pfVar23;
  fVar1 = pfVar23[2];
  piVar17 = (int *)(**(code **)(*plVar20 + 0x58))(plVar20,param_2 + 0x160,0);
  pfVar23 = (float *)&DAT_14c846350;
  if ((piVar17 != (int *)0x0) && ((longlong)*piVar17 != -1)) {
    pfVar23 = (float *)((longlong)*piVar17 + *(longlong *)(param_3 + 0x60));
  }
  fVar41 = *pfVar23;
  fVar2 = pfVar23[1];
  fVar3 = pfVar23[2];
  uVar21 = 0;
  piVar17 = (int *)(**(code **)(*plVar20 + 0x58))(plVar20,param_2 + 0x198,0);
  fVar37 = 0.0;
  if ((piVar17 != (int *)0x0) && ((longlong)*piVar17 != -1)) {
    fVar37 = *(float *)(*(longlong *)(param_3 + 0x60) + (longlong)*piVar17);
  }
  lVar19 = *(longlong *)(lVar14 + 0xb0);
  if (lVar19 == 0) {
    lVar19 = FUN_1448abda6(lVar14);
  }
  fVar40 = (float)*(double *)(lVar19 + 0x6e0);
  FUN_144b384f0(lVar28,local_260,
                CONCAT71((int7)((ulonglong)uVar21 >> 8),*(undefined1 *)(param_3 + 0xd0)) &
                0xffffffffffffff01);
  cVar7 = FUN_144a47c72(param_1,param_2,param_3);
  if (*(char *)(param_2 + 200) == '\0') {
    local_2e0 = *(longlong *)(param_3 + 0x10);
    lVar28 = *(longlong *)(local_2e0 + 0x78);
    iVar8 = *(int *)(param_2 + 0x2d0);
    bVar27 = iVar8 != -1 && lVar28 != 0;
    local_358 = 0;
    if (iVar8 != -1 && lVar28 != 0) {
      lVar19 = (ulonglong)(uint)(iVar8 * *(int *)(lVar28 + 300)) + *(longlong *)(lVar28 + 0x28);
      local_32c = *(int *)(lVar28 + 0x120);
    }
    else {
      local_32c = 0;
      lVar19 = 0;
    }
    iVar8 = *(int *)(param_2 + 0x2d8);
    local_366 = iVar8 != -1 && lVar28 != 0;
    if (iVar8 != -1 && lVar28 != 0) {
      local_2f0 = (ulonglong)(uint)(iVar8 * *(int *)(lVar28 + 300)) + *(longlong *)(lVar28 + 0x28);
      local_358 = (ulonglong)*(uint *)(lVar28 + 0x120);
    }
    else {
      local_2f0 = 0;
    }
    iVar8 = *(int *)(param_2 + 0x2d4);
    local_35d = iVar8 != -1 && lVar28 != 0;
    if (iVar8 != -1 && lVar28 != 0) {
      local_2e8 = (ulonglong)(uint)(iVar8 * *(int *)(lVar28 + 300)) + *(longlong *)(lVar28 + 0x28);
      local_310 = *(int *)(lVar28 + 0x120);
    }
    else {
      local_2e8 = 0;
      local_310 = 0;
    }
    iVar8 = *(int *)(param_2 + 0x2dc);
    local_365 = iVar8 != -1 && lVar28 != 0;
    if (iVar8 != -1 && lVar28 != 0) {
      local_320 = (ulonglong)(uint)(iVar8 * *(int *)(lVar28 + 300)) + *(longlong *)(lVar28 + 0x28);
      uVar24 = (ulonglong)*(uint *)(lVar28 + 0x120);
    }
    else {
      local_320 = 0;
      uVar24 = 0;
    }
    local_148 = 0;
    local_140 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_13c = 0xffffffff00000080;
    local_134 = 0;
    local_128 = (undefined1 *)0x0;
    local_340 = 0;
    local_120 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_367 = cVar7;
    local_308 = piVar15;
    local_2d8 = lVar14;
    if ((*(char *)(param_2 + 0x25c) == '\x01') && (0 < (int)param_1[0x26])) {
      local_368 = bVar27;
      local_350 = lVar19;
      FUN_14481578e(&local_278);
      lVar14 = local_320;
      local_1f8 = 0;
      iStack_1f0 = 0;
      local_218 = 0;
      uStack_210 = 0;
      uStack_1ec = 0x80;
      uStack_1e8 = 0xffffffff;
      iStack_1e4 = 0;
      local_1d8._0_12_ = ZEXT812(0);
      uVar30 = *(uint *)(param_1 + 0x26);
      uVar31 = (ulonglong)(int)uVar30;
      local_328 = uVar24;
      if (uVar31 != 0) {
        if ((int)uVar30 < 0) goto LAB_14906b106;
        FUN_140ab2830(&local_218,uVar30);
        iVar8 = 1;
        if (3 < uVar30) {
          uVar30 = (uVar30 | 1) + 0xe;
          iVar8 = 0x1f;
          if (uVar30 != 0) {
            for (; uVar30 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          iVar8 = 1 << ((byte)iVar8 & 0x1f);
        }
        if ((local_1d8._8_4_ == 0) || ((int)local_1d8._8_4_ < iVar8)) {
          local_1d8._8_4_ = iVar8;
          FUN_140264164();
        }
        local_1b0 = 0;
        if (0 < (int)param_1[0x26]) {
          do {
            uVar24 = uStack_270;
            if (*(int *)(param_1[0x25] + 0x10 + (longlong)(int)local_1b0 * 0x14) < 0) {
              lVar14 = (longlong)(int)uStack_270;
              uVar30 = (int)uStack_270 + 1;
              uStack_270 = CONCAT44(uStack_270._4_4_,uVar30);
              if (uStack_270._4_4_ < uVar30) {
                FUN_1446f48e2(&local_278,uVar24 & 0xffffffff);
              }
              *(uint *)(local_278 + lVar14 * 4) = local_1b0;
              lVar14 = local_320;
            }
            else {
              local_190 = (longlong *)(param_1[0x25] + (longlong)(int)local_1b0 * 0x14 + 0x10);
              local_188 = &local_1b0;
              FUN_1418355d2(&local_218,&local_110,&local_190,0);
            }
            local_1b0 = local_1b0 + 1;
          } while ((int)local_1b0 < (int)param_1[0x26]);
        }
      }
      uVar24 = local_328;
      uVar31 = (longlong)(int)(float)uStack_210 - (longlong)iStack_1e4;
      uVar30 = (uint)uVar31;
      if ((uint)((int)uStack_160 - local_134) < uVar30) {
        if ((int)uVar30 < 0) {
LAB_14906b106:
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar31);
        }
        FUN_140ab2830(&local_168,uVar31 & 0xffffffff);
        iVar8 = 1;
        if (3 < uVar30) {
          uVar30 = (uVar30 | 1) + 0xe;
          iVar8 = 0x1f;
          if (uVar30 != 0) {
            for (; uVar30 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          iVar8 = 1 << ((byte)iVar8 & 0x1f);
        }
        if ((local_120 == 0) || (local_120 < iVar8)) {
          local_120 = iVar8;
          FUN_140264164();
        }
      }
      if (*(int *)(lVar28 + 0x120) != 0) {
        uVar30 = 0;
        do {
          local_1b0 = 0xffffffff;
          if (((int)uVar30 < (int)uVar24 & local_365) == 1) {
            local_1b0 = *(uint *)(lVar14 + (longlong)(int)uVar30 * 4);
          }
          if ((float)uStack_210 != (float)iStack_1e4) {
            puVar18 = (undefined8 *)local_1d8._0_8_;
            if ((undefined8 *)local_1d8._0_8_ == (undefined8 *)0x0) {
              puVar18 = &uStack_1e0;
            }
            iVar8 = *(int *)((longlong)puVar18 + (ulonglong)(local_1d8._8_4_ - 1 & local_1b0) * 4);
            while (iVar8 != -1) {
              lVar19 = (longlong)iVar8 * 0x10;
              if (*(uint *)(local_218 + lVar19) == local_1b0) {
                local_298 = *(int *)(local_218 + 4 + lVar19);
                FUN_1406ea0e0(&local_218);
                if (local_367 != '\0') {
                  iVar8 = local_364;
                  if (((int)uVar30 < local_32c & local_368) == 1) {
                    iVar8 = *(int *)(local_350 + (longlong)(int)uVar30 * 4);
                  }
                  if (iVar8 != 0) {
                    iVar8 = local_330;
                    if (((int)uVar30 < (int)local_358 & local_366) == 1) {
                      iVar8 = *(int *)(local_2f0 + (longlong)(int)uVar30 * 4);
                    }
                    if (iVar8 == *local_308) {
                      local_190 = (longlong *)&local_1b0;
                      local_188 = &local_298;
                      FUN_1418355d2(&local_168,&local_110,&local_190,0);
                      break;
                    }
                  }
                }
                plVar20 = (longlong *)FUN_14479d2ce((longlong)local_298 * 0x14 + param_1[0x25]);
                if ((plVar20 != (longlong *)0x0) &&
                   ((*(byte *)((longlong)plVar20 + 0x9e) & 0x10) != 0)) {
                  (**(code **)(*plVar20 + 0x2b0))(plVar20);
                  FUN_14045627c(plVar20,0,2);
                }
                uVar31 = uStack_270;
                lVar14 = (longlong)(int)uStack_270;
                uVar11 = (int)uStack_270 + 1;
                uStack_270 = CONCAT44(uStack_270._4_4_,uVar11);
                if (uStack_270._4_4_ < uVar11) {
                  FUN_1446f48e2(&local_278,uVar31 & 0xffffffff);
                }
                *(int *)(local_278 + lVar14 * 4) = local_298;
                *(undefined4 *)(param_1[0x25] + 0x10 + (longlong)local_298 * 0x14) = 0xffffffff;
                lVar14 = local_320;
                break;
              }
              iVar8 = *(int *)(lVar19 + local_218 + 8);
            }
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < *(uint *)(lVar28 + 0x120));
      }
      local_110 = (int *)&DAT_100000000;
      apuStack_108[0] = local_208;
      apuStack_108[1] = (undefined1 *)0xffffffff;
      uStack_f8 = 0;
      if (iStack_1f0 == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_110);
        iVar8 = iStack_1f0;
      }
      local_178._8_4_ = uStack_f8;
      local_178._0_8_ = apuStack_108[1];
      local_178._12_4_ = uStack_f4;
      auVar34 = local_178;
      local_188 = local_110;
      puStack_180 = apuStack_108[0];
      local_190 = &local_218;
      local_178._4_4_ = (undefined4)((ulonglong)apuStack_108[1] >> 0x20);
      iVar25 = local_178._4_4_;
      if ((local_178._4_4_ != iVar8) || (local_178 = auVar34, apuStack_108[0] != local_208)) {
        do {
          local_178 = auVar34;
          lVar14 = *(longlong *)(*local_190 + (longlong)iVar25 * 0x10);
          lVar19 = lVar14 >> 0x20;
          plVar20 = (longlong *)FUN_14479d2ce(lVar19 * 0x14 + param_1[0x25]);
          if ((plVar20 != (longlong *)0x0) && ((*(byte *)((longlong)plVar20 + 0x9e) & 0x10) != 0)) {
            (**(code **)(*plVar20 + 0x2b0))(plVar20);
            FUN_14045627c(plVar20,0,2);
          }
          uVar24 = uStack_270;
          lVar29 = (longlong)(int)uStack_270;
          uVar30 = (int)uStack_270 + 1;
          uStack_270 = CONCAT44(uStack_270._4_4_,uVar30);
          if (uStack_270._4_4_ < uVar30) {
            FUN_1446f48e2(&local_278,uVar24 & 0xffffffff);
          }
          *(int *)(local_278 + lVar29 * 4) = (int)((ulonglong)lVar14 >> 0x20);
          *(undefined4 *)(param_1[0x25] + 0x10 + lVar19 * 0x14) = 0xffffffff;
          local_178._0_4_ = local_178._0_4_ & ~local_188._4_4_;
          FUN_1449c0562(&local_188);
          iVar25 = local_178._4_4_;
          auVar34 = local_178;
        } while (local_190 != &local_218 || (puStack_180 != local_208 || local_178._4_4_ != iVar8));
      }
      local_1d8._8_4_ = 0;
      if (local_1d8._0_8_ != 0) {
        FUN_1400020a8();
      }
      FUN_144a6bfa8(&local_218);
      uVar24 = local_328;
      lVar19 = local_350;
      bVar27 = local_368;
    }
    if (*(int *)(lVar28 + 0x120) != 0) {
      iVar8 = *(int *)(param_2 + 0xcc);
      local_340 = 0;
      uVar30 = 0;
      uVar31 = local_358;
      piVar15 = local_308;
      cVar26 = local_367;
      iVar25 = local_364;
      do {
        if (cVar26 != '\0') {
          iVar9 = iVar25;
          if (((int)uVar30 < local_32c & bVar27) == 1) {
            iVar9 = *(int *)(lVar19 + (longlong)(int)uVar30 * 4);
          }
          if (iVar9 != 0) {
            iVar9 = local_330;
            if (((int)uVar30 < (int)uVar31 & local_366) == 1) {
              iVar9 = *(int *)(local_2f0 + (longlong)(int)uVar30 * 4);
            }
            if (iVar9 == *piVar15) {
              local_27c = -1;
              uVar11 = 0xffffffff;
              if (*(char *)(param_2 + 0x25c) == '\x01') {
                if (((int)uVar30 < (int)uVar24 & local_365) == 1) {
                  uVar11 = *(uint *)(local_320 + (longlong)(int)uVar30 * 4);
                }
                if ((int)uStack_160 != local_134) {
                  puVar22 = local_128;
                  if (local_128 == (undefined1 *)0x0) {
                    puVar22 = local_130;
                  }
                  iVar9 = *(int *)(puVar22 + (ulonglong)(local_120 - 1U & uVar11) * 4);
                  while (uVar31 = local_358, iVar9 != -1) {
                    lVar14 = (longlong)iVar9 * 0x10;
                    if (*(uint *)(local_168 + lVar14) == uVar11) {
                      iVar9 = *(int *)(local_168 + 4 + lVar14);
                      local_350 = lVar19;
                      local_334 = iVar8;
                      local_328 = uVar24;
                      local_27c = iVar9;
                      FUN_1406ea0e0(&local_168);
                      uVar31 = local_358;
                      uVar24 = local_328;
                      lVar19 = local_350;
                      iVar8 = local_334;
                      cVar26 = local_367;
                      iVar25 = local_364;
                      if (iVar9 != -1) goto LAB_14906aa83;
                      break;
                    }
                    iVar9 = *(int *)(lVar14 + local_168 + 8);
                  }
                }
              }
              piVar15 = local_308;
              if (((int)uStack_160 + (int)local_340) - local_134 < iVar8) {
                if (*(char *)(param_2 + 0x25c) == '\0') {
                  local_27c = -1;
                  if ((int)local_340 < (int)param_1[0x26]) {
                    local_27c = (int)local_340;
                  }
                }
                else if ((longlong)(int)uStack_270 != 0) {
                  local_27c = *(int *)(local_278 + -4 + (longlong)(int)uStack_270 * 4);
                  uStack_270 = CONCAT44(uStack_270._4_4_,(int)uStack_270 + -1);
                }
LAB_14906aa83:
                if (local_35d == '\0') {
                  local_21c = (char)local_35c;
                  uVar10 = local_30c;
                  if (local_21c != '\0') goto LAB_14906aaaf;
                }
                else {
                  uVar10 = 0xffffffff;
                  if ((int)uVar30 < local_310) {
                    uVar10 = *(undefined4 *)(local_2e8 + (longlong)(int)uVar30 * 4);
                  }
                  local_21c = '\x01';
LAB_14906aaaf:
                  local_220 = uVar10;
                }
                local_370 = &local_27c;
                local_388 = &local_220;
                local_380 = uVar30;
                local_378 = uVar11;
                local_368 = bVar27;
                local_350 = lVar19;
                plVar20 = (longlong *)FUN_1490692b2(param_1,param_2,local_2d8,param_3);
                lVar14 = local_2e0;
                uVar31 = local_358;
                lVar19 = local_350;
                piVar15 = local_308;
                bVar27 = local_368;
                cVar26 = local_367;
                iVar25 = local_364;
                if (plVar20 != (longlong *)0x0) {
                  local_348 = plVar20;
                  local_334 = iVar8;
                  FUN_144b351ea(&local_190,*(undefined8 *)(local_2e0 + 0x78),
                                *(undefined1 *)(param_2 + 0x2b0),*(undefined4 *)(param_2 + 0x2b4));
                  FUN_14060d608(&local_110,*(undefined8 *)(lVar14 + 0x78),
                                *(undefined1 *)(param_2 + 0x2b8),*(undefined4 *)(param_2 + 700));
                  FUN_14060d608(&local_1b0,*(undefined8 *)(lVar14 + 0x78),
                                *(undefined1 *)(param_2 + 0x2c0),*(undefined4 *)(param_2 + 0x2c4));
                  local_35f = *(byte *)(param_2 + 0x2c8);
                  lVar14 = *(longlong *)(lVar14 + 0x78);
                  local_35e = *(int *)(param_2 + 0x2cc) != -1 && lVar14 != 0;
                  if ((bool)local_35e) {
                    local_2f8 = (ulonglong)
                                (uint)(*(int *)(param_2 + 0x2cc) *
                                      *(int *)(lVar14 + 0x128 + (ulonglong)(local_35f ^ 1) * 8)) +
                                *(longlong *)(lVar14 + 0x18 + (ulonglong)(local_35f ^ 1) * 0x20);
                    local_314 = *(int *)(lVar14 + 0x120);
                  }
                  else {
                    local_2f8 = 0;
                    local_314 = 0;
                  }
                  if (((char)local_190 == '\x01') && ((int)uVar30 < local_190._4_4_)) {
                    if (local_190._1_1_ == '\0') {
                      lVar14 = 0;
                      do {
                        uVar4 = *(ushort *)((&local_188)[lVar14] + (longlong)(int)uVar30 * 2);
                        uVar12 = (uint)uVar4 << 0xd;
                        if ((uVar12 & 0xf800000) == 0xf800000) {
                          fVar13 = (float)(uVar12 | 0x70000000);
                        }
                        else if ((uVar12 & 0xf800000) == 0) {
                          fVar13 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
                        }
                        else {
                          fVar13 = (float)((uVar12 & 0xfffe000) + 0x38000000);
                        }
                        *(uint *)((longlong)&local_2a8 + lVar14 * 4) =
                             (int)(short)uVar4 & 0x80000000U | (uint)fVar13;
                        lVar14 = lVar14 + 1;
                      } while (lVar14 != 3);
                    }
                    else {
                      lVar14 = 0;
                      do {
                        *(undefined4 *)((longlong)&local_2a8 + lVar14 * 4) =
                             *(undefined4 *)((&local_188)[lVar14] + (longlong)(int)uVar30 * 4);
                        lVar14 = lVar14 + 1;
                      } while (lVar14 != 3);
                    }
                  }
                  else {
                    local_2a0 = local_240;
                    local_2a8 = local_248;
                  }
                  FUN_144b38fb2(local_260,&local_298,&local_2a8);
                  if (((char)local_1b0 == '\x01') && ((int)uVar30 < local_1ac)) {
                    if (local_1b0._1_1_ == '\0') {
                      lVar14 = 0;
                      do {
                        uVar4 = *(ushort *)(alStack_1a8[lVar14] + (longlong)(int)uVar30 * 2);
                        uVar12 = (uint)uVar4 << 0xd;
                        if ((uVar12 & 0xf800000) == 0xf800000) {
                          fVar13 = (float)(uVar12 | 0x70000000);
                        }
                        else if ((uVar12 & 0xf800000) == 0) {
                          fVar13 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
                        }
                        else {
                          fVar13 = (float)((uVar12 & 0xfffe000) + 0x38000000);
                        }
                        *(uint *)((longlong)&local_218 + lVar14 * 4) =
                             (int)(short)uVar4 & 0x80000000U | (uint)fVar13;
                        lVar14 = lVar14 + 1;
                      } while (lVar14 != 3);
                    }
                    else {
                      lVar14 = 0;
                      do {
                        *(undefined4 *)((longlong)&local_218 + lVar14 * 4) =
                             *(undefined4 *)(alStack_1a8[lVar14] + (longlong)(int)uVar30 * 4);
                        lVar14 = lVar14 + 1;
                      } while (lVar14 != 3);
                    }
                  }
                  else {
                    local_218 = CONCAT44(fVar2,fVar41);
                    uStack_210 = CONCAT44(uStack_210._4_4_,fVar3);
                  }
                  dVar39 = (double)(float)uStack_210;
                  dVar32 = (double)local_218._4_4_;
                  dVar5 = (double)(float)local_218;
                  if (((char)local_110 == '\x01') && ((int)uVar30 < local_110._4_4_)) {
                    if (local_110._1_1_ == '\0') {
                      lVar14 = 0;
                      do {
                        uVar12 = (uint)*(ushort *)(apuStack_108[lVar14] + (longlong)(int)uVar30 * 2)
                                 << 0xd;
                        if ((uVar12 & 0xf800000) == 0xf800000) {
                          fVar13 = (float)(uVar12 | 0x70000000);
                        }
                        else if ((uVar12 & 0xf800000) == 0) {
                          fVar13 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
                        }
                        else {
                          fVar13 = (float)((uVar12 & 0xfffe000) + 0x38000000);
                        }
                        *(uint *)((longlong)&local_218 + lVar14 * 4) =
                             (int)(short)*(ushort *)
                                          (apuStack_108[lVar14] + (longlong)(int)uVar30 * 2) &
                             0x80000000U | (uint)fVar13;
                        lVar14 = lVar14 + 1;
                      } while (lVar14 != 3);
                    }
                    else {
                      lVar14 = 0;
                      do {
                        *(undefined4 *)((longlong)&local_218 + lVar14 * 4) =
                             *(undefined4 *)(apuStack_108[lVar14] + (longlong)(int)uVar30 * 4);
                        lVar14 = lVar14 + 1;
                      } while (lVar14 != 3);
                    }
                  }
                  else {
                    uStack_210 = CONCAT44(uStack_210._4_4_,fVar1);
                    local_218 = lVar6;
                  }
                  local_2b0 = (double)(float)uStack_210;
                  local_2b8 = (double)local_218._4_4_;
                  local_2c0 = (double)(float)local_218;
                  local_328 = uVar24;
                  local_2fc = fVar41;
                  FUN_144a7484c(&local_2c0,&local_218);
                  plVar20 = local_348;
                  local_1f8 = CONCAT44(uStack_294,local_298);
                  iStack_1f0 = (int)uStack_290;
                  uStack_1ec = (undefined4)((ulonglong)uStack_290 >> 0x20);
                  uStack_1e8 = (undefined4)local_288;
                  iStack_1e4 = (int)((ulonglong)local_288 >> 0x20);
                  uStack_1e0 = 0;
                  local_1d8._8_4_ = SUB84(dVar32,0);
                  local_1d8._0_8_ = dVar5;
                  local_1d8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
                  uStack_1c0 = 0;
                  local_388 = (undefined4 *)((ulonglong)local_388 & 0xffffffffffffff00);
                  local_1c8 = dVar39;
                  FUN_144927a08(local_348,&local_218,0,0);
                  if ((*(byte *)((longlong)plVar20 + 0x9e) & 0x10) == 0) {
                    FUN_1479edf8c(local_348);
                    FUN_14045627c(local_348,1,2);
                    (**(code **)(*local_348 + 0x2a8))(local_348,0);
                  }
                  fVar41 = local_2fc;
                  auVar34 = ZEXT416((uint)fVar37);
                  if ((local_35e & (int)uVar30 < local_314) == 1) {
                    if (local_35f == 0) {
                      uVar4 = *(ushort *)(local_2f8 + (longlong)(int)uVar30 * 2);
                      uVar12 = (uint)uVar4 << 0xd;
                      if ((uVar12 & 0xf800000) == 0xf800000) {
                        fVar13 = (float)(uVar12 | 0x70000000);
                      }
                      else if ((uVar12 & 0xf800000) == 0) {
                        fVar13 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
                      }
                      else {
                        fVar13 = (float)((uVar12 & 0xfffe000) + 0x38000000);
                      }
                      auVar34 = ZEXT416((int)(short)uVar4 & 0x80000000U | (uint)fVar13);
                    }
                    else {
                      auVar34 = ZEXT416(*(uint *)(local_2f8 + (longlong)(int)uVar30 * 4));
                    }
                  }
                  bVar27 = *(byte *)(param_2 + 0xc9) ^ 1;
                  fVar38 = auVar34._0_4_;
                  fVar13 = *(float *)((longlong)local_348 + 0x6bc);
                  if (0.0 <= fVar38 || bVar27 != 0) {
                    if (fVar13 < fVar38 && bVar27 == 0) {
                      auVar36._0_4_ = fVar38 / fVar13;
                      auVar36._4_12_ = auVar34._4_12_;
                      auVar36 = blendps(auVar36,ZEXT816(0),0xe);
                      auVar36 = roundps(auVar36,auVar36,1);
                      fVar33 = auVar36._0_4_;
                      goto LAB_14906afa9;
                    }
                  }
                  else {
                    auVar35._0_4_ = fVar38 / fVar13;
                    auVar35._4_12_ = auVar34._4_12_;
                    auVar36 = blendps(auVar35,ZEXT816(0),0xe);
                    auVar36 = roundps(auVar36,auVar36,2);
                    fVar33 = auVar36._0_4_;
LAB_14906afa9:
                    auVar34._0_4_ = fVar38 - fVar33 * fVar13;
                  }
                  lVar19 = (longlong)local_27c;
                  lVar14 = param_1[0x25];
                  if ((((char)local_348[0xd8] == '\x01') && (local_348[0xca] != 0)) &&
                     ((char)local_348[0xcb] == '\x01')) {
                    local_388 = (undefined4 *)CONCAT71(local_388._1_7_,*(byte *)(param_2 + 0xc9));
                    FUN_144404370(local_348,local_358,
                                  CONCAT71((uint7)(uint3)((uint)local_364 >> 8),1),
                                  auVar34._0_4_ < *(float *)(lVar14 + 0xc + lVar19 * 0x14));
                  }
                  lVar14 = lVar19 * 0x14 + lVar14;
                  *(float *)(lVar14 + 0xc) = auVar34._0_4_;
                  *(uint *)(lVar14 + 0x10) = uVar11;
                  *(float *)(lVar14 + 8) = fVar40;
                  uVar11 = (int)local_340 + 1;
                  local_340 = (ulonglong)uVar11;
                  uVar31 = local_358;
                  uVar24 = local_328;
                  lVar19 = local_350;
                  piVar15 = local_308;
                  bVar27 = local_368;
                  iVar8 = local_334;
                  cVar26 = local_367;
                  iVar25 = local_364;
                  if (local_334 <= (int)uVar11) break;
                }
              }
            }
          }
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 < *(uint *)(lVar28 + 0x120));
    }
    if (0 < (int)param_1[0x26] && (int)local_340 < (int)param_1[0x26]) {
      uVar30 = 0;
      do {
        lVar28 = (longlong)(int)uVar30 * 0x14 + param_1[0x25];
        if (*(char *)(param_2 + 0x25c) == '\x01') {
          if (*(int *)(lVar28 + 0x10) < 0) {
LAB_14906acb9:
            plVar20 = (longlong *)FUN_14479d2ce(lVar28);
            if (plVar20 != (longlong *)0x0) {
              if (fVar40 - *(float *)(lVar28 + 8) < _DAT_14c7649bc) {
                if ((*(byte *)((longlong)plVar20 + 0x9e) & 0x10) != 0) {
                  (**(code **)(*plVar20 + 0x2b0))(plVar20);
                  FUN_14045627c(plVar20,0,2);
                }
                goto LAB_14906aca1;
              }
              FUN_145adf2ae();
              uVar21 = FUN_14479d2ce(lVar28);
              (**(code **)(DAT_14cbf71a8 + 0xc0))(&DAT_14cbf71a8,uVar21);
              (**(code **)(*plVar20 + 0x420))(plVar20,0);
            }
            iVar8 = (int)param_1[0x26];
            iVar25 = ~uVar30 + iVar8;
            if (iVar25 != 0) {
              if (0 < iVar25) {
                iVar25 = 1;
              }
              memmove((void *)(param_1[0x25] + (longlong)(int)uVar30 * 0x14),
                      (void *)(param_1[0x25] + (longlong)(iVar8 - iVar25) * 0x14),
                      (longlong)iVar25 * 0x14);
              iVar8 = (int)param_1[0x26];
            }
            *(int *)(param_1 + 0x26) = iVar8 + -1;
            uVar30 = uVar30 - 1;
          }
        }
        else if ((int)local_340 <= (int)uVar30) goto LAB_14906acb9;
LAB_14906aca1:
        uVar30 = uVar30 + 1;
      } while ((int)uVar30 < (int)param_1[0x26]);
    }
    if (local_278 != 0) {
      FUN_1400020a8();
    }
    local_120 = 0;
    if (local_128 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_168);
    goto LAB_149069793;
  }
  if ((cVar7 == '\0') || (local_330 != *piVar15)) goto LAB_149069793;
  local_110 = (int *)CONCAT44(local_110._4_4_,-(uint)((int)param_1[0x26] < 1));
  if (cVar26 != '\0') {
    local_228 = local_30c;
  }
  local_370 = (int *)&local_110;
  iVar8 = 0;
  local_378 = 0;
  local_380 = 0;
  local_388 = &local_228;
  local_224 = cVar26;
  plVar20 = (longlong *)FUN_1490692b2(param_1,param_2,lVar14,param_3);
  if (plVar20 != (longlong *)0x0) {
    local_2d0 = local_248;
    local_2c8 = local_240;
    FUN_144b38fb2(local_260,&local_168);
    dVar32 = (double)fVar2;
    puStack_180 = (undefined1 *)(double)fVar1;
    local_188 = (int *)(double)fVar38;
    local_190 = (longlong *)(double)fVar13;
    FUN_144a7484c(&local_190,&local_218);
    local_1f8 = local_168;
    iStack_1f0 = (int)uStack_160;
    uStack_1ec = (undefined4)((ulonglong)uStack_160 >> 0x20);
    uStack_1e8 = (undefined4)local_158;
    iStack_1e4 = (int)((ulonglong)local_158 >> 0x20);
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar32,0);
    local_1d8._0_8_ = (double)fVar41;
    local_1d8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    uStack_1c0 = 0;
    local_388 = (undefined4 *)((ulonglong)local_388 & 0xffffffffffffff00);
    local_1c8 = (double)fVar3;
    FUN_144927a08(plVar20,&local_218,0,0);
    if ((*(byte *)((longlong)plVar20 + 0x9e) & 0x10) == 0) {
      FUN_1479edf8c(plVar20);
      FUN_14045627c(plVar20,1,2);
      (**(code **)(*plVar20 + 0x2a8))(plVar20,0);
    }
    fVar13 = *(float *)((longlong)plVar20 + 0x6bc);
    cVar26 = *(char *)(param_2 + 0xc9);
    if ((cVar26 != '\x01') || (0.0 <= fVar37)) {
      if ((cVar26 != '\0') && (fVar13 < fVar37)) {
        auVar34 = roundps(ZEXT416((uint)(fVar37 / fVar13)),ZEXT416((uint)(fVar37 / fVar13)),1);
        fVar38 = auVar34._0_4_;
        goto LAB_149069c47;
      }
    }
    else {
      auVar34 = roundps(ZEXT416((uint)(fVar37 / fVar13)),ZEXT416((uint)(fVar37 / fVar13)),2);
      fVar38 = auVar34._0_4_;
LAB_149069c47:
      fVar37 = fVar37 - fVar38 * fVar13;
    }
    lVar14 = (longlong)(int)local_110;
    lVar28 = param_1[0x25] + lVar14 * 0x14;
    if ((((char)plVar20[0xd8] == '\x01') && (plVar20[0xca] != 0)) && ((char)plVar20[0xcb] == '\x01')
       ) {
      local_388 = (undefined4 *)CONCAT71(local_388._1_7_,cVar26);
      FUN_144404370(plVar20,lVar14 * 5,1,fVar37 < *(float *)(param_1[0x25] + 0xc + lVar14 * 0x14));
    }
    *(float *)(lVar28 + 0xc) = fVar37;
    *(undefined4 *)(lVar28 + 0x10) = 0xffffffff;
    *(float *)(lVar28 + 8) = fVar40;
    iVar8 = 1;
  }
  uVar30 = *(uint *)(param_1 + 0x26);
  while (iVar8 < (int)uVar30) {
    lVar28 = param_1[0x25] + (ulonglong)uVar30 * 0x14 + -0x14;
    plVar20 = (longlong *)FUN_14479d2ce(lVar28);
    if (plVar20 != (longlong *)0x0) {
      FUN_145adf2ae();
      uVar21 = FUN_14479d2ce(lVar28);
      (**(code **)(DAT_14cbf71a8 + 0xc0))(&DAT_14cbf71a8,uVar21);
      (**(code **)(*plVar20 + 0x420))(plVar20,0);
    }
    uVar30 = *(uint *)(param_1 + 0x26);
  }
LAB_149069793:
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906b116 FUN_14906b116 body=213 status=ok
// SIG undefined FUN_14906b116(void)

void FUN_14906b116(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x130) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x128);
    lVar5 = (longlong)*(int *)(param_1 + 0x130) * 0x14;
    do {
      cVar1 = FUN_144729dda(lVar2);
      if (cVar1 != '\0') {
        FUN_145adf2ae();
        uVar3 = FUN_14479d2ce(lVar2);
        (**(code **)(DAT_14cbf71a8 + 0xc0))(&DAT_14cbf71a8,uVar3);
        plVar4 = (longlong *)FUN_14479d2ce(lVar2);
        (**(code **)(*plVar4 + 0x420))(plVar4,0);
      }
      lVar2 = lVar2 + 0x14;
      lVar5 = lVar5 + -0x14;
    } while (lVar5 != 0);
  }
  FUN_14906b1ec(param_1 + 0x128);
  lVar2 = FUN_14479d2ce(param_1 + 0x120);
  if (lVar2 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_140aeefbc(lVar2,0,1);
  return;
}



// FUNCTION 14906b1ec FUN_14906b1ec body=93 status=ok
// SIG undefined FUN_14906b1ec(void)

void FUN_14906b1ec(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (-1 < (longlong)iVar1) {
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
    FUN_14906dec8(param_1,iVar1);
  }
  FUN_14906deb1((longlong)iVar1 * 0x14 + *param_1,-iVar1);
  return;
}



// FUNCTION 14906b24a FUN_14906b24a body=132 status=ok
// SIG undefined FUN_14906b24a(void)

void FUN_14906b24a(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_14906e932(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14906b2ce FUN_14906b2ce body=45 status=ok
// SIG undefined FUN_14906b2ce(void)

longlong FUN_14906b2ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145db24e6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b318 FUN_14906b318 body=57 status=ok
// SIG undefined FUN_14906b318(void)

undefined8 * FUN_14906b318(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba8a700;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b354 FUN_14906b354 body=45 status=ok
// SIG undefined FUN_14906b354(void)

longlong FUN_14906b354(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a21ec2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b382 FUN_14906b382 body=48 status=ok
// SIG undefined FUN_14906b382(void)

longlong FUN_14906b382(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145a21ec2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b3b2 FUN_14906b3b2 body=48 status=ok
// SIG undefined FUN_14906b3b2(void)

longlong FUN_14906b3b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145a21ec2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b3e2 FUN_14906b3e2 body=48 status=ok
// SIG undefined FUN_14906b3e2(void)

longlong FUN_14906b3e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145a21ec2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b412 FUN_14906b412 body=38 status=ok
// SIG undefined FUN_14906b412(void)

undefined8 FUN_14906b412(undefined8 param_1,int param_2)

{
  FUN_149065412();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b440 FUN_14906b440 body=63 status=ok
// SIG undefined FUN_14906b440(void)

undefined8 * FUN_14906b440(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba8acb0;
  FUN_144a80d50(param_1 + 0x26);
  FUN_1447259a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b480 FUN_14906b480 body=38 status=ok
// SIG undefined FUN_14906b480(void)

undefined8 FUN_14906b480(undefined8 param_1,int param_2)

{
  FUN_145c6c65e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b4b4 FUN_14906b4b4 body=38 status=ok
// SIG undefined FUN_14906b4b4(void)

undefined8 FUN_14906b4b4(undefined8 param_1,int param_2)

{
  FUN_144a4509c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b51e FUN_14906b51e body=38 status=ok
// SIG undefined FUN_14906b51e(void)

undefined8 FUN_14906b51e(undefined8 param_1,int param_2)

{
  FUN_149068f5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b544 FUN_14906b544 body=113 status=ok
// SIG undefined FUN_14906b544(void)

void FUN_14906b544(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 14906b5b6 FUN_14906b5b6 body=57 status=ok
// SIG undefined FUN_14906b5b6(void)

undefined8 * FUN_14906b5b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba8a700;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b5f0 FUN_14906b5f0 body=57 status=ok
// SIG undefined FUN_14906b5f0(void)

undefined8 * FUN_14906b5f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba8a700;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906b62e FUN_14906b62e body=65 status=ok
// SIG undefined FUN_14906b62e(void)

void FUN_14906b62e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846400;
  puVar3 = param_2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0xffffffffffffffff;
  return;
}



// FUNCTION 14906b670 FUN_14906b670 body=65 status=ok
// SIG undefined FUN_14906b670(void)

void FUN_14906b670(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846400;
  puVar3 = param_2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0xffffffffffffffff;
  return;
}



// FUNCTION 14906b6ca FUN_14906b6ca body=68 status=ok
// SIG undefined FUN_14906b6ca(void)

undefined8 FUN_14906b6ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xc0);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14906b736 FUN_14906b736 body=59 status=ok
// SIG undefined FUN_14906b736(void)

undefined8 FUN_14906b736(longlong *param_1)

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



// FUNCTION 14906b83a FUN_14906b83a body=59 status=ok
// SIG undefined FUN_14906b83a(void)

undefined8 FUN_14906b83a(longlong *param_1)

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



// FUNCTION 14906b958 FUN_14906b958 body=59 status=ok
// SIG undefined FUN_14906b958(void)

undefined8 FUN_14906b958(longlong *param_1)

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



// FUNCTION 14906b9fa FUN_14906b9fa body=58 status=ok
// SIG undefined FUN_14906b9fa(void)

void FUN_14906b9fa(undefined8 param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  memset(param_2,0,0x99);
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb1) = 0;
  return;
}



// FUNCTION 14906ba34 FUN_14906ba34 body=58 status=ok
// SIG undefined FUN_14906ba34(void)

void FUN_14906ba34(undefined8 param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  memset(param_2,0,0x99);
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb1) = 0;
  return;
}



// FUNCTION 14906ba8c FUN_14906ba8c body=63 status=ok
// SIG undefined FUN_14906ba8c(void)

undefined1 FUN_14906ba8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149068560(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 14906baf4 FUN_14906baf4 body=59 status=ok
// SIG undefined FUN_14906baf4(void)

undefined8 FUN_14906baf4(longlong *param_1)

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



// FUNCTION 14906bb40 FUN_14906bb40 body=40 status=ok
// SIG undefined FUN_14906bb40(void)

void FUN_14906bb40(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_145f7cfa2(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 14906bbb8 FUN_14906bbb8 body=63 status=ok
// SIG undefined FUN_14906bbb8(void)

undefined8 * FUN_14906bbb8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba8acb0;
  FUN_144a80d50(param_1 + 0x26);
  FUN_1447259a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906bbfa FUN_14906bbfa body=88 status=ok
// SIG undefined FUN_14906bbfa(void)

undefined8 * FUN_14906bbfa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14906bcac(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 14906bc52 FUN_14906bc52 body=89 status=ok
// SIG undefined FUN_14906bc52(void)

undefined8 * FUN_14906bc52(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14906bd0e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14906bcac FUN_14906bcac body=98 status=ok
// SIG undefined FUN_14906bcac(void)

void FUN_14906bcac(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14906bd0e FUN_14906bd0e body=115 status=ok
// SIG undefined FUN_14906bd0e(void)

void FUN_14906bd0e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14906bdaa FUN_14906bdaa body=54 status=ok
// SIG undefined FUN_14906bdaa(void)

undefined1 FUN_14906bdaa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14906bea8(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14906be08 FUN_14906be08 body=59 status=ok
// SIG undefined FUN_14906be08(void)

undefined8 FUN_14906be08(longlong *param_1)

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



// FUNCTION 14906bea8 FUN_14906bea8 body=91 status=ok
// SIG undefined FUN_14906bea8(void)

longlong * FUN_14906bea8(longlong *param_1,longlong *param_2)

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



// FUNCTION 14906bf32 FUN_14906bf32 body=54 status=ok
// SIG undefined FUN_14906bf32(void)

undefined1 FUN_14906bf32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14906c046(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14906bf90 FUN_14906bf90 body=59 status=ok
// SIG undefined FUN_14906bf90(void)

undefined8 FUN_14906bf90(longlong *param_1)

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



// FUNCTION 14906bfd6 FUN_14906bfd6 body=34 status=ok
// SIG undefined FUN_14906bfd6(void)

void FUN_14906bfd6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_145c8ff3a(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14906c046 FUN_14906c046 body=110 status=ok
// SIG undefined FUN_14906c046(void)

longlong * FUN_14906c046(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  FUN_1447a122a(param_1 + 3,param_2 + 3);
  FUN_140c99494(param_1 + 5,param_2 + 5);
  FUN_14906c0b4(param_1 + 7,param_2 + 7);
  return param_1;
}



// FUNCTION 14906c0b4 FUN_14906c0b4 body=79 status=ok
// SIG undefined FUN_14906c0b4(void)

undefined8 * FUN_14906c0b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14906c104(param_1,iVar1);
      FUN_14906c166(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14906c104 FUN_14906c104 body=98 status=ok
// SIG undefined FUN_14906c104(void)

void FUN_14906c104(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14906c166 FUN_14906c166 body=52 status=ok
// SIG undefined FUN_14906c166(void)

void FUN_14906c166(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14906c19a(param_1,param_2);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 14906c19a FUN_14906c19a body=88 status=ok
// SIG undefined FUN_14906c19a(void)

longlong * FUN_14906c19a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14906c1f4 FUN_14906c1f4 body=377 status=ok
// SIG undefined FUN_14906c1f4(void)

longlong * FUN_14906c1f4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14906b544(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_149061bc7(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14906b544(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14906c36e(param_2);
        FUN_149061bc7(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14906c36e FUN_14906c36e body=54 status=ok
// SIG undefined FUN_14906c36e(void)

longlong FUN_14906c36e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14906c3a4(param_1,iVar1);
  }
  return (longlong)iVar1 * 0xc + *param_1;
}



// FUNCTION 14906c3a4 FUN_14906c3a4 body=147 status=ok
// SIG undefined FUN_14906c3a4(void)

void FUN_14906c3a4(longlong param_1,int param_2)

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



// FUNCTION 14906c438 FUN_14906c438 body=95 status=ok
// SIG undefined FUN_14906c438(void)

void FUN_14906c438(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14906c498 FUN_14906c498 body=421 status=ok
// SIG undefined FUN_14906c498(void)

longlong * FUN_14906c498(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
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
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14906c438(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x138))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_14906c438(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14906c63e(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x138))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14906c63e FUN_14906c63e body=132 status=ok
// SIG undefined FUN_14906c63e(void)

void FUN_14906c63e(longlong param_1,int param_2)

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



// FUNCTION 14906c6c4 FUN_14906c6c4 body=781 status=ok
// SIG undefined FUN_14906c6c4(void)

undefined8 * FUN_14906c6c4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140c0b9de(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1401f7a02(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_14906bcac(param_1 + 4,iVar1,0);
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
    FUN_14906bcac(param_1 + 6,iVar1,0);
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
    FUN_147888b08(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_140c0b9de(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  pvVar2 = (void *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_14906bd0e(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1 * 0xc);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar5 = *(undefined4 *)(param_2 + 0x11);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar7 = *(undefined4 *)(param_2 + 0x12);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar9 = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar8;
  *(undefined4 *)(param_1 + 0x13) = uVar9;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar4;
  *(undefined4 *)(param_1 + 0x11) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar6;
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0x15);
  pvVar2 = (void *)param_2[0x14];
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x18] = param_2[0x18];
  uVar10 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar10;
  return param_1;
}



// FUNCTION 14906c9d2 FUN_14906c9d2 body=150 status=ok
// SIG undefined FUN_14906c9d2(void)

void FUN_14906c9d2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 200,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 200)) {
      uVar5 = uVar4 / 200 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,200,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14906ca6a FUN_14906ca6a body=48 status=ok
// SIG undefined FUN_14906ca6a(void)

void FUN_14906ca6a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc0,0x10);
  }
  return;
}



// FUNCTION 14906ca9a FUN_14906ca9a body=85 status=ok
// SIG undefined FUN_14906ca9a(void)

void FUN_14906ca9a(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2 = &DAT_14c846400;
    puVar3 = param_1;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(undefined1 *)(param_1 + 0x16) = 0;
    param_1[0x17] = 0xffffffffffffffff;
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 14906caf0 FUN_14906caf0 body=147 status=ok
// SIG undefined FUN_14906caf0(void)

void FUN_14906caf0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14906cb84 FUN_14906cb84 body=62 status=ok
// SIG undefined FUN_14906cb84(void)

void FUN_14906cb84(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14906cbc2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 14906cbc2 FUN_14906cbc2 body=93 status=ok
// SIG undefined FUN_14906cbc2(void)

ulonglong FUN_14906cbc2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 14906cc20 FUN_14906cc20 body=31 status=ok
// SIG undefined FUN_14906cc20(void)

undefined8 FUN_14906cc20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906cc5c FUN_14906cc5c body=93 status=ok
// SIG undefined FUN_14906cc5c(void)

void FUN_14906cc5c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba8b180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14906ccba FUN_14906ccba body=126 status=ok
// SIG undefined FUN_14906ccba(void)

void FUN_14906ccba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba8b180;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014906cd29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14906cd38 FUN_14906cd38 body=21 status=ok
// SIG undefined FUN_14906cd38(void)

undefined8 FUN_14906cd38(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14906cd4e FUN_14906cd4e body=392 status=ok
// SIG undefined FUN_14906cd4e(void)

undefined8 * FUN_14906cd4e(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba8b250;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar1 = 0x40;
  do {
    FUN_144a34e6c((longlong)param_1 + lVar1);
    *(undefined ***)((longlong)param_1 + lVar1) = &PTR_FUN_14ba8b290;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x20) = 0;
    lVar1 = lVar1 + 0x28;
  } while (lVar1 != 0x90);
  FUN_144a34e6c(param_1 + 0x15);
  param_1[0x19] = 0;
  param_1[0x15] = &PTR_FUN_14ba8b2c0;
  FUN_144a34e6c(param_1 + 0x1a);
  param_1[0x1e] = 0;
  param_1[0x1a] = &PTR_FUN_14ba8b2c0;
  FUN_144a34e6c(param_1 + 0x1f);
  param_1[0x1f] = &PTR_FUN_14ba8b290;
  param_1[0x23] = 0;
  FUN_144a34e6c(param_1 + 0x24);
  param_1[0x28] = 0;
  param_1[0x24] = &PTR_FUN_14ba8b2f0;
  FUN_14322417a(param_1 + 0x29);
  param_1[0x29] = &PTR_FUN_14ba8b320;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_144b1dcb8(param_1 + 0x2e,param_2);
  param_1[0x2e] = &PTR_FUN_14ba8acb0;
  FUN_144a34e6c(param_1 + 0x54);
  param_1[0x57] = 0xffffffffffffffff;
  param_1[0x66] = 0x400000000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x2e] = &PTR_FUN_14ba879d0;
  FUN_143268f94(param_1 + 0x7d);
  return param_1;
}



// FUNCTION 14906ced6 FUN_14906ced6 body=38 status=ok
// SIG undefined FUN_14906ced6(void)

undefined8 FUN_14906ced6(undefined8 param_1,int param_2)

{
  FUN_14906d038();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906cefc FUN_14906cefc body=38 status=ok
// SIG undefined FUN_14906cefc(void)

undefined8 FUN_14906cefc(undefined8 param_1,int param_2)

{
  FUN_14906cf8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906cf22 FUN_14906cf22 body=32 status=ok
// SIG undefined FUN_14906cf22(void)

undefined8 FUN_14906cf22(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGeomCacheVertexBuffer");
  return param_2;
}



// FUNCTION 14906cf42 FUN_14906cf42 body=38 status=ok
// SIG undefined FUN_14906cf42(void)

undefined8 FUN_14906cf42(undefined8 param_1,int param_2)

{
  FUN_14906cf8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906cf68 FUN_14906cf68 body=38 status=ok
// SIG undefined FUN_14906cf68(void)

undefined8 FUN_14906cf68(undefined8 param_1,int param_2)

{
  FUN_14906cf8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906cf8e FUN_14906cf8e body=65 status=ok
// SIG undefined FUN_14906cf8e(void)

void FUN_14906cf8e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ba8b290;
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1);
  return;
}



// FUNCTION 14906cfd0 FUN_14906cfd0 body=38 status=ok
// SIG undefined FUN_14906cfd0(void)

undefined8 FUN_14906cfd0(undefined8 param_1,int param_2)

{
  FUN_14906cff6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906cff6 FUN_14906cff6 body=65 status=ok
// SIG undefined FUN_14906cff6(void)

void FUN_14906cff6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ba8b320;
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14003f39a(param_1);
  return;
}



// FUNCTION 14906d038 FUN_14906d038 body=184 status=ok
// SIG undefined FUN_14906d038(void)

void FUN_14906d038(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba8b250;
  FUN_140137a98(param_1 + 0x7d);
  param_1[0x2e] = &PTR_FUN_14ba8acb0;
  FUN_144a80d50(param_1 + 0x54);
  FUN_1447259a8(param_1 + 0x2e);
  FUN_14906cff6(param_1 + 0x29);
  FUN_14906cf8e(param_1 + 0x24);
  FUN_14906cf8e(param_1 + 0x1f);
  FUN_14906cf8e(param_1 + 0x1a);
  FUN_14906cf8e(param_1 + 0x15);
  lVar1 = 0x68;
  do {
    FUN_14906cf8e((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0x18);
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14906d0f0 FUN_14906d0f0 body=95 status=ok
// SIG undefined FUN_14906d0f0(void)

void FUN_14906d0f0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14906d150 FUN_14906d150 body=132 status=ok
// SIG undefined FUN_14906d150(void)

void FUN_14906d150(longlong param_1,int param_2)

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



// FUNCTION 14906d1d6 FUN_14906d1d6 body=53 status=ok
// SIG undefined FUN_14906d1d6(void)

longlong FUN_14906d1d6(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ba8b478;
  FUN_14906d20c(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906d20c FUN_14906d20c body=295 status=ok
// SIG undefined FUN_14906d20c(void)

void FUN_14906d20c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x68) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x60) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x50) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x48) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14906d334 FUN_14906d334 body=52 status=ok
// SIG undefined FUN_14906d334(void)

undefined8 * FUN_14906d334(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba8b478;
  FUN_14906d20c(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14906d368 FUN_14906d368 body=107 status=ok
// SIG undefined FUN_14906d368(void)

void FUN_14906d368(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14906d3d4(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 14906d3d4 FUN_14906d3d4 body=132 status=ok
// SIG undefined FUN_14906d3d4(void)

void FUN_14906d3d4(longlong param_1,int param_2)

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



// FUNCTION 14906d45a FUN_14906d45a body=201 status=ok
// SIG undefined FUN_14906d45a(void)

void FUN_14906d45a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 14906d524 FUN_14906d524 body=367 status=ok
// SIG undefined FUN_14906d524(void)

longlong * FUN_14906d524(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 7,(longlong)*(int *)((longlong)param_2 + 0xc) << 7
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_144920e50(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x20000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1467fd8a5(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x80;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_144920e50(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14906d694(param_2);
        FUN_1467fd8a5(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14906d694 FUN_14906d694 body=64 status=ok
// SIG undefined FUN_14906d694(void)

longlong FUN_14906d694(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140518214(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x80 + *param_1;
  FUN_14796ee70(lVar2,1);
  return lVar2;
}



// FUNCTION 14906d6d4 FUN_14906d6d4 body=48 status=ok
// SIG undefined FUN_14906d6d4(void)

void FUN_14906d6d4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,200,8);
  }
  return;
}



// FUNCTION 14906d704 FUN_14906d704 body=48 status=ok
// SIG undefined FUN_14906d704(void)

void FUN_14906d704(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 14906d734 FUN_14906d734 body=112 status=ok
// SIG undefined FUN_14906d734(void)

void FUN_14906d734(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 14906d7a4 FUN_14906d7a4 body=74 status=ok
// SIG undefined FUN_14906d7a4(void)

void FUN_14906d7a4(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x19) = 0;
    *(undefined1 *)((longlong)param_1 + 0x21) = 0xff;
    *(undefined4 *)((longlong)param_1 + 0x1d) = 0xffffffff;
    *(undefined8 *)(param_1 + 10) = DAT_14c845dbc;
    param_1[0xc] = DAT_14c845dc4;
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 14906d7ee FUN_14906d7ee body=143 status=ok
// SIG undefined FUN_14906d7ee(void)

void FUN_14906d7ee(longlong param_1,int param_2)

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



// FUNCTION 14906d87e FUN_14906d87e body=377 status=ok
// SIG undefined FUN_14906d87e(void)

longlong * FUN_14906d87e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14906d734(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x38e38 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_149068259(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14906d734(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14906d9f8(param_2);
        FUN_149068259(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14906d9f8 FUN_14906d9f8 body=63 status=ok
// SIG undefined FUN_14906d9f8(void)

longlong FUN_14906d9f8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14906da5a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_14906da37(lVar2);
  return lVar2;
}



// FUNCTION 14906da37 FUN_14906da37 body=34 status=ok
// SIG undefined FUN_14906da37(void)

void FUN_14906da37(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}



// FUNCTION 14906da5a FUN_14906da5a body=147 status=ok
// SIG undefined FUN_14906da5a(void)

void FUN_14906da5a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14906daee FUN_14906daee body=377 status=ok
// SIG undefined FUN_14906daee(void)

longlong * FUN_14906daee(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14906dca8(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xccccc < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_149068359(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x14;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14906dca8(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14906dc68(param_2);
        FUN_149068359(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14906dc68 FUN_14906dc68 body=63 status=ok
// SIG undefined FUN_14906dc68(void)

longlong FUN_14906dc68(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14906dd28(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x14 + *param_1;
  FUN_14906dd18(lVar2);
  return lVar2;
}



// FUNCTION 14906dca8 FUN_14906dca8 body=112 status=ok
// SIG undefined FUN_14906dca8(void)

void FUN_14906dca8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x14,4);
  }
  return;
}



// FUNCTION 14906dd18 FUN_14906dd18 body=16 status=ok
// SIG undefined FUN_14906dd18(void)

void FUN_14906dd18(undefined1 *param_1)

{
  *param_1 = 2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 14906dd28 FUN_14906dd28 body=147 status=ok
// SIG undefined FUN_14906dd28(void)

void FUN_14906dd28(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14906ddbc FUN_14906ddbc body=140 status=ok
// SIG undefined FUN_14906ddbc(void)

void FUN_14906ddbc(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cbf7378;
  if (param_1 <= (int)DAT_14cbf7378) {
    if (DAT_14cbf737c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cbf7378) {
        uVar2 = DAT_14cbf7378;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cbf7378 + ((ulonglong)((longlong)(int)DAT_14cbf7378 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cbf737c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cbf7370,param_1,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14906de4a FUN_14906de4a body=103 status=ok
// SIG undefined FUN_14906de4a(void)

undefined8 FUN_14906de4a(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x14)) {
    uVar4 = uVar2 / 0x14 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x14,4);
  }
  return uVar3;
}


