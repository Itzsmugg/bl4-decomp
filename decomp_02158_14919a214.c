// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14919a214 FUN_14919a214 body=134 status=ok
// SIG undefined FUN_14919a214(void)

void FUN_14919a214(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = param_1 + 0x60;
  lVar1 = FUN_145c01f0e(lVar5);
  if (lVar1 != 0) {
    plVar4 = (longlong *)FUN_145c01f0e(lVar5);
    cVar3 = (**(code **)(*plVar4 + 0x478))(plVar4);
    if (cVar3 != '\0') {
      uVar2 = FUN_145c01f0e(lVar5);
      cVar3 = FUN_149199d5c(uVar2);
      if (cVar3 != '\0') {
        return;
      }
    }
    lVar5 = FUN_14919a172(param_1);
    if (lVar5 != 0) {
      FUN_147595a17(lVar5);
      return;
    }
    lVar5 = FUN_14919a29a(param_1);
    if (lVar5 != 0) {
      FUN_14919a33c(lVar5,0);
      return;
    }
  }
  return;
}



// FUNCTION 14919a29a FUN_14919a29a body=161 status=ok
// SIG undefined FUN_14919a29a(void)

longlong FUN_14919a29a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_145c01f0e(param_1 + 0x60);
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = FUN_145c01f0e(param_1 + 0x60);
  plVar2 = *(longlong **)(lVar4 + 0x360);
  plVar3 = *(longlong **)(lVar4 + 0x368);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((plVar2 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar2 + 0x28))(), lVar4 != 0)) {
    lVar5 = FUN_1411e6332();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_14919a314;
  }
  lVar4 = 0;
LAB_14919a314:
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
  return lVar4;
}



// FUNCTION 14919a33c FUN_14919a33c body=610 status=ok
// SIG undefined FUN_14919a33c(void)

void FUN_14919a33c(longlong param_1,float param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined1 *local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_1491a88a2();
  if (plVar3 != (longlong *)0x0) {
    iVar2 = (**(code **)(*DAT_14cc06ef8 + 0xb0))();
    if (iVar2 == 0) {
      plVar4 = (longlong *)FUN_1491a88a2(param_1);
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x2a8))(plVar4);
        if (cVar1 != '\0') {
          if (((int)plVar3[0x48] < 1) && (*(int *)((longlong)plVar3 + 0x23c) < 1)) {
            *(float *)(plVar3 + 9) = param_2;
            *(undefined1 *)((longlong)plVar3 + 0x7c9) = *(undefined1 *)(param_1 + 0x6b9);
            if (*(char *)(param_1 + 0x6b8) == '\x01') {
              FUN_140ad5be4(plVar3[0x5f],1);
            }
            FUN_1491aa0fc(param_1);
            if (*(char *)(param_1 + 0x739) == '\x01') {
              cVar1 = (**(code **)(*plVar3 + 0x478))(plVar3);
              if ((0.0 < param_2) && (cVar1 != '\0')) {
                if (*(int *)((longlong)plVar3 + 0x8b4) < 0) {
                  *(undefined4 *)(plVar3 + 0x116) = 0;
                  FUN_1491c1950(plVar3 + 0x115,0);
                }
                else {
                  *(undefined4 *)(plVar3 + 0x116) = 0;
                }
              }
              local_58 = &local_31;
              local_60 = FUN_140036a08;
              lVar5 = FUN_144a773aa(&local_60,&DAT_14c7585d0);
              local_60 = (code *)(lVar5 + 0x10);
              local_58 = *(undefined1 **)(lVar5 + 0x10);
              local_50 = *(longlong *)(lVar5 + 0x20);
              local_48 = '\0';
              local_40 = *(undefined8 *)(lVar5 + 0x28);
              *(code ***)(lVar5 + 0x28) = &local_60;
              *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
              puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
              puVar6[3] = 0;
              puVar6[4] = 0;
              puVar6[5] = 0;
              puVar6[6] = 0;
              puVar6[7] = 0;
              lVar5 = *(longlong *)(param_1 + 0x6c8);
              *(undefined8 **)(param_1 + 0x6c8) = puVar6;
              if (lVar5 != 0) {
                FUN_1447166b4(lVar5);
                FUN_1400020a8(lVar5);
                puVar6 = *(undefined8 **)(param_1 + 0x6c8);
              }
              plVar3[0xb3] = (longlong)puVar6;
              (**(code **)(*plVar3 + 0x2c0))(plVar3);
              plVar3[0xb3] = 0;
              if (local_48 == '\0') {
                local_48 = '\x01';
                *(int *)(local_60 + 0x20) = *(int *)(local_60 + 0x20) + -1;
                if (local_50 != *(longlong *)(local_60 + 0x10)) {
                  FUN_14004673c();
                }
                *(undefined1 **)local_60 = local_58;
                *(undefined8 *)(local_60 + 0x18) = local_40;
              }
            }
          }
          else {
            FUN_140056680(&local_60,L"Update is being called recursively.");
            if (local_60 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          if ((*(char *)(param_1 + 0x6bd) == '\x01') && (0 < (int)plVar3[0x30])) {
            FUN_1448215fa(param_1);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919a5a0 FUN_14919a5a0 body=326 status=ok
// SIG undefined FUN_14919a5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14919a5a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98 [104];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = FUN_14919a6e8();
  if (lVar1 != 0) {
    lVar2 = FUN_14919a172(param_1);
    if (lVar2 == 0) {
      lVar2 = FUN_14919a29a(param_1);
      if (lVar2 == 0) goto LAB_14919a5d0;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc06a08) {
      FUN_144b3d300(&DAT_14cc06a08);
      if (DAT_14cc06a08 == -1) {
        DAT_14cc069f0 = 2;
        _DAT_14cc069f4 = 0x7f7fffff000001ff;
        _DAT_14cc069fc = 0;
        DAT_14cc06a04 = 0;
        _Init_thread_footer(&DAT_14cc06a08);
      }
    }
    uVar3 = FUN_145c01f0e(param_1 + 0x60);
    FUN_1449437a2(param_2,local_98,lVar2 + 0x240);
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = &DAT_14cc069f0;
    FUN_14919a73e(uVar3,lVar1 + 0x14,local_98,0);
  }
LAB_14919a5d0:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919a6e8 FUN_14919a6e8 body=85 status=ok
// SIG undefined FUN_14919a6e8(void)

undefined8 FUN_14919a6e8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145c01f0e(param_1 + 0x60);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    plVar2 = (longlong *)FUN_145c01f0e(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00014919a73a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x3b0))(plVar2,param_1 + 0x88,*(code **)(*plVar2 + 0x3b0));
    return uVar3;
  }
  return 0;
}



// FUNCTION 14919a73e FUN_14919a73e body=545 status=ok
// SIG undefined FUN_14919a73e(void)

undefined8
FUN_14919a73e(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1bc [132];
  undefined8 local_138 [12];
  undefined8 local_d8 [18];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  puVar3 = local_138;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1);
  uVar4 = 3;
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x3c8))(param_1,local_d8,param_2,local_138);
    puVar3 = local_d8;
    puVar5 = local_138;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar4 = 2;
  }
  lVar2 = (**(code **)(*param_1 + 0x3b0))(param_1,param_2);
  cVar1 = (**(code **)(*param_1 + 0x478))(param_1);
  if (((lVar2 == 0) || (cVar1 == '\0')) || (*(char *)(lVar2 + 0x210) != '\x02')) {
    local_1e8 = CONCAT44(local_1e8._4_4_,uVar4);
    (**(code **)(*param_1 + 0x3e0))(param_1,local_1bc,param_2,local_138);
    if ((longlong)(int)param_1[0x103] != 0) {
      lVar6 = 0;
      do {
        if ((*(int *)(param_1[0x102] + 8 + lVar6) != 0) &&
           (*(longlong *)(param_1[0x102] + lVar6) != 0)) {
          if (lVar2 != 0) {
            FUN_1491cbc3c(param_1 + 0x102,param_1,lVar2,local_1bc);
          }
          break;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)(int)param_1[0x103] * 0x10 != lVar6);
    }
    memcpy(local_d8,local_1bc,0x84);
    local_1d0 = param_8;
    local_1d8 = param_7;
    local_1e0 = param_6;
    local_1e8 = param_5;
    (**(code **)(*param_1 + 0x3d8))(param_1,param_2,local_d8,param_4);
  }
  else {
    local_1d0 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = CONCAT71(local_1e8._1_7_,1);
    FUN_140122d4e(param_1[0x5f],lVar2,local_138,3);
    FUN_1446f57c6(&DAT_14cc07488,local_d8);
    (**(code **)(*param_1 + 0x2e0))(param_1,local_d8);
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919a960 FUN_14919a960 body=167 status=ok
// SIG undefined FUN_14919a960(void)

void FUN_14919a960(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_14919a6e8();
  if (lVar3 != 0) {
    lVar4 = FUN_145c01f0e(param_1 + 0x60);
    uVar1 = *(undefined8 *)(lVar4 + 0x2f8);
    uVar2 = FUN_140813180(uVar1,lVar3 + 0x10);
    puVar5 = local_88;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    local_98 = 0;
    local_a0 = 0;
    local_a8 = 1;
    FUN_140122cc6(uVar1,uVar2,local_88,0);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919aa08 FUN_14919aa08 body=2010 status=ok
// SIG undefined FUN_14919aa08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14919aa08(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  undefined8 uVar27;
  double *pdVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_2f8 [32];
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
  undefined1 local_238 [16];
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
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
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
  double dVar2;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar23 = FUN_14919a6e8();
  if (lVar23 == 0) {
LAB_14919aa9c:
    pdVar28 = (double *)&DAT_14c846480;
    for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
      *param_2 = *pdVar28;
      pdVar28 = pdVar28 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_2f8);
  }
  lVar24 = FUN_14919a172(param_1);
  if (lVar24 == 0) {
    lVar24 = FUN_14919a29a(param_1);
    if (lVar24 == 0) goto LAB_14919aa9c;
  }
  lVar25 = FUN_145c01f0e(param_1 + 0x60);
  uVar27 = *(undefined8 *)(lVar25 + 0x2f8);
  uVar21 = FUN_140813180(uVar27,lVar23 + 0x10);
  uVar21 = FUN_14486750c(uVar27,&local_2d8,uVar21,0);
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  auVar43 = _DAT_149934d80;
  auVar32 = *(undefined1 (*) [16])(lVar24 + 0x280);
  dVar5 = auVar32._0_8_;
  dVar9 = auVar32._8_8_;
  auVar4 = *(undefined1 (*) [16])(lVar24 + 0x290);
  dVar6 = auVar4._0_8_;
  dVar7 = local_298._0_8_;
  dVar10 = local_298._8_8_;
  dVar8 = local_288._0_8_;
  auVar32 = minpd(local_298,auVar32);
  auVar36 = minpd(local_288,auVar4);
  auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  iVar22 = movmskpd(uVar21,auVar33);
  auVar32._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
  auVar32._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
  uVar26 = movmskpd((int)uVar27,auVar32);
  if ((uVar26 & 0x3fffffff) == 0 && iVar22 == 0) {
    dVar17 = *(double *)(lVar24 + 0x240);
    dVar18 = *(double *)(lVar24 + 0x248);
    dVar19 = *(double *)(lVar24 + 0x250);
    dVar20 = *(double *)(lVar24 + 600);
    dVar31 = *(double *)(lVar24 + 600);
    dVar37 = *(double *)(lVar24 + 600);
    dVar40 = *(double *)(lVar24 + 0x240);
    dVar42 = *(double *)(lVar24 + 0x240);
    dVar1 = *(double *)(lVar24 + 0x248);
    dVar2 = *(double *)(lVar24 + 0x248);
    dVar3 = *(double *)(lVar24 + 0x250);
    dVar35 = *(double *)(lVar24 + 0x250);
    local_2b8 = local_2b8 * dVar5;
    dStack_2b0 = dStack_2b0 * dVar9;
    local_2a8 = local_2a8 * dVar6;
    dStack_2a0 = dStack_2a0 * auVar4._8_8_;
    dVar11 = dStack_2b0 * dVar17 - dVar18 * local_2b8;
    dVar12 = local_2a8 * dVar18 - dVar19 * dStack_2b0;
    dVar15 = local_2b8 * dVar19 - dVar17 * local_2a8;
    dVar16 = dStack_2a0 * dVar20 - dVar20 * dStack_2a0;
    dVar12 = dVar12 + dVar12;
    dVar15 = dVar15 + dVar15;
    dVar11 = dVar11 + dVar11;
    dVar16 = dVar16 + dVar16;
    dVar38 = *(double *)(lVar24 + 0x260);
    dVar13 = (dVar12 * dVar19 - dVar11 * dVar17) + dVar37 * dVar15 + dStack_2b0 +
             *(double *)(lVar24 + 0x268);
    dVar39 = *(double *)(lVar24 + 0x270);
    dVar41 = *(double *)(lVar24 + 0x278);
    *param_2 = dStack_2d0 * dVar3 * -1.0 +
               local_2c8 * dVar1 + dStack_2c0 * dVar40 * 1.0 + local_2d8 * dVar31;
    param_2[1] = local_2d8 * dVar35 * 1.0 +
                 dStack_2c0 * dVar2 + local_2c8 * dVar42 * -1.0 + dStack_2d0 * dVar37;
    param_2[2] = dStack_2c0 * dVar3 * 1.0 +
                 ((dVar40 * dStack_2d0 * 1.0 + local_2c8 * dVar31) - local_2d8 * dVar1);
    param_2[3] = local_2c8 * dVar35 * -1.0 +
                 ((dVar42 * local_2d8 * -1.0 + dStack_2c0 * dVar37) - dStack_2d0 * dVar2);
    auVar43._8_4_ = SUB84(dVar13,0);
    auVar43._0_8_ = (dVar11 * dVar18 - dVar19 * dVar15) + dVar31 * dVar12 + local_2b8 + dVar38;
    auVar43._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 4) = auVar43;
    param_2[6] = (dVar15 * dVar17 - dVar18 * dVar12) + dVar31 * dVar11 + local_2a8 + dVar39;
    param_2[7] = (dVar16 * dVar20 - dVar16 * dVar20) + dVar37 * dVar16 + dStack_2a0 + dVar41;
  }
  else {
    dVar1 = *(double *)(lVar24 + 0x240);
    dVar2 = *(double *)(lVar24 + 0x248);
    dVar3 = *(double *)(lVar24 + 0x250);
    dVar35 = dVar2 + dVar2;
    dVar38 = dVar3 + dVar3;
    dVar37 = dVar1 * (dVar1 + dVar1);
    local_188 = (1.0 - (dVar37 + dVar2 * dVar35)) * dVar6;
    dVar42 = *(double *)(lVar24 + 0x240) * dVar38;
    dVar31 = *(double *)(lVar24 + 600);
    dVar39 = dVar38 * dVar31;
    dVar41 = (dVar1 + dVar1) * *(double *)(lVar24 + 600);
    dVar31 = dVar35 * dVar31;
    local_198 = (dVar31 + dVar42) * dVar6;
    dVar37 = (DAT_149934d80._8_8_ - (dVar3 * dVar38 + dVar37)) * dVar9;
    dVar40 = (dVar35 * dVar1 + dVar39) * dVar5;
    local_1a8 = (dVar38 * dVar2 + dVar41) * dVar9;
    dStack_190 = (dVar38 * dVar2 - dVar41) * dVar6;
    local_1c8 = (dVar42 - dVar31) * dVar5;
    local_1d8._8_4_ = SUB84(dVar40,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar3 * dVar38 + dVar2 * dVar35)) * dVar5;
    local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar37,0);
    local_1b8._0_8_ = (dVar35 * dVar1 - dVar39) * dVar9;
    local_1b8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = *(undefined8 *)(lVar24 + 0x260);
    uStack_170 = *(undefined8 *)(lVar24 + 0x268);
    local_168 = *(undefined8 *)(lVar24 + 0x270);
    uStack_160 = 0x3ff0000000000000;
    dVar37 = dStack_2d0 + dStack_2d0;
    dVar40 = local_2c8 + local_2c8;
    dVar31 = local_2d8 * (local_2d8 + local_2d8);
    local_208 = (1.0 - (dVar31 + dStack_2d0 * dVar37)) * dVar8;
    dVar42 = (local_2d8 + local_2d8) * dStack_2c0;
    local_218 = (dVar37 * dStack_2c0 + local_2d8 * dVar40) * dVar8;
    dStack_210 = (dVar40 * dStack_2d0 - dVar42) * dVar8;
    local_258 = ((double)DAT_149934d80 - (local_2c8 * dVar40 + dStack_2d0 * dVar37)) * dVar7;
    dVar31 = (DAT_149934d80._8_8_ - (local_2c8 * dVar40 + dVar31)) * dVar10;
    dStack_250 = (dVar37 * local_2d8 + dVar40 * dStack_2c0) * dVar7;
    local_228 = (dVar40 * dStack_2d0 + dVar42) * dVar10;
    local_248 = (local_2d8 * dVar40 - dVar37 * dStack_2c0) * dVar7;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar31,0);
    local_238._0_8_ = (dVar37 * local_2d8 - dVar40 * dStack_2c0) * dVar10;
    local_238._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = local_2b8;
    dStack_1f0 = dStack_2b0;
    local_1e8 = local_2a8;
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar36._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
    auVar36._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
    auVar32 = blendvpd(_DAT_149936790,auVar43,auVar36);
    uVar29 = -(ulonglong)(0.0 <= dVar6 * dVar8);
    dVar31 = (double)(~uVar29 & 0xbff0000000000000 | uVar29 & 0x3ff0000000000000);
    dVar37 = auVar32._0_8_;
    local_148 = local_148 * dVar37;
    local_150 = local_150 * dVar37;
    local_158 = local_158 * dVar37;
    dVar37 = auVar32._8_8_;
    local_128 = local_128 * dVar37;
    local_130 = local_130 * dVar37;
    local_138 = dVar37 * local_138;
    local_108 = local_108 * dVar31;
    local_110 = local_110 * dVar31;
    local_118 = dVar31 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar31 = local_268 * local_268 + local_278 * local_278;
    dVar37 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar34._0_8_ = dVar31 + dVar37;
    auVar34._8_8_ = dVar31 + dVar37;
    auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
    auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
    auVar32 = sqrtpd(auVar34,auVar34);
    auVar43 = divpd(auVar43,auVar32);
    auVar44._0_8_ = auVar43._0_8_ * local_268;
    auVar44._8_8_ = auVar43._8_8_ * dStack_260;
    auVar32 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar30);
    *param_2 = (double)((ulonglong)(local_278 * auVar43._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
    param_2[1] = (double)((ulonglong)(dStack_270 * auVar43._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
    *(undefined1 (*) [16])(param_2 + 2) = auVar32;
    param_2[4] = local_f8;
    param_2[5] = dStack_f0;
    param_2[6] = local_e8;
    param_2[7] = 0.0;
  }
  dVar31 = auVar4._8_8_ * local_288._8_8_;
  auVar14._8_4_ = SUB84(dVar9 * dVar10,0);
  auVar14._0_8_ = dVar5 * dVar7;
  auVar14._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar14;
  auVar4._8_4_ = SUB84(dVar31,0);
  auVar4._0_8_ = dVar6 * dVar8;
  auVar4._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar4;
  if ((local_d0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14919b1e4 FUN_14919b1e4 body=175 status=ok
// SIG undefined FUN_14919b1e4(void)

undefined8 * FUN_14919b1e4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar4 = FUN_14919a6e8();
  if (lVar4 == 0) {
    puVar7 = &DAT_14c846480;
    puVar8 = param_2;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  else {
    lVar6 = param_1 + 0x60;
    plVar5 = (longlong *)FUN_145c01f0e(lVar6);
    cVar2 = (**(code **)(*plVar5 + 0x478))(plVar5);
    if (cVar2 == '\0') {
      lVar6 = FUN_145c01f0e(lVar6);
      uVar1 = *(undefined8 *)(lVar6 + 0x2f8);
      uVar3 = FUN_140813180(uVar1,lVar4 + 0x10);
      FUN_144afced8(uVar1,param_2,uVar3,0);
    }
    else {
      plVar5 = (longlong *)FUN_145c01f0e(lVar6);
      (**(code **)(*plVar5 + 0x3f0))(plVar5,param_2,param_1 + 0x88);
    }
  }
  return param_2;
}



// FUNCTION 14919b294 FUN_14919b294 body=37 status=ok
// SIG undefined FUN_14919b294(void)

void FUN_14919b294(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14919a172();
  if (lVar1 != 0) {
    return;
  }
  FUN_14919a29a(param_1);
  return;
}



// FUNCTION 14919b2ba FUN_14919b2ba body=48 status=ok
// SIG undefined FUN_14919b2ba(void)

longlong FUN_14919b2ba(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14919a172();
  if (lVar1 == 0) {
    lVar1 = FUN_14919a29a(param_1);
  }
  lVar2 = lVar1 + 0x40;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14919b2ea FUN_14919b2ea body=154 status=ok
// SIG undefined FUN_14919b2ea(void)

undefined8 FUN_14919b2ea(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar3 = FUN_145c01f0e(param_1 + 0x60);
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    uVar4 = FUN_145c01f0e(param_1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    uVar1 = (uint)((ulonglong)uVar5 >> 0x10);
    uVar6 = (uint)uVar5 & 0xffff;
    uVar2 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar5 = FUN_144a78877(uVar2 >> 0x10 ^ uVar2,
                          ((uint)uVar5 << 0x10 | uVar6) + (int)((ulonglong)uVar5 >> 0x20) +
                          (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4));
    return uVar5;
  }
  return 0;
}



// FUNCTION 14919b384 FUN_14919b384 body=60 status=ok
// SIG undefined FUN_14919b384(void)

undefined8 * FUN_14919b384(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14919a172();
  if (lVar1 == 0) {
    lVar1 = FUN_14919a29a(param_1);
  }
  *param_2 = 0;
  FUN_14485c47a(param_2,lVar1);
  return param_2;
}



// FUNCTION 14919b3c0 FUN_14919b3c0 body=827 status=ok
// SIG undefined FUN_14919b3c0(void)

ulonglong FUN_14919b3c0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong unaff_RBP;
  uint uVar12;
  longlong *plVar13;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar5 = (**(code **)(*param_2 + 0x318))(param_2);
  if (uVar5 != 0) {
    uVar7 = FUN_14919a172(param_1);
    if ((uVar7 != 0) || (uVar7 = FUN_14919a29a(param_1), uVar7 != 0)) {
      uVar11 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
      for (uVar11 = uVar11 >> 0x10 ^ uVar11; uVar11 != uVar5; uVar11 = uVar11 >> 0x10 ^ uVar11) {
        uVar7 = *(ulonglong *)(uVar7 + 0x120);
        if (uVar7 == 0) goto LAB_14919b4ab;
        uVar11 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      }
      goto LAB_14919b3fa;
    }
LAB_14919b4ab:
    lVar8 = FUN_14919a6e8(param_1);
    if (lVar8 != 0) {
      param_1 = param_1 + 0x60;
      lVar9 = FUN_145c01f0e(param_1);
      uVar1 = *(undefined8 *)(lVar9 + 0x2f8);
      FUN_14449d5e6(uVar1,&local_60,lVar8,1);
      plVar13 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar13 = &local_60;
      }
      if ((longlong)local_50 != 0) {
        lVar9 = (longlong)local_50 << 3;
        do {
          lVar2 = *plVar13;
          uVar7 = FUN_145c01f0e(param_1);
          uVar3 = *(undefined8 *)(lVar2 + 0x14);
          uVar11 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar12 = (uint)uVar3 & 0xffff;
          uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          uVar11 = FUN_144a78877(uVar6 >> 0x10 ^ uVar6,
                                 ((uint)uVar3 << 0x10 | uVar12) + (int)((ulonglong)uVar3 >> 0x20) +
                                 (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar12 >> 4));
          if (uVar11 == uVar5) {
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
            if (plVar13 != (longlong *)0x0) goto LAB_14919b587;
            break;
          }
          plVar13 = plVar13 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      FUN_149192f24(uVar1,&local_c8,0);
      if ((longlong)local_c0 != 0) {
        local_d0 = local_c8;
        uVar7 = 0;
        lVar9 = 0;
        do {
          lVar2 = *(longlong *)(local_d0 + uVar7);
          uVar10 = FUN_145c01f0e(param_1);
          uVar3 = *(undefined8 *)(lVar2 + 0x14);
          uVar11 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar12 = (uint)uVar3 & 0xffff;
          uVar6 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          uVar11 = FUN_144a78877(uVar6 >> 0x10 ^ uVar6,
                                 ((uint)uVar3 << 0x10 | uVar12) + (int)((ulonglong)uVar3 >> 0x20) +
                                 (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar12 >> 4));
          if (uVar11 == uVar5) {
            if ((int)(~uVar7 >> 3) != 0) {
              local_98 = 0;
              uStack_80 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              uStack_90 = 0x8000000000;
              local_88 = 0xffffffff;
              cVar4 = FUN_1491d72f0(uVar1,lVar8,*(undefined8 *)(local_c8 + (lVar9 >> 0x20) * 8),
                                    &local_b8);
              uStack_70 = uStack_70 & 0xffffffff00000000;
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              FUN_14083ed90(&local_b8);
              unaff_RBP = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
              if (cVar4 != '\0') goto LAB_14919b663;
            }
            break;
          }
          lVar9 = lVar9 + 0x100000000;
          uVar7 = uVar7 + 8;
        } while ((longlong)local_c0 * 8 != uVar7);
      }
      unaff_RBP = 0;
LAB_14919b663:
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
LAB_14919b587:
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14919b3fa;
    }
  }
  unaff_RBP = 0;
LAB_14919b3fa:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14919b6fc FUN_14919b6fc body=176 status=ok
// SIG undefined FUN_14919b6fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14919b6fc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x310))();
  if (lVar2 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc06a20) {
      FUN_144b3d300(&DAT_14cc06a20);
      if (DAT_14cc06a20 == -1) {
        _DAT_14cc06a10 = 0;
        uRam000000014cc06a18 = 0;
        _Init_thread_footer(&DAT_14cc06a20);
      }
    }
    uVar1 = uRam000000014cc06a18;
    *param_2 = _DAT_14cc06a10;
    param_2[1] = uVar1;
  }
  else {
    lVar3 = FUN_14919a172(param_1);
    if (lVar3 == 0) {
      lVar3 = FUN_14919a29a(param_1);
    }
    *param_2 = 0;
    FUN_14485c47a(param_2,lVar3);
    param_2[1] = lVar2;
  }
  return param_2;
}



// FUNCTION 14919b7ac FUN_14919b7ac body=29 status=ok
// SIG undefined FUN_14919b7ac(void)

void FUN_14919b7ac(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    FUN_1401242c6();
    return;
  }
  return;
}



// FUNCTION 14919b7ca FUN_14919b7ca body=244 status=ok
// SIG undefined FUN_14919b7ca(void)

undefined8 FUN_14919b7ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14bb77280;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14bb76110;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14919b8c0;
  FUN_1459649ec(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919b8c0 FUN_14919b8c0 body=159 status=ok
// SIG undefined FUN_14919b8c0(void)

void FUN_14919b8c0(longlong param_1,char param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_145c01f0e(param_1 + 0x60);
  if (lVar1 != 0) {
    lVar1 = FUN_145c01f0e(param_1 + 0x60);
    if (((param_2 == '\x02') && (lVar1 = *(longlong *)(lVar1 + 0x2f8), lVar1 != 0)) &&
       (lVar1 == param_3)) {
      FUN_1491df068(lVar1,&local_38,param_4 + 0x10);
      if (local_38 == *(longlong *)(param_1 + 0x88)) {
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_4 + 0x14);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919b960 FUN_14919b960 body=226 status=ok
// SIG undefined FUN_14919b960(void)

undefined8 FUN_14919b960(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14bb761f0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14bb76180;
  local_30[3] = &DAT_14cc06a3c;
  local_30[4] = FUN_14919ba44;
  FUN_1491c7ce4(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919ba44 FUN_14919ba44 body=78 status=ok
// SIG undefined FUN_14919ba44(void)

void FUN_14919ba44(char *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*param_1 == '\x01') && (*(char *)(param_4 + 0x14) == '\x01')) &&
     (param_3 != 0 && param_2 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*param_2 + 0x180))(param_2);
    if (lVar1 != 0) {
      uVar2 = FUN_14759215a(lVar1);
      FUN_1475949f4(uVar2);
    }
    *param_1 = '\0';
  }
  return;
}



// FUNCTION 14919ba92 FUN_14919ba92 body=244 status=ok
// SIG undefined FUN_14919ba92(void)

undefined8 FUN_14919ba92(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14bb761f0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14bb76260;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14919bb88;
  FUN_1491c7ce4(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919bb88 FUN_14919bb88 body=577 status=ok
// SIG undefined FUN_14919bb88(void)

void FUN_14919bb88(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_3 != 0 && param_2 != 0) && (*(char *)(param_1 + 0x28) == '\0')) {
    lVar1 = param_1 + 0x60;
    lVar4 = FUN_145c01f0e(lVar1);
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
      plVar5 = (longlong *)FUN_1475957c2(param_1);
      if ((longlong)(int)plVar5[1] != 0) {
        lVar4 = 0;
        do {
          if ((*(int *)(*plVar5 + 8 + lVar4) != 0) && (*(longlong *)(*plVar5 + lVar4) != 0)) {
            local_90 = 0;
            FUN_1400bbfc4(&local_68,param_2);
            local_88 = local_68;
            uStack_84 = uStack_64;
            uStack_80 = uStack_60;
            uStack_7c = uStack_5c;
            local_78 = local_58;
            uStack_74 = uStack_54;
            uStack_70 = uStack_50;
            uStack_6c = uStack_4c;
            cVar2 = (*(code *)PTR_FUN_14c758760)();
            if (cVar2 == '\0') {
LAB_14919bcc3:
              FUN_14485c47a(&local_90,param_2);
            }
            else {
              uVar3 = *(uint *)(param_2 + 0xc);
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar4 = 0;
              }
              if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) goto LAB_14919bcc3;
              local_90 = 0;
            }
            cVar2 = FUN_144a7afa6(param_1 + 0x68,&local_88);
            if (CONCAT44(uStack_74,local_78) != 0) {
              FUN_1400020a8();
            }
            if (cVar2 == '\0') break;
            cVar2 = *(char *)(param_4 + 0x14);
            if (*(longlong *)(param_3 + 0x14) == *(longlong *)(param_1 + 0x88)) {
              if (cVar2 != '\0') {
                DAT_14cc06a3c = 1;
              }
              uVar6 = FUN_145c01f0e(lVar1);
              local_90 = FUN_145c01f0e(lVar1);
              FUN_1491c8702(&local_68);
              uVar3 = 0;
            }
            else {
              if (cVar2 == '\0') break;
              plVar5 = (longlong *)FUN_145c01f0e(lVar1);
              lVar4 = (**(code **)(*plVar5 + 0x3b0))(plVar5,(longlong *)(param_1 + 0x88));
              if (lVar4 == 0) break;
              if (*(char *)(param_4 + 0x14) == '\x01') {
                DAT_14cc06a3c = 1;
              }
              uVar6 = FUN_145c01f0e(lVar1);
              local_90 = FUN_145c01f0e(lVar1);
              FUN_1491c8702(&local_68);
              plVar5 = (longlong *)FUN_145c01f0e(lVar1);
              uVar3 = (**(code **)(*plVar5 + 0x478))(plVar5);
              uVar3 = uVar3 ^ 1;
              cVar2 = '\x03';
            }
            FUN_1475957c8(param_1,cVar2,uVar3);
            FUN_1491c8596(uVar6);
            break;
          }
          lVar4 = lVar4 + 0x10;
        } while ((longlong)(int)plVar5[1] * 0x10 != lVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14919bdca FUN_14919bdca body=244 status=ok
// SIG undefined FUN_14919bdca(void)

undefined8 FUN_14919bdca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14bb76340;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14bb762d0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14919bec0;
  FUN_1491c821c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919bec0 FUN_14919bec0 body=468 status=ok
// SIG undefined FUN_14919bec0(void)

void FUN_14919bec0(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) goto LAB_14919bee1;
  lVar7 = FUN_145c01f0e(param_1 + 0x60);
  if (lVar7 == 0) goto LAB_14919bee1;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  FUN_1400bbfc4(local_58,param_2);
  if (uStack_70 != 0) {
    FUN_1400020a8();
  }
  uStack_70 = CONCAT44(uStack_44,local_48);
  cVar6 = (*(code *)PTR_FUN_14c758760)();
  if (cVar6 == '\0') {
LAB_14919bfb0:
    FUN_14485c47a(&local_88,param_2);
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) goto LAB_14919bfb0;
    local_88 = 0;
  }
  cVar6 = FUN_144a7afa6(param_1 + 0x68,&uStack_80);
  if (uStack_70 != 0) {
    FUN_1400020a8();
  }
  if (cVar6 != '\0') {
    lVar7 = FUN_145c01f0e(param_1 + 0x60);
    plVar3 = *(longlong **)(lVar7 + 0x360);
    plVar4 = *(longlong **)(lVar7 + 0x368);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (plVar3 != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3);
      lVar7 = plVar8[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar5 = *plVar8;
        lVar10 = 0;
        do {
          if ((*(int *)(lVar5 + 8 + lVar10) != 0) &&
             (plVar8 = *(longlong **)(lVar5 + lVar10), plVar8 != (longlong *)0x0)) {
            cVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,param_1);
            if (cVar6 != '\0') goto LAB_14919c062;
          }
          lVar10 = lVar10 + 0x10;
        } while ((longlong)(int)lVar7 * 0x10 != lVar10);
      }
      uVar9 = (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_14919c096(uVar9,&local_88,param_1);
    }
LAB_14919c062:
    if (plVar4 != (longlong *)0x0) {
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
LAB_14919bee1:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919c096 FUN_14919c096 body=244 status=ok
// SIG undefined FUN_14919c096(void)

undefined8 FUN_14919c096(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14a541440;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14bb763b0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14919c18c;
  FUN_148aff866(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919c18c FUN_14919c18c body=255 status=ok
// SIG undefined FUN_14919c18c(void)

void FUN_14919c18c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = FUN_145c01f0e(param_1 + 0xc);
  if ((param_2 != (longlong *)0x0) && (lVar3 != 0)) {
    lVar3 = FUN_145c01f0e(param_1 + 0xc);
    plVar4 = *(longlong **)(lVar3 + 0x360);
    plVar2 = *(longlong **)(lVar3 + 0x368);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x28))();
    }
    if ((plVar4 == param_2) &&
       (((lVar3 = (**(code **)(*param_1 + 0x180))(param_1), lVar3 != 0 ||
         (((lVar5 = FUN_14919a172(param_1), lVar5 != 0 ||
           (lVar5 = FUN_14919a29a(param_1), lVar5 != 0)) &&
          ((lVar3 = *(longlong *)(lVar5 + 0xb0), lVar3 != 0 ||
           (lVar3 = FUN_1448abda6(lVar5), lVar3 != 0)))))) &&
        (lVar5 = (**(code **)(*param_2 + 0x180))(param_2), lVar5 == lVar3)))) {
      FUN_1475957c8(param_1,2,0);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar2 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014919c212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x10))(plVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14919c28c FUN_14919c28c body=57 status=ok
// SIG undefined FUN_14919c28c(void)

undefined8 FUN_14919c28c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145c01f0e(param_1 + 0x60);
  FUN_1491fb002(param_2,uVar1,param_1 + 0x88,param_3);
  return param_2;
}



// FUNCTION 14919c2c6 FUN_14919c2c6 body=116 status=ok
// SIG undefined FUN_14919c2c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14919c2c6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc06a38) {
    FUN_144b3d300(&DAT_14cc06a38);
    if (DAT_14cc06a38 == -1) {
      _DAT_14cc06a28 = 0;
      _DAT_14cc06a30 = 0;
      _Init_thread_footer(&DAT_14cc06a38);
    }
  }
  uVar1 = CONCAT44(uRam000000014cc06a34,_DAT_14cc06a30);
  *param_2 = _DAT_14cc06a28;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14919c33a FUN_14919c33a body=450 status=ok
// SIG undefined FUN_14919c33a(void)

undefined8
FUN_14919c33a(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4,int *param_5,
             undefined8 param_6,char param_7)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78 [4];
  uint local_74;
  float local_70;
  undefined8 local_6c;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_145c01f0e(param_1 + 0x60);
  if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x88) == 0)) {
    uVar7 = 0;
  }
  else {
    iVar1 = (int)param_2[1];
    uVar7 = 0;
    if ((iVar1 != 0) && (iVar1 == (int)param_3[1])) {
      local_70 = 3.4028235e+38;
      local_6c = 0;
      local_64 = 0;
      local_78[0] = 1;
      local_74 = *param_4;
      uVar6 = (ulonglong)local_74;
      if (0 < iVar1) {
        lVar4 = 0;
        lVar8 = 0;
        do {
          local_70 = (float)(((double)((longlong)*(int *)(*param_2 + lVar8 * 4) *
                                      (longlong)param_5[1]) +
                             (double)((ulonglong)(double)param_5[1] & 0x8000000000000000)) /
                            (double)*param_5);
          lVar2 = *param_3;
          plVar5 = (longlong *)FUN_145c01f0e(param_1 + 0x60);
          if (param_7 == '\0') {
            local_80 = 0;
            local_90 = 0;
            local_98 = local_78;
            local_88 = 1;
            FUN_14919a73e(plVar5,param_1 + 0x88,lVar2 + lVar4,1);
          }
          else {
            local_98 = local_78;
            local_88 = 1;
            local_90 = 0;
            (**(code **)(*plVar5 + 1000))(plVar5,param_1 + 0x88,lVar2 + lVar4,1);
          }
          cVar3 = (**(code **)(*plVar5 + 0x478))(plVar5);
          if (cVar3 != '\0') {
            (**(code **)(*plVar5 + 0x2c0))(plVar5);
          }
          lVar8 = lVar8 + 1;
          uVar6 = (ulonglong)(int)param_2[1];
          lVar4 = lVar4 + 0x60;
        } while (lVar8 < (longlong)uVar6);
      }
      uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14919c4fe FUN_14919c4fe body=874 status=ok
// SIG undefined FUN_14919c4fe(void)

void FUN_14919c4fe(longlong param_1,undefined4 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_4 == 0) goto LAB_14919c553;
  lVar8 = FUN_1401242c6();
  if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
      != lVar8 + 0x30)) goto LAB_14919c553;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  FUN_1400bbfc4(&local_68,param_4);
  uStack_90 = CONCAT44(uStack_64,local_68);
  local_88 = CONCAT44(uStack_5c,iStack_60);
  if (uStack_80 != 0) {
    FUN_1400020a8();
  }
  uStack_80 = CONCAT44(uStack_54,local_58);
  cVar7 = (*(code *)PTR_FUN_14c758760)();
  if (cVar7 == '\0') {
LAB_14919c63d:
    FUN_14485c47a(&local_98,param_4);
  }
  else {
    uVar3 = *(uint *)(param_4 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) goto LAB_14919c63d;
    local_98 = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 0x68);
  cVar7 = FUN_144a7afa6(puVar2,&uStack_90);
  if (uStack_80 != 0) {
    FUN_1400020a8();
  }
  if (cVar7 != '\0') goto LAB_14919c553;
  lVar8 = param_1 + 0x60;
  lVar9 = FUN_145c01f0e(lVar8);
  if ((lVar9 != 0) &&
     (lVar9 = FUN_145c01f0e(lVar8), *(longlong *)(lVar9 + 0x10) != *(longlong *)(param_4 + 0x10)))
  goto LAB_14919c553;
  local_a8 = *param_3;
  local_a0 = param_3[1];
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
    UNLOCK();
  }
  FUN_1410cbcd8(param_1 + 0x2c,&local_68,param_2,&local_a8);
  if (iStack_60 == 0) goto LAB_14919c553;
  local_b0 = *(undefined8 *)CONCAT44(uStack_64,local_68);
  uVar10 = FUN_14479d2ce();
  lVar11 = FUN_14575d5b6(uVar10);
  lVar9 = *(longlong *)(param_4 + 0x360);
  plVar4 = *(longlong **)(param_4 + 0x368);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar9 == 0) {
    bVar12 = false;
  }
  else {
    plVar5 = *(longlong **)(param_4 + 0x360);
    plVar6 = *(longlong **)(param_4 + 0x368);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    lVar9 = (**(code **)(*plVar5 + 0x28))();
    bVar12 = lVar9 == lVar11;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (!bVar12) goto LAB_14919c553;
  FUN_145d339f0(param_1);
  FUN_1400bbfc4(&local_98,param_4);
  *(undefined4 *)puVar2 = (undefined4)local_98;
  *(undefined4 *)(param_1 + 0x6c) = local_98._4_4_;
  *(undefined4 *)(param_1 + 0x70) = (undefined4)uStack_90;
  *(undefined4 *)(param_1 + 0x74) = uStack_90._4_4_;
  if (puVar2 == &local_98) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x78) = local_88;
    local_88 = 0;
    *(undefined4 *)(param_1 + 0x80) = (undefined4)uStack_80;
    *(undefined4 *)(param_1 + 0x84) = uStack_80._4_4_;
  }
  cVar7 = (*(code *)PTR_FUN_14c758760)();
  if (cVar7 == '\0') {
LAB_14919c847:
    FUN_14485c47a(lVar8,param_4);
  }
  else {
    uVar3 = *(uint *)(param_4 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) goto LAB_14919c847;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_149199e04(param_1);
LAB_14919c553:
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14919c86a FUN_14919c86a body=96 status=ok
// SIG undefined FUN_14919c86a(void)

longlong FUN_14919c86a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = FUN_1459f5f3a();
  lVar6 = FUN_14092e757(uVar5,param_1,param_2,uVar1);
  *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  uVar3 = *(undefined4 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(lVar6 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(lVar6 + 0x6c) = uVar2;
  *(undefined4 *)(lVar6 + 0x70) = uVar3;
  *(undefined4 *)(lVar6 + 0x74) = uVar4;
  FUN_144a787a6(lVar6 + 0x78,param_1 + 0x78);
  *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(param_1 + 0x88);
  return lVar6;
}



// FUNCTION 14919c8d2 FUN_14919c8d2 body=155 status=ok
// SIG undefined FUN_14919c8d2(void)

void FUN_14919c8d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_578 [32];
  undefined8 local_558 [2];
  undefined1 local_548 [528];
  undefined1 local_338 [752];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_578;
  FUN_149191c08(local_548,0);
  local_558[0] = param_2;
  FUN_14918051e(local_548,param_3);
  local_48 = param_4;
  FUN_1447cd2ec(param_1,local_558);
  FUN_14918b3e4(local_338);
  FUN_14918079a(local_548);
  if ((local_30 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919c97a FUN_14919c97a body=323 status=ok
// SIG undefined FUN_14919c97a(void)

void FUN_14919c97a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  FUN_14919cabe(param_1,&local_40,local_28,0);
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919cabe FUN_14919cabe body=595 status=ok
// SIG undefined FUN_14919cabe(void)

undefined8 * FUN_14919cabe(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = param_3;
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
  }
  plVar1 = (longlong *)(param_1 + 0xa30);
  if ((longlong)*(int *)(param_1 + 0xa38) != 0) {
    lVar4 = *plVar1;
    lVar5 = lVar4 + (longlong)*(int *)(param_1 + 0xa38) * 0x18;
    iVar7 = 0;
    plVar3 = local_88 + 2;
    do {
      while (*(longlong *)(lVar4 + 0x10) == param_3) {
        if (lVar4 == 0) goto LAB_14919cc13;
        local_88[2] = 0;
        local_88[3] = 0;
        FUN_144a83b10(plVar3,iVar7);
        FUN_1400021e4(&local_a0,local_98);
        FUN_144a882a8(local_88,local_98,&DAT_149e01f60);
        FUN_1401c7f3e(&local_b8,local_88,plVar3);
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        if (local_88[2] != 0) {
          FUN_1400020a8();
        }
        puVar6 = &DAT_149dfb77a;
        if ((int)uStack_b0 != 0) {
          puVar6 = local_b8;
        }
        FUN_1446f470e(plVar3,puVar6,1);
        param_3 = local_88[2];
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar7 = iVar7 + 1;
        lVar4 = *(longlong *)(param_1 + 0xa30);
        lVar5 = lVar4 + (longlong)*(int *)(param_1 + 0xa38) * 0x18;
        if ((longlong)*(int *)(param_1 + 0xa38) == 0) goto LAB_14919cc13;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar5);
  }
LAB_14919cc13:
  local_b8 = (undefined2 *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_98[0] = param_3;
  FUN_1401031ac(param_1,0,local_88);
  FUN_1491f7680(local_88 + 2,local_88,local_98);
  local_b8 = (undefined2 *)local_88[2];
  uStack_b0 = local_88[3];
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  local_a8 = local_98[0];
  iVar7 = *(int *)(param_1 + 0xa38);
  *(uint *)(param_1 + 0xa38) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0xa3c) < iVar7 + 1U) {
    FUN_1491cb388(plVar1,iVar7);
  }
  puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar7 * 0x18);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  FUN_1491f7696(puVar2,&local_b8);
  *(undefined4 *)param_2 = (undefined4)local_b8;
  *(undefined4 *)((longlong)param_2 + 4) = local_b8._4_4_;
  *(int *)(param_2 + 1) = (int)uStack_b0;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_b0._4_4_;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919cd16 FUN_14919cd16 body=41 status=ok
// SIG undefined FUN_14919cd16(void)

void FUN_14919cd16(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x418))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14919cd40 FUN_14919cd40 body=177 status=ok
// SIG undefined FUN_14919cd40(void)

void FUN_14919cd40(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14919cdf2(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919cdf2 FUN_14919cdf2 body=409 status=ok
// SIG undefined FUN_14919cdf2(void)

longlong FUN_14919cdf2(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (**(code **)(*param_1 + 0x3b0))();
  if (lVar4 == 0) {
    lVar5 = 0;
    goto LAB_14919ce96;
  }
  lVar5 = 0;
  if ((*(byte *)(lVar4 + 0x211) < 3) || (*(byte *)(lVar4 + 0x211) == 10)) goto LAB_14919ce96;
  lVar5 = FUN_1491a13bd(DAT_14c951640);
  if (param_1 == (longlong *)0x0) {
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
    *(undefined8 *)(lVar5 + 0x70) = 0;
    *(undefined4 *)(lVar5 + 0x80) = 0;
    if (*(int *)(lVar5 + 0x84) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar5 + 0x78),0);
    }
    puVar2 = *(undefined2 **)(lVar5 + 0x78);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_50,param_1);
    *(undefined4 *)(lVar5 + 0x68) = local_50;
    *(undefined4 *)(lVar5 + 0x6c) = uStack_4c;
    *(undefined4 *)(lVar5 + 0x70) = uStack_48;
    *(undefined4 *)(lVar5 + 0x74) = uStack_44;
    if ((undefined4 *)(lVar5 + 0x68) == &local_50) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar5 + 0x78) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar5 + 0x78) = local_40;
      local_40 = 0;
      *(undefined4 *)(lVar5 + 0x80) = local_38;
      *(undefined4 *)(lVar5 + 0x84) = local_34;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(lVar5 + 0x60) = 0;
        goto LAB_14919cf6b;
      }
    }
    FUN_14485c47a((undefined8 *)(lVar5 + 0x60),param_1);
  }
LAB_14919cf6b:
  *(undefined8 *)(lVar5 + 0x88) = *param_2;
  FUN_149199e04(lVar5);
LAB_14919ce96:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919cf8c FUN_14919cf8c body=143 status=ok
// SIG undefined FUN_14919cf8c(void)

void FUN_14919cf8c(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x420))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919d01c FUN_14919d01c body=323 status=ok
// SIG undefined FUN_14919d01c(void)

void FUN_14919d01c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  local_40 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_14919d160(&local_38,local_20,&local_40);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919d160 FUN_14919d160 body=662 status=ok
// SIG undefined FUN_14919d160(void)

longlong * FUN_14919d160(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar6 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (lVar8 = param_2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       != lVar6 + 0x30)) {
      uVar7 = FUN_144a6c4d8();
      lVar8 = FUN_144a78ede(param_2,uVar7);
    }
    FUN_14919eb2a(&local_58);
    uVar12 = (ulonglong)local_48;
    if ((-1 < (int)local_48) && ((int)local_48 < local_50)) {
      do {
        lVar6 = *(longlong *)(local_58 + (uVar12 & 0xffffffff) * 8);
        lVar10 = *param_3;
        if ((lVar10 == 0) ||
           ((((lVar9 = FUN_1401242c6(), lVar9 == 0 ||
              (*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
              lVar9 + 0x30)) || (lVar10 = *param_3, lVar10 == 0)))) {
LAB_14919d24e:
          cVar5 = FUN_1468ff1d8(lVar6,param_2);
          if (cVar5 == '\0') {
            if (lVar8 != 0) {
              cVar5 = FUN_1468ff1d8(lVar6,lVar8);
              if (cVar5 != '\0') goto LAB_14919d25d;
              plVar3 = *(longlong **)(lVar6 + 0x360);
              plVar4 = *(longlong **)(lVar6 + 0x368);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              if ((plVar3 != (longlong *)0x0) &&
                 (lVar10 = (**(code **)(*plVar3 + 0x30))(), lVar10 == lVar8)) {
                iVar2 = (int)param_1[1];
                *(uint *)(param_1 + 1) = iVar2 + 1U;
                if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
                  FUN_1491cb0ce(param_1,iVar2);
                }
                *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar6;
              }
              if (plVar4 != (longlong *)0x0) {
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
          }
          else {
LAB_14919d25d:
            iVar2 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
              FUN_1491cb0ce(param_1,iVar2);
            }
            *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar6;
          }
        }
        else {
          lVar9 = *(longlong *)(lVar6 + 0x10);
          lVar11 = FUN_1401242c6();
          if (((((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30)) &&
              ((lVar10 = *param_3, lVar10 != 0 &&
               (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))))) &&
             (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
              lVar10 + 0x30)) goto LAB_14919d24e;
        }
        uVar12 = (longlong)(int)local_48;
        do {
          uVar13 = uVar12;
          uVar12 = uVar13 + 1;
          local_48 = (uint)uVar12;
          if ((longlong)local_50 <= (longlong)uVar12) break;
        } while (*(longlong *)(local_58 + uVar12 * 8) == 0);
      } while ((-2 < (longlong)uVar13) && ((int)local_48 < local_50));
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14919d414 FUN_14919d414 body=55 status=ok
// SIG undefined FUN_14919d414(void)

void FUN_14919d414(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(param_1 + 0x360) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x360) + 0x30))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14919d482 FUN_14919d482 body=180 status=ok
// SIG undefined FUN_14919d482(void)

void FUN_14919d482(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x428))(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919d554 FUN_14919d554 body=268 status=ok
// SIG undefined FUN_14919d554(void)

void FUN_14919d554(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x410))(param_1,puVar2,local_2c != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919d662 FUN_14919d662 body=138 status=ok
// SIG undefined FUN_14919d662(void)

void FUN_14919d662(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919d6ee FUN_14919d6ee body=164 status=ok
// SIG undefined FUN_14919d6ee(void)

void FUN_14919d6ee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919d798 FUN_14919d798 body=111 status=ok
// SIG undefined FUN_14919d798(void)

void FUN_14919d798(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1446f57c6(&DAT_14cc074b8,local_28);
  uVar1 = (**(code **)(*param_1 + 0x2f8))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919d820 FUN_14919d820 body=142 status=ok
// SIG undefined FUN_14919d820(void)

void FUN_14919d820(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_1491717de();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb76ef4);
  iVar1 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (0x1e < iVar1) {
    FUN_1491cb154(param_2,param_1 + 0xa30);
    return;
  }
  if (-1 < *(int *)(param_1 + 0xa3c)) {
    *(undefined4 *)(param_1 + 0xa38) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xa38) = 0;
  FUN_1491cb308(param_1 + 0xa30,0);
  return;
}



// FUNCTION 14919d8ae FUN_14919d8ae body=335 status=ok
// SIG undefined FUN_14919d8ae(void)

void FUN_14919d8ae(longlong param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x640) != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x638) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x638) + lVar5) != 0)) {
        FUN_1491cbf44(param_1 + 0x638,param_2,param_3);
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x640) * 0x10 != lVar5);
  }
  bVar1 = *param_3;
  if (bVar1 == 1) {
    uVar2 = FUN_140813180(param_2,param_3 + 0xc);
    if ((((uVar2 != 0xffffffff) && (param_3[0xc] == 4)) && (-1 < (int)uVar2)) &&
       ((((int)uVar2 < *(int *)(param_2 + 0xc0) &&
         (lVar5 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + (ulonglong)uVar2 * 8), lVar5 != 0))
        && (*(char *)(lVar5 + 0x10) == '\x04')))) {
      local_34 = 0x1ff;
      local_24 = 0;
      local_38 = 1;
      local_30 = *(undefined4 *)(param_3 + 0x18);
      local_2c = *(undefined8 *)(param_3 + 4);
      FUN_1491c9638(param_1 + 0x828,param_1);
    }
  }
  else if (bVar1 - 2 < 2) {
    iVar3 = *(int *)(param_1 + 0x7e8) + (uint)(bVar1 == 2) * 2 + -1;
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    *(int *)(param_1 + 0x7e8) = iVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919da14 FUN_14919da14 body=72 status=ok
// SIG undefined FUN_14919da14(void)

bool FUN_14919da14(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x3f8))();
  uVar1 = (**(code **)(*param_1 + 0x3f8))(param_1);
  lVar2 = FUN_14919da5c(param_2,uVar1,param_1 + 0x62,0);
  return lVar2 != 0;
}



// FUNCTION 14919da5c FUN_14919da5c body=904 status=ok
// SIG undefined FUN_14919da5c(void)

longlong FUN_14919da5c(undefined8 *param_1,longlong *param_2,longlong *param_3,byte param_4)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  wchar_t *local_a0;
  int local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  ulonglong uStack_70;
  void *local_60;
  uint local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = param_3;
  FUN_1400021e4(param_1,&local_60);
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  local_88 = (undefined2 *)0x0;
  uStack_80 = 0;
  local_90 = 0;
  FUN_140056680(&local_a0,&DAT_149e0635c);
  cVar2 = FUN_1407cdba6(&local_60,&local_a0,&local_78,&local_88);
  if (local_a0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar2 == '\0') {
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    _Src = local_60;
    local_78 = (wchar_t *)0x0;
    uStack_70 = 0;
    uStack_80 = CONCAT44(uStack_80._4_4_,local_58);
    if (local_58 == 0 && uStack_80._4_4_ == 0) {
      uStack_80 = (ulonglong)local_58;
    }
    else {
      FUN_1446dd670(&local_88,local_58);
      if (local_58 != 0) {
        memcpy(local_88,_Src,(longlong)(int)local_58 * 2);
      }
    }
    local_90 = *param_1;
  }
  else {
    puVar8 = local_88;
    if ((int)uStack_80 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_90,puVar8,1);
  }
  bVar12 = 0;
  bVar16 = true;
  do {
    bVar15 = bVar16;
    lVar13 = (longlong)(int)param_2[1];
    if (0 < lVar13) {
      uVar14 = lVar13 + 1;
      lVar13 = lVar13 * 0x28;
      do {
        lVar13 = lVar13 + -0x28;
        lVar10 = *param_2 + lVar13;
        lVar6 = FUN_1491a1b8e(lVar10);
        if (lVar6 != 0) {
          lVar6 = FUN_1491a1b8e(lVar10);
          local_50 = *(undefined8 *)(lVar6 + 0x18);
          FUN_1400021e4(&local_50,&local_a0);
          pwVar9 = L"";
          if (local_98 != 0) {
            pwVar9 = local_a0;
          }
          iVar4 = local_98 + -1;
          if (local_98 == 0) {
            iVar4 = 0;
          }
          uVar3 = FUN_144a49b4a(iVar4,pwVar9);
          plVar1 = local_a8;
          iVar4 = FUN_1457511aa(local_a8,uVar3,&local_a0);
          lVar6 = (longlong)iVar4 * 0x28 + *plVar1;
          if (lVar6 != 0 && iVar4 != -1) {
            FUN_144a787a6(&local_a0,lVar6 + 0x10);
          }
          iVar4 = (int)uStack_70;
          uVar11 = uStack_70 & 0xffffffff;
          if (local_98 == (int)uStack_70) {
            if (1 < local_98) {
              iVar5 = wcscmp(local_a0,local_78);
              goto LAB_14919dc85;
            }
LAB_14919dd2d:
            uVar7 = FUN_1491a1b8e(lVar10);
            lVar6 = FUN_1491ae680(uVar7,&local_90,
                                  CONCAT71((int7)(uVar11 >> 8),uVar14 == 2 & bVar12 & param_4));
            bVar16 = lVar6 != 0;
            if (bVar16) {
              local_b0 = lVar6;
            }
          }
          else {
            iVar5 = local_98 + (int)uStack_70 + -1;
LAB_14919dc85:
            if (iVar4 < 2) goto LAB_14919dd2d;
            uVar11 = 0;
            bVar16 = false;
            if (iVar5 == 0) goto LAB_14919dd2d;
          }
          if (local_a0 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (bVar16) goto LAB_14919dd75;
        }
        uVar14 = uVar14 - 1;
      } while (1 < uVar14);
    }
    bVar16 = (longlong)uStack_70 < 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if (bVar16) {
      FUN_1446f8c06(&local_78,0);
    }
    if (local_78 != (wchar_t *)0x0) {
      *local_78 = L'\0';
    }
    bVar12 = 1;
    bVar16 = false;
  } while (bVar15);
  local_b0 = 0;
LAB_14919dd75:
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  lVar13 = local_b0;
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar13;
}



// FUNCTION 14919dde6 FUN_14919dde6 body=1746 status=ok
// SIG undefined FUN_14919dde6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14919dde6(float *param_1,double *param_2,undefined1 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_198 [32];
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double adStack_d0 [3];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  switch(param_3) {
  case 0:
    dVar27 = param_2[4];
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(bool *)param_1 = 9.99999993922529e-09 < dVar27;
    break;
  case 1:
    if (param_4 == '\x02') {
      fVar11 = (float)param_2[6];
    }
    else if (param_4 == '\x01') {
      fVar11 = (float)param_2[5];
    }
    else {
      if (param_4 != '\0') break;
      fVar11 = (float)param_2[4];
    }
    goto LAB_14919e3e3;
  case 2:
    if (param_4 == '\x02') {
      fVar11 = (float)(int)param_2[6];
    }
    else if (param_4 == '\x01') {
      fVar11 = (float)(int)param_2[5];
    }
    else {
      if (param_4 != '\0') break;
      fVar11 = (float)(int)param_2[4];
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
    *param_1 = fVar11;
    break;
  case 3:
    dVar27 = param_2[4];
    dVar4 = param_2[5];
    if (param_4 == '\x02') {
      *(undefined1 *)(param_1 + 0x20) = 1;
      *param_1 = (float)dVar27;
      param_1[1] = (float)dVar4;
    }
    else {
      dVar9 = param_2[6];
      if ((param_4 != '\x01') && (dVar27 = dVar4, param_4 != '\0')) break;
      *(undefined1 *)(param_1 + 0x20) = 1;
      *param_1 = (float)dVar27;
      param_1[1] = (float)dVar9;
    }
    param_1[2] = 0.0;
    break;
  case 4:
    fVar11 = (float)param_2[6];
    fVar19 = (float)param_2[5];
    fVar26 = (float)param_2[4];
    goto LAB_14919e37e;
  case 5:
    fVar11 = (float)param_2[10];
    fVar19 = (float)param_2[9];
    fVar26 = (float)param_2[8];
    goto LAB_14919e37e;
  case 6:
    local_d8 = (double)param_1[2];
    dStack_e0 = (double)param_1[1];
    local_e8 = (double)*param_1;
    FUN_1467fb380(&local_138,&local_e8);
    FUN_1467fae54(&local_138,&local_178,&local_88);
    local_e8 = *param_2;
    dStack_e0 = param_2[1];
    local_d8 = param_2[2];
    adStack_d0[0] = param_2[3];
    FUN_141706cfc(&local_a0,&local_e8);
    dVar27 = (double)DAT_1499387d0;
    dVar4 = DAT_1499387d0._8_8_;
    auVar24._8_8_ = local_98 - local_80;
    auVar24._0_8_ = local_a0 - local_88;
    auVar21 = divpd(auVar24,_DAT_1499387d0);
    auVar15._0_8_ = (local_90 - local_78) / 360.0;
    auVar15._8_8_ = 0;
    auVar12 = roundpd(auVar21,auVar21,3);
    auVar21 = roundpd(auVar15,auVar15,3);
    auVar33._0_8_ = (local_90 - local_78) - auVar21._0_8_ * dVar27;
    auVar33._8_8_ = 0.0 - auVar21._8_8_ * dVar4;
    dVar9 = (local_a0 - local_88) - auVar12._0_8_ * dVar27;
    dVar10 = (local_98 - local_80) - auVar12._8_8_ * dVar4;
    auVar31._0_8_ = dVar9 + dVar27;
    auVar31._8_8_ = dVar10 + dVar4;
    auVar29._0_8_ = dVar27 + auVar33._0_8_;
    auVar29._8_8_ = dVar4 + auVar33._8_8_;
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar10);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar9);
    auVar8._8_4_ = SUB84(dVar10,0);
    auVar8._0_8_ = dVar9;
    auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar12 = blendvpd(auVar31,auVar8,auVar16);
    auVar17._8_8_ = -(ulonglong)(0.0 <= auVar33._8_8_);
    auVar17._0_8_ = -(ulonglong)(0.0 <= auVar33._0_8_);
    auVar21 = blendvpd(auVar29,auVar33,auVar17);
    auVar25._0_8_ = auVar12._0_8_ + -360.0;
    auVar25._8_8_ = auVar12._8_8_ + -360.0;
    auVar18._8_8_ = -(ulonglong)(180.0 < auVar12._8_8_);
    auVar18._0_8_ = -(ulonglong)(180.0 < auVar12._0_8_);
    auVar12 = blendvpd(auVar12,auVar25,auVar18);
    dVar27 = auVar21._0_8_;
    local_128 = (double)(~-(ulonglong)(180.0 < dVar27) & (ulonglong)dVar27 |
                        (ulonglong)(dVar27 + -360.0) & -(ulonglong)(180.0 < dVar27)) + local_128;
    dStack_130 = auVar12._8_8_ + dStack_130;
    local_138 = auVar12._0_8_ + local_138;
    FUN_1414d053e(&local_138,&local_e8);
    fVar11 = (float)local_d8;
    fVar19 = (float)dStack_e0;
    fVar26 = (float)local_e8;
LAB_14919e37e:
    *(undefined1 *)(param_1 + 0x20) = 1;
    *param_1 = fVar26;
    param_1[1] = fVar19;
    param_1[2] = fVar11;
    break;
  case 7:
    dVar27 = *param_2;
    dVar4 = param_2[1];
    dVar9 = param_2[2];
    dVar10 = param_2[3];
    dVar5 = param_2[4];
    dVar6 = param_2[5];
    dVar7 = param_2[6];
    dVar1 = param_2[8];
    dVar2 = param_2[9];
    dVar3 = param_2[10];
    *(undefined1 *)(param_1 + 0x20) = 1;
    *param_1 = (float)dVar27;
    param_1[1] = (float)dVar4;
    param_1[2] = (float)dVar9;
    param_1[3] = (float)dVar10;
    param_1[4] = (float)dVar5;
    param_1[5] = (float)dVar6;
    param_1[6] = (float)dVar7;
    param_1[7] = 0.0;
    param_1[8] = (float)dVar1;
    param_1[9] = (float)dVar2;
    param_1[10] = (float)dVar3;
    param_1[0xb] = 0.0;
    break;
  case 8:
    dVar27 = *param_2;
    dVar4 = param_2[1];
    dVar9 = param_2[2];
    dVar10 = param_2[3];
    dVar5 = param_2[4];
    dVar6 = param_2[5];
    dVar7 = param_2[6];
    *(undefined1 *)(param_1 + 0x20) = 1;
    *param_1 = (float)dVar27;
    param_1[1] = (float)dVar4;
    param_1[2] = (float)dVar9;
    param_1[3] = (float)dVar10;
    param_1[4] = (float)dVar5;
    param_1[5] = (float)dVar6;
    param_1[6] = (float)dVar7;
    param_1[7] = 0.0;
    break;
  case 9:
    local_e8 = param_2[4];
    dStack_e0 = param_2[5];
    local_d8 = param_2[6];
    local_138 = *param_2;
    dStack_130 = param_2[1];
    local_128 = param_2[2];
    dStack_120 = param_2[3];
    FUN_1448052ee(&local_138,adStack_d0);
    local_b8 = param_2[8];
    dStack_b0 = param_2[9];
    local_a8 = param_2[10];
    local_110 = (double)param_1[2];
    local_118 = (double)param_1[1];
    dStack_120 = (double)*param_1;
    local_128 = (double)param_1[5];
    dStack_130 = (double)param_1[4];
    local_138 = (double)param_1[3];
    local_f8 = (double)param_1[8];
    local_100 = (double)param_1[7];
    local_108 = (double)param_1[6];
    FUN_1467fae54(&dStack_120,&local_88,&local_a0);
    local_178 = *param_2;
    dStack_170 = param_2[1];
    local_168 = param_2[2];
    dStack_160 = param_2[3];
    FUN_1448052ee(&local_178,&local_150);
    dVar27 = (double)DAT_1499387d0;
    dVar4 = DAT_1499387d0._8_8_;
    auVar20._8_8_ = local_148 - local_98;
    auVar20._0_8_ = local_150 - local_a0;
    auVar21 = divpd(auVar20,_DAT_1499387d0);
    auVar12._0_8_ = (local_140 - local_90) / 360.0;
    auVar12._8_8_ = 0;
    auVar22 = roundpd(auVar21,auVar21,3);
    auVar21 = roundpd(auVar12,auVar12,3);
    auVar32._0_8_ = (local_140 - local_90) - auVar21._0_8_ * dVar27;
    auVar32._8_8_ = 0.0 - auVar21._8_8_ * dVar4;
    dVar9 = (local_150 - local_a0) - auVar22._0_8_ * dVar27;
    dVar10 = (local_148 - local_98) - auVar22._8_8_ * dVar4;
    auVar30._0_8_ = dVar9 + dVar27;
    auVar30._8_8_ = dVar10 + dVar4;
    auVar28._0_8_ = dVar27 + auVar32._0_8_;
    auVar28._8_8_ = dVar4 + auVar32._8_8_;
    auVar22._8_8_ = -(ulonglong)(0.0 <= dVar10);
    auVar22._0_8_ = -(ulonglong)(0.0 <= dVar9);
    auVar21._8_4_ = SUB84(dVar10,0);
    auVar21._0_8_ = dVar9;
    auVar21._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar12 = blendvpd(auVar30,auVar21,auVar22);
    auVar13._8_8_ = -(ulonglong)(0.0 <= auVar32._8_8_);
    auVar13._0_8_ = -(ulonglong)(0.0 <= auVar32._0_8_);
    auVar21 = blendvpd(auVar28,auVar32,auVar13);
    auVar23._0_8_ = auVar12._0_8_ + -360.0;
    auVar23._8_8_ = auVar12._8_8_ + -360.0;
    auVar14._8_8_ = -(ulonglong)(180.0 < auVar12._8_8_);
    auVar14._0_8_ = -(ulonglong)(180.0 < auVar12._0_8_);
    auVar12 = blendvpd(auVar12,auVar23,auVar14);
    dVar27 = auVar21._0_8_;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *param_1 = (float)(auVar12._0_8_ + dStack_120);
    param_1[1] = (float)(auVar12._8_8_ + local_118);
    param_1[2] = (float)((double)(~-(ulonglong)(180.0 < dVar27) & (ulonglong)dVar27 |
                                 (ulonglong)(dVar27 + -360.0) & -(ulonglong)(180.0 < dVar27)) +
                        local_110);
    param_1[3] = (float)local_e8;
    param_1[4] = (float)dStack_e0;
    param_1[5] = (float)local_d8;
    param_1[6] = (float)local_b8;
    param_1[7] = (float)dStack_b0;
    param_1[8] = (float)local_a8;
    break;
  case 10:
    fVar11 = (float)param_2[8];
LAB_14919e3e3:
    *(undefined1 *)(param_1 + 0x20) = 1;
    *param_1 = fVar11;
  }
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14919e4ba FUN_14919e4ba body=870 status=ok
// SIG undefined FUN_14919e4ba(void)

undefined8 FUN_14919e4ba(longlong param_1,undefined2 **param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 *local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined1 local_c4 [4];
  undefined2 *local_c0;
  longlong local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x10))(param_1 + 0x280);
  if (lVar4 != 0) {
    lVar6 = FUN_140124256();
    local_b8 = 0;
    iVar3 = *(int *)(lVar6 + 0x78);
    uVar5 = *(undefined8 *)(lVar6 + 0x70);
    local_b0 = iVar3;
    if (iVar3 == 0) {
      local_ac = 0;
      iVar3 = 0;
    }
    else {
      FUN_1491ca478(&local_b8,iVar3,0);
      FUN_1491ca4e7(local_b8,uVar5,iVar3);
      iVar3 = local_b0;
    }
    lVar6 = local_b8;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    bVar1 = true;
    if (iVar3 != 0) {
      local_e0 = (undefined2 *)(param_1 + 0x6b0);
      lVar10 = 0;
      do {
        if (*(char *)(lVar6 + 0x21 + lVar10) == '\0') {
          puVar9 = &DAT_149dfb77a;
          if (*(int *)(lVar6 + 8 + lVar10) != 0) {
            puVar9 = *(undefined2 **)(lVar6 + lVar10);
          }
          FUN_1446f470e(&local_a8,puVar9,1);
          local_c4[0] = 0x40;
          local_c0 = local_a8;
          lVar7 = FUN_14919e822(local_e0,local_c4);
          if (lVar7 == 0) {
            if (param_2 != (undefined2 **)0x0) {
              if (*(int *)(lVar6 + 8 + lVar10) == 0) {
                puVar9 = &DAT_149dfb77a;
              }
              else {
                puVar9 = *(undefined2 **)(lVar6 + lVar10);
              }
              FUN_140002266(&local_a8,L"Connector \'%s\' is not resolved.",puVar9);
              local_d8 = local_a8;
              if (&local_a8 == param_2) goto LAB_14919e80e;
              if (*param_2 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              *param_2 = local_a8;
              local_a8 = (undefined2 *)0x0;
              *(undefined4 *)(param_2 + 1) = (undefined4)local_a0;
              *(undefined4 *)((longlong)param_2 + 0xc) = local_a0._4_4_;
            }
          }
          else {
            cVar2 = FUN_1491ddc02(lVar7,lVar4);
            if (cVar2 != '\0') {
              local_a8 = (undefined2 *)local_c4;
              local_a0 = lVar7;
              FUN_1491ca586(&local_98,&local_d8,&local_a8,0);
              goto LAB_14919e640;
            }
            if (param_2 != (undefined2 **)0x0) {
              FUN_14919e8cc(lVar7,&local_d8);
              puVar9 = &DAT_149dfb77a;
              local_e0 = &DAT_149dfb77a;
              if (local_d0 != 0) {
                local_e0 = local_d8;
              }
              puVar11 = &DAT_149dfb77a;
              if (*(int *)(lVar6 + 8 + lVar10) != 0) {
                puVar11 = *(undefined2 **)(lVar6 + lVar10);
              }
              puVar8 = (undefined8 *)FUN_1406bad30(param_1);
              if (*(int *)(puVar8 + 1) != 0) {
                puVar9 = (undefined2 *)*puVar8;
              }
              local_e8 = local_e0;
              FUN_140002266(&local_a8,L"Connector \'%s%s\' has invalid target \'%s\'.",puVar9,
                            puVar11);
              if (&local_a8 == param_2) {
                if (local_a8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*param_2 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                *param_2 = local_a8;
                local_a8 = (undefined2 *)0x0;
                *(undefined4 *)(param_2 + 1) = (undefined4)local_a0;
                *(undefined4 *)((longlong)param_2 + 0xc) = local_a0._4_4_;
                local_a0 = 0;
              }
LAB_14919e80e:
              if (local_d8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          bVar1 = false;
          goto LAB_14919e5cd;
        }
LAB_14919e640:
        lVar10 = lVar10 + 0x38;
      } while ((longlong)iVar3 * 0x38 - lVar10 != 0);
      bVar1 = true;
    }
LAB_14919e5cd:
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14128f766(&local_98);
    FUN_1456e4800(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (!bVar1) {
      uVar5 = 0;
      goto LAB_14919e4fd;
    }
  }
  uVar5 = 1;
LAB_14919e4fd:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14919e822 FUN_14919e822 body=169 status=ok
// SIG undefined FUN_14919e822(void)

longlong FUN_14919e822(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *(longlong *)(param_2 + 4);
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (uint)*param_2 +
                    ((int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 10) * 4);
    if (iVar6 != -1) {
      lVar1 = *param_1;
      do {
        lVar8 = (longlong)iVar6 * 0x38;
        lVar4 = lVar1 + lVar8;
        if ((*(longlong *)(lVar1 + 4 + lVar8) == lVar3) && (*(byte *)(lVar1 + lVar8) == *param_2))
        goto LAB_14919e82c;
        iVar6 = *(int *)(lVar4 + 0x30);
      } while (iVar6 != -1);
    }
  }
  lVar4 = 0;
LAB_14919e82c:
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 14919e8cc FUN_14919e8cc body=577 status=ok
// SIG undefined FUN_14919e8cc(void)

undefined8 * FUN_14919e8cc(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *param_1;
  if (bVar1 < 0x10) {
    switch(bVar1) {
    case 1:
      FUN_1400021e4(param_1 + 4,&local_28);
      puVar3 = local_28;
      if (local_20 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"Bone(%s)";
      break;
    case 2:
      FUN_1400021e4(param_1 + 4,&local_28);
      puVar3 = local_28;
      if (local_20 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"Null(%s)";
      break;
    default:
switchD_14919e905_caseD_3:
      *param_2 = 0;
      param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    case 4:
      FUN_1400021e4(param_1 + 4,&local_28);
      puVar3 = local_28;
      if (local_20 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"Control(%s)";
      break;
    case 8:
      FUN_1400021e4(param_1 + 4,&local_28);
      puVar3 = local_28;
      if (local_20 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"Curve(%s)";
    }
  }
  else if (bVar1 < 0x40) {
    if (bVar1 == 0x10) {
      FUN_1400021e4(param_1 + 4,&local_28);
      puVar3 = local_28;
      if (local_20 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"Physics(%s)";
    }
    else {
      if (bVar1 != 0x20) goto switchD_14919e905_caseD_3;
      FUN_1400021e4(param_1 + 4,&local_28);
      puVar3 = local_28;
      if (local_20 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"Reference(%s)";
    }
  }
  else if (bVar1 == 0x40) {
    FUN_1400021e4(param_1 + 4,&local_28);
    puVar3 = local_28;
    if (local_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    pwVar2 = L"Connector(%s)";
  }
  else {
    if (bVar1 != 0x80) goto switchD_14919e905_caseD_3;
    FUN_1400021e4(param_1 + 4,&local_28);
    puVar3 = local_28;
    if (local_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    pwVar2 = L"Socket(%s)";
  }
  FUN_140002266(param_2,pwVar2,puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919eb14 FUN_14919eb14 body=21 status=ok
// SIG undefined FUN_14919eb14(void)

bool FUN_14919eb14(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140124256();
  return 1 < *(int *)(lVar1 + 8);
}



// FUNCTION 14919eb2a FUN_14919eb2a body=107 status=ok
// SIG undefined FUN_14919eb2a(void)

longlong * FUN_14919eb2a(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1401242c6();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 14919eb96 FUN_14919eb96 body=156 status=ok
// SIG undefined FUN_14919eb96(void)

undefined8 * FUN_14919eb96(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1491c19c0(param_1 + 1,iVar1,0);
    FUN_1491c1a22(param_1[1],uVar2,iVar1);
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_1459a7e20(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 14919ec32 FUN_14919ec32 body=82 status=ok
// SIG undefined FUN_14919ec32(void)

void FUN_14919ec32(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1401f963a(param_1 + 0x18);
  FUN_1491c1aa8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14919ec84 FUN_14919ec84 body=66 status=ok
// SIG undefined FUN_14919ec84(void)

void FUN_14919ec84(longlong param_1,longlong param_2)

{
  FUN_14919745a(param_1 + 0x6b0);
  FUN_14919754a(param_1 + 0x700,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_2 + 0xa0);
  FUN_1456e440c(param_2);
  return;
}



// FUNCTION 14919ecc6 FUN_14919ecc6 body=48 status=ok
// SIG undefined FUN_14919ecc6(void)

undefined8 * FUN_14919ecc6(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x2f8) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_149192f24(*(longlong *)(param_1 + 0x2f8),param_2,0);
  }
  return param_2;
}



// FUNCTION 14919ecf6 FUN_14919ecf6 body=479 status=ok
// SIG undefined FUN_14919ecf6(void)

undefined8 *
FUN_14919ecf6(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined1 local_108 [96];
  undefined1 local_a8 [104];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar1 = (**(code **)(*param_1 + 0x3c0))();
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_1 + 0x3b0))(param_1,param_3);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x358) == '\0')) {
      FUN_14449ec9a(param_1[0x5f],local_a8,lVar3,3);
      FUN_1449437a2(param_4,local_108,local_a8);
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 1;
      FUN_1491de4e6(param_1[0x5f],lVar3,local_108,0);
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 1;
      FUN_1491de4e6(param_1[0x5f],lVar3,local_108,1);
      lVar4 = FUN_14479d2ce(param_1[0x5f] + 0x310);
      if (lVar4 != 0) {
        uVar2 = FUN_140813180(lVar4,lVar3 + 0x10);
        if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar4 + 0xc0))) &&
            (lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)uVar2 * 8), lVar3 != 0))
           && (*(char *)(lVar3 + 0x10) == '\x04')) {
          local_110 = 0;
          local_118 = 0;
          local_120 = 1;
          local_128 = 1;
          FUN_1491de4e6(lVar4,lVar3,local_108,0);
          local_110 = 0;
          local_118 = 0;
          local_120 = 1;
          local_128 = 1;
          FUN_1491de4e6(lVar4,lVar3,local_108,1);
        }
      }
    }
  }
  puVar5 = param_2;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *param_4;
    param_4 = param_4 + 1;
    puVar5 = puVar5 + 1;
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919eed6 FUN_14919eed6 body=365 status=ok
// SIG undefined FUN_14919eed6(void)

void FUN_14919eed6(code *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  code *local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = (**(code **)(*DAT_14cc06af0 + 0xb0))();
  if ((iVar3 != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    uVar4 = FUN_14449bdee(*(longlong *)(param_1 + 0x2f8),1);
    if (uVar4 != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc06c08) {
        FUN_144b3d300(&DAT_14cc06c08);
        if (DAT_14cc06c08 == -1) {
          FUN_140056680(&DAT_14cc06bf8,L"CTRL_");
          atexit((_func_5014 *)&LAB_14448af8b);
          _Init_thread_footer(&DAT_14cc06c08);
        }
      }
      lVar1 = *(longlong *)(param_1 + 0x2f8);
      iVar3 = *(int *)(lVar1 + 0xc0);
      local_40 = uVar4;
      if (0 < iVar3) {
        lVar5 = 0;
        local_48 = param_1;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + lVar5 * 8);
          if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\b')) {
            local_38 = lVar2;
            FUN_144495696(&local_48,&local_38);
            iVar3 = *(int *)(lVar1 + 0xc0);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar3);
      }
      local_48 = FUN_14919f144;
      local_40 = local_40 & 0xffffffff00000000;
      FUN_14919f044(param_1 + 0x828,&local_38,param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919f044 FUN_14919f044 body=254 status=ok
// SIG undefined FUN_14919f044(void)

undefined8
FUN_14919f044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14bb761f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14bb76730;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1491c7ce4(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919f144 FUN_14919f144 body=205 status=ok
// SIG undefined FUN_14919f144(void)

void FUN_14919f144(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined4 local_c4 [33];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)(param_3 + 0x21d) == '\x01') && (lVar1 = param_1[0x5f], lVar1 != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x3c0))(param_1);
    local_d8 = 1;
    FUN_1444a0032(lVar1,local_c4,param_3,uVar2 ^ 1);
    lVar1 = param_1[0x5f];
    local_d0 = 8;
    local_cc = *(undefined8 *)(param_3 + 0x14);
    uVar3 = FUN_140813180(lVar1);
    FUN_14143b628(lVar1,uVar3,local_c4[0],0);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919f212 FUN_14919f212 body=141 status=ok
// SIG undefined FUN_14919f212(void)

undefined8 * FUN_14919f212(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [44];
  undefined1 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x2f8);
  if (lVar2 == 0) {
    puVar3 = &DAT_14c846480;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_2c = 4;
  local_28 = *param_3;
  uVar1 = FUN_140813180(lVar2);
  FUN_14486750c(lVar2,param_2,uVar1,0);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14919f2a0 FUN_14919f2a0 body=2753 status=ok
// SIG undefined FUN_14919f2a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_14919f2a0(longlong param_1,void *param_2,longlong param_3,char *param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar41;
  undefined1 auVar40 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStack_428 [32];
  undefined1 local_408;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_30c [132];
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
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if ((*(char *)(param_1 + 0x8a0) == '\x01') && (*param_4 == '\x01')) {
    iVar4 = FUN_14919fd68(param_1 + 0x918,param_3 + 0x10);
    if (iVar4 != -1) {
      if ((*(char *)(param_3 + 0x211) == '\0') ||
         ((*(char *)(param_3 + 0x211) == '\x02' && (*(longlong *)(param_3 + 0x360) != 0)))) {
        uVar6 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x10))(param_1 + 0x280);
        local_408 = 1;
        FUN_1444a0032(uVar6,param_2,param_3,*param_4);
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x918);
        uVar6 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x10))(param_1 + 0x280);
        local_408 = 0;
        puVar9 = local_30c;
        FUN_1444a0032(uVar6,puVar9,param_3,*param_4);
        pdVar8 = &local_378;
        FUN_1491932b8(puVar9,pdVar8,*(undefined1 *)(param_3 + 0x211),
                      *(undefined1 *)(param_3 + 0x21c));
        auVar38 = _DAT_149934d80;
        pdVar7 = (double *)((longlong)iVar4 * 0x110);
        auVar16 = *(undefined1 (*) [16])(lVar1 + 0xc0 + (longlong)pdVar7);
        auVar25 = *(undefined1 (*) [16])(lVar1 + 0xd0 + (longlong)pdVar7);
        auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar16._8_8_));
        auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar16._0_8_));
        iVar4 = movmskpd((int)puVar9,auVar33);
        auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar25._8_8_));
        auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar25._0_8_));
        uVar10 = movmskpd((int)pdVar8,auVar36);
        if ((uVar10 & 0x3fffffff) == 0 && iVar4 == 0) {
          local_3e8 = DAT_14c8464a0;
          dStack_3e0 = DAT_14c8464a8;
          local_3f8 = DAT_14c8464b0;
          dStack_3f0 = DAT_14c8464b8;
          pdVar8 = pdVar7;
          auVar12 = _DAT_14c8464c0;
          uVar42 = (undefined4)DAT_14c846480;
          uVar43 = DAT_14c846480._4_4_;
          uVar44 = (undefined4)DAT_14c846488;
          uVar45 = DAT_14c846488._4_4_;
          auVar16 = _DAT_14c8464d0;
          dVar22 = DAT_14c846490;
          dVar29 = DAT_14c846498;
        }
        else {
          pdVar8 = (double *)((longlong)pdVar7 + lVar1 + 0x80);
          auVar36 = divpd(_DAT_149934d80,auVar16);
          auVar33 = divpd(ZEXT816(0x3ff0000000000000),auVar25);
          auVar12._0_8_ =
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar16._0_8_)) & auVar36._0_8_);
          auVar12._8_8_ =
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar16._8_8_)) & auVar36._8_8_);
          dVar32 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar25._0_8_)) & auVar33._0_8_)
          ;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = dVar32;
          dVar37 = *pdVar8;
          dVar18 = *(double *)((longlong)pdVar7 + lVar1 + 0x88);
          dVar22 = *(double *)((longlong)pdVar7 + lVar1 + 0x90) * -1.0;
          dVar29 = *(double *)((longlong)pdVar7 + lVar1 + 0x98) * 1.0;
          dVar3 = -dVar37;
          uVar42 = SUB84(dVar37,0);
          uVar43 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar21 = -dVar18;
          uVar44 = SUB84(dVar18,0);
          uVar45 = (undefined4)((ulonglong)dVar21 >> 0x20);
          dVar28 = *(double *)((longlong)pdVar7 + lVar1 + 0xa0) * auVar12._0_8_;
          dVar30 = *(double *)((longlong)pdVar7 + lVar1 + 0xa8) * auVar12._8_8_;
          dVar32 = *(double *)((longlong)pdVar7 + lVar1 + 0xb0) * dVar32;
          dVar18 = dVar30 * dVar3 - dVar21 * dVar28;
          dVar27 = dVar32 * dVar21 - dVar22 * dVar30;
          dVar35 = dVar28 * dVar22 - dVar3 * dVar32;
          dVar27 = dVar27 + dVar27;
          dVar35 = dVar35 + dVar35;
          dVar18 = dVar18 + dVar18;
          local_3e8 = 0.0 - ((dVar18 * dVar21 - dVar35 * dVar22) + dVar29 * dVar27 + dVar28);
          dStack_3e0 = 0.0 - (dVar18 * dVar37 + dVar22 * dVar27 + dVar29 * dVar35 + dVar30);
          local_3f8 = 0.0 - (dVar29 * dVar18 + dVar32 + (dVar35 * dVar3 - dVar27 * dVar21));
          dStack_3f0 = 0.0;
        }
        local_3a8 = 0.0;
        dStack_3a0 = 0.0;
        local_3b8 = 0.0;
        dStack_3b0 = 0.0;
        dVar18 = local_338._0_8_;
        dVar21 = local_338._8_8_;
        dVar3 = local_328._0_8_;
        auVar25 = minpd(local_338,auVar12);
        auVar33 = minpd(local_328,auVar16);
        auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
        auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
        iVar5 = movmskpd((int)pdVar8,auVar26);
        auVar25._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
        auVar25._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
        uVar10 = movmskpd(iVar4,auVar25);
        dVar37 = auVar12._0_8_;
        dVar27 = auVar12._8_8_;
        dVar35 = auVar16._0_8_;
        if ((uVar10 & 0x3fffffff) == 0 && iVar5 == 0) {
          dVar32 = dStack_370 * dVar22 * -1.0 +
                   local_368 * (double)CONCAT44(uVar45,uVar44) +
                   (double)CONCAT44(uVar43,uVar42) * dStack_360 * 1.0 + dVar29 * local_378;
          dVar28 = local_378 * dVar22 * 1.0 +
                   dStack_360 * (double)CONCAT44(uVar45,uVar44) +
                   (double)CONCAT44(uVar43,uVar42) * local_368 * -1.0 + dVar29 * dStack_370;
          auVar38._0_8_ =
               dStack_360 * dVar22 * 1.0 +
               (((double)CONCAT44(uVar43,uVar42) * dStack_370 * 1.0 + dVar29 * local_368) -
               (double)CONCAT44(uVar45,uVar44) * local_378);
          auVar38._8_8_ =
               local_368 * dVar22 * -1.0 +
               (((double)CONCAT44(uVar43,uVar42) * local_378 * -1.0 + dVar29 * dStack_360) -
               (double)CONCAT44(uVar45,uVar44) * dStack_370);
          local_358 = local_358 * dVar37;
          dStack_350 = dStack_350 * dVar27;
          local_348 = local_348 * dVar35;
          dStack_340 = dStack_340 * auVar16._8_8_;
          dVar30 = dStack_350 * (double)CONCAT44(uVar43,uVar42) -
                   (double)CONCAT44(uVar45,uVar44) * local_358;
          dVar2 = local_348 * (double)CONCAT44(uVar45,uVar44) - dVar22 * dStack_350;
          dVar39 = local_358 * dVar22 - (double)CONCAT44(uVar43,uVar42) * local_348;
          dVar41 = dStack_340 * dVar29 - dVar29 * dStack_340;
          dVar2 = dVar2 + dVar2;
          dVar39 = dVar39 + dVar39;
          dVar30 = dVar30 + dVar30;
          dVar41 = dVar41 + dVar41;
          local_3b8 = local_3e8 +
                      (dVar30 * (double)CONCAT44(uVar45,uVar44) - dVar22 * dVar39) +
                      dVar29 * dVar2 + local_358;
          dStack_3b0 = dStack_3e0 +
                       (dVar2 * dVar22 - dVar30 * (double)CONCAT44(uVar43,uVar42)) +
                       dVar29 * dVar39 + dStack_350;
          local_3a8 = local_3f8 +
                      (dVar39 * (double)CONCAT44(uVar43,uVar42) -
                      (double)CONCAT44(uVar45,uVar44) * dVar2) + dVar29 * dVar30 + local_348;
          dStack_3a0 = dStack_3f0 +
                       (dVar41 * dVar29 - dVar41 * dVar29) + dVar29 * dVar41 + dStack_340;
        }
        else {
          dVar28 = (double)CONCAT44(uVar43,uVar42) + (double)CONCAT44(uVar43,uVar42);
          dVar30 = (double)CONCAT44(uVar45,uVar44) + (double)CONCAT44(uVar45,uVar44);
          dVar24 = dVar22 + dVar22;
          dVar31 = (double)CONCAT44(uVar43,uVar42) * dVar28;
          dVar34 = (double)CONCAT44(uVar45,uVar44) * dVar30;
          local_1e8 = ((double)DAT_149934d80 - (dVar22 * dVar24 + dVar34)) * dVar37;
          dVar32 = (DAT_149934d80._8_8_ - (dVar22 * dVar24 + dVar31)) * dVar27;
          dVar2 = dVar30 * (double)CONCAT44(uVar43,uVar42);
          dVar39 = dVar24 * (double)CONCAT44(uVar45,uVar44);
          dVar22 = (double)CONCAT44(uVar43,uVar42) * dVar24;
          dVar28 = dVar28 * dVar29;
          dVar41 = (dVar39 - dVar28) * dVar35;
          local_198 = (1.0 - (dVar31 + dVar34)) * dVar35;
          dStack_1e0 = (dVar2 + dVar24 * dVar29) * dVar37;
          local_1b8 = (dVar39 + dVar28) * dVar27;
          local_1d8 = (dVar22 - dVar30 * dVar29) * dVar37;
          uStack_1d0 = 0;
          local_1c8._8_4_ = SUB84(dVar32,0);
          local_1c8._0_8_ = (dVar2 - dVar24 * dVar29) * dVar27;
          local_1c8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          uStack_1b0 = 0;
          local_1a8._8_4_ = SUB84(dVar41,0);
          local_1a8._0_8_ = (dVar22 + dVar30 * dVar29) * dVar35;
          local_1a8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          uStack_190 = 0;
          local_188 = local_3e8;
          dStack_180 = dStack_3e0;
          local_178 = local_3f8;
          uStack_170 = 0x3ff0000000000000;
          dVar29 = dStack_370 + dStack_370;
          dVar32 = local_368 + local_368;
          dVar22 = local_378 * (local_378 + local_378);
          local_218 = (1.0 - (dVar22 + dStack_370 * dVar29)) * dVar3;
          dVar28 = (local_378 + local_378) * dStack_360;
          local_228 = (dVar29 * dStack_360 + local_378 * dVar32) * dVar3;
          local_248 = (dVar29 * local_378 - dVar32 * dStack_360) * dVar21;
          dStack_220 = (dVar32 * dStack_370 - dVar28) * dVar3;
          local_268 = ((double)DAT_149934d80 - (local_368 * dVar32 + dStack_370 * dVar29)) * dVar18;
          dStack_240 = (DAT_149934d80._8_8_ - (local_368 * dVar32 + dVar22)) * dVar21;
          dStack_260 = (dVar29 * local_378 + dVar32 * dStack_360) * dVar18;
          local_238 = (dVar32 * dStack_370 + dVar28) * dVar21;
          local_258 = (local_378 * dVar32 - dVar29 * dStack_360) * dVar18;
          uStack_250 = 0;
          uStack_230 = 0;
          uStack_210 = 0;
          local_208 = local_358;
          dStack_200 = dStack_350;
          local_1f8 = local_348;
          uStack_1f0 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_168);
          FUN_144a1c686(&local_168,0x3e45798ee0000000);
          auVar13._8_8_ = -(ulonglong)(0.0 <= dVar27 * dVar21);
          auVar13._0_8_ = -(ulonglong)(0.0 <= dVar37 * dVar18);
          auVar25 = blendvpd(_DAT_149936790,auVar38,auVar13);
          uVar11 = -(ulonglong)(0.0 <= dVar35 * dVar3);
          dVar22 = (double)(~uVar11 & 0xbff0000000000000 | uVar11 & 0x3ff0000000000000);
          dVar29 = auVar25._0_8_;
          local_158 = local_158 * dVar29;
          local_160 = local_160 * dVar29;
          local_168 = local_168 * dVar29;
          dVar29 = auVar25._8_8_;
          local_138 = local_138 * dVar29;
          local_140 = local_140 * dVar29;
          local_148 = dVar29 * local_148;
          local_118 = local_118 * dVar22;
          local_120 = local_120 * dVar22;
          local_128 = dVar22 * local_128;
          FUN_14481fd10(&local_288);
          dVar22 = local_278 * local_278 + local_288 * local_288;
          dVar29 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
          auVar23._0_8_ = dVar22 + dVar29;
          auVar23._8_8_ = dVar22 + dVar29;
          auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
          auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
          auVar25 = sqrtpd(auVar23,auVar23);
          auVar25 = divpd(auVar38,auVar25);
          auVar40._0_8_ = auVar25._0_8_ * local_278;
          auVar40._8_8_ = auVar25._8_8_ * dStack_270;
          auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar14);
          dVar32 = (double)((ulonglong)(local_288 * auVar25._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
          dVar28 = (double)((ulonglong)(dStack_280 * auVar25._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
          local_3b8 = local_108;
          dStack_3b0 = dStack_100;
          local_3a8 = local_f8;
          dStack_3a0 = 0.0;
        }
        dVar22 = local_328._8_8_ * auVar16._8_8_;
        local_398._8_4_ = SUB84(dVar21 * dVar27,0);
        local_398._0_8_ = dVar18 * dVar37;
        local_398._12_4_ = (int)((ulonglong)(dVar21 * dVar27) >> 0x20);
        auVar15._0_8_ = dVar32 * dVar32;
        auVar15._8_8_ = dVar28 * dVar28;
        dVar37 = auVar38._0_8_;
        dVar29 = auVar38._8_8_;
        dVar18 = dVar37 * dVar37 + auVar15._0_8_;
        dVar21 = dVar29 * dVar29 + auVar15._8_8_;
        auVar19._0_8_ = dVar18 + dVar21;
        auVar19._8_8_ = dVar18 + dVar21;
        local_388._8_4_ = SUB84(dVar22,0);
        local_388._0_8_ = dVar3 * dVar35;
        local_388._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        auVar16 = sqrtpd(auVar15,auVar19);
        auVar16 = divpd(_DAT_149934d80,auVar16);
        auVar20._0_8_ = auVar16._0_8_ * dVar37;
        auVar20._8_8_ = auVar16._8_8_ * dVar29;
        uVar11 = (ulonglong)(dVar28 * auVar16._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
        auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
        auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
        local_3c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar17);
        local_3d8._8_4_ = (int)uVar11;
        local_3d8._0_8_ =
             (ulonglong)(dVar32 * auVar16._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
        local_3d8._12_4_ = (int)(uVar11 >> 0x20);
        memset(param_2,0,0x84);
        FUN_14919dde6(param_2,local_3d8,*(undefined1 *)(param_3 + 0x211),
                      *(undefined1 *)(param_3 + 0x21c));
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_428);
    }
  }
  uVar6 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x10))(param_1 + 0x280);
  local_408 = 1;
  FUN_1444a0032(uVar6,param_2,param_3,*param_4);
  if ((local_e0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919fd68 FUN_14919fd68 body=417 status=ok
// SIG undefined FUN_14919fd68(void)

int FUN_14919fd68(longlong *param_1,byte *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_64;
  byte *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x14)) {
    FUN_1414a87e6(param_1 + 4);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)((longlong)param_1 + 0x14);
  }
  local_70 = param_1 + 4;
  if ((int)param_1[5] != *(int *)((longlong)param_1 + 0x54)) {
    lVar2 = *(longlong *)(param_2 + 4);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar7 = param_1 + 0xb;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0xc];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_1[0xd] - 1U &
                    (uint)*param_2 +
                    ((int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                     (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 10) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *local_70 + (longlong)iVar6 * 0x18;
        if ((*(longlong *)(lVar4 + 4) == lVar2) &&
           (*(byte *)(*local_70 + (longlong)iVar6 * 0x18) == *param_2)) {
          if ((int *)(lVar4 + 0xc) != (int *)0x0 && lVar4 != 0) {
            iVar6 = *(int *)(lVar4 + 0xc);
            goto LAB_14919fe32;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_64 = 0;
  if (0 < (int)param_1[1]) {
    do {
      lVar2 = *param_1;
      lVar4 = (longlong)local_64;
      pbVar1 = (byte *)(lVar4 * 0x110 + lVar2);
      local_60 = pbVar1;
      local_58 = &local_64;
      FUN_140fe526c(local_70,local_4c,&local_60,0);
      if ((*(longlong *)(lVar2 + 4 + lVar4 * 0x110) == *(longlong *)(param_2 + 4)) &&
         (iVar6 = local_64, *pbVar1 == *param_2)) goto LAB_14919fe32;
      local_64 = local_64 + 1;
    } while (local_64 < (int)param_1[1]);
  }
  iVar6 = -1;
LAB_14919fe32:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 14919ff0a FUN_14919ff0a body=482 status=ok
// SIG undefined FUN_14919ff0a(void)

void FUN_14919ff0a(longlong param_1,undefined8 *param_2,void *param_3,char param_4,
                  undefined4 *param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined1 local_110 [132];
  char local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6c [4];
  undefined8 local_68;
  longlong local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_6c[0] = 4;
  local_68 = *param_2;
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  uVar2 = FUN_140813180(lVar1,local_6c);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x10) == '\x04')) {
    if (*(char *)(param_1 + 0x8a0) == '\x01') {
      memcpy(local_110,param_3,0x84);
      local_88 = *param_5;
      uStack_84 = param_5[1];
      uStack_80 = param_5[2];
      uStack_7c = param_5[3];
      local_78 = *(undefined8 *)(param_5 + 4);
      local_70 = param_6;
      local_6f = param_7;
      local_6e = param_8;
      local_8c = param_4;
      local_60 = lVar1 + 0x10;
      local_58 = local_110;
      FUN_1491c975a(param_1 + 0x988,local_4c);
    }
    else {
      local_120 = param_8;
      local_128 = param_7;
      local_138 = param_6;
      local_130 = 0;
      FUN_1444a57a4(*(undefined8 *)(param_1 + 0x2f8),lVar1,param_3,1);
      if ((param_4 != '\0') && ((longlong)*(int *)(param_1 + 0x830) != 0)) {
        lVar3 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0x828) + 8 + lVar3) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x828) + lVar3) != 0)) {
            FUN_1491c9638(param_1 + 0x828,param_1,lVar1,param_5);
            break;
          }
          lVar3 = lVar3 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x830) * 0x10 != lVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a00ee FUN_1491a00ee body=314 status=ok
// SIG undefined FUN_1491a00ee(void)

void FUN_1491a00ee(longlong param_1,undefined8 *param_2,char *param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  uVar2 = FUN_140813180(lVar1);
  if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8) != 0)) {
    if (*param_3 != ' ') {
      lVar1 = *(longlong *)(param_1 + 0x2f8);
      uVar2 = FUN_140813180(lVar1,param_3);
      if ((((int)uVar2 < 0) || (*(int *)(lVar1 + 0xc0) <= (int)uVar2)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8) == 0))
      goto LAB_1491a0178;
    }
    if (*(char *)(param_1 + 0x8a0) == '\x01') {
      local_50 = *(undefined4 *)(param_3 + 8);
      local_40 = &local_58;
      local_58 = *(undefined8 *)param_3;
      local_4b = param_5;
      local_4c = (char)param_4;
      local_48 = param_2;
      FUN_1491cb6e6(param_1 + 0x9d8,local_34,&local_48,0);
    }
    else {
      local_60 = *(undefined4 *)(param_3 + 8);
      local_68 = *(undefined8 *)param_3;
      local_78 = *param_2;
      local_70 = *(undefined4 *)(param_2 + 1);
      local_88 = param_5;
      FUN_149190650(*(undefined8 *)(param_1 + 0x2f8),&local_78,&local_68,param_4);
    }
  }
LAB_1491a0178:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a022a FUN_1491a022a body=482 status=ok
// SIG undefined FUN_1491a022a(void)

void * FUN_1491a022a(longlong *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined1 local_1c8 [96];
  undefined1 local_168 [96];
  undefined1 local_108 [96];
  undefined1 local_a8 [104];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  memset(param_2,0,0x84);
  lVar3 = (**(code **)(*param_1 + 0x3b0))(param_1,param_3);
  if ((lVar3 == 0) || (param_1[0x5f] == 0)) goto LAB_1491a0289;
  if ((char)param_1[0x114] == '\x01') {
    iVar2 = FUN_14919fd68(param_1 + 0x123,lVar3 + 0x10);
    if (iVar2 != -1) {
      FUN_14449ec9a(param_1[0x5f],local_a8,lVar3,3);
      FUN_1449437a2(param_4,local_108,local_a8);
      FUN_1401261c4(param_1[0x5f],local_1c8,lVar3,1);
      FUN_1449437a2(local_108,local_168,local_1c8);
      puVar4 = local_1c8;
      FUN_1449437a2(local_168,puVar4,param_1[0x123] + (longlong)iVar2 * 0x110 + 0x80);
      uVar5 = *(undefined1 *)(lVar3 + 0x211);
      uVar6 = *(undefined1 *)(lVar3 + 0x21c);
      goto LAB_1491a03c3;
    }
  }
  else {
    local_1d8 = CONCAT44(local_1d8._4_4_,param_5);
    puVar4 = local_a8;
    FUN_1491ddf2c(param_1[0x5f],puVar4,lVar3,param_4);
    uVar5 = *(undefined1 *)(lVar3 + 0x211);
    uVar6 = *(undefined1 *)(lVar3 + 0x21c);
LAB_1491a03c3:
    FUN_14919dde6(param_2,puVar4,uVar5,uVar6);
  }
  cVar1 = (**(code **)(*param_1 + 0x3b8))(param_1);
  if (cVar1 != '\0') {
    local_1d8 = lVar3 + 0x2b8;
    FUN_1491c1c06(param_2,lVar3 + 0x220,*(undefined1 *)(lVar3 + 0x211),lVar3 + 0x234);
  }
LAB_1491a0289:
  if ((local_40 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a040e FUN_1491a040e body=327 status=ok
// SIG undefined FUN_1491a040e(void)

void FUN_1491a040e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined1 local_150 [132];
  undefined1 local_cc [132];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = (**(code **)(*param_1 + 0x3b0))();
  if (lVar1 != 0) {
    memset(local_150,0,0x84);
    FUN_14919dde6(local_150,param_3,*(undefined1 *)(lVar1 + 0x211),*(undefined1 *)(lVar1 + 0x21c));
    if ((longlong)(int)param_1[0x103] != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(param_1[0x102] + 8 + lVar2) != 0) &&
           (*(longlong *)(param_1[0x102] + lVar2) != 0)) {
          FUN_1491cbc3c(param_1 + 0x102,param_1,lVar1,local_150);
          break;
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)(int)param_1[0x103] * 0x10 != lVar2);
    }
    memcpy(local_cc,local_150,0x84);
    local_160 = param_7;
    local_170 = param_6;
    local_178 = param_5;
    local_168 = 0;
    (**(code **)(*param_1 + 0x3d8))(param_1,param_2,local_cc,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a0556 FUN_1491a0556 body=308 status=ok
// SIG undefined FUN_1491a0556(void)

undefined8 * FUN_1491a0556(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_c4;
  undefined1 local_b9;
  undefined1 local_b8 [132];
  undefined1 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(param_1 + 0x2f8);
  if (lVar3 == 0) {
    puVar4 = &DAT_14c846480;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
  }
  if (*(char *)(param_1 + 0x8a0) == '\x01') {
    local_34 = 4;
    local_30 = *param_3;
    uVar1 = FUN_140813180(lVar3);
    if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar3 + 0xc0))) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)uVar1 * 8), lVar3 != 0)) &&
       (*(char *)(lVar3 + 0x10) == '\x04')) {
      local_b9 = 1;
      FUN_14919f2a0(param_1,local_b8,lVar3);
      FUN_1491932b8(local_b8,param_2,*(undefined1 *)(lVar3 + 0x211),*(undefined1 *)(lVar3 + 0x21c));
      goto LAB_1491a0605;
    }
    lVar3 = *(longlong *)(param_1 + 0x2f8);
  }
  local_c8 = 4;
  local_c4 = *param_3;
  uVar2 = FUN_140813180(lVar3);
  FUN_144afced8(lVar3,param_2,uVar2,0);
LAB_1491a0605:
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491a068c FUN_1491a068c body=236 status=ok
// SIG undefined FUN_1491a068c(void)

undefined8 * FUN_1491a068c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_cc [132];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(char *)(param_1 + 0x8a0) == '\x01') {
    FUN_1491a077a(param_1,local_cc,param_3 + 0x14);
    FUN_1491932b8(local_cc,&local_148,*(undefined1 *)(param_3 + 0x211),
                  *(undefined1 *)(param_3 + 0x21c));
    local_48 = local_148;
    uStack_44 = uStack_144;
    uStack_40 = uStack_140;
    uStack_3c = uStack_13c;
    local_38 = local_138;
    uStack_34 = uStack_134;
    uStack_30 = uStack_130;
    uStack_2c = uStack_12c;
    FUN_1448052ee(&local_48,&local_e8);
    *param_2 = local_d8;
    param_2[1] = local_e8;
    param_2[2] = local_e0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_168);
  }
  FUN_1491a0846(*(undefined8 *)(param_1 + 0x2f8),param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491a077a FUN_1491a077a body=202 status=ok
// SIG undefined FUN_1491a077a(void)

undefined8 FUN_1491a077a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = CONCAT31(local_2c._1_3_,4);
  uStack_28 = (undefined4)*param_3;
  uStack_24 = (undefined4)((ulonglong)*param_3 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  uVar3 = FUN_140813180(lVar1);
  if (((((int)uVar3 < 0) || (*(int *)(lVar1 + 0xc0) <= (int)uVar3)) ||
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar3 * 8), lVar1 == 0)) ||
     (*(char *)(lVar1 + 0x10) != '\x04')) {
    uVar2 = *(undefined8 *)(param_1 + 0x2f8);
    local_38 = uStack_24;
    local_40 = CONCAT44(uStack_28,local_2c);
    uVar4 = FUN_140813180(uVar2);
    FUN_149181d3e(uVar2,param_2,uVar4,1);
  }
  else {
    local_2d = 1;
    FUN_14919f2a0(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a0846 FUN_1491a0846 body=191 status=ok
// SIG undefined FUN_1491a0846(void)

undefined8 * FUN_1491a0846(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  uVar1 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  if (param_3 != 0) {
    if (((param_4 == '\0') && (*(char *)(param_1 + 0x52c) == '\x01')) &&
       (*(char *)(param_3 + 0x3c1) == '\x01')) {
      FUN_1491f46a6(param_3 + 0x3c8,param_2,0,*(undefined1 *)(param_3 + 0x3c0));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    FUN_1491931aa(uVar1,&local_30,param_3,0);
    *param_2 = local_20;
    param_2[1] = local_30;
    param_2[2] = local_28;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491a0906 FUN_1491a0906 body=232 status=ok
// SIG undefined FUN_1491a0906(void)

longlong * FUN_1491a0906(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  uVar1 = *(uint *)((longlong)plVar2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  plVar6 = (longlong *)(param_1 + 0x300);
  if (((*(uint *)(lVar4 + 8) >> 0x19 & 1) != 0) || (*(int *)(param_1 + 0x308) != 0))
  goto LAB_1491a0951;
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
    if (lVar4 != 0) goto LAB_1491a099f;
LAB_1491a09d9:
    lVar4 = 0;
  }
  else {
LAB_1491a099f:
    lVar5 = FUN_1401242c6();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1491a09d9;
  }
  if (lVar4 != 0) {
    plVar6 = (longlong *)(lVar4 + 0x300);
  }
LAB_1491a0951:
  if ((longlong)(int)plVar6[1] != 0) {
    lVar4 = *plVar6;
    lVar5 = (longlong)(int)plVar6[1] * 0x28;
    do {
      lVar3 = FUN_1491a1b8e(lVar4);
      if (lVar3 == 0) {
        FUN_1491a09ee(lVar4);
      }
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  return plVar6;
}



// FUNCTION 1491a09ee FUN_1491a09ee body=28 status=ok
// SIG undefined FUN_1491a09ee(void)

void FUN_1491a09ee(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 == 0) {
    return;
  }
  FUN_145886142();
  return;
}



// FUNCTION 1491a0a0a FUN_1491a0a0a body=109 status=ok
// SIG undefined FUN_1491a0a0a(void)

void FUN_1491a0a0a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    lVar1 = FUN_14449bdee(*(longlong *)(param_1 + 0x2f8),1);
    if (lVar1 != 0) {
      local_24[0] = 4;
      local_20 = *param_2;
      FUN_1491eb3b2(lVar1,local_24,param_3,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a0a78 FUN_1491a0a78 body=47 status=ok
// SIG undefined FUN_1491a0a78(void)

undefined8 FUN_1491a0a78(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    lVar1 = FUN_14449bdee(*(longlong *)(param_1 + 0x2f8),1);
    if (lVar1 != 0) {
      uVar2 = FUN_1491a0aa8(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1491a0aa8 FUN_1491a0aa8 body=89 status=ok
// SIG undefined FUN_1491a0aa8(void)

undefined4 FUN_1491a0aa8(void)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  uVar1 = FUN_14601dce2(0,local_28,0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a0b02 FUN_1491a0b02 body=191 status=ok
// SIG undefined FUN_1491a0b02(void)

longlong * FUN_1491a0b02(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FUN_14449fb8c(*(longlong *)(param_1 + 0x2f8),&local_48,4);
    lVar3 = local_48;
    if ((longlong)local_40 != 0) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar3 + lVar4);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x14);
        lVar4 = lVar4 + 8;
      } while ((longlong)local_40 * 8 != lVar4);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491a0bc2 FUN_1491a0bc2 body=60 status=ok
// SIG undefined FUN_1491a0bc2(void)

undefined8 FUN_1491a0bc2(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x5f] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x3b0))();
    if (lVar1 != 0) {
      uVar2 = FUN_1491df834(param_1[0x5f],lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1491a0bfe FUN_1491a0bfe body=160 status=ok
// SIG undefined FUN_1491a0bfe(void)

void FUN_1491a0bfe(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0x5e0) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x5d8) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x5d8) + lVar1) != 0)) {
        *(int *)(param_1 + 2000) = *(int *)(param_1 + 2000) + 1;
        FUN_1446f57c6(&DAT_14cc074d8,local_28);
        FUN_1491c9588(param_1 + 0x5d8,param_1,local_28);
        *(int *)(param_1 + 2000) = *(int *)(param_1 + 2000) + -1;
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x5e0) * 0x10 != lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491a0ca0 FUN_1491a0ca0 body=158 status=ok
// SIG undefined FUN_1491a0ca0(void)

void FUN_1491a0ca0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1491cbdc0(param_1,&local_38);
  if (local_38 != 0) {
    FUN_14919c8d2(local_38,param_2,param_3,param_4);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  FUN_14918b3e4(param_3 + 0x210);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14918079a(param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a0d40 FUN_1491a0d40 body=168 status=ok
// SIG undefined FUN_1491a0d40(void)

void FUN_1491a0d40(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1491c96fa(param_2,0);
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FUN_149192f24(*(longlong *)(param_1 + 0x2f8),&local_28,1);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a0dea FUN_1491a0dea body=94 status=ok
// SIG undefined FUN_1491a0dea(void)

void FUN_1491a0dea(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_140730f78(param_1,iVar2);
  }
  FUN_1491c0d46((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1491a0e48 FUN_1491a0e48 body=185 status=ok
// SIG undefined FUN_1491a0e48(void)

undefined8 FUN_1491a0e48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a0f02 FUN_1491a0f02 body=255 status=ok
// SIG undefined FUN_1491a0f02(void)

void FUN_1491a0f02(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  code *local_50;
  undefined8 *local_48;
  longlong local_40;
  char local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_68;
  local_50 = FUN_140036a08;
  lVar1 = FUN_144a773aa(&local_50,&DAT_14c7585d0);
  local_50 = (code *)(lVar1 + 0x10);
  local_48 = *(undefined8 **)(lVar1 + 0x10);
  local_40 = *(longlong *)(lVar1 + 0x20);
  local_38 = '\0';
  local_30 = *(undefined8 *)(lVar1 + 0x28);
  *(code ***)(lVar1 + 0x28) = &local_50;
  *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uVar2 = FUN_1478f84a6(param_2);
  FUN_1448859f0(&local_68,uVar2);
  FUN_149197e2e(param_1,&local_68);
  if (local_38 == '\0') {
    local_38 = '\x01';
    *(int *)(local_50 + 0x20) = *(int *)(local_50 + 0x20) + -1;
    if (local_40 != *(longlong *)(local_50 + 0x10)) {
      FUN_14004673c();
    }
    *(undefined8 **)local_50 = local_48;
    *(undefined8 *)(local_50 + 0x18) = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a1002 FUN_1491a1002 body=251 status=ok
// SIG undefined FUN_1491a1002(void)

void FUN_1491a1002(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  code *local_50;
  undefined8 *local_48;
  longlong local_40;
  char local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_68;
  local_50 = FUN_140036a08;
  lVar1 = FUN_144a773aa(&local_50,&DAT_14c7585d0);
  local_50 = (code *)(lVar1 + 0x10);
  local_48 = *(undefined8 **)(lVar1 + 0x10);
  local_40 = *(longlong *)(lVar1 + 0x20);
  local_38 = '\0';
  local_30 = *(undefined8 *)(lVar1 + 0x28);
  *(code ***)(lVar1 + 0x28) = &local_50;
  *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1448859f0(&local_68,*(undefined8 *)(param_2 + 0x6a0));
  FUN_149197e2e(param_1,&local_68);
  if (local_38 == '\0') {
    local_38 = '\x01';
    *(int *)(local_50 + 0x20) = *(int *)(local_50 + 0x20) + -1;
    if (local_40 != *(longlong *)(local_50 + 0x10)) {
      FUN_14004673c();
    }
    *(undefined8 **)local_50 = local_48;
    *(undefined8 *)(local_50 + 0x18) = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a10fe FUN_1491a10fe body=80 status=ok
// SIG undefined FUN_1491a10fe(void)

void FUN_1491a10fe(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 == '\0') {
    lVar2 = FUN_144a7a45a(param_2);
    if (lVar2 != 0) {
      uVar1 = FUN_144a7a45a(param_2);
      lVar2 = 0x440;
      goto LAB_1491a111c;
    }
  }
  uVar1 = FUN_144a81888(param_2);
  lVar2 = 0x458;
LAB_1491a111c:
                    /* WARNING: Could not recover jumptable at 0x0001491a112f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2))(param_1,uVar1,*(code **)(*param_1 + lVar2));
  return;
}



// FUNCTION 1491a114e FUN_1491a114e body=56 status=ok
// SIG undefined FUN_1491a114e(void)

void FUN_1491a114e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x310))(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001491a117c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x460))(param_1,uVar1,*(code **)(*param_1 + 0x460));
    return;
  }
  return;
}



// FUNCTION 1491a1186 FUN_1491a1186 body=206 status=ok
// SIG undefined FUN_1491a1186(void)

void FUN_1491a1186(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_188 [40];
  longlong local_160;
  longlong local_158;
  undefined1 local_150 [280];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  local_158 = param_1;
  FUN_148810f6a(local_150);
  iVar3 = *(int *)(lVar1 + 0xc0);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + lVar4 * 8);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\x01')) {
        local_160 = lVar2;
        FUN_1444958da(&local_158,&local_160);
        iVar3 = *(int *)(lVar1 + 0xc0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  FUN_14074f6ec(local_150);
  *(undefined1 *)(param_1 + 0x7c9) = 0;
  FUN_141357988(param_1);
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a1256 FUN_1491a1256 body=137 status=ok
// SIG undefined FUN_1491a1256(void)

void FUN_1491a1256(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_1[0x5f] != 0) && (param_1[0xb] != 0)) {
    return;
  }
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar1 = (longlong *)param_1[2];
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    if (((param_1[0xb] != 0) && (DAT_14c950c29 == '\x01')) && (*(longlong *)(lVar2 + 0x58) != 0)) {
      FUN_1456cec3c();
    }
  }
  else {
    lVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001491a12dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,lVar2);
  return;
}



// FUNCTION 1491a12e0 FUN_1491a12e0 body=221 status=ok
// SIG undefined FUN_1491a12e0(void)

void FUN_1491a12e0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x2f8) + 0x20) == param_1) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x2f8) + 0x2f0,param_1);
    lVar3 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x170))
              (*(longlong **)(param_1 + 0x2f8),0,DAT_14c951640,0x34);
    lVar2 = *(longlong *)(param_1 + 0x2f8);
    FUN_144757f48(lVar2,0x40000000);
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    do {
      uVar1 = *(uint *)(lVar3 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar4 = uVar1 == *(uint *)(lVar3 + 8);
      if (bVar4) {
        *(uint *)(lVar3 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar4);
  }
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
  *(longlong *)(param_1 + 0x2f8) = lVar2;
  return;
}



// FUNCTION 1491a13bd FUN_1491a13bd body=182 status=ok
// SIG undefined FUN_1491a13bd(void)

undefined8 FUN_1491a13bd(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459f5f3a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a1474 FUN_1491a1474 body=76 status=ok
// SIG undefined FUN_1491a1474(void)

int * FUN_1491a1474(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xa38) != 0) {
    piVar1 = *(int **)(param_1 + 0xa30);
    lVar2 = (longlong)*(int *)(param_1 + 0xa38) * 0x18;
    do {
      if ((((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) && (piVar1[2] == param_2[2])) &&
         (piVar1[3] == param_2[3])) {
        return piVar1;
      }
      piVar1 = piVar1 + 6;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return (int *)0x0;
}



// FUNCTION 1491a14ca FUN_1491a14ca body=1382 status=ok
// SIG undefined FUN_1491a14ca(void)

undefined8 FUN_1491a14ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  void *_Src;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  void *local_1a0;
  int local_198;
  undefined4 local_194;
  undefined8 local_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_15c;
  longlong local_150 [9];
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (((*(int *)(param_1 + 0x8b0) == *(int *)(param_1 + 0x8dc)) &&
      (*(int *)(param_1 + 0x900) == *(int *)(param_1 + 0x92c))) && (*(int *)(param_1 + 0x970) == 0))
  {
    uVar7 = 0;
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x8a8);
    iVar9 = 0;
    local_168 = 0;
    local_160 = 1;
    local_15c = 0xffffffffffffffff;
    local_150[0] = 0;
    local_150[1] = 0;
    local_150[2] = 0;
    local_150[3] = 0;
    local_150[4] = 0;
    local_150[5] = 0;
    local_150[6] = 0;
    local_150[7] = 0;
    local_150[8] = 0;
    uStack_108 = 0;
    uStack_107 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    plVar1 = (longlong *)(param_2 + 0x20);
    local_170 = param_1;
    FUN_1417977a6(local_150,plVar1);
    local_188 = 0;
    uStack_180 = 0;
    lVar11 = *(longlong *)(param_2 + 0x30);
    lVar12 = param_1 + 0x8b8;
    local_80 = 0x100000000;
    local_70._0_4_ = 0xffffffff;
    local_70._4_4_ = 0;
    uStack_68 = 0;
    local_1d8 = param_2;
    lStack_78 = lVar12;
    if (*(int *)(param_1 + 0x8d0) != 0) {
      FUN_1449c0562(&local_80);
      iVar9 = *(int *)(param_1 + 0x8d0);
    }
    local_90._0_4_ = (uint)local_70;
    local_90._4_4_ = local_70._4_4_;
    uStack_88 = CONCAT44(uStack_64,uStack_68);
    local_a0 = local_80;
    lStack_98 = lStack_78;
    local_1d0 = param_1;
    local_a8 = plVar2;
    if ((local_70._4_4_ != iVar9) || (lStack_78 != lVar12)) {
      do {
        uVar4 = uStack_180;
        iVar6 = *(int *)(*local_a8 + (longlong)local_90._4_4_ * 0x80);
        if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar11 + 0x68))) {
          iVar6 = *(int *)(*(longlong *)(lVar11 + 0x60) + (longlong)iVar6 * 4);
          if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar11 + 0x88))) {
            iVar6 = *(int *)(*(longlong *)(lVar11 + 0x80) + (longlong)iVar6 * 4);
            lVar14 = (longlong)iVar6;
            if (lVar14 != -1) {
              puVar13 = (undefined8 *)(*local_a8 + (longlong)local_90._4_4_ * 0x80 + 0x10);
              puVar10 = (undefined8 *)(lVar14 * 0x60 + local_150[0]);
              for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                *puVar10 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar10 = puVar10 + 1;
              }
              *(undefined1 *)(local_150[3] + lVar14) = 1;
              lVar14 = (longlong)(int)uStack_180;
              uVar5 = (int)uStack_180 + 1;
              uStack_180 = CONCAT44(uStack_180._4_4_,uVar5);
              if (uStack_180._4_4_ < uVar5) {
                FUN_1408f8cfa(&local_188,uVar4 & 0xffffffff);
              }
              *(int *)(local_188 + lVar14 * 4) = iVar6;
            }
          }
        }
        local_90._0_4_ = (uint)local_90 & ~local_a0._4_4_;
        FUN_1449c0562(&local_a0);
      } while (local_a8 != plVar2 || (lStack_98 != lVar12 || local_90._4_4_ != iVar9));
    }
    lVar12 = local_1d8;
    local_1a0 = (void *)0x0;
    local_198 = *(int *)(local_1d8 + 0x28);
    lVar11 = (longlong)local_198;
    _Src = *(void **)(local_1d8 + 0x20);
    if (lVar11 == 0) {
      local_194 = 0;
    }
    else {
      FUN_14470ea6a(&local_1a0,local_198,0);
      memcpy(local_1a0,_Src,lVar11 * 0x60);
    }
    local_190 = *(undefined8 *)(lVar12 + 0x30);
    FUN_144b1e05a(local_150);
    lVar11 = local_1d0;
    if (*(char *)(lVar12 + 0x98) == '\x01') {
      FUN_1433edd58(plVar1);
    }
    else {
      FUN_1448859f0(plVar1,*(undefined8 *)(lVar12 + 0x30));
    }
    if ((longlong)(int)uStack_180 != 0) {
      lVar12 = 0;
      do {
        lVar14 = (longlong)*(int *)(local_188 + lVar12) * 0x60;
        puVar13 = (undefined8 *)((longlong)local_1a0 + lVar14);
        puVar10 = (undefined8 *)(lVar14 + *plVar1);
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar10 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar10 = puVar10 + 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)(int)uStack_180 * 4 != lVar12);
    }
    local_1b0 = 0;
    plVar1 = (longlong *)(lVar11 + 0x8f8);
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    iVar9 = *(int *)(lVar11 + 0x900) - *(int *)(lVar11 + 0x92c);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar9 != 0) {
      FUN_14480ffb8(&local_1c8);
    }
    lVar12 = lVar11 + 0x908;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    lStack_78 = lVar12;
    if (*(int *)(lVar11 + 0x920) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar9 = *(int *)(lVar11 + 0x920);
    }
    uStack_88 = CONCAT44(uStack_64,uStack_68);
    local_90 = local_70;
    uVar7 = local_90;
    local_a0 = local_80;
    lStack_98 = lStack_78;
    local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_a8 = plVar1;
    if ((local_90._4_4_ != iVar9) || (lStack_78 != lVar12)) {
      iVar6 = local_90._4_4_;
      local_90 = uVar7;
      do {
        uVar4 = uStack_1c0;
        puVar13 = (undefined8 *)((longlong)iVar6 * 0x14 + *local_a8);
        lVar14 = (longlong)(int)uStack_1c0;
        uVar5 = (int)uStack_1c0 + 1;
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar5);
        if (uStack_1c0._4_4_ < uVar5) {
          FUN_1406de67a(&local_1c8,uVar4 & 0xffffffff);
        }
        lVar14 = lVar14 * 0x10;
        uVar3 = *(undefined4 *)(puVar13 + 1);
        *(undefined8 *)(local_1c8 + lVar14) = *puVar13;
        *(undefined4 *)(local_1c8 + 8 + lVar14) = uVar3;
        *(undefined1 *)(local_1c8 + 0xc + lVar14) = 0;
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar6 = local_90._4_4_;
        uVar7 = local_90;
      } while (local_a8 != plVar1 || (lStack_98 != lVar12 || local_90._4_4_ != iVar9));
    }
    local_90 = uVar7;
    lVar12 = local_1d8;
    FUN_1449802a2(local_1d8 + 0x38,&local_1c8);
    FUN_140e486fa(lVar12 + 0x58,lVar11 + 0x948);
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    FUN_1447166b4(&uStack_e8);
    uVar7 = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a1a64 FUN_1491a1a64 body=297 status=ok
// SIG undefined FUN_1491a1a64(void)

void FUN_1491a1a64(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_145bf22f8();
  *(undefined8 *)(param_1 + 0x100) = *param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x10c) = uVar4;
  *(undefined4 *)(param_1 + 0x110) = uVar5;
  *(undefined4 *)(param_1 + 0x114) = uVar6;
  FUN_144a787a6(param_1 + 0x118,param_2 + 3);
  lVar7 = FUN_1491a1b8e(param_2);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  *(longlong *)(param_1 + 0x138) = lVar7;
  plVar1 = (longlong *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) < 0) {
    FUN_1402191ca(plVar1,0);
    lVar7 = *(longlong *)(param_1 + 0x138);
  }
  if ((lVar7 != 0) && (iVar2 = *(int *)(lVar7 + 0x130), (longlong)iVar2 != 0)) {
    lVar7 = *(longlong *)(lVar7 + 0x128);
    lVar8 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x130);
      *(uint *)(param_1 + 0x130) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x134) < iVar3 + 1U) {
        FUN_1446f84a2(plVar1,iVar3);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar7 + lVar8);
      lVar8 = lVar8 + 0xa0;
    } while ((longlong)iVar2 * 0xa0 != lVar8);
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491a1b8e FUN_1491a1b8e body=193 status=ok
// SIG undefined FUN_1491a1b8e(void)

longlong FUN_1491a1b8e(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_145886142();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1491a1c50 FUN_1491a1c50 body=1299 status=ok
// SIG undefined FUN_1491a1c50(void)

longlong FUN_1491a1c50(longlong param_1,undefined8 *param_2,wchar_t **param_3)

{
  void *pvVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_1490db07e(param_1,param_2,0);
  if (lVar4 != 0) goto LAB_1491a1c86;
  lVar4 = FUN_1491a1b8e(param_1 + 0x100);
  if (lVar4 == 0) {
    if ((param_3 != (wchar_t **)0x0) && (*(int *)(param_3 + 1) < 2)) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_2;
      }
      FUN_140002266(&local_68,
                    L"User data path \'%s\' could not be found (ShapeLibrary not provided)",puVar6);
      if (&local_68 == param_3) {
LAB_1491a1f7d:
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
LAB_1491a1f37:
        if (*param_3 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        *param_3 = local_68;
        *(int *)(param_3 + 1) = local_60;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
      }
    }
LAB_1491a1f5a:
    lVar4 = 0;
    goto LAB_1491a1c86;
  }
  FUN_140056680(&local_68,L"ShapeLibrary");
  pwVar2 = local_68;
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == local_60) {
    bVar8 = true;
    if (1 < iVar3) {
      iVar3 = wcscmp((wchar_t *)*param_2,local_68);
      bVar8 = iVar3 == 0;
    }
  }
  else {
    bVar8 = local_60 + iVar3 == 1;
  }
  if (pwVar2 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar2);
  }
  if (bVar8) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc06c48) && (FUN_144b3d300(&DAT_14cc06c48), DAT_14cc06c48 == -1)) {
      FUN_1446f470e(&local_68,L"ShapeLibraryCached",1);
      uVar5 = FUN_145a926dc();
      DAT_14cc06c40 = FUN_1490db7a0(uVar5,&local_68);
      _Init_thread_footer(&DAT_14cc06c48);
    }
    local_48 = *(longlong *)(param_1 + 0x138);
    local_50 = DAT_14cc06c40;
LAB_1491a1d7f:
    local_68 = (wchar_t *)0x0;
    local_60 = *(int *)(param_2 + 1);
    lVar4 = (longlong)local_60;
    pvVar1 = (void *)*param_2;
    if (lVar4 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar1,lVar4 * 2);
    }
  }
  else {
    FUN_140056680(&local_68,L"DefaultShape");
    pwVar2 = local_68;
    iVar3 = *(int *)(param_2 + 1);
    if (iVar3 == local_60) {
      bVar8 = true;
      if (1 < iVar3) {
        iVar3 = wcscmp((wchar_t *)*param_2,local_68);
        bVar8 = iVar3 == 0;
      }
    }
    else {
      bVar8 = local_60 + iVar3 == 1;
    }
    if (pwVar2 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar2);
    }
    if (!bVar8) {
      FUN_140056680(&local_68,L"ShapeNames");
      pwVar2 = local_68;
      iVar3 = *(int *)(param_2 + 1);
      if (iVar3 == local_60) {
        bVar8 = true;
        if (1 < iVar3) {
          iVar3 = wcscmp((wchar_t *)*param_2,local_68);
          bVar8 = iVar3 == 0;
        }
      }
      else {
        bVar8 = local_60 + iVar3 == 1;
      }
      if (pwVar2 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar2);
      }
      if (!bVar8) {
        if ((param_3 != (wchar_t **)0x0) && (*(int *)(param_3 + 1) < 2)) {
          if (*(int *)(param_2 + 1) == 0) {
            puVar6 = &DAT_149dfb77a;
          }
          else {
            puVar6 = (undefined2 *)*param_2;
          }
          FUN_140002266(&local_68,L"UserData path \'%s\' could not be found.",puVar6);
          if (&local_68 != param_3) goto LAB_1491a1f37;
          goto LAB_1491a1f7d;
        }
        goto LAB_1491a1f5a;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc06c68) && (FUN_144b3d300(&DAT_14cc06c68), DAT_14cc06c68 == -1))
      {
        FUN_1446f470e(&local_68,L"ShapeNames",1);
        uVar5 = FUN_145a926dc();
        DAT_14cc06c60 = FUN_1490db7a0(uVar5,&local_68);
        _Init_thread_footer(&DAT_14cc06c68);
      }
      local_48 = param_1 + 0x128;
      local_50 = DAT_14cc06c60;
      goto LAB_1491a1d7f;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc06c58) && (FUN_144b3d300(&DAT_14cc06c58), DAT_14cc06c58 == -1)) {
      FUN_1446f470e(&local_68,L"ShapeName",1);
      if (DAT_14cc070d0 == 0) {
        uVar5 = FUN_1408c25db();
        DAT_14cc070d0 = FUN_140002ddd(FUN_1466cb16a,uVar5,L"ControlRigShapeDefinition");
      }
      DAT_14cc06c50 = FUN_1490db7a0(DAT_14cc070d0,&local_68);
      _Init_thread_footer(&DAT_14cc06c58);
    }
    uVar5 = DAT_14cc06c50;
    lVar4 = FUN_1491a1b8e(param_1 + 0x100);
    local_68 = (wchar_t *)0x0;
    local_60 = *(int *)(param_2 + 1);
    lVar7 = (longlong)local_60;
    pvVar1 = (void *)*param_2;
    if (lVar7 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar1,lVar7 * 2);
    }
    local_50 = uVar5;
    local_48 = lVar4 + 0x30;
  }
  local_58 = 0;
  lVar4 = FUN_1490db7be(param_1,&local_68);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1491a1c86:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1491a2164 FUN_1491a2164 body=497 status=ok
// SIG undefined FUN_1491a2164(void)

undefined8 * FUN_1491a2164(longlong *param_1,undefined8 *param_2,undefined8 **param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_1490db108(param_1,param_2,0);
  if (*(int *)(puVar1 + 1) != 0) goto LAB_1491a219a;
  lVar2 = FUN_1491a1b8e(param_1 + 0x20);
  if (lVar2 == 0) {
    puVar1 = &DAT_14cc00b50;
    if ((param_3 == (undefined8 **)0x0) || (1 < *(int *)(param_3 + 1))) goto LAB_1491a219a;
    if (*(int *)(param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    FUN_140002266(&local_48,L"User data path \'%s\' could not be found (ShapeLibrary not provided)",
                  puVar6);
    if (&local_48 != param_3) {
      if (*param_3 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      *param_3 = local_48;
      *(undefined4 *)(param_3 + 1) = local_40;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
      goto LAB_1491a219a;
    }
  }
  else {
    if (1 < *(int *)(param_2 + 1)) {
      puVar1 = &DAT_14cc00b50;
      goto LAB_1491a219a;
    }
    FUN_140056680(&local_48,L"ShapeLibrary");
    uVar3 = (**(code **)(*param_1 + 0x2b8))(param_1,&local_48,param_3);
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_48,L"DefaultShape");
    uVar4 = (**(code **)(*param_1 + 0x2b8))(param_1,&local_48,param_3);
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_48,L"ShapeNames");
    uVar5 = (**(code **)(*param_1 + 0x2b8))(param_1,&local_48,param_3);
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    local_48 = (undefined8 *)0x0;
    local_40 = 3;
    FUN_1490f0c7a(&local_48,3,0);
    *local_48 = uVar3;
    local_48[1] = uVar4;
    local_48[2] = uVar5;
    puVar1 = (undefined8 *)FUN_1490dc242(param_1,param_2,&local_48);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491a219a:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1;
}



// FUNCTION 1491a2356 FUN_1491a2356 body=115 status=ok
// SIG undefined FUN_1491a2356(void)

void FUN_1491a2356(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((*(byte *)(param_2 + 0x28) & 4) != 0) && ((*(byte *)(param_2 + 0x29) & 1) != 0)) &&
     ((*(longlong *)(param_2 + 0x68) == 0 ||
      (*(longlong *)(*(longlong *)(param_2 + 0x68) + 0x10) == 0)))) {
    lVar1 = *(longlong *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    FUN_1490dab74(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x138) = lVar1;
    return;
  }
  FUN_1490dab74(param_1);
  return;
}



// FUNCTION 1491a23da FUN_1491a23da body=252 status=ok
// SIG undefined FUN_1491a23da(void)

void FUN_1491a23da(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_58 = local_41;
  FUN_1491a2cc2(param_1,local_40);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a24d8 FUN_1491a24d8 body=241 status=ok
// SIG undefined FUN_1491a24d8(void)

void FUN_1491a24d8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = uStack_30;
  lVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  local_40 = (int)uStack_30;
  if ((int)uStack_30 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1491cc8d2(&local_48,uStack_30 & 0xffffffff);
    FUN_1491cc93c(local_48,lVar1,uVar2 & 0xffffffff);
  }
  FUN_1491a25ca(param_1,&local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a25ca FUN_1491a25ca body=849 status=ok
// SIG undefined FUN_1491a25ca(void)

void FUN_1491a25ca(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1c8 [40];
  longlong *local_1a0;
  undefined8 local_198;
  int local_190;
  undefined4 local_18c;
  longlong local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined1 local_104;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_e8 [12];
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  cVar4 = FUN_1491ab38c(param_1,L"AddMappedComponents");
  if (cVar4 == '\0') goto LAB_1491a260d;
  local_188 = 0;
  uStack_180 = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 == 0) {
    local_190 = 0;
LAB_1491a2672:
    local_198 = 0;
    local_18c = 0;
  }
  else {
    lVar1 = *param_2;
    lVar8 = 0;
    local_1a0 = param_2;
    do {
      lVar10 = *(longlong *)(lVar1 + lVar8);
      if ((lVar10 != 0) && (*(longlong *)(lVar1 + 8 + lVar8) != 0)) {
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        lStack_150 = 0;
        local_118 = 0;
        local_110 = 0xffffffff;
        local_10c = 0;
        local_104 = 1;
        local_100 = 0;
        local_f8 = 1;
        puVar9 = &DAT_14c846480;
        puVar11 = local_e8;
        for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        local_88 = 0x3f800000;
        local_84 = 0;
        local_80 = 0;
        local_78 = 0xffffffffffffffff;
        lVar6 = *(longlong *)(lVar10 + 0xa8);
        if ((lVar6 == 0) || (lVar6 == *(longlong *)(param_1 + 0xa8))) {
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
        }
        else {
          FUN_1400bbfc4(&local_178,lVar6);
          uStack_130 = CONCAT44(uStack_174,local_178);
          local_128 = CONCAT44(uStack_16c,uStack_170);
          if (uStack_120 != 0) {
            FUN_1400020a8();
          }
          uStack_120 = CONCAT44(uStack_164,local_168);
          local_118 = CONCAT44(uStack_15c,uStack_160);
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if (cVar4 != '\0') {
            uVar5 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar5 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
              local_138 = 0;
              goto LAB_1491a2816;
            }
          }
          FUN_14485c47a(&local_138,lVar6);
        }
LAB_1491a2816:
        FUN_1491ab4e2(&local_158,lVar10);
        uVar3 = uStack_180;
        local_100 = *(undefined8 *)(lVar1 + 8 + lVar8);
        local_104 = *(undefined1 *)(lVar1 + 0x10 + lVar8);
        local_f8 = *(undefined1 *)(lVar1 + 0x11 + lVar8);
        lVar10 = (longlong)(int)uStack_180;
        uVar5 = (int)uStack_180 + 1;
        uStack_180 = CONCAT44(uStack_180._4_4_,uVar5);
        if (uStack_180._4_4_ < uVar5) {
          FUN_1491ce3d2(&local_188,uVar3 & 0xffffffff);
        }
        FUN_1491cca56(lVar10 * 0xf0 + local_188,&local_158);
        if (uStack_120 != 0) {
          FUN_1400020a8();
        }
        if (lStack_150 != 0) {
          FUN_1400020a8();
        }
      }
      uVar3 = uStack_180;
      lVar10 = local_188;
      param_2 = local_1a0;
      lVar8 = lVar8 + 0x18;
    } while ((longlong)(int)lVar2 * 0x18 != lVar8);
    local_190 = (int)uStack_180;
    local_198 = 0;
    if ((int)uStack_180 == 0) goto LAB_1491a2672;
    FUN_1491cc9a8(&local_198,uStack_180 & 0xffffffff,0);
    FUN_1491cca1a(local_198,lVar10,uVar3 & 0xffffffff);
  }
  FUN_1491a2a20(param_1,&local_198);
  FUN_145dea87b(local_188,uStack_180 & 0xffffffff);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
LAB_1491a260d:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a291c FUN_1491a291c body=258 status=ok
// SIG undefined FUN_1491a291c(void)

void FUN_1491a291c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = uStack_30;
  lVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  local_40 = (int)uStack_30;
  if ((int)uStack_30 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1491cc9a8(&local_48,uStack_30 & 0xffffffff,0);
    FUN_1491cca1a(local_48,lVar1,uVar2 & 0xffffffff);
  }
  FUN_1491a2a20(param_1,&local_48);
  FUN_145dea87b(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a2a20 FUN_1491a2a20 body=97 status=ok
// SIG undefined FUN_1491a2a20(void)

void FUN_1491a2a20(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_1491ab38c(param_1,L"AddMappedElements");
  if (cVar1 != '\0') {
    FUN_1491ab484(param_1 + 0x698,param_2);
    FUN_1491a96aa(param_1);
    FUN_14448b00a(param_1);
  }
  FUN_145dea87b(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491a2a82 FUN_1491a2a82 body=575 status=ok
// SIG undefined FUN_1491a2a82(void)

void FUN_1491a2a82(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined1 local_59;
  void *local_58;
  ulonglong uStack_50;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_59 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  pvVar2 = local_58;
  uVar1 = local_59;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_50;
  local_68 = (int)uStack_50;
  if (lVar3 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1491ccc00(&local_70,uStack_50 & 0xffffffff,0);
    memcpy(local_70,pvVar2,lVar3 << 4);
  }
  pvVar2 = local_48;
  local_80 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_40;
  local_78 = (int)uStack_40;
  if (lVar3 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1491ccb9e(&local_80,uStack_40 & 0xffffffff,0);
    memcpy(local_80,pvVar2,lVar3 << 4);
  }
  local_88 = uVar1;
  FUN_1491a2cc2(param_1,local_38,&local_80,&local_70);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a2cc2 FUN_1491a2cc2 body=2478 status=ok
// SIG undefined FUN_1491a2cc2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1491a2cc2(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5)

{
  void *pvVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  void **ppvVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  undefined8 local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  void **local_188;
  undefined8 uStack_180;
  undefined2 *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  void **ppvStack_150;
  undefined8 local_148;
  longlong alStack_140 [2];
  undefined2 *puStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined1 local_104;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_e8 [12];
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((param_2 == 0) || (cVar3 = FUN_1491ab38c(param_1,L"AddMappedSkeletalMesh"), cVar3 == '\0'))
  goto LAB_1491a2cfa;
  lVar6 = FUN_1491a88a2(param_1);
  if (lVar6 == 0) {
    local_148 = 0;
    alStack_140[0] = 0;
    local_158 = 0;
    ppvStack_150 = (void **)0x0;
    alStack_140[1] = 0;
    FUN_14485c47a(&local_158,param_2);
    FUN_1491ab620(&ppvStack_150,param_3);
    FUN_1491ab678(alStack_140,param_4);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
    local_178 = (undefined2 *)0x0;
    FUN_14485c47a(&local_178,param_1);
    plVar7 = (longlong *)
             FUN_1491ccdba((uint)((ulonglong)local_178 >> 0x20) ^ (uint)local_178,&local_178);
    iVar5 = (int)plVar7[1];
    *(uint *)(plVar7 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar7 + 0xc) < iVar5 + 1U) {
      FUN_1491ce514(plVar7,iVar5);
    }
    FUN_1491ce466((longlong)iVar5 * 0x28 + *plVar7,&local_158);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
    ppvVar10 = ppvStack_150;
    if (alStack_140[0] != 0) {
      FUN_1400020a8();
      ppvVar10 = ppvStack_150;
    }
  }
  else {
    local_188 = (void **)0x0;
    uStack_180 = 0;
    local_198 = (void *)0x0;
    local_190 = (int)param_3[1];
    lVar12 = (longlong)local_190;
    pvVar1 = (void *)*param_3;
    local_1c0 = param_1;
    if (lVar12 == 0) {
      local_18c = 0;
LAB_1491a2e81:
      plVar7 = (longlong *)FUN_144a81888(param_2);
      if (plVar7 != (longlong *)0x0) {
        lVar12 = (**(code **)(*plVar7 + 0x3f0))(plVar7);
        if (lVar12 == 0) {
          local_178 = (undefined2 *)0x0;
          uStack_170 = 0;
          FUN_1401031ac(plVar7,0,&local_178);
          puVar14 = local_178;
          if ((int)uStack_170 == 0) {
            puVar14 = &DAT_149dfb77a;
          }
          FUN_140002266(&local_158,L"%s does not have a Skeleton set.",puVar14);
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          if (local_178 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          lVar12 = *(longlong *)(lVar6 + 0x2f8);
          ppvStack_150 = &local_198;
          iVar5 = *(int *)(lVar12 + 0xc0);
          local_158 = param_2;
          if (0 < iVar5) {
            lVar8 = 0;
            do {
              puVar14 = *(undefined2 **)(*(longlong *)(lVar12 + 0xb8) + lVar8 * 8);
              if ((puVar14 != (undefined2 *)0x0) && (*(char *)(puVar14 + 8) == '\x01')) {
                local_178 = puVar14;
                FUN_144495d90(&local_158,&local_178);
                iVar5 = *(int *)(lVar12 + 0xc0);
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < iVar5);
          }
        }
      }
    }
    else {
      FUN_1491ccb9e(&local_198,local_190,0);
      memcpy(local_198,pvVar1,lVar12 << 4);
      if (local_190 == 0) goto LAB_1491a2e81;
    }
    local_1a8 = (void *)0x0;
    local_1a0 = (int)param_4[1];
    lVar12 = (longlong)local_1a0;
    pvVar1 = (void *)*param_4;
    if (lVar12 == 0) {
      local_19c = 0;
LAB_1491a2eb7:
      plVar7 = (longlong *)FUN_144a81888(param_2);
      if (plVar7 != (longlong *)0x0) {
        lVar12 = (**(code **)(*plVar7 + 0x3f8))(plVar7);
        if (lVar12 == 0) {
          local_178 = (undefined2 *)0x0;
          uStack_170 = 0;
          FUN_1401031ac(plVar7,0,&local_178);
          puVar14 = local_178;
          if ((int)uStack_170 == 0) {
            puVar14 = &DAT_149dfb77a;
          }
          FUN_140002266(&local_158,L"%s does not have a Skeleton set.",puVar14);
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          if (local_178 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          lVar6 = *(longlong *)(lVar6 + 0x2f8);
          ppvStack_150 = &local_1a8;
          iVar5 = *(int *)(lVar6 + 0xc0);
          local_158 = lVar12;
          if (0 < iVar5) {
            lVar12 = 0;
            do {
              puVar14 = *(undefined2 **)(*(longlong *)(lVar6 + 0xb8) + lVar12 * 8);
              if ((puVar14 != (undefined2 *)0x0) && (*(char *)(puVar14 + 8) == '\b')) {
                local_178 = puVar14;
                FUN_144495dea(&local_158,&local_178);
                iVar5 = *(int *)(lVar6 + 0xc0);
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < iVar5);
          }
        }
      }
    }
    else {
      FUN_1491ccc00(&local_1a8,local_1a0,0);
      memcpy(local_1a8,pvVar1,lVar12 << 4);
      if (local_1a0 == 0) goto LAB_1491a2eb7;
    }
    pvVar1 = local_198;
    lVar6 = (longlong)local_190;
    if (lVar6 != 0) {
      lVar12 = 0;
      do {
        if ((*(longlong *)((longlong)pvVar1 + lVar12) != 0) &&
           (*(longlong *)((longlong)pvVar1 + lVar12 + 8) != 0)) {
          local_128 = 0;
          uStack_120 = 0;
          alStack_140[1] = 0;
          puStack_130 = (undefined2 *)0x0;
          local_148 = 0;
          alStack_140[0] = 0;
          local_158 = 0;
          ppvStack_150 = (void **)0x0;
          local_118 = 0;
          local_110 = 0xffffffff;
          local_10c = 0;
          local_104 = 1;
          local_100 = 0;
          local_f8 = 1;
          puVar11 = &DAT_14c846480;
          puVar13 = local_e8;
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          local_88 = 0x3f800000;
          local_84 = 0;
          local_80 = 0;
          local_78 = 0xffffffffffffffff;
          lVar8 = *(longlong *)(param_2 + 0xa8);
          if ((lVar8 == 0) || (lVar8 == *(longlong *)(local_1c0 + 0xa8))) {
            alStack_140[1] = 0;
            puStack_130 = (undefined2 *)0x0;
            local_128 = 0;
          }
          else {
            FUN_1400bbfc4(&local_178,lVar8);
            puStack_130 = local_178;
            local_128 = uStack_170;
            if (uStack_120 != 0) {
              FUN_1400020a8();
            }
            uStack_120 = CONCAT44(uStack_164,local_168);
            local_118 = CONCAT44(uStack_15c,uStack_160);
            cVar3 = (*(code *)PTR_FUN_14c758760)();
            if (cVar3 != '\0') {
              uVar4 = *(uint *)(lVar8 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar9 = 0;
              }
              if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
                alStack_140[1] = 0;
                goto LAB_1491a30f7;
              }
            }
            FUN_14485c47a(alStack_140 + 1,lVar8);
          }
LAB_1491a30f7:
          FUN_1491ab4e2(&local_158,param_2);
          uVar2 = uStack_180;
          local_100 = *(undefined8 *)((longlong)pvVar1 + lVar12);
          local_104 = 1;
          local_10c = *(undefined8 *)((longlong)pvVar1 + lVar12 + 8);
          local_f8 = param_5;
          lVar8 = (longlong)(int)uStack_180;
          uVar4 = (int)uStack_180 + 1;
          uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
          if (uStack_180._4_4_ < uVar4) {
            FUN_1491ce3d2(&local_188,uVar2 & 0xffffffff);
          }
          FUN_1491cca56(local_188 + lVar8 * 0x1e,&local_158);
          if (uStack_120 != 0) {
            FUN_1400020a8();
          }
          if (ppvStack_150 != (void **)0x0) {
            FUN_1400020a8();
          }
        }
        lVar12 = lVar12 + 0x10;
      } while (lVar6 * 0x10 != lVar12);
    }
    pvVar1 = local_1a8;
    lVar6 = (longlong)local_1a0;
    if (lVar6 != 0) {
      lVar12 = 0;
      do {
        if ((*(longlong *)((longlong)pvVar1 + lVar12) != 0) &&
           (*(longlong *)((longlong)pvVar1 + lVar12 + 8) != 0)) {
          local_128 = 0;
          uStack_120 = 0;
          alStack_140[1] = 0;
          puStack_130 = (undefined2 *)0x0;
          local_148 = 0;
          alStack_140[0] = 0;
          local_158 = 0;
          ppvStack_150 = (void **)0x0;
          local_118 = 0;
          local_110 = 0xffffffff;
          local_10c = 0;
          local_104 = 1;
          local_100 = 0;
          local_f8 = 1;
          puVar11 = &DAT_14c846480;
          puVar13 = local_e8;
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          local_88 = 0x3f800000;
          local_84 = 0;
          local_80 = 0;
          local_78 = 0xffffffffffffffff;
          lVar8 = *(longlong *)(param_2 + 0xa8);
          if ((lVar8 == 0) || (lVar8 == *(longlong *)(local_1c0 + 0xa8))) {
            alStack_140[1] = 0;
            puStack_130 = (undefined2 *)0x0;
            local_128 = 0;
          }
          else {
            FUN_1400bbfc4(&local_178,lVar8);
            puStack_130 = local_178;
            local_128 = uStack_170;
            if (uStack_120 != 0) {
              FUN_1400020a8();
            }
            uStack_120 = CONCAT44(uStack_164,local_168);
            local_118 = CONCAT44(uStack_15c,uStack_160);
            cVar3 = (*(code *)PTR_FUN_14c758760)();
            if (cVar3 != '\0') {
              uVar4 = *(uint *)(lVar8 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar9 = 0;
              }
              if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
                alStack_140[1] = 0;
                goto LAB_1491a3343;
              }
            }
            FUN_14485c47a(alStack_140 + 1,lVar8);
          }
LAB_1491a3343:
          FUN_1491ab4e2(&local_158,param_2);
          uVar2 = uStack_180;
          local_100 = *(undefined8 *)((longlong)pvVar1 + lVar12);
          local_104 = 8;
          local_10c = *(undefined8 *)((longlong)pvVar1 + lVar12 + 8);
          lVar8 = (longlong)(int)uStack_180;
          uVar4 = (int)uStack_180 + 1;
          uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
          if (uStack_180._4_4_ < uVar4) {
            FUN_1491ce3d2(&local_188,uVar2 & 0xffffffff);
          }
          FUN_1491cca56(local_188 + lVar8 * 0x1e,&local_158);
          if (uStack_120 != 0) {
            FUN_1400020a8();
          }
          if (ppvStack_150 != (void **)0x0) {
            FUN_1400020a8();
          }
        }
        lVar12 = lVar12 + 0x10;
      } while (lVar6 * 0x10 != lVar12);
    }
    uVar2 = uStack_180;
    ppvVar10 = local_188;
    local_1b8 = 0;
    local_1b0 = (int)uStack_180;
    if ((int)uStack_180 == 0) {
      local_1ac = 0;
    }
    else {
      FUN_1491cc9a8(&local_1b8,uStack_180 & 0xffffffff,0);
      FUN_1491cca1a(local_1b8,ppvVar10,uVar2 & 0xffffffff);
    }
    FUN_1491a2a20(local_1c0,&local_1b8);
    if (local_1a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_198 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_145dea87b(local_188,uStack_180 & 0xffffffff);
    ppvVar10 = local_188;
  }
  if (ppvVar10 != (void **)0x0) {
    FUN_1400020a8();
  }
LAB_1491a2cfa:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491a3676 FUN_1491a3676 body=99 status=ok
// SIG undefined FUN_1491a3676(void)

void FUN_1491a3676(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar2 = (**(code **)(*DAT_14cc06ef8 + 0xb0))();
  if (iVar2 == 0) {
    plVar3 = (longlong *)FUN_1491a88a2(param_1);
    if (plVar3 == (longlong *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (**(code **)(*plVar3 + 0x2a8))(plVar3);
    }
    bVar1 = plVar3 != (longlong *)0x0 & bVar1;
  }
  else {
    bVar1 = 0;
  }
  *param_3 = bVar1;
  return;
}



// FUNCTION 1491a36f0 FUN_1491a36f0 body=134 status=ok
// SIG undefined FUN_1491a36f0(void)

void FUN_1491a36f0(longlong param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = FUN_1491ab38c(param_1,L"ClearMappedElements");
  if (cVar2 == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x6a4);
  FUN_145dea87b(*(undefined8 *)(param_1 + 0x698),*(undefined4 *)(param_1 + 0x6a0));
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x6a4) != 0)) {
    FUN_1491ce3a2(param_1 + 0x698);
  }
  FUN_1491aa09c(param_1 + 0x698,param_1 + 0x688);
  FUN_1491a96aa(param_1);
  FUN_14448b00a(param_1);
  return;
}



// FUNCTION 1491a377c FUN_1491a377c body=285 status=ok
// SIG undefined FUN_1491a377c(void)

void FUN_1491a377c(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined8 local_40;
  undefined1 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  uVar2 = local_40;
  uVar1 = local_41;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = FUN_1491a88a2(param_1);
  if (lVar4 == 0) {
    bVar5 = false;
  }
  else {
    local_34 = uVar1;
    local_30 = uVar2;
    iVar3 = FUN_140813180(*(undefined8 *)(lVar4 + 0x2f8));
    bVar5 = iVar3 != -1;
  }
  *param_3 = lVar4 != 0 & bVar5;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a38c6 FUN_1491a38c6 body=288 status=ok
// SIG undefined FUN_1491a38c6(void)

void FUN_1491a38c6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a39e8(param_1,local_98,local_28,local_29);
  puVar2 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a39e8 FUN_1491a39e8 body=185 status=ok
// SIG undefined FUN_1491a39e8(void)

undefined8 *
FUN_1491a39e8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1491a88a2();
  if (lVar2 != 0) {
    local_3c = 1;
    local_38 = param_3;
    iVar1 = FUN_140813180(*(undefined8 *)(lVar2 + 0x2f8));
    if (iVar1 != -1) {
      if ((char)param_4 == '\x04') {
        FUN_144afced8();
      }
      else {
        FUN_14486750c(*(undefined8 *)(lVar2 + 0x2f8),param_2,iVar1,0);
        FUN_1491ab6d0(param_1,param_2,param_4);
      }
      goto LAB_1491a3a67;
    }
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
LAB_1491a3a67:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a3aa8 FUN_1491a3aa8 body=163 status=ok
// SIG undefined FUN_1491a3aa8(void)

void FUN_1491a3aa8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491a3b4c(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a3b4c FUN_1491a3b4c body=188 status=ok
// SIG undefined FUN_1491a3b4c(void)

undefined1 FUN_1491a3b4c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_a4 [4];
  undefined8 local_a0;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = FUN_1491a88a2();
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(lVar4 + 0x2f8);
    local_a4[0] = 4;
    local_a0 = param_2;
    uVar3 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar3 * 8), lVar1 != 0)) &&
       ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\0')))) {
      local_b8 = 1;
      FUN_1444a0032(*(undefined8 *)(lVar4 + 0x2f8),local_a4,lVar1,1);
      uVar2 = local_a4[0];
      goto LAB_1491a3bc4;
    }
  }
  uVar2 = 0;
LAB_1491a3bc4:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a3c0a FUN_1491a3c0a body=165 status=ok
// SIG undefined FUN_1491a3c0a(void)

void FUN_1491a3c0a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491a3cb0(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a3cb0 FUN_1491a3cb0 body=216 status=ok
// SIG undefined FUN_1491a3cb0(void)

undefined4 FUN_1491a3cb0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_b4;
  undefined8 local_b0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_1491a88a2();
  uVar4 = 0;
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_b4 = CONCAT31(local_b4._1_3_,4);
    local_b0 = param_2;
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       ((*(char *)(lVar1 + 0x10) == '\x04' &&
        ((*(char *)(lVar1 + 0x211) == '\n' || (*(char *)(lVar1 + 0x211) == '\x01')))))) {
      local_c8 = 1;
      FUN_1444a0032(*(undefined8 *)(lVar3 + 0x2f8),&local_b4,lVar1,1);
      uVar4 = local_b4;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a3d8a FUN_1491a3d8a body=163 status=ok
// SIG undefined FUN_1491a3d8a(void)

void FUN_1491a3d8a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491a3e2e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a3e2e FUN_1491a3e2e body=193 status=ok
// SIG undefined FUN_1491a3e2e(void)

undefined4 FUN_1491a3e2e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = FUN_1491a88a2();
  uVar4 = 0;
  uVar5 = 0;
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_ac = CONCAT31(local_ac._1_3_,4);
    local_a8 = param_2;
    uVar2 = FUN_140813180(lVar1);
    uVar5 = uVar4;
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\x02')))) {
      local_b8 = 1;
      FUN_1444a0032(*(undefined8 *)(lVar3 + 0x2f8),&local_ac,lVar1,1);
      uVar5 = local_ac;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a3ef0 FUN_1491a3ef0 body=288 status=ok
// SIG undefined FUN_1491a3ef0(void)

void FUN_1491a3ef0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a4012(param_1,local_98,local_28,local_29);
  puVar2 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4012 FUN_1491a4012 body=233 status=ok
// SIG undefined FUN_1491a4012(void)

undefined8 *
FUN_1491a4012(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [36];
  undefined1 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_44 = 4;
    local_40 = param_3;
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x04')) {
      if ((char)param_4 == '\x04') {
        FUN_1401261c4(*(undefined8 *)(lVar3 + 0x2f8),param_2,lVar1,1);
      }
      else {
        FUN_1401261c4(*(undefined8 *)(lVar3 + 0x2f8),param_2,lVar1,3);
        FUN_1491ab6d0(param_1,param_2,param_4);
      }
      goto LAB_1491a40b9;
    }
  }
  puVar4 = &DAT_14c846480;
  puVar5 = param_2;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
LAB_1491a40b9:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a40fc FUN_1491a40fc body=270 status=ok
// SIG undefined FUN_1491a40fc(void)

void FUN_1491a40fc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_91 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_91);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_91);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a4594(param_1,local_88,local_90,local_91);
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  *(undefined8 *)(param_3 + 4) = local_58;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a420c FUN_1491a420c body=38 status=ok
// SIG undefined FUN_1491a420c(void)

void FUN_1491a420c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491a88a2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1491a4232 FUN_1491a4232 body=302 status=ok
// SIG undefined FUN_1491a4232(void)

void FUN_1491a4232(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b1);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a4594(param_1,&local_a8,local_b0,local_b1);
  local_48 = local_a8;
  uStack_44 = uStack_a4;
  uStack_40 = uStack_a0;
  uStack_3c = uStack_9c;
  local_38 = local_98;
  uStack_34 = uStack_94;
  uStack_30 = uStack_90;
  uStack_2c = uStack_8c;
  FUN_1448052ee(&local_48,&local_d0);
  *(undefined8 *)(param_3 + 4) = local_c0;
  *param_3 = local_d0;
  param_3[1] = uStack_cc;
  param_3[2] = uStack_c8;
  param_3[3] = uStack_c4;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4362 FUN_1491a4362 body=270 status=ok
// SIG undefined FUN_1491a4362(void)

void FUN_1491a4362(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  undefined8 local_90;
  undefined1 local_88 [64];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_91 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_91);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_91);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a4594(param_1,local_88,local_90,local_91);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  *(undefined8 *)(param_3 + 4) = local_38;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4472 FUN_1491a4472 body=288 status=ok
// SIG undefined FUN_1491a4472(void)

void FUN_1491a4472(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a4594(param_1,local_98,local_28,local_29);
  puVar2 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4594 FUN_1491a4594 body=288 status=ok
// SIG undefined FUN_1491a4594(void)

undefined8 *
FUN_1491a4594(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [36];
  undefined1 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_44 = 4;
    local_40 = param_3;
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x04')) {
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)((longlong)param_2 + 0x44) = 0x3ff00000;
      *(undefined4 *)(param_2 + 9) = 0;
      *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
      param_2[10] = 0x3ff0000000000000;
      param_2[0xb] = 0;
      if ((char)param_4 == '\x04') {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),param_2,lVar1,1);
      }
      else {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),param_2,lVar1,3);
        FUN_1491ab6d0(param_1,param_2,param_4);
      }
      goto LAB_1491a4672;
    }
  }
  puVar4 = &DAT_14c846480;
  puVar5 = param_2;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
LAB_1491a4672:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a46b6 FUN_1491a46b6 body=175 status=ok
// SIG undefined FUN_1491a46b6(void)

void FUN_1491a46b6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a4766(param_1,&local_38,local_28);
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4766 FUN_1491a4766 body=223 status=ok
// SIG undefined FUN_1491a4766(void)

double * FUN_1491a4766(undefined8 param_1,double *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  float local_ac;
  undefined8 local_a8;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = FUN_1491a88a2();
  if (lVar6 != 0) {
    lVar1 = *(longlong *)(lVar6 + 0x2f8);
    local_ac = (float)CONCAT31(local_ac._1_3_,4);
    local_a8 = param_3;
    uVar5 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar5 * 8), lVar1 != 0)) &&
       ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\x03')))) {
      local_b8 = 1;
      FUN_1444a0032(*(undefined8 *)(lVar6 + 0x2f8),&local_ac,lVar1,1);
      *param_2 = (double)local_ac;
      param_2[1] = (double)(float)local_a8;
      goto LAB_1491a481c;
    }
  }
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
LAB_1491a481c:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4846 FUN_1491a4846 body=222 status=ok
// SIG undefined FUN_1491a4846(void)

void FUN_1491a4846(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a4926(param_1,&local_38,local_21);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4926 FUN_1491a4926 body=146 status=ok
// SIG undefined FUN_1491a4926(void)

longlong * FUN_1491a4926(undefined8 param_1,longlong *param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar5 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x2f8) + 0xc0);
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x2f8) + 0xb8);
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar3 + lVar4);
        if ((*(byte *)(lVar2 + 0x10) & ~param_3) == 0) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x14);
        }
        lVar4 = lVar4 + 8;
      } while (lVar5 * 8 != lVar4);
    }
  }
  return param_2;
}



// FUNCTION 1491a49b8 FUN_1491a49b8 body=288 status=ok
// SIG undefined FUN_1491a49b8(void)

void FUN_1491a49b8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a4ada(param_1,local_98,local_28,local_29);
  puVar2 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4ada FUN_1491a4ada body=185 status=ok
// SIG undefined FUN_1491a4ada(void)

undefined8 *
FUN_1491a4ada(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1491a88a2();
  if (lVar2 != 0) {
    local_3c = 1;
    local_38 = param_3;
    iVar1 = FUN_140813180(*(undefined8 *)(lVar2 + 0x2f8));
    if (iVar1 != -1) {
      if ((char)param_4 == '\x04') {
        FUN_144afced8();
      }
      else {
        FUN_14486750c(*(undefined8 *)(lVar2 + 0x2f8),param_2,iVar1,1);
        FUN_1491ab6d0(param_1,param_2,param_4);
      }
      goto LAB_1491a4b59;
    }
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
LAB_1491a4b59:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4b94 FUN_1491a4b94 body=288 status=ok
// SIG undefined FUN_1491a4b94(void)

void FUN_1491a4b94(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a4cb6(param_1,local_98,local_28,local_29);
  puVar2 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4cb6 FUN_1491a4cb6 body=230 status=ok
// SIG undefined FUN_1491a4cb6(void)

undefined8 *
FUN_1491a4cb6(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [36];
  undefined1 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_44 = 4;
    local_40 = param_3;
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x02')) {
      if ((char)param_4 == '\x04') {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),param_2,lVar1,0);
      }
      else {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),param_2,lVar1,2);
        FUN_1491ab6d0(param_1,param_2,param_4);
      }
      goto LAB_1491a4d5a;
    }
  }
  puVar4 = &DAT_14c846480;
  puVar5 = param_2;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
LAB_1491a4d5a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4d9e FUN_1491a4d9e body=288 status=ok
// SIG undefined FUN_1491a4d9e(void)

void FUN_1491a4d9e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a4ec0(param_1,local_98,local_28,local_29);
  puVar2 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4ec0 FUN_1491a4ec0 body=233 status=ok
// SIG undefined FUN_1491a4ec0(void)

undefined8 *
FUN_1491a4ec0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [36];
  undefined1 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_44 = 4;
    local_40 = param_3;
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x02')) {
      if ((char)param_4 == '\x04') {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),param_2,lVar1,1);
      }
      else {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),param_2,lVar1,3);
        FUN_1491ab6d0(param_1,param_2,param_4);
      }
      goto LAB_1491a4f67;
    }
  }
  puVar4 = &DAT_14c846480;
  puVar5 = param_2;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
LAB_1491a4f67:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a4fc0 FUN_1491a4fc0 body=160 status=ok
// SIG undefined FUN_1491a4fc0(void)

void FUN_1491a4fc0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa08))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a5062 FUN_1491a5062 body=160 status=ok
// SIG undefined FUN_1491a5062(void)

void FUN_1491a5062(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x9f8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a5104 FUN_1491a5104 body=160 status=ok
// SIG undefined FUN_1491a5104(void)

void FUN_1491a5104(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa18))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a51a6 FUN_1491a51a6 body=160 status=ok
// SIG undefined FUN_1491a51a6(void)

void FUN_1491a51a6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa10))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a5248 FUN_1491a5248 body=160 status=ok
// SIG undefined FUN_1491a5248(void)

void FUN_1491a5248(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa00))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a52ea FUN_1491a52ea body=160 status=ok
// SIG undefined FUN_1491a52ea(void)

void FUN_1491a52ea(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa20))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a538c FUN_1491a538c body=191 status=ok
// SIG undefined FUN_1491a538c(void)

void FUN_1491a538c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    plVar2 = (longlong *)FUN_1491a88a2(param_1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x458))(plVar2,lVar1);
      *(undefined1 *)(param_1 + 0x6b9) = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a5452 FUN_1491a5452 body=621 status=ok
// SIG undefined FUN_1491a5452(void)

void FUN_1491a5452(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_100;
  undefined8 local_f8 [12];
  int local_94;
  undefined4 local_90;
  undefined1 local_89;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  local_90 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  uVar2 = local_89;
  local_108 = local_90;
  iVar1 = local_94;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_88;
  puVar5 = local_f8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_100 = iVar1 != 0;
  FUN_1491a56c0(param_1,local_28,local_f8,uVar2);
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a56c0 FUN_1491a56c0 body=522 status=ok
// SIG undefined FUN_1491a56c0(void)

void FUN_1491a56c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  float param_5,undefined1 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined1 local_178 [96];
  undefined1 local_118 [96];
  undefined1 local_b8 [104];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (1e-08 < param_5) {
    lVar2 = FUN_1491a88a2();
    if (lVar2 != 0) {
      local_b8[0] = 1;
      local_b8._4_8_ = param_2;
      iVar1 = FUN_140813180(*(undefined8 *)(lVar2 + 0x2f8));
      if (iVar1 != -1) {
        FUN_1491ac36e(param_1,param_3,param_4);
        if ((char)param_4 == '\x04') {
          if (1.0 <= param_5) {
            uVar3 = *(undefined8 *)(lVar2 + 0x2f8);
            puVar4 = (undefined8 *)local_b8;
            for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *param_3;
              param_3 = param_3 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          else {
            FUN_144afced8(*(undefined8 *)(lVar2 + 0x2f8),local_118,iVar1,0);
            FUN_14915b8da(local_178,local_118,param_3,param_5);
            uVar3 = *(undefined8 *)(lVar2 + 0x2f8);
            puVar4 = (undefined8 *)local_b8;
            for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *param_3;
              param_3 = param_3 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          local_188 = 0;
          local_190 = 0;
          local_198 = param_6;
          FUN_140122cc6(uVar3,iVar1,local_b8,0);
        }
        else {
          if (1.0 <= param_5) {
            uVar3 = *(undefined8 *)(lVar2 + 0x2f8);
            puVar4 = (undefined8 *)local_b8;
            for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *param_3;
              param_3 = param_3 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          else {
            FUN_14486750c(*(undefined8 *)(lVar2 + 0x2f8),local_118,iVar1,0);
            FUN_14915b8da(local_178,local_118,param_3,param_5);
            uVar3 = *(undefined8 *)(lVar2 + 0x2f8);
            puVar4 = (undefined8 *)local_b8;
            for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *param_3;
              param_3 = param_3 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          local_188 = 0;
          local_190 = 0;
          local_198 = param_6;
          FUN_144831e8e(uVar3,iVar1,local_b8,0);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491a58d2 FUN_1491a58d2 body=235 status=ok
// SIG undefined FUN_1491a58d2(void)

void FUN_1491a58d2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a59be(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a59be FUN_1491a59be body=201 status=ok
// SIG undefined FUN_1491a59be(void)

void FUN_1491a59be(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined8 local_cc;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined1 local_b4 [128];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = param_2;
  plVar1 = (longlong *)FUN_1491a88a2();
  if (plVar1 != (longlong *)0x0) {
    local_d8[0] = 0;
    local_d4 = 0x7f7fffff000001ff;
    local_cc = 0;
    local_c4 = 0;
    memset(local_b4,0,0x84);
    local_34 = 1;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 1;
    local_f8 = local_d8;
    local_b4[0] = param_3;
    (**(code **)(*plVar1 + 0x3d8))(plVar1,&local_c0,local_b4,1);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a5a88 FUN_1491a5a88 body=232 status=ok
// SIG undefined FUN_1491a5a88(void)

void FUN_1491a5a88(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a5b72(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a5b72 FUN_1491a5b72 body=229 status=ok
// SIG undefined FUN_1491a5b72(void)

void FUN_1491a5b72(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined8 local_bc;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b0 = param_2;
  plVar1 = (longlong *)FUN_1491a88a2();
  if (plVar1 != (longlong *)0x0) {
    local_e8 = local_c8;
    local_c8[0] = 0;
    local_c4 = 0x7f7fffff000001ff;
    local_bc = 0;
    local_b4 = 0;
    local_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    uStack_28 = 0x100000000;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 1;
    local_a4 = param_3;
    (**(code **)(*plVar1 + 0x3d8))(plVar1,&local_b0);
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a5c58 FUN_1491a5c58 body=231 status=ok
// SIG undefined FUN_1491a5c58(void)

void FUN_1491a5c58(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a5d40(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a5d40 FUN_1491a5d40 body=213 status=ok
// SIG undefined FUN_1491a5d40(void)

void FUN_1491a5d40(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a0 = param_2;
  plVar1 = (longlong *)FUN_1491a88a2();
  if (plVar1 != (longlong *)0x0) {
    local_d8 = local_b8;
    local_b8[0] = 0;
    local_b4 = 0x7f7fffff000001ff;
    local_ac = 0;
    local_a4 = 0;
    local_20 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uStack_18 = 0x100000000;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 1;
    local_94 = param_3;
    (**(code **)(*plVar1 + 0x3d8))(plVar1,&local_a0);
  }
  if ((local_10 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a5e16 FUN_1491a5e16 body=434 status=ok
// SIG undefined FUN_1491a5e16(void)

void FUN_1491a5e16(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [13];
  undefined1 local_89;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  uVar1 = local_89;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_88;
  puVar4 = local_f8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1491a5fca(param_1,local_28,local_f8,uVar1);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a5fca FUN_1491a5fca body=226 status=ok
// SIG undefined FUN_1491a5fca(void)

void FUN_1491a5fca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_44 = 4;
    local_40 = param_2;
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x04')) {
      uVar4 = 1;
      if ((char)param_4 != '\x04') {
        FUN_1491ac36e(param_1,param_3,param_4,1);
        uVar4 = 3;
      }
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 1;
      FUN_1491de4e6(*(undefined8 *)(lVar3 + 0x2f8),lVar1,param_3,uVar4);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a60ae FUN_1491a60ae body=313 status=ok
// SIG undefined FUN_1491a60ae(void)

void FUN_1491a60ae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_48 = local_28;
  FUN_1491a61e8(param_1,local_20,&local_58,local_39);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a61e8 FUN_1491a61e8 body=532 status=ok
// SIG undefined FUN_1491a61e8(void)

void FUN_1491a61e8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_c8[0] = 4;
    local_c8._4_8_ = param_2;
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x04')) {
      puVar5 = &DAT_14c846480;
      puVar6 = (undefined8 *)local_c8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_1a8 = *param_3;
      uStack_1a4 = param_3[1];
      uStack_1a0 = param_3[2];
      uStack_19c = param_3[3];
      local_198 = *(undefined8 *)(param_3 + 4);
      uStack_90 = 0;
      local_a8 = local_1a8;
      uStack_a4 = uStack_1a4;
      uStack_a0 = uStack_1a0;
      uStack_9c = uStack_19c;
      local_98 = local_198;
      if ((char)param_4 == '\x04') {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),&local_168,lVar1,1);
        local_d8 = local_158;
        uStack_d4 = uStack_154;
        uStack_d0 = uStack_150;
        uStack_cc = uStack_14c;
        local_108 = CONCAT44(uStack_124,local_128);
        uStack_100 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        uStack_f4 = uStack_114;
        uStack_f0 = uStack_110;
        uStack_ec = uStack_10c;
        local_e8 = local_168;
        uStack_e0 = uStack_160;
      }
      else {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),&local_168,lVar1,3);
        local_d8 = local_158;
        uStack_d4 = uStack_154;
        uStack_d0 = uStack_150;
        uStack_cc = uStack_14c;
        local_e8 = local_168;
        uStack_e0 = uStack_160;
        local_108 = CONCAT44(uStack_124,local_128);
        uStack_100 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        uStack_f4 = uStack_114;
        uStack_f0 = uStack_110;
        uStack_ec = uStack_10c;
        FUN_1491ac36e(param_1,local_c8,param_4);
        local_1a8 = local_a8;
        uStack_1a4 = uStack_a4;
        uStack_1a0 = uStack_a0;
        uStack_19c = uStack_9c;
        local_198 = local_98;
      }
      local_1b8 = local_d8;
      uStack_1b4 = uStack_d4;
      uStack_1b0 = uStack_d0;
      uStack_1ac = uStack_cc;
      local_1c8 = local_e8;
      uStack_1c0 = uStack_e0;
      uStack_190 = 0;
      local_188 = local_108;
      uStack_180 = uStack_100;
      local_178 = local_f8;
      uStack_174 = uStack_f4;
      uStack_170 = uStack_f0;
      uStack_16c = uStack_ec;
      FUN_1491a6e16(param_1,param_2,&local_1c8,param_4);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a63fe FUN_1491a63fe body=185 status=ok
// SIG undefined FUN_1491a63fe(void)

void FUN_1491a63fe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1491a64b8(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a64b8 FUN_1491a64b8 body=198 status=ok
// SIG undefined FUN_1491a64b8(void)

void FUN_1491a64b8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x620);
  if (lVar3 == 0) {
LAB_1491a64f4:
    lVar3 = 0;
  }
  else {
    lVar1 = FUN_1401242c6();
    if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_1491a64f4;
    lVar3 = *(longlong *)(param_1 + 0x620);
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1401242c6();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = *param_2;
      goto LAB_1491a6522;
    }
  }
  lVar1 = 0;
LAB_1491a6522:
  if (lVar3 == lVar1) {
    return;
  }
  FUN_1491ac418(param_1,0);
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x620) = lVar3;
  FUN_14448b00a(param_1);
  return;
}



// FUNCTION 1491a657e FUN_1491a657e body=313 status=ok
// SIG undefined FUN_1491a657e(void)

void FUN_1491a657e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_48 = local_28;
  FUN_1491a66b8(param_1,local_20,&local_58,local_39);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a66b8 FUN_1491a66b8 body=552 status=ok
// SIG undefined FUN_1491a66b8(void)

void FUN_1491a66b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_d8[0] = 4;
    unique0x10000922 = param_2;
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x04')) {
      puVar5 = &DAT_14c846480;
      puVar6 = (undefined8 *)local_d8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_144a7484c(param_3,&local_178);
      local_d8._0_4_ = local_178;
      stack0xffffffffffffff2c = CONCAT44(uStack_170,uStack_174);
      uStack_cc = uStack_16c;
      local_c8 = local_168;
      uStack_c4 = uStack_164;
      uStack_c0 = uStack_160;
      uStack_bc = uStack_15c;
      if ((char)param_4 == '\x04') {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),&local_178,lVar1,1);
        local_118 = local_158;
        uStack_114 = uStack_154;
        uStack_110 = uStack_150;
        uStack_10c = uStack_14c;
        local_108 = local_148;
        uStack_104 = uStack_144;
        uStack_100 = uStack_140;
        uStack_fc = uStack_13c;
        local_f8 = local_138;
        uStack_f4 = uStack_134;
        uStack_f0 = uStack_130;
        uStack_ec = uStack_12c;
        local_e8 = local_128;
        uStack_e4 = uStack_124;
        uStack_e0 = uStack_120;
        uStack_dc = uStack_11c;
      }
      else {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),&local_178,lVar1,3);
        local_e8 = local_128;
        uStack_e4 = uStack_124;
        uStack_e0 = uStack_120;
        uStack_dc = uStack_11c;
        local_f8 = local_138;
        uStack_f4 = uStack_134;
        uStack_f0 = uStack_130;
        uStack_ec = uStack_12c;
        local_108 = local_148;
        uStack_104 = uStack_144;
        uStack_100 = uStack_140;
        uStack_fc = uStack_13c;
        local_118 = local_158;
        uStack_114 = uStack_154;
        uStack_110 = uStack_150;
        uStack_10c = uStack_14c;
        FUN_1491ac36e(param_1,local_d8,param_4);
        local_178 = local_d8._0_4_;
        uStack_174 = local_d8._4_4_;
        uStack_170 = uStack_d0;
        uStack_16c = uStack_cc;
        local_168 = local_c8;
        uStack_164 = uStack_c4;
        uStack_160 = uStack_c0;
        uStack_15c = uStack_bc;
      }
      local_1b8 = local_118;
      uStack_1b4 = uStack_114;
      uStack_1b0 = uStack_110;
      uStack_1ac = uStack_10c;
      local_1a8 = local_108;
      uStack_1a4 = uStack_104;
      uStack_1a0 = uStack_100;
      uStack_19c = uStack_fc;
      local_198 = local_f8;
      uStack_194 = uStack_f4;
      uStack_190 = uStack_f0;
      uStack_18c = uStack_ec;
      local_188 = local_e8;
      uStack_184 = uStack_e4;
      uStack_180 = uStack_e0;
      uStack_17c = uStack_dc;
      local_1d8 = local_178;
      uStack_1d4 = uStack_174;
      uStack_1d0 = uStack_170;
      uStack_1cc = uStack_16c;
      local_1c8 = local_168;
      uStack_1c4 = uStack_164;
      uStack_1c0 = uStack_160;
      uStack_1bc = uStack_15c;
      FUN_1491a6e16(param_1,param_2,&local_1d8,param_4);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a68e2 FUN_1491a68e2 body=313 status=ok
// SIG undefined FUN_1491a68e2(void)

void FUN_1491a68e2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_48 = local_28;
  FUN_1491a6a1c(param_1,local_20,&local_58,local_39);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a6a1c FUN_1491a6a1c body=581 status=ok
// SIG undefined FUN_1491a6a1c(void)

void FUN_1491a6a1c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_c8 = CONCAT31(local_c8._1_3_,4);
    uStack_c4 = (undefined4)param_2;
    uStack_c0 = (undefined4)((ulonglong)param_2 >> 0x20);
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x04')) {
      local_98 = DAT_14c8464b0;
      uStack_90 = DAT_14c8464b8;
      local_a8 = DAT_14c8464a0;
      uStack_a0 = DAT_14c8464a8;
      local_b8 = DAT_14c846490;
      uStack_b0 = DAT_14c846498;
      local_c8 = (undefined4)DAT_14c846480;
      uStack_c4 = (undefined4)((ulonglong)DAT_14c846480 >> 0x20);
      uStack_c0 = (undefined4)DAT_14c846488;
      uStack_bc = (undefined4)((ulonglong)DAT_14c846488 >> 0x20);
      local_188 = *param_3;
      uStack_184 = param_3[1];
      uStack_180 = param_3[2];
      uStack_17c = param_3[3];
      local_178 = *(undefined8 *)(param_3 + 4);
      uStack_70 = 0;
      local_88 = local_188;
      uStack_84 = uStack_184;
      uStack_80 = uStack_180;
      uStack_7c = uStack_17c;
      local_78 = local_178;
      if ((char)param_4 == '\x04') {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),&local_168,lVar1,1);
        local_f8 = local_158;
        uStack_f4 = uStack_154;
        uStack_f0 = uStack_150;
        uStack_ec = uStack_14c;
        local_e8 = local_148;
        uStack_e4 = uStack_144;
        uStack_e0 = uStack_140;
        uStack_dc = uStack_13c;
        local_d8 = CONCAT44(uStack_134,local_138);
        uStack_d0 = CONCAT44(uStack_12c,uStack_130);
        local_108 = local_168;
        uStack_100 = uStack_160;
      }
      else {
        FUN_1401571e4(*(undefined8 *)(lVar3 + 0x2f8),&local_168,lVar1,3);
        local_d8 = CONCAT44(uStack_134,local_138);
        uStack_d0 = CONCAT44(uStack_12c,uStack_130);
        local_e8 = local_148;
        uStack_e4 = uStack_144;
        uStack_e0 = uStack_140;
        uStack_dc = uStack_13c;
        local_f8 = local_158;
        uStack_f4 = uStack_154;
        uStack_f0 = uStack_150;
        uStack_ec = uStack_14c;
        local_108 = local_168;
        uStack_100 = uStack_160;
        FUN_1491ac36e(param_1,&local_c8,param_4);
        local_188 = local_88;
        uStack_184 = uStack_84;
        uStack_180 = uStack_80;
        uStack_17c = uStack_7c;
        local_178 = local_78;
      }
      local_198 = local_d8;
      uStack_190 = uStack_d0;
      local_1a8 = local_e8;
      uStack_1a4 = uStack_e4;
      uStack_1a0 = uStack_e0;
      uStack_19c = uStack_dc;
      local_1b8 = local_f8;
      uStack_1b4 = uStack_f4;
      uStack_1b0 = uStack_f0;
      uStack_1ac = uStack_ec;
      local_1c8 = (undefined4)local_108;
      uStack_1c4 = local_108._4_4_;
      uStack_1c0 = (undefined4)uStack_100;
      uStack_1bc = uStack_100._4_4_;
      uStack_170 = 0;
      FUN_1491a6e16(param_1,param_2,&local_1c8,param_4);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a6c62 FUN_1491a6c62 body=434 status=ok
// SIG undefined FUN_1491a6c62(void)

void FUN_1491a6c62(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [13];
  undefined1 local_89;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  uVar1 = local_89;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_88;
  puVar4 = local_f8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1491a6e16(param_1,local_28,local_f8,uVar1);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a6e16 FUN_1491a6e16 body=258 status=ok
// SIG undefined FUN_1491a6e16(void)

void FUN_1491a6e16(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_44 = 4;
    local_40 = param_2;
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x04')) {
      if ((char)param_4 == '\x04') {
        uVar4 = *(undefined8 *)(lVar3 + 0x2f8);
        uVar5 = 1;
      }
      else {
        FUN_1491ac36e(param_1,param_3,param_4);
        uVar4 = *(undefined8 *)(lVar3 + 0x2f8);
        uVar5 = 3;
      }
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 1;
      FUN_140122d4e(uVar4,lVar1,param_3,uVar5);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a6f1a FUN_1491a6f1a body=232 status=ok
// SIG undefined FUN_1491a6f1a(void)

void FUN_1491a6f1a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_1491a7004(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a7004 FUN_1491a7004 body=233 status=ok
// SIG undefined FUN_1491a7004(void)

void FUN_1491a7004(undefined8 param_1,undefined8 param_2,double *param_3)

{
  longlong *plVar1;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 local_a4;
  undefined8 local_a0;
  float local_94;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a0 = param_2;
  plVar1 = (longlong *)FUN_1491a88a2();
  if (plVar1 != (longlong *)0x0) {
    local_d8 = local_b8;
    local_b8[0] = 0;
    local_b4 = 0x7f7fffff000001ff;
    local_ac = 0;
    local_a4 = 0;
    local_90 = (float)param_3[1];
    local_94 = (float)*param_3;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_18 = 0x100000000;
    local_8c = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 1;
    (**(code **)(*plVar1 + 0x3d8))(plVar1,&local_a0);
  }
  if ((local_10 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a70f4 FUN_1491a70f4 body=527 status=ok
// SIG undefined FUN_1491a70f4(void)

void FUN_1491a70f4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_f8 [13];
  int local_90;
  undefined1 local_89;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  uVar2 = local_89;
  iVar1 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_88;
  puVar5 = local_f8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_108 = iVar1 != 0;
  FUN_1491a7304(param_1,local_28,local_f8,uVar2);
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a7304 FUN_1491a7304 body=2073 status=ok
// SIG undefined FUN_1491a7304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491a7304(undefined8 param_1,undefined8 param_2,double *param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 uVar18;
  double *pdVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  undefined1 local_300;
  undefined1 local_2f8;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
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
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
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
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar16 = FUN_1491a88a2();
  dVar2 = (double)CONCAT44(local_168._4_4_,(undefined4)local_168);
  if (lVar16 != 0) {
    local_168._0_4_ = CONCAT31(local_168._1_3_,1);
    local_168._4_4_ = (undefined4)param_2;
    uStack_160._0_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
    iVar13 = FUN_140813180(*(undefined8 *)(lVar16 + 0x2f8));
    dVar2 = (double)CONCAT44(local_168._4_4_,(undefined4)local_168);
    if (iVar13 != -1) {
      if ((*(int *)(lVar16 + 0x7cc) < 1) && (*(int *)(lVar16 + 2000) < 1)) {
        FUN_140056680(&local_168,
                      L"SetInitialBoneTransform should only be called during OnPreConstruction / OnPostConstruction."
                     );
        dVar2 = 0.0;
        if (CONCAT44(local_168._4_4_,(undefined4)local_168) != 0) {
          FUN_1400020a8();
          dVar2 = (double)CONCAT44(local_168._4_4_,(undefined4)local_168);
        }
      }
      else {
        FUN_1491ac36e(param_1,param_3,param_4);
        uVar18 = *(undefined8 *)(lVar16 + 0x2f8);
        if ((char)param_4 == '\x04') {
          iVar14 = FUN_1491db798(uVar18,iVar13);
          if (iVar14 != -1) {
            uVar15 = FUN_14486750c(uVar18,&local_2e8,iVar14,1);
            auVar32 = _DAT_149934d80;
            dVar2 = local_2a8._0_8_;
            dVar6 = local_2a8._8_8_;
            dVar3 = local_298._0_8_;
            auVar25 = *(undefined1 (*) [16])(param_3 + 8);
            dVar4 = auVar25._0_8_;
            dVar7 = auVar25._8_8_;
            auVar1 = *(undefined1 (*) [16])(param_3 + 10);
            dVar5 = auVar1._0_8_;
            auVar25 = minpd(auVar25,local_2a8);
            auVar30 = minpd(auVar1,local_298);
            auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
            auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
            iVar14 = movmskpd(uVar15,auVar26);
            auVar25._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
            auVar25._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
            uVar17 = movmskpd((int)uVar18,auVar25);
            if ((uVar17 & 0x3fffffff) == 0 && iVar14 == 0) {
              dVar29 = *param_3;
              dVar23 = param_3[1];
              dVar34 = param_3[2];
              dVar27 = param_3[3];
              dVar24 = dVar23 * local_2d8 * -1.0 +
                       dVar34 * dStack_2e0 + dVar27 * local_2e8 * 1.0 + dVar29 * dStack_2d0;
              dVar28 = dVar29 * local_2d8 * 1.0 +
                       dVar27 * dStack_2e0 + dVar34 * local_2e8 * -1.0 + dVar23 * dStack_2d0;
              auVar32._0_8_ =
                   dVar27 * local_2d8 * 1.0 +
                   ((local_2e8 * dVar23 * 1.0 + dVar34 * dStack_2d0) - dVar29 * dStack_2e0);
              auVar32._8_8_ =
                   dVar34 * local_2d8 * -1.0 +
                   ((local_2e8 * dVar29 * -1.0 + dVar27 * dStack_2d0) - dVar23 * dStack_2e0);
              dVar31 = param_3[4] * dVar2;
              dVar35 = param_3[5] * dVar6;
              dVar27 = param_3[6] * dVar3;
              dVar11 = param_3[7] * local_298._8_8_;
              dVar29 = dVar35 * local_2e8 - dStack_2e0 * dVar31;
              dVar23 = dVar27 * dStack_2e0 - local_2d8 * dVar35;
              dVar34 = dVar31 * local_2d8 - local_2e8 * dVar27;
              dVar12 = dVar11 * dStack_2d0 - dStack_2d0 * dVar11;
              dVar23 = dVar23 + dVar23;
              dVar34 = dVar34 + dVar34;
              dVar29 = dVar29 + dVar29;
              dVar12 = dVar12 + dVar12;
              local_108 = (dVar29 * dStack_2e0 - local_2d8 * dVar34) + dStack_2d0 * dVar23 + dVar31
                          + local_2c8;
              dStack_100 = (dVar23 * local_2d8 - dVar29 * local_2e8) + dStack_2d0 * dVar34 + dVar35
                           + dStack_2c0;
              local_f8 = (dVar34 * local_2e8 - dStack_2e0 * dVar23) + dStack_2d0 * dVar29 + dVar27 +
                         (double)CONCAT44(uStack_2b4,local_2b8);
              dStack_2b0 = (dVar12 * dStack_2d0 - dVar12 * dStack_2d0) +
                           dStack_2d0 * dVar12 + dVar11 + dStack_2b0;
            }
            else {
              dVar27 = dStack_2e0 + dStack_2e0;
              dVar29 = local_2d8 + local_2d8;
              dVar34 = local_2e8 * (local_2e8 + local_2e8);
              local_198 = (1.0 - (dVar34 + dStack_2e0 * dVar27)) * dVar3;
              dVar23 = (local_2e8 + local_2e8) * dStack_2d0;
              local_1a8 = (dVar27 * dStack_2d0 + local_2e8 * dVar29) * dVar3;
              dStack_1a0 = (dVar29 * dStack_2e0 - dVar23) * dVar3;
              local_1e8 = ((double)DAT_149934d80 - (local_2d8 * dVar29 + dStack_2e0 * dVar27)) *
                          dVar2;
              dVar34 = (DAT_149934d80._8_8_ - (local_2d8 * dVar29 + dVar34)) * dVar6;
              dStack_1e0 = (dVar27 * local_2e8 + dVar29 * dStack_2d0) * dVar2;
              local_1b8 = (dVar29 * dStack_2e0 + dVar23) * dVar6;
              local_1d8 = (local_2e8 * dVar29 - dVar27 * dStack_2d0) * dVar2;
              uStack_1d0 = 0;
              local_1c8._8_4_ = SUB84(dVar34,0);
              local_1c8._0_8_ = (dVar27 * local_2e8 - dVar29 * dStack_2d0) * dVar6;
              local_1c8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
              uStack_1b0 = 0;
              uStack_190 = 0;
              local_188 = local_2c8;
              dStack_180 = dStack_2c0;
              local_178 = local_2b8;
              uStack_174 = uStack_2b4;
              uStack_170 = 0;
              uStack_16c = 0x3ff00000;
              dVar12 = *param_3;
              dVar24 = param_3[1];
              dVar28 = param_3[2];
              dVar31 = dVar24 + dVar24;
              dVar23 = dVar28 + dVar28;
              dVar11 = dVar12 * (dVar12 + dVar12);
              local_218 = (1.0 - (dVar11 + dVar24 * dVar31)) * dVar5;
              dVar29 = param_3[3];
              dVar34 = dVar23 * dVar29;
              dVar27 = (dVar12 + dVar12) * param_3[3];
              dVar29 = dVar31 * dVar29;
              local_228 = (dVar29 + *param_3 * dVar23) * dVar5;
              local_248 = (dVar31 * dVar12 - dVar34) * dVar7;
              dStack_220 = (dVar23 * dVar24 - dVar27) * dVar5;
              local_268 = ((double)DAT_149934d80 - (dVar28 * dVar23 + dVar24 * dVar31)) * dVar4;
              dStack_240 = (DAT_149934d80._8_8_ - (dVar28 * dVar23 + dVar11)) * dVar7;
              dStack_260 = (dVar31 * dVar12 + dVar34) * dVar4;
              local_238 = (dVar23 * dVar24 + dVar27) * dVar7;
              local_258 = (*param_3 * dVar23 - dVar29) * dVar4;
              uStack_250 = 0;
              uStack_230 = 0;
              uStack_210 = 0;
              local_208 = param_3[4];
              dStack_200 = param_3[5];
              local_1f8 = param_3[6];
              uStack_1f0 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_168);
              FUN_144a1c686(&local_168,0x3e45798ee0000000);
              auVar30._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar7);
              auVar30._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar4);
              auVar25 = blendvpd(_DAT_149936790,auVar32,auVar30);
              uVar20 = -(ulonglong)(0.0 <= dVar3 * dVar5);
              dVar29 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
              dVar23 = auVar25._0_8_;
              local_158 = local_158 * dVar23;
              uStack_160 = (double)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160) * dVar23;
              local_168 = (double)CONCAT44(local_168._4_4_,(undefined4)local_168) * dVar23;
              dVar23 = auVar25._8_8_;
              local_138 = local_138 * dVar23;
              local_140 = local_140 * dVar23;
              local_148 = dVar23 * local_148;
              local_118 = local_118 * dVar29;
              local_120 = local_120 * dVar29;
              local_128 = dVar29 * local_128;
              FUN_14481fd10(&local_288,&local_168);
              dVar29 = local_278 * local_278 + local_288 * local_288;
              dVar23 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
              auVar22._0_8_ = dVar29 + dVar23;
              auVar22._8_8_ = dVar29 + dVar23;
              auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
              auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
              auVar25 = sqrtpd(auVar22,auVar22);
              auVar25 = divpd(auVar32,auVar25);
              auVar33._0_8_ = auVar25._0_8_ * local_278;
              auVar33._8_8_ = auVar25._8_8_ * dStack_270;
              dVar24 = (double)((ulonglong)(local_288 * auVar25._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
              dVar28 = (double)((ulonglong)(dStack_280 * auVar25._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
              auVar32 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar21);
              dStack_2b0 = 0.0;
            }
            dVar29 = local_298._8_8_ * auVar1._8_8_;
            *param_3 = dVar24;
            param_3[1] = dVar28;
            *(undefined1 (*) [16])(param_3 + 2) = auVar32;
            auVar9._8_4_ = SUB84(dStack_100,0);
            auVar9._0_8_ = local_108;
            auVar9._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
            *(undefined1 (*) [16])(param_3 + 4) = auVar9;
            auVar1._8_4_ = SUB84(dStack_2b0,0);
            auVar1._0_8_ = local_f8;
            auVar1._12_4_ = (int)((ulonglong)dStack_2b0 >> 0x20);
            *(undefined1 (*) [16])(param_3 + 6) = auVar1;
            auVar10._8_4_ = SUB84(dVar6 * dVar7,0);
            auVar10._0_8_ = dVar2 * dVar4;
            auVar10._12_4_ = (int)((ulonglong)(dVar6 * dVar7) >> 0x20);
            *(undefined1 (*) [16])(param_3 + 8) = auVar10;
            auVar8._8_4_ = SUB84(dVar29,0);
            auVar8._0_8_ = dVar3 * dVar5;
            auVar8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
            *(undefined1 (*) [16])(param_3 + 10) = auVar8;
            uVar18 = *(undefined8 *)(lVar16 + 0x2f8);
          }
        }
        pdVar19 = (double *)&local_168;
        for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
          *pdVar19 = *param_3;
          param_3 = param_3 + 1;
          pdVar19 = pdVar19 + 1;
        }
        local_2f8 = 0;
        local_300 = 0;
        local_308 = param_5;
        FUN_144831e8e(uVar18,iVar13,&local_168,1);
        dVar2 = local_168;
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
  local_168 = dVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a7b1e FUN_1491a7b1e body=434 status=ok
// SIG undefined FUN_1491a7b1e(void)

void FUN_1491a7b1e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [13];
  undefined1 local_89;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  uVar1 = local_89;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_88;
  puVar4 = local_f8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1491a7cd2(param_1,local_28,local_f8,uVar1);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a7cd2 FUN_1491a7cd2 body=255 status=ok
// SIG undefined FUN_1491a7cd2(void)

void FUN_1491a7cd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_1491a88a2();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x2f8);
    local_44 = 4;
    local_40 = param_2;
    uVar2 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x02')) {
      if ((char)param_4 == '\x04') {
        uVar4 = *(undefined8 *)(lVar3 + 0x2f8);
        uVar5 = 0;
      }
      else {
        FUN_1491ac36e(param_1,param_3,param_4);
        uVar4 = *(undefined8 *)(lVar3 + 0x2f8);
        uVar5 = 2;
      }
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 1;
      FUN_140122d4e(uVar4,lVar1,param_3,uVar5);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a7dd2 FUN_1491a7dd2 body=258 status=ok
// SIG undefined FUN_1491a7dd2(void)

void FUN_1491a7dd2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = uStack_30;
  lVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  local_40 = (int)uStack_30;
  if ((int)uStack_30 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1491cc9a8(&local_48,uStack_30 & 0xffffffff,0);
    FUN_1491cca1a(local_48,lVar1,uVar2 & 0xffffffff);
  }
  FUN_1491a7ed6(param_1,&local_48);
  FUN_145dea87b(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a7ed6 FUN_1491a7ed6 body=97 status=ok
// SIG undefined FUN_1491a7ed6(void)

void FUN_1491a7ed6(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_1491ab38c(param_1,L"SetMappedElements");
  if (cVar1 != '\0') {
    FUN_1491aa09c(param_1 + 0x698,param_2);
    FUN_1491a96aa(param_1);
    FUN_14448b00a(param_1);
  }
  FUN_145dea87b(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491a7f38 FUN_1491a7f38 body=156 status=ok
// SIG undefined FUN_1491a7f38(void)

void FUN_1491a7f38(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491a7fd6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a7fd6 FUN_1491a7fd6 body=422 status=ok
// SIG undefined FUN_1491a7fd6(void)

void FUN_1491a7fd6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x770) != 0) goto LAB_1491a8110;
  plVar3 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bb75f10;
  plVar3[2] = (longlong)&PTR_FUN_14bb6a9d0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 6) = 2;
  *(undefined8 *)((longlong)plVar3 + 0x34) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x44) = 0;
  plVar3[9] = 2;
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x770) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x778);
    if (plVar5 == (longlong *)0x0) goto LAB_1491a8110;
    *(undefined8 *)(param_1 + 0x778) = 0;
LAB_1491a808b:
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
    if (plVar3 == (longlong *)0x0) goto LAB_1491a8110;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x770) = plVar3 + 2;
    plVar5 = *(longlong **)(param_1 + 0x778);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x778) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_1491a808b;
    }
  }
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1491a8110:
  (**(code **)**(undefined8 **)(param_1 + 0x770))(*(undefined8 **)(param_1 + 0x770),param_2);
  lVar4 = FUN_1491a88a2(param_1);
  if (lVar4 != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x770);
    local_30 = *(longlong *)(param_1 + 0x778);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_14575d3d6(lVar4,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491a817e FUN_1491a817e body=156 status=ok
// SIG undefined FUN_1491a817e(void)

void FUN_1491a817e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_14919a33c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a8256 FUN_1491a8256 body=70 status=ok
// SIG undefined FUN_1491a8256(void)

void FUN_1491a8256(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(*param_2 + 8);
  FUN_1448284b2(param_1,lVar1);
  if (((*(byte *)(lVar1 + 0x2b) & 2) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x6c0), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001491a8299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2b0))(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 1491a829c FUN_1491a829c body=63 status=ok
// SIG undefined FUN_1491a829c(void)

void FUN_1491a829c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1448284b2();
  if (((*(byte *)(param_2 + 0x2b) & 2) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x6c0), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001491a82d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b0))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1491a82dc FUN_1491a82dc body=139 status=ok
// SIG undefined FUN_1491a82dc(void)

undefined8 FUN_1491a82dc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar1 = FUN_144a74fb4();
    if ((((*(longlong *)(param_1 + 0xd8) != 0) && (lVar1 != 0)) &&
        (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)))) {
      lVar1 = FUN_144a7a45a();
      if (lVar1 != 0) {
        lVar2 = FUN_145b9eaf0();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          uVar3 = FUN_1491a8368(lVar1);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1491a8368 FUN_1491a8368 body=74 status=ok
// SIG undefined FUN_1491a8368(void)

void FUN_1491a8368(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_144966fca(param_1[4]);
  if (cVar1 != '\0') {
    uVar2 = FUN_144966fba(param_1);
    thunk_FUN_14036294a(uVar2);
  }
  if (param_1[0x7c] == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  return;
}



// FUNCTION 1491a83b2 FUN_1491a83b2 body=161 status=ok
// SIG undefined FUN_1491a83b2(void)

void FUN_1491a83b2(longlong param_1)

{
  byte *pbVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448aa298();
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
  local_30 = 0;
  FUN_14485c47a(&local_30,param_1);
  FUN_1491ccdba((uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,&local_30);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
  *(undefined1 *)(param_1 + 0x780) = 1;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0xa8) + 0x3a);
    *pbVar1 = *pbVar1 | 7;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a8454 FUN_1491a8454 body=566 status=ok
// SIG undefined FUN_1491a8454(void)

void FUN_1491a8454(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1447c0e7a();
  cVar8 = FUN_1491719de(param_1);
  if ((cVar8 == '\0') &&
     ((*(longlong *)(param_1 + 0xa8) == 0 || (cVar8 = FUN_1491719de(), cVar8 == '\0')))) {
    plVar1 = (longlong *)(param_1 + 0x6d0);
    lVar2 = param_1 + 0x6e0;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar11 = 0;
    local_60 = lVar2;
    if (*(int *)(param_1 + 0x6f8) != 0) {
      FUN_1449c0562(&local_68);
      iVar11 = *(int *)(param_1 + 0x6f8);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar7 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar9 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar11) || (local_78 = local_58, local_60 != lVar2)) {
      do {
        local_78 = uVar7;
        lVar10 = *local_90;
        lVar6 = *(longlong *)(lVar10 + (longlong)iVar9 * 0x28);
        if ((lVar6 != 0) &&
           ((cVar8 = FUN_140432338(lVar6), cVar8 != '\0' && (cVar8 = FUN_1491719de(), cVar8 == '\0')
            ))) {
          plVar3 = (longlong *)(lVar10 + (longlong)iVar9 * 0x28);
          plVar5 = (longlong *)*plVar3;
          if ((plVar5 != (longlong *)0x0) && ((*(uint *)(plVar5 + 1) >> 0x1e & 1) == 0)) {
            uVar4 = *(uint *)((longlong)plVar5 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            if ((*(uint *)(lVar10 + 8) >> 0x1c & 1) == 0) {
              (**(code **)(*plVar5 + 0xc48))(plVar5,plVar3[1]);
              *(byte *)((longlong)plVar5 + 0x4a) =
                   *(byte *)((longlong)plVar5 + 0x4a) & 0xfd | (char)plVar3[3] * '\x02';
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_90 != plVar1 || (local_80 != lVar2 || local_78._4_4_ != iVar11));
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
    local_98 = 0;
    FUN_14485c47a(&local_98,param_1);
    FUN_146158178(local_98);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
  }
  FUN_1491cd4e0(param_1 + 0x6d0);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491a868c FUN_1491a868c body=533 status=ok
// SIG undefined FUN_1491a868c(void)

void FUN_1491a868c(longlong param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong *local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x780) == '\x01') {
    FUN_14448b00a(param_1);
    *(undefined1 *)(param_1 + 0x780) = 0;
  }
  if (*(char *)(param_1 + 0x6ba) == '\x01') {
    lVar3 = FUN_1491a88a2(param_1);
    if (lVar3 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
      local_70 = 0;
      FUN_14485c47a(&local_70,param_1);
      local_68 = local_70;
      iVar2 = FUN_1491cd238((uint)((ulonglong)local_70 >> 0x20) ^ (uint)local_70);
      lVar3 = (longlong)iVar2 * 0x20 + DAT_14cc06f30;
      if (iVar2 == -1) {
        lVar3 = 0;
      }
      if ((lVar3 != 0) && (0 < (longlong)*(int *)(lVar3 + 0x10))) {
        local_98 = (longlong *)(lVar3 + 8);
        lVar5 = *local_98;
        lVar6 = (longlong)*(int *)(lVar3 + 0x10) * 0x28;
        do {
          local_80 = (void *)0x0;
          local_78 = *(int *)(lVar5 + 0x20);
          lVar7 = (longlong)local_78;
          pvVar1 = *(void **)(lVar5 + 0x18);
          if (lVar7 == 0) {
            local_74 = 0;
          }
          else {
            FUN_1491ccc00(&local_80,local_78,0);
            memcpy(local_80,pvVar1,lVar7 << 4);
          }
          local_90 = (void *)0x0;
          local_88 = *(int *)(lVar5 + 0x10);
          lVar7 = (longlong)local_88;
          pvVar1 = *(void **)(lVar5 + 8);
          if (lVar7 == 0) {
            local_84 = 0;
          }
          else {
            FUN_1491ccb9e(&local_90,local_88,0);
            memcpy(local_90,pvVar1,lVar7 << 4);
          }
          uVar4 = FUN_14479d2ce(lVar5);
          local_a8 = 1;
          FUN_1491a2cc2(param_1,uVar4,&local_90,&local_80);
          lVar5 = lVar5 + 0x28;
          lVar6 = lVar6 + -0x28;
        } while (lVar6 != 0);
        iVar2 = *(int *)(lVar3 + 0x14);
        FUN_1491c3557(*(undefined8 *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0x10));
        *(undefined4 *)(lVar3 + 0x10) = 0;
        if ((iVar2 < 0) && (*(int *)(lVar3 + 0x14) != 0)) {
          FUN_1491cd668(local_98);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
    }
    FUN_14919a33c(param_1,param_2);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a88a2 FUN_1491a88a2 body=342 status=ok
// SIG undefined FUN_1491a88a2(void)

undefined8 FUN_1491a88a2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6c0) + 0x10);
    lVar2 = *(longlong *)(param_1 + 0x620);
    if ((((lVar2 == 0) || (lVar1 = FUN_1401242c6(), lVar1 == 0)) ||
        (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x620);
    }
    if (lVar4 == lVar2) goto LAB_1491a88f0;
    FUN_1491ac418(param_1,0);
  }
  lVar4 = *(longlong *)(param_1 + 0x620);
  if (((lVar4 != 0) && (lVar2 = FUN_1401242c6(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38) &&
      ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30 && (lVar4 = *(longlong *)(param_1 + 0x620), lVar4 != 0)))))) {
    lVar2 = FUN_1401242c6();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x620);
    }
    uVar3 = FUN_14575d845(param_1,uVar3,0,0,0,0,0,0);
    FUN_1491ac418(param_1,uVar3);
    if ((longlong)*(int *)(param_1 + 0x728) != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x720) + 8 + lVar4) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x720) + lVar4) != 0)) {
          FUN_1491ce6b4(param_1 + 0x720,param_1);
          break;
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x728) * 0x10 != lVar4);
    }
    FUN_1491a96aa(param_1);
  }
LAB_1491a88f0:
  return *(undefined8 *)(param_1 + 0x6c0);
}



// FUNCTION 1491a89f8 FUN_1491a89f8 body=72 status=ok
// SIG undefined FUN_1491a89f8(void)

undefined8 * FUN_1491a89f8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2a0,0x10);
  FUN_1406ff4f8(puVar1,param_1,0);
  *puVar1 = &PTR_FUN_14bb67b70;
  puVar1[0x53] = param_1;
  *(byte *)((longlong)puVar1 + 0x6f) = *(byte *)((longlong)puVar1 + 0x6f) & 0x7f;
  return puVar1;
}



// FUNCTION 1491a8a40 FUN_1491a8a40 body=2846 status=ok
// SIG undefined FUN_1491a8a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1491a8a40(longlong param_1,double *param_2,longlong param_3)

{
  longlong lVar1;
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
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  double *pdVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  char cVar20;
  double *pdVar21;
  longlong lVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auStack_318 [40];
  longlong local_2f0;
  code *local_2e8;
  double **local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined1 auStack_2c0 [16];
  double dStack_2b0;
  char local_2a8;
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
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double *local_178;
  double local_170;
  double local_168 [4];
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  dStack_2b0 = 0.0;
  local_2c8 = 0.0;
  auStack_2c0 = ZEXT816(0);
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2a8 = '\0';
  lVar19 = *(longlong *)(param_1 + 0x6c0);
  if (lVar19 != 0) {
    if ((*(char *)(param_1 + 0x6bd) == '\x01') && (0 < *(int *)(lVar19 + 0x180))) {
      lVar22 = 0;
      local_2f0 = param_3;
      do {
        auVar37 = _DAT_149934d80;
        lVar3 = *(longlong *)(lVar19 + 0x178);
        lVar18 = lVar22 * 0xd0;
        lVar1 = lVar3 + lVar18;
        auVar27 = *(undefined1 (*) [16])(param_1 + 0x280);
        dVar26 = auVar27._0_8_;
        dVar4 = auVar27._8_8_;
        dVar35 = SUB168(*(undefined1 (*) [16])(param_1 + 0x290),0);
        auVar2 = *(undefined1 (*) [16])(lVar3 + 0x80 + lVar18);
        auVar28 = *(undefined1 (*) [16])(lVar3 + 0x90 + lVar18);
        dVar40 = auVar28._0_8_;
        auVar27 = minpd(auVar2,auVar27);
        auVar33 = minpd(auVar28,*(undefined1 (*) [16])(param_1 + 0x290));
        auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
        auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
        iVar15 = movmskpd((int)lVar3,auVar28);
        auVar27._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
        auVar27._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
        uVar17 = movmskpd((int)lVar18,auVar27);
        if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
          dVar6 = *(double *)(lVar1 + 0x40);
          dVar7 = *(double *)(lVar1 + 0x48);
          dVar10 = *(double *)(lVar1 + 0x50);
          dVar11 = *(double *)(lVar1 + 0x58);
          dVar12 = *(double *)(param_1 + 0x240);
          dVar13 = *(double *)(param_1 + 0x248);
          dVar14 = *(double *)(param_1 + 0x250);
          dVar38 = *(double *)(param_1 + 600);
          dVar24 = *(double *)(param_1 + 600);
          dVar25 = *(double *)(param_1 + 0x240);
          dVar5 = *(double *)(param_1 + 0x240);
          dVar31 = *(double *)(param_1 + 0x248);
          dVar30 = *(double *)(param_1 + 0x248);
          dVar34 = *(double *)(param_1 + 0x250);
          dVar32 = *(double *)(param_1 + 0x250);
          dVar8 = dVar7 * dVar34 * -1.0 + dVar10 * dVar31 + dVar11 * dVar25 * 1.0 + dVar6 * dVar38;
          dVar9 = dVar6 * dVar32 * 1.0 + dVar11 * dVar30 + dVar10 * dVar5 * -1.0 + dVar7 * dVar24;
          auVar37._0_8_ =
               dVar11 * dVar34 * 1.0 + ((dVar25 * dVar7 * 1.0 + dVar10 * dVar38) - dVar6 * dVar31);
          auVar37._8_8_ =
               dVar10 * dVar32 * -1.0 + ((dVar5 * dVar6 * -1.0 + dVar11 * dVar24) - dVar7 * dVar30);
          dVar30 = *(double *)(lVar1 + 0x60) * dVar26;
          dVar31 = *(double *)(lVar1 + 0x68) * dVar4;
          dVar5 = *(double *)(lVar1 + 0x70) * dVar35;
          dVar25 = dVar31 * dVar12 - dVar13 * dVar30;
          dVar32 = dVar5 * dVar13 - dVar14 * dVar31;
          dVar34 = dVar30 * dVar14 - dVar12 * dVar5;
          dVar32 = dVar32 + dVar32;
          dVar34 = dVar34 + dVar34;
          dVar25 = dVar25 + dVar25;
          dVar30 = (dVar25 * dVar13 - dVar14 * dVar34) + dVar38 * dVar32 + dVar30 +
                   *(double *)(param_1 + 0x260);
          dVar31 = (dVar32 * dVar14 - dVar25 * dVar12) + dVar24 * dVar34 + dVar31 +
                   *(double *)(param_1 + 0x268);
          dVar24 = (dVar34 * dVar12 - dVar13 * dVar32) + dVar38 * dVar25 + dVar5 +
                   *(double *)(param_1 + 0x270);
        }
        else {
          dVar25 = *(double *)(param_1 + 0x240);
          dVar5 = *(double *)(param_1 + 0x248);
          dVar38 = *(double *)(param_1 + 0x250);
          dVar30 = dVar5 + dVar5;
          dVar31 = dVar38 + dVar38;
          dVar24 = dVar25 * (dVar25 + dVar25);
          local_1f8 = ((double)DAT_149934d80 - (dVar38 * dVar31 + dVar5 * dVar30)) * dVar26;
          dStack_1d0 = (DAT_149934d80._8_8_ - (dVar38 * dVar31 + dVar24)) * dVar4;
          local_1a8 = (1.0 - (dVar24 + dVar5 * dVar30)) * dVar35;
          dVar38 = *(double *)(param_1 + 0x240) * dVar31;
          dVar24 = *(double *)(param_1 + 600);
          dVar32 = dVar31 * dVar24;
          dVar34 = (dVar25 + dVar25) * *(double *)(param_1 + 600);
          dVar24 = dVar30 * dVar24;
          dStack_1f0 = (dVar30 * dVar25 + dVar32) * dVar26;
          local_1c8 = (dVar31 * dVar5 + dVar34) * dVar4;
          local_1b8 = (dVar24 + dVar38) * dVar35;
          local_1d8 = (dVar30 * dVar25 - dVar32) * dVar4;
          dStack_1b0 = (dVar31 * dVar5 - dVar34) * dVar35;
          local_1e8 = (dVar38 - dVar24) * dVar26;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = *(undefined8 *)(param_1 + 0x260);
          uStack_190 = *(undefined8 *)(param_1 + 0x268);
          local_188 = *(undefined8 *)(param_1 + 0x270);
          uStack_180 = 0x3ff0000000000000;
          dVar25 = *(double *)(lVar1 + 0x40);
          dVar5 = *(double *)(lVar1 + 0x48);
          dVar38 = *(double *)(lVar1 + 0x50);
          local_268 = *(double *)(lVar1 + 0x80);
          local_258 = *(double *)(lVar1 + 0x88);
          dStack_230 = *(double *)(lVar1 + 0x90);
          dVar34 = dVar5 + dVar5;
          dVar30 = dVar38 + dVar38;
          dVar24 = dVar25 * (dVar25 + dVar25);
          local_278 = ((double)DAT_149934d80 - (dVar38 * dVar30 + dVar5 * dVar34)) * local_268;
          dStack_250 = (DAT_149934d80._8_8_ - (dVar38 * dVar30 + dVar24)) * local_258;
          local_228 = (1.0 - (dVar24 + dVar5 * dVar34)) * dStack_230;
          dVar38 = *(double *)(lVar1 + 0x40) * dVar30;
          dVar24 = *(double *)(lVar1 + 0x58);
          dVar31 = dVar30 * dVar24;
          dVar32 = (dVar25 + dVar25) * *(double *)(lVar1 + 0x58);
          dVar24 = dVar34 * dVar24;
          dStack_270 = (dVar34 * dVar25 + dVar31) * local_268;
          local_248 = (dVar30 * dVar5 + dVar32) * local_258;
          local_238 = (dVar24 + dVar38) * dStack_230;
          local_268 = (dVar38 - dVar24) * local_268;
          local_258 = (dVar34 * dVar25 - dVar31) * local_258;
          dStack_230 = (dVar30 * dVar5 - dVar32) * dStack_230;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = *(undefined8 *)(lVar1 + 0x60);
          uStack_210 = *(undefined8 *)(lVar1 + 0x68);
          local_208 = *(undefined8 *)(lVar1 + 0x70);
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_178,&local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar33._8_8_ = -(ulonglong)(0.0 <= auVar2._8_8_ * dVar4);
          auVar33._0_8_ = -(ulonglong)(0.0 <= auVar2._0_8_ * dVar26);
          auVar27 = blendvpd(_DAT_149936790,auVar37,auVar33);
          uVar23 = -(ulonglong)(0.0 <= dVar40 * dVar35);
          dVar24 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
          dVar38 = auVar27._0_8_;
          local_168[0] = local_168[0] * dVar38;
          local_170 = local_170 * dVar38;
          local_178 = (double *)((double)local_178 * dVar38);
          dVar38 = auVar27._8_8_;
          local_148 = local_148 * dVar38;
          local_168[3] = local_168[3] * dVar38;
          local_168[2] = dVar38 * local_168[2];
          local_128 = local_128 * dVar24;
          local_130 = local_130 * dVar24;
          local_138 = dVar24 * local_138;
          FUN_14481fd10(&local_298,&local_178);
          dVar24 = local_288 * local_288 + local_298 * local_298;
          dVar38 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar36._0_8_ = dVar24 + dVar38;
          auVar36._8_8_ = dVar24 + dVar38;
          auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
          auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
          auVar27 = sqrtpd(auVar36,auVar36);
          auVar27 = divpd(auVar37,auVar27);
          auVar39._0_8_ = auVar27._0_8_ * local_288;
          auVar39._8_8_ = auVar27._8_8_ * dStack_280;
          dVar8 = (double)((ulonglong)(local_298 * auVar27._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
          dVar9 = (double)((ulonglong)(dStack_290 * auVar27._8_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
          auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar29);
          dVar24 = local_108;
          dVar30 = local_118;
          dVar31 = dStack_110;
        }
        if ((longlong)*(int *)(lVar1 + 0x18) != 0) {
          pdVar16 = *(double **)(lVar1 + 0x10);
          pdVar21 = pdVar16 + (longlong)*(int *)(lVar1 + 0x18) * 3;
          dVar38 = auVar37._0_8_;
          dVar25 = auVar37._8_8_;
          cVar20 = local_2a8;
          do {
            dVar32 = *pdVar16 * auVar2._0_8_ * dVar26;
            dVar34 = pdVar16[1] * auVar2._8_8_ * dVar4;
            dVar10 = pdVar16[2] * dVar40 * dVar35;
            dVar5 = dVar34 * dVar8 - dVar9 * dVar32;
            dVar6 = dVar10 * dVar9 - dVar38 * dVar34;
            dVar7 = dVar32 * dVar38 - dVar8 * dVar10;
            dVar6 = dVar6 + dVar6;
            dVar7 = dVar7 + dVar7;
            dVar5 = dVar5 + dVar5;
            dVar32 = (dVar5 * dVar9 - dVar7 * dVar38) + dVar25 * dVar6 + dVar32 + dVar30;
            dVar34 = (dVar38 * dVar6 - dVar8 * dVar5) + dVar25 * dVar7 + dVar34 + dVar31;
            dVar5 = dVar5 * dVar25 + dVar10 + (dVar7 * dVar8 - dVar6 * dVar9) + dVar24;
            if (cVar20 == '\0') {
              auStack_2c0._8_4_ = SUB84(dVar34,0);
              auStack_2c0._0_8_ = dVar32;
              auStack_2c0._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
              dStack_2d0 = (double)auStack_2c0._8_8_;
              local_2a8 = '\x01';
              cVar20 = '\x01';
              dStack_2b0 = dVar5;
              local_2d8 = dVar32;
              local_2c8 = dVar5;
            }
            else {
              if (dVar32 <= local_2d8) {
                local_2d8 = dVar32;
              }
              if (dVar34 <= dStack_2d0) {
                dStack_2d0 = dVar34;
              }
              if (dVar5 <= local_2c8) {
                local_2c8 = dVar5;
              }
              dVar6 = (double)auStack_2c0._0_8_;
              if ((double)auStack_2c0._0_8_ <= dVar32) {
                dVar6 = dVar32;
              }
              if ((double)auStack_2c0._8_8_ <= dVar34) {
                auStack_2c0._8_8_ = dVar34;
              }
              auStack_2c0._0_8_ = dVar6;
              if (dStack_2b0 <= dVar5) {
                dStack_2b0 = dVar5;
              }
            }
            pdVar16 = pdVar16 + 3;
          } while (pdVar16 != pdVar21);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < *(int *)(lVar19 + 0x180));
      lVar19 = *(longlong *)(param_1 + 0x6c0);
      param_3 = local_2f0;
    }
    dVar26 = *(double *)(lVar19 + 0x2f8);
    if (dVar26 != 0.0) {
      local_178 = &local_2d8;
      pdVar21 = (double *)(param_1 + 0x240);
      pdVar16 = local_168;
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar16 = *pdVar21;
        pdVar21 = pdVar21 + 1;
        pdVar16 = pdVar16 + 1;
      }
      local_2e0 = &local_178;
      local_2e8 = FUN_144495b96;
      local_108 = dVar26;
      FUN_1491a9560(dVar26);
    }
    if (local_2a8 != '\0') {
      dVar26 = (dStack_2b0 - local_2c8) * 0.5;
      dVar35 = ((double)auStack_2c0._8_8_ - dStack_2d0) * 0.5;
      dVar40 = ((double)auStack_2c0._0_8_ - local_2d8) * 0.5;
      *param_2 = local_2d8 + dVar40;
      param_2[1] = dStack_2d0 + dVar35;
      param_2[2] = local_2c8 + dVar26;
      param_2[3] = dVar40;
      param_2[4] = dVar35;
      param_2[5] = dVar26;
      dVar26 = SQRT(dVar26 * dVar26 + dVar40 * dVar40 + dVar35 * dVar35);
      goto LAB_1491a9482;
    }
  }
  dVar35 = *(double *)(param_3 + 0x28);
  dVar26 = *(double *)(param_3 + 0x30);
  *param_2 = *(double *)(param_3 + 0x20);
  param_2[1] = dVar35;
  param_2[2] = dVar26;
  param_2[3] = 1.0;
  param_2[4] = 1.0;
  param_2[5] = 1.0;
  dVar26 = 1.0;
LAB_1491a9482:
  param_2[6] = dVar26;
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491a9560 FUN_1491a9560 body=173 status=ok
// SIG undefined FUN_1491a9560(void)

void FUN_1491a9560(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar4 = *(int *)(param_1 + 0xc0);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar5 * 8);
      if (lVar2 != 0) {
        bVar1 = *(byte *)(lVar2 + 0x10);
        if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
           (bVar1 == 0x80)) {
          local_38 = lVar2;
          cVar3 = (*(code *)*param_2)(param_2[1],&local_38);
          if (cVar3 == '\0') break;
          iVar4 = *(int *)(param_1 + 0xc0);
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491a960e FUN_1491a960e body=69 status=ok
// SIG undefined FUN_1491a960e(void)

void FUN_1491a960e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1 + 0x628,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a9654 FUN_1491a9654 body=84 status=ok
// SIG undefined FUN_1491a9654(void)

void FUN_1491a9654(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1491a96aa();
  local_20 = param_2;
  FUN_1447cd2ec(param_1 + 0x638);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a96aa FUN_1491a96aa body=2264 status=ok
// SIG undefined FUN_1491a96aa(void)

void FUN_1491a96aa(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  void *_Src;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  longlong **pplVar16;
  longlong **pplVar17;
  longlong **pplVar18;
  int iVar19;
  undefined1 auStack_178 [32];
  longlong **local_158;
  longlong *local_150;
  undefined1 local_144 [4];
  longlong *local_140;
  longlong *local_138;
  undefined8 uStack_130;
  longlong **local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  void *pvStack_100;
  ulonglong local_f8;
  undefined1 local_ec [4];
  longlong **local_e8;
  longlong **pplStack_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_a8 = 0;
  iVar19 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  if ((param_1[0xd8] != 0) && ((longlong)(int)param_1[0xd4] != 0)) {
    pplVar17 = (longlong **)param_1[0xd3];
    pplVar16 = pplVar17 + (longlong)(int)param_1[0xd4] * 0x1e;
    local_158 = pplVar16;
    do {
      pplVar17[0x1c] = (longlong *)0xffffffffffffffff;
      lVar11 = FUN_1404101e2(pplVar17 + 4);
      if (lVar11 == 0) {
        lVar11 = param_1[0x15];
      }
      else {
        lVar11 = FUN_1404101e2(pplVar17 + 4);
      }
      plVar12 = (longlong *)FUN_147a9063e(pplVar17,lVar11);
      if (plVar12 == (longlong *)0x0) {
LAB_1491a9a18:
        pplVar17[0x1b] = (longlong *)0x0;
        local_f8 = 0;
        local_108 = (longlong *)0x0;
        pvStack_100 = (void *)0x0;
        local_118 = (longlong *)0x0;
        uStack_110 = (longlong *)0x0;
        local_128 = (longlong **)0x0;
        uStack_120 = (longlong *)0x0;
        local_138 = (longlong *)0x0;
        uStack_130 = (longlong **)0x0;
        FUN_1400021e4(pplVar17,&local_e8);
        if (uStack_130 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        uStack_130 = local_e8;
        local_128 = pplStack_e0;
        plVar12 = (longlong *)FUN_147a9063e(&local_138,lVar11);
        if (plVar12 != (longlong *)0x0) {
          lVar11 = FUN_144a799b0();
          pplVar18 = uStack_130;
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30)) {
            *pplVar17 = local_138;
            if (pplVar17 == &local_138) {
              pplVar17[3] = uStack_120;
              pplVar17[4] = local_118;
              pplVar17[5] = uStack_110;
              pplVar17[6] = local_108;
            }
            else {
              iVar4 = (int)local_128;
              lVar11 = (longlong)(int)local_128;
              *(int *)(pplVar17 + 2) = (int)local_128;
              if ((int)local_128 == 0 && *(int *)((longlong)pplVar17 + 0x14) == 0) {
                *(undefined4 *)((longlong)pplVar17 + 0x14) = 0;
              }
              else {
                FUN_1446dd670(pplVar17 + 1,(ulonglong)local_128 & 0xffffffff);
                if (iVar4 != 0) {
                  memcpy(pplVar17[1],pplVar18,lVar11 * 2);
                }
              }
              _Src = pvStack_100;
              pplVar17[3] = uStack_120;
              pplVar17[4] = local_118;
              *(undefined4 *)(pplVar17 + 5) = (undefined4)uStack_110;
              *(undefined4 *)((longlong)pplVar17 + 0x2c) = uStack_110._4_4_;
              *(undefined4 *)(pplVar17 + 6) = (undefined4)local_108;
              *(undefined4 *)((longlong)pplVar17 + 0x34) = local_108._4_4_;
              iVar4 = (int)local_f8;
              lVar11 = (longlong)(int)local_f8;
              *(int *)(pplVar17 + 8) = (int)local_f8;
              if ((int)local_f8 == 0 && *(int *)((longlong)pplVar17 + 0x44) == 0) {
                *(undefined4 *)((longlong)pplVar17 + 0x44) = 0;
              }
              else {
                FUN_1446dd670(pplVar17 + 7,local_f8 & 0xffffffff);
                if (iVar4 != 0) {
                  memcpy(pplVar17[7],_Src,lVar11 * 2);
                }
              }
            }
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar12);
            }
            pplVar17[0x1b] = plVar12;
            pplVar16 = local_158;
          }
        }
        if (pvStack_100 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (uStack_130 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        plVar12 = pplVar17[0x1b];
      }
      else {
        lVar13 = FUN_144a799b0();
        if ((*(int *)(plVar12[2] + 0x38) < *(int *)(lVar13 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
            != lVar13 + 0x30)) goto LAB_1491a9a18;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(plVar12);
        }
        pplVar17[0x1b] = plVar12;
      }
      if ((plVar12 != param_1 && plVar12 != (longlong *)0x0) && (pplVar17[0xb] != (longlong *)0x0))
      {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(plVar12);
        }
        local_138 = (longlong *)0x0;
        FUN_14485c47a(&local_138,plVar12);
        pplVar17[3] = local_138;
        if ((*(char *)(pplVar17 + 0xc) != '\x01') || (1e-08 < *(float *)(pplVar17 + 0x1a))) {
          local_144[0] = *(undefined1 *)((longlong)pplVar17 + 0x54);
          local_140 = pplVar17[0xb];
          uVar9 = FUN_140813180(*(undefined8 *)(param_1[0xd8] + 0x2f8),local_144);
          *(undefined4 *)(pplVar17 + 0x1c) = uVar9;
          *(undefined4 *)((longlong)pplVar17 + 0xe4) = *(undefined4 *)(pplVar17 + 9);
          if (pplVar17[0x1b] != (longlong *)0x0) {
            lVar11 = FUN_144a74fb4();
            plVar12 = pplVar17[0x1b];
            if ((((plVar12 != (longlong *)0x0) && (lVar11 != 0)) &&
                (lVar13 = plVar12[2], lVar13 != 0)) &&
               ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar13 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                 == lVar11 + 0x30)))) {
              *(undefined4 *)((longlong)pplVar17 + 0xe4) = 0xffffffff;
              iVar4 = *(int *)(pplVar17 + 9);
              local_150 = plVar12;
              if ((iVar4 < 0) || (iVar10 = FUN_1417c02a0(), iVar10 <= iVar4)) {
                if (*(longlong *)((longlong)pplVar17 + 0x4c) != 0) {
                  plVar12 = (longlong *)FUN_144a81888(local_150);
                  if (plVar12 != (longlong *)0x0) {
                    lVar11 = (**(code **)(*plVar12 + 0x3f8))(plVar12);
                    if (lVar11 == 0) {
                      local_e8 = (longlong **)0x0;
                      pplStack_e0 = (longlong **)0x0;
                      FUN_1401031ac(plVar12,0,&local_e8);
                      pplVar18 = (longlong **)&DAT_149dfb77a;
                      if ((int)pplStack_e0 != 0) {
                        pplVar18 = local_e8;
                      }
                      FUN_140002266(&local_138,L"%s does not have a Skeleton set.",pplVar18);
                      if (local_138 != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_e8 != (longlong **)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    else {
                      if (*(char *)((longlong)pplVar17 + 0x54) == '\b') goto LAB_1491a9bee;
                      uVar9 = FUN_144909502(local_150,*(undefined8 *)((longlong)pplVar17 + 0x4c));
                      *(undefined4 *)((longlong)pplVar17 + 0xe4) = uVar9;
                    }
                  }
                  if ((*(char *)((longlong)pplVar17 + 0x54) != '\b') &&
                     (*(int *)((longlong)pplVar17 + 0xe4) == -1)) {
                    *(undefined4 *)(pplVar17 + 0x1c) = 0xffffffff;
                    goto LAB_1491a9adb;
                  }
                }
              }
              else {
                *(undefined4 *)((longlong)pplVar17 + 0xe4) = *(undefined4 *)(pplVar17 + 9);
              }
LAB_1491a9bee:
              plVar12 = local_150;
              if (*(char *)(pplVar17 + 0xc) == '\x01') {
                if ((int)uStack_c0 != local_94) {
                  uVar8 = ((uint)((ulonglong)local_150 >> 0x14) & 0xffff ^
                          (uint)((ulonglong)local_150 >> 4)) * -0x7a143595;
                  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
                  puVar14 = local_88;
                  if (local_88 == (undefined1 *)0x0) {
                    puVar14 = local_90;
                  }
                  for (iVar4 = *(int *)(puVar14 +
                                       (ulonglong)(local_80 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
                      iVar4 != -1; iVar4 = *(int *)(local_c8 + (longlong)iVar4 * 0x28 + 0x20)) {
                    if (*(longlong **)(local_c8 + (longlong)iVar4 * 0x28) == local_150)
                    goto LAB_1491a9cf9;
                  }
                }
                local_138 = (longlong *)0x0;
                lVar11 = FUN_144a7a45a(local_150);
                if (lVar11 != 0) {
                  local_138 = *(longlong **)(lVar11 + 0x10);
                }
                uStack_130 = (longlong **)FUN_1407351d2(plVar12);
                local_128 = (longlong **)
                            (CONCAT71(local_128._1_7_,*(byte *)((longlong)plVar12 + 0x4a) >> 1) &
                            0xffffffffffffff01);
                local_e8 = &local_150;
                pplStack_e0 = &local_138;
                FUN_1491cedba(&local_c8,local_ec,&local_e8);
LAB_1491a9cf9:
                lVar11 = FUN_144a7a45a(local_150);
                if (lVar11 != 0) {
                  uVar15 = FUN_140732678();
                  lVar11 = FUN_144718840(lVar11,uVar15);
                  if (lVar11 != 0) goto LAB_1491a9adb;
                }
                plVar12 = local_150;
                uVar15 = FUN_145b9eaf0();
                (**(code **)(*plVar12 + 0xc48))(plVar12,uVar15);
              }
            }
          }
        }
      }
LAB_1491a9adb:
      pplVar17 = pplVar17 + 0x1e;
    } while (pplVar17 != pplVar16);
  }
  plVar12 = param_1 + 0xda;
  plVar1 = param_1 + 0xdc;
  local_e8 = (longlong **)0x100000000;
  local_d8 = 0xffffffff;
  iStack_d4 = 0;
  local_d0 = 0;
  pplStack_e0 = (longlong **)plVar1;
  if ((int)param_1[0xdf] != 0) {
    FUN_1449c0562(&local_e8);
    iVar19 = (int)param_1[0xdf];
  }
  uStack_120._0_4_ = local_d8;
  uStack_120._4_4_ = iStack_d4;
  local_118 = (longlong *)CONCAT44(local_cc,local_d0);
  uStack_130 = local_e8;
  local_128 = pplStack_e0;
  local_138 = plVar12;
  if ((iStack_d4 != iVar19) || (pplStack_e0 != (longlong **)plVar1)) {
    do {
      puVar2 = (ulonglong *)(*local_138 + (longlong)uStack_120._4_4_ * 0x28);
      plVar5 = (longlong *)*puVar2;
      if ((int)uStack_c0 != local_94) {
        uVar8 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        puVar14 = local_88;
        if (local_88 == (undefined1 *)0x0) {
          puVar14 = local_90;
        }
        iVar4 = *(int *)(puVar14 + (ulonglong)(local_80 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
        while (iVar4 != -1) {
          puVar3 = (ulonglong *)(local_c8 + (longlong)iVar4 * 0x28);
          if ((longlong *)*puVar3 == plVar5) {
            if (puVar3 + 1 != (ulonglong *)0x0 && puVar3 != (ulonglong *)0x0) {
              puVar3[3] = puVar2[3];
              uVar9 = *(undefined4 *)((longlong)puVar2 + 0xc);
              uVar7 = puVar2[2];
              uVar6 = *(undefined4 *)((longlong)puVar2 + 0x14);
              *(int *)(puVar3 + 1) = (int)puVar2[1];
              *(undefined4 *)((longlong)puVar3 + 0xc) = uVar9;
              *(int *)(puVar3 + 2) = (int)uVar7;
              *(undefined4 *)((longlong)puVar3 + 0x14) = uVar6;
              goto LAB_1491a98b5;
            }
            break;
          }
          iVar4 = (int)puVar3[4];
        }
      }
      (**(code **)(*plVar5 + 0xc48))(plVar5,puVar2[1]);
      *(byte *)((longlong)plVar5 + 0x4a) =
           *(byte *)((longlong)plVar5 + 0x4a) & 0xfd | (char)puVar2[3] * '\x02';
LAB_1491a98b5:
      uStack_120._0_4_ = (uint)uStack_120 & ~uStack_130._4_4_;
      FUN_1449c0562(&uStack_130);
    } while (local_138 != plVar12 ||
             (local_128 != (longlong **)plVar1 || uStack_120._4_4_ != iVar19));
  }
  FUN_1491c3622(plVar12,&local_c8);
  local_80 = 0;
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145dea8be(&local_c8);
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a9f84 FUN_1491a9f84 body=69 status=ok
// SIG undefined FUN_1491a9f84(void)

void FUN_1491a9f84(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1 + 0x648,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491a9fca FUN_1491a9fca body=69 status=ok
// SIG undefined FUN_1491a9fca(void)

void FUN_1491a9fca(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1 + 0x658,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491aa010 FUN_1491aa010 body=69 status=ok
// SIG undefined FUN_1491aa010(void)

void FUN_1491aa010(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1 + 0x668,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491aa056 FUN_1491aa056 body=69 status=ok
// SIG undefined FUN_1491aa056(void)

void FUN_1491aa056(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1 + 0x678,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491aa09c FUN_1491aa09c body=95 status=ok
// SIG undefined FUN_1491aa09c(void)

undefined8 * FUN_1491aa09c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145dea87b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491cc9a8(param_1,iVar1);
      FUN_1491cca1a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1491aa0fc FUN_1491aa0fc body=4751 status=ok
// SIG undefined FUN_1491aa0fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491aa0fc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  double dVar6;
  undefined4 uVar8;
  double dVar9;
  void *_Src;
  undefined8 uVar10;
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
  char cVar21;
  int iVar22;
  double dVar23;
  uint uVar24;
  longlong lVar25;
  double *pdVar26;
  longlong lVar27;
  double *pdVar28;
  uint uVar29;
  double *pdVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar46 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar55;
  double dVar56;
  undefined1 auVar53 [16];
  double dVar57;
  undefined1 auVar54 [16];
  undefined1 auStack_338 [32];
  uint local_318;
  undefined1 local_310;
  undefined1 local_308;
  longlong local_300;
  double local_2f8 [2];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
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
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
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
  double dVar7;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  *(undefined1 *)(param_1 + 0x739) = 1;
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    local_300 = param_1 + 0x740;
    *(undefined4 *)(param_1 + 0x748) = 0;
    if (*(int *)(param_1 + 0x74c) < 0) {
      FUN_14481578e(local_300,0);
    }
    plVar2 = (longlong *)(param_1 + 0x750);
    *(undefined4 *)(param_1 + 0x758) = 0;
    if (*(int *)(param_1 + 0x75c) < 0) {
      FUN_1401a2688(plVar2,0);
    }
    dVar23 = (double)(longlong)*(int *)(param_1 + 0x6a0);
    if (dVar23 != 0.0) {
      lVar31 = *(longlong *)(param_1 + 0x698);
      lVar33 = (longlong)dVar23 * 0xf0;
      lVar32 = 0;
      do {
        if ((*(int *)(lVar31 + 0xe0 + lVar32) != -1) &&
           (*(char *)(lVar31 + 0x60 + lVar32) != '\x01')) {
          pdVar26 = (double *)&DAT_14c846480;
          pdVar30 = local_2f8;
          for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
            *pdVar30 = *pdVar26;
            pdVar26 = pdVar26 + 1;
            pdVar30 = pdVar30 + 1;
          }
          lVar25 = *(longlong *)(lVar31 + 0xd8 + lVar32);
          if (*(int *)(lVar31 + 0xe4 + lVar32) < 0) {
            pdVar26 = (double *)(lVar25 + 0x240);
            pdVar30 = local_2f8;
            for (lVar27 = 0xc; pdVar28 = (double *)0x0, lVar27 != 0; lVar27 = lVar27 + -1) {
              *pdVar30 = *pdVar26;
              pdVar26 = pdVar26 + 1;
              pdVar30 = pdVar30 + 1;
            }
          }
          else {
            pdVar28 = (double *)0x0;
            if (lVar25 != 0) {
              dVar23 = (double)FUN_144a74fb4();
              pdVar28 = *(double **)(lVar31 + 0xd8 + lVar32);
              if (pdVar28 != (double *)0x0) {
                if ((((dVar23 == 0.0) || (dVar9 = pdVar28[2], dVar9 == 0.0)) ||
                    (*(int *)((longlong)dVar9 + 0x38) < *(int *)((longlong)dVar23 + 0x38))) ||
                   (*(longlong *)
                     (*(longlong *)((longlong)dVar9 + 0x30) +
                     (longlong)*(int *)((longlong)dVar23 + 0x38) * 8) != (longlong)dVar23 + 0x30U))
                {
                  dVar23 = (double)FUN_144a80466();
                  pdVar26 = *(double **)(lVar31 + 0xd8 + lVar32);
                  if (((pdVar26 != (double *)0x0) && (dVar23 != 0.0)) &&
                     ((pdVar30 = (double *)pdVar26[2], pdVar28 = pdVar30, pdVar30 != (double *)0x0
                      && (piVar1 = (int *)((longlong)dVar23 + 0x38),
                         *piVar1 <= *(int *)(pdVar30 + 7))))) {
                    dVar23 = (double)((longlong)dVar23 + 0x30);
                    pdVar28 = (double *)pdVar30[6];
                    if (((double *)pdVar30[6])[*piVar1] == dVar23) {
                      iVar22 = *(int *)(lVar31 + 0xe4 + lVar32);
                      dVar23 = (double)(**(code **)((longlong)*pdVar26 + 0xbb0))(pdVar26);
                      if (SUB84(dVar23,0) <= iVar22) goto LAB_1491aa223;
                      dVar23 = (double)FUN_1410499a6(pdVar26,*(undefined4 *)(lVar31 + 0xe4 + lVar32)
                                                     ,local_2f8,1);
                      pdVar28 = pdVar26;
                    }
                  }
                }
                else {
                  pdVar26 = local_178;
                  dVar23 = (double)FUN_140084aae(pdVar28,local_178,
                                                 *(undefined4 *)(lVar31 + 0xe4 + lVar32),
                                                 &DAT_14c846480);
                  auVar40 = _DAT_149934d80;
                  pdVar30 = local_178;
                  pdVar28 = local_2f8;
                  for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
                    *pdVar28 = *pdVar30;
                    pdVar30 = pdVar30 + 1;
                    pdVar28 = pdVar28 + 1;
                  }
                  pdVar28 = (double *)0x0;
                  if (*(char *)(lVar31 + 0xd4 + lVar32) == '\0') {
                    dVar23 = *(double *)(lVar31 + 0xd8 + lVar32);
                    auVar42 = *(undefined1 (*) [16])((longlong)dVar23 + 0x280);
                    dVar9 = auVar42._0_8_;
                    dVar14 = auVar42._8_8_;
                    auVar53 = *(undefined1 (*) [16])((longlong)dVar23 + 0x290);
                    dVar11 = auVar53._0_8_;
                    dVar12 = local_2b8._0_8_;
                    dVar15 = local_2b8._8_8_;
                    dVar13 = local_2a8._0_8_;
                    dVar16 = local_2a8._8_8_;
                    auVar42 = minpd(local_2b8,auVar42);
                    auVar46 = minpd(local_2a8,auVar53);
                    auVar45._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
                    auVar45._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
                    uVar24 = movmskpd(0,auVar45);
                    pdVar28 = (double *)(ulonglong)uVar24;
                    auVar42._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
                    auVar42._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
                    uVar29 = movmskpd((int)pdVar26,auVar42);
                    if ((uVar29 & 0x3fffffff) == 0 && uVar24 == 0) {
                      dVar18 = *(double *)((longlong)dVar23 + 0x240);
                      dVar19 = *(double *)((longlong)dVar23 + 0x248);
                      dVar20 = *(double *)((longlong)dVar23 + 0x250);
                      dVar43 = *(double *)((longlong)dVar23 + 600);
                      dVar48 = *(double *)((longlong)dVar23 + 600U);
                      dVar51 = *(double *)((longlong)dVar23 + 600U);
                      dVar6 = *(double *)((longlong)dVar23 + 0x240U);
                      dVar56 = *(double *)((longlong)dVar23 + 0x240U);
                      dVar50 = dVar6 * local_2f8[1];
                      dVar55 = dVar56 * local_2f8[0];
                      dVar7 = *(double *)((longlong)dVar23 + 0x248U);
                      dVar52 = *(double *)((longlong)dVar23 + 0x248U);
                      dVar57 = local_2f8[0] * dVar7;
                      dVar17 = local_2f8[1] * dVar52;
                      dVar49 = *(double *)((longlong)dVar23 + 0x250U);
                      dVar47 = *(double *)((longlong)dVar23 + 0x250U);
                      dVar44 = local_2f8[0] * dVar47;
                      dVar47 = (double)local_2e8._0_8_ * dVar47;
                      local_2f8[0] = local_2f8[1] * dVar49 * -1.0 +
                                     (double)local_2e8._0_8_ * dVar7 +
                                     (double)local_2e8._8_8_ * dVar6 * 1.0 + local_2f8[0] * dVar48;
                      local_2f8[1] = dVar44 * 1.0 +
                                     (double)local_2e8._8_8_ * dVar52 +
                                     (double)local_2e8._0_8_ * dVar56 * -1.0 + local_2f8[1] * dVar51
                      ;
                      local_2e8._0_8_ =
                           (double)local_2e8._8_8_ * dVar49 * 1.0 +
                           ((dVar50 * 1.0 + (double)local_2e8._0_8_ * dVar48) - dVar57);
                      local_2e8._8_8_ =
                           dVar47 * -1.0 +
                           ((dVar55 * -1.0 + (double)local_2e8._8_8_ * dVar51) - dVar17);
                      dVar7 = (double)local_2d8._0_8_ * dVar9;
                      dVar47 = (double)local_2d8._8_8_ * dVar14;
                      dVar50 = (double)local_2c8._0_8_ * dVar11;
                      dVar55 = (double)local_2c8._8_8_ * auVar53._8_8_;
                      dVar56 = dVar47 * dVar18 - dVar19 * dVar7;
                      dVar6 = dVar50 * dVar19 - dVar20 * dVar47;
                      dVar52 = dVar7 * dVar20 - dVar18 * dVar50;
                      dVar49 = dVar55 * dVar43 - dVar43 * dVar55;
                      dVar6 = dVar6 + dVar6;
                      dVar52 = dVar52 + dVar52;
                      dVar56 = dVar56 + dVar56;
                      dVar49 = dVar49 + dVar49;
                      dVar7 = (dVar56 * dVar19 - dVar20 * dVar52) + dVar48 * dVar6 + dVar7 +
                              *(double *)((longlong)dVar23 + 0x260);
                      dVar47 = (dVar6 * dVar20 - dVar56 * dVar18) + dVar51 * dVar52 + dVar47 +
                               *(double *)((longlong)dVar23 + 0x268);
                      dVar48 = (dVar52 * dVar18 - dVar19 * dVar6) + dVar48 * dVar56 + dVar50 +
                               *(double *)((longlong)dVar23 + 0x270);
                      dVar51 = (dVar49 * dVar43 - dVar49 * dVar43) + dVar51 * dVar49 + dVar55 +
                               *(double *)((longlong)dVar23 + 0x278);
                    }
                    else {
                      dVar7 = *(double *)((longlong)dVar23 + 0x240);
                      dVar52 = *(double *)((longlong)dVar23 + 0x248);
                      dVar47 = *(double *)((longlong)dVar23 + 0x250);
                      dVar49 = dVar52 + dVar52;
                      dVar50 = dVar47 + dVar47;
                      dVar51 = dVar7 * (dVar7 + dVar7);
                      local_1a8 = (1.0 - (dVar51 + dVar52 * dVar49)) * dVar11;
                      dVar6 = *(double *)((longlong)dVar23 + 0x240) * dVar50;
                      dVar48 = *(double *)((longlong)dVar23 + 600U);
                      dVar55 = dVar50 * dVar48;
                      dVar57 = (dVar7 + dVar7) * *(double *)((longlong)dVar23 + 600U);
                      dVar48 = dVar49 * dVar48;
                      local_1b8 = (dVar48 + dVar6) * dVar11;
                      dVar51 = (DAT_149934d80._8_8_ - (dVar47 * dVar50 + dVar51)) * dVar14;
                      dVar56 = (dVar49 * dVar7 + dVar55) * dVar9;
                      local_1c8 = (dVar50 * dVar52 + dVar57) * dVar14;
                      dStack_1b0 = (dVar50 * dVar52 - dVar57) * dVar11;
                      local_1e8 = (dVar6 - dVar48) * dVar9;
                      local_1f8._8_4_ = SUB84(dVar56,0);
                      local_1f8._0_8_ =
                           ((double)DAT_149934d80 - (dVar47 * dVar50 + dVar52 * dVar49)) * dVar9;
                      local_1f8._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
                      uStack_1e0 = 0;
                      local_1d8._8_4_ = SUB84(dVar51,0);
                      local_1d8._0_8_ = (dVar49 * dVar7 - dVar55) * dVar14;
                      local_1d8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
                      uStack_1c0 = 0;
                      uStack_1a0 = 0;
                      local_198 = *(undefined8 *)((longlong)dVar23 + 0x260);
                      uStack_190 = *(undefined8 *)((longlong)dVar23 + 0x268);
                      local_188 = *(undefined8 *)((longlong)dVar23 + 0x270);
                      uStack_180 = 0x3ff0000000000000;
                      dVar48 = local_2f8[1] + local_2f8[1];
                      dVar51 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
                      dVar23 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
                      local_228 = (1.0 - (dVar23 + local_2f8[1] * dVar48)) * dVar13;
                      dVar56 = (local_2f8[0] + local_2f8[0]) * (double)local_2e8._8_8_;
                      local_238 = (dVar48 * (double)local_2e8._8_8_ + local_2f8[0] * dVar51) *
                                  dVar13;
                      dStack_230 = (dVar51 * local_2f8[1] - dVar56) * dVar13;
                      local_278 = ((double)DAT_149934d80 -
                                  ((double)local_2e8._0_8_ * dVar51 + local_2f8[1] * dVar48)) *
                                  dVar12;
                      dVar23 = (DAT_149934d80._8_8_ - ((double)local_2e8._0_8_ * dVar51 + dVar23)) *
                               dVar15;
                      dStack_270 = (dVar48 * local_2f8[0] + dVar51 * (double)local_2e8._8_8_) *
                                   dVar12;
                      local_248 = (dVar51 * local_2f8[1] + dVar56) * dVar15;
                      local_268 = (local_2f8[0] * dVar51 - dVar48 * (double)local_2e8._8_8_) *
                                  dVar12;
                      uStack_260 = 0;
                      local_258._8_4_ = SUB84(dVar23,0);
                      local_258._0_8_ =
                           (dVar48 * local_2f8[0] - dVar51 * (double)local_2e8._8_8_) * dVar15;
                      local_258._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                      uStack_240 = 0;
                      uStack_220 = 0;
                      local_218 = (double)local_2d8._0_8_;
                      dStack_210 = (double)local_2d8._8_8_;
                      local_208 = (double)local_2c8._0_8_;
                      uStack_200 = 0x3ff0000000000000;
                      FUN_1447fea8d(local_178,&local_278,local_1f8);
                      FUN_144a1c686(local_178,0x3e45798ee0000000);
                      auVar46._8_8_ = -(ulonglong)(0.0 <= dVar14 * dVar15);
                      auVar46._0_8_ = -(ulonglong)(0.0 <= dVar9 * dVar12);
                      auVar42 = blendvpd(_DAT_149936790,auVar40,auVar46);
                      uVar34 = -(ulonglong)(0.0 <= dVar11 * dVar13);
                      dVar23 = (double)(~uVar34 & 0xbff0000000000000 | uVar34 & 0x3ff0000000000000);
                      dVar48 = auVar42._0_8_;
                      local_178[2] = local_178[2] * dVar48;
                      local_178[1] = local_178[1] * dVar48;
                      local_178[0] = local_178[0] * dVar48;
                      dVar48 = auVar42._8_8_;
                      local_148 = local_148 * dVar48;
                      local_150 = local_150 * dVar48;
                      local_158 = dVar48 * local_158;
                      local_128 = local_128 * dVar23;
                      local_130 = local_130 * dVar23;
                      local_138 = dVar23 * local_138;
                      pdVar28 = &local_298;
                      dVar23 = (double)FUN_14481fd10(pdVar28,local_178);
                      dVar48 = local_288 * local_288 + local_298 * local_298;
                      dVar51 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                      auVar39._0_8_ = dVar48 + dVar51;
                      auVar39._8_8_ = dVar48 + dVar51;
                      auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
                      auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
                      auVar42 = sqrtpd(auVar39,auVar39);
                      auVar40 = divpd(auVar40,auVar42);
                      auVar54._0_8_ = auVar40._0_8_ * local_288;
                      auVar54._8_8_ = auVar40._8_8_ * dStack_280;
                      local_2f8[0] = (double)((ulonglong)(local_298 * auVar40._0_8_) &
                                             -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
                      local_2f8[1] = (double)((ulonglong)(dStack_290 * auVar40._8_8_) &
                                             -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
                      local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar37);
                      dVar51 = 0.0;
                      dVar7 = local_118;
                      dVar47 = dStack_110;
                      dVar48 = local_108;
                    }
                    dVar16 = auVar53._8_8_ * dVar16;
                    local_2d8._8_4_ = SUB84(dVar47,0);
                    local_2d8._0_8_ = dVar7;
                    local_2d8._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
                    local_2c8._8_4_ = SUB84(dVar51,0);
                    local_2c8._0_8_ = dVar48;
                    local_2c8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
                    local_2b8._8_4_ = SUB84(dVar14 * dVar15,0);
                    local_2b8._0_8_ = dVar9 * dVar12;
                    local_2b8._12_4_ = (int)((ulonglong)(dVar14 * dVar15) >> 0x20);
                    local_2a8._8_4_ = SUB84(dVar16,0);
                    local_2a8._0_8_ = dVar11 * dVar13;
                    local_2a8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
                  }
                }
              }
            }
          }
          auVar53 = _DAT_149934d80;
          auVar40 = *(undefined1 (*) [16])(lVar31 + 0xb0 + lVar32);
          dVar9 = auVar40._0_8_;
          dVar14 = auVar40._8_8_;
          auVar42 = *(undefined1 (*) [16])(lVar31 + 0xc0 + lVar32);
          dVar11 = auVar42._0_8_;
          dVar12 = local_2b8._0_8_;
          dVar15 = local_2b8._8_8_;
          dVar13 = local_2a8._0_8_;
          dVar16 = local_2a8._8_8_;
          auVar40 = minpd(local_2b8,auVar40);
          auVar45 = minpd(local_2a8,auVar42);
          auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
          auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
          iVar22 = movmskpd(SUB84(dVar23,0),auVar41);
          auVar40._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
          auVar40._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
          uVar24 = movmskpd((int)pdVar28,auVar40);
          if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
            pdVar26 = (double *)(lVar31 + 0x70 + lVar32);
            dVar17 = *pdVar26;
            dVar18 = pdVar26[1];
            pdVar26 = (double *)(lVar31 + 0x80 + lVar32);
            dVar19 = *pdVar26;
            dVar20 = pdVar26[1];
            pdVar26 = (double *)(lVar31 + 0x88 + lVar32);
            dVar56 = *pdVar26;
            dVar51 = *pdVar26;
            pdVar26 = (double *)(lVar31 + 0x70 + lVar32);
            dVar23 = *pdVar26;
            dVar48 = *pdVar26;
            dVar49 = dVar23 * local_2f8[1];
            dVar50 = dVar48 * local_2f8[0];
            pdVar26 = (double *)(lVar31 + 0x78 + lVar32);
            dVar6 = *pdVar26;
            dVar7 = *pdVar26;
            dVar55 = local_2f8[0] * dVar6;
            dVar57 = local_2f8[1] * dVar7;
            pdVar26 = (double *)(lVar31 + 0x80 + lVar32);
            dVar52 = *pdVar26;
            dVar47 = *pdVar26;
            dVar43 = local_2f8[0] * dVar47;
            dVar47 = (double)local_2e8._0_8_ * dVar47;
            local_2f8[0] = local_2f8[1] * dVar52 * -1.0 +
                           (double)local_2e8._0_8_ * dVar6 +
                           (double)local_2e8._8_8_ * dVar23 * 1.0 + local_2f8[0] * dVar56;
            local_2f8[1] = dVar43 * 1.0 +
                           (double)local_2e8._8_8_ * dVar7 +
                           (double)local_2e8._0_8_ * dVar48 * -1.0 + local_2f8[1] * dVar51;
            local_2e8._0_8_ =
                 (double)local_2e8._8_8_ * dVar52 * 1.0 +
                 ((dVar49 * 1.0 + (double)local_2e8._0_8_ * dVar56) - dVar55);
            local_2e8._8_8_ =
                 dVar47 * -1.0 + ((dVar50 * -1.0 + (double)local_2e8._8_8_ * dVar51) - dVar57);
            dVar49 = (double)local_2d8._0_8_ * dVar9;
            dVar50 = (double)local_2d8._8_8_ * dVar14;
            dVar47 = (double)local_2c8._0_8_ * dVar11;
            dVar48 = (double)local_2c8._8_8_ * auVar42._8_8_;
            dVar6 = dVar50 * dVar17 - dVar18 * dVar49;
            dVar7 = dVar47 * dVar18 - dVar19 * dVar50;
            dVar52 = dVar49 * dVar19 - dVar17 * dVar47;
            dVar23 = dVar48 * dVar20 - dVar20 * dVar48;
            dVar7 = dVar7 + dVar7;
            dVar52 = dVar52 + dVar52;
            dVar6 = dVar6 + dVar6;
            dVar23 = dVar23 + dVar23;
            pdVar26 = (double *)(lVar31 + 0x90 + lVar32);
            pdVar30 = (double *)(lVar31 + 0xa0 + lVar32);
            dVar23 = (dVar23 * dVar20 - dVar23 * dVar20) + dVar51 * dVar23 + dVar48 + pdVar30[1];
            dVar48 = (dVar6 * dVar18 - dVar19 * dVar52) + dVar56 * dVar7 + dVar49 + *pdVar26;
            dVar51 = (dVar7 * dVar19 - dVar6 * dVar17) + dVar51 * dVar52 + dVar50 + pdVar26[1];
            dVar56 = (dVar52 * dVar17 - dVar18 * dVar7) + dVar56 * dVar6 + dVar47 + *pdVar30;
          }
          else {
            pdVar26 = (double *)(lVar31 + 0x70 + lVar32);
            dVar6 = *pdVar26;
            dVar7 = pdVar26[1];
            dVar52 = *(double *)(lVar31 + 0x80 + lVar32);
            dVar47 = dVar7 + dVar7;
            dVar49 = dVar52 + dVar52;
            dVar48 = dVar6 * (dVar6 + dVar6);
            local_1a8 = (1.0 - (dVar48 + dVar7 * dVar47)) * dVar11;
            dVar56 = *(double *)(lVar31 + 0x70 + lVar32) * dVar49;
            pdVar26 = (double *)(lVar31 + 0x88 + lVar32);
            dVar23 = *pdVar26;
            dVar50 = dVar49 * dVar23;
            dVar55 = (dVar6 + dVar6) * *pdVar26;
            dVar23 = dVar47 * dVar23;
            local_1b8 = (dVar23 + dVar56) * dVar11;
            dVar48 = (DAT_149934d80._8_8_ - (dVar52 * dVar49 + dVar48)) * dVar14;
            dVar51 = (dVar47 * dVar6 + dVar50) * dVar9;
            local_1c8 = (dVar49 * dVar7 + dVar55) * dVar14;
            dStack_1b0 = (dVar49 * dVar7 - dVar55) * dVar11;
            local_1e8 = (dVar56 - dVar23) * dVar9;
            local_1f8._8_4_ = SUB84(dVar51,0);
            local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar52 * dVar49 + dVar7 * dVar47)) * dVar9;
            local_1f8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar48,0);
            local_1d8._0_8_ = (dVar47 * dVar6 - dVar50) * dVar14;
            local_1d8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            puVar4 = (undefined8 *)(lVar31 + 0x90 + lVar32);
            local_198 = *puVar4;
            uStack_190 = puVar4[1];
            local_188 = *(undefined8 *)(lVar31 + 0xa0 + lVar32);
            uStack_180 = 0x3ff0000000000000;
            dVar48 = local_2f8[1] + local_2f8[1];
            dVar51 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
            dVar23 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
            local_228 = (1.0 - (dVar23 + local_2f8[1] * dVar48)) * dVar13;
            dVar56 = (local_2f8[0] + local_2f8[0]) * (double)local_2e8._8_8_;
            local_238 = (dVar48 * (double)local_2e8._8_8_ + local_2f8[0] * dVar51) * dVar13;
            dStack_230 = (dVar51 * local_2f8[1] - dVar56) * dVar13;
            local_278 = ((double)DAT_149934d80 -
                        ((double)local_2e8._0_8_ * dVar51 + local_2f8[1] * dVar48)) * dVar12;
            dVar23 = (DAT_149934d80._8_8_ - ((double)local_2e8._0_8_ * dVar51 + dVar23)) * dVar15;
            dStack_270 = (dVar48 * local_2f8[0] + dVar51 * (double)local_2e8._8_8_) * dVar12;
            local_248 = (dVar51 * local_2f8[1] + dVar56) * dVar15;
            local_268 = (local_2f8[0] * dVar51 - dVar48 * (double)local_2e8._8_8_) * dVar12;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar23,0);
            local_258._0_8_ = (dVar48 * local_2f8[0] - dVar51 * (double)local_2e8._8_8_) * dVar15;
            local_258._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = (double)local_2d8._0_8_;
            dStack_210 = (double)local_2d8._8_8_;
            local_208 = (double)local_2c8._0_8_;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(local_178,&local_278,local_1f8);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar35._8_8_ = -(ulonglong)(0.0 <= dVar14 * dVar15);
            auVar35._0_8_ = -(ulonglong)(0.0 <= dVar9 * dVar12);
            auVar40 = blendvpd(_DAT_149936790,auVar53,auVar35);
            uVar34 = -(ulonglong)(0.0 <= dVar11 * dVar13);
            dVar23 = (double)(~uVar34 & 0xbff0000000000000 | uVar34 & 0x3ff0000000000000);
            dVar48 = auVar40._0_8_;
            local_178[2] = local_178[2] * dVar48;
            local_178[1] = local_178[1] * dVar48;
            local_178[0] = local_178[0] * dVar48;
            dVar48 = auVar40._8_8_;
            local_148 = local_148 * dVar48;
            local_150 = local_150 * dVar48;
            local_158 = dVar48 * local_158;
            local_128 = local_128 * dVar23;
            local_130 = local_130 * dVar23;
            local_138 = dVar23 * local_138;
            FUN_14481fd10(&local_298,local_178);
            dVar23 = local_288 * local_288 + local_298 * local_298;
            dVar48 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar38._0_8_ = dVar23 + dVar48;
            auVar38._8_8_ = dVar23 + dVar48;
            auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
            auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
            auVar40 = sqrtpd(auVar38,auVar38);
            auVar40 = divpd(auVar53,auVar40);
            auVar53._0_8_ = auVar40._0_8_ * local_288;
            auVar53._8_8_ = auVar40._8_8_ * dStack_280;
            local_2f8[0] = (double)((ulonglong)(local_298 * auVar40._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
            local_2f8[1] = (double)((ulonglong)(dStack_290 * auVar40._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
            local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar53,auVar36);
            dVar23 = 0.0;
            dVar48 = local_118;
            dVar51 = dStack_110;
            dVar56 = local_108;
          }
          dVar16 = dVar16 * auVar42._8_8_;
          local_2d8._8_4_ = SUB84(dVar51,0);
          local_2d8._0_8_ = dVar48;
          local_2d8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          local_2c8._8_4_ = SUB84(dVar23,0);
          local_2c8._0_8_ = dVar56;
          local_2c8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          local_2b8._8_4_ = SUB84(dVar15 * dVar14,0);
          local_2b8._0_8_ = dVar12 * dVar9;
          local_2b8._12_4_ = (int)((ulonglong)(dVar15 * dVar14) >> 0x20);
          local_2a8._8_4_ = SUB84(dVar16,0);
          local_2a8._0_8_ = dVar13 * dVar11;
          local_2a8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          FUN_1491ac36e(param_1,local_2f8,*(undefined1 *)(lVar31 + 0xd4 + lVar32));
          iVar22 = *(int *)(param_1 + 0x748);
          *(uint *)(param_1 + 0x748) = iVar22 + 1U;
          if (*(uint *)(param_1 + 0x74c) < iVar22 + 1U) {
            FUN_1446f48e2(local_300,iVar22);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x740) + (longlong)iVar22 * 4) =
               *(undefined4 *)(lVar31 + 0xe0 + lVar32);
          iVar22 = *(int *)(param_1 + 0x758);
          uVar24 = iVar22 + 1;
          dVar23 = (double)(ulonglong)uVar24;
          *(uint *)(param_1 + 0x758) = uVar24;
          if (*(uint *)(param_1 + 0x75c) < uVar24) {
            dVar23 = (double)FUN_144a2c682(plVar2,iVar22);
          }
          pdVar26 = local_2f8;
          pdVar30 = (double *)((longlong)iVar22 * 0x60 + *plVar2);
          for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
            *pdVar30 = *pdVar26;
            pdVar26 = pdVar26 + 1;
            pdVar30 = pdVar30 + 1;
          }
        }
LAB_1491aa223:
        lVar32 = lVar32 + 0xf0;
      } while (lVar33 - lVar32 != 0);
    }
    if ((*(char *)(param_1 + 0x6a8) != '\0') && (0 < *(int *)(param_1 + 0x758))) {
      plVar3 = (longlong *)(param_1 + 0x760);
      if ((*(int *)(param_1 + 0x768) == *(int *)(param_1 + 0x758)) &&
         (*(undefined1 *)(param_1 + 0x739) = 0, 0 < *(int *)(param_1 + 0x748))) {
        uVar24 = *(uint *)(param_1 + 0x6ac);
        uVar29 = *(uint *)(param_1 + 0x6b0);
        uVar5 = *(uint *)(param_1 + 0x6b4);
        lVar31 = 0;
        lVar32 = 0;
        do {
          local_318 = uVar5 & 0x7fffffff;
          cVar21 = FUN_149241cf4(*plVar2 + lVar31,*plVar3 + lVar31,uVar24 & 0x7fffffff,
                                 uVar29 & 0x7fffffff);
          if (cVar21 == '\0') {
            *(undefined1 *)(param_1 + 0x739) = 1;
            break;
          }
          lVar32 = lVar32 + 1;
          lVar31 = lVar31 + 0x60;
        } while (lVar32 < *(int *)(param_1 + 0x748));
      }
      iVar22 = *(int *)(param_1 + 0x758);
      _Src = *(void **)(param_1 + 0x750);
      *(int *)(param_1 + 0x768) = iVar22;
      if (iVar22 == 0 && *(int *)(param_1 + 0x76c) == 0) {
        *(undefined4 *)(param_1 + 0x76c) = 0;
      }
      else {
        FUN_144756262(plVar3,iVar22);
        if (iVar22 != 0) {
          memcpy((void *)*plVar3,_Src,(longlong)iVar22 * 0x60);
        }
      }
    }
    if ((*(char *)(param_1 + 0x739) == '\x01') && (0 < *(int *)(param_1 + 0x748))) {
      lVar31 = 0;
      lVar32 = 0;
      do {
        uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x2f8);
        uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0x740) + lVar32 * 4);
        pdVar26 = (double *)(*(longlong *)(param_1 + 0x750) + lVar31);
        pdVar30 = local_178;
        for (lVar33 = 0xc; lVar33 != 0; lVar33 = lVar33 + -1) {
          *pdVar30 = *pdVar26;
          pdVar26 = pdVar26 + 1;
          pdVar30 = pdVar30 + 1;
        }
        local_308 = 0;
        local_310 = 0;
        local_318 = CONCAT31(local_318._1_3_,1);
        FUN_144831e8e(uVar10,uVar8,local_178,0);
        lVar32 = lVar32 + 1;
        lVar31 = lVar31 + 0x60;
      } while (lVar32 < *(int *)(param_1 + 0x748));
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x6c0) + 0x2f8) != 0) {
      FUN_1491d7f62();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491ab38c FUN_1491ab38c body=247 status=ok
// SIG undefined FUN_1491ab38c(void)

undefined8 FUN_1491ab38c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1491a88a2();
  uVar2 = 1;
  if (lVar1 == 0) goto LAB_1491ab3e7;
  if (*(int *)(lVar1 + 0x7cc) < 1) {
    if (*(int *)(lVar1 + 2000) < 1) {
      if (*(int *)(lVar1 + 0x23c) < 1) {
        if (*(int *)(lVar1 + 0x240) < 1) goto LAB_1491ab3e7;
        if (param_2 == 0) {
          pwVar3 = 
          L"Cannot be called during the ForwardsSolveEvent - use ConstructionScript instead.";
          goto LAB_1491ab423;
        }
        pwVar3 = 
        L"%s cannot be called during the ForwardsSolveEvent - use ConstructionScript instead.";
      }
      else {
        if (param_2 == 0) {
          pwVar3 = L"Cannot be called during the InitEvent - use ConstructionScript instead.";
          goto LAB_1491ab423;
        }
        pwVar3 = L"%s cannot be called during the InitEvent - use ConstructionScript instead.";
      }
    }
    else {
      if (param_2 == 0) {
        pwVar3 = 
        L"Cannot be called during the PostConstructionEvent - use ConstructionScript instead.";
        goto LAB_1491ab423;
      }
      pwVar3 = 
      L"%s cannot be called during the PostConstructionEvent - use ConstructionScript instead.";
    }
LAB_1491ab3c8:
    FUN_140002266(local_28,pwVar3,param_2);
  }
  else {
    if (param_2 != 0) {
      pwVar3 = 
      L"%s cannot be called during the PreConstructionEvent - use ConstructionScript instead.";
      goto LAB_1491ab3c8;
    }
    pwVar3 = L"Cannot be called during the PreConstructionEvent - use ConstructionScript instead.";
LAB_1491ab423:
    FUN_140056680(local_28,pwVar3);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = 0;
LAB_1491ab3e7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ab484 FUN_1491ab484 body=94 status=ok
// SIG undefined FUN_1491ab484(void)

void FUN_1491ab484(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1491ce3d2(param_1,iVar2);
  }
  FUN_1491cca1a((longlong)iVar2 * 0xf0 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1491ab4e2 FUN_1491ab4e2 body=317 status=ok
// SIG undefined FUN_1491ab4e2(void)

longlong * FUN_1491ab4e2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = *(longlong *)(param_2 + 0x18);
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (lVar1 != 0) {
    local_50 = *(longlong *)(lVar1 + 0x10);
    if (local_50 == 0) {
      local_48 = (longlong *)0x0;
    }
    else {
      local_48 = *(longlong **)(local_50 + 0x50);
    }
    local_40 = 0xffffffff;
    local_3c = 0x101;
    local_3a = 0;
    FUN_144a2daf0(&local_50);
    if (local_48 != (longlong *)0x0) {
      do {
        plVar2 = local_48;
        lVar4 = local_48[1];
        lVar3 = FUN_1446f4b16();
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar5 = lVar4 != 0;
          if (lVar4 != lVar3 && bVar5) {
            do {
              lVar4 = *(longlong *)(lVar4 + 0x30);
              bVar5 = lVar4 != 0;
              if (lVar4 == lVar3) break;
            } while (lVar4 != 0);
          }
          if (bVar5) goto LAB_1491ab5b1;
        }
        else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1491ab5b1:
          lVar4 = (**(code **)(*plVar2 + 0x220))(plVar2,lVar1,0);
          if (lVar4 == param_2) {
            *param_1 = plVar2[4];
            break;
          }
        }
        local_48 = (longlong *)local_48[3];
        FUN_144a2daf0(&local_50);
      } while (local_48 != (longlong *)0x0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1491ab620 FUN_1491ab620 body=88 status=ok
// SIG undefined FUN_1491ab620(void)

undefined8 * FUN_1491ab620(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491ccb9e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491ab678 FUN_1491ab678 body=88 status=ok
// SIG undefined FUN_1491ab678(void)

undefined8 * FUN_1491ab678(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491ccc00(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491ab6d0 FUN_1491ab6d0 body=3228 status=ok
// SIG undefined FUN_1491ab6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491ab6d0(longlong param_1,double *param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  double *pdVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auStack_2e8 [32];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268 [4];
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
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined8 local_158;
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
  
  auVar37 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (param_3 == '\x01') {
    uVar12 = FUN_14480333a(param_1,&local_2c8);
    auVar37 = _DAT_149934d80;
    dVar45 = local_288._0_8_;
    dVar46 = local_288._8_8_;
    dVar29 = local_278._0_8_;
    uVar39 = local_278._0_4_;
    uVar40 = local_278._4_4_;
    uVar41 = local_278._8_4_;
    uVar42 = local_278._12_4_;
    auVar20 = *(undefined1 (*) [16])(param_2 + 8);
    dVar15 = auVar20._0_8_;
    dVar18 = auVar20._8_8_;
    auVar26 = *(undefined1 (*) [16])(param_2 + 10);
    dVar19 = auVar26._0_8_;
    dVar24 = auVar26._8_8_;
    auVar20 = minpd(auVar20,local_288);
    auVar30 = minpd(auVar26,local_278);
    auVar26._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
    auVar26._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
    iVar11 = movmskpd(uVar12,auVar26);
    auVar20._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
    auVar20._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
    uVar13 = movmskpd((int)param_1,auVar20);
    if ((uVar13 & 0x3fffffff) != 0 || iVar11 != 0) {
      dVar25 = dStack_2c0 + dStack_2c0;
      dVar23 = local_2b8 + local_2b8;
      dVar44 = local_2c8 * (local_2c8 + local_2c8);
      local_178 = (1.0 - (dVar44 + dStack_2c0 * dVar25)) * dVar29;
      dVar36 = (local_2c8 + local_2c8) * dStack_2b0;
      local_188 = (dVar25 * dStack_2b0 + local_2c8 * dVar23) * dVar29;
      dVar21 = dVar29 * dVar19;
      dVar24 = local_278._8_8_ * dVar24;
      dStack_180 = (dVar23 * dStack_2c0 - dVar36) * dVar29;
      local_1c8 = ((double)DAT_149934d80 - (local_2b8 * dVar23 + dStack_2c0 * dVar25)) * dVar45;
      dVar29 = (DAT_149934d80._8_8_ - (local_2b8 * dVar23 + dVar44)) * dVar46;
      dStack_1c0 = (dVar25 * local_2c8 + dVar23 * dStack_2b0) * dVar45;
      local_198 = (dVar23 * dStack_2c0 + dVar36) * dVar46;
      local_1b8 = (local_2c8 * dVar23 - dVar25 * dStack_2b0) * dVar45;
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar29,0);
      local_1a8._0_8_ = (dVar25 * local_2c8 - dVar23 * dStack_2b0) * dVar46;
      local_1a8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      uStack_190 = 0;
      uStack_170 = 0;
      local_168 = local_2a8;
      dStack_160 = dStack_2a0;
      local_158 = CONCAT44(uStack_294,local_298);
      uStack_150 = 0x3ff0000000000000;
      dVar23 = *param_2;
      dVar36 = param_2[1];
      dVar44 = param_2[2];
      dVar32 = dVar36 + dVar36;
      dVar28 = dVar44 + dVar44;
      dVar25 = dVar23 * (dVar23 + dVar23);
      local_1f8 = (1.0 - (dVar25 + dVar36 * dVar32)) * dVar19;
      dVar29 = param_2[3];
      dVar33 = dVar28 * dVar29;
      dVar34 = (dVar23 + dVar23) * param_2[3];
      dVar29 = dVar32 * dVar29;
      local_208 = (dVar29 + *param_2 * dVar28) * dVar19;
      local_228 = (dVar32 * dVar23 - dVar33) * dVar18;
      dStack_200 = (dVar28 * dVar36 - dVar34) * dVar19;
      dVar45 = dVar45 * dVar15;
      dVar46 = dVar46 * dVar18;
      local_248 = ((double)DAT_149934d80 - (dVar44 * dVar28 + dVar36 * dVar32)) * dVar15;
      dStack_220 = (DAT_149934d80._8_8_ - (dVar44 * dVar28 + dVar25)) * dVar18;
      dStack_240 = (dVar32 * dVar23 + dVar33) * dVar15;
      local_218 = (dVar28 * dVar36 + dVar34) * dVar18;
      local_238 = (*param_2 * dVar28 - dVar29) * dVar15;
      uStack_230 = 0;
      uStack_210 = 0;
      uStack_1f0 = 0;
      local_1e8 = param_2[4];
      dStack_1e0 = param_2[5];
      local_1d8 = param_2[6];
      uStack_1d0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      auVar30._8_8_ = -(ulonglong)(0.0 <= dVar46);
      auVar30._0_8_ = -(ulonglong)(0.0 <= dVar45);
      auVar20 = blendvpd(_DAT_149936790,auVar37,auVar30);
      dVar15 = (double)(~-(ulonglong)(0.0 <= dVar21) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= dVar21) & 0x3ff0000000000000);
      dVar19 = auVar20._0_8_;
      local_138 = local_138 * dVar19;
      local_140 = local_140 * dVar19;
      local_148 = local_148 * dVar19;
      dVar19 = auVar20._8_8_;
      local_118 = local_118 * dVar19;
      local_120 = local_120 * dVar19;
      local_128 = dVar19 * local_128;
      local_f8 = local_f8 * dVar15;
      local_100 = local_100 * dVar15;
      local_108 = dVar15 * local_108;
      pdVar14 = local_268;
      goto LAB_1491abee3;
    }
    dVar21 = *param_2;
    dVar25 = param_2[1];
    dVar23 = param_2[2];
    dVar36 = param_2[3];
    dVar32 = dVar25 * local_2b8 * -1.0 +
             dVar23 * dStack_2c0 + dVar36 * local_2c8 * 1.0 + dVar21 * dStack_2b0;
    dVar28 = dVar21 * local_2b8 * 1.0 +
             dVar36 * dStack_2c0 + dVar23 * local_2c8 * -1.0 + dVar25 * dStack_2b0;
    auVar37._0_8_ =
         dVar36 * local_2b8 * 1.0 +
         ((local_2c8 * dVar25 * 1.0 + dVar23 * dStack_2b0) - dVar21 * dStack_2c0);
    auVar37._8_8_ =
         dVar23 * local_2b8 * -1.0 +
         ((local_2c8 * dVar21 * -1.0 + dVar36 * dStack_2b0) - dVar25 * dStack_2c0);
    dVar45 = param_2[4] * dVar45;
    dVar46 = param_2[5] * dVar46;
    dVar29 = param_2[6] * dVar29;
    dVar36 = param_2[7] * local_278._8_8_;
    dVar21 = dVar46 * local_2c8 - dStack_2c0 * dVar45;
    dVar25 = dVar29 * dStack_2c0 - local_2b8 * dVar46;
    dVar23 = dVar45 * local_2b8 - local_2c8 * dVar29;
    dVar44 = dVar36 * dStack_2b0 - dStack_2b0 * dVar36;
    dVar25 = dVar25 + dVar25;
    dVar23 = dVar23 + dVar23;
    dVar21 = dVar21 + dVar21;
    dVar44 = dVar44 + dVar44;
    local_e8 = (dVar21 * dStack_2c0 - local_2b8 * dVar23) + dStack_2b0 * dVar25 + dVar45 + local_2a8
    ;
    dStack_e0 = (dVar25 * local_2b8 - dVar21 * local_2c8) + dStack_2b0 * dVar23 + dVar46 +
                dStack_2a0;
    local_d8 = (dVar23 * local_2c8 - dStack_2c0 * dVar25) + dStack_2b0 * dVar21 + dVar29 +
               (double)CONCAT44(uStack_294,local_298);
    dStack_290 = (dVar44 * dStack_2b0 - dVar44 * dStack_2b0) + dStack_2b0 * dVar44 + dVar36 +
                 dStack_290;
LAB_1491ac355:
    dVar45 = dVar15 * local_288._0_8_;
    dVar46 = dVar18 * local_288._8_8_;
    dVar21 = dVar19 * (double)CONCAT44(uVar40,uVar39);
    dVar24 = dVar24 * (double)CONCAT44(uVar42,uVar41);
  }
  else {
    if (param_3 != '\0') goto LAB_1491abf6b;
    local_288 = *(undefined1 (*) [16])(param_1 + 0x280);
    dVar45 = local_288._0_8_;
    dVar46 = local_288._8_8_;
    auVar20 = *(undefined1 (*) [16])(param_1 + 0x290);
    dVar29 = auVar20._0_8_;
    uVar39 = auVar20._0_4_;
    uVar40 = auVar20._4_4_;
    uVar41 = auVar20._8_4_;
    uVar42 = auVar20._12_4_;
    auVar26 = *(undefined1 (*) [16])(param_2 + 8);
    dVar15 = auVar26._0_8_;
    dVar18 = auVar26._8_8_;
    auVar30 = *(undefined1 (*) [16])(param_2 + 10);
    dVar19 = auVar30._0_8_;
    dVar24 = auVar30._8_8_;
    auVar26 = minpd(auVar26,local_288);
    auVar30 = minpd(auVar30,auVar20);
    auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
    auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
    iVar11 = movmskpd(0,auVar27);
    auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
    auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
    uVar13 = movmskpd((int)param_2,auVar31);
    if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
      dVar43 = *param_2;
      dVar4 = param_2[1];
      dVar5 = param_2[2];
      dVar6 = param_2[3];
      dVar7 = *(double *)(param_1 + 0x240);
      dVar8 = *(double *)(param_1 + 0x248);
      dVar9 = *(double *)(param_1 + 0x250);
      dVar10 = *(double *)(param_1 + 600);
      dVar21 = *(double *)(param_1 + 600);
      dVar25 = *(double *)(param_1 + 600);
      dVar36 = *(double *)(param_1 + 0x240);
      dVar23 = *(double *)(param_1 + 0x240);
      dVar33 = *(double *)(param_1 + 0x248);
      dVar44 = *(double *)(param_1 + 0x248);
      dVar35 = *(double *)(param_1 + 0x250);
      dVar34 = *(double *)(param_1 + 0x250);
      dVar32 = dVar4 * dVar35 * -1.0 + dVar5 * dVar33 + dVar6 * dVar36 * 1.0 + dVar43 * dVar21;
      dVar28 = dVar43 * dVar34 * 1.0 + dVar6 * dVar44 + dVar5 * dVar23 * -1.0 + dVar4 * dVar25;
      auVar37._0_8_ =
           dVar6 * dVar35 * 1.0 + ((dVar36 * dVar4 * 1.0 + dVar5 * dVar21) - dVar43 * dVar33);
      auVar37._8_8_ =
           dVar5 * dVar34 * -1.0 + ((dVar23 * dVar43 * -1.0 + dVar6 * dVar25) - dVar4 * dVar44);
      dVar45 = param_2[4] * dVar45;
      dVar46 = param_2[5] * dVar46;
      dVar29 = param_2[6] * dVar29;
      dVar33 = param_2[7] * auVar20._8_8_;
      dVar23 = dVar46 * dVar7 - dVar8 * dVar45;
      dVar36 = dVar29 * dVar8 - dVar9 * dVar46;
      dVar44 = dVar45 * dVar9 - dVar7 * dVar29;
      dVar34 = dVar33 * dVar10 - dVar10 * dVar33;
      dVar36 = dVar36 + dVar36;
      dVar44 = dVar44 + dVar44;
      dVar23 = dVar23 + dVar23;
      dVar34 = dVar34 + dVar34;
      local_e8 = (dVar23 * dVar8 - dVar9 * dVar44) + dVar21 * dVar36 + dVar45 +
                 *(double *)(param_1 + 0x260);
      dStack_e0 = (dVar36 * dVar9 - dVar23 * dVar7) + dVar25 * dVar44 + dVar46 +
                  *(double *)(param_1 + 0x268);
      local_d8 = (dVar44 * dVar7 - dVar8 * dVar36) + dVar21 * dVar23 + dVar29 +
                 *(double *)(param_1 + 0x270);
      dStack_290 = (dVar34 * dVar10 - dVar34 * dVar10) + dVar25 * dVar34 + dVar33 +
                   *(double *)(param_1 + 0x278);
      goto LAB_1491ac355;
    }
    dVar44 = *(double *)(param_1 + 0x240);
    dVar32 = *(double *)(param_1 + 0x248);
    dVar23 = *(double *)(param_1 + 0x250);
    dVar28 = dVar32 + dVar32;
    dVar33 = dVar23 + dVar23;
    dVar43 = dVar44 * (dVar44 + dVar44);
    local_178 = (1.0 - (dVar43 + dVar32 * dVar28)) * dVar29;
    dVar36 = *(double *)(param_1 + 0x240) * dVar33;
    dVar25 = *(double *)(param_1 + 600);
    dVar34 = dVar33 * dVar25;
    dVar35 = (dVar44 + dVar44) * *(double *)(param_1 + 600);
    dVar25 = dVar28 * dVar25;
    local_188 = (dVar25 + dVar36) * dVar29;
    dVar21 = dVar29 * dVar19;
    dVar24 = auVar20._8_8_ * dVar24;
    local_1c8 = ((double)DAT_149934d80 - (dVar23 * dVar33 + dVar32 * dVar28)) * dVar45;
    dVar23 = (DAT_149934d80._8_8_ - (dVar23 * dVar33 + dVar43)) * dVar46;
    dStack_1c0 = (dVar28 * dVar44 + dVar34) * dVar45;
    local_198 = (dVar33 * dVar32 + dVar35) * dVar46;
    dStack_180 = (dVar33 * dVar32 - dVar35) * dVar29;
    local_1b8 = (dVar36 - dVar25) * dVar45;
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar23,0);
    local_1a8._0_8_ = (dVar28 * dVar44 - dVar34) * dVar46;
    local_1a8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = *(double *)(param_1 + 0x260);
    dStack_160 = *(double *)(param_1 + 0x268);
    local_158 = *(undefined8 *)(param_1 + 0x270);
    uStack_150 = 0x3ff0000000000000;
    dVar23 = *param_2;
    dVar36 = param_2[1];
    dVar44 = param_2[2];
    dVar32 = dVar36 + dVar36;
    dVar28 = dVar44 + dVar44;
    dVar25 = dVar23 * (dVar23 + dVar23);
    local_1f8 = (1.0 - (dVar25 + dVar36 * dVar32)) * dVar19;
    dVar29 = param_2[3];
    dVar33 = dVar28 * dVar29;
    dVar34 = (dVar23 + dVar23) * param_2[3];
    dVar29 = dVar32 * dVar29;
    local_208 = (dVar29 + *param_2 * dVar28) * dVar19;
    local_228 = (dVar32 * dVar23 - dVar33) * dVar18;
    dStack_200 = (dVar28 * dVar36 - dVar34) * dVar19;
    dVar45 = dVar45 * dVar15;
    dVar46 = dVar46 * dVar18;
    local_248 = ((double)DAT_149934d80 - (dVar44 * dVar28 + dVar36 * dVar32)) * dVar15;
    dStack_220 = (DAT_149934d80._8_8_ - (dVar44 * dVar28 + dVar25)) * dVar18;
    dStack_240 = (dVar32 * dVar23 + dVar33) * dVar15;
    local_218 = (dVar28 * dVar36 + dVar34) * dVar18;
    local_238 = (*param_2 * dVar28 - dVar29) * dVar15;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_2[4];
    dStack_1e0 = param_2[5];
    local_1d8 = param_2[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar46);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar45);
    auVar20 = blendvpd(_DAT_149936790,auVar37,auVar16);
    dVar15 = (double)(~-(ulonglong)(0.0 <= dVar21) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar21) & 0x3ff0000000000000);
    dVar19 = auVar20._0_8_;
    local_138 = local_138 * dVar19;
    local_140 = local_140 * dVar19;
    local_148 = local_148 * dVar19;
    dVar19 = auVar20._8_8_;
    local_118 = local_118 * dVar19;
    local_120 = local_120 * dVar19;
    local_128 = dVar19 * local_128;
    local_f8 = local_f8 * dVar15;
    local_100 = local_100 * dVar15;
    local_108 = dVar15 * local_108;
    pdVar14 = &local_2c8;
LAB_1491abee3:
    FUN_14481fd10(pdVar14,&local_148);
    dVar15 = *pdVar14;
    dVar19 = pdVar14[1];
    dVar29 = pdVar14[2];
    dVar18 = pdVar14[3];
    dVar25 = dVar29 * dVar29 + dVar15 * dVar15;
    dVar23 = dVar18 * dVar18 + dVar19 * dVar19;
    auVar22._0_8_ = dVar25 + dVar23;
    auVar22._8_8_ = dVar25 + dVar23;
    auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
    auVar20 = sqrtpd(auVar22,auVar22);
    auVar37 = divpd(auVar37,auVar20);
    auVar38._0_8_ = auVar37._0_8_ * dVar29;
    auVar38._8_8_ = auVar37._8_8_ * dVar18;
    dVar32 = (double)((ulonglong)(dVar15 * auVar37._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
    dVar28 = (double)((ulonglong)(dVar19 * auVar37._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
    auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar17);
    dStack_290 = 0.0;
  }
  *param_2 = dVar32;
  param_2[1] = dVar28;
  *(undefined1 (*) [16])(param_2 + 2) = auVar37;
  auVar2._8_4_ = SUB84(dStack_e0,0);
  auVar2._0_8_ = local_e8;
  auVar2._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar2;
  param_2[6] = local_d8;
  param_2[7] = dStack_290;
  auVar3._8_4_ = SUB84(dVar46,0);
  auVar3._0_8_ = dVar45;
  auVar3._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar3;
  auVar1._8_4_ = SUB84(dVar24,0);
  auVar1._0_8_ = dVar21;
  auVar1._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar1;
LAB_1491abf6b:
  if ((local_c0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ac36e FUN_1491ac36e body=168 status=ok
// SIG undefined FUN_1491ac36e(void)

void FUN_1491ac36e(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [96];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 == '\x01') {
    FUN_14480333a(param_1,local_e8);
    puVar2 = local_88;
    FUN_1449437a2(param_2,puVar2,local_e8);
    lVar1 = 0xc;
  }
  else {
    if (param_3 != '\0') goto LAB_1491ac3f2;
    FUN_1449437a2(param_2,local_88,param_1 + 0x240);
    lVar1 = 0xc;
    puVar2 = local_88;
  }
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
LAB_1491ac3f2:
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ac418 FUN_1491ac418 body=751 status=ok
// SIG undefined FUN_1491ac418(void)

void FUN_1491ac418(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x6c0);
  if (lVar3 != param_2) {
    if (lVar3 != 0) {
      FUN_140457ffc(lVar3 + 0x1f8,param_1);
      FUN_140457ffc(*(longlong *)(param_1 + 0x6c0) + 0x5c0,param_1);
      FUN_140457ffc(*(longlong *)(param_1 + 0x6c0) + 0x5d8,param_1);
      FUN_140457ffc(*(longlong *)(param_1 + 0x6c0) + 0x5f0,param_1);
      FUN_140457ffc(*(longlong *)(param_1 + 0x6c0) + 0x608,param_1);
      FUN_140457ffc(*(longlong *)(param_1 + 0x6c0) + 0x210,param_1);
      lVar4 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x170))
                (*(longlong **)(param_1 + 0x6c0),0,DAT_14c951640,0x34);
      lVar3 = *(longlong *)(param_1 + 0x6c0);
      FUN_144757f48(lVar3,0x40000000);
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      do {
        uVar1 = *(uint *)(lVar4 + 8);
        if ((uVar1 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar5 = uVar1 == *(uint *)(lVar4 + 8);
        if (bVar5) {
          *(uint *)(lVar4 + 8) = uVar1 | 0x200000;
        }
        UNLOCK();
      } while (!bVar5);
    }
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x6c0) = param_2;
    lVar3 = param_2;
  }
  if (lVar3 != 0) {
    local_48 = FUN_1491ac808;
    local_40 = 0;
    FUN_1491ac708(lVar3 + 0x1f8,local_38,param_1,&local_48);
    local_48 = FUN_1491ac966;
    local_40 = 0;
    FUN_1491ac866(*(longlong *)(param_1 + 0x6c0) + 0x5c0,local_38,param_1,&local_48);
    local_48 = FUN_1491acb54;
    local_40 = 0;
    FUN_1491ac866(*(longlong *)(param_1 + 0x6c0) + 0x5d8,local_38,param_1,&local_48);
    local_48 = FUN_1491acbb2;
    local_40 = 0;
    FUN_1491ac866(*(longlong *)(param_1 + 0x6c0) + 0x5f0,local_38,param_1,&local_48);
    local_48 = FUN_1491acc10;
    local_40 = 0;
    FUN_1491ac866(*(longlong *)(param_1 + 0x6c0) + 0x608,local_38,param_1,&local_48);
    local_48 = (code *)&LAB_1491acc6e;
    local_40 = 0;
    FUN_1491ac708(*(longlong *)(param_1 + 0x6c0) + 0x210,local_38,param_1,&local_48);
    uVar2 = FUN_140ec6e36(*(undefined8 *)(param_1 + 0x6c0));
    FUN_1457c25c2(uVar2,&DAT_14cc06918,param_1);
    lVar3 = *(longlong *)(param_1 + 0x770);
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x6c0);
      local_50 = *(longlong *)(param_1 + 0x778);
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      local_58 = lVar3;
      FUN_14575d3d6(uVar2,&local_58);
    }
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x2b0))(*(longlong **)(param_1 + 0x6c0),1);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491ac708 FUN_1491ac708 body=254 status=ok
// SIG undefined FUN_1491ac708(void)

undefined8
FUN_1491ac708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14bb75fa0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14bb76810;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14575d75c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ac808 FUN_1491ac808 body=92 status=ok
// SIG undefined FUN_1491ac808(void)

void FUN_1491ac808(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  uVar1 = FUN_14477b072(param_1,DAT_14cc06e10);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ac866 FUN_1491ac866 body=254 status=ok
// SIG undefined FUN_1491ac866(void)

undefined8
FUN_1491ac866(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14bb768f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14bb76880;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1491cea0e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ac966 FUN_1491ac966 body=493 status=ok
// SIG undefined FUN_1491ac966(void)

void FUN_1491ac966(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  if ((longlong)(int)param_1[0xd4] != 0) {
    lVar6 = param_1[0xd3];
    lVar7 = (longlong)(int)param_1[0xd4] * 0xf0;
    lVar4 = 0;
    lVar8 = 0;
    do {
      if ((*(longlong *)(lVar6 + 0xd8) != lVar8) || (lVar3 = lVar8, lVar4 == 0)) {
        lVar4 = FUN_1491a82dc(lVar6);
        if (lVar4 == 0) {
          lVar4 = 0;
          lVar3 = *(longlong *)(lVar6 + 0xd8);
        }
        else {
          FUN_1491cf2c8(lVar4 + 0x8a8);
          FUN_145bd9614(lVar4 + 0x8f8);
          FUN_1491adb38(lVar4 + 0x948);
          lVar8 = *(longlong *)(lVar6 + 0xd8);
          lVar3 = lVar8;
        }
      }
      if (lVar3 != 0) {
        lVar3 = FUN_144a74fb4();
        plVar1 = *(longlong **)(lVar6 + 0xd8);
        if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
           ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30)))) {
          local_48 = plVar1;
          FUN_1491cf9d6(&local_58,&local_48);
        }
      }
      lVar3 = local_58;
      lVar6 = lVar6 + 0xf0;
      lVar7 = lVar7 + -0xf0;
    } while (lVar7 != 0);
    lVar6 = (longlong)(int)uStack_50;
    if (lVar6 != 0) {
      lVar8 = 0;
      do {
        plVar1 = *(longlong **)(lVar3 + lVar8);
        FUN_1407396de(plVar1,0,0);
        (**(code **)(*plVar1 + 0xaf8))(plVar1,0);
        FUN_1447a916a(plVar1);
        FUN_1447a91cc(plVar1);
        (**(code **)(*plVar1 + 0xb38))(plVar1);
        FUN_1448c69c8(plVar1);
        FUN_1448c6f34(plVar1);
        lVar8 = lVar8 + 8;
      } while (lVar6 * 8 != lVar8);
    }
  }
  local_48 = param_1;
  uVar5 = FUN_14477b072(param_1,DAT_14cc06e20);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_48);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491acb54 FUN_1491acb54 body=92 status=ok
// SIG undefined FUN_1491acb54(void)

void FUN_1491acb54(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  uVar1 = FUN_14477b072(param_1,DAT_14cc06df0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491acbb2 FUN_1491acbb2 body=92 status=ok
// SIG undefined FUN_1491acbb2(void)

void FUN_1491acbb2(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  uVar1 = FUN_14477b072(param_1,DAT_14cc06e30);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491acc10 FUN_1491acc10 body=92 status=ok
// SIG undefined FUN_1491acc10(void)

void FUN_1491acc10(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  uVar1 = FUN_14477b072(param_1,DAT_14cc06e00);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491acc74 FUN_1491acc74 body=3778 status=ok
// SIG undefined FUN_1491acc74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491acc74(longlong param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  undefined8 uVar4;
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
  double dVar16;
  double dVar17;
  char cVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  double *pdVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  double *pdVar30;
  undefined8 *puVar31;
  longlong lVar32;
  undefined8 *puVar33;
  uint uVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar52;
  double dVar53;
  undefined1 auVar51 [16];
  undefined1 auStack_338 [32];
  undefined1 local_318;
  undefined1 local_310;
  longlong *local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
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
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (*(longlong **)(param_1 + 0x6c0) != (longlong *)0x0) {
    cVar18 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x478))();
    if (cVar18 == '\0') {
      if ((longlong)*(int *)(param_1 + 0x6a0) != 0) {
        lVar29 = *(longlong *)(param_1 + 0x698);
        lVar32 = (longlong)*(int *)(param_1 + 0x6a0) * 0xf0;
        lVar35 = 0;
        lVar22 = 0;
        do {
          if ((*(longlong *)(lVar29 + 0xd8) != lVar22) || (lVar35 == 0)) {
            lVar35 = FUN_1491a82dc(lVar29);
            if (lVar35 == 0) {
              lVar35 = 0;
            }
            else {
              FUN_1491cf2c8(lVar35 + 0x8a8);
              FUN_145bd9614(lVar35 + 0x8f8);
              FUN_1491adb38(lVar35 + 0x948);
              lVar22 = *(longlong *)(lVar29 + 0xd8);
            }
          }
          lVar29 = lVar29 + 0xf0;
          lVar32 = lVar32 + -0xf0;
        } while (lVar32 != 0);
        if ((longlong)*(int *)(param_1 + 0x6a0) != 0) {
          lVar29 = *(longlong *)(param_1 + 0x698);
          lVar32 = (longlong)*(int *)(param_1 + 0x6a0) * 0xf0;
          do {
            iVar20 = *(int *)(lVar29 + 0xe0);
            lVar28 = lVar22;
            if ((iVar20 != -1) && (*(char *)(lVar29 + 0x60) != '\0')) {
              bVar3 = *(byte *)(lVar29 + 0x54);
              if (bVar3 == 8) {
                if (-1 < iVar20) {
                  if ((*(longlong *)(lVar29 + 0xd8) != lVar22) || (lVar35 == 0)) {
                    lVar35 = FUN_1491a82dc(lVar29);
                    if (lVar35 == 0) goto LAB_1491ad7bd;
                    lVar22 = *(longlong *)(lVar29 + 0xd8);
                    iVar20 = *(int *)(lVar29 + 0xe0);
                  }
                  uVar19 = FUN_149181f94(*(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x2f8),
                                         iVar20);
                  uVar4 = *(undefined8 *)(lVar29 + 0x4c);
                  uVar26 = (uint)((ulonglong)uVar4 >> 0x10);
                  uVar34 = (uint)uVar4 & 0xffff;
                  puVar24 = (undefined4 *)
                            FUN_1478fc374(lVar35 + 0x8f8,
                                          ((uint)uVar4 << 0x10 | uVar34) +
                                          (int)((ulonglong)uVar4 >> 0x20) +
                                          (uVar26 << 0x13 | uVar26 & 0xffff) + (uVar34 >> 4),
                                          lVar29 + 0x4c);
                  *puVar24 = uVar19;
                  lVar28 = lVar22;
                }
              }
              else if ((bVar3 - 1 < 2) || (bVar3 == 4)) {
                FUN_14486750c(*(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x2f8),local_2f8,
                              iVar20,0);
                lVar27 = param_1;
                uVar19 = FUN_1491ab6d0(param_1,local_2f8,*(undefined1 *)(lVar29 + 0xd4));
                auVar51 = _DAT_149934d80;
                auVar40 = *(undefined1 (*) [16])(lVar29 + 0xb0);
                dVar6 = auVar40._0_8_;
                dVar10 = auVar40._8_8_;
                auVar2 = *(undefined1 (*) [16])(lVar29 + 0xc0);
                dVar7 = auVar2._0_8_;
                dVar8 = local_2b8._0_8_;
                dVar11 = local_2b8._8_8_;
                dVar9 = local_2a8._0_8_;
                dVar12 = local_2a8._8_8_;
                auVar40 = minpd(local_2b8,auVar40);
                auVar44 = minpd(local_2a8,auVar2);
                auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
                auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
                iVar20 = movmskpd(uVar19,auVar41);
                auVar40._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
                auVar40._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
                uVar26 = movmskpd((int)lVar27,auVar40);
                if ((uVar26 & 0x3fffffff) == 0 && iVar20 == 0) {
                  dVar14 = *(double *)(lVar29 + 0x70);
                  dVar15 = *(double *)(lVar29 + 0x78);
                  dVar16 = *(double *)(lVar29 + 0x80);
                  dVar17 = *(double *)(lVar29 + 0x88);
                  dVar39 = *(double *)(lVar29 + 0x88);
                  dVar45 = *(double *)(lVar29 + 0x88);
                  dVar53 = *(double *)(lVar29 + 0x70);
                  dVar49 = *(double *)(lVar29 + 0x70);
                  dVar47 = dVar53 * (double)local_2f8._8_8_;
                  dVar48 = dVar49 * (double)local_2f8._0_8_;
                  dVar50 = *(double *)(lVar29 + 0x78);
                  dVar1 = *(double *)(lVar29 + 0x78);
                  dVar52 = (double)local_2f8._0_8_ * dVar50;
                  dVar13 = (double)local_2f8._8_8_ * dVar1;
                  dVar42 = *(double *)(lVar29 + 0x80);
                  dVar46 = *(double *)(lVar29 + 0x80);
                  dVar43 = (double)local_2f8._0_8_ * dVar46;
                  dVar46 = (double)local_2e8._0_8_ * dVar46;
                  local_2f8._0_8_ =
                       (double)local_2f8._8_8_ * dVar42 * -1.0 +
                       (double)local_2e8._0_8_ * dVar50 +
                       (double)local_2e8._8_8_ * dVar53 * 1.0 + (double)local_2f8._0_8_ * dVar39;
                  local_2f8._8_8_ =
                       dVar43 * 1.0 +
                       (double)local_2e8._8_8_ * dVar1 +
                       (double)local_2e8._0_8_ * dVar49 * -1.0 + (double)local_2f8._8_8_ * dVar45;
                  local_2e8._0_8_ =
                       (double)local_2e8._8_8_ * dVar42 * 1.0 +
                       ((dVar47 * 1.0 + (double)local_2e8._0_8_ * dVar39) - dVar52);
                  local_2e8._8_8_ =
                       dVar46 * -1.0 + ((dVar48 * -1.0 + (double)local_2e8._8_8_ * dVar45) - dVar13)
                  ;
                  dVar1 = (double)local_2d8._0_8_ * dVar6;
                  dVar46 = (double)local_2d8._8_8_ * dVar10;
                  dVar47 = (double)local_2c8._0_8_ * dVar7;
                  dVar48 = (double)local_2c8._8_8_ * auVar2._8_8_;
                  dVar49 = dVar46 * dVar14 - dVar15 * dVar1;
                  dVar53 = dVar47 * dVar15 - dVar16 * dVar46;
                  dVar50 = dVar1 * dVar16 - dVar14 * dVar47;
                  dVar42 = dVar48 * dVar17 - dVar17 * dVar48;
                  dVar53 = dVar53 + dVar53;
                  dVar50 = dVar50 + dVar50;
                  dVar49 = dVar49 + dVar49;
                  dVar42 = dVar42 + dVar42;
                  dVar1 = (dVar49 * dVar15 - dVar16 * dVar50) + dVar39 * dVar53 + dVar1 +
                          *(double *)(lVar29 + 0x90);
                  dVar46 = (dVar53 * dVar16 - dVar49 * dVar14) + dVar45 * dVar50 + dVar46 +
                           *(double *)(lVar29 + 0x98);
                  dVar39 = (dVar50 * dVar14 - dVar15 * dVar53) + dVar39 * dVar49 + dVar47 +
                           *(double *)(lVar29 + 0xa0);
                  dVar45 = (dVar42 * dVar17 - dVar42 * dVar17) + dVar45 * dVar42 + dVar48 +
                           *(double *)(lVar29 + 0xa8);
                }
                else {
                  dVar1 = *(double *)(lVar29 + 0x70);
                  dVar50 = *(double *)(lVar29 + 0x78);
                  dVar46 = *(double *)(lVar29 + 0x80);
                  dVar42 = dVar50 + dVar50;
                  dVar47 = dVar46 + dVar46;
                  dVar45 = dVar1 * (dVar1 + dVar1);
                  local_1a8 = (1.0 - (dVar45 + dVar50 * dVar42)) * dVar7;
                  dVar53 = *(double *)(lVar29 + 0x70) * dVar47;
                  dVar39 = *(double *)(lVar29 + 0x88);
                  dVar48 = dVar47 * dVar39;
                  dVar52 = (dVar1 + dVar1) * *(double *)(lVar29 + 0x88);
                  dVar39 = dVar42 * dVar39;
                  local_1b8 = (dVar39 + dVar53) * dVar7;
                  dVar45 = (DAT_149934d80._8_8_ - (dVar46 * dVar47 + dVar45)) * dVar10;
                  dVar49 = (dVar42 * dVar1 + dVar48) * dVar6;
                  local_1c8 = (dVar47 * dVar50 + dVar52) * dVar10;
                  dStack_1b0 = (dVar47 * dVar50 - dVar52) * dVar7;
                  local_1e8 = (dVar53 - dVar39) * dVar6;
                  local_1f8._8_4_ = SUB84(dVar49,0);
                  local_1f8._0_8_ =
                       ((double)DAT_149934d80 - (dVar46 * dVar47 + dVar50 * dVar42)) * dVar6;
                  local_1f8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
                  uStack_1e0 = 0;
                  local_1d8._8_4_ = SUB84(dVar45,0);
                  local_1d8._0_8_ = (dVar42 * dVar1 - dVar48) * dVar10;
                  local_1d8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = *(undefined8 *)(lVar29 + 0x90);
                  uStack_190 = *(undefined8 *)(lVar29 + 0x98);
                  local_188 = *(undefined8 *)(lVar29 + 0xa0);
                  uStack_180 = 0x3ff0000000000000;
                  dVar45 = (double)local_2f8._8_8_ + (double)local_2f8._8_8_;
                  dVar49 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
                  dVar39 = (double)local_2f8._0_8_ *
                           ((double)local_2f8._0_8_ + (double)local_2f8._0_8_);
                  local_228 = (1.0 - (dVar39 + (double)local_2f8._8_8_ * dVar45)) * dVar9;
                  dVar53 = ((double)local_2f8._0_8_ + (double)local_2f8._0_8_) *
                           (double)local_2e8._8_8_;
                  local_238 = (dVar45 * (double)local_2e8._8_8_ + (double)local_2f8._0_8_ * dVar49)
                              * dVar9;
                  dStack_230 = (dVar49 * (double)local_2f8._8_8_ - dVar53) * dVar9;
                  local_278 = ((double)DAT_149934d80 -
                              ((double)local_2e8._0_8_ * dVar49 + (double)local_2f8._8_8_ * dVar45))
                              * dVar8;
                  dVar39 = (DAT_149934d80._8_8_ - ((double)local_2e8._0_8_ * dVar49 + dVar39)) *
                           dVar11;
                  dStack_270 = (dVar45 * (double)local_2f8._0_8_ + dVar49 * (double)local_2e8._8_8_)
                               * dVar8;
                  local_248 = (dVar49 * (double)local_2f8._8_8_ + dVar53) * dVar11;
                  local_268 = ((double)local_2f8._0_8_ * dVar49 - dVar45 * (double)local_2e8._8_8_)
                              * dVar8;
                  uStack_260 = 0;
                  local_258._8_4_ = SUB84(dVar39,0);
                  local_258._0_8_ =
                       (dVar45 * (double)local_2f8._0_8_ - dVar49 * (double)local_2e8._8_8_) *
                       dVar11;
                  local_258._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_218 = (double)local_2d8._0_8_;
                  dStack_210 = (double)local_2d8._8_8_;
                  local_208 = (double)local_2c8._0_8_;
                  uStack_200 = 0x3ff0000000000000;
                  FUN_1447fea8d(local_178,&local_278,local_1f8);
                  FUN_144a1c686(local_178,0x3e45798ee0000000);
                  auVar44._8_8_ = -(ulonglong)(0.0 <= dVar10 * dVar11);
                  auVar44._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar8);
                  auVar40 = blendvpd(_DAT_149936790,auVar51,auVar44);
                  uVar36 = -(ulonglong)(0.0 <= dVar7 * dVar9);
                  dVar39 = (double)(~uVar36 & 0xbff0000000000000 | uVar36 & 0x3ff0000000000000);
                  dVar45 = auVar40._0_8_;
                  local_178[2] = local_178[2] * dVar45;
                  local_178[1] = local_178[1] * dVar45;
                  local_178[0] = local_178[0] * dVar45;
                  dVar45 = auVar40._8_8_;
                  local_148 = local_148 * dVar45;
                  local_150 = local_150 * dVar45;
                  local_158 = dVar45 * local_158;
                  local_128 = local_128 * dVar39;
                  local_130 = local_130 * dVar39;
                  local_138 = dVar39 * local_138;
                  FUN_14481fd10(&local_298,local_178);
                  dVar39 = local_288._0_8_;
                  dVar45 = local_288._8_8_;
                  dVar49 = dVar39 * dVar39 + local_298 * local_298;
                  dVar53 = dVar45 * dVar45 + dStack_290 * dStack_290;
                  auVar38._0_8_ = dVar49 + dVar53;
                  auVar38._8_8_ = dVar49 + dVar53;
                  auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
                  auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
                  auVar40 = sqrtpd(auVar38,auVar38);
                  auVar40 = divpd(auVar51,auVar40);
                  auVar51._0_8_ = auVar40._0_8_ * dVar39;
                  auVar51._8_8_ = auVar40._8_8_ * dVar45;
                  local_2f8._0_8_ =
                       (ulonglong)(local_298 * auVar40._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
                  local_2f8._8_8_ =
                       (ulonglong)(dStack_290 * auVar40._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
                  local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar37);
                  dVar45 = 0.0;
                  dVar1 = local_118;
                  dVar46 = dStack_110;
                  dVar39 = local_108;
                }
                dVar12 = auVar2._8_8_ * dVar12;
                local_2d8._8_4_ = SUB84(dVar46,0);
                local_2d8._0_8_ = dVar1;
                local_2d8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                local_2c8._8_4_ = SUB84(dVar45,0);
                local_2c8._0_8_ = dVar39;
                local_2c8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                local_2b8._8_4_ = SUB84(dVar10 * dVar11,0);
                local_2b8._0_8_ = dVar6 * dVar8;
                local_2b8._12_4_ = (int)((ulonglong)(dVar10 * dVar11) >> 0x20);
                local_2a8._8_4_ = SUB84(dVar12,0);
                local_2a8._0_8_ = dVar7 * dVar9;
                local_2a8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                if (*(int *)(lVar29 + 0xe4) < 0) {
                  if (*(float *)(lVar29 + 0xd0) < 1.0) {
                    pdVar30 = (double *)(*(longlong *)(lVar29 + 0xd8) + 0x240);
                    pdVar25 = local_178;
                    for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
                      *pdVar25 = *pdVar30;
                      pdVar30 = pdVar30 + 1;
                      pdVar25 = pdVar25 + 1;
                    }
                    FUN_14915b8da(local_1f8,local_178,local_2f8);
                    puVar31 = (undefined8 *)local_1f8;
                    puVar33 = (undefined8 *)local_2f8;
                    for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
                      *puVar33 = *puVar31;
                      puVar31 = puVar31 + 1;
                      puVar33 = puVar33 + 1;
                    }
                  }
                  local_318 = 0;
                  FUN_140613f88(*(undefined8 *)(lVar29 + 0xd8),local_2f8,0);
                }
                else {
                  lVar27 = *(longlong *)(lVar29 + 0xd8);
                  if ((lVar27 != lVar22) || (lVar35 == 0)) {
                    lVar35 = FUN_1491a82dc(lVar29);
                    lVar27 = *(longlong *)(lVar29 + 0xd8);
                    lVar28 = lVar27;
                    if (lVar35 == 0) {
                      if (lVar27 != 0) {
                        lVar27 = FUN_144a80466();
                        plVar23 = *(longlong **)(lVar29 + 0xd8);
                        if (plVar23 != (longlong *)0x0) {
                          lVar35 = 0;
                          lVar28 = lVar22;
                          if ((lVar27 != 0) && (lVar5 = plVar23[2], lVar5 != 0)) {
                            if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar27 + 0x38)) ||
                               (*(longlong *)
                                 (*(longlong *)(lVar5 + 0x30) +
                                 (longlong)*(int *)(lVar27 + 0x38) * 8) != lVar27 + 0x30))
                            goto LAB_1491ad7bd;
                            iVar20 = *(int *)(lVar29 + 0xe4);
                            iVar21 = (**(code **)(*plVar23 + 0xbb0))();
                            if (iVar20 < iVar21) {
                              if (*(float *)(lVar29 + 0xd0) <= 1.0 &&
                                  *(float *)(lVar29 + 0xd0) != 1.0) {
                                pdVar30 = (double *)&DAT_14c846480;
                                pdVar25 = local_178;
                                for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
                                  *pdVar25 = *pdVar30;
                                  pdVar30 = pdVar30 + 1;
                                  pdVar25 = pdVar25 + 1;
                                }
                                FUN_1410499a6(plVar23,*(undefined4 *)(lVar29 + 0xe4),local_178,1);
                                FUN_14915b8da(local_1f8,local_178,local_2f8);
                                puVar31 = (undefined8 *)local_1f8;
                                puVar33 = (undefined8 *)local_2f8;
                                for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
                                  *puVar33 = *puVar31;
                                  puVar31 = puVar31 + 1;
                                  puVar33 = puVar33 + 1;
                                }
                              }
                              local_310 = 1;
                              local_318 = 1;
                              (**(code **)(*plVar23 + 0xb30))
                                        (plVar23,*(undefined4 *)(lVar29 + 0xe4),local_2f8);
                            }
                            lVar35 = 0;
                          }
                          goto LAB_1491acf76;
                        }
                      }
LAB_1491ad7bd:
                      lVar35 = 0;
                      lVar28 = lVar22;
                      goto LAB_1491acf76;
                    }
                  }
                  if (lVar27 != 0) {
                    if (*(char *)(lVar29 + 0xd4) == '\0') {
                      FUN_1449437a2(local_2f8,local_178,lVar27 + 0x240);
                      pdVar30 = local_178;
                      pdVar25 = (double *)local_2f8;
                      for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
                        *pdVar25 = *pdVar30;
                        pdVar30 = pdVar30 + 1;
                        pdVar25 = pdVar25 + 1;
                      }
                    }
                    local_178[0] = (double)CONCAT44(local_178[0]._4_4_,
                                                    *(undefined4 *)(lVar29 + 0xe4));
                    pdVar25 = (double *)
                              FUN_1491cf450(lVar35 + 0x8a8,*(undefined4 *)(lVar29 + 0xe4),local_178)
                    ;
                    pdVar30 = (double *)local_2f8;
                    for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
                      *pdVar25 = *pdVar30;
                      pdVar30 = pdVar30 + 1;
                      pdVar25 = pdVar25 + 1;
                    }
                  }
                }
              }
            }
LAB_1491acf76:
            lVar29 = lVar29 + 0xf0;
            lVar32 = lVar32 + -0xf0;
            lVar22 = lVar28;
          } while (lVar32 != 0);
        }
        if (lVar35 != 0) {
          FUN_14495568a(lVar35 + 0x948,*(undefined8 *)(param_1 + 0x6c8));
        }
      }
    }
    else if ((0 < *(int *)(param_1 + 0x6a0)) &&
            (lVar29 = *(longlong *)(param_1 + 0x698), *(longlong *)(lVar29 + 0xd8) != 0)) {
      lVar22 = FUN_144a74fb4();
      lVar29 = *(longlong *)(lVar29 + 0xd8);
      if (((lVar29 != 0) &&
          (((lVar22 != 0 && (lVar35 = *(longlong *)(lVar29 + 0x10), lVar35 != 0)) &&
           (*(int *)(lVar22 + 0x38) <= *(int *)(lVar35 + 0x38))))) &&
         ((*(longlong *)(*(longlong *)(lVar35 + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8) ==
           lVar22 + 0x30 &&
          (plVar23 = (longlong *)FUN_144a81888(lVar29), plVar23 != (longlong *)0x0)))) {
        local_1f8 = ZEXT816(0);
        local_300 = plVar23;
        lVar22 = (**(code **)(*plVar23 + 0x310))(plVar23);
        FUN_1407a57f6(local_1f8,*(undefined4 *)(lVar22 + 0x28),1);
        if ((longlong)*(int *)(param_1 + 0x6a0) == 0) {
          lVar22 = 0;
        }
        else {
          lVar35 = *(longlong *)(param_1 + 0x698);
          lVar28 = (longlong)*(int *)(param_1 + 0x6a0) * 0xf0;
          lVar22 = 0;
          lVar32 = 0;
          do {
            if ((*(longlong *)(lVar35 + 0xd8) != lVar32) || (lVar22 == 0)) {
              lVar22 = FUN_1491a82dc(lVar35);
              if (lVar22 == 0) {
                lVar22 = 0;
              }
              else {
                FUN_1491cf2c8(lVar22 + 0x8a8);
                FUN_145bd9614(lVar22 + 0x8f8);
                FUN_1491adb38(lVar22 + 0x948);
                lVar32 = *(longlong *)(lVar35 + 0xd8);
              }
            }
            if (((((*(int *)(lVar35 + 0xe0) != -1) && (*(char *)(lVar35 + 0x60) != '\0')) &&
                 (*(byte *)(lVar35 + 0x54) < 5)) &&
                (((0x16U >> (*(byte *)(lVar35 + 0x54) & 0x1f) & 1) != 0 &&
                 (-1 < *(int *)(lVar35 + 0xe4))))) &&
               (*(int *)(lVar35 + 0xe4) < (int)local_1f8._8_4_)) {
              FUN_144afced8(*(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x2f8),local_178,
                            *(int *)(lVar35 + 0xe0),0);
              pdVar30 = local_178;
              pdVar25 = (double *)((longlong)*(int *)(lVar35 + 0xe4) * 0x60 + local_1f8._0_8_);
              for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                *pdVar25 = *pdVar30;
                pdVar30 = pdVar30 + 1;
                pdVar25 = pdVar25 + 1;
              }
            }
            lVar35 = lVar35 + 0xf0;
            lVar28 = lVar28 + -0xf0;
          } while (lVar28 != 0);
        }
        local_178[0] = 0.0;
        local_178[1] = 0.0;
        FUN_1407a57f6(local_178,local_1f8._8_4_,1);
        FUN_1407ecbee(local_300,local_1f8,lVar29 + 0xd60,
                      lVar29 + (longlong)*(int *)(lVar29 + 0x714) * 0x10 + 0x6d0);
        if (lVar22 != 0) {
          FUN_14495568a(lVar22 + 0x948,*(undefined8 *)(param_1 + 0x6c8));
        }
        if (local_178[0] != 0.0) {
          FUN_1400020a8();
        }
        if (local_1f8._0_8_ != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491adb38 FUN_1491adb38 body=156 status=ok
// SIG undefined FUN_1491adb38(void)

void FUN_1491adb38(undefined8 *param_1)

{
  FUN_144716758(param_1[2],*(undefined4 *)(param_1 + 3));
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_147a147b4(param_1 + 2,0);
  }
  FUN_144716727(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403b10bc(param_1,0);
  }
  FUN_144723c10(param_1[4],*(undefined4 *)(param_1 + 5));
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_1474d8698(param_1 + 4,0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) == 0) {
    return;
  }
  FUN_147a14d40(param_1 + 6,0);
  return;
}



// FUNCTION 1491adbdc FUN_1491adbdc body=58 status=ok
// SIG undefined FUN_1491adbdc(void)

undefined8 * FUN_1491adbdc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  bVar1 = FUN_14480c900(0,param_3);
  *(uint *)(param_2 + 2) = (uint)bVar1 * 4 + 0x82;
  *(undefined2 *)((longlong)param_2 + 4) = 0x242;
  return param_2;
}



// FUNCTION 1491adc50 FUN_1491adc50 body=114 status=ok
// SIG undefined FUN_1491adc50(void)

void FUN_1491adc50(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c01e8c();
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  if (*(int *)(param_1 + 0x3f4) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 1000),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 1000);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  FUN_1461eb2c6(param_1);
  return;
}



// FUNCTION 1491adcde FUN_1491adcde body=26 status=ok
// SIG undefined FUN_1491adcde(void)

void FUN_1491adcde(undefined8 param_1)

{
  FUN_1461eb2c6();
  FUN_146251a30(param_1);
  return;
}



// FUNCTION 1491adcf8 FUN_1491adcf8 body=41 status=ok
// SIG undefined FUN_1491adcf8(void)

void FUN_1491adcf8(longlong param_1)

{
  FUN_1448e423c();
  if (*(char *)(param_1 + 0x3a0) != '\x01') {
    return;
  }
  FUN_146251a30(param_1);
  return;
}



// FUNCTION 1491add22 FUN_1491add22 body=112 status=ok
// SIG undefined FUN_1491add22(void)

void FUN_1491add22(longlong param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  FUN_145c01e8c();
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  if (*(int *)(param_1 + 0x3f4) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 1000),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 1000);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  FUN_1461eb2c6(param_1);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 1491add92 FUN_1491add92 body=244 status=ok
// SIG undefined FUN_1491add92(void)

undefined8 FUN_1491add92(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14bb76960;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1491adcde;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ade88 FUN_1491ade88 body=61 status=ok
// SIG undefined FUN_1491ade88(void)

longlong FUN_1491ade88(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_140a1dfd8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1491adec6 FUN_1491adec6 body=143 status=ok
// SIG undefined FUN_1491adec6(void)

void FUN_1491adec6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    puVar2 = &DAT_14c846480;
    puVar3 = local_88;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    FUN_14480333a(*(longlong *)(param_1 + 0x1c8),local_88);
  }
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491adf5a FUN_1491adf5a body=41 status=ok
// SIG undefined FUN_1491adf5a(void)

void FUN_1491adf5a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x640))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1491adf88 FUN_1491adf88 body=41 status=ok
// SIG undefined FUN_1491adf88(void)

void FUN_1491adf88(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x668))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1491adfb6 FUN_1491adfb6 body=41 status=ok
// SIG undefined FUN_1491adfb6(void)

void FUN_1491adfb6(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x650))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1491adff4 FUN_1491adff4 body=162 status=ok
// SIG undefined FUN_1491adff4(void)

void FUN_1491adff4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x638))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae098 FUN_1491ae098 body=253 status=ok
// SIG undefined FUN_1491ae098(void)

void FUN_1491ae098(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_34 = 0x3ff00000;
  uStack_30 = 0;
  uStack_2c = 0x3ff00000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    puVar1 = &local_78;
    if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_2 + 0x38);
    }
    local_88 = 1;
    FUN_144927a08(*(longlong *)(param_1 + 0x1c8),puVar1,0,0);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae19a FUN_1491ae19a body=162 status=ok
// SIG undefined FUN_1491ae19a(void)

void FUN_1491ae19a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x660))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae242 FUN_1491ae242 body=162 status=ok
// SIG undefined FUN_1491ae242(void)

void FUN_1491ae242(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x658))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae2ea FUN_1491ae2ea body=162 status=ok
// SIG undefined FUN_1491ae2ea(void)

void FUN_1491ae2ea(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x648))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae3a0 FUN_1491ae3a0 body=150 status=ok
// SIG undefined FUN_1491ae3a0(void)

void FUN_1491ae3a0(longlong *param_1,byte param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x88) & 1) != param_2) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfe | param_2;
    FUN_1428255e4(&local_22);
    local_21 = *(byte *)(param_1 + 0x88) & 1;
    uVar1 = FUN_14477b072(param_1,DAT_14cc07068);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_21);
    FUN_1428255f8(&local_22);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae44e FUN_1491ae44e body=174 status=ok
// SIG undefined FUN_1491ae44e(void)

void FUN_1491ae44e(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)(param_1 + 0x88) & 4) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfb | param_2 * '\x04';
    if (param_2 == '\0') {
      (**(code **)(*param_1 + 0x648))(param_1,0);
    }
    FUN_1428255e4(&local_2a);
    local_29 = param_2;
    uVar1 = FUN_14477b072(param_1,DAT_14cc07038);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_29);
    FUN_1428255f8(&local_2a);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae4fe FUN_1491ae4fe body=162 status=ok
// SIG undefined FUN_1491ae4fe(void)

void FUN_1491ae4fe(longlong *param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0x88);
  *(byte *)(param_1 + 0x88) = (byte)uVar1 & 0xfd | param_2 * '\x02';
  if ((bool)param_2 != ((uVar1 >> 1 & 1) != 0)) {
    FUN_1428255e4(&local_22);
    local_21 = *(byte *)(param_1 + 0x88) >> 1 & 1;
    uVar2 = FUN_14477b072(param_1,DAT_14cc07048);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_21);
    FUN_1428255f8(&local_22);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae5ae FUN_1491ae5ae body=204 status=ok
// SIG undefined FUN_1491ae5ae(void)

void FUN_1491ae5ae(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x3a0) != 0) && (*(longlong *)(param_1 + 0x3c4) != 0)) {
    lVar2 = FUN_1448c9576(*(longlong *)(param_1 + 0x3a0),0);
    if (lVar2 != 0) {
      lVar3 = FUN_144a772c4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        local_48 = (double)*param_2;
        local_40 = (double)param_2[1];
        local_38 = (double)param_2[2];
        uVar1 = *(undefined8 *)(param_1 + 0x3c4);
        FUN_144a083d0(local_30);
        FUN_144a9d3f0(lVar2,uVar1,local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae680 FUN_1491ae680 body=147 status=ok
// SIG undefined FUN_1491ae680(void)

longlong FUN_1491ae680(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*param_2 != *(longlong *)(param_1 + 0x30)) {
    if (0 < (longlong)*(int *)(param_1 + 0x130)) {
      lVar1 = 0;
      plVar2 = *(longlong **)(param_1 + 0x128);
      do {
        if (*plVar2 == *param_2) {
          FUN_14485c47a((longlong)*(longlong **)(param_1 + 0x128) + (0x90 - lVar1),param_1);
          return *(longlong *)(param_1 + 0x128) - lVar1;
        }
        lVar1 = lVar1 + -0xa0;
        plVar2 = plVar2 + 0x14;
      } while ((longlong)*(int *)(param_1 + 0x130) * 0xa0 + lVar1 != 0);
    }
    if (param_3 == '\0') {
      return 0;
    }
  }
  FUN_14485c47a(param_1 + 0xc0,param_1);
  return param_1 + 0x30;
}



// FUNCTION 1491ae728 FUN_1491ae728 body=51 status=ok
// SIG undefined FUN_1491ae728(void)

bool FUN_1491ae728(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    bVar3 = false;
  }
  else {
    lVar1 = FUN_14479d2ce(param_1 + 8);
    lVar2 = FUN_14575d5b6(param_2);
    bVar3 = lVar1 == lVar2;
  }
  return bVar3;
}



// FUNCTION 1491ae766 FUN_1491ae766 body=102 status=ok
// SIG undefined FUN_1491ae766(void)

void FUN_1491ae766(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1411e6332();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae7ce FUN_1491ae7ce body=457 status=ok
// SIG undefined FUN_1491ae7ce(void)

void FUN_1491ae7ce(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pvVar1 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_38;
  local_68 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_30;
  local_60 = (int)uStack_30;
  if (lVar2 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,uStack_30 & 0xffffffff,0);
    memcpy(local_68,pvVar1,lVar2 * 2);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_3 = 0;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ae99e FUN_1491ae99e body=243 status=ok
// SIG undefined FUN_1491ae99e(void)

void FUN_1491ae99e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491aea92(param_1,local_28,local_2c != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491aea92 FUN_1491aea92 body=211 status=ok
// SIG undefined FUN_1491aea92(void)

void FUN_1491aea92(longlong param_1,double param_2,byte param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  
  lVar8 = (ulonglong)(param_3 ^ 1) * 0x10 + 0xd8;
  uVar2 = *(uint *)(param_1 + 0x110);
  uVar5 = (ulonglong)uVar2;
  if (uVar2 == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    uVar6 = *(uint *)(param_1 + 8 + lVar8);
    uVar4 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 8 + lVar8);
    uVar4 = uVar5;
    if ((int)uVar2 < 0) goto LAB_1491aeb3a;
  }
  uVar2 = (uint)uVar4;
  if ((int)uVar2 < (int)uVar6) {
    pdVar9 = (double *)(uVar4 * 0x90 + *(longlong *)(param_1 + lVar8));
    do {
      uVar5 = uVar4;
      if (param_2 < *pdVar9 || param_2 == *pdVar9) break;
      uVar4 = uVar4 + 1;
      *(int *)(param_1 + 0x110) = (int)uVar4;
      pdVar9 = pdVar9 + 0x12;
      uVar5 = (ulonglong)uVar6;
    } while (uVar6 != uVar4);
    uVar2 = (uint)uVar5;
    if ((int)uVar2 < 0) goto LAB_1491aeb3a;
  }
  lVar10 = (ulonglong)uVar2 * 0x90;
  uVar5 = (ulonglong)uVar2;
  do {
    if (((int)uVar6 <= (int)uVar2) ||
       (*(double *)(*(longlong *)(param_1 + lVar8) + lVar10) <= param_2)) goto LAB_1491aeb3a;
    *(int *)(param_1 + 0x110) = (int)(uVar5 - 1);
    lVar10 = lVar10 + -0x90;
    bVar1 = 0 < (longlong)uVar5;
    uVar5 = uVar5 - 1;
  } while (bVar1);
  uVar5 = 0xffffffff;
LAB_1491aeb3a:
  iVar7 = uVar6 - 1;
  if ((int)uVar5 < (int)(uVar6 - 1)) {
    iVar7 = (int)uVar5;
  }
  iVar3 = 0;
  if (0 < iVar7) {
    iVar3 = iVar7;
  }
  *(int *)(param_1 + 0x110) = iVar3;
  return;
}



// FUNCTION 1491aeb66 FUN_1491aeb66 body=65 status=ok
// SIG undefined FUN_1491aeb66(void)

void FUN_1491aeb66(longlong param_1,longlong param_2,char *param_3)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0x128);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = *(char *)(param_1 + 0x130) + '\x01';
  }
  *param_3 = cVar1;
  return;
}



// FUNCTION 1491aebac FUN_1491aebac body=237 status=ok
// SIG undefined FUN_1491aebac(void)

void FUN_1491aebac(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = (ulonglong)(local_24 == 0) * 0x10;
  iVar2 = *(int *)(param_1 + 0xe0 + lVar3);
  if (iVar2 == 0) {
    puVar4 = &DAT_14c8463f0;
    puVar5 = &DAT_14c8463f8;
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + lVar3 + 0xd8);
    puVar5 = puVar4 + (longlong)(iVar2 + -1) * 0x12;
  }
  uVar1 = *puVar5;
  *param_3 = *puVar4;
  param_3[1] = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491aecc8 FUN_1491aecc8 body=44 status=ok
// SIG undefined FUN_1491aecc8(void)

void FUN_1491aecc8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144729dda(param_1 + 0x128);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1491aecfa FUN_1491aecfa body=240 status=ok
// SIG undefined FUN_1491aecfa(void)

void FUN_1491aecfa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491aedec(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491aedec FUN_1491aedec body=745 status=ok
// SIG undefined FUN_1491aedec(void)

bool FUN_1491aedec(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  LARGE_INTEGER local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_14479d2ce(param_1 + 0x128);
    if (lVar1 != 0) {
      FUN_1491af8bc(param_1,lVar1);
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
    FUN_1491af8bc(param_1,param_2);
    *(undefined8 *)(param_1 + 0x118) = param_3;
    QueryPerformanceCounter(&local_60);
    *(double *)(param_1 + 0x120) = (double)local_60.QuadPart * DAT_14c83f420 + 16777216.0;
    if (*(int *)(param_1 + 0xe0) == 0) {
      (**(code **)(*param_2 + 0x308))(param_2);
      local_60.QuadPart = 0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,2,0x10);
      local_58 = 2;
      *(undefined ***)local_60 = &PTR_LAB_14bb768f0;
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
      *(longlong *)(local_60.QuadPart + 0x10) = lVar2;
      *(undefined ***)local_60 = &PTR_FUN_14bb76ac0;
      *(longlong *)(local_60.QuadPart + 0x18) = param_1;
      FUN_1491cea0e(param_2 + 0xb8,&local_68,&local_60);
      FUN_1449db362(&local_60);
      *(ulonglong *)(param_1 + 0x138) = local_68;
    }
    local_60.QuadPart = 0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,2,0x10);
    local_58 = 2;
    *(undefined ***)local_60 = &PTR_LAB_14bb768f0;
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
    *(longlong *)(local_60.QuadPart + 0x10) = lVar2;
    *(undefined ***)local_60 = &PTR_FUN_14bb76b30;
    *(longlong *)(local_60.QuadPart + 0x18) = param_1;
    FUN_1491cea0e(param_2 + 0xbe,&local_68,&local_60);
    FUN_1449db362(&local_60);
    *(ulonglong *)(param_1 + 0x140) = local_68;
    local_60.QuadPart = 0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,2,0x10);
    local_58 = 2;
    *(undefined ***)local_60 = &PTR_LAB_14bb768f0;
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
    *(longlong *)(local_60.QuadPart + 0x10) = lVar2;
    *(undefined ***)local_60 = &PTR_FUN_14bb76ba0;
    *(longlong *)(local_60.QuadPart + 0x18) = param_1;
    FUN_1491cea0e(param_2 + 0xc1,&local_68,&local_60);
    FUN_1449db362(&local_60);
    *(ulonglong *)(param_1 + 0x148) = local_68;
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491af0d6 FUN_1491af0d6 body=71 status=ok
// SIG undefined FUN_1491af0d6(void)

void FUN_1491af0d6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_14479d2ce(param_1 + 0x128);
  if (lVar1 != 0) {
    FUN_1491af8bc(param_1,lVar1);
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  return;
}



// FUNCTION 1491af12a FUN_1491af12a body=242 status=ok
// SIG undefined FUN_1491af12a(void)

void FUN_1491af12a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491af21e(param_1,local_28,local_2c != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491af21e FUN_1491af21e body=734 status=ok
// SIG undefined FUN_1491af21e(void)

undefined8 FUN_1491af21e(longlong param_1,longlong *param_2,undefined1 param_3)

{
  double dVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_14479d2ce(param_1 + 0x128);
  if (lVar2 != 0) {
    FUN_1491af8bc(param_1,lVar2);
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  FUN_1491af8bc(param_1,param_2);
  if (((param_2 == (longlong *)0x0) ||
      (*(undefined1 *)(param_1 + 0x130) = param_3, *(int *)(param_1 + 0xe0) == 0)) ||
     (*(int *)(param_1 + 0xf0) == 0)) {
    uVar3 = 0;
  }
  else {
    dVar1 = (*(double **)(param_1 + 0xd8))[1];
    *(float *)((longlong)param_2 + 0x4c) = (float)**(double **)(param_1 + 0xd8);
    *(float *)(param_2 + 9) = (float)dVar1;
    (**(code **)(*param_2 + 0x308))(param_2);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,2,0x10);
    local_50 = 2;
    *local_58 = &PTR_LAB_14bb768f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14bb76c10;
    local_58[3] = param_1;
    FUN_1491cea0e(param_2 + 0xb8,&local_60,&local_58);
    FUN_1449db362(&local_58);
    *(undefined8 *)(param_1 + 0x138) = local_60;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,2,0x10);
    local_50 = 2;
    *local_58 = &PTR_LAB_14bb768f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14bb76c80;
    local_58[3] = param_1;
    FUN_1491cea0e(param_2 + 0xbe,&local_60,&local_58);
    FUN_1449db362(&local_58);
    *(undefined8 *)(param_1 + 0x140) = local_60;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,2,0x10);
    local_50 = 2;
    *local_58 = &PTR_LAB_14bb768f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14bb76cf0;
    local_58[3] = param_1;
    FUN_1491cea0e(param_2 + 0xc1,&local_60,&local_58);
    FUN_1449db362(&local_58);
    *(undefined8 *)(param_1 + 0x148) = local_60;
    FUN_14485c47a(param_1 + 0x128,param_2);
    uVar3 = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491af50c FUN_1491af50c body=376 status=ok
// SIG undefined FUN_1491af50c(void)

void FUN_1491af50c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb76ef4);
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  local_28 = 0xa7820cfb;
  uStack_24 = 0x20a74359;
  uStack_20 = 0x8c542c14;
  uStack_1c = 0x9623cf50;
  iVar2 = FUN_1448a256a(param_1);
  if (iVar2 < 0x1e) {
    iVar2 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
      lVar4 = 0;
      do {
        *(undefined1 *)(lVar3 + 0xf8 + lVar4) = 0;
        *(undefined8 *)(lVar3 + 0xfc + lVar4) = 0;
        lVar4 = lVar4 + 0x110;
      } while ((longlong)iVar2 * 0x110 - lVar4 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd8);
      lVar4 = (longlong)*(int *)(param_1 + 0xe0) * 0x90 + lVar3;
      do {
        iVar2 = *(int *)(lVar3 + 0x28);
        if ((longlong)iVar2 != 0) {
          lVar1 = *(longlong *)(lVar3 + 0x20);
          lVar5 = 0;
          do {
            *(undefined1 *)(lVar1 + 0xf8 + lVar5) = 0;
            *(undefined8 *)(lVar1 + 0xfc + lVar5) = 0;
            lVar5 = lVar5 + 0x110;
          } while ((longlong)iVar2 * 0x110 - lVar5 != 0);
        }
        lVar3 = lVar3 + 0x90;
      } while (lVar3 != lVar4);
    }
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe8);
      lVar4 = (longlong)*(int *)(param_1 + 0xf0) * 0x90 + lVar3;
      do {
        iVar2 = *(int *)(lVar3 + 0x28);
        if ((longlong)iVar2 != 0) {
          lVar1 = *(longlong *)(lVar3 + 0x20);
          lVar5 = 0;
          do {
            *(undefined1 *)(lVar1 + 0xf8 + lVar5) = 0;
            *(undefined8 *)(lVar1 + 0xfc + lVar5) = 0;
            lVar5 = lVar5 + 0x110;
          } while ((longlong)iVar2 * 0x110 - lVar5 != 0);
        }
        lVar3 = lVar3 + 0x90;
      } while (lVar3 != lVar4);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491af686 FUN_1491af686 body=565 status=ok
// SIG undefined FUN_1491af686(void)

void FUN_1491af686(double *param_1,longlong *param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  int iVar3;
  double dVar4;
  void *_Src;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_118 [32];
  undefined8 **local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulonglong uStack_b8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != (longlong *)0x0) {
    *param_1 = (double)*(float *)((longlong)param_2 + 0x4c);
    param_1[1] = (double)*(float *)(param_2 + 9);
    local_f8 = &local_e0;
    local_e0 = (undefined8 *)0x0;
    local_d8 = 0;
    local_f0 = CONCAT31(local_f0._1_3_,1);
    FUN_1444a18e6(param_2[0x5f],&local_d0,param_3,0xff);
    FUN_149185768(param_1 + 4,&local_d0);
    FUN_1401f95f4(&local_d0);
    pdVar1 = param_1 + 2;
    iVar3 = *(int *)((longlong)param_1 + 0x1c);
    FUN_145bdc764(param_1[2],*(undefined4 *)(param_1 + 3));
    *(undefined4 *)(param_1 + 3) = 0;
    if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) {
      FUN_1491cfea4(pdVar1);
    }
    (**(code **)(*param_2 + 0x360))(param_2,&local_e0,1);
    if ((longlong)local_d8 != 0) {
      puVar6 = local_e0 + (longlong)local_d8 * 6;
      puVar5 = local_e0;
      do {
        local_c0 = (void *)0x0;
        uStack_b8 = 0;
        local_d0 = *puVar5;
        uStack_c8 = puVar5[2];
        if ((puVar5[1] != 0) && (lVar7 = puVar5[5], lVar7 != 0)) {
          local_e8 = 0;
          local_f8 = (undefined8 **)0x0;
          local_f0 = 0;
          FUN_14280c87e(puVar5[1],&local_c0,lVar7,lVar7);
        }
        iVar3 = *(int *)(param_1 + 3);
        *(uint *)(param_1 + 3) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
          FUN_1491cfed4(pdVar1,iVar3);
        }
        _Src = local_c0;
        dVar4 = *pdVar1;
        lVar8 = (longlong)iVar3 * 0x20;
        puVar2 = (undefined4 *)((longlong)dVar4 + lVar8);
        *puVar2 = (undefined4)local_d0;
        puVar2[1] = local_d0._4_4_;
        puVar2[2] = (undefined4)uStack_c8;
        puVar2[3] = uStack_c8._4_4_;
        *(undefined8 *)((longlong)dVar4 + 0x10 + lVar8) = 0;
        lVar7 = (longlong)(int)uStack_b8;
        *(int *)((longlong)dVar4 + 0x18 + lVar8) = (int)uStack_b8;
        if (lVar7 == 0) {
          *(undefined4 *)((longlong)dVar4 + lVar8 + 0x1c) = 0;
        }
        else {
          puVar9 = (undefined8 *)(lVar8 + (longlong)dVar4 + 0x10);
          FUN_1446dd670(puVar9,uStack_b8 & 0xffffffff,0);
          memcpy((void *)*puVar9,_Src,lVar7 * 2);
        }
        if (local_c0 != (void *)0x0) {
          FUN_1400020a8();
        }
        puVar5 = puVar5 + 6;
      } while (puVar5 != puVar6);
    }
    if (local_e0 != (undefined8 *)0x0) {
      FUN_1400020a8(local_e0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491af8bc FUN_1491af8bc body=132 status=ok
// SIG undefined FUN_1491af8bc(void)

void FUN_1491af8bc(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x138) != 0) {
      FUN_14480f766(param_2 + 0x5c0);
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_14480f766(param_2 + 0x5f0);
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    if (*(longlong *)(param_1 + 0x148) != 0) {
      FUN_14480f766(param_2 + 0x608);
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
  }
  return;
}


