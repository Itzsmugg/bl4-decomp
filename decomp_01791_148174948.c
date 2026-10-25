// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148174948 FUN_148174948 body=53 status=ok
// SIG undefined FUN_148174948(void)

ulonglong FUN_148174948(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14817497e FUN_14817497e body=53 status=ok
// SIG undefined FUN_14817497e(void)

ulonglong FUN_14817497e(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1481749b4 FUN_1481749b4 body=2165 status=ok
// SIG undefined FUN_1481749b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481749b4(longlong *param_1)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  char cVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  double *pdVar25;
  longlong *plVar26;
  char cVar27;
  int iVar28;
  longlong *plVar29;
  ulonglong uVar30;
  double *pdVar31;
  undefined1 uVar32;
  uint uVar33;
  longlong *plVar34;
  uint uVar35;
  ulonglong uVar36;
  undefined8 *puVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auStack_238 [32];
  ulonglong local_218;
  undefined8 *local_210;
  longlong local_208;
  longlong *local_200;
  ulonglong *local_1f8;
  int local_1ec;
  ulonglong local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  ulonglong *local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  plVar26 = param_1 + 0x2b;
  lVar20 = FUN_14479d2ce(plVar26);
  lVar20 = (**(code **)(*(longlong *)(lVar20 + 0x390) + 0x18))(lVar20 + 0x390);
  if (lVar20 != 0) {
    lVar21 = FUN_14479d2ce(plVar26);
    uVar3 = *(uint *)(lVar21 + 0x83c);
    uVar33 = (((int)param_1[0x31] - (int)param_1[0x30]) + 1) * uVar3 + 1;
    uVar35 = (((int)((ulonglong)param_1[0x31] >> 0x20) - *(int *)((longlong)param_1 + 0x184)) + 1) *
             uVar3 + 1;
    puVar22 = (undefined8 *)FUN_14001cc68(0x98,0x10);
    *(undefined4 *)(puVar22 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)puVar22 + 0xc) = 0x105;
    *(undefined1 *)((longlong)puVar22 + 0xe) = 0;
    *puVar22 = &PTR_FUN_14adced70;
    local_1c0 = CONCAT44(uVar35,uVar33);
    puVar22[2] = 0;
    puVar22[3] = 0;
    *(undefined4 *)(puVar22 + 4) = 0;
    puVar22[5] = 0;
    puVar22[6] = 0;
    *(undefined4 *)(puVar22 + 7) = 0;
    puVar22[8] = local_1c0;
    puVar22[9] = 0;
    puVar22[10] = 0;
    puVar22[0xb] = 0;
    puVar22[0xc] = 0;
    puVar22[0xd] = &PTR_FUN_14add3710;
    puVar22[0xe] = 0;
    *(undefined4 *)(puVar22 + 0xf) = 0;
    puVar22[0x10] = &PTR_FUN_14add3710;
    puVar22[0x11] = 0;
    *(undefined4 *)(puVar22 + 0x12) = 0;
    puVar37 = (undefined8 *)*param_1;
    *param_1 = (longlong)puVar22;
    local_218 = (ulonglong)uVar33;
    local_200 = param_1;
    if (puVar37 != (undefined8 *)0x0) {
      (**(code **)*puVar37)(puVar37,1);
    }
    plVar29 = local_200;
    iVar28 = uVar35 * (int)local_218;
    local_208 = lVar20;
    if ((char)local_200[0x32] == '\x01') {
      lVar20 = *local_200;
      local_148 = (double)((ulonglong)local_148 & 0xffffffff00000000);
      puVar37 = (undefined8 *)(lVar20 + 0x48);
      FUN_14005ea14(puVar37,iVar28);
      local_210 = puVar37;
      FUN_1448158c6(puVar37,&local_148,iVar28);
      *(undefined8 *)(lVar20 + 0x70) = *(undefined8 *)(lVar20 + 0x48);
      *(int *)(lVar20 + 0x78) = *(int *)(lVar20 + 0x50) << 2;
    }
    else {
      local_210 = (undefined8 *)0x0;
    }
    local_1b8 = (ulonglong)uVar35;
    if (*(char *)((longlong)plVar29 + 0x191) == '\x01') {
      lVar20 = *plVar29;
      local_148 = (double)CONCAT71(local_148._1_7_,0xff);
      plVar34 = (longlong *)(lVar20 + 0x58);
      FUN_1400ec3e6(plVar34,iVar28);
      FUN_141724bc2(plVar34,&local_148,iVar28);
      *(undefined8 *)(lVar20 + 0x88) = *(undefined8 *)(lVar20 + 0x58);
      *(undefined4 *)(lVar20 + 0x90) = *(undefined4 *)(lVar20 + 0x60);
    }
    else {
      plVar34 = (longlong *)0x0;
    }
    iVar28 = (int)local_218;
    local_1c8 = (ulonglong)((int)plVar29[0x30] * uVar3);
    local_1d0 = (ulonglong)((int)((ulonglong)plVar29[0x30] >> 0x20) * uVar3);
    if ((longlong)(int)plVar29[0x2f] != 0) {
      puVar23 = (ulonglong *)plVar29[0x2e];
      local_1a0 = puVar23 + (int)plVar29[0x2f];
      local_1b0 = local_208 + 0xd8;
      local_1e0 = local_218 & 0xffffffff;
      lVar20 = local_208;
      puVar37 = local_210;
      uVar36 = local_218;
      local_1d8 = plVar26;
      do {
        uVar30 = *puVar23;
        local_1f8 = puVar23;
        uVar33 = FUN_144a78877(uVar30 & 0xffffffff,uVar30 >> 0x20);
        if (*(int *)(lVar20 + 0xa8) != *(int *)(lVar20 + 0xd4)) {
          lVar21 = *(longlong *)(lVar20 + 0xe0);
          if (*(longlong *)(lVar20 + 0xe0) == 0) {
            lVar21 = local_1b0;
          }
          iVar28 = *(int *)(lVar21 + (ulonglong)(*(int *)(lVar20 + 0xe8) - 1U & uVar33) * 4);
          if (iVar28 != -1) {
            do {
              puVar23 = (ulonglong *)(*(longlong *)(lVar20 + 0xa0) + (longlong)iVar28 * 0x18);
              if (*puVar23 == uVar30) {
                if ((puVar23 != (ulonglong *)0x0) && (uVar30 = puVar23[1], uVar30 != 0)) {
                  if (puVar37 != (undefined8 *)0x0) {
                    local_158 = *puVar37;
                    local_150 = *(undefined4 *)(puVar37 + 1);
                    FUN_147456c3c(uVar30,&local_158,
                                  (((int)(*local_1f8 >> 0x20) - *(int *)((longlong)plVar29 + 0x184))
                                   * (int)uVar36 + ((int)*local_1f8 - (int)plVar29[0x30])) * uVar3,
                                  uVar36 & 0xffffffff);
                  }
                  if (plVar34 != (longlong *)0x0) {
                    local_1e8 = *local_1f8;
                    local_1ec = (int)plVar29[0x30];
                    iVar28 = (int)(local_1e8 >> 0x20) - *(int *)((longlong)plVar29 + 0x184);
                    local_168 = *plVar34;
                    local_160 = (undefined4)plVar34[1];
                    FUN_147456dfa(uVar30,&local_168,
                                  uVar3 * (int)uVar36 * iVar28 +
                                  ((int)local_1e8 - local_1ec) * uVar3,uVar36 & 0xffffffff);
                    local_148 = 0.0;
                    uStack_140 = 0.0;
                    if ((longlong)*(int *)(uVar30 + 0x6c0) != 0) {
                      puVar37 = *(undefined8 **)(uVar30 + 0x6b8);
                      local_1a8 = puVar37 + *(int *)(uVar30 + 0x6c0);
                      do {
                        cVar27 = -1;
                        if ((longlong)(int)plVar29[0x2d] != 0) {
                          uVar4 = *puVar37;
                          lVar20 = plVar29[0x2c];
                          lVar21 = (longlong)(int)plVar29[0x2d] << 3;
                          cVar27 = '\0';
                          do {
                            cVar19 = FUN_148181e68(lVar20,uVar4);
                            plVar29 = local_200;
                            if (cVar19 != '\0') goto LAB_148174e21;
                            lVar20 = lVar20 + 8;
                            cVar27 = cVar27 + '\x01';
                            lVar21 = lVar21 + -8;
                          } while (lVar21 != 0);
                          cVar27 = -1;
                        }
LAB_148174e21:
                        dVar1 = uStack_140;
                        lVar20 = (longlong)(int)uStack_140;
                        uVar33 = (int)uStack_140 + 1;
                        uStack_140 = (double)CONCAT44(uStack_140._4_4_,uVar33);
                        if (uStack_140._4_4_ < uVar33) {
                          FUN_1447403be(&local_148,(ulonglong)dVar1 & 0xffffffff);
                        }
                        *(char *)((longlong)local_148 + lVar20) = cVar27;
                        puVar37 = puVar37 + 1;
                      } while (puVar37 != local_1a8);
                    }
                    plVar26 = local_1d8;
                    lVar20 = local_208;
                    uVar36 = local_218;
                    if (0 < (int)uVar3) {
                      uVar30 = (ulonglong)
                               (((iVar28 * (int)local_218 + (int)local_1e8) - local_1ec) * uVar3);
                      uVar33 = 0;
                      do {
                        uVar24 = 0;
                        do {
                          lVar21 = (longlong)((int)uVar30 + (int)uVar24);
                          bVar2 = *(byte *)(*plVar34 + lVar21);
                          uVar32 = 0xff;
                          if ((int)(uint)bVar2 < (int)uStack_140) {
                            uVar32 = *(undefined1 *)((longlong)local_148 + (ulonglong)bVar2);
                          }
                          *(undefined1 *)(*plVar34 + lVar21) = uVar32;
                          uVar24 = uVar24 + 1;
                        } while (uVar3 != uVar24);
                        uVar33 = uVar33 + 1;
                        uVar30 = uVar30 + local_1e0;
                      } while (uVar33 != uVar3);
                    }
                    puVar37 = local_210;
                    if (local_148 != 0.0) {
                      FUN_1400020a8();
                      puVar37 = local_210;
                    }
                  }
                }
                break;
              }
              iVar28 = (int)puVar23[2];
            } while (iVar28 != -1);
          }
        }
        iVar28 = (int)uVar36;
        puVar23 = local_1f8 + 1;
      } while (puVar23 != local_1a0);
    }
    plVar29[0x28] = local_1c0;
    plVar29[0x24] = (longlong)(double)(1.0 / (float)iVar28);
    plVar29[0x25] = (longlong)(double)(1.0 / (float)(int)local_1b8);
    plVar29[0x26] =
         (longlong)((double)(0.5 - (float)(int)local_1c8) * (double)(1.0 / (float)iVar28));
    plVar29[0x27] =
         (longlong)((double)(0.5 - (float)(int)local_1d0) * (double)(1.0 / (float)(int)local_1b8));
    lVar20 = FUN_14479d2ce(plVar26);
    pdVar25 = (double *)(*(longlong *)(lVar20 + 0x1c8) + 0x240);
    if (*(longlong *)(lVar20 + 0x1c8) == 0) {
      pdVar25 = (double *)&DAT_14c846480;
    }
    dVar13 = *pdVar25;
    dVar14 = pdVar25[1];
    dVar15 = pdVar25[2];
    local_148 = pdVar25[4];
    uStack_140 = pdVar25[5];
    dVar16 = pdVar25[8];
    dVar17 = pdVar25[9];
    dVar18 = pdVar25[10];
    local_138 = pdVar25[6];
    dVar1 = *pdVar25;
    dVar39 = pdVar25[3];
    dVar43 = pdVar25[3];
    FUN_144b35076(&local_198);
    *(float *)(plVar29 + 1) = (float)local_198;
    *(float *)((longlong)plVar29 + 0xc) = (float)local_190;
    *(float *)(plVar29 + 2) = (float)local_188;
    auVar38._0_8_ = (double)(float)local_170;
    auVar38._8_8_ = 0;
    dVar40 = dVar14 + dVar14;
    dVar41 = dVar15 + dVar15;
    dVar9 = dVar13 * (dVar13 + dVar13);
    dVar7 = (1.0 - (dVar15 * dVar41 + dVar9)) * dVar17;
    dVar42 = dVar41 * dVar39;
    dVar43 = (dVar13 + dVar13) * dVar43;
    dVar39 = dVar40 * dVar39;
    dVar12 = (dVar40 * dVar13 + dVar42) * dVar16;
    dVar10 = (dVar41 * dVar14 - dVar43) * dVar18;
    auVar38 = blendps(auVar38,_DAT_149935300,0xc);
    auVar11._8_4_ = SUB84(dVar12,0);
    auVar11._0_8_ = (1.0 - (dVar15 * dVar41 + dVar14 * dVar40)) * dVar16;
    auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(plVar29 + 4) = auVar11;
    plVar29[6] = (longlong)((dVar1 * dVar41 - dVar39) * dVar16);
    plVar29[7] = 0;
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = (dVar40 * dVar13 - dVar42) * dVar17;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])(plVar29 + 8) = auVar6;
    plVar29[10] = (longlong)((dVar41 * dVar14 + dVar43) * dVar17);
    plVar29[0xb] = 0;
    auVar8._8_4_ = SUB84(dVar10,0);
    auVar8._0_8_ = (dVar39 + dVar1 * dVar41) * dVar18;
    auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])(plVar29 + 0xc) = auVar8;
    plVar29[0xe] = (longlong)((1.0 - (dVar9 + dVar14 * dVar40)) * dVar18);
    plVar29[0xf] = 0;
    auVar5._8_4_ = SUB84((double)(float)local_178,0);
    auVar5._0_8_ = (double)(float)local_180;
    auVar5._12_4_ = (int)((ulonglong)(double)(float)local_178 >> 0x20);
    *(undefined1 (*) [16])(plVar29 + 0x10) = auVar5;
    *(undefined1 (*) [16])(plVar29 + 0x12) = auVar38;
    FUN_14494412e(plVar29 + 4,&local_148);
    pdVar25 = &local_148;
    pdVar31 = (double *)(plVar29 + 0x14);
    for (lVar20 = 0x10; lVar20 != 0; lVar20 = lVar20 + -1) {
      *pdVar31 = *pdVar25;
      pdVar25 = pdVar25 + 1;
      pdVar31 = pdVar31 + 1;
    }
    lVar20 = FUN_14479d2ce(plVar26);
    puVar37 = (undefined8 *)(*(longlong *)(lVar20 + 0x1c8) + 0x240);
    if (*(longlong *)(lVar20 + 0x1c8) == 0) {
      puVar37 = &DAT_14c846480;
    }
    lVar20 = puVar37[9];
    plVar29[0x29] = puVar37[8];
    plVar29[0x2a] = lVar20;
    FUN_140308182(*plVar29,0);
  }
  if ((local_c0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817522a FUN_14817522a body=78 status=ok
// SIG undefined FUN_14817522a(void)

void FUN_14817522a(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x19d);
  *param_2 = 0;
  if (cVar1 != *(char *)(param_1 + 0x19c)) {
    if (cVar1 == '\x02') {
      FUN_143a466ec(param_1);
      *param_2 = 1;
    }
    else if (cVar1 == '\x01') {
      FUN_1481749b4(param_1);
    }
    *(char *)(param_1 + 0x19c) = cVar1;
  }
  return;
}



// FUNCTION 148175278 FUN_148175278 body=208 status=ok
// SIG undefined FUN_148175278(void)

void FUN_148175278(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_14adcee48;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 1));
  if ((longlong)*(int *)(param_1 + 3) != 0) {
    puVar6 = (undefined8 *)param_1[2];
    puVar5 = puVar6 + (longlong)*(int *)(param_1 + 3) * 2;
    do {
      uVar3 = *puVar6;
      plVar4 = (longlong *)puVar6[1];
      if (plVar4 == (longlong *)0x0) {
        FUN_143a466ec(uVar3);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        FUN_143a466ec(uVar3);
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
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar5);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 1));
  FUN_148181edf(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_148181edf(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148175348 FUN_148175348 body=130 status=ok
// SIG undefined FUN_148175348(void)

void FUN_148175348(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14818204c(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1481820d2(param_1,param_2,iVar1 - param_2);
    FUN_148181fb0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481753cc FUN_1481753cc body=101 status=ok
// SIG undefined FUN_1481753cc(void)

undefined4 FUN_1481753cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3c25c) {
    FUN_144b3d300(&DAT_14cb3c25c);
    if (DAT_14cb3c25c == -1) {
      DAT_14cb3c258 = FUN_144a8db9c(L"FNDI_Landscape_GeneratedData");
      _Init_thread_footer(&DAT_14cb3c25c);
    }
  }
  return DAT_14cb3c258;
}



// FUNCTION 148175432 FUN_148175432 body=2718 status=ok
// SIG undefined FUN_148175432(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 *
FUN_148175432(longlong param_1,undefined2 *param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined2 *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auStack_248 [32];
  uint local_228;
  uint local_224;
  longlong *local_220;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  longlong local_200;
  undefined2 *local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  longlong lStack_1e0;
  undefined8 local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  undefined2 uStack_1c0;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_168 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  undefined8 local_108;
  undefined8 local_100;
  longlong lStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar10 = FUN_14479d2ce(param_5);
  if (lVar10 != 0) {
    lVar11 = (**(code **)(*(longlong *)(lVar10 + 0x390) + 0x18))(lVar10 + 0x390);
    if (lVar11 != 0) {
      uVar24 = *(int *)(lVar11 + 0xa8) - *(int *)(lVar11 + 0xd4);
      dVar31 = (double)*(float *)(param_4 + 0x14) * 65536.0;
      dVar30 = (double)*(float *)(param_4 + 0x10) * 65536.0;
      dVar29 = (double)*(float *)(param_4 + 0xc) * 65536.0;
      local_200 = param_1;
      local_1f8 = param_2;
      FUN_144a1c3a2(param_4 + 0x830,&local_148,param_4 + 0x50);
      local_148 = local_148 + dVar29;
      dStack_140 = dStack_140 + dVar30;
      local_138 = local_138 + dVar31;
      dStack_130 = dVar29 + dStack_130;
      local_128 = dVar30 + local_128;
      local_120 = dVar31 + local_120;
      (**(code **)(*(longlong *)(lVar10 + 0x390) + 0x20))(lVar10 + 0x390,&local_1a8);
      dVar26 = local_148 - local_188;
      dVar27 = dStack_140 - dStack_180;
      local_198 = local_198 * -1.0;
      dStack_190 = dStack_190 * 1.0;
      dVar28 = -local_1a8;
      dStack_1a0 = -dStack_1a0;
      dVar31 = dVar27 * dVar28 - dVar26 * dStack_1a0;
      dVar29 = (local_138 - local_178) * dStack_1a0 - dVar27 * local_198;
      dVar30 = dVar26 * local_198 - (local_138 - local_178) * dVar28;
      dVar29 = dVar29 + dVar29;
      dVar30 = dVar30 + dVar30;
      dVar31 = dVar31 + dVar31;
      auVar32 = divpd(_DAT_149934d80,local_168);
      dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_168._0_8_)) & auVar32._0_8_);
      dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_168._8_8_)) & auVar32._8_8_);
      dVar26 = ((dVar31 * dStack_1a0 - dVar30 * local_198) + dStack_190 * dVar29 + dVar26) * dVar4;
      dVar27 = (dVar31 * local_1a8 + local_198 * dVar29 + dStack_190 * dVar30 + dVar27) * dVar5;
      local_188 = dStack_130 - local_188;
      dStack_180 = local_128 - dStack_180;
      dVar31 = dStack_180 * dVar28 - dStack_1a0 * local_188;
      dVar29 = (local_120 - local_178) * dStack_1a0 - local_198 * dStack_180;
      dVar30 = local_188 * local_198 - (local_120 - local_178) * dVar28;
      dVar29 = dVar29 + dVar29;
      dVar30 = dVar30 + dVar30;
      dVar31 = dVar31 + dVar31;
      dVar4 = ((dVar31 * dStack_1a0 - dVar30 * local_198) + dStack_190 * dVar29 + local_188) * dVar4
      ;
      dVar5 = (dVar31 * local_1a8 + local_198 * dVar29 + dStack_190 * dVar30 + dStack_180) * dVar5;
      dVar31 = dVar26;
      if (dVar26 <= dVar4) {
        dVar31 = dVar4;
      }
      if (dVar4 <= dVar26) {
        dVar26 = dVar4;
      }
      dVar29 = dVar27;
      if (dVar27 <= dVar5) {
        dVar29 = dVar5;
      }
      if (dVar5 <= dVar27) {
        dVar27 = dVar5;
      }
      if (dVar27 <= DAT_14c8464e8) {
        dVar27 = DAT_14c8464e8;
      }
      if (dVar26 <= DAT_14c8464e0) {
        dVar26 = DAT_14c8464e0;
      }
      if (dVar29 <= DAT_14c8464e8) {
        dVar29 = DAT_14c8464e8;
      }
      if (dVar31 <= DAT_14c8464e0) {
        dVar31 = DAT_14c8464e0;
      }
      dVar30 = 1.0 / (double)*(int *)(lVar10 + 0x83c);
      dVar26 = dVar26 * dVar30;
      dVar27 = dVar27 * dVar30;
      dVar31 = dVar31 * dVar30;
      dVar30 = dVar30 * dVar29;
      if (2147483647.0 <= dVar27) {
        dVar27 = 2147483647.0;
      }
      if (2147483647.0 <= dVar26) {
        dVar26 = 2147483647.0;
      }
      if (2147483647.0 <= dVar30) {
        dVar30 = 2147483647.0;
      }
      if (2147483647.0 <= dVar31) {
        dVar31 = 2147483647.0;
      }
      local_218 = (ulonglong)(longlong)ROUND(-0.5 - (dVar31 + dVar31)) >> 1;
      local_208 = (ulonglong)(longlong)ROUND(dVar26 + dVar26 + -0.5) >> 1;
      uVar21 = ((longlong)ROUND(-0.5 - (dVar30 + dVar30)) & 0xfffffffffffffffeU) * -0x80000000;
      local_224 = -(int)local_218;
      uVar8 = local_224 - (int)local_208;
      if ((int)uVar24 <= (int)uVar8) {
        uVar8 = uVar24;
      }
      uVar16 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar16 = 0;
      }
      local_210 = uVar21 >> 0x20;
      uVar18 = (ulonglong)(longlong)ROUND(dVar27 + dVar27 + -0.5) >> 1;
      iVar17 = (int)uVar18;
      uVar8 = (int)(uVar21 >> 0x20) - iVar17;
      if ((int)uVar24 <= (int)uVar8) {
        uVar8 = uVar24;
      }
      uVar21 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar21 = 0;
      }
      uVar21 = uVar21 * uVar16;
      if (0x7ffffffe < uVar21) {
        uVar21 = 0x7fffffff;
      }
      uVar16 = (ulonglong)uVar24;
      if ((int)uVar21 < (int)uVar24) {
        uVar16 = uVar21 & 0xffffffff;
      }
      uStack_1b8 = 0;
      uStack_1b6 = 0;
      uStack_1b0 = 0;
      uStack_1af = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1be = 0;
      local_1d8 = 0;
      lStack_1d0 = 0;
      local_1e8 = 0;
      lStack_1e0 = 0;
      FUN_14485c47a(&local_1e8,lVar10);
      local_228 = uVar24;
      if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar16);
      }
      if (local_1c8._4_4_ < (int)uVar16) {
        FUN_14818212c(&lStack_1d0,uVar16);
      }
      uStack_1c0 = 0xffff;
      uStack_1be = 0x7fffffff7fff;
      uStack_1b8 = 0;
      uStack_1b6 = 0x800000008000;
      uStack_1b0 = *(undefined1 *)(param_5 + 0x3a);
      uStack_1af = *(undefined1 *)(param_5 + 0x3b);
      iVar13 = *(int *)(param_3 + 0x58);
      if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar13);
      }
      if ((int)local_1d8._4_4_ < iVar13) {
        FUN_14818218c(&lStack_1e0);
        iVar13 = *(int *)(param_3 + 0x58);
      }
      if (iVar13 != 0) {
        lVar10 = *(longlong *)(param_3 + 0x50);
        lVar25 = 0;
        do {
          uVar16 = local_1d8;
          uVar3 = *(undefined8 *)(lVar10 + lVar25);
          lVar23 = (longlong)(int)local_1d8;
          uVar24 = (int)local_1d8 + 1;
          local_1d8 = CONCAT44(local_1d8._4_4_,uVar24);
          if (local_1d8._4_4_ < uVar24) {
            FUN_1481821ec(&lStack_1e0,uVar16 & 0xffffffff);
          }
          puVar14 = (undefined8 *)(lStack_1e0 + lVar23 * 8);
          *puVar14 = 0;
          FUN_14485c47a(puVar14,uVar3);
          lVar25 = lVar25 + 8;
        } while ((longlong)iVar13 * 8 != lVar25);
      }
      puVar6 = local_1f8;
      lVar10 = local_200;
      local_220 = (longlong *)(lVar11 + 0xa0);
      local_1f0 = &local_1e8;
      iVar13 = (uint)local_210;
      if ((int)local_228 < (int)uVar21) {
        lVar25 = lVar11 + 0xb0;
        local_e0 = 0x100000000;
        local_d0 = 0xffffffff;
        uStack_c8 = 0;
        lStack_d8 = lVar25;
        if (*(int *)(lVar11 + 200) == 0) {
          iVar20 = 0;
        }
        else {
          FUN_1449c0562(&local_e0);
          iVar20 = *(int *)(lVar11 + 200);
        }
        uStack_e8 = CONCAT44(uStack_c4,uStack_c8);
        local_f0 = local_d0;
        uVar3 = local_f0;
        local_100 = local_e0;
        lStack_f8 = lStack_d8;
        local_108 = local_220;
        local_f0._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
        if ((local_f0._4_4_ != iVar20) || (lStack_d8 != lVar25)) {
          iVar22 = 0;
          iVar9 = local_f0._4_4_;
          local_f0 = uVar3;
          do {
            uVar3 = local_f0;
            if (DAT_14c762878 <= iVar22 && -1 < DAT_14c762878) break;
            puVar14 = (undefined8 *)((longlong)iVar9 * 0x18 + *local_108);
            uVar3 = *puVar14;
            iVar9 = (int)uVar3;
            if ((((int)local_208 <= iVar9) && (iVar9 < (int)local_224)) &&
               ((iVar9 = (int)((ulonglong)uVar3 >> 0x20), iVar17 <= iVar9 &&
                (((iVar9 < iVar13 && (puVar14[1] != 0)) &&
                 (cVar7 = FUN_143a53d40(&local_1f0), uVar3 = local_f0, cVar7 == '\0')))))) break;
            local_f0 = CONCAT44(local_f0._4_4_,(uint)local_f0 & ~local_100._4_4_);
            FUN_1449c0562(&local_100);
            iVar22 = iVar22 + 1;
            iVar9 = local_f0._4_4_;
            uVar3 = local_f0;
          } while (local_108 != local_220 || (lStack_f8 != lVar25 || local_f0._4_4_ != iVar20));
        }
      }
      else {
        uVar3 = local_f0;
        if (iVar17 < (int)(uint)local_210) {
          local_218 = (ulonglong)(uint)((int)local_218 + (int)local_208);
          uVar24 = 0;
          do {
            uVar8 = uVar24;
            if ((int)local_208 < (int)local_224) {
              local_228 = uVar24 - (int)local_218;
              uVar21 = local_208 & 0xffffffff;
              do {
                if ((-1 < DAT_14c762878) && (uVar3 = local_f0, DAT_14c762878 <= (int)uVar24))
                goto LAB_148175cbf;
                local_108 = (longlong *)CONCAT44((int)uVar18,(int)uVar21);
                plVar12 = local_108;
                uVar8 = FUN_144a78877(uVar21,uVar18 & 0xffffffff);
                if (*(int *)(lVar11 + 0xa8) != *(int *)(lVar11 + 0xd4)) {
                  lVar25 = *(longlong *)(lVar11 + 0xe0);
                  if (*(longlong *)(lVar11 + 0xe0) == 0) {
                    lVar25 = lVar11 + 0xd8;
                  }
                  iVar17 = *(int *)(lVar25 + (ulonglong)(*(int *)(lVar11 + 0xe8) - 1U & uVar8) * 4);
                  if (iVar17 != -1) {
                    do {
                      puVar14 = (undefined8 *)(*local_220 + (longlong)iVar17 * 0x18);
                      if ((longlong *)*puVar14 == plVar12) {
                        if (((puVar14 != (undefined8 *)0x0) && (puVar14[1] != 0)) &&
                           (cVar7 = FUN_143a53d40(&local_1f0,&local_108), uVar3 = local_f0,
                           cVar7 == '\0')) goto LAB_148175cbf;
                        break;
                      }
                      iVar17 = *(int *)(puVar14 + 2);
                    } while (iVar17 != -1);
                  }
                }
                uVar24 = uVar24 + 1;
                uVar15 = (int)uVar21 + 1;
                uVar21 = (ulonglong)uVar15;
                uVar8 = local_228;
              } while (uVar15 != local_224);
            }
            uVar24 = uVar8;
            uVar8 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar8;
            uVar3 = local_f0;
          } while (uVar8 != (uint)local_210);
        }
      }
LAB_148175cbf:
      local_f0 = uVar3;
      if ((int)local_1c8 == 0) {
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 4) = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
      }
      else {
        SRWLock = (PSRWLOCK)(lVar10 + 8);
        AcquireSRWLockShared(SRWLock);
        if ((longlong)*(int *)(lVar10 + 0x18) != 0) {
          plVar12 = *(longlong **)(lVar10 + 0x10);
          lVar11 = (longlong)*(int *)(lVar10 + 0x18) << 4;
          do {
            cVar7 = FUN_148174814(*plVar12,&local_1e8);
            if (cVar7 != '\0') {
              if (plVar12 != (longlong *)0x0) {
                *puVar6 = 0x100;
                lVar10 = *plVar12;
                *(longlong *)(puVar6 + 4) = lVar10;
                lVar11 = plVar12[1];
                *(longlong *)(puVar6 + 8) = lVar11;
                if (lVar11 != 0) {
                  LOCK();
                  *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                  UNLOCK();
                  lVar10 = *(longlong *)(puVar6 + 4);
                }
                if ((lVar10 != 0) && (*(char *)((longlong)puVar6 + 1) == '\x01')) {
                  LOCK();
                  piVar1 = (int *)(lVar10 + 0x198);
                  iVar17 = *piVar1;
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                  if (iVar17 == 0) {
                    *(undefined1 *)(lVar10 + 0x19d) = 1;
                  }
                }
                ReleaseSRWLockShared(SRWLock);
                goto LAB_148175d6b;
              }
              break;
            }
            plVar12 = plVar12 + 2;
            lVar11 = lVar11 + -0x10;
          } while (lVar11 != 0);
        }
        ReleaseSRWLockShared(SRWLock);
        AcquireSRWLockExclusive(SRWLock);
        plVar12 = (longlong *)FUN_148182271(&local_1e8);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        plVar19 = plVar12 + 2;
        iVar17 = *(int *)(lVar10 + 0x18);
        *(uint *)(lVar10 + 0x18) = iVar17 + 1U;
        if (*(uint *)(lVar10 + 0x1c) < iVar17 + 1U) {
          FUN_14818204c((longlong *)(lVar10 + 0x10),iVar17);
        }
        lVar10 = *(longlong *)(lVar10 + 0x10);
        *(longlong **)(lVar10 + (longlong)iVar17 * 0x10) = plVar19;
        *(longlong **)(lVar10 + 8 + (longlong)iVar17 * 0x10) = plVar12;
        *puVar6 = 0x100;
        *(longlong **)(puVar6 + 4) = plVar19;
        *(longlong **)(puVar6 + 8) = plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          plVar19 = *(longlong **)(puVar6 + 4);
        }
        if ((plVar19 != (longlong *)0x0) && (*(char *)((longlong)puVar6 + 1) == '\x01')) {
          LOCK();
          plVar2 = plVar19 + 0x33;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + 1;
          UNLOCK();
          if ((int)lVar10 == 0) {
            *(undefined1 *)((longlong)plVar19 + 0x19d) = 1;
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar12 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        ReleaseSRWLockExclusive(SRWLock);
      }
LAB_148175d6b:
      if (lStack_1d0 != 0) {
        FUN_1400020a8();
      }
      if (lStack_1e0 != 0) {
        FUN_1400020a8();
      }
      if ((local_c0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return puVar6;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_248);
}



// FUNCTION 148175ed6 FUN_148175ed6 body=96 status=ok
// SIG undefined FUN_148175ed6(void)

undefined4 FUN_148175ed6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1414db5a0();
  if ((char)uVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x40);
      }
    }
    *(longlong *)(param_2 + 0x40) = lVar2;
    *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x48);
    FUN_148175f36(param_2 + 0x50,param_1 + 0x50);
    *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_1 + 0x60);
  }
  return uVar1;
}



// FUNCTION 148175f36 FUN_148175f36 body=79 status=ok
// SIG undefined FUN_148175f36(void)

undefined8 * FUN_148175f36(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bb1ef2(param_1,iVar1);
      FUN_147bb1f54(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148175f86 FUN_148175f86 body=114 status=ok
// SIG undefined FUN_148175f86(void)

bool FUN_148175f86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((((*(longlong *)(param_2 + 0x40) == lVar1) &&
         (*(char *)(param_2 + 0x48) == *(char *)(param_1 + 0x48))) &&
        (*(int *)(param_2 + 0x58) == *(int *)(param_1 + 0x58))) &&
       (cVar2 = FUN_1481823c8(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_1 + 0x50)),
       cVar2 != '\0')) {
      return *(char *)(param_2 + 0x60) == *(char *)(param_1 + 0x60);
    }
  }
  return false;
}



// FUNCTION 148176000 FUN_148176000 body=148 status=ok
// SIG undefined FUN_148176000(void)

undefined8 FUN_148176000(undefined8 param_1)

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
  uVar1 = FUN_145b10a5c();
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



// FUNCTION 148176096 FUN_148176096 body=147 status=ok
// SIG undefined FUN_148176096(void)

undefined8
FUN_148176096(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b10a5c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_14817612a(param_2 + 0x28,param_3 + 1,1);
      if ((*(longlong **)(param_5 + 0x18) != (longlong *)0x0) &&
         (*(longlong *)(**(longlong **)(param_5 + 0x18) + 0x10) != 0)) {
        lVar2 = FUN_1481761a7(param_2);
        lVar1 = *(longlong *)(param_2 + 0x28);
        if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar2);
        }
        *(longlong *)(lVar1 + (longlong)param_3 * 8) = lVar2;
      }
    }
  }
  return 1;
}



// FUNCTION 14817612a FUN_14817612a body=124 status=ok
// SIG undefined FUN_14817612a(void)

void FUN_14817612a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148182430(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1481824b6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481761a7 FUN_1481761a7 body=148 status=ok
// SIG undefined FUN_1481761a7(void)

undefined8 FUN_1481761a7(undefined8 param_1)

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
  uVar1 = FUN_144a79692();
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



// FUNCTION 148176240 FUN_148176240 body=294 status=ok
// SIG undefined FUN_148176240(void)

undefined8 FUN_148176240(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  uint local_4c;
  uint *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = FUN_1481753cc();
  plVar1 = (longlong *)(param_1 + 0x1b40);
  if (*(int *)(param_1 + 0x1b48) != *(int *)(param_1 + 0x1b74)) {
    lVar5 = param_1 + 0x1b78;
    if (*(longlong *)(param_1 + 0x1b80) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1b80);
    }
    uVar4 = *(uint *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1b88) - 1U & local_4c) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar4 * 0x18);
        if (*puVar2 == local_4c) {
          if (puVar2 != (uint *)0x0) goto LAB_148176341;
          break;
        }
        uVar4 = puVar2[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *puVar3 = &PTR_FUN_14adcee48;
  InitializeSRWLock((PSRWLOCK)(puVar3 + 1));
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  local_40 = &local_58;
  local_48 = &local_4c;
  local_58 = puVar3;
  FUN_148183a5c(plVar1,&local_34);
  puVar2 = (uint *)(*plVar1 + (longlong)local_34 * 0x18);
LAB_148176341:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined8 *)(puVar2 + 2);
}



// FUNCTION 1481763f2 FUN_1481763f2 body=312 status=ok
// SIG undefined FUN_1481763f2(void)

void FUN_1481763f2(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_68 [32];
  float *local_48;
  int local_40;
  float *local_38;
  int local_30;
  int *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140126e42(&local_28);
  FUN_144a76c20(&local_48,param_2);
  FUN_144a76c20(&local_38,param_2);
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 == 0) {
    plVar6 = (longlong *)FUN_145994962();
    lVar5 = plVar6[0x22];
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar5 = plVar6[0x22];
    }
  }
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar8) {
    dVar3 = *(double *)(lVar5 + 0x100);
    dVar4 = *(double *)(lVar5 + 0xf8);
    iVar7 = 0;
    do {
      piVar8 = local_28 + local_20;
      *local_28 = (*(int *)(lVar5 + 0xcc) << 0x1c) >> 0x1f;
      pfVar1 = local_48 + local_40;
      *local_48 = (float)dVar4;
      pfVar2 = local_38 + local_30;
      *local_38 = (float)dVar3;
      iVar7 = iVar7 + 1;
      piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar9 = (int *)(param_2 + 0x3c);
      }
      local_48 = pfVar1;
      local_38 = pfVar2;
      local_28 = piVar8;
    } while (iVar7 < *piVar9);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817652c FUN_14817652c body=69 status=ok
// SIG undefined FUN_14817652c(void)

undefined8 FUN_14817652c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  uVar2 = FUN_1481192e4();
  if ((char)uVar2 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x38);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x38) == lVar1);
  }
  return uVar2;
}



// FUNCTION 148176572 FUN_148176572 body=85 status=ok
// SIG undefined FUN_148176572(void)

undefined4 FUN_148176572(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1414db5a0();
  if ((char)uVar1 != '\0') {
    FUN_140ce9906(param_2);
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
    FUN_140ce9906(param_2);
  }
  return uVar1;
}



// FUNCTION 1481765cc FUN_1481765cc body=190 status=ok
// SIG undefined FUN_1481765cc(void)

void FUN_1481765cc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4) * *(int *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (uVar2 <= DAT_14c762880) {
    iVar1 = *(int *)(param_1 + 0x14) * uVar2;
    FUN_143abafa4(param_1 + 0x60);
    FUN_143abafa4(param_1 + 0x38);
    FUN_1481de234(param_1 + 0x60,param_2,L"NiagaraNeighborGrid3D::NeighborCount",0x1d,4,
                  uVar2 + (uVar2 == 0),1);
    FUN_1481de234(param_1 + 0x38,param_2,L"NiagaraNeighborGrid3D::NeighborsGrid",0x1d,4,
                  iVar1 + (uint)(iVar1 == 0),1);
  }
  return;
}



// FUNCTION 14817668a FUN_14817668a body=520 status=ok
// SIG undefined FUN_14817668a(void)

void FUN_14817668a(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148190168();
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3d8d0) {
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
    ppuVar2 = &PTR_FUN_14add5040;
  }
  else if (lVar1 == DAT_14cb3d8d8) {
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
    ppuVar2 = &PTR_FUN_14add50b0;
  }
  else {
    if (lVar1 != DAT_14cb3c318) {
      if (lVar1 == DAT_14cb3c310) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      goto LAB_148176741;
    }
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
    ppuVar2 = &PTR_FUN_14add5120;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_148176741:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148176972 FUN_148176972 body=251 status=ok
// SIG undefined FUN_148176972(void)

void FUN_148176972(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_78 [32];
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  float *local_38;
  int local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148176a6e(local_28);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  FUN_144a76c20(&local_38,param_2);
  piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar7 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      dVar4 = *(double *)(param_1 + 0x68);
      dVar5 = *(double *)(param_1 + 0x60);
      pfVar1 = local_58 + local_50;
      *local_58 = (float)*(double *)(param_1 + 0x58);
      pfVar2 = local_48 + local_40;
      *local_48 = (float)dVar5;
      pfVar3 = local_38 + local_30;
      *local_38 = (float)dVar4;
      iVar6 = iVar6 + 1;
      piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar7 = (int *)(param_2 + 0x3c);
      }
      local_58 = pfVar1;
      local_48 = pfVar2;
      local_38 = pfVar3;
    } while (iVar6 < *piVar7);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148176a6e FUN_148176a6e body=148 status=ok
// SIG undefined FUN_148176a6e(void)

void FUN_148176a6e(int *param_1,char *param_2)

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



// FUNCTION 148176b02 FUN_148176b02 body=241 status=ok
// SIG undefined FUN_148176b02(void)

void FUN_148176b02(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  undefined4 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148176a6e(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  FUN_144a76cd4(&local_40,param_1);
  FUN_144a76cd4(&local_50,param_1);
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    uVar4 = *local_18;
    uVar5 = local_18[1];
    uVar6 = local_18[2];
    iVar8 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = uVar4;
      puVar2 = local_40 + local_38;
      *local_40 = uVar5;
      puVar3 = local_50 + local_48;
      *local_50 = uVar6;
      iVar8 = iVar8 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar3;
      local_40 = puVar2;
      local_30 = puVar1;
    } while (iVar8 < *piVar7);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148176bf4 FUN_148176bf4 body=160 status=ok
// SIG undefined FUN_148176bf4(void)

void FUN_148176bf4(char *param_1)

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
  FUN_148176a6e(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x10);
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



// FUNCTION 148176c96 FUN_148176c96 body=41 status=ok
// SIG undefined FUN_148176c96(void)

undefined4 FUN_148176c96(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_14819016a();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x70) >> 8),
                     *(int *)(param_2 + 0x70) == *(int *)(param_1 + 0x70));
  }
  return uVar2;
}



// FUNCTION 148176ce2 FUN_148176ce2 body=712 status=ok
// SIG undefined FUN_148176ce2(void)

void FUN_148176ce2(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  
  lVar4 = param_2[9];
  if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
    lVar5 = *(longlong *)(param_2[2] + 0x10);
    lVar10 = lVar4 + 0x48;
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar10 = *(longlong *)(lVar4 + 0x50);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(lVar4 + 0x58) - 1U &
                              (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar10 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar9 * 0x98;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar9 * 0x98) == lVar5)
        goto LAB_148176d42;
        iVar9 = *(int *)(lVar10 + 0x90);
      } while (iVar9 != -1);
    }
  }
  lVar10 = 0;
LAB_148176d42:
  uVar8 = *param_2;
  uVar11 = *(int *)(param_2 + 10) + 0xfU & 0xfffffff0;
  FUN_148183ef2();
  puVar12 = (undefined8 *)((ulonglong)uVar11 + param_2[7]);
  *(uint *)(param_2 + 10) = DAT_14cb3cb94 + uVar11;
  if ((lVar10 == 0) || (*(longlong *)(lVar10 + 0x40) == 0)) {
    *(undefined4 *)(puVar12 + 1) = DAT_14c9a52a0;
    *puVar12 = DAT_14c9a5298;
    *(undefined4 *)(puVar12 + 3) = DAT_14c846338;
    puVar12[2] = DAT_14c846330;
    puVar12[4] = DAT_14c846330;
    *(undefined4 *)(puVar12 + 5) = DAT_14c846338;
    puVar12[6] = DAT_14c846330;
    *(undefined4 *)(puVar12 + 7) = DAT_14c846338;
    *(undefined4 *)((longlong)puVar12 + 0x3c) = 0;
    uVar7 = FUN_1481c8850(param_2[1],uVar8,0x1d);
    puVar12[8] = uVar7;
    uVar7 = FUN_1481c8850(param_2[1],uVar8,0x1d);
  }
  else {
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(lVar10 + 0x14);
    *puVar12 = *(undefined8 *)(lVar10 + 0xc);
    iVar9 = *(int *)(lVar10 + 0x10);
    iVar3 = *(int *)(lVar10 + 0x14);
    *(float *)(puVar12 + 2) = 1.0 / (float)*(int *)(lVar10 + 0xc);
    *(float *)((longlong)puVar12 + 0x14) = 1.0 / (float)iVar9;
    *(float *)(puVar12 + 3) = 1.0 / (float)iVar3;
    *(float *)(puVar12 + 4) = (float)(*(double *)(lVar10 + 0x20) / (double)*(int *)(lVar10 + 0xc));
    *(float *)((longlong)puVar12 + 0x24) =
         (float)(*(double *)(lVar10 + 0x28) / (double)*(int *)(lVar10 + 0x10));
    *(float *)(puVar12 + 5) = (float)(*(double *)(lVar10 + 0x30) / (double)*(int *)(lVar10 + 0x14));
    dVar1 = *(double *)(lVar10 + 0x30);
    dVar2 = *(double *)(lVar10 + 0x28);
    *(float *)(puVar12 + 6) = (float)*(double *)(lVar10 + 0x20);
    *(float *)((longlong)puVar12 + 0x34) = (float)dVar2;
    *(float *)(puVar12 + 7) = (float)dVar1;
    *(undefined4 *)((longlong)puVar12 + 0x3c) = *(undefined4 *)(lVar10 + 0x1c);
    cVar6 = FUN_140248614(param_2);
    if (cVar6 != '\0') {
      uVar7 = FUN_1481c8850(param_2[1],uVar8,0x1d);
      puVar12[8] = uVar7;
      uVar7 = FUN_1481c8850(param_2[1],uVar8,0x1d);
      puVar12[9] = uVar7;
      uVar7 = FUN_1481de36c(lVar10 + 0x40,uVar8);
      puVar12[10] = uVar7;
      uVar8 = FUN_1481de36c(lVar10 + 0x68,uVar8);
      goto LAB_148176f25;
    }
    uVar7 = FUN_1481de2c4(lVar10 + 0x40,uVar8);
    puVar12[8] = uVar7;
    uVar7 = FUN_1481de2c4(lVar10 + 0x68,uVar8);
  }
  puVar12[9] = uVar7;
  uVar7 = FUN_14573eae0(param_2[1],uVar8,0x1d);
  puVar12[10] = uVar7;
  uVar8 = FUN_14573eae0(param_2[1],uVar8,0x1d);
LAB_148176f25:
  puVar12[0xb] = uVar8;
  return;
}



// FUNCTION 148176faa FUN_148176faa body=207 status=ok
// SIG undefined FUN_148176faa(void)

void FUN_148176faa(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar4 = param_2[2];
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x98;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x98) == lVar4)
        goto LAB_148176ff7;
        iVar5 = *(int *)(lVar3 + 0x90);
      } while (iVar5 != -1);
    }
  }
  lVar3 = 0;
LAB_148176ff7:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  uVar1 = *param_2;
  uVar2 = FUN_1481de36c(lVar4 + 0x38,uVar1);
  FUN_1405bfba3(uVar1,uVar2,0xffffffff,2);
  uVar2 = FUN_1481de36c(lVar4 + 0x60,uVar1);
  FUN_1405bfba3(uVar1,uVar2,0,2);
  return;
}



// FUNCTION 14817707a FUN_14817707a body=154 status=ok
// SIG undefined FUN_14817707a(void)

void FUN_14817707a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x18) != '\x01') {
    return;
  }
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
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x98;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x98) == lVar1)
        goto LAB_14817708f;
        iVar2 = *(int *)(lVar3 + 0x90);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_14817708f:
  FUN_1481de412(lVar3 + 0x40);
  FUN_1481de412(lVar3 + 0x68);
  return;
}



// FUNCTION 1481771b0 FUN_1481771b0 body=34 status=ok
// SIG undefined FUN_1481771b0(void)

void FUN_1481771b0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_14819023e();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x70);
  }
  return;
}



// FUNCTION 1481771da FUN_1481771da body=78 status=ok
// SIG undefined FUN_1481771da(void)

void FUN_1481771da(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0 && (*param_1 & 1) == 0) {
      FUN_1400020a8();
    }
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14817722c FUN_14817722c body=32 status=ok
// SIG undefined FUN_14817722c(void)

bool FUN_14817722c(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140af0dde(param_1 + 0x38,param_1);
  return lVar1 == param_3;
}



// FUNCTION 14817757c FUN_14817757c body=215 status=ok
// SIG undefined FUN_14817757c(void)

void FUN_14817757c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add54f0;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148177654 FUN_148177654 body=215 status=ok
// SIG undefined FUN_148177654(void)

void FUN_148177654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5560;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817772c FUN_14817772c body=215 status=ok
// SIG undefined FUN_14817772c(void)

void FUN_14817772c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add55d0;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148177804 FUN_148177804 body=215 status=ok
// SIG undefined FUN_148177804(void)

void FUN_148177804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5640;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481778dc FUN_1481778dc body=215 status=ok
// SIG undefined FUN_1481778dc(void)

void FUN_1481778dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add56b0;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481779b4 FUN_1481779b4 body=215 status=ok
// SIG undefined FUN_1481779b4(void)

void FUN_1481779b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5720;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148177a8c FUN_148177a8c body=215 status=ok
// SIG undefined FUN_148177a8c(void)

void FUN_148177a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5790;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148177b64 FUN_148177b64 body=215 status=ok
// SIG undefined FUN_148177b64(void)

void FUN_148177b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5800;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148177c3c FUN_148177c3c body=215 status=ok
// SIG undefined FUN_148177c3c(void)

void FUN_148177c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5870;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148177d14 FUN_148177d14 body=215 status=ok
// SIG undefined FUN_148177d14(void)

void FUN_148177d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add58e0;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148177dec FUN_148177dec body=215 status=ok
// SIG undefined FUN_148177dec(void)

void FUN_148177dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5950;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148177ec4 FUN_148177ec4 body=215 status=ok
// SIG undefined FUN_148177ec4(void)

void FUN_148177ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add59c0;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148177f9c FUN_148177f9c body=215 status=ok
// SIG undefined FUN_148177f9c(void)

void FUN_148177f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5aa0;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148178074 FUN_148178074 body=215 status=ok
// SIG undefined FUN_148178074(void)

void FUN_148178074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5bf0;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817814c FUN_14817814c body=215 status=ok
// SIG undefined FUN_14817814c(void)

void FUN_14817814c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5cd0;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148178224 FUN_148178224 body=187 status=ok
// SIG undefined FUN_148178224(void)

void FUN_148178224(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1447eef60(local_28,param_1);
  FUN_140126e42(&local_38,param_1);
  if (*(longlong *)(local_20 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = -(*(byte *)(*(longlong *)(local_20 + 8) + 0xd0) & 1);
  }
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      piVar3 = local_38 + local_30;
      *local_38 = iVar1;
      iVar2 = iVar2 + 1;
      piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar4 = (int *)(param_1 + 0x3c);
      }
      local_38 = piVar3;
    } while (iVar2 < *piVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481782e0 FUN_1481782e0 body=192 status=ok
// SIG undefined FUN_1481782e0(void)

void FUN_1481782e0(char *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1447eef60(local_28,param_1);
  FUN_144a76cd4(&local_38,param_1);
  uVar3 = 0;
  if ((*(longlong *)(local_20 + 8) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(local_20 + 8) + 0x10) + 0x78), uVar3 = 0,
     lVar2 != 0)) {
    uVar3 = *(undefined4 *)(lVar2 + 0x134);
  }
  piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar5 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = uVar3;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_38 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481783a2 FUN_1481783a2 body=424 status=ok
// SIG undefined FUN_1481783a2(void)

void FUN_1481783a2(byte *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined1 auStack_a8 [32];
  int *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1447eef60(local_38,param_1);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  FUN_140126e42(&local_68,param_1);
  FUN_144a76cd4(&local_78,param_1);
  FUN_144a76cd4();
  if (*(longlong *)(local_30 + 8) == 0) {
    lVar7 = 0;
    iVar6 = 0;
    iVar8 = 0;
  }
  else {
    piVar5 = *(int **)(*(longlong *)(local_30 + 8) + 0x10);
    if ((*param_1 & 1) == 0) {
      iVar6 = piVar5[0xe];
      lVar7 = *(longlong *)(piVar5 + 0xc);
    }
    else {
      lVar10 = (longlong)piVar5[7] * 4 + *(longlong *)(piVar5 + 4);
      iVar6 = *piVar5;
      lVar7 = lVar10 + (longlong)iVar6 * -4;
      if (lVar10 == 0) {
        lVar7 = 0;
      }
    }
    iVar8 = piVar5[10];
  }
  pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if ((*param_1 & 1) != 0) {
    pbVar13 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar13) {
    iVar11 = 0;
    do {
      piVar5 = local_58 + local_48;
      iVar4 = *local_58;
      uVar9 = 0;
      uVar14 = 0;
      iVar12 = 0;
      if ((-1 < (longlong)iVar4) && (iVar4 < iVar6)) {
        uVar14 = *(undefined4 *)(lVar7 + (longlong)iVar4 * 4);
        uVar9 = 0xffffffff;
        iVar12 = iVar8;
      }
      puVar1 = local_68 + local_60;
      *local_68 = uVar9;
      puVar2 = local_78 + local_70;
      *local_78 = uVar14;
      piVar3 = local_88 + local_80;
      *local_88 = iVar12;
      iVar11 = iVar11 + 1;
      pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != 0) {
        pbVar13 = param_1 + 0x3c;
      }
      local_88 = piVar3;
      local_78 = puVar2;
      local_68 = puVar1;
      local_58 = piVar5;
    } while (iVar11 < *(int *)pbVar13);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817854c FUN_14817854c body=607 status=ok
// SIG undefined FUN_14817854c(void)

void FUN_14817854c(char *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  int *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined1 local_80 [8];
  longlong local_78;
  undefined1 local_6c [4];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1447eef60(local_80,param_1);
  local_88 = 0;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_1);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_1);
  FUN_144a76cd4(&local_c8,param_1);
  if (*(longlong *)(local_78 + 8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(local_78 + 8) + 0x10);
    lVar4 = *(longlong *)(lVar3 + 0x78);
    if (lVar4 != 0) {
      local_6c[0] = 0;
      local_68 = 0xffffffffffffffff;
      FUN_140aa925c(local_6c,*(undefined8 *)(lVar3 + 8),DAT_14cb3c4a0);
      lVar3 = *(longlong *)(lVar3 + 0x78);
      if (local_68._4_4_ == -1 || lVar3 == 0) {
        lVar5 = 0;
        iVar6 = 0;
        lVar8 = 0;
      }
      else {
        lVar8 = (ulonglong)(uint)(*(int *)(lVar3 + 300) * local_68._4_4_) +
                *(longlong *)(lVar3 + 0x28);
        lVar5 = (ulonglong)(uint)((local_68._4_4_ + 1) * *(int *)(lVar3 + 300)) +
                *(longlong *)(lVar3 + 0x28);
        iVar6 = *(int *)(lVar3 + 0x120);
      }
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar7) {
        iVar14 = 0;
        do {
          piVar7 = local_98 + local_88;
          iVar2 = *local_98;
          piVar9 = local_b8 + local_a8;
          iVar11 = -1;
          if ((-1 < (longlong)iVar2) && (iVar11 = -1, iVar2 < *(int *)(lVar4 + 0x50))) {
            iVar11 = *(int *)(*(longlong *)(lVar4 + 0x48) + (longlong)iVar2 * 4);
            lVar12 = (longlong)iVar11;
            if (-1 < lVar12) {
              iVar10 = -1;
              iVar15 = -1;
              if (iVar11 < iVar6 && (local_68._4_4_ != -1 && lVar3 != 0)) {
                iVar10 = *(int *)(lVar8 + lVar12 * 4);
                iVar15 = *(int *)(lVar5 + lVar12 * 4);
              }
              if (iVar15 != *local_b8 || iVar2 != iVar10) {
                iVar11 = -1;
              }
            }
          }
          piVar1 = local_c8 + local_c0;
          *local_c8 = iVar11;
          iVar14 = iVar14 + 1;
          piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar13 = (int *)(param_1 + 0x3c);
          }
          local_c8 = piVar1;
          local_b8 = piVar9;
          local_98 = piVar7;
        } while (iVar14 < *piVar13);
      }
      goto LAB_148178776;
    }
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      piVar7 = local_c8 + local_c0;
      *local_c8 = -1;
      iVar6 = iVar6 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = (int *)(param_1 + 0x3c);
      }
      local_c8 = piVar7;
    } while (iVar6 < *piVar9);
  }
LAB_148178776:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481787ac FUN_1481787ac body=475 status=ok
// SIG undefined FUN_1481787ac(void)

void FUN_1481787ac(char *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  int local_50;
  int *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1447eef60(local_28,param_1);
  local_48 = (int *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_140126e42(&local_58,param_1);
  FUN_144a76cd4(&local_68,param_1);
  if ((*(longlong *)(local_20 + 8) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(local_20 + 8) + 0x10) + 0x78), lVar2 == 0))
  {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        piVar3 = local_58 + local_50;
        *local_58 = 0;
        piVar6 = local_68 + local_60;
        *local_68 = -1;
        iVar4 = iVar4 + 1;
        piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar5 = (int *)(param_1 + 0x3c);
        }
        local_68 = piVar6;
        local_58 = piVar3;
      } while (iVar4 < *piVar5);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        piVar3 = local_48 + local_38;
        iVar1 = *local_48;
        if (((longlong)iVar1 < 0) || (*(int *)(lVar2 + 0x50) <= iVar1)) {
          *local_58 = 0;
          *local_68 = -1;
        }
        else {
          iVar1 = *(int *)(*(longlong *)(lVar2 + 0x48) + (longlong)iVar1 * 4);
          *local_58 = -(uint)(iVar1 != -1);
          *local_68 = iVar1;
        }
        local_58 = local_58 + local_50;
        local_68 = local_68 + local_60;
        iVar4 = iVar4 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = (int *)(param_1 + 0x3c);
        }
        local_48 = piVar3;
      } while (iVar4 < *piVar6);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148178988 FUN_148178988 body=743 status=ok
// SIG undefined FUN_148178988(void)

void FUN_148178988(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_e8 [36];
  int local_c4;
  ulonglong local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  int *local_a8;
  int local_98;
  int *local_90;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  uint local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148186bfc(local_b8);
  lVar12 = *(longlong *)(local_b0 + 8);
  if (lVar12 != 0) {
    lVar7 = *(longlong *)(lVar12 + 0x10);
    lVar8 = *(longlong *)(lVar7 + 0x78);
    if (((lVar8 != 0) && (*(longlong *)(lVar12 + 0x18) == 0)) && (0 < *(int *)(lVar8 + 0x50))) {
      iVar10 = *(int *)(lVar8 + 0x120);
      local_54[0] = 0xffffffff;
      FUN_140a6f82a(local_54,*(undefined8 *)(lVar7 + 8),param_2);
      lVar7 = *(longlong *)(lVar7 + 0x78);
      bVar19 = local_54[0] == 0xffffffff;
      if (bVar19 || lVar7 == 0) {
        local_c0 = 0;
        lVar11 = 0;
      }
      else {
        lVar11 = (ulonglong)(local_54[0] * *(int *)(lVar7 + 300)) + *(longlong *)(lVar7 + 0x28);
        local_c0 = (ulonglong)*(uint *)(lVar7 + 0x120);
      }
      lVar12 = *(longlong *)(lVar12 + 0x10);
      local_54[0] = local_54[0] & 0xffffff00;
      local_54[1] = 0xffffffff;
      local_54[2] = 0xffffffff;
      FUN_140aa925c(local_54,*(undefined8 *)(lVar12 + 8),DAT_14cb3c4a0);
      if (((local_54[2] != -1) && (lVar12 = *(longlong *)(lVar12 + 0x78), lVar12 != 0)) &&
         (!bVar19 && lVar7 != 0)) {
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar9) {
          lVar7 = *(longlong *)(lVar12 + 0x28);
          iVar4 = *(int *)(lVar12 + 300);
          local_c4 = *(int *)(lVar12 + 0x120);
          iVar15 = 0;
          do {
            piVar9 = local_90 + local_80;
            piVar3 = local_a8 + local_98;
            iVar5 = *local_a8;
            uVar16 = 0;
            uVar17 = 0;
            if ((-1 < (longlong)iVar5) && (iVar5 < *(int *)(lVar8 + 0x50))) {
              iVar6 = *(int *)(*(longlong *)(lVar8 + 0x48) + (longlong)iVar5 * 4);
              lVar12 = (longlong)iVar6;
              if ((-1 < lVar12) && (iVar6 < iVar10)) {
                iVar18 = -1;
                iVar13 = -1;
                if (iVar6 < local_c4) {
                  iVar18 = *(int *)((ulonglong)(iVar4 * local_54[2]) + lVar7 + lVar12 * 4);
                  iVar13 = *(int *)((ulonglong)((local_54[2] + 1) * iVar4) + lVar7 + lVar12 * 4);
                }
                if ((iVar18 == iVar5) && (iVar13 == *local_90)) {
                  uVar16 = 0xffffffff;
                  if (iVar6 < (int)local_c0) {
                    uVar17 = *(undefined4 *)(lVar11 + lVar12 * 4);
                  }
                  else {
                    uVar17 = 0;
                  }
                }
              }
            }
            puVar1 = local_78 + local_70;
            *local_78 = uVar16;
            puVar2 = local_68 + local_60;
            *local_68 = uVar17;
            iVar15 = iVar15 + 1;
            piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar14 = (int *)(param_1 + 0x3c);
            }
            local_a8 = piVar3;
            local_90 = piVar9;
            local_78 = puVar1;
            local_68 = puVar2;
          } while (iVar15 < *piVar14);
        }
        goto LAB_148178a57;
      }
    }
  }
  piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar9 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar10 = 0;
    do {
      puVar1 = local_78 + local_70;
      *local_78 = 0;
      puVar2 = local_68 + local_60;
      *local_68 = 0;
      iVar10 = iVar10 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = (int *)(param_1 + 0x3c);
      }
      local_78 = puVar1;
      local_68 = puVar2;
    } while (iVar10 < *piVar9);
  }
LAB_148178a57:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148178c70 FUN_148178c70 body=743 status=ok
// SIG undefined FUN_148178c70(void)

void FUN_148178c70(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_e8 [36];
  int local_c4;
  ulonglong local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  int *local_a8;
  int local_98;
  int *local_90;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  uint local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148186c66(local_b8);
  lVar12 = *(longlong *)(local_b0 + 8);
  if (lVar12 != 0) {
    lVar7 = *(longlong *)(lVar12 + 0x10);
    lVar8 = *(longlong *)(lVar7 + 0x78);
    if (((lVar8 != 0) && (*(longlong *)(lVar12 + 0x18) == 0)) && (0 < *(int *)(lVar8 + 0x50))) {
      iVar10 = *(int *)(lVar8 + 0x120);
      local_54[0] = 0xffffffff;
      FUN_140a6faac(local_54,*(undefined8 *)(lVar7 + 8),param_2);
      lVar7 = *(longlong *)(lVar7 + 0x78);
      bVar19 = local_54[0] == 0xffffffff;
      if (bVar19 || lVar7 == 0) {
        local_c0 = 0;
        lVar11 = 0;
      }
      else {
        lVar11 = (ulonglong)(local_54[0] * *(int *)(lVar7 + 300)) + *(longlong *)(lVar7 + 0x28);
        local_c0 = (ulonglong)*(uint *)(lVar7 + 0x120);
      }
      lVar12 = *(longlong *)(lVar12 + 0x10);
      local_54[0] = local_54[0] & 0xffffff00;
      local_54[1] = 0xffffffff;
      local_54[2] = 0xffffffff;
      FUN_140aa925c(local_54,*(undefined8 *)(lVar12 + 8),DAT_14cb3c4a0);
      if (((local_54[2] != -1) && (lVar12 = *(longlong *)(lVar12 + 0x78), lVar12 != 0)) &&
         (!bVar19 && lVar7 != 0)) {
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar9) {
          lVar7 = *(longlong *)(lVar12 + 0x28);
          iVar4 = *(int *)(lVar12 + 300);
          local_c4 = *(int *)(lVar12 + 0x120);
          iVar15 = 0;
          do {
            piVar9 = local_90 + local_80;
            piVar3 = local_a8 + local_98;
            iVar5 = *local_a8;
            uVar16 = 0;
            uVar17 = 0;
            if ((-1 < (longlong)iVar5) && (iVar5 < *(int *)(lVar8 + 0x50))) {
              iVar6 = *(int *)(*(longlong *)(lVar8 + 0x48) + (longlong)iVar5 * 4);
              lVar12 = (longlong)iVar6;
              if ((-1 < lVar12) && (iVar6 < iVar10)) {
                iVar18 = -1;
                iVar13 = -1;
                if (iVar6 < local_c4) {
                  iVar18 = *(int *)((ulonglong)(iVar4 * local_54[2]) + lVar7 + lVar12 * 4);
                  iVar13 = *(int *)((ulonglong)((local_54[2] + 1) * iVar4) + lVar7 + lVar12 * 4);
                }
                if ((iVar18 == iVar5) && (iVar13 == *local_90)) {
                  uVar17 = 0xffffffff;
                  if (iVar6 < (int)local_c0) {
                    uVar16 = *(undefined4 *)(lVar11 + lVar12 * 4);
                  }
                  else {
                    uVar16 = 0;
                  }
                }
              }
            }
            puVar1 = local_78 + local_70;
            *local_78 = uVar17;
            puVar2 = local_68 + local_60;
            *local_68 = uVar16;
            iVar15 = iVar15 + 1;
            piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar14 = (int *)(param_1 + 0x3c);
            }
            local_a8 = piVar3;
            local_90 = piVar9;
            local_78 = puVar1;
            local_68 = puVar2;
          } while (iVar15 < *piVar14);
        }
        goto LAB_148178d3f;
      }
    }
  }
  piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar9 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar10 = 0;
    do {
      puVar1 = local_78 + local_70;
      *local_78 = 0;
      puVar2 = local_68 + local_60;
      *local_68 = 0;
      iVar10 = iVar10 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = (int *)(param_1 + 0x3c);
      }
      local_78 = puVar1;
      local_68 = puVar2;
    } while (iVar10 < *piVar9);
  }
LAB_148178d3f:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148178f58 FUN_148178f58 body=899 status=ok
// SIG undefined FUN_148178f58(void)

void FUN_148178f58(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_f8 [44];
  int local_cc;
  ulonglong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  int *local_a8;
  int local_98;
  int *local_90;
  int local_80;
  undefined4 *local_78;
  int local_70;
  uint *local_68;
  int local_60;
  byte local_54 [4];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_148186cd0(local_b8);
  lVar20 = *(longlong *)(local_b0 + 8);
  if (lVar20 != 0) {
    lVar8 = *(longlong *)(lVar20 + 0x10);
    lVar9 = *(longlong *)(lVar8 + 0x78);
    if (((lVar9 != 0) && (*(longlong *)(lVar20 + 0x18) == 0)) && (0 < *(int *)(lVar9 + 0x50))) {
      iVar12 = *(int *)(lVar9 + 0x120);
      local_54[0] = 1;
      local_50 = CONCAT44(local_50._4_4_,0xffffffff);
      FUN_140aa8fc4(local_54,*(undefined8 *)(lVar8 + 8),param_2);
      bVar10 = local_54[0];
      lVar8 = *(longlong *)(lVar8 + 0x78);
      bVar22 = (int)local_50 == -1;
      if (bVar22 || lVar8 == 0) {
        local_c8 = 0;
        lVar21 = 0;
      }
      else {
        lVar21 = (ulonglong)
                 (uint)((int)local_50 * *(int *)(lVar8 + 0x128 + (ulonglong)(local_54[0] ^ 1) * 8))
                 + *(longlong *)(lVar8 + 0x18 + (ulonglong)(local_54[0] ^ 1) * 0x20);
        local_c8 = (ulonglong)*(uint *)(lVar8 + 0x120);
      }
      lVar20 = *(longlong *)(lVar20 + 0x10);
      local_54[0] = 0;
      local_50 = 0xffffffffffffffff;
      FUN_140aa925c(local_54,*(undefined8 *)(lVar20 + 8),DAT_14cb3c4a0);
      if (((local_50._4_4_ != -1) && (lVar20 = *(longlong *)(lVar20 + 0x78), lVar20 != 0)) &&
         (!bVar22 && lVar8 != 0)) {
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar11) {
          lVar8 = *(longlong *)(lVar20 + 0x28);
          iVar5 = *(int *)(lVar20 + 300);
          local_c0 = (ulonglong)(uint)(iVar5 * local_50._4_4_) + lVar8;
          local_cc = *(int *)(lVar20 + 0x120);
          iVar18 = 0;
          do {
            piVar11 = local_90 + local_80;
            piVar3 = local_a8 + local_98;
            iVar6 = *local_a8;
            uVar19 = 0;
            uVar15 = 0;
            if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar9 + 0x50))) {
              iVar7 = *(int *)(*(longlong *)(lVar9 + 0x48) + (longlong)iVar6 * 4);
              lVar20 = (longlong)iVar7;
              if ((-1 < lVar20) && (iVar7 < iVar12)) {
                iVar13 = -1;
                iVar17 = -1;
                if (iVar7 < local_cc) {
                  iVar13 = *(int *)(local_c0 + lVar20 * 4);
                  iVar17 = *(int *)((ulonglong)(uint)((local_50._4_4_ + 1) * iVar5) + lVar8 +
                                   lVar20 * 4);
                }
                if ((iVar13 == iVar6) && (iVar17 == *local_90)) {
                  uVar19 = 0xffffffff;
                  if (iVar7 < (int)local_c8) {
                    if (bVar10 == 0) {
                      uVar4 = *(ushort *)(lVar21 + lVar20 * 2);
                      uVar15 = (uint)uVar4 << 0xd;
                      if ((uVar15 & 0xf800000) == 0xf800000) {
                        fVar16 = (float)(uVar15 | 0x70000000);
                      }
                      else if ((uVar15 & 0xf800000) == 0) {
                        fVar16 = (float)(uVar15 | 0x38800000) + -6.1035156e-05;
                      }
                      else {
                        fVar16 = (float)((uVar15 & 0xfffe000) + 0x38000000);
                      }
                      uVar15 = (int)(short)uVar4 & 0x80000000U | (uint)fVar16;
                    }
                    else {
                      uVar15 = *(uint *)(lVar21 + lVar20 * 4);
                    }
                  }
                  else {
                    uVar15 = 0;
                  }
                }
              }
            }
            puVar1 = local_78 + local_70;
            *local_78 = uVar19;
            puVar2 = local_68 + local_60;
            *local_68 = uVar15;
            iVar18 = iVar18 + 1;
            piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar14 = (int *)(param_1 + 0x3c);
            }
            local_a8 = piVar3;
            local_90 = piVar11;
            local_78 = puVar1;
            local_68 = puVar2;
          } while (iVar18 < *piVar14);
        }
        goto LAB_14817902f;
      }
    }
  }
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    iVar12 = 0;
    do {
      puVar1 = local_78 + local_70;
      *local_78 = 0;
      puVar2 = local_68 + local_60;
      *local_68 = 0;
      iVar12 = iVar12 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_78 = puVar1;
      local_68 = puVar2;
    } while (iVar12 < *piVar11);
  }
LAB_14817902f:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481792dc FUN_1481792dc body=1271 status=ok
// SIG undefined FUN_1481792dc(void)

void FUN_1481792dc(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  uint *puVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_138 [43];
  byte local_10d;
  int local_10c;
  int local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined1 local_e0 [8];
  longlong local_d8;
  int *local_d0;
  int local_c0;
  int *local_b8;
  int local_a8;
  undefined4 *local_a0;
  int local_98;
  uint *local_90;
  int local_88;
  uint *local_80;
  int local_78;
  uint local_6c;
  undefined8 local_68;
  bool local_60;
  byte local_5f;
  int local_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  uVar15 = DAT_14c84635c._4_4_;
  uVar10 = (uint)DAT_14c84635c;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_100 = DAT_14c84635c._4_4_;
  uVar9 = CONCAT44(DAT_14c84635c._4_4_,(uint)DAT_14c84635c);
  FUN_148186d3a(local_e0);
  lVar19 = *(longlong *)(local_d8 + 8);
  uStack_58 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
  uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
  if (lVar19 != 0) {
    lVar12 = *(longlong *)(lVar19 + 0x10);
    lVar8 = *(longlong *)(lVar12 + 0x78);
    uStack_58 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
    uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
    if (((lVar8 != 0) &&
        (uStack_58 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58),
        uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50),
        *(longlong *)(lVar19 + 0x18) == 0)) &&
       (uStack_58 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58),
       uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50), 0 < *(int *)(lVar8 + 0x50))) {
      local_104 = *(int *)(lVar8 + 0x120);
      local_6c._0_1_ = 1;
      local_68 = CONCAT44(local_68._4_4_,0xffffffff);
      FUN_140da315a(&local_6c,*(undefined8 *)(lVar12 + 8),param_2);
      lVar12 = *(longlong *)(lVar12 + 0x78);
      local_5f = (byte)local_6c;
      bVar23 = lVar12 == 0;
      bVar24 = (int)local_68 == -1;
      local_5c = 0;
      local_10d = (byte)local_6c;
      if (bVar24 || bVar23) {
        lVar18 = 0;
        local_f8 = 0;
      }
      else {
        iVar14 = *(int *)(lVar12 + 0x128 + (ulonglong)((byte)local_6c ^ 1) * 8);
        lVar18 = *(longlong *)(lVar12 + 0x18 + (ulonglong)((byte)local_6c ^ 1) * 0x20);
        local_f8 = (ulonglong)(uint)(iVar14 * (int)local_68) + lVar18;
        lVar18 = (ulonglong)(uint)(((int)local_68 + 1) * iVar14) + lVar18;
        local_5c = *(int *)(lVar12 + 0x120);
      }
      local_60 = !bVar24 && !bVar23;
      lVar19 = *(longlong *)(lVar19 + 0x10);
      local_6c = (uint)local_6c._1_3_ << 8;
      local_68 = 0xffffffffffffffff;
      local_10c = local_5c;
      uStack_58 = local_f8;
      uStack_50 = lVar18;
      FUN_140aa925c(&local_6c,*(undefined8 *)(lVar19 + 8),DAT_14cb3c4a0);
      if (((local_68._4_4_ != -1) && (lVar19 = *(longlong *)(lVar19 + 0x78), lVar19 != 0)) &&
         (!bVar24 && !bVar23)) {
        piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar13 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar13) {
          local_f0 = (ulonglong)(uint)(*(int *)(lVar19 + 300) * local_68._4_4_) +
                     *(longlong *)(lVar19 + 0x28);
          local_e8 = (ulonglong)(uint)((local_68._4_4_ + 1) * *(int *)(lVar19 + 300)) +
                     *(longlong *)(lVar19 + 0x28);
          local_108 = *(int *)(lVar19 + 0x120);
          iVar14 = 0;
          do {
            piVar13 = local_b8 + local_a8;
            iVar5 = *local_b8;
            piVar3 = local_d0 + local_c0;
            iVar6 = *local_d0;
            uVar20 = 0;
            uVar17 = uVar9;
            local_d0 = piVar3;
            local_b8 = piVar13;
            if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar8 + 0x50))) {
              iVar7 = *(int *)(*(longlong *)(lVar8 + 0x48) + (longlong)iVar6 * 4);
              lVar19 = (longlong)iVar7;
              if ((-1 < lVar19) && (iVar7 < local_104)) {
                iVar11 = -1;
                iVar22 = -1;
                if (iVar7 < local_108) {
                  iVar11 = *(int *)(local_f0 + lVar19 * 4);
                  iVar22 = *(int *)(local_e8 + lVar19 * 4);
                }
                if ((iVar11 == iVar6) && (iVar22 == iVar5)) {
                  uVar17 = (ulonglong)local_100;
                  uVar15 = uVar10;
                  if (iVar7 < local_10c) {
                    if (local_10d == 0) {
                      lVar12 = 0;
                      puVar21 = &local_6c;
                      bVar23 = true;
                      do {
                        bVar24 = bVar23;
                        uVar4 = *(ushort *)((&uStack_58)[lVar12] + lVar19 * 2);
                        uVar15 = (uint)uVar4 << 0xd;
                        if ((uVar15 & 0xf800000) == 0xf800000) {
                          fVar16 = (float)(uVar15 | 0x70000000);
                        }
                        else if ((uVar15 & 0xf800000) == 0) {
                          fVar16 = (float)(uVar15 | 0x38800000) + -6.1035156e-05;
                        }
                        else {
                          fVar16 = (float)((uVar15 & 0xfffe000) + 0x38000000);
                        }
                        *puVar21 = (int)(short)uVar4 & 0x80000000U | (uint)fVar16;
                        lVar12 = 1;
                        puVar21 = &local_fc;
                        bVar23 = false;
                      } while (bVar24);
                      uVar17 = (ulonglong)local_fc;
                      uVar15 = local_6c;
                    }
                    else {
                      local_6c = *(uint *)(local_f8 + lVar19 * 4);
                      uVar17 = (ulonglong)*(uint *)(lVar18 + lVar19 * 4);
                      uVar15 = local_6c;
                    }
                  }
                  uVar17 = (ulonglong)uVar15 | uVar17 << 0x20;
                  uVar20 = 0xffffffff;
                }
              }
            }
            puVar1 = local_a0 + local_98;
            *local_a0 = uVar20;
            puVar21 = local_90 + local_88;
            *local_90 = (uint)uVar17;
            puVar2 = local_80 + local_78;
            *local_80 = (uint)(uVar17 >> 0x20);
            iVar14 = iVar14 + 1;
            piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar13 = (int *)(param_1 + 0x3c);
            }
            local_a0 = puVar1;
            local_90 = puVar21;
            local_80 = puVar2;
          } while (iVar14 < *piVar13);
        }
        goto LAB_1481793f5;
      }
    }
  }
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar14 = 0;
    do {
      puVar1 = local_a0 + local_98;
      *local_a0 = 0;
      puVar21 = local_90 + local_88;
      *local_90 = uVar10;
      puVar2 = local_80 + local_78;
      *local_80 = uVar15;
      iVar14 = iVar14 + 1;
      piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar13 = (int *)(param_1 + 0x3c);
      }
      local_a0 = puVar1;
      local_90 = puVar21;
      local_80 = puVar2;
    } while (iVar14 < *piVar13);
  }
LAB_1481793f5:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481797d4 FUN_1481797d4 body=1227 status=ok
// SIG undefined FUN_1481797d4(void)

void FUN_1481797d4(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int *piVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_158 [40];
  undefined1 local_130 [8];
  longlong local_128;
  int *local_120;
  int local_110;
  int *local_108;
  int local_f8;
  undefined4 *local_f0;
  int local_e8;
  uint *local_e0;
  int local_d8;
  undefined4 *local_d0;
  int local_c8;
  undefined4 *local_c0;
  int local_b8;
  uint local_ac;
  undefined8 local_a8;
  char local_a0;
  char local_9f;
  int local_9c;
  longlong alStack_98 [11];
  
  uVar15 = DAT_14c846338;
  uVar14 = DAT_14c846330._4_4_;
  uVar13 = (uint)DAT_14c846330;
  alStack_98[3] = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_148186db0(local_130,param_1);
  lVar24 = *(longlong *)(local_128 + 8);
  if (lVar24 != 0) {
    lVar11 = *(longlong *)(lVar24 + 0x10);
    lVar12 = *(longlong *)(lVar11 + 0x78);
    if (((lVar12 != 0) && (*(longlong *)(lVar24 + 0x18) == 0)) && (0 < *(int *)(lVar12 + 0x50))) {
      iVar17 = *(int *)(lVar12 + 0x120);
      local_ac._0_1_ = 1;
      local_a8 = CONCAT44(local_a8._4_4_,0xffffffff);
      FUN_140aa948e(&local_ac,*(undefined8 *)(lVar11 + 8),param_2);
      FUN_14060d608(&local_a0,*(undefined8 *)(lVar11 + 0x78),(undefined1)local_ac,
                    local_a8 & 0xffffffff);
      lVar24 = *(longlong *)(lVar24 + 0x10);
      local_ac = (uint)local_ac._1_3_ << 8;
      local_a8 = 0xffffffffffffffff;
      FUN_140aa925c(&local_ac,*(undefined8 *)(lVar24 + 8),DAT_14cb3c4a0);
      if (((local_a8._4_4_ != -1) && (lVar24 = *(longlong *)(lVar24 + 0x78), lVar24 != 0)) &&
         (local_a0 == '\x01')) {
        piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar18 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar18) {
          lVar11 = *(longlong *)(lVar24 + 0x28);
          iVar7 = *(int *)(lVar24 + 300);
          uVar19 = iVar7 * local_a8._4_4_;
          iVar16 = local_a8._4_4_ + 1;
          iVar8 = *(int *)(lVar24 + 0x120);
          iVar23 = 0;
          do {
            piVar18 = local_108 + local_f8;
            piVar5 = local_120 + local_110;
            iVar9 = *local_120;
            uVar28 = 0;
            uVar29 = uVar14;
            uVar30 = uVar15;
            uVar20 = uVar13;
            if ((-1 < (longlong)iVar9) && (iVar9 < *(int *)(lVar12 + 0x50))) {
              iVar10 = *(int *)(*(longlong *)(lVar12 + 0x48) + (longlong)iVar9 * 4);
              lVar24 = (longlong)iVar10;
              if ((-1 < lVar24) && (iVar10 < iVar17)) {
                iVar27 = -1;
                iVar26 = -1;
                if (iVar10 < iVar8) {
                  iVar27 = *(int *)((ulonglong)uVar19 + lVar11 + lVar24 * 4);
                  iVar26 = *(int *)((ulonglong)(uint)(iVar16 * iVar7) + lVar11 + lVar24 * 4);
                }
                if ((iVar27 == iVar9) && (iVar26 == *local_108)) {
                  if (iVar10 < local_9c) {
                    if (local_9f == '\0') {
                      lVar22 = 0;
                      do {
                        uVar6 = *(ushort *)(alStack_98[lVar22] + lVar24 * 2);
                        uVar20 = (uint)uVar6 << 0xd;
                        if ((uVar20 & 0xf800000) == 0xf800000) {
                          fVar21 = (float)(uVar20 | 0x70000000);
                        }
                        else if ((uVar20 & 0xf800000) == 0) {
                          fVar21 = (float)(uVar20 | 0x38800000) + -6.1035156e-05;
                        }
                        else {
                          fVar21 = (float)((uVar20 & 0xfffe000) + 0x38000000);
                        }
                        (&local_ac)[lVar22] = (int)(short)uVar6 & 0x80000000U | (uint)fVar21;
                        lVar22 = lVar22 + 1;
                      } while (lVar22 != 3);
                    }
                    else {
                      lVar22 = 0;
                      do {
                        (&local_ac)[lVar22] = *(uint *)(alStack_98[lVar22] + lVar24 * 4);
                        lVar22 = lVar22 + 1;
                      } while (lVar22 != 3);
                    }
                  }
                  else {
                    local_ac = uVar13;
                    local_a8 = CONCAT44(uVar15,uVar14);
                  }
                  uVar28 = 0xffffffff;
                  uVar29 = (undefined4)local_a8;
                  uVar30 = local_a8._4_4_;
                  uVar20 = local_ac;
                }
              }
            }
            puVar1 = local_f0 + local_e8;
            *local_f0 = uVar28;
            puVar2 = local_e0 + local_d8;
            *local_e0 = uVar20;
            puVar3 = local_d0 + local_c8;
            *local_d0 = uVar29;
            puVar4 = local_c0 + local_b8;
            *local_c0 = uVar30;
            iVar23 = iVar23 + 1;
            piVar25 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar25 = (int *)(param_1 + 0x3c);
            }
            local_120 = piVar5;
            local_108 = piVar18;
            local_f0 = puVar1;
            local_e0 = puVar2;
            local_d0 = puVar3;
            local_c0 = puVar4;
          } while (iVar23 < *piVar25);
        }
        goto LAB_148179918;
      }
    }
  }
  piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar18 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar18) {
    iVar17 = 0;
    do {
      puVar1 = local_f0 + local_e8;
      *local_f0 = 0;
      puVar2 = local_e0 + local_d8;
      *local_e0 = uVar13;
      puVar3 = local_d0 + local_c8;
      *local_d0 = uVar14;
      puVar4 = local_c0 + local_b8;
      *local_c0 = uVar15;
      iVar17 = iVar17 + 1;
      piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar18 = (int *)(param_1 + 0x3c);
      }
      local_f0 = puVar1;
      local_e0 = puVar2;
      local_d0 = puVar3;
      local_c0 = puVar4;
    } while (iVar17 < *piVar18);
  }
LAB_148179918:
  if ((alStack_98[3] ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148179ca0 FUN_148179ca0 body=1175 status=ok
// SIG undefined FUN_148179ca0(void)

void FUN_148179ca0(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  float fVar19;
  longlong lVar20;
  int *piVar21;
  int iVar22;
  longlong lVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStack_138 [32];
  uint local_118 [4];
  undefined1 local_108 [8];
  longlong local_100;
  int *local_f8;
  int local_e8;
  int *local_e0;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  uint *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  int *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  char local_78;
  char local_77;
  int local_74;
  longlong alStack_70 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_148186e32(local_108);
  lVar23 = *(longlong *)(local_100 + 8);
  if (lVar23 != 0) {
    lVar11 = *(longlong *)(lVar23 + 0x10);
    lVar12 = *(longlong *)(lVar11 + 0x78);
    if (((lVar12 != 0) && (*(longlong *)(lVar23 + 0x18) == 0)) && (0 < *(int *)(lVar12 + 0x50))) {
      iVar15 = *(int *)(lVar12 + 0x120);
      local_118[0]._0_1_ = 1;
      local_118[1] = 0xffffffff;
      FUN_140aa910c(local_118,*(undefined8 *)(lVar11 + 8),param_2);
      FUN_14808a844(&local_78,*(undefined8 *)(lVar11 + 0x78),(undefined1)local_118[0],local_118[1]);
      lVar23 = *(longlong *)(lVar23 + 0x10);
      local_118[0] = (uint)local_118[0]._1_3_ << 8;
      local_118[1] = 0xffffffff;
      local_118[2] = -1;
      FUN_140aa925c(local_118,*(undefined8 *)(lVar23 + 8),DAT_14cb3c4a0);
      if (((local_118[2] != -1) && (lVar23 = *(longlong *)(lVar23 + 0x78), lVar23 != 0)) &&
         (local_78 == '\x01')) {
        piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar14 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar14) {
          lVar11 = *(longlong *)(lVar23 + 0x28);
          iVar7 = *(int *)(lVar23 + 300);
          uVar16 = iVar7 * local_118[2];
          iVar13 = local_118[2] + 1;
          iVar8 = *(int *)(lVar23 + 0x120);
          iVar22 = 0;
          do {
            piVar14 = local_e0 + local_d0;
            piVar21 = local_f8 + local_e8;
            iVar9 = *local_f8;
            uVar18 = 0;
            if (((longlong)iVar9 < 0) || (*(int *)(lVar12 + 0x50) <= iVar9)) {
LAB_148179fde:
              uVar27 = 0;
              uVar28 = 0;
              uVar29 = 0;
              uVar17 = 0;
            }
            else {
              iVar10 = *(int *)(*(longlong *)(lVar12 + 0x48) + (longlong)iVar9 * 4);
              lVar23 = (longlong)iVar10;
              if ((lVar23 < 0) || (iVar15 <= iVar10)) goto LAB_148179fde;
              iVar25 = -1;
              iVar26 = -1;
              if (iVar10 < iVar8) {
                iVar25 = *(int *)((ulonglong)uVar16 + lVar11 + lVar23 * 4);
                iVar26 = *(int *)((ulonglong)(uint)(iVar13 * iVar7) + lVar11 + lVar23 * 4);
              }
              if (iVar25 != iVar9) goto LAB_148179fde;
              uVar17 = 0;
              uVar27 = 0;
              uVar28 = 0;
              uVar29 = 0;
              if (iVar26 == *local_e0) {
                if (iVar10 < local_74) {
                  local_118[0] = 0;
                  local_118[1] = 0;
                  local_118[2] = 0;
                  local_118[3] = 0x3f800000;
                  if (local_77 == '\0') {
                    lVar20 = 0;
                    do {
                      uVar6 = *(ushort *)(alStack_70[lVar20] + lVar23 * 2);
                      uVar18 = (uint)uVar6 << 0xd;
                      if ((uVar18 & 0xf800000) == 0xf800000) {
                        fVar19 = (float)(uVar18 | 0x70000000);
                      }
                      else if ((uVar18 & 0xf800000) == 0) {
                        fVar19 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
                      }
                      else {
                        fVar19 = (float)((uVar18 & 0xfffe000) + 0x38000000);
                      }
                      local_118[lVar20] = (int)(short)uVar6 & 0x80000000U | (uint)fVar19;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 4);
                  }
                  else {
                    lVar20 = 0;
                    do {
                      local_118[lVar20] = *(uint *)(alStack_70[lVar20] + lVar23 * 4);
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 4);
                  }
                }
                else {
                  local_118[0] = 0;
                  local_118[1] = 0;
                  local_118[2] = 0;
                  local_118[3] = 0;
                }
                uVar17 = 0xffffffff;
                uVar27 = local_118[1];
                uVar28 = local_118[2];
                uVar29 = local_118[3];
                uVar18 = local_118[0];
              }
            }
            puVar1 = local_c8 + local_c0;
            *local_c8 = uVar17;
            puVar2 = local_b8 + local_b0;
            *local_b8 = uVar18;
            puVar3 = local_a8 + local_a0;
            *local_a8 = uVar27;
            piVar5 = local_98 + local_90;
            *local_98 = uVar28;
            puVar4 = local_88 + local_80;
            *local_88 = uVar29;
            iVar22 = iVar22 + 1;
            piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar24 = (int *)(param_1 + 0x3c);
            }
            local_f8 = piVar21;
            local_e0 = piVar14;
            local_c8 = puVar1;
            local_b8 = puVar2;
            local_a8 = puVar3;
            local_98 = piVar5;
            local_88 = puVar4;
          } while (iVar22 < *piVar24);
        }
        goto LAB_148179de0;
      }
    }
  }
  piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar14 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar15 = 0;
    do {
      puVar1 = local_c8 + local_c0;
      *local_c8 = 0;
      puVar2 = local_b8 + local_b0;
      *local_b8 = 0;
      puVar3 = local_a8 + local_a0;
      *local_a8 = 0;
      piVar14 = local_98 + local_90;
      *local_98 = 0;
      puVar4 = local_88 + local_80;
      *local_88 = 0;
      iVar15 = iVar15 + 1;
      piVar21 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar21 = (int *)(param_1 + 0x3c);
      }
      local_c8 = puVar1;
      local_b8 = puVar2;
      local_a8 = puVar3;
      local_98 = piVar14;
      local_88 = puVar4;
    } while (iVar15 < *piVar21);
  }
LAB_148179de0:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817a138 FUN_14817a138 body=1228 status=ok
// SIG undefined FUN_14817a138(void)

void FUN_14817a138(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  longlong lVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStack_148 [32];
  uint local_128 [4];
  undefined1 local_118 [8];
  longlong local_110;
  int *local_108;
  int local_f8;
  int *local_f0;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  uint *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  int *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  char local_88;
  char local_87;
  int local_84;
  longlong alStack_80 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_148186ec4(local_118,param_1);
  lVar22 = *(longlong *)(local_110 + 8);
  if (lVar22 != 0) {
    lVar11 = *(longlong *)(lVar22 + 0x10);
    lVar12 = *(longlong *)(lVar11 + 0x78);
    if (((lVar12 != 0) && (*(longlong *)(lVar22 + 0x18) == 0)) && (0 < *(int *)(lVar12 + 0x50))) {
      iVar14 = *(int *)(lVar12 + 0x120);
      local_128[0]._0_1_ = 1;
      local_128[1] = 0xffffffff;
      FUN_140a6fb6a(local_128,*(undefined8 *)(lVar11 + 8),param_2);
      FUN_144a47c00(&local_88,*(undefined8 *)(lVar11 + 0x78),(undefined1)local_128[0],local_128[1]);
      lVar22 = *(longlong *)(lVar22 + 0x10);
      local_128[0] = (uint)local_128[0]._1_3_ << 8;
      local_128[1] = 0xffffffff;
      local_128[2] = -1;
      FUN_140aa925c(local_128,*(undefined8 *)(lVar22 + 8),DAT_14cb3c4a0);
      if (((local_128[2] != -1) && (lVar22 = *(longlong *)(lVar22 + 0x78), lVar22 != 0)) &&
         (local_88 == '\x01')) {
        piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar15 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar15) {
          lVar11 = *(longlong *)(lVar22 + 0x28);
          iVar7 = *(int *)(lVar22 + 300);
          uVar16 = iVar7 * local_128[2];
          iVar13 = local_128[2] + 1;
          iVar8 = *(int *)(lVar22 + 0x120);
          iVar21 = 0;
          do {
            piVar15 = local_f0 + local_e0;
            piVar20 = local_108 + local_f8;
            iVar9 = *local_108;
            uVar26 = 0;
            uVar17 = 0x3f800000;
            uVar28 = 0x3f800000;
            uVar29 = 0x3f800000;
            uVar27 = 0x3f800000;
            if (-1 < (longlong)iVar9) {
              uVar17 = 0x3f800000;
              uVar28 = 0x3f800000;
              uVar29 = 0x3f800000;
              uVar27 = 0x3f800000;
              if (iVar9 < *(int *)(lVar12 + 0x50)) {
                iVar10 = *(int *)(*(longlong *)(lVar12 + 0x48) + (longlong)iVar9 * 4);
                lVar22 = (longlong)iVar10;
                uVar17 = 0x3f800000;
                uVar28 = 0x3f800000;
                uVar29 = 0x3f800000;
                uVar27 = 0x3f800000;
                if (-1 < lVar22) {
                  uVar17 = 0x3f800000;
                  uVar28 = 0x3f800000;
                  uVar29 = 0x3f800000;
                  uVar27 = 0x3f800000;
                  if (iVar10 < iVar14) {
                    iVar25 = -1;
                    iVar24 = -1;
                    if (iVar10 < iVar8) {
                      iVar25 = *(int *)((ulonglong)uVar16 + lVar11 + lVar22 * 4);
                      iVar24 = *(int *)((ulonglong)(uint)(iVar13 * iVar7) + lVar11 + lVar22 * 4);
                    }
                    uVar17 = 0x3f800000;
                    uVar28 = 0x3f800000;
                    uVar29 = 0x3f800000;
                    uVar27 = 0x3f800000;
                    if (iVar25 == iVar9) {
                      uVar17 = 0x3f800000;
                      uVar28 = 0x3f800000;
                      uVar29 = 0x3f800000;
                      uVar27 = 0x3f800000;
                      if (iVar24 == *local_f0) {
                        if (iVar10 < local_84) {
                          if (local_87 == '\0') {
                            lVar19 = 0;
                            do {
                              uVar6 = *(ushort *)(alStack_80[lVar19] + lVar22 * 2);
                              uVar17 = (uint)uVar6 << 0xd;
                              if ((uVar17 & 0xf800000) == 0xf800000) {
                                fVar18 = (float)(uVar17 | 0x70000000);
                              }
                              else if ((uVar17 & 0xf800000) == 0) {
                                fVar18 = (float)(uVar17 | 0x38800000) + -6.1035156e-05;
                              }
                              else {
                                fVar18 = (float)((uVar17 & 0xfffe000) + 0x38000000);
                              }
                              local_128[lVar19] = (int)(short)uVar6 & 0x80000000U | (uint)fVar18;
                              lVar19 = lVar19 + 1;
                            } while (lVar19 != 4);
                          }
                          else {
                            lVar19 = 0;
                            do {
                              local_128[lVar19] = *(uint *)(alStack_80[lVar19] + lVar22 * 4);
                              lVar19 = lVar19 + 1;
                            } while (lVar19 != 4);
                          }
                        }
                        else {
                          local_128[0] = 0x3f800000;
                          local_128[1] = 0x3f800000;
                          local_128[2] = 0x3f800000;
                          local_128[3] = 0x3f800000;
                        }
                        uVar26 = 0xffffffff;
                        uVar17 = local_128[1];
                        uVar28 = local_128[2];
                        uVar29 = local_128[3];
                        uVar27 = local_128[0];
                      }
                    }
                  }
                }
              }
            }
            puVar1 = local_d8 + local_d0;
            *local_d8 = uVar26;
            puVar2 = local_c8 + local_c0;
            *local_c8 = uVar27;
            puVar3 = local_b8 + local_b0;
            *local_b8 = uVar17;
            piVar5 = local_a8 + local_a0;
            *local_a8 = uVar28;
            puVar4 = local_98 + local_90;
            *local_98 = uVar29;
            iVar21 = iVar21 + 1;
            piVar23 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar23 = (int *)(param_1 + 0x3c);
            }
            local_108 = piVar20;
            local_f0 = piVar15;
            local_d8 = puVar1;
            local_c8 = puVar2;
            local_b8 = puVar3;
            local_a8 = piVar5;
            local_98 = puVar4;
          } while (iVar21 < *piVar23);
        }
        goto LAB_14817a27a;
      }
    }
  }
  piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar15 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar15) {
    iVar14 = 0;
    do {
      puVar1 = local_d8 + local_d0;
      *local_d8 = 0;
      puVar2 = local_c8 + local_c0;
      *local_c8 = 0x3f800000;
      puVar3 = local_b8 + local_b0;
      *local_b8 = 0x3f800000;
      piVar15 = local_a8 + local_a0;
      *local_a8 = 0x3f800000;
      puVar4 = local_98 + local_90;
      *local_98 = 0x3f800000;
      iVar14 = iVar14 + 1;
      piVar20 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar20 = (int *)(param_1 + 0x3c);
      }
      local_d8 = puVar1;
      local_c8 = puVar2;
      local_b8 = puVar3;
      local_a8 = piVar15;
      local_98 = puVar4;
    } while (iVar14 < *piVar20);
  }
LAB_14817a27a:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817a606 FUN_14817a606 body=1095 status=ok
// SIG undefined FUN_14817a606(void)

void FUN_14817a606(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  float fVar18;
  longlong lVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [8];
  longlong local_e8;
  int *local_e0;
  int local_d0;
  int *local_c8;
  int local_b8;
  undefined4 *local_b0;
  int local_a8;
  uint *local_a0;
  int local_98;
  undefined4 *local_90;
  int local_88;
  int *local_80;
  int local_78;
  uint local_6c [3];
  char local_60;
  char local_5f;
  int local_5c;
  longlong alStack_58 [4];
  
  alStack_58[3] = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_148186f56(local_f0);
  lVar22 = *(longlong *)(local_e8 + 8);
  if (lVar22 != 0) {
    lVar10 = *(longlong *)(lVar22 + 0x10);
    lVar11 = *(longlong *)(lVar10 + 0x78);
    if (((lVar11 != 0) && (*(longlong *)(lVar22 + 0x18) == 0)) && (0 < *(int *)(lVar11 + 0x50))) {
      iVar14 = *(int *)(lVar11 + 0x120);
      local_6c[0]._0_1_ = 1;
      local_6c[1] = 0xffffffff;
      FUN_140bec572(local_6c,*(undefined8 *)(lVar10 + 8),param_2);
      FUN_144b351ea(&local_60,*(undefined8 *)(lVar10 + 0x78),(undefined1)local_6c[0],local_6c[1]);
      lVar22 = *(longlong *)(lVar22 + 0x10);
      local_6c[0] = (uint)local_6c[0]._1_3_ << 8;
      local_6c[1] = 0xffffffff;
      local_6c[2] = -1;
      FUN_140aa925c(local_6c,*(undefined8 *)(lVar22 + 8),DAT_14cb3c4a0);
      if (((local_6c[2] != -1) && (lVar22 = *(longlong *)(lVar22 + 0x78), lVar22 != 0)) &&
         (local_60 == '\x01')) {
        piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar13 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar13) {
          lVar10 = *(longlong *)(lVar22 + 0x28);
          iVar6 = *(int *)(lVar22 + 300);
          uVar15 = iVar6 * local_6c[2];
          iVar12 = local_6c[2] + 1;
          iVar7 = *(int *)(lVar22 + 0x120);
          iVar21 = 0;
          do {
            piVar13 = local_c8 + local_b8;
            piVar20 = local_e0 + local_d0;
            iVar8 = *local_e0;
            uVar17 = 0;
            if (((longlong)iVar8 < 0) || (*(int *)(lVar11 + 0x50) <= iVar8)) {
LAB_14817a906:
              uVar26 = 0;
              uVar27 = 0;
              uVar16 = 0;
            }
            else {
              iVar9 = *(int *)(*(longlong *)(lVar11 + 0x48) + (longlong)iVar8 * 4);
              lVar22 = (longlong)iVar9;
              if ((lVar22 < 0) || (iVar14 <= iVar9)) goto LAB_14817a906;
              iVar24 = -1;
              iVar25 = -1;
              if (iVar9 < iVar7) {
                iVar24 = *(int *)((ulonglong)uVar15 + lVar10 + lVar22 * 4);
                iVar25 = *(int *)((ulonglong)(uint)(iVar12 * iVar6) + lVar10 + lVar22 * 4);
              }
              if (iVar24 != iVar8) goto LAB_14817a906;
              uVar16 = 0;
              uVar26 = 0;
              uVar27 = 0;
              if (iVar25 == *local_c8) {
                if (iVar9 < local_5c) {
                  if (local_5f == '\0') {
                    lVar19 = 0;
                    do {
                      uVar5 = *(ushort *)(alStack_58[lVar19] + lVar22 * 2);
                      uVar17 = (uint)uVar5 << 0xd;
                      if ((uVar17 & 0xf800000) == 0xf800000) {
                        fVar18 = (float)(uVar17 | 0x70000000);
                      }
                      else if ((uVar17 & 0xf800000) == 0) {
                        fVar18 = (float)(uVar17 | 0x38800000) + -6.1035156e-05;
                      }
                      else {
                        fVar18 = (float)((uVar17 & 0xfffe000) + 0x38000000);
                      }
                      local_6c[lVar19] = (int)(short)uVar5 & 0x80000000U | (uint)fVar18;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 3);
                  }
                  else {
                    lVar19 = 0;
                    do {
                      local_6c[lVar19] = *(uint *)(alStack_58[lVar19] + lVar22 * 4);
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 3);
                  }
                }
                else {
                  local_6c[0] = 0;
                  local_6c[1] = 0;
                  local_6c[2] = 0;
                }
                uVar16 = 0xffffffff;
                uVar26 = local_6c[1];
                uVar27 = local_6c[2];
                uVar17 = local_6c[0];
              }
            }
            puVar1 = local_b0 + local_a8;
            *local_b0 = uVar16;
            puVar2 = local_a0 + local_98;
            *local_a0 = uVar17;
            puVar3 = local_90 + local_88;
            *local_90 = uVar26;
            piVar4 = local_80 + local_78;
            *local_80 = uVar27;
            iVar21 = iVar21 + 1;
            piVar23 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar23 = (int *)(param_1 + 0x3c);
            }
            local_e0 = piVar20;
            local_c8 = piVar13;
            local_b0 = puVar1;
            local_a0 = puVar2;
            local_90 = puVar3;
            local_80 = piVar4;
          } while (iVar21 < *piVar23);
        }
        goto LAB_14817a712;
      }
    }
  }
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar14 = 0;
    do {
      puVar1 = local_b0 + local_a8;
      *local_b0 = 0;
      puVar2 = local_a0 + local_98;
      *local_a0 = 0;
      puVar3 = local_90 + local_88;
      *local_90 = 0;
      piVar13 = local_80 + local_78;
      *local_80 = 0;
      iVar14 = iVar14 + 1;
      piVar20 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar20 = (int *)(param_1 + 0x3c);
      }
      local_b0 = puVar1;
      local_a0 = puVar2;
      local_90 = puVar3;
      local_80 = piVar13;
    } while (iVar14 < *piVar20);
  }
LAB_14817a712:
  if ((alStack_58[3] ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817aa4e FUN_14817aa4e body=1194 status=ok
// SIG undefined FUN_14817aa4e(void)

void FUN_14817aa4e(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  undefined4 uVar21;
  int iVar22;
  longlong lVar23;
  int *piVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_168 [32];
  int local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined1 local_138 [8];
  longlong local_130;
  int *local_128;
  int local_118;
  int *local_110;
  int local_100;
  undefined4 *local_f8;
  int local_f0;
  int *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  char local_a8 [4];
  int local_a4;
  longlong alStack_a0 [4];
  ulonglong local_80;
  
  uVar15 = DAT_14c84634c;
  uVar14 = DAT_14c846348;
  uVar13 = DAT_14c846344;
  iVar12 = DAT_14c84633c._4_4_;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_148186fd8(local_138,param_1);
  lVar23 = *(longlong *)(local_130 + 8);
  if (lVar23 != 0) {
    lVar10 = *(longlong *)(lVar23 + 0x10);
    lVar11 = *(longlong *)(lVar10 + 0x78);
    if (((lVar11 != 0) && (*(longlong *)(lVar23 + 0x18) == 0)) && (0 < *(int *)(lVar11 + 0x50))) {
      iVar17 = *(int *)(lVar11 + 0x120);
      local_148._0_1_ = 1;
      local_144 = CONCAT44(local_144._4_4_,0xffffffff);
      FUN_141291c16(&local_148,*(undefined8 *)(lVar10 + 8),param_2);
      FUN_140954484(local_a8,*(undefined8 *)(lVar10 + 0x78),(undefined1)local_148,
                    local_144 & 0xffffffff);
      lVar23 = *(longlong *)(lVar23 + 0x10);
      local_148 = (uint)local_148._1_3_ << 8;
      local_144 = 0xffffffffffffffff;
      FUN_140aa925c(&local_148,*(undefined8 *)(lVar23 + 8),DAT_14cb3c4a0);
      if (((local_144._4_4_ != -1) && (lVar23 = *(longlong *)(lVar23 + 0x78), lVar23 != 0)) &&
         (local_a8[0] == '\x01')) {
        piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar18 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar18) {
          lVar10 = *(longlong *)(lVar23 + 0x28);
          iVar6 = *(int *)(lVar23 + 300);
          uVar19 = iVar6 * local_144._4_4_;
          iVar16 = local_144._4_4_ + 1;
          iVar7 = *(int *)(lVar23 + 0x120);
          iVar22 = 0;
          do {
            piVar18 = local_110 + local_100;
            piVar20 = local_128 + local_118;
            iVar8 = *local_128;
            uVar21 = 0;
            iVar28 = iVar12;
            uVar29 = uVar13;
            uVar30 = uVar14;
            uVar31 = uVar15;
            if ((-1 < (longlong)iVar8) && (iVar8 < *(int *)(lVar11 + 0x50))) {
              iVar9 = *(int *)(*(longlong *)(lVar11 + 0x48) + (longlong)iVar8 * 4);
              lVar23 = (longlong)iVar9;
              if ((-1 < lVar23) && (iVar9 < iVar17)) {
                iVar26 = -1;
                iVar27 = -1;
                if (iVar9 < iVar7) {
                  iVar26 = *(int *)((ulonglong)uVar19 + lVar10 + lVar23 * 4);
                  iVar27 = *(int *)((ulonglong)(uint)(iVar16 * iVar6) + lVar10 + lVar23 * 4);
                }
                if ((iVar26 == iVar8) && (iVar27 == *local_110)) {
                  if (iVar9 < local_a4) {
                    lVar25 = 0;
                    do {
                      (&local_148)[lVar25] = *(int *)(alStack_a0[lVar25] + lVar23 * 4);
                      lVar25 = lVar25 + 1;
                    } while (lVar25 != 4);
                    iVar28 = local_148;
                    uVar29 = (undefined4)local_144;
                    uVar30 = local_144._4_4_;
                    uVar31 = local_13c;
                  }
                  uVar21 = 0xffffffff;
                }
              }
            }
            puVar1 = local_f8 + local_f0;
            *local_f8 = uVar21;
            piVar5 = local_e8 + local_e0;
            *local_e8 = iVar28;
            puVar2 = local_d8 + local_d0;
            *local_d8 = uVar29;
            puVar3 = local_c8 + local_c0;
            *local_c8 = uVar30;
            puVar4 = local_b8 + local_b0;
            *local_b8 = uVar31;
            iVar22 = iVar22 + 1;
            piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar24 = (int *)(param_1 + 0x3c);
            }
            local_128 = piVar20;
            local_110 = piVar18;
            local_f8 = puVar1;
            local_e8 = piVar5;
            local_d8 = puVar2;
            local_c8 = puVar3;
            local_b8 = puVar4;
          } while (iVar22 < *piVar24);
        }
        goto LAB_14817abc9;
      }
    }
  }
  piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar18 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar18) {
    iVar17 = 0;
    do {
      puVar1 = local_f8 + local_f0;
      *local_f8 = 0;
      piVar18 = local_e8 + local_e0;
      *local_e8 = iVar12;
      puVar2 = local_d8 + local_d0;
      *local_d8 = uVar13;
      puVar3 = local_c8 + local_c0;
      *local_c8 = uVar14;
      puVar4 = local_b8 + local_b0;
      *local_b8 = uVar15;
      iVar17 = iVar17 + 1;
      piVar20 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar20 = (int *)(param_1 + 0x3c);
      }
      local_f8 = puVar1;
      local_e8 = piVar18;
      local_d8 = puVar2;
      local_c8 = puVar3;
      local_b8 = puVar4;
    } while (iVar17 < *piVar20);
  }
LAB_14817abc9:
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817aefa FUN_14817aefa body=869 status=ok
// SIG undefined FUN_14817aefa(void)

void FUN_14817aefa(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  int iVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_f8 [36];
  int local_d4;
  ulonglong local_d0;
  undefined1 local_c8 [8];
  longlong local_c0;
  int *local_b8;
  int local_a8;
  int *local_a0;
  int local_90;
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  undefined1 local_54 [4];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14818706a(local_c8,param_1);
  lVar13 = *(longlong *)(local_c0 + 8);
  if (lVar13 != 0) {
    lVar8 = *(longlong *)(lVar13 + 0x10);
    lVar9 = *(longlong *)(lVar8 + 0x78);
    if (((lVar9 != 0) && (*(longlong *)(lVar13 + 0x18) == 0)) && (0 < *(int *)(lVar9 + 0x50))) {
      iVar10 = *(int *)(lVar9 + 0x120);
      local_54[0] = 0;
      local_50 = 0xffffffffffffffff;
      FUN_140aa925c(local_54,*(undefined8 *)(lVar8 + 8),param_2);
      lVar8 = *(longlong *)(lVar8 + 0x78);
      bVar22 = local_50._4_4_ == -1;
      if (bVar22 || lVar8 == 0) {
        local_d0 = 0;
        lVar12 = 0;
        lVar21 = 0;
      }
      else {
        lVar21 = (ulonglong)(uint)(*(int *)(lVar8 + 300) * local_50._4_4_) +
                 *(longlong *)(lVar8 + 0x28);
        lVar12 = (ulonglong)(uint)((local_50._4_4_ + 1) * *(int *)(lVar8 + 300)) +
                 *(longlong *)(lVar8 + 0x28);
        local_d0 = (ulonglong)*(uint *)(lVar8 + 0x120);
      }
      lVar13 = *(longlong *)(lVar13 + 0x10);
      local_54[0] = 0;
      local_50 = 0xffffffffffffffff;
      FUN_140aa925c(local_54,*(undefined8 *)(lVar13 + 8),DAT_14cb3c4a0);
      if (((local_50._4_4_ != -1) && (lVar13 = *(longlong *)(lVar13 + 0x78), lVar13 != 0)) &&
         (!bVar22 && lVar8 != 0)) {
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar11) {
          lVar8 = *(longlong *)(lVar13 + 0x28);
          iVar5 = *(int *)(lVar13 + 300);
          local_d4 = *(int *)(lVar13 + 0x120);
          iVar17 = 0;
          do {
            piVar11 = local_a0 + local_90;
            piVar4 = local_b8 + local_a8;
            iVar6 = *local_b8;
            uVar18 = 0xffffffffffffffff;
            if (((longlong)iVar6 < 0) || (*(int *)(lVar9 + 0x50) <= iVar6)) {
LAB_14817b1df:
              uVar19 = 0;
            }
            else {
              iVar7 = *(int *)(*(longlong *)(lVar9 + 0x48) + (longlong)iVar6 * 4);
              lVar13 = (longlong)iVar7;
              if ((lVar13 < 0) || (iVar10 <= iVar7)) goto LAB_14817b1df;
              iVar14 = -1;
              iVar20 = -1;
              if (iVar7 < local_d4) {
                iVar14 = *(int *)((ulonglong)(uint)(iVar5 * local_50._4_4_) + lVar8 + lVar13 * 4);
                iVar20 = *(int *)((ulonglong)(uint)((local_50._4_4_ + 1) * iVar5) + lVar8 +
                                 lVar13 * 4);
              }
              if (iVar14 != iVar6) goto LAB_14817b1df;
              uVar19 = 0;
              if (iVar20 == *local_a0) {
                uVar19 = 0xffffffff;
                uVar18 = 0xffffffff;
                uVar15 = 0xffffffff;
                if (iVar7 < (int)local_d0) {
                  uVar15 = *(uint *)(lVar21 + lVar13 * 4);
                  uVar18 = (ulonglong)*(uint *)(lVar12 + lVar13 * 4);
                }
                uVar18 = (ulonglong)uVar15 | uVar18 << 0x20;
              }
            }
            puVar1 = local_88 + local_80;
            *local_88 = uVar19;
            puVar2 = local_78 + local_70;
            *local_78 = (int)uVar18;
            puVar3 = local_68 + local_60;
            *local_68 = (int)(uVar18 >> 0x20);
            iVar17 = iVar17 + 1;
            piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar16 = (int *)(param_1 + 0x3c);
            }
            local_b8 = piVar4;
            local_a0 = piVar11;
            local_88 = puVar1;
            local_78 = puVar2;
            local_68 = puVar3;
          } while (iVar17 < *piVar16);
        }
        goto LAB_14817afed;
      }
    }
  }
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    iVar10 = 0;
    do {
      puVar1 = local_88 + local_80;
      *local_88 = 0;
      puVar2 = local_78 + local_70;
      *local_78 = 0xffffffff;
      puVar3 = local_68 + local_60;
      *local_68 = 0xffffffff;
      iVar10 = iVar10 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_88 = puVar1;
      local_78 = puVar2;
      local_68 = puVar3;
    } while (iVar10 < *piVar11);
  }
LAB_14817afed:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817b260 FUN_14817b260 body=477 status=ok
// SIG undefined FUN_14817b260(void)

void FUN_14817b260(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  uint *local_70;
  int local_60;
  int *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1481870e0(local_80);
  lVar6 = *(longlong *)(local_78 + 8);
  if (lVar6 != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x10);
    if (((*(longlong *)(lVar7 + 0x78) != 0) &&
        (iVar9 = *(int *)(*(longlong *)(lVar7 + 0x78) + 0x120), iVar9 != 0)) &&
       (*(longlong *)(lVar6 + 0x18) == 0)) {
      local_34 = -1;
      FUN_140a6f82a(&local_34,*(undefined8 *)(lVar7 + 8),param_2);
      if ((local_34 != -1) && (lVar6 = *(longlong *)(lVar7 + 0x78), lVar6 != 0)) {
        piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar8 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar8) {
          iVar3 = *(int *)(lVar6 + 300);
          lVar7 = *(longlong *)(lVar6 + 0x28);
          iVar4 = *(int *)(lVar6 + 0x120);
          iVar10 = 0;
          do {
            puVar2 = local_70 + local_60;
            uVar5 = *local_70;
            uVar12 = 0;
            if (((int)uVar5 < iVar9 && -1 < (int)uVar5) && ((int)uVar5 < iVar4)) {
              uVar12 = *(undefined4 *)
                        ((ulonglong)(uint)(local_34 * iVar3) + lVar7 + (ulonglong)uVar5 * 4);
            }
            piVar8 = local_58 + local_50;
            *local_58 = -(uint)((int)uVar5 < iVar9 && -1 < (int)uVar5);
            puVar1 = local_48 + local_40;
            *local_48 = uVar12;
            iVar10 = iVar10 + 1;
            piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar11 = (int *)(param_1 + 0x3c);
            }
            local_70 = puVar2;
            local_58 = piVar8;
            local_48 = puVar1;
          } while (iVar10 < *piVar11);
        }
        goto LAB_14817b325;
      }
    }
  }
  piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar8 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar8) {
    iVar9 = 0;
    do {
      piVar8 = local_58 + local_50;
      *local_58 = 0;
      puVar1 = local_48 + local_40;
      *local_48 = 0;
      iVar9 = iVar9 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_58 = piVar8;
      local_48 = puVar1;
    } while (iVar9 < *piVar11);
  }
LAB_14817b325:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817b43e FUN_14817b43e body=477 status=ok
// SIG undefined FUN_14817b43e(void)

void FUN_14817b43e(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  uint *local_70;
  int local_60;
  int *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14818712e(local_80);
  lVar6 = *(longlong *)(local_78 + 8);
  if (lVar6 != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x10);
    if (((*(longlong *)(lVar7 + 0x78) != 0) &&
        (iVar9 = *(int *)(*(longlong *)(lVar7 + 0x78) + 0x120), iVar9 != 0)) &&
       (*(longlong *)(lVar6 + 0x18) == 0)) {
      local_34 = -1;
      FUN_140a6faac(&local_34,*(undefined8 *)(lVar7 + 8),param_2);
      if ((local_34 != -1) && (lVar6 = *(longlong *)(lVar7 + 0x78), lVar6 != 0)) {
        piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar8 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar8) {
          iVar3 = *(int *)(lVar6 + 300);
          lVar7 = *(longlong *)(lVar6 + 0x28);
          iVar4 = *(int *)(lVar6 + 0x120);
          iVar10 = 0;
          do {
            puVar2 = local_70 + local_60;
            uVar5 = *local_70;
            uVar12 = 0;
            if (((int)uVar5 < iVar9 && -1 < (int)uVar5) && ((int)uVar5 < iVar4)) {
              uVar12 = *(undefined4 *)
                        ((ulonglong)(uint)(local_34 * iVar3) + lVar7 + (ulonglong)uVar5 * 4);
            }
            piVar8 = local_58 + local_50;
            *local_58 = -(uint)((int)uVar5 < iVar9 && -1 < (int)uVar5);
            puVar1 = local_48 + local_40;
            *local_48 = uVar12;
            iVar10 = iVar10 + 1;
            piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar11 = (int *)(param_1 + 0x3c);
            }
            local_70 = puVar2;
            local_58 = piVar8;
            local_48 = puVar1;
          } while (iVar10 < *piVar11);
        }
        goto LAB_14817b503;
      }
    }
  }
  piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar8 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar8) {
    iVar9 = 0;
    do {
      piVar8 = local_58 + local_50;
      *local_58 = 0;
      puVar1 = local_48 + local_40;
      *local_48 = 0;
      iVar9 = iVar9 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_58 = piVar8;
      local_48 = puVar1;
    } while (iVar9 < *piVar11);
  }
LAB_14817b503:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817b61c FUN_14817b61c body=902 status=ok
// SIG undefined FUN_14817b61c(void)

void FUN_14817b61c(char *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  float fVar19;
  int iVar20;
  undefined1 auStack_108 [43];
  byte local_dd;
  uint local_dc;
  int local_d8;
  uint local_d4;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  uint *local_b0;
  int local_a0;
  int *local_98;
  int local_90;
  uint *local_88;
  int local_80;
  uint *local_78;
  int local_70;
  uint local_68;
  int local_64;
  longlong local_58 [3];
  
  uVar6 = DAT_14c84635c._4_4_;
  uVar5 = (uint)DAT_14c84635c;
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = CONCAT44(DAT_14c84635c._4_4_,(uint)DAT_14c84635c);
  FUN_14818717c(local_c0);
  lVar10 = *(longlong *)(local_b8 + 8);
  if (lVar10 != 0) {
    lVar15 = *(longlong *)(lVar10 + 0x10);
    if (((*(longlong *)(lVar15 + 0x78) != 0) &&
        (iVar14 = *(int *)(*(longlong *)(lVar15 + 0x78) + 0x120), iVar14 != 0)) &&
       (*(longlong *)(lVar10 + 0x18) == 0)) {
      local_68 = CONCAT31(local_68._1_3_,1);
      local_64 = -1;
      FUN_140da315a(&local_68,*(undefined8 *)(lVar15 + 8),param_2);
      if ((local_64 != -1) && (lVar10 = *(longlong *)(lVar15 + 0x78), lVar10 != 0)) {
        bVar7 = (byte)local_68;
        local_dd = (byte)local_68;
        iVar20 = *(int *)(lVar10 + 0x128 + (ulonglong)((byte)local_68 ^ 1) * 8);
        lVar15 = *(longlong *)(lVar10 + 0x18 + (ulonglong)((byte)local_68 ^ 1) * 0x20);
        local_c8 = (ulonglong)(uint)(iVar20 * local_64) + lVar15;
        local_58[0] = local_c8;
        lVar15 = (ulonglong)(uint)((local_64 + 1) * iVar20) + lVar15;
        local_58[1] = lVar15;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar9) {
          local_d8 = *(int *)(lVar10 + 0x120);
          iVar20 = 0;
          local_dc = uVar6;
          local_d0 = lVar15;
          do {
            puVar16 = local_b0 + local_a0;
            uVar3 = *local_b0;
            uVar17 = (ulonglong)uVar3;
            uVar11 = uVar4;
            local_b0 = puVar16;
            if ((int)uVar3 < iVar14 && -1 < (int)uVar3) {
              uVar11 = (ulonglong)uVar6;
              uVar18 = uVar5;
              if ((int)uVar3 < local_d8) {
                if (bVar7 == 0) {
                  lVar10 = 0;
                  puVar16 = &local_68;
                  bVar8 = true;
                  do {
                    bVar13 = bVar8;
                    uVar2 = *(ushort *)(local_58[lVar10] + uVar17 * 2);
                    uVar18 = (uint)uVar2 << 0xd;
                    if ((uVar18 & 0xf800000) == 0xf800000) {
                      fVar19 = (float)(uVar18 | 0x70000000);
                    }
                    else if ((uVar18 & 0xf800000) == 0) {
                      fVar19 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar19 = (float)((uVar18 & 0xfffe000) + 0x38000000);
                    }
                    *puVar16 = (int)(short)uVar2 & 0x80000000U | (uint)fVar19;
                    lVar10 = 1;
                    puVar16 = &local_d4;
                    bVar8 = false;
                  } while (bVar13);
                  uVar11 = (ulonglong)local_d4;
                  lVar15 = local_d0;
                  uVar18 = local_68;
                }
                else {
                  uVar11 = (ulonglong)*(uint *)(lVar15 + uVar17 * 4);
                  uVar18 = *(uint *)(local_c8 + uVar17 * 4);
                }
              }
              uVar11 = (ulonglong)uVar18 | uVar11 << 0x20;
            }
            piVar9 = local_98 + local_90;
            *local_98 = -(uint)((int)uVar3 < iVar14 && -1 < (int)uVar3);
            puVar16 = local_88 + local_80;
            *local_88 = (uint)uVar11;
            puVar1 = local_78 + local_70;
            *local_78 = (uint)(uVar11 >> 0x20);
            iVar20 = iVar20 + 1;
            piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar12 = (int *)(param_1 + 0x3c);
            }
            local_98 = piVar9;
            local_88 = puVar16;
            local_78 = puVar1;
          } while (iVar20 < *piVar12);
        }
        goto LAB_14817b731;
      }
    }
  }
  piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar9 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar14 = 0;
    do {
      piVar9 = local_98 + local_90;
      *local_98 = 0;
      puVar16 = local_88 + local_80;
      *local_88 = uVar5;
      puVar1 = local_78 + local_70;
      *local_78 = uVar6;
      iVar14 = iVar14 + 1;
      piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar12 = (int *)(param_1 + 0x3c);
      }
      local_98 = piVar9;
      local_88 = puVar16;
      local_78 = puVar1;
    } while (iVar14 < *piVar12);
  }
LAB_14817b731:
  if ((local_58[2] ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817b9a4 FUN_14817b9a4 body=937 status=ok
// SIG undefined FUN_14817b9a4(void)

void FUN_14817b9a4(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ushort uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0 [8];
  longlong local_d8;
  uint *local_d0;
  int local_c0;
  int *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  char local_68;
  char local_67;
  int local_64;
  longlong alStack_60 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1481871d6(local_e0);
  lVar13 = *(longlong *)(local_d8 + 8);
  if (lVar13 != 0) {
    lVar8 = *(longlong *)(lVar13 + 0x10);
    if (((*(longlong *)(lVar8 + 0x78) != 0) &&
        (iVar11 = *(int *)(*(longlong *)(lVar8 + 0x78) + 0x120), iVar11 != 0)) &&
       (*(longlong *)(lVar13 + 0x18) == 0)) {
      local_f8 = CONCAT71(local_f8._1_7_,1);
      local_f8 = CONCAT44(0xffffffff,(undefined4)local_f8);
      FUN_140aa910c(&local_f8,*(undefined8 *)(lVar8 + 8),param_2);
      FUN_14808a844(&local_68,*(undefined8 *)(lVar8 + 0x78),local_f8 & 0xff,local_f8._4_4_);
      if (local_68 == '\x01') {
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar10) {
          iVar9 = 0;
          do {
            puVar5 = local_d0 + local_c0;
            uVar7 = *local_d0;
            uVar17 = 0;
            uVar18 = 0;
            uVar19 = 0;
            uVar16 = 0;
            if ((int)uVar7 < iVar11 && -1 < (int)uVar7) {
              if ((int)uVar7 < local_64) {
                local_f8 = 0;
                uStack_f0 = 0x3f80000000000000;
                if (local_67 == '\0') {
                  lVar13 = 0;
                  do {
                    uVar6 = *(ushort *)(alStack_60[lVar13] + (ulonglong)uVar7 * 2);
                    uVar14 = (uint)uVar6 << 0xd;
                    if ((uVar14 & 0xf800000) == 0xf800000) {
                      fVar15 = (float)(uVar14 | 0x70000000);
                    }
                    else if ((uVar14 & 0xf800000) == 0) {
                      fVar15 = (float)(uVar14 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar15 = (float)((uVar14 & 0xfffe000) + 0x38000000);
                    }
                    *(uint *)((longlong)&local_f8 + lVar13 * 4) =
                         (int)(short)uVar6 & 0x80000000U | (uint)fVar15;
                    lVar13 = lVar13 + 1;
                  } while (lVar13 != 4);
                }
                else {
                  lVar13 = 0;
                  do {
                    *(undefined4 *)((longlong)&local_f8 + lVar13 * 4) =
                         *(undefined4 *)(alStack_60[lVar13] + (ulonglong)uVar7 * 4);
                    lVar13 = lVar13 + 1;
                  } while (lVar13 != 4);
                }
              }
              else {
                local_f8 = 0;
                uStack_f0 = 0;
              }
              uVar17 = (undefined4)uStack_f0;
              uVar18 = local_f8._4_4_;
              uVar19 = (undefined4)local_f8;
              uVar16 = uStack_f0._4_4_;
            }
            piVar10 = local_b8 + local_b0;
            *local_b8 = -(uint)((int)uVar7 < iVar11 && -1 < (int)uVar7);
            puVar1 = local_a8 + local_a0;
            *local_a8 = uVar19;
            puVar2 = local_98 + local_90;
            *local_98 = uVar18;
            puVar3 = local_88 + local_80;
            *local_88 = uVar17;
            puVar4 = local_78 + local_70;
            *local_78 = uVar16;
            iVar9 = iVar9 + 1;
            piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar12 = (int *)(param_1 + 0x3c);
            }
            local_d0 = puVar5;
            local_b8 = piVar10;
            local_a8 = puVar1;
            local_98 = puVar2;
            local_88 = puVar3;
            local_78 = puVar4;
          } while (iVar9 < *piVar12);
        }
        goto LAB_14817bad9;
      }
    }
  }
  piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar10 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar10) {
    iVar11 = 0;
    do {
      piVar10 = local_b8 + local_b0;
      *local_b8 = 0;
      puVar1 = local_a8 + local_a0;
      *local_a8 = 0;
      puVar2 = local_98 + local_90;
      *local_98 = 0;
      puVar3 = local_88 + local_80;
      *local_88 = 0;
      puVar4 = local_78 + local_70;
      *local_78 = 0;
      iVar11 = iVar11 + 1;
      piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar12 = (int *)(param_1 + 0x3c);
      }
      local_b8 = piVar10;
      local_a8 = puVar1;
      local_98 = puVar2;
      local_88 = puVar3;
      local_78 = puVar4;
    } while (iVar11 < *piVar12);
  }
LAB_14817bad9:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817bd4e FUN_14817bd4e body=888 status=ok
// SIG undefined FUN_14817bd4e(void)

void FUN_14817bd4e(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_148 [32];
  undefined4 local_128 [6];
  undefined1 local_110 [8];
  longlong local_108;
  uint *local_100;
  int local_f0;
  int *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  char local_98 [4];
  int local_94;
  longlong alStack_90 [4];
  ulonglong local_70;
  
  uVar11 = DAT_14c84634c;
  uVar10 = DAT_14c846348;
  uVar9 = DAT_14c846344;
  uVar8 = DAT_14c84633c._4_4_;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_148187248(local_110,param_1);
  lVar16 = *(longlong *)(local_108 + 8);
  if (lVar16 != 0) {
    lVar7 = *(longlong *)(lVar16 + 0x10);
    if (((*(longlong *)(lVar7 + 0x78) != 0) &&
        (iVar12 = *(int *)(*(longlong *)(lVar7 + 0x78) + 0x120), iVar12 != 0)) &&
       (*(longlong *)(lVar16 + 0x18) == 0)) {
      local_128[0] = CONCAT31(local_128[0]._1_3_,1);
      local_128[1] = 0xffffffff;
      FUN_141291c16(local_128,*(undefined8 *)(lVar7 + 8),param_2);
      FUN_140954484(local_98,*(undefined8 *)(lVar7 + 0x78),(undefined1)local_128[0],local_128[1]);
      if (local_98[0] == '\x01') {
        piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar14 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar14) {
          iVar13 = 0;
          do {
            puVar5 = local_100 + local_f0;
            uVar6 = *local_100;
            uVar17 = uVar11;
            uVar18 = uVar10;
            uVar19 = uVar9;
            uVar20 = uVar8;
            if (((int)uVar6 < iVar12 && -1 < (int)uVar6) && ((int)uVar6 < local_94)) {
              lVar16 = 0;
              do {
                local_128[lVar16] = *(undefined4 *)(alStack_90[lVar16] + (ulonglong)uVar6 * 4);
                lVar16 = lVar16 + 1;
                uVar17 = local_128[3];
                uVar18 = local_128[2];
                uVar19 = local_128[1];
                uVar20 = local_128[0];
              } while (lVar16 != 4);
            }
            piVar14 = local_e8 + local_e0;
            *local_e8 = -(uint)((int)uVar6 < iVar12 && -1 < (int)uVar6);
            puVar1 = local_d8 + local_d0;
            *local_d8 = uVar20;
            puVar2 = local_c8 + local_c0;
            *local_c8 = uVar19;
            puVar3 = local_b8 + local_b0;
            *local_b8 = uVar18;
            puVar4 = local_a8 + local_a0;
            *local_a8 = uVar17;
            iVar13 = iVar13 + 1;
            piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar15 = (int *)(param_1 + 0x3c);
            }
            local_100 = puVar5;
            local_e8 = piVar14;
            local_d8 = puVar1;
            local_c8 = puVar2;
            local_b8 = puVar3;
            local_a8 = puVar4;
          } while (iVar13 < *piVar15);
        }
        goto LAB_14817bec5;
      }
    }
  }
  piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar14 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar12 = 0;
    do {
      piVar14 = local_e8 + local_e0;
      *local_e8 = 0;
      puVar1 = local_d8 + local_d0;
      *local_d8 = uVar8;
      puVar2 = local_c8 + local_c0;
      *local_c8 = uVar9;
      puVar3 = local_b8 + local_b0;
      *local_b8 = uVar10;
      puVar4 = local_a8 + local_a0;
      *local_a8 = uVar11;
      iVar12 = iVar12 + 1;
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      local_e8 = piVar14;
      local_d8 = puVar1;
      local_c8 = puVar2;
      local_b8 = puVar3;
      local_a8 = puVar4;
    } while (iVar12 < *piVar15);
  }
LAB_14817bec5:
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817c0c8 FUN_14817c0c8 body=51 status=ok
// SIG undefined FUN_14817c0c8(void)

undefined8 FUN_14817c0c8(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1481192e4();
  if ((cVar1 == '\0') || (*(int *)(param_2 + 0x38) != *(int *)(param_1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x3c) >> 8),
                     *(longlong *)(param_2 + 0x3c) == *(longlong *)(param_1 + 0x3c));
  }
  return uVar2;
}



// FUNCTION 14817c0fe FUN_14817c0fe body=521 status=ok
// SIG undefined FUN_14817c0fe(void)

ulonglong * FUN_14817c0fe(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  puVar6 = (ulonglong *)FUN_14001cc68(0x20,0x10);
  puVar1 = puVar6 + 2;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  iVar2 = *(int *)(param_2 + 0x30);
  FUN_14817c308(puVar6,iVar2);
  FUN_14817c384(puVar1,iVar2);
  if (0 < (longlong)iVar2) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + 0x28);
      lVar11 = lVar7 * 0x50;
      lVar9 = (longlong)*(int *)(lVar3 + 0x20 + lVar11);
      if (lVar9 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x18 + lVar11);
        lVar12 = 0;
        do {
          if (*(longlong *)(lVar4 + lVar12) == DAT_14cb3d8e0) {
            uVar5 = *puVar6;
            uVar10 = ((longlong)uVar5 >> 0x18) + (longlong)puVar6;
            if ((uVar5 & 1) == 0) {
              uVar10 = uVar5;
            }
            *(undefined8 *)(uVar10 + lVar7 * 8) = *(undefined8 *)(lVar4 + 8 + lVar12);
            lVar3 = *(longlong *)(lVar3 + lVar11);
            cVar8 = '\x01';
            if (((((((lVar3 != DAT_14cb3c3f8) && (lVar3 != DAT_14cb3c448)) &&
                   (cVar8 = '\x06', lVar3 != DAT_14cb3c400)) &&
                  ((lVar3 != DAT_14cb3c450 && (cVar8 = '\x02', lVar3 != DAT_14cb3c408)))) &&
                 ((lVar3 != DAT_14cb3c458 &&
                  ((cVar8 = '\x03', lVar3 != DAT_14cb3c410 && (lVar3 != DAT_14cb3c460)))))) &&
                (cVar8 = '\x04', lVar3 != DAT_14cb3c418)) &&
               (((((lVar3 != DAT_14cb3c468 && (cVar8 = '\x05', lVar3 != DAT_14cb3c420)) &&
                  (lVar3 != DAT_14cb3c470)) &&
                 (((cVar8 = '\a', lVar3 != DAT_14cb3c428 && (lVar3 != DAT_14cb3c478)) &&
                  ((cVar8 = '\n', lVar3 != DAT_14cb3c430 &&
                   ((lVar3 != DAT_14cb3c480 && (cVar8 = '\b', lVar3 != DAT_14cb3c438)))))))) &&
                ((lVar3 != DAT_14cb3c488 && (cVar8 = '\t', lVar3 != DAT_14cb3c440)))))) {
              cVar8 = (lVar3 == DAT_14cb3c490) * '\t';
            }
            goto LAB_14817c1a9;
          }
          lVar12 = lVar12 + 0x10;
        } while (lVar9 * 0x10 != lVar12);
      }
      uVar5 = *puVar6;
      uVar10 = ((longlong)uVar5 >> 0x18) + (longlong)puVar6;
      if ((uVar5 & 1) == 0) {
        uVar10 = uVar5;
      }
      *(undefined8 *)(uVar10 + lVar7 * 8) = 0;
      cVar8 = '\0';
LAB_14817c1a9:
      uVar5 = *puVar1;
      uVar10 = ((longlong)uVar5 >> 0x18) + (longlong)puVar1;
      if ((uVar5 & 1) == 0) {
        uVar10 = uVar5;
      }
      *(char *)(uVar10 + lVar7) = cVar8;
      lVar7 = lVar7 + 1;
    } while (lVar7 != iVar2);
  }
  return puVar6;
}



// FUNCTION 14817c308 FUN_14817c308 body=122 status=ok
// SIG undefined FUN_14817c308(void)

void FUN_14817c308(ulonglong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14816c94e(param_1,iVar1);
    }
    uVar2 = *param_1;
    uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
    if ((uVar2 & 1) == 0) {
      uVar3 = uVar2;
    }
    FUN_148187707(uVar3 + (longlong)iVar1 * 8,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14816c9d4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14817c384 FUN_14817c384 body=126 status=ok
// SIG undefined FUN_14817c384(void)

void FUN_14817c384(ulonglong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1481807a4(param_1);
    }
    uVar2 = *param_1;
    uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
    if ((uVar2 & 1) == 0) {
      uVar3 = uVar2;
    }
    memset((void *)(uVar3 + (longlong)iVar1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148180822(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14817c404 FUN_14817c404 body=21 status=ok
// SIG undefined FUN_14817c404(void)

undefined * FUN_14817c404(void)

{
  FUN_14606e4de();
  return &DAT_14cb3c4c0;
}



// FUNCTION 14817c41a FUN_14817c41a body=52 status=ok
// SIG undefined FUN_14817c41a(void)

void FUN_14817c41a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140af0dde(param_1 + 0x38,param_1);
  if (lVar1 != 0) {
    FUN_1412fabe8(param_2,lVar1 + 0x60);
    return;
  }
  return;
}



// FUNCTION 14817c452 FUN_14817c452 body=42 status=ok
// SIG undefined FUN_14817c452(void)

void FUN_14817c452(longlong param_1)

{
  undefined1 uVar1;
  
  FUN_1400bb2d8();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar1 = FUN_1401e6e8e(param_1 + 0x38);
    *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 14817c49e FUN_14817c49e body=202 status=ok
// SIG undefined FUN_14817c49e(void)

void FUN_14817c49e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14add3eb0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817c58c FUN_14817c58c body=58 status=ok
// SIG undefined FUN_14817c58c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14817c58c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  uVar2 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_1481877b2();
  *(uint *)(param_2 + 0x50) = uVar2 + _DAT_14cb3cd6c;
  *(uint *)(*(longlong *)(param_2 + 0x38) + (ulonglong)uVar2) = (uint)*(byte *)(lVar1 + 0x10);
  return;
}



// FUNCTION 14817c5c6 FUN_14817c5c6 body=55 status=ok
// SIG undefined FUN_14817c5c6(void)

undefined8 FUN_14817c5c6(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1481192e4();
  if (cVar1 != '\0') {
    uVar2 = FUN_1481d0276(param_2 + 0x38,param_1 + 0x38);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14817c5fe FUN_14817c5fe body=74 status=ok
// SIG undefined FUN_14817c5fe(void)

undefined4 FUN_14817c5fe(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1414db5a0();
  if ((char)uVar1 != '\0') {
    FUN_1405d56d0(param_2 + 0x38,param_1 + 0x38);
    FUN_1405d5728(param_2 + 0x48,param_1 + 0x48);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  }
  return uVar1;
}



// FUNCTION 14817c648 FUN_14817c648 body=159 status=ok
// SIG undefined FUN_14817c648(void)

void FUN_14817c648(longlong param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140126e42(&local_28);
  bVar1 = FUN_1401e6e8e(param_1 + 0x38);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      piVar3 = local_28 + local_20;
      *local_28 = -(uint)bVar1;
      iVar2 = iVar2 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_28 = piVar3;
    } while (iVar2 < *piVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817c6ec FUN_14817c6ec body=238 status=ok
// SIG undefined FUN_14817c6ec(void)

void FUN_14817c6ec(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  
  FUN_148190168();
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3d8d8) {
    pcVar4 = FUN_14817c7da;
  }
  else if (lVar1 == DAT_14cb3c5b0) {
    pcVar4 = FUN_14817c8ce;
  }
  else if (lVar1 == DAT_14cb3c5b8) {
    pcVar4 = FUN_14817cab4;
  }
  else {
    if (lVar1 != DAT_14cb3c5c0) {
      return;
    }
    pcVar4 = FUN_14817cbec;
  }
  if ((int)param_4[1] != 3) {
    FUN_1446efa72(param_4,0,3,0x10);
    *(undefined4 *)(param_4 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_4;
  *puVar2 = &PTR_LAB_14ad81180;
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
  puVar2[2] = lVar3;
  *puVar2 = &PTR_FUN_14add5f60;
  puVar2[3] = 0;
  FUN_14485c47a(puVar2 + 3,param_1);
  puVar2[4] = pcVar4;
  return;
}



// FUNCTION 14817c7da FUN_14817c7da body=243 status=ok
// SIG undefined FUN_14817c7da(void)

void FUN_14817c7da(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14817cd1a(local_20);
  FUN_144a76cd4(&local_30,param_2);
  FUN_144a76cd4(&local_40,param_2);
  FUN_144a76cd4(&local_50,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 8);
      puVar2 = local_40 + local_38;
      *local_40 = *(undefined4 *)(local_18 + 0xc);
      puVar3 = local_50 + local_48;
      *local_50 = *(undefined4 *)(local_18 + 0x10);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_50 = puVar3;
      local_40 = puVar2;
      local_30 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817c8ce FUN_14817c8ce body=484 status=ok
// SIG undefined FUN_14817c8ce(void)

void FUN_14817c8ce(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14817cd1a(local_50);
  iVar11 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08(&local_68,param_2);
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_2);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_2);
  FUN_140126e42(&local_b8,param_2);
  piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar9 = (int *)(param_2 + 0x3c);
  }
  iVar12 = *piVar9;
  if (0 < iVar12) {
    do {
      puVar1 = local_68 + local_58;
      uVar3 = *local_68;
      puVar2 = local_88 + local_78;
      uVar4 = *local_88;
      piVar9 = local_a8 + local_98;
      if ((((iVar12 == 1) && (local_48 != 0)) && (-1 < *(int *)(param_1 + 0x3c))) &&
         (-1 < *(int *)(param_1 + 0x40))) {
        iVar12 = *local_a8;
        uVar5 = *(uint *)(param_1 + 0x44);
        piVar10 = local_b8 + local_b0;
        *local_b8 = (int)~uVar5 >> 0x1f;
        local_b8 = piVar10;
        if (-1 < (int)uVar5) {
          iVar6 = *(int *)(local_48 + 8);
          iVar7 = *(int *)(local_48 + 0xc);
          iVar8 = *(int *)(local_48 + 0x10);
          *(undefined4 *)(local_48 + 8) = uVar3;
          *(undefined4 *)(local_48 + 0xc) = uVar4;
          *(int *)(local_48 + 0x10) = iVar12;
          bVar13 = true;
          if (iVar6 == *(int *)(local_48 + 8)) {
            bVar13 = iVar8 != iVar12 || iVar7 != *(int *)(local_48 + 0xc);
          }
          *(bool *)(local_48 + 0x28) = bVar13;
        }
      }
      else {
        *local_b8 = 0;
        local_b8 = local_b8 + local_b0;
      }
      iVar11 = iVar11 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = (int *)(param_2 + 0x3c);
      }
      iVar12 = *piVar10;
      local_a8 = piVar9;
      local_88 = puVar2;
      local_68 = puVar1;
    } while (iVar11 < iVar12);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817cab4 FUN_14817cab4 body=310 status=ok
// SIG undefined FUN_14817cab4(void)

void FUN_14817cab4(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_50;
  undefined4 *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14817cd1a(local_28);
  local_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_2);
  FUN_140126e42(&local_58,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  iVar6 = *piVar5;
  if (0 < iVar6) {
    iVar4 = 0;
    do {
      puVar1 = local_48 + local_38;
      if ((((iVar6 == 1) && (local_20 != 0)) && (-1 < *(int *)(param_1 + 0x3c))) &&
         (-1 < *(int *)(param_1 + 0x40))) {
        uVar2 = *local_48;
        uVar3 = *(uint *)(param_1 + 0x44);
        piVar5 = local_58 + local_50;
        *local_58 = (int)~uVar3 >> 0x1f;
        local_58 = piVar5;
        if (-1 < (int)uVar3) {
          iVar6 = *(int *)(local_20 + 4);
          *(undefined4 *)(local_20 + 4) = uVar2;
          *(bool *)(local_20 + 0x28) = iVar6 != *(int *)(local_20 + 4);
        }
      }
      else {
        *local_58 = 0;
        local_58 = local_58 + local_50;
      }
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      iVar6 = *piVar5;
      local_48 = puVar1;
    } while (iVar4 < iVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817cbec FUN_14817cbec body=301 status=ok
// SIG undefined FUN_14817cbec(void)

void FUN_14817cbec(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_40;
  float *local_38;
  undefined8 uStack_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14817cd1a(local_20);
  local_38 = (float *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a98dce(&local_38,param_2);
  FUN_140126e42(&local_48,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  iVar4 = *piVar3;
  if (0 < iVar4) {
    iVar2 = 0;
    do {
      pfVar1 = local_38 + local_28;
      if (local_18 == 0) {
        *local_48 = 0;
        local_48 = local_48 + local_40;
      }
      else {
        fVar5 = *local_38;
        piVar3 = local_48 + local_40;
        *local_48 = -(uint)(iVar4 == 1);
        local_48 = piVar3;
        if (iVar4 == 1) {
          fVar5 = fVar5 * *(float *)(local_18 + 0x20);
          *(int *)(local_18 + 0x24) = (int)ROUND(fVar5 + fVar5 + -0.5) >> 1;
        }
      }
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      iVar4 = *piVar3;
      local_38 = pfVar1;
    } while (iVar2 < iVar4);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817cd1a FUN_14817cd1a body=148 status=ok
// SIG undefined FUN_14817cd1a(void)

void FUN_14817cd1a(int *param_1,char *param_2)

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



// FUNCTION 14817cdae FUN_14817cdae body=62 status=ok
// SIG undefined FUN_14817cdae(void)

undefined4 FUN_14817cdae(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_14819016a();
  if ((((cVar1 == '\0') || (*(int *)(param_2 + 0x70) != *(int *)(param_1 + 0x70))) ||
      (*(float *)(param_2 + 0x74) != *(float *)(param_1 + 0x74))) ||
     (NAN(*(float *)(param_2 + 0x74)) || NAN(*(float *)(param_1 + 0x74)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x78) >> 8),
                     *(int *)(param_2 + 0x78) == *(int *)(param_1 + 0x78));
  }
  return uVar2;
}



// FUNCTION 14817ce0e FUN_14817ce0e body=566 status=ok
// SIG undefined FUN_14817ce0e(void)

void FUN_14817ce0e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar13;
  longlong lVar14;
  byte bVar15;
  undefined8 *puVar16;
  ulonglong uVar12;
  
  lVar3 = param_2[9];
  if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
    lVar4 = *(longlong *)(param_2[2] + 0x10);
    lVar14 = lVar3 + 0x48;
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      lVar14 = *(longlong *)(lVar3 + 0x50);
    }
    iVar10 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(lVar3 + 0x58) - 1U &
                               (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar14 = *(longlong *)(lVar3 + 0x10) + (longlong)iVar10 * 0x78;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar10 * 0x78) == lVar4)
        goto LAB_14817ce74;
        iVar10 = *(int *)(lVar14 + 0x70);
      } while (iVar10 != -1);
    }
  }
  lVar14 = 0;
LAB_14817ce74:
  uVar11 = *(int *)(param_2 + 10) + 0xfU & 0xfffffff0;
  uVar12 = (ulonglong)uVar11;
  FUN_148187d30();
  *(uint *)(param_2 + 10) = DAT_14cb3cdf4 + uVar11;
  uVar9 = *param_2;
  lVar3 = param_2[7];
  puVar1 = (undefined8 *)(uVar12 + lVar3);
  puVar16 = (undefined8 *)(uVar12 + lVar3 + 0x28);
  cVar5 = FUN_144b34a28(param_2,puVar16);
  puVar13 = (undefined8 *)(uVar12 + lVar3 + 0x30);
  bVar6 = FUN_144b34a28(param_2,puVar13);
  if ((lVar14 == 0) || (*(longlong *)(lVar14 + 0x38) == 0)) {
    *(undefined4 *)(puVar1 + 1) = DAT_14c9a52a0;
    *puVar1 = DAT_14c9a5298;
    puVar1[2] = DAT_14c846330;
    *(undefined4 *)(puVar1 + 3) = DAT_14c846338;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    uVar8 = FUN_144b3695c();
    puVar1[7] = uVar8;
    bVar15 = 1;
LAB_14817cfc0:
    if (cVar5 == '\0') goto LAB_14817cfd7;
    uVar8 = FUN_1481c8764(param_2[1],uVar9,2);
  }
  else {
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar14 + 0x18);
    *puVar1 = *(undefined8 *)(lVar14 + 0x10);
    iVar10 = *(int *)(lVar14 + 0x14);
    iVar2 = *(int *)(lVar14 + 0x18);
    *(float *)(puVar1 + 2) = 1.0 / (float)*(int *)(lVar14 + 0x10);
    *(float *)((longlong)puVar1 + 0x14) = 1.0 / (float)iVar10;
    *(float *)(puVar1 + 3) = 1.0 / (float)iVar2;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(lVar14 + 0x28);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(lVar14 + 0xc);
    puVar1[7] = *(undefined8 *)(lVar14 + 0x60);
    cVar7 = FUN_140248614(param_2);
    bVar15 = 1;
    if (cVar7 != '\0') {
      bVar15 = 1;
      if (bVar6 != 0) {
        uVar8 = FUN_14024867a(lVar14 + 0x38,uVar9);
        *puVar13 = uVar8;
        bVar15 = 0;
      }
      goto LAB_14817cfc0;
    }
    if (cVar5 == '\0') goto LAB_14817cfd7;
    uVar8 = FUN_140248794(lVar14 + 0x38,uVar9);
    bVar15 = 1;
  }
  *puVar16 = uVar8;
LAB_14817cfd7:
  if ((bVar6 & bVar15) == 1) {
    uVar9 = FUN_1481c8846(param_2[1],uVar9,1,2);
    *puVar13 = uVar9;
  }
  return;
}



// FUNCTION 14817d044 FUN_14817d044 body=247 status=ok
// SIG undefined FUN_14817d044(void)

void FUN_14817d044(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar1 = param_2[2];
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x78;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x78) == lVar1) {
          if ((((lVar5 + 8U & 0xfffffffffffffff7) != 0) && (*(char *)(lVar5 + 0x30) == '\0')) &&
             (*(longlong *)(lVar5 + 0x38) != 0)) {
            uVar2 = *param_2;
            local_28 = *(undefined4 *)(lVar5 + 0x2c);
            local_24 = local_28;
            local_20 = local_28;
            local_1c = local_28;
            uVar3 = FUN_14024867a(lVar5 + 0x38,uVar2);
            FUN_14042f6c6(uVar2,uVar3,&local_28,2);
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x70);
      } while (iVar4 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817d13c FUN_14817d13c body=1013 status=ok
// SIG undefined FUN_14817d13c(void)

void FUN_14817d13c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_5c;
  short local_54;
  undefined2 local_52;
  undefined4 local_50;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar5 = *(longlong *)(param_2[2] + 0x10);
    lVar13 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x50);
    }
    iVar18 = *(int *)(lVar13 + (ulonglong)
                               (*(int *)(param_1 + 0x58) - 1U &
                               (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
    if (iVar18 != -1) {
      do {
        lVar13 = *(longlong *)(param_1 + 0x10) + (longlong)iVar18 * 0x78;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar18 * 0x78) == lVar5)
        goto LAB_14817d172;
        iVar18 = *(int *)(lVar13 + 0x70);
      } while (iVar18 != -1);
    }
  }
  lVar13 = 0;
LAB_14817d172:
  lVar5 = *param_2;
  uVar8 = *(undefined8 *)(lVar5 + 0x18);
  iVar18 = *(int *)(lVar13 + 0x14) * *(int *)(lVar13 + 0x10) * *(int *)(lVar13 + 0x18) *
           *(int *)(lVar13 + 0xc);
  if (((*(char *)(lVar13 + 0x30) != '\0') || (*(longlong *)(lVar13 + 0x38) == 0)) &&
     (*(undefined1 *)(lVar13 + 0x30) = 0, iVar18 - 1U < DAT_14c762884)) {
    FUN_14011fb0c(lVar13 + 0x58);
    local_54 = (short)*(undefined4 *)(lVar13 + 0x24) * (short)*(undefined4 *)(lVar13 + 0x18);
    local_68 = DAT_14ca83a40;
    local_78 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
    uStack_70 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_5c = CONCAT44(*(int *)(lVar13 + 0x20) * *(int *)(lVar13 + 0x14),
                        *(int *)(lVar13 + 0x1c) * *(int *)(lVar13 + 0x10));
    local_80 = (undefined **)&DAT_00020008;
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_60 = 0;
    local_52 = 1;
    local_50 = 0x1d020101;
    local_4c = 0xff00;
    FUN_140218252(lVar13 + 0x38,*param_2,L"NiagaraRasterizationGrid3D::IntGrid");
  }
  if (*(int *)(lVar13 + 0x68) == 0) {
    local_78 = 0;
    local_80 = &PTR_FUN_14a3cb610;
    local_68 = local_68 & 0xffffff00;
    uStack_70 = (ulonglong)(*(int *)(lVar13 + 0xc) * 2 + 1);
    FUN_14070246c(&local_78,0);
    iVar14 = *(int *)(lVar13 + 0xc);
    if (0 < iVar14) {
      lVar17 = 0xc;
      uVar10 = 0;
      do {
        iVar14 = *(int *)(lVar13 + 0x1c);
        uVar11 = (int)uVar10 >> 0x1f;
        uVar15 = (ulonglong)uVar11 << 0x20 | uVar10 & 0xffffffff;
        uVar6 = (longlong)uVar15 / (longlong)iVar14;
        iVar3 = *(int *)(lVar13 + 0x18);
        iVar16 = (int)((longlong)((ulonglong)uVar11 << 0x20 | uVar10 & 0xffffffff) /
                      (longlong)(*(int *)(lVar13 + 0x20) * iVar14));
        iVar4 = *(int *)(lVar13 + 0x14);
        iVar12 = (int)((longlong)
                       ((ulonglong)(uint)((int)uVar6 >> 0x1f) << 0x20 | uVar6 & 0xffffffff) %
                      (longlong)*(int *)(lVar13 + 0x20));
        iVar14 = (int)((longlong)uVar15 % (longlong)iVar14);
        uVar15 = ((longlong)local_78 >> 0x18) + (longlong)&local_78;
        if ((local_78 & 1) == 0) {
          uVar15 = local_78;
        }
        *(float *)((uVar15 - 0xc) + lVar17) = (float)(*(int *)(lVar13 + 0x10) * iVar14);
        *(float *)((uVar15 - 8) + lVar17) = (float)(iVar4 * iVar12);
        *(float *)((uVar15 - 4) + lVar17) = (float)(iVar3 * iVar16);
        *(undefined4 *)(uVar15 + lVar17) = 0;
        iVar3 = *(int *)(lVar13 + 0x24);
        iVar4 = *(int *)(lVar13 + 0x20);
        uVar15 = ((longlong)local_78 >> 0x18) + (longlong)&local_78;
        if ((local_78 & 1) == 0) {
          uVar15 = local_78;
        }
        lVar9 = ((longlong)*(int *)(lVar13 + 0xc) + uVar10) * 0x10;
        *(float *)(uVar15 + lVar9) = (float)iVar14 * (1.0 / (float)*(int *)(lVar13 + 0x1c));
        *(float *)(uVar15 + 4 + lVar9) = (float)iVar12 * (1.0 / (float)iVar4);
        *(float *)(uVar15 + 8 + lVar9) = (float)iVar16 * (1.0 / (float)iVar3);
        *(undefined4 *)(uVar15 + 0xc + lVar9) = 0;
        uVar10 = uVar10 + 1;
        iVar14 = *(int *)(lVar13 + 0xc);
        lVar17 = lVar17 + 0x10;
      } while ((longlong)uVar10 < (longlong)iVar14);
    }
    local_90 = &local_80;
    uVar10 = (longlong)&local_78 + ((longlong)local_78 >> 0x18);
    if ((local_78 & 1) == 0) {
      uVar10 = local_78;
    }
    puVar1 = (undefined4 *)(uVar10 + (longlong)(iVar14 * 2) * 0x10);
    *puVar1 = 0x477fff00;
    puVar1[1] = 0x477fff00;
    puVar1[2] = 0x477fff00;
    puVar1[3] = 0x477fff00;
    local_a8 = (undefined4)uStack_70;
    local_98 = 1;
    local_a0 = 1;
    FUN_140661c88(lVar13 + 0x58,uVar8,L"Grid3D::PerAttributeData",0x10);
    if (local_78 != 0 && (local_78 & 1) == 0) {
      FUN_1400020a8();
    }
  }
  cVar7 = FUN_144b349a2(param_2);
  if (((cVar7 != '\0') && (iVar18 != 0)) && (*(char *)(lVar13 + 8) == '\x01')) {
    uVar2 = *(undefined4 *)(lVar13 + 0x2c);
    local_80 = (undefined **)CONCAT44(uVar2,uVar2);
    local_78 = CONCAT44(uVar2,uVar2);
    uVar8 = FUN_14024867a(lVar13 + 0x38,lVar5);
    FUN_14042f6c6(lVar5,uVar8,&local_80,2);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817d532 FUN_14817d532 body=318 status=ok
// SIG undefined FUN_14817d532(void)

void FUN_14817d532(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  undefined2 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = local_58;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x10);
    local_28 = param_1 + 0x20;
    local_30 = 0x100000000;
    local_20 = 0xffffffff;
    local_18 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_1449c0562(&local_30);
    }
    local_58 = local_20;
    uVar2 = local_58;
    local_50 = local_18;
    local_4c = local_14;
    local_68 = local_30;
    local_60 = local_28;
    local_38 = 0;
    local_58._4_4_ = (int)((ulonglong)local_20 >> 0x20);
    local_70 = plVar1;
    local_48 = plVar1;
    local_40 = plVar1;
    if (local_58._4_4_ < *(int *)(local_28 + 0x18)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        FUN_143abafd6(*local_70 + (longlong)iVar3 * 0x78 + 0x38);
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar3 = local_58._4_4_;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x18));
      uVar2 = local_58;
      if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
        FUN_14818874a(local_40,(int)local_40[1] - *(int *)((longlong)local_40 + 0x34));
        uVar2 = local_58;
      }
    }
  }
  local_58 = uVar2;
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817d708 FUN_14817d708 body=50 status=ok
// SIG undefined FUN_14817d708(void)

void FUN_14817d708(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_14819023e();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x78);
  }
  return;
}



// FUNCTION 14817d74a FUN_14817d74a body=224 status=ok
// SIG undefined FUN_14817d74a(void)

void FUN_14817d74a(undefined8 param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  uint *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1404e2ce0(local_28);
  FUN_144a76cd4(&local_38,param_2);
  if (*(longlong *)(local_20 + 6) == 0) {
    if ((char)local_20[4] == '\0') {
      iVar2 = 1;
    }
    else {
      uVar3 = *local_20;
      if ((int)*local_20 < (int)local_20[1]) {
        uVar3 = local_20[1];
      }
      uVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      iVar2 = 1;
      if (uVar3 != 0) {
        iVar2 = (uVar1 ^ 0xffffffe0) + 0x21;
      }
    }
  }
  else {
    iVar2 = *(int *)(*(longlong *)(local_20 + 6) + 0x164);
  }
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      piVar5 = local_38 + local_30;
      *local_38 = iVar2;
      iVar4 = iVar4 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_38 = piVar5;
    } while (iVar4 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817d82c FUN_14817d82c body=122 status=ok
// SIG undefined FUN_14817d82c(void)

undefined4 FUN_14817d82c(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_1481192e4();
  uVar3 = 0;
  if ((param_2 != 0) && (cVar1 != '\0')) {
    if ((((*(longlong *)(param_1 + 0x50) == *(longlong *)(param_2 + 0x50)) &&
         ((((*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58) &&
            (*(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x40))) &&
           (*(int *)(param_2 + 0x44) == *(int *)(param_1 + 0x44))) &&
          ((*(char *)(param_2 + 0x48) == *(char *)(param_1 + 0x48) &&
           (*(char *)(param_2 + 0x49) == *(char *)(param_1 + 0x49))))))) &&
        (*(char *)(param_2 + 0x4a) == *(char *)(param_1 + 0x4a))) &&
       ((*(char *)(param_2 + 0x4b) == *(char *)(param_1 + 0x4b) &&
        (bVar2 = *(byte *)(param_1 + 0x4c) ^ *(byte *)(param_2 + 0x4c), (bVar2 & 1) == 0)))) {
      uVar3 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x44) >> 8),(bVar2 & 2) == 0);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14817d8a6 FUN_14817d8a6 body=135 status=ok
// SIG undefined FUN_14817d8a6(void)

ulonglong FUN_14817d8a6(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  
  bVar2 = FUN_1414db5a0();
  bVar2 = param_2 != 0 & bVar2;
  if (bVar2 == 1) {
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)(param_2 + 0x49) = *(undefined1 *)(param_1 + 0x49);
    *(undefined1 *)(param_2 + 0x4a) = *(undefined1 *)(param_1 + 0x4a);
    *(undefined1 *)(param_2 + 0x4b) = *(undefined1 *)(param_1 + 0x4b);
    bVar3 = *(byte *)(param_1 + 0x4c) & 1;
    bVar1 = *(byte *)(param_2 + 0x4c);
    *(byte *)(param_2 + 0x4c) = bVar1 & 0xfe | bVar3;
    *(byte *)(param_2 + 0x4c) = bVar1 & 0xfc | bVar3 | *(byte *)(param_1 + 0x4c) & 2;
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    FUN_1447a122a(param_2 + 0x60,param_1 + 0x60);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff;
}



// FUNCTION 14817d92e FUN_14817d92e body=69 status=ok
// SIG undefined FUN_14817d92e(void)

void FUN_14817d92e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14024cd4c(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = DAT_14cb3c6c8;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = DAT_14cb3c6c0;
  return;
}



// FUNCTION 14817d974 FUN_14817d974 body=93 status=ok
// SIG undefined FUN_14817d974(void)

undefined8
FUN_14817d974(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*param_2 != 0) && (plVar2 = (longlong *)FUN_144741050(param_2 + 1), *plVar2 != 0)) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_2 != DAT_14cb3c6c0) {
      return 0;
    }
    if ((int)param_2[1] != DAT_14cb3c6c8) {
      return 0;
    }
    lVar1 = *(longlong *)(param_3 + 0x18);
    if (lVar1 != 0) {
      *param_5 = lVar1;
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14817d9d2 FUN_14817d9d2 body=180 status=ok
// SIG undefined FUN_14817d9d2(void)

void FUN_14817d9d2(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3c6d8) {
    FUN_144b3d300(&DAT_14cb3c6d8);
    if (DAT_14cb3c6d8 == -1) {
      FUN_1446f470e(&DAT_14cb3c6d0,L"RenderTarget",1);
      _Init_thread_footer(&DAT_14cb3c6d8);
    }
  }
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14024cd4c(param_2,iVar2);
  }
  puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0xc);
  puVar4 = puVar1 + 1;
  *puVar1 = DAT_14cb3c6d0;
  uVar3 = FUN_144830b78(puVar4,&DAT_14cb42160);
  *(undefined4 *)puVar4 = uVar3;
  return;
}



// FUNCTION 14817da86 FUN_14817da86 body=303 status=ok
// SIG undefined FUN_14817da86(void)

undefined8
FUN_14817da86(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,int *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((param_4 != 0) && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4))) {
    lVar5 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 == (longlong *)0x0) {
            return 0;
          }
          lVar5 = plVar1[1];
          if (lVar5 == 0) {
            return 0;
          }
          if (*(longlong *)(lVar5 + 0x18) == 0) {
            return 0;
          }
          lVar3 = FUN_1447b4020();
          if (lVar3 != 0) {
            uVar4 = FUN_1447b4020(*(undefined8 *)(lVar5 + 0x18));
            FUN_1401e0402(param_4,(double)*param_5,(double)param_5[1],
                          (double)(param_5[2] - *param_5),(double)(param_5[3] - param_5[1]),0,
                          0x3f800000,0x3f800000,0,&DAT_149e1e2f8,uVar4,0);
            return 1;
          }
          return 0;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14817dbb6 FUN_14817dbb6 body=110 status=ok
// SIG undefined FUN_14817dbb6(void)

longlong FUN_14817dbb6(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14817dc25(param_2);
    if (DAT_14c762888 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_1401a700c(&local_1c,0x105);
      uVar2 = (ulonglong)local_1c;
    }
    *(ulonglong *)(lVar1 + 0x28) = uVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817dc25 FUN_14817dc25 body=148 status=ok
// SIG undefined FUN_14817dc25(void)

undefined8 FUN_14817dc25(undefined8 param_1)

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
  uVar1 = FUN_145b0ffac();
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



// FUNCTION 14817dcba FUN_14817dcba body=135 status=ok
// SIG undefined FUN_14817dcba(void)

void FUN_14817dcba(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148188d8c(param_1,iVar1);
    }
    FUN_148188d37((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_148188e20(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_148188e86(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14817dd45 FUN_14817dd45 body=815 status=ok
// SIG undefined FUN_14817dd45(void)

void FUN_14817dd45(float *param_1,byte param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (1 < param_2 - 0xf) {
    if (param_2 != 10) {
      if (param_2 != 9) {
        return;
      }
      fVar2 = ABS(*param_1);
      if ((uint)fVar2 < 0x47800000) {
        if ((uint)fVar2 < 0x38800000) {
          fVar1 = fVar2 + 0.5;
        }
        else {
          fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
          fVar1 = fVar2;
        }
      }
      else {
        fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
      }
      iVar3 = movmskps(fVar2,ZEXT416((uint)*param_1));
      *(ushort *)param_3 = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
      fVar2 = ABS(param_1[1]);
      if ((uint)fVar2 < 0x47800000) {
        if ((uint)fVar2 < 0x38800000) {
          fVar1 = fVar2 + 0.5;
        }
        else {
          fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
          fVar1 = fVar2;
        }
      }
      else {
        fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
      }
      iVar3 = movmskps(fVar2,ZEXT416((uint)param_1[1]));
      *(ushort *)((longlong)param_3 + 2) = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
      fVar2 = ABS(param_1[2]);
      if ((uint)fVar2 < 0x47800000) {
        if ((uint)fVar2 < 0x38800000) {
          fVar1 = fVar2 + 0.5;
        }
        else {
          fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
          fVar1 = fVar2;
        }
      }
      else {
        fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
      }
      iVar3 = movmskps(fVar2,ZEXT416((uint)param_1[2]));
      *(ushort *)(param_3 + 1) = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
    }
    fVar2 = ABS(*param_1);
    if ((uint)fVar2 < 0x47800000) {
      if ((uint)fVar2 < 0x38800000) {
        fVar1 = fVar2 + 0.5;
      }
      else {
        fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
        fVar1 = fVar2;
      }
    }
    else {
      fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
    }
    iVar3 = movmskps(fVar2,ZEXT416((uint)*param_1));
    *(ushort *)param_3 = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
    fVar2 = ABS(param_1[1]);
    if ((uint)fVar2 < 0x47800000) {
      if ((uint)fVar2 < 0x38800000) {
        fVar1 = fVar2 + 0.5;
      }
      else {
        fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
        fVar1 = fVar2;
      }
    }
    else {
      fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
    }
    iVar3 = movmskps(fVar2,ZEXT416((uint)param_1[1]));
    *(ushort *)((longlong)param_3 + 2) = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
    fVar2 = ABS(param_1[2]);
    if ((uint)fVar2 < 0x47800000) {
      if ((uint)fVar2 < 0x38800000) {
        fVar1 = fVar2 + 0.5;
      }
      else {
        fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
        fVar1 = fVar2;
      }
    }
    else {
      fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
    }
    iVar3 = movmskps(fVar2,ZEXT416((uint)param_1[2]));
    *(ushort *)(param_3 + 1) = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
    fVar2 = ABS(param_1[3]);
    if ((uint)fVar2 < 0x47800000) {
      if ((uint)fVar2 < 0x38800000) {
        fVar1 = fVar2 + 0.5;
      }
      else {
        fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
        fVar1 = fVar2;
      }
    }
    else {
      fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
    }
    iVar3 = movmskps(fVar2,ZEXT416((uint)param_1[3]));
    *(ushort *)((longlong)param_3 + 6) = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
  }
  *param_3 = *param_1;
  return;
}



// FUNCTION 14817e084 FUN_14817e084 body=753 status=ok
// SIG undefined FUN_14817e084(void)

void FUN_14817e084(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3c718) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
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
    *local_30 = &PTR_FUN_14add6280;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14817e376;
  }
  else if (lVar1 == DAT_14cb3c710) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
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
    *local_30 = &PTR_FUN_14add6280;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14817e46a;
  }
  else if (lVar1 == DAT_14cb3c720) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
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
    *local_30 = &PTR_FUN_14add6280;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14817e6a4;
  }
  else {
    if (lVar1 != DAT_14cb3c728) goto LAB_14817e14e;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
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
    *local_30 = &PTR_FUN_14add6280;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_143a51aa2;
  }
  puVar4[4] = pcVar2;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_14817e14e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817e376 FUN_14817e376 body=242 status=ok
// SIG undefined FUN_14817e376(void)

void FUN_14817e376(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  undefined4 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14817ecdc(local_20);
  FUN_144a76cd4(&local_30,param_2);
  FUN_144a76cd4(&local_40,param_2);
  FUN_144a76cd4(&local_50,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *local_18;
      puVar2 = local_40 + local_38;
      *local_40 = local_18[1];
      puVar3 = local_50 + local_48;
      *local_50 = local_18[2];
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_50 = puVar3;
      local_40 = puVar2;
      local_30 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817e46a FUN_14817e46a body=569 status=ok
// SIG undefined FUN_14817e46a(void)

void FUN_14817e46a(undefined8 param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_c8 [32];
  int *local_a8;
  int local_a0;
  int *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  int *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14817ecdc(local_40);
  iVar8 = 0;
  local_48 = 0;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  FUN_144a98d08(&local_58,param_2);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a98d08(&local_78,param_2);
  local_88 = 0;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  FUN_140126e42(&local_a8,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  iVar9 = *piVar6;
  if (0 < iVar9) {
    do {
      piVar6 = local_58 + local_48;
      iVar3 = *local_58;
      piVar1 = local_78 + local_68;
      iVar4 = *local_78;
      piVar2 = local_98 + local_88;
      if (local_38 == (int *)0x0) {
        *local_a8 = 0;
        local_a8 = local_a8 + local_a0;
      }
      else {
        iVar5 = *local_98;
        piVar7 = local_a8 + local_a0;
        *local_a8 = -(uint)((0 < iVar5 && iVar9 == 1) && (0 < iVar4 && 0 < iVar3));
        local_a8 = piVar7;
        if ((0 < iVar5 && iVar9 == 1) && (0 < iVar4 && 0 < iVar3)) {
          iVar9 = (int)((float)iVar3 * DAT_14c762894);
          if (DAT_14ca84e40 <= (int)((float)iVar3 * DAT_14c762894)) {
            iVar9 = DAT_14ca84e40;
          }
          if (iVar9 < 2) {
            iVar9 = 1;
          }
          *local_38 = iVar9;
          iVar9 = (int)((float)iVar4 * DAT_14c762894);
          if (DAT_14ca84e40 <= (int)((float)iVar4 * DAT_14c762894)) {
            iVar9 = DAT_14ca84e40;
          }
          if (iVar9 < 2) {
            iVar9 = 1;
          }
          local_38[1] = iVar9;
          iVar9 = DAT_14ca84e40;
          if (iVar5 < DAT_14ca84e40) {
            iVar9 = iVar5;
          }
          if (iVar9 < 2) {
            iVar9 = 1;
          }
          local_38[2] = iVar9;
        }
      }
      iVar8 = iVar8 + 1;
      piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar7 = (int *)(param_2 + 0x3c);
      }
      iVar9 = *piVar7;
      local_98 = piVar2;
      local_78 = piVar1;
      local_58 = piVar6;
    } while (iVar8 < iVar9);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817e6a4 FUN_14817e6a4 body=152 status=ok
// SIG undefined FUN_14817e6a4(void)

void FUN_14817e6a4(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14817ecdc(local_20);
  FUN_144a76cd4(&local_30,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = 1;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
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



// FUNCTION 14817e73e FUN_14817e73e body=114 status=ok
// SIG undefined FUN_14817e73e(void)

undefined4 FUN_14817e73e(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_1481192e4();
  uVar3 = 0;
  if ((param_2 != 0) && (cVar1 != '\0')) {
    if ((((*(longlong *)(param_1 + 0x48) == *(longlong *)(param_2 + 0x48)) &&
         (((*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50) &&
           (*(int *)(param_2 + 0x38) == *(int *)(param_1 + 0x38))) &&
          (*(int *)(param_2 + 0x3c) == *(int *)(param_1 + 0x3c))))) &&
        (((*(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x40) &&
          (*(char *)(param_2 + 0x44) == *(char *)(param_1 + 0x44))) &&
         (*(char *)(param_2 + 0x45) == *(char *)(param_1 + 0x45))))) &&
       (bVar2 = *(byte *)(param_1 + 0x46) ^ *(byte *)(param_2 + 0x46), (bVar2 & 1) == 0)) {
      uVar3 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x40) >> 8),(bVar2 & 2) == 0);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14817e7b0 FUN_14817e7b0 body=129 status=ok
// SIG undefined FUN_14817e7b0(void)

ulonglong FUN_14817e7b0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  
  bVar2 = FUN_1414db5a0();
  bVar2 = param_2 != 0 & bVar2;
  if (bVar2 == 1) {
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(param_2 + 0x44) = *(undefined1 *)(param_1 + 0x44);
    *(undefined1 *)(param_2 + 0x45) = *(undefined1 *)(param_1 + 0x45);
    bVar3 = *(byte *)(param_1 + 0x46) & 1;
    bVar1 = *(byte *)(param_2 + 0x46);
    *(byte *)(param_2 + 0x46) = bVar1 & 0xfe | bVar3;
    *(byte *)(param_2 + 0x46) = bVar1 & 0xfc | bVar3 | *(byte *)(param_1 + 0x46) & 2;
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    FUN_1447a122a(param_2 + 0x58,param_1 + 0x58);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff;
}



// FUNCTION 14817e854 FUN_14817e854 body=994 status=ok
// SIG undefined FUN_14817e854(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14817e854(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_a0;
  undefined8 *local_98;
  longlong local_88;
  undefined2 *local_80;
  int local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  int local_68;
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined2 uStack_5d;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 local_56;
  longlong local_50;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_2[9];
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar6 = *(longlong *)(param_2[2] + 0x10);
    lVar7 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x50);
    }
    iVar10 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(lVar2 + 0x58) - 1U &
                              (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar7 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar10 * 0x50;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar10 * 0x50) == lVar6)
        goto LAB_14817e8d2;
        iVar10 = *(int *)(lVar7 + 0x48);
      } while (iVar10 != -1);
    }
  }
  lVar7 = 0;
LAB_14817e8d2:
  puVar12 = (undefined8 *)(lVar7 + 8);
  if (lVar7 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  lVar2 = *param_2;
  if ((puVar12[5] == 0) && (puVar12[4] != 0)) {
    local_50 = FUN_14473c272(lVar2,puVar12 + 4,0);
    puVar12[5] = local_50;
    local_60 = 0;
    uStack_5f = 0;
    local_56 = 0;
    uStack_59 = 0;
    uStack_58 = 0;
    uStack_5d = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    uStack_5e = *(undefined1 *)(local_50 + 0x90);
    if ((*(char *)(local_50 + 0x92) == '\x04') || (*(char *)(local_50 + 0x92) == '\x01')) {
      uStack_5a = (undefined1)*(undefined2 *)(local_50 + 0x8e);
      uStack_59 = (undefined1)((ushort)*(undefined2 *)(local_50 + 0x8e) >> 8);
    }
    uVar5 = FUN_144aaac76(lVar2 + 0x198,lVar2 + 0x70,local_50 + 8,&local_60);
    puVar12[6] = uVar5;
    local_50 = puVar12[5];
    local_60 = *(undefined1 *)(local_50 + 0x94);
    uStack_58 = 0;
    uStack_5f = 0;
    uStack_5e = 0;
    uStack_5d = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    local_a8 = &local_70;
    local_70 = 0;
    uVar5 = FUN_144a96e92(lVar2 + 0x198,lVar2 + 0x70,local_50 + 8,&local_60);
    puVar12[7] = uVar5;
    FUN_14022b18a(lVar2,puVar12[5]);
    lVar6 = puVar12[5];
    if (lVar6 != 0) {
      lVar7 = param_2[1];
      iVar10 = *(int *)(lVar7 + 0x260);
      *(uint *)(lVar7 + 0x260) = iVar10 + 1U;
      if (*(uint *)(lVar7 + 0x264) < iVar10 + 1U) {
        FUN_144904f42((longlong *)(lVar7 + 600),iVar10);
      }
      lVar7 = *(longlong *)(lVar7 + 600);
      lVar14 = (longlong)iVar10 * 0x10;
      *(longlong *)(lVar7 + lVar14) = lVar6;
      *(undefined4 *)(lVar7 + 8 + lVar14) = 0x70;
      *(undefined1 *)(lVar7 + 0xc + lVar14) = 1;
    }
  }
  uVar8 = (int)param_2[10] + 0xfU & 0xfffffff0;
  uVar9 = (ulonglong)uVar8;
  local_88 = lVar2;
  FUN_14818930e();
  *(uint *)(param_2 + 10) = uVar8 + _DAT_14cb3cf1c;
  lVar2 = param_2[7];
  puVar1 = (undefined8 *)(lVar2 + uVar9);
  puVar13 = puVar1 + 2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar12 + 1);
  *puVar1 = *puVar12;
  *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)puVar12 + 0xc);
  cVar3 = FUN_144b34a28(param_2,puVar13);
  cVar4 = FUN_144b34a28(param_2,lVar2 + uVar9 + 0x18);
  if (cVar3 == '\0') {
    if (cVar4 == '\0') goto LAB_14817ea68;
    if (puVar12[4] == 0) goto LAB_14817e97d;
    *(undefined1 *)((longlong)puVar12 + 0x11) = 1;
    uVar5 = puVar12[6];
  }
  else {
    if (puVar12[4] == 0) {
      uVar5 = FUN_1481c8846(param_2[1],local_88,0x13,1);
      *puVar13 = uVar5;
    }
    else {
      *puVar13 = puVar12[7];
      *(undefined1 *)(puVar12 + 2) = 1;
    }
    if (cVar4 == '\0') goto LAB_14817ea68;
LAB_14817e97d:
    uVar5 = DAT_14cb0d2b0;
    FUN_148119330(param_2,&local_80);
    puVar15 = &DAT_149dfb77a;
    puVar11 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar11 = local_80;
    }
    FUN_140002266(&local_70,
                  L"RenderTarget is read and wrote in the same stage, this is not allowed, read will be invalid. (%s)"
                  ,puVar11);
    if (local_68 != 0) {
      puVar15 = (undefined2 *)CONCAT71(uStack_6f,local_70);
    }
    FUN_140056680(&local_60,puVar15);
    local_98 = &DAT_14c846320;
    local_a0 = 1;
    local_a8 = &local_60;
    FUN_147d80866(uVar5,param_1,0x3f800000,0xffffffff);
    if (CONCAT17(uStack_59,
                 CONCAT16(uStack_5a,
                          CONCAT15(uStack_5b,
                                   CONCAT23(uStack_5d,
                                            CONCAT12(uStack_5e,CONCAT11(uStack_5f,local_60)))))) !=
        0) {
      FUN_1400020a8();
    }
    lVar6 = local_88;
    if (CONCAT71(uStack_6f,local_70) != 0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar5 = FUN_1481c8764(param_2[1],lVar6,1);
  }
  *(undefined8 *)(lVar2 + uVar9 + 0x18) = uVar5;
  lVar6 = puVar12[3];
  if (puVar12[3] == 0) {
    lVar6 = DAT_14c9c0d80;
  }
  *(longlong *)(lVar2 + uVar9 + 0x20) = lVar6;
LAB_14817ea68:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817ec38 FUN_14817ec38 body=69 status=ok
// SIG undefined FUN_14817ec38(void)

void FUN_14817ec38(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14024cd4c(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = DAT_14cb3c758;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = DAT_14cb3c750;
  return;
}



// FUNCTION 14817ec7e FUN_14817ec7e body=93 status=ok
// SIG undefined FUN_14817ec7e(void)

undefined8
FUN_14817ec7e(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*param_2 != 0) && (plVar2 = (longlong *)FUN_144741050(param_2 + 1), *plVar2 != 0)) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_2 != DAT_14cb3c750) {
      return 0;
    }
    if ((int)param_2[1] != DAT_14cb3c758) {
      return 0;
    }
    lVar1 = *(longlong *)(param_3 + 0x18);
    if (lVar1 != 0) {
      *param_5 = lVar1;
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14817ecdc FUN_14817ecdc body=148 status=ok
// SIG undefined FUN_14817ecdc(void)

void FUN_14817ecdc(int *param_1,char *param_2)

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



// FUNCTION 14817ed70 FUN_14817ed70 body=138 status=ok
// SIG undefined FUN_14817ed70(void)

undefined8 * FUN_14817ed70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  _Src = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],_Src,(longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 14817edfa FUN_14817edfa body=198 status=ok
// SIG undefined FUN_14817edfa(void)

void FUN_14817edfa(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
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
        lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x50;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x50) == lVar2) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if (*(char *)(lVar1 + 0x18) == '\x01') {
            (**(code **)(*(longlong *)param_2[1] + 0x128))
                      ((longlong *)param_2[1],*param_2,
                       *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 8),
                       CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar1 + 0x19)),1);
          }
          *(undefined2 *)(lVar1 + 0x18) = 0;
          *(undefined8 *)(lVar1 + 0x30) = 0;
          *(undefined8 *)(lVar1 + 0x38) = 0;
          *(undefined8 *)(lVar1 + 0x40) = 0;
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x48);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14817ef72 FUN_14817ef72 body=753 status=ok
// SIG undefined FUN_14817ef72(void)

void FUN_14817ef72(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3c830) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
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
    *local_30 = &PTR_FUN_14add6440;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14817f264;
  }
  else if (lVar1 == DAT_14cb3c828) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
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
    *local_30 = &PTR_FUN_14add6440;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14817f302;
  }
  else if (lVar1 == DAT_14cb3c838) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
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
    *local_30 = &PTR_FUN_14add6440;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14817f44c;
  }
  else {
    if (lVar1 != DAT_14cb3c840) goto LAB_14817f03c;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
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
    *local_30 = &PTR_FUN_14add6440;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_143a52ca4;
  }
  puVar4[4] = pcVar2;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_14817f03c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817f264 FUN_14817f264 body=156 status=ok
// SIG undefined FUN_14817f264(void)

void FUN_14817f264(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  undefined4 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14817fa7a(local_20);
  FUN_144a76cd4(&local_30,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *local_18;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
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



// FUNCTION 14817f302 FUN_14817f302 body=328 status=ok
// SIG undefined FUN_14817f302(void)

void FUN_14817f302(undefined8 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_40;
  int *local_38;
  undefined8 uStack_30;
  int local_28;
  undefined1 local_20 [8];
  int *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14817fa7a(local_20);
  local_38 = (int *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a98d08(&local_38,param_2);
  FUN_140126e42(&local_48,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  iVar4 = *piVar3;
  if (0 < iVar4) {
    iVar2 = 0;
    do {
      piVar3 = local_38 + local_28;
      if (local_18 == (int *)0x0) {
        *local_48 = 0;
        local_48 = local_48 + local_40;
      }
      else {
        iVar1 = *local_38;
        piVar5 = local_48 + local_40;
        *local_48 = -(uint)(0 < iVar1 && iVar4 == 1);
        local_48 = piVar5;
        if (0 < iVar1 && iVar4 == 1) {
          iVar4 = (int)((float)iVar1 * DAT_14c762894);
          if (DAT_14ca84e64 <= (int)((float)iVar1 * DAT_14c762894)) {
            iVar4 = DAT_14ca84e64;
          }
          if (iVar4 < 2) {
            iVar4 = 1;
          }
          *local_18 = iVar4;
        }
      }
      iVar2 = iVar2 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      iVar4 = *piVar5;
      local_38 = piVar3;
    } while (iVar2 < iVar4);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14817f44c FUN_14817f44c body=181 status=ok
// SIG undefined FUN_14817f44c(void)

void FUN_14817f44c(undefined8 param_1,char *param_2)

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
  FUN_14817fa7a(local_28);
  FUN_144a76cd4(&local_38,param_2);
  if (*(longlong *)(local_20 + 0x10) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(local_20 + 0x10) + 0x158);
  }
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar3 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = uVar2;
      iVar3 = iVar3 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
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



// FUNCTION 14817f502 FUN_14817f502 body=98 status=ok
// SIG undefined FUN_14817f502(void)

undefined4 FUN_14817f502(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_1481192e4();
  uVar3 = 0;
  if ((param_2 != 0) && (cVar1 != '\0')) {
    if (((*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40)) &&
        (((*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48) &&
          (*(int *)(param_2 + 0x38) == *(int *)(param_1 + 0x38))) &&
         (*(char *)(param_2 + 0x3c) == *(char *)(param_1 + 0x3c))))) &&
       ((*(char *)(param_2 + 0x3d) == *(char *)(param_1 + 0x3d) &&
        (bVar2 = *(byte *)(param_1 + 0x3e) ^ *(byte *)(param_2 + 0x3e), (bVar2 & 1) == 0)))) {
      uVar3 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x38) >> 8),(bVar2 & 2) == 0);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14817f564 FUN_14817f564 body=121 status=ok
// SIG undefined FUN_14817f564(void)

ulonglong FUN_14817f564(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  
  bVar2 = FUN_1414db5a0();
  bVar2 = param_2 != 0 & bVar2;
  if (bVar2 == 1) {
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)(param_2 + 0x3c) = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)(param_2 + 0x3d) = *(undefined1 *)(param_1 + 0x3d);
    bVar3 = *(byte *)(param_1 + 0x3e) & 1;
    bVar1 = *(byte *)(param_2 + 0x3e);
    *(byte *)(param_2 + 0x3e) = bVar1 & 0xfe | bVar3;
    *(byte *)(param_2 + 0x3e) = bVar1 & 0xfc | bVar3 | *(byte *)(param_1 + 0x3e) & 2;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    FUN_1447a122a(param_2 + 0x50,param_1 + 0x50);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff;
}



// FUNCTION 14817f600 FUN_14817f600 body=981 status=ok
// SIG undefined FUN_14817f600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14817f600(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_a0;
  undefined8 *local_98;
  longlong local_88;
  undefined2 *local_80;
  int local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  int local_68;
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined2 uStack_5d;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 local_56;
  longlong local_50;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_2[9];
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar6 = *(longlong *)(param_2[2] + 0x10);
    lVar11 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar11 = *(longlong *)(lVar2 + 0x50);
    }
    iVar10 = *(int *)(lVar11 + (ulonglong)
                               (*(int *)(lVar2 + 0x58) - 1U &
                               (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        plVar7 = (longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar10 * 0x48);
        if (*plVar7 == lVar6) goto LAB_14817f67e;
        iVar10 = (int)plVar7[8];
      } while (iVar10 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_14817f67e:
  plVar13 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  lVar2 = *param_2;
  if ((plVar13[4] == 0) && (plVar13[3] != 0)) {
    local_50 = FUN_14473c272(lVar2,plVar13 + 3,0);
    plVar13[4] = local_50;
    local_60 = 0;
    uStack_5f = 0;
    local_56 = 0;
    uStack_59 = 0;
    uStack_58 = 0;
    uStack_5d = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    uStack_5e = *(undefined1 *)(local_50 + 0x90);
    if ((*(char *)(local_50 + 0x92) == '\x04') || (*(char *)(local_50 + 0x92) == '\x01')) {
      uStack_5a = (undefined1)*(undefined2 *)(local_50 + 0x8e);
      uStack_59 = (undefined1)((ushort)*(undefined2 *)(local_50 + 0x8e) >> 8);
    }
    lVar6 = FUN_144aaac76(lVar2 + 0x198,lVar2 + 0x70,local_50 + 8,&local_60);
    plVar13[5] = lVar6;
    local_50 = plVar13[4];
    local_60 = *(undefined1 *)(local_50 + 0x94);
    uStack_58 = 0;
    uStack_5f = 0;
    uStack_5e = 0;
    uStack_5d = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    local_a8 = &local_70;
    local_70 = 0;
    lVar6 = FUN_144a96e92(lVar2 + 0x198,lVar2 + 0x70,local_50 + 8,&local_60);
    plVar13[6] = lVar6;
    FUN_14022b18a(lVar2,plVar13[4]);
    lVar6 = plVar13[4];
    if (lVar6 != 0) {
      lVar11 = param_2[1];
      iVar10 = *(int *)(lVar11 + 0x260);
      *(uint *)(lVar11 + 0x260) = iVar10 + 1U;
      if (*(uint *)(lVar11 + 0x264) < iVar10 + 1U) {
        FUN_144904f42((longlong *)(lVar11 + 600),iVar10);
      }
      lVar11 = *(longlong *)(lVar11 + 600);
      lVar14 = (longlong)iVar10 * 0x10;
      *(longlong *)(lVar11 + lVar14) = lVar6;
      *(undefined4 *)(lVar11 + 8 + lVar14) = 0x70;
      *(undefined1 *)(lVar11 + 0xc + lVar14) = 1;
    }
  }
  uVar8 = (int)param_2[10] + 0xfU & 0xfffffff0;
  uVar9 = (ulonglong)uVar8;
  local_88 = lVar2;
  FUN_14818a1b8();
  *(uint *)(param_2 + 10) = uVar8 + _DAT_14cb3cfbc;
  lVar2 = param_2[7];
  puVar1 = (undefined4 *)(lVar2 + uVar9);
  plVar7 = (longlong *)(puVar1 + 2);
  *puVar1 = (int)*plVar13;
  puVar1[1] = *(undefined4 *)((longlong)plVar13 + 4);
  cVar4 = FUN_144b34a28(param_2,plVar7);
  cVar5 = FUN_144b34a28(param_2,lVar2 + uVar9 + 0x10);
  if (cVar4 == '\0') {
    if (cVar5 == '\0') goto LAB_14817f80c;
    if (plVar13[3] == 0) goto LAB_14817f721;
    *(undefined1 *)((longlong)plVar13 + 9) = 1;
    lVar6 = plVar13[5];
  }
  else {
    if (plVar13[3] == 0) {
      lVar6 = FUN_1481c8846(param_2[1],local_88,0x13,3);
      *plVar7 = lVar6;
    }
    else {
      *plVar7 = plVar13[6];
      *(undefined1 *)(plVar13 + 1) = 1;
    }
    if (cVar5 == '\0') goto LAB_14817f80c;
LAB_14817f721:
    uVar3 = DAT_14cb0d2b0;
    FUN_148119330(param_2,&local_80);
    puVar15 = &DAT_149dfb77a;
    puVar12 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar12 = local_80;
    }
    FUN_140002266(&local_70,
                  L"RenderTarget is read and wrote in the same stage, this is not allowed, read will be invalid. (%s)"
                  ,puVar12);
    if (local_68 != 0) {
      puVar15 = (undefined2 *)CONCAT71(uStack_6f,local_70);
    }
    FUN_140056680(&local_60,puVar15);
    local_98 = &DAT_14c846320;
    local_a0 = 1;
    local_a8 = &local_60;
    FUN_147d80866(uVar3,param_1,0x3f800000,0xffffffff);
    if (CONCAT17(uStack_59,
                 CONCAT16(uStack_5a,
                          CONCAT15(uStack_5b,
                                   CONCAT23(uStack_5d,
                                            CONCAT12(uStack_5e,CONCAT11(uStack_5f,local_60)))))) !=
        0) {
      FUN_1400020a8();
    }
    lVar6 = local_88;
    if (CONCAT71(uStack_6f,local_70) != 0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar6 = FUN_1481c8764(param_2[1],lVar6,3);
  }
  *(longlong *)(lVar2 + uVar9 + 0x10) = lVar6;
  lVar6 = plVar13[2];
  if (plVar13[2] == 0) {
    lVar6 = DAT_14c9c0d80;
  }
  *(longlong *)(lVar2 + uVar9 + 0x18) = lVar6;
LAB_14817f80c:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14817f9d6 FUN_14817f9d6 body=69 status=ok
// SIG undefined FUN_14817f9d6(void)

void FUN_14817f9d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14024cd4c(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = DAT_14cb3c868;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = DAT_14cb3c860;
  return;
}



// FUNCTION 14817fa1c FUN_14817fa1c body=93 status=ok
// SIG undefined FUN_14817fa1c(void)

undefined8
FUN_14817fa1c(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*param_2 != 0) && (plVar2 = (longlong *)FUN_144741050(param_2 + 1), *plVar2 != 0)) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_2 != DAT_14cb3c860) {
      return 0;
    }
    if ((int)param_2[1] != DAT_14cb3c868) {
      return 0;
    }
    lVar1 = *(longlong *)(param_3 + 0x10);
    if (lVar1 != 0) {
      *param_5 = lVar1;
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14817fa7a FUN_14817fa7a body=148 status=ok
// SIG undefined FUN_14817fa7a(void)

void FUN_14817fa7a(int *param_1,char *param_2)

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



// FUNCTION 14817fb0e FUN_14817fb0e body=138 status=ok
// SIG undefined FUN_14817fb0e(void)

undefined8 * FUN_14817fb0e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  param_1[2] = param_2[2];
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  _Src = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  return param_1;
}



// FUNCTION 14817fb98 FUN_14817fb98 body=193 status=ok
// SIG undefined FUN_14817fb98(void)

void FUN_14817fb98(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
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
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x48);
        if (*plVar1 == lVar2) {
          if (((ulonglong)(plVar1 + 1) & 0xfffffffffffffff7) == 0) {
            return;
          }
          if ((char)plVar1[2] == '\x01') {
            (**(code **)(*(longlong *)param_2[1] + 0x128))
                      ((longlong *)param_2[1],*param_2,*(undefined8 *)(plVar1[4] + 8),
                       CONCAT71((int7)((ulonglong)lVar4 >> 8),
                                *(undefined1 *)((longlong)plVar1 + 0x11)),1);
          }
          *(undefined2 *)(plVar1 + 2) = 0;
          plVar1[5] = 0;
          plVar1[6] = 0;
          plVar1[7] = 0;
          return;
        }
        iVar3 = (int)plVar1[8];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14817fd24 FUN_14817fd24 body=38 status=ok
// SIG undefined FUN_14817fd24(void)

undefined8 FUN_14817fd24(undefined8 param_1,int param_2)

{
  FUN_14818ad30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14817fd4a FUN_14817fd4a body=38 status=ok
// SIG undefined FUN_14817fd4a(void)

undefined8 FUN_14817fd4a(undefined8 param_1,int param_2)

{
  FUN_148175278();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14817fdaa FUN_14817fdaa body=45 status=ok
// SIG undefined FUN_14817fdaa(void)

longlong FUN_14817fdaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140e48f92(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14817fe14 FUN_14817fe14 body=178 status=ok
// SIG undefined FUN_14817fe14(void)

void FUN_14817fe14(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar1 = param_2[2];
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x38) == lVar1)
        goto LAB_14817fe27;
        iVar2 = *(int *)(lVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_14817fe27:
  if (*(char *)(lVar3 + 0x10) == '\x01') {
    (**(code **)(*(longlong *)param_2[1] + 0x128))
              ((longlong *)param_2[1],*param_2,*(undefined8 *)(lVar3 + 0x18),
               *(undefined1 *)(lVar3 + 0x11),1);
  }
  *(undefined2 *)(lVar3 + 0x10) = 0x101;
  if (*(char *)(param_2 + 3) == '\x01') {
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14817ff5c FUN_14817ff5c body=29 status=ok
// SIG undefined FUN_14817ff5c(void)

undefined8 FUN_14817ff5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14817ff86 FUN_14817ff86 body=89 status=ok
// SIG undefined FUN_14817ff86(void)

void FUN_14817ff86(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14817ffe0 FUN_14817ffe0 body=98 status=ok
// SIG undefined FUN_14817ffe0(void)

void FUN_14817ffe0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148180042 FUN_148180042 body=274 status=ok
// SIG undefined FUN_148180042(void)

undefined4 * FUN_148180042(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a5dba6(param_1,local_48);
  FUN_145a5dd26(param_4,local_40);
  *(undefined4 *)(local_40 + 0x400) = 0xffffffff;
  cVar1 = FUN_145a5dafe(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x404) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x400) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14147e934(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481801ea FUN_1481801ea body=59 status=ok
// SIG undefined FUN_1481801ea(void)

undefined8 FUN_1481801ea(longlong *param_1)

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



// FUNCTION 148180296 FUN_148180296 body=92 status=ok
// SIG undefined FUN_148180296(void)

void FUN_148180296(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_143abafa4(param_1 + 0x60);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_143abafa4(param_1 + 0x38);
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481802e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1481802f2 FUN_1481802f2 body=29 status=ok
// SIG undefined FUN_1481802f2(void)

undefined8 FUN_1481802f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148180324 FUN_148180324 body=93 status=ok
// SIG undefined FUN_148180324(void)

void FUN_148180324(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3a20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148180382 FUN_148180382 body=93 status=ok
// SIG undefined FUN_148180382(void)

void FUN_148180382(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3a20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481803e0 FUN_1481803e0 body=126 status=ok
// SIG undefined FUN_1481803e0(void)

void FUN_1481803e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14add3a20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014818044f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148180468 FUN_148180468 body=20 status=ok
// SIG undefined FUN_148180468(void)

undefined1 FUN_148180468(longlong param_1)

{
  FUN_143a49320(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14818048e FUN_14818048e body=31 status=ok
// SIG undefined FUN_14818048e(void)

undefined8
FUN_14818048e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_148180620(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 1481804d6 FUN_1481804d6 body=51 status=ok
// SIG undefined FUN_1481804d6(void)

void FUN_1481804d6(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14818050a FUN_14818050a body=234 status=ok
// SIG undefined FUN_14818050a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14818050a(longlong param_1,undefined8 param_2)

{
  if ((DAT_14cb3c99f & 2) == 0) {
    DAT_14cb3c99f = DAT_14cb3c99f | 3;
    _DAT_14cb3c940 = L"ENiagaraParticleDataValueType";
    _DAT_14cb3c958 = &LAB_1481805f4;
    _DAT_14cb3c960 = &LAB_148180600;
    _DAT_14cb3c968 = &LAB_14818060c;
    _DAT_14cb3c970 = &LAB_148180612;
    _DAT_14cb3c978 = &LAB_148180616;
    _DAT_14cb3c950 = &LAB_14818061c;
    _DAT_14cb3c990 = &DAT_100000001;
    _DAT_14cb3c998 = 1;
    DAT_14cb3c99c = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14cb3c938,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 148180620 FUN_148180620 body=245 status=ok
// SIG undefined FUN_148180620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148180620(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_148180716(param_3,*(undefined4 *)(param_1 + 8));
  uVar1 = *param_3;
  if ((DAT_14cb3c99f & 2) == 0) {
    DAT_14cb3c99f = DAT_14cb3c99f | 3;
    _DAT_14cb3c940 = L"ENiagaraParticleDataValueType";
    _DAT_14cb3c958 = &LAB_1481805f4;
    _DAT_14cb3c960 = &LAB_148180600;
    _DAT_14cb3c968 = &LAB_14818060c;
    _DAT_14cb3c970 = &LAB_148180612;
    _DAT_14cb3c978 = &LAB_148180616;
    _DAT_14cb3c950 = &LAB_14818061c;
    _DAT_14cb3c990 = &DAT_100000001;
    _DAT_14cb3c998 = 1;
    DAT_14cb3c99c = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14cb3c938,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 148180716 FUN_148180716 body=59 status=ok
// SIG undefined FUN_148180716(void)

void FUN_148180716(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_148180752(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_148180822();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148180752 FUN_148180752 body=82 status=ok
// SIG undefined FUN_148180752(void)

void FUN_148180752(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1481807a4(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1),0,(longlong)(int)param_2);
  return;
}



// FUNCTION 1481807a4 FUN_1481807a4 body=124 status=ok
// SIG undefined FUN_1481807a4(void)

void FUN_1481807a4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_144a7f90c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148180822 FUN_148180822 body=119 status=ok
// SIG undefined FUN_148180822(void)

void FUN_148180822(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 14818089a FUN_14818089a body=203 status=ok
// SIG undefined FUN_14818089a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14818089a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14cb3c99f & 2) == 0) {
    DAT_14cb3c99f = DAT_14cb3c99f | 3;
    _DAT_14cb3c940 = L"ENiagaraParticleDataValueType";
    _DAT_14cb3c958 = &LAB_1481805f4;
    _DAT_14cb3c960 = &LAB_148180600;
    _DAT_14cb3c968 = &LAB_14818060c;
    _DAT_14cb3c970 = &LAB_148180612;
    _DAT_14cb3c978 = &LAB_148180616;
    _DAT_14cb3c950 = &LAB_14818061c;
    _DAT_14cb3c990 = &DAT_100000001;
    _DAT_14cb3c998 = 1;
    DAT_14cb3c99c = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14cb3c938,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 148180a2c FUN_148180a2c body=65 status=ok
// SIG undefined FUN_148180a2c(void)

void FUN_148180a2c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148180a6e FUN_148180a6e body=29 status=ok
// SIG undefined FUN_148180a6e(void)

undefined8 FUN_148180a6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148180aa0 FUN_148180aa0 body=93 status=ok
// SIG undefined FUN_148180aa0(void)

void FUN_148180aa0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148180afe FUN_148180afe body=93 status=ok
// SIG undefined FUN_148180afe(void)

void FUN_148180afe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148180b5c FUN_148180b5c body=126 status=ok
// SIG undefined FUN_148180b5c(void)

void FUN_148180b5c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14add3bf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148180bcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148180be2 FUN_148180be2 body=19 status=ok
// SIG undefined FUN_148180be2(void)

undefined1 FUN_148180be2(undefined8 param_1,undefined8 param_2)

{
  FUN_1481782e0(param_2);
  return 1;
}



// FUNCTION 148180bf6 FUN_148180bf6 body=29 status=ok
// SIG undefined FUN_148180bf6(void)

undefined8 FUN_148180bf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148180c28 FUN_148180c28 body=93 status=ok
// SIG undefined FUN_148180c28(void)

void FUN_148180c28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3c60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148180c86 FUN_148180c86 body=93 status=ok
// SIG undefined FUN_148180c86(void)

void FUN_148180c86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3c60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148180ce4 FUN_148180ce4 body=126 status=ok
// SIG undefined FUN_148180ce4(void)

void FUN_148180ce4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14add3c60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148180d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148180d6a FUN_148180d6a body=19 status=ok
// SIG undefined FUN_148180d6a(void)

undefined1 FUN_148180d6a(undefined8 param_1,undefined8 param_2)

{
  FUN_1481783a2(param_2);
  return 1;
}



// FUNCTION 148180d8e FUN_148180d8e body=93 status=ok
// SIG undefined FUN_148180d8e(void)

void FUN_148180d8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3cd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148180dec FUN_148180dec body=93 status=ok
// SIG undefined FUN_148180dec(void)

void FUN_148180dec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3cd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148180e4a FUN_148180e4a body=126 status=ok
// SIG undefined FUN_148180e4a(void)

void FUN_148180e4a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14add3cd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148180eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148180ec8 FUN_148180ec8 body=19 status=ok
// SIG undefined FUN_148180ec8(void)

undefined1 FUN_148180ec8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400d6102(param_2);
  return 1;
}



// FUNCTION 148180edc FUN_148180edc body=29 status=ok
// SIG undefined FUN_148180edc(void)

undefined8 FUN_148180edc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148180f0e FUN_148180f0e body=93 status=ok
// SIG undefined FUN_148180f0e(void)

void FUN_148180f0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3d40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148180f6c FUN_148180f6c body=93 status=ok
// SIG undefined FUN_148180f6c(void)

void FUN_148180f6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3d40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148180fca FUN_148180fca body=126 status=ok
// SIG undefined FUN_148180fca(void)

void FUN_148180fca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14add3d40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148181039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148181050 FUN_148181050 body=19 status=ok
// SIG undefined FUN_148181050(void)

undefined1 FUN_148181050(undefined8 param_1,undefined8 param_2)

{
  FUN_14817854c(param_2);
  return 1;
}



// FUNCTION 148181064 FUN_148181064 body=29 status=ok
// SIG undefined FUN_148181064(void)

undefined8 FUN_148181064(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148181096 FUN_148181096 body=93 status=ok
// SIG undefined FUN_148181096(void)

void FUN_148181096(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3db0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481810f4 FUN_1481810f4 body=93 status=ok
// SIG undefined FUN_1481810f4(void)

void FUN_1481810f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3db0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148181152 FUN_148181152 body=126 status=ok
// SIG undefined FUN_148181152(void)

void FUN_148181152(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14add3db0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481811c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481811d8 FUN_1481811d8 body=19 status=ok
// SIG undefined FUN_1481811d8(void)

undefined1 FUN_1481811d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1481787ac(param_2);
  return 1;
}



// FUNCTION 1481811f0 FUN_1481811f0 body=29 status=ok
// SIG undefined FUN_1481811f0(void)

undefined8 FUN_1481811f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148181222 FUN_148181222 body=93 status=ok
// SIG undefined FUN_148181222(void)

void FUN_148181222(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3eb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148181280 FUN_148181280 body=93 status=ok
// SIG undefined FUN_148181280(void)

void FUN_148181280(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add3eb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481812de FUN_1481812de body=126 status=ok
// SIG undefined FUN_1481812de(void)

void FUN_1481812de(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14add3eb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014818134d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148181366 FUN_148181366 body=20 status=ok
// SIG undefined FUN_148181366(void)

undefined1 FUN_148181366(longlong param_1)

{
  FUN_14817c648(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14818137a FUN_14818137a body=98 status=ok
// SIG undefined FUN_14818137a(void)

void FUN_14818137a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481813dc FUN_1481813dc body=115 status=ok
// SIG undefined FUN_1481813dc(void)

void FUN_1481813dc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14818145a FUN_14818145a body=89 status=ok
// SIG undefined FUN_14818145a(void)

void FUN_14818145a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 8);
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



// FUNCTION 1481814be FUN_1481814be body=151 status=ok
// SIG undefined FUN_1481814be(void)

void FUN_1481814be(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_148181556();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb3c9a8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
  return;
}



// FUNCTION 148181556 FUN_148181556 body=258 status=ok
// SIG undefined FUN_148181556(void)

void FUN_148181556(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3ca28) {
    FUN_144b3d300(&DAT_14cb3ca28);
    if (DAT_14cb3ca28 == -1) {
      FUN_14818165a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x11;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3c9a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a547d9);
      _Init_thread_footer(&DAT_14cb3ca28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818165a FUN_14818165a body=226 status=ok
// SIG undefined FUN_14818165a(void)

longlong * FUN_14818165a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14818173e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818173e FUN_14818173e body=136 status=ok
// SIG undefined FUN_14818173e(void)

code * FUN_14818173e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWTextureUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481817c6;
}



// FUNCTION 1481817c6 FUN_1481817c6 body=130 status=ok
// SIG undefined FUN_1481817c6(void)

undefined1 * FUN_1481817c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148181848;
}



// FUNCTION 14818184c FUN_14818184c body=318 status=ok
// SIG undefined FUN_14818184c(void)

undefined4 * FUN_14818184c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14818198c(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  *(undefined2 *)(local_40 + 2) = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
  cVar3 = FUN_148181a6e(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x34) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_148181ba2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818198c FUN_14818198c body=226 status=ok
// SIG undefined FUN_14818198c(void)

int * FUN_14818198c(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 148181a6e FUN_148181a6e body=191 status=ok
// SIG undefined FUN_148181a6e(void)

undefined8 FUN_148181a6e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar16 != -1) {
      do {
        puVar2 = (undefined4 *)(*param_1 + (longlong)iVar16 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar16 * 0x38) == *param_3) {
          if (*(longlong *)(puVar2 + 6) != 0) {
            LOCK();
            puVar1 = (uint *)(*(longlong *)(puVar2 + 6) + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          lVar10 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar11 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar12 = param_3[2];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar13 = param_3[3];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar14 = param_3[5];
          uVar9 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar2[8] = (int)param_3[4];
          puVar2[9] = uVar8;
          puVar2[10] = (int)lVar14;
          puVar2[0xb] = uVar9;
          puVar2[4] = (int)lVar12;
          puVar2[5] = uVar6;
          puVar2[6] = (int)lVar13;
          puVar2[7] = uVar7;
          *puVar2 = (int)lVar10;
          puVar2[1] = uVar4;
          puVar2[2] = (int)lVar11;
          puVar2[3] = uVar5;
          FUN_148181b2e(param_1,*param_4);
          *param_4 = iVar16;
          return 1;
        }
        iVar16 = puVar2[0xc];
      } while (iVar16 != -1);
    }
  }
  return 0;
}



// FUNCTION 148181b2e FUN_148181b2e body=116 status=ok
// SIG undefined FUN_148181b2e(void)

void FUN_148181b2e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148181ba2 FUN_148181ba2 body=447 status=ok
// SIG undefined FUN_148181ba2(void)

void FUN_148181ba2(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 148181d62 FUN_148181d62 body=102 status=ok
// SIG undefined FUN_148181d62(void)

void FUN_148181d62(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == param_2) {
          FUN_148181dc8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148181dc8 FUN_148181dc8 body=87 status=ok
// SIG undefined FUN_148181dc8(void)

void FUN_148181dc8(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_148181e20();
  return;
}



// FUNCTION 148181e20 FUN_148181e20 body=72 status=ok
// SIG undefined FUN_148181e20(void)

void FUN_148181e20(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x38);
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_148181b2e(param_1,param_2);
  return;
}



// FUNCTION 148181e68 FUN_148181e68 body=118 status=ok
// SIG undefined FUN_148181e68(void)

ulonglong FUN_148181e68(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148181edf FUN_148181edf body=73 status=ok
// SIG undefined FUN_148181edf(void)

void FUN_148181edf(longlong param_1,int param_2)

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



// FUNCTION 148181f28 FUN_148181f28 body=136 status=ok
// SIG undefined FUN_148181f28(void)

void FUN_148181f28(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 148181fb0 FUN_148181fb0 body=62 status=ok
// SIG undefined FUN_148181fb0(void)

void FUN_148181fb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148181fee(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148181fee FUN_148181fee body=93 status=ok
// SIG undefined FUN_148181fee(void)

ulonglong FUN_148181fee(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14818204c FUN_14818204c body=132 status=ok
// SIG undefined FUN_14818204c(void)

void FUN_14818204c(longlong param_1,int param_2)

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



// FUNCTION 1481820d2 FUN_1481820d2 body=89 status=ok
// SIG undefined FUN_1481820d2(void)

void FUN_1481820d2(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_148181edf(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14818212c FUN_14818212c body=96 status=ok
// SIG undefined FUN_14818212c(void)

void FUN_14818212c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 14818218c FUN_14818218c body=95 status=ok
// SIG undefined FUN_14818218c(void)

void FUN_14818218c(longlong param_1,uint param_2)

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



// FUNCTION 1481821ec FUN_1481821ec body=132 status=ok
// SIG undefined FUN_1481821ec(void)

void FUN_1481821ec(longlong param_1,int param_2)

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



// FUNCTION 148182271 FUN_148182271 body=226 status=ok
// SIG undefined FUN_148182271(void)

undefined8 * FUN_148182271(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1b0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14add43b0;
  puVar1[2] = 0;
  puVar1[3] = DAT_14c846330;
  *(undefined4 *)(puVar1 + 4) = DAT_14c846338;
  puVar3 = &DAT_14c846400;
  puVar4 = puVar1 + 6;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846400;
  puVar4 = puVar1 + 0x16;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1[0x26] = 0x3ff0000000000000;
  puVar1[0x27] = 0x3ff0000000000000;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0x3ff0000000000000;
  puVar1[0x2c] = 0x3ff0000000000000;
  FUN_148174758(puVar1 + 0x2d,param_1);
  *(undefined4 *)(puVar1 + 0x35) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x1ac) = 0;
  return puVar1;
}



// FUNCTION 14818235e FUN_14818235e body=29 status=ok
// SIG undefined FUN_14818235e(void)

undefined8 FUN_14818235e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14818237c FUN_14818237c body=76 status=ok
// SIG undefined FUN_14818237c(void)

void FUN_14818237c(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481823be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1481823c8 FUN_1481823c8 body=103 status=ok
// SIG undefined FUN_1481823c8(void)

bool FUN_1481823c8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    bVar5 = true;
  }
  else {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4 * 8);
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      bVar5 = *(longlong *)(param_1 + lVar4 * 8) == lVar1;
    } while ((bVar5) && (iVar3 = (int)lVar4, lVar4 = lVar4 + 1, param_3 + -1 != iVar3));
  }
  return bVar5;
}



// FUNCTION 148182430 FUN_148182430 body=132 status=ok
// SIG undefined FUN_148182430(void)

void FUN_148182430(longlong param_1,int param_2)

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



// FUNCTION 1481824b6 FUN_1481824b6 body=63 status=ok
// SIG undefined FUN_1481824b6(void)

void FUN_1481824b6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481824f6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1481824f6 FUN_1481824f6 body=97 status=ok
// SIG undefined FUN_1481824f6(void)

ulonglong FUN_1481824f6(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 148182558 FUN_148182558 body=138 status=ok
// SIG undefined FUN_148182558(void)

code * FUN_148182558(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CachedPhysMatTextureDimension";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481825e2;
}



// FUNCTION 1481825e2 FUN_1481825e2 body=138 status=ok
// SIG undefined FUN_1481825e2(void)

code * FUN_1481825e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CachedPhysMatTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f800000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14818266c;
}



// FUNCTION 14818266c FUN_14818266c body=138 status=ok
// SIG undefined FUN_14818266c(void)

code * FUN_14818266c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PointClampedSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f000000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14647164a;
}



// FUNCTION 1481826f6 FUN_1481826f6 body=138 status=ok
// SIG undefined FUN_1481826f6(void)

code * FUN_1481826f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CachedHeightTextureWorldGridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e00000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457c9702;
}



// FUNCTION 148182780 FUN_148182780 body=138 status=ok
// SIG undefined FUN_148182780(void)

code * FUN_148182780(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CachedHeightTextureUvToWorldTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2900000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14818280a;
}



// FUNCTION 14818280a FUN_14818280a body=138 status=ok
// SIG undefined FUN_14818280a(void)

code * FUN_14818280a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CachedHeightTextureWorldToUvTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2500000006c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182894;
}



// FUNCTION 148182894 FUN_148182894 body=138 status=ok
// SIG undefined FUN_148182894(void)

code * FUN_148182894(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CachedHeightTextureLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457c978c;
}



// FUNCTION 14818291e FUN_14818291e body=138 status=ok
// SIG undefined FUN_14818291e(void)

code * FUN_14818291e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CachedHeightTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23000000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481829a8;
}



// FUNCTION 1481829a8 FUN_1481829a8 body=138 status=ok
// SIG undefined FUN_1481829a8(void)

code * FUN_1481829a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CachedHeightTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22800000068;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182a32;
}



// FUNCTION 148182a32 FUN_148182a32 body=138 status=ok
// SIG undefined FUN_148182a32(void)

code * FUN_148182a32(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTextureEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22400000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182abc;
}



// FUNCTION 148182abc FUN_148182abc body=138 status=ok
// SIG undefined FUN_148182abc(void)

code * FUN_148182abc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTextureUnpackMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22000000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182b46;
}



// FUNCTION 148182b46 FUN_148182b46 body=138 status=ok
// SIG undefined FUN_148182b46(void)

code * FUN_148182b46(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTextureUniforms1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21000000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182bd0;
}



// FUNCTION 148182bd0 FUN_148182bd0 body=138 status=ok
// SIG undefined FUN_148182bd0(void)

code * FUN_148182bd0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTextureUniforms0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182c5a;
}



// FUNCTION 148182c5a FUN_148182c5a body=138 status=ok
// SIG undefined FUN_148182c5a(void)

code * FUN_148182c5a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTexturePackedUniform1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f000000063;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182ce4;
}



// FUNCTION 148182ce4 FUN_148182ce4 body=138 status=ok
// SIG undefined FUN_148182ce4(void)

code * FUN_148182ce4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTexturePackedUniform0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e000000062;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457c9816;
}



// FUNCTION 148182d6e FUN_148182d6e body=138 status=ok
// SIG undefined FUN_148182d6e(void)

code * FUN_148182d6e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTextureLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19000000060;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182df8;
}



// FUNCTION 148182df8 FUN_148182df8 body=138 status=ok
// SIG undefined FUN_148182df8(void)

code * FUN_148182df8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTexture1Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000005f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182e82;
}



// FUNCTION 148182e82 FUN_148182e82 body=138 status=ok
// SIG undefined FUN_148182e82(void)

code * FUN_148182e82(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTexture0Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1780000005e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182f0c;
}



// FUNCTION 148182f0c FUN_148182f0c body=138 status=ok
// SIG undefined FUN_148182f0c(void)

code * FUN_148182f0c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTexturePageTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1700000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464716d2;
}



// FUNCTION 148182f96 FUN_148182f96 body=138 status=ok
// SIG undefined FUN_148182f96(void)

code * FUN_148182f96(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTexture0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1600000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148183020;
}



// FUNCTION 148183020 FUN_148183020 body=138 status=ok
// SIG undefined FUN_148183020(void)

code * FUN_148183020(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightVirtualTextureUniforms";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1500000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481830aa;
}



// FUNCTION 1481830aa FUN_1481830aa body=138 status=ok
// SIG undefined FUN_1481830aa(void)

code * FUN_1481830aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightVirtualTexturePackedUniform1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148183134;
}



// FUNCTION 148183134 FUN_148183134 body=138 status=ok
// SIG undefined FUN_148183134(void)

code * FUN_148183134(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightVirtualTexturePackedUniform0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481831be;
}



// FUNCTION 1481831be FUN_1481831be body=138 status=ok
// SIG undefined FUN_1481831be(void)

code * FUN_1481831be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightVirtualTextureEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148183248;
}



// FUNCTION 148183248 FUN_148183248 body=138 status=ok
// SIG undefined FUN_148183248(void)

code * FUN_148183248(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightVirtualTextureWorldToUvTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481832d2;
}



// FUNCTION 1481832d2 FUN_1481832d2 body=138 status=ok
// SIG undefined FUN_1481832d2(void)

code * FUN_1481832d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightVirtualTextureLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14818335c;
}



// FUNCTION 14818335c FUN_14818335c body=138 status=ok
// SIG undefined FUN_14818335c(void)

code * FUN_14818335c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightVirtualTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481833e6;
}



// FUNCTION 1481833e6 FUN_1481833e6 body=138 status=ok
// SIG undefined FUN_1481833e6(void)

code * FUN_1481833e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightVirtualTexturePageTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148183470;
}



// FUNCTION 148183470 FUN_148183470 body=138 status=ok
// SIG undefined FUN_148183470(void)

code * FUN_148183470(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightVirtualTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481834fa;
}



// FUNCTION 1481834fa FUN_1481834fa body=138 status=ok
// SIG undefined FUN_1481834fa(void)

code * FUN_1481834fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BaseColorVirtualTextureUniforms";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148183584;
}



// FUNCTION 148183584 FUN_148183584 body=138 status=ok
// SIG undefined FUN_148183584(void)

code * FUN_148183584(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BaseColorVirtualTexturePackedUniform1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14818360e;
}



// FUNCTION 14818360e FUN_14818360e body=138 status=ok
// SIG undefined FUN_14818360e(void)

code * FUN_14818360e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BaseColorVirtualTexturePackedUniform0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148183698;
}



// FUNCTION 148183698 FUN_148183698 body=138 status=ok
// SIG undefined FUN_148183698(void)

code * FUN_148183698(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BaseColorVirtualTextureEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x740000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148183722;
}



// FUNCTION 148183722 FUN_148183722 body=138 status=ok
// SIG undefined FUN_148183722(void)

code * FUN_148183722(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BaseColorVirtualTextureSRGB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481837ac;
}



// FUNCTION 1481837ac FUN_1481837ac body=138 status=ok
// SIG undefined FUN_1481837ac(void)

code * FUN_1481837ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BaseColorVirtualTextureWorldToUvTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148183836;
}



// FUNCTION 148183836 FUN_148183836 body=138 status=ok
// SIG undefined FUN_148183836(void)

code * FUN_148183836(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BaseColorVirtualTextureLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481838c0;
}



// FUNCTION 1481838c0 FUN_1481838c0 body=138 status=ok
// SIG undefined FUN_1481838c0(void)

code * FUN_1481838c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BaseColorVirtualTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14818394a;
}


