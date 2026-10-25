// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148d06ae8 FUN_148d06ae8 body=1389 status=ok
// SIG undefined FUN_148d06ae8(void)

double * FUN_148d06ae8(longlong *param_1,double *param_2,byte param_3,longlong param_4,
                      undefined4 *param_5,double *param_6)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  double dVar10;
  double *pdVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_178 [40];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (5 < param_3) goto LAB_148d06e0e;
  dVar10 = (double)((longlong)&switchD_148d06b7d::switchdataD_14b9668d0 +
                   (longlong)(int)(&switchD_148d06b7d::switchdataD_14b9668d0)[param_3]);
  switch(param_3) {
  case 0:
    param_2[2] = *(double *)(param_5 + 4);
    uVar6 = param_5[1];
    uVar7 = param_5[2];
    uVar8 = param_5[3];
    *(undefined4 *)param_2 = *param_5;
    *(undefined4 *)((longlong)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_178);
  case 1:
    FUN_144a9d448(&local_118,&DAT_14c8462c0,param_6);
    FUN_1448052ee(&local_118,param_2);
    break;
  case 2:
    (**(code **)(*param_1 + 0x588))(0,&local_138,param_2);
    dVar13 = *param_2;
    dVar10 = param_2[1];
    dVar1 = param_2[2];
    dVar16 = sin(dVar13 * 0.01745329238474369);
    dVar3 = sin(dVar10 * 0.01745329238474369);
    dVar15 = sin(dVar1 * 0.01745329238474369);
    sin(0.0);
    dVar13 = cos(dVar13 * 0.01745329238474369);
    dVar10 = cos(dVar10 * 0.01745329238474369);
    dVar1 = cos(dVar1 * 0.01745329238474369);
    cos(0.0);
    dVar14 = dVar16 * dVar15 * dVar10 - dVar3 * dVar1;
    dVar1 = dVar16 * dVar15 * dVar3 + dVar10 * dVar1;
    dVar13 = -dVar15 * dVar13;
    dVar10 = dVar13 * dVar13 + dVar14 * dVar14 + dVar1 * dVar1;
    if (((dVar10 != 1.0) || (dVar15 = dVar14, dVar16 = dVar1, dVar3 = dVar13, NAN(dVar10))) &&
       (dVar15 = DAT_14c8464e0, dVar16 = DAT_14c8464e8, dVar3 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar10)) {
      dVar10 = 1.0 / SQRT(dVar10);
      dVar15 = dVar14 * dVar10;
      dVar16 = dVar1 * dVar10;
      dVar3 = dVar13 * dVar10;
    }
    local_d8 = *param_6;
    local_d0 = param_6[1];
    dVar13 = dVar15 * local_d0 - local_d8 * dVar16;
    local_c8 = param_6[2];
    dVar1 = dVar3 * local_d8 - dVar15 * local_c8;
    dVar10 = dVar16 * local_c8 - local_d0 * dVar3;
    dVar16 = dVar13 * dVar13 + dVar10 * dVar10 + dVar1 * dVar1;
    if (((dVar16 != 1.0) ||
        (local_108 = dVar13, uStack_110 = dVar1, local_118 = dVar10, NAN(dVar16))) &&
       (local_108 = DAT_14c8464f0, uStack_110 = DAT_14c8464e8, local_118 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar16)) {
      dVar16 = 1.0 / SQRT(dVar16);
      local_108 = dVar13 * dVar16;
      uStack_110 = dVar1 * dVar16;
      local_118 = dVar10 * dVar16;
    }
    local_e8 = local_d8 * uStack_110 - local_118 * local_d0;
    local_f0 = local_c8 * local_118 - local_108 * local_d8;
    local_f8 = local_d0 * local_108 - uStack_110 * local_c8;
    dStack_100 = 0.0;
    local_e0 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0x3ff0000000000000;
    FUN_144a90b9e(&local_118,&local_150);
    param_2[2] = local_140;
    goto LAB_148d06e0b;
  case 3:
    (**(code **)(*param_1 + 0x588))(0,&local_118,param_2);
    break;
  case 4:
    (**(code **)(*param_1 + 0x588))(0,&local_118,param_2);
    *param_2 = 0.0;
    break;
  case 5:
    if (param_4 == 0) break;
    lVar2 = *(longlong *)(param_4 + 0x1c8);
    if (lVar2 == 0) {
      local_128 = DAT_14c846508;
      local_150 = (undefined4)DAT_14c8464f8;
      uStack_14c = DAT_14c8464f8._4_4_;
      uStack_148 = (undefined4)DAT_14c846500;
      uStack_144 = DAT_14c846500._4_4_;
    }
    else {
      dVar1 = *(double *)(lVar2 + 0x240);
      dVar16 = *(double *)(lVar2 + 0x248);
      dVar3 = *(double *)(lVar2 + 0x250);
      dVar15 = *(double *)(lVar2 + 600);
      pdVar11 = *(double **)(lVar2 + 0x228);
      local_118 = dVar1;
      uStack_110 = dVar16;
      local_108 = dVar3;
      dStack_100 = dVar15;
      if (pdVar11 == (double *)0x0) {
        param_1 = (longlong *)&DAT_00000040;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar10;
        dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar11[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)(lVar2 + 0x228) = pdVar11;
      }
      auVar4._8_4_ = (int)-(ulonglong)(dVar16 != pdVar11[1]);
      auVar4._0_8_ = -(ulonglong)(dVar1 != *pdVar11);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar16 != pdVar11[1]) >> 0x20);
      iVar9 = movmskpd(SUB84(dVar10,0),auVar4);
      auVar5._8_4_ = (int)-(ulonglong)(dVar15 != pdVar11[3]);
      auVar5._0_8_ = -(ulonglong)(dVar3 != pdVar11[2]);
      auVar5._12_4_ = (int)(-(ulonglong)(dVar15 != pdVar11[3]) >> 0x20);
      uVar12 = movmskpd((int)param_1,auVar5);
      if ((uVar12 & 0x3fffffff) != 0 || iVar9 != 0) {
        pdVar11[2] = local_108;
        pdVar11[3] = dStack_100;
        *(undefined4 *)pdVar11 = (undefined4)local_118;
        *(undefined4 *)((longlong)pdVar11 + 4) = local_118._4_4_;
        *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_110._4_4_;
        FUN_1448052ee(&local_118,&local_138);
        pdVar11[6] = local_128;
        pdVar11[4] = (double)CONCAT44(uStack_134,local_138);
        pdVar11[5] = (double)CONCAT44(uStack_12c,uStack_130);
      }
      local_128 = pdVar11[6];
      local_150 = *(undefined4 *)(pdVar11 + 4);
      uStack_14c = *(undefined4 *)((longlong)pdVar11 + 0x24);
      uStack_148 = *(undefined4 *)(pdVar11 + 5);
      uStack_144 = *(undefined4 *)((longlong)pdVar11 + 0x2c);
    }
    param_2[2] = local_128;
    local_138 = local_150;
    uStack_134 = uStack_14c;
    uStack_130 = uStack_148;
    uStack_12c = uStack_144;
LAB_148d06e0b:
    *(undefined4 *)param_2 = local_150;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_14c;
    *(undefined4 *)(param_2 + 1) = uStack_148;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_144;
  }
LAB_148d06e0e:
  if ((local_90 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d0705c FUN_148d0705c body=481 status=ok
// SIG undefined FUN_148d0705c(void)

void FUN_148d0705c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined4 *local_130;
  undefined8 *local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1448e423c();
  if (*(longlong *)(param_1 + 0x808) != 0) {
    cVar4 = FUN_142b38acc(*(longlong *)(param_1 + 0x808) + 0x220);
    if (cVar4 == '\0') {
      FUN_148d0723e(param_1);
    }
    if (-1 < *(char *)(param_1 + 0x60)) {
      FUN_1440f494e(param_1);
      if (*(char *)(param_1 + 0x848) == '\x01') {
        FUN_1440f5392(param_1);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x808);
    if ((*(char *)(lVar1 + 0x134) == '\x01') && (lVar2 = *(longlong *)(param_1 + 0x168), lVar2 != 0)
       ) {
      lVar3 = *(longlong *)(lVar2 + 0x1c8);
      if (lVar3 == 0) {
        puVar5 = &DAT_14c8464e0;
        uVar6 = (undefined4)DAT_14c8464f0;
        uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar6 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
        puVar5 = (undefined8 *)(lVar3 + 0x260);
      }
      local_88 = *(undefined4 *)puVar5;
      uStack_84 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_80 = *(undefined4 *)(puVar5 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
      local_128 = &local_58;
      local_48 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_138 = (undefined8 *)&local_88;
      local_78 = CONCAT44(uVar7,uVar6);
      local_130 = (undefined4 *)CONCAT44(local_130._4_4_,*(undefined4 *)(lVar1 + 0x138));
      FUN_148d064c6(param_1,&local_70,*(undefined1 *)(lVar1 + 0x135),lVar2);
      local_130 = &local_b8;
      local_b8 = (undefined4)local_58;
      uStack_b4 = local_58._4_4_;
      uStack_b0 = (undefined4)uStack_50;
      uStack_ac = uStack_50._4_4_;
      local_a8 = local_48;
      local_138 = &local_d8;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      FUN_148d06ae8(param_1,&local_a0,*(undefined1 *)(*(longlong *)(param_1 + 0x808) + 0x13c),lVar2)
      ;
      local_e8 = local_90;
      local_f8 = local_a0;
      uStack_f0 = uStack_98;
      local_118 = local_70;
      uStack_114 = uStack_6c;
      uStack_110 = uStack_68;
      uStack_10c = uStack_64;
      local_108 = local_60;
      local_138 = (undefined8 *)0x0;
      local_130 = (undefined4 *)CONCAT71(local_130._1_7_,1);
      FUN_1407fd818(param_1,&local_118,&local_f8,0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0723e FUN_148d0723e body=953 status=ok
// SIG undefined FUN_148d0723e(void)

void FUN_148d0723e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 ***pppuVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 local_d8 [2];
  undefined4 local_d4;
  undefined8 ***local_d0;
  undefined4 local_c8;
  ushort local_b8;
  byte local_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 local_80;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  bVar11 = true;
  if (-1 < (char)param_1[0xc]) {
    bVar11 = param_1[0x164] != 0;
  }
  lVar7 = param_1[0x101];
  local_a8 = local_a8 & 0xffffffffffffff00;
  local_80 = 0;
  FUN_1456bb102(&local_a8,param_1[0x36]);
  FUN_140168de2(lVar7 + 0x220,&local_d0,&local_a8);
  cVar6 = FUN_140168b7a(&local_d0,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar10 = &local_d0;
    if (0x18 < local_b8) {
      ppppuVar10 = (undefined8 ****)local_d0;
    }
    (*pcVar3)(ppppuVar10);
  }
  if (0x18 < local_b8) {
    FUN_1400020a8(local_d0);
  }
  FUN_144a5ac3a(&local_a8);
  if (bVar11 == (bool)cVar6) {
    if ((char)param_1[0xc] < '\0') {
      (**(code **)(*param_1 + 0x330))(param_1,0);
      if (param_1[0x108] != 0) {
        FUN_1488141ae(param_1[0x108],1);
      }
      lVar7 = FUN_1407a0dc0(param_1[0x101] + 0x198);
      if (lVar7 != 0) {
        *(undefined1 *)(param_1 + 0x109) = 1;
      }
    }
    else {
      if (param_1[0x108] != 0) {
        FUN_1488141ae(param_1[0x108],0);
      }
      if (param_1[0x159] != 0) {
        param_1[0x159] = 0;
        plVar4 = (longlong *)param_1[0x15a];
        if (plVar4 != (longlong *)0x0) {
          param_1[0x15a] = 0;
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
      }
      lVar7 = param_1[0x101];
      local_a8 = local_a8 & 0xffffffffffffff00;
      local_80 = 0;
      FUN_1456bb102(&local_a8,param_1[0x36]);
      FUN_1448729ea(lVar7 + 600,&local_d0,&local_a8);
      fVar12 = (float)FUN_144a7b41a(&local_d0,0);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar10 = &local_d0;
        if (0x18 < local_b8) {
          ppppuVar10 = (undefined8 ****)local_d0;
        }
        (*pcVar3)(ppppuVar10);
      }
      if (0x18 < local_b8) {
        FUN_1400020a8(local_d0);
      }
      FUN_144a5ac3a(&local_a8);
      if (fVar12 <= 0.0) {
        if ((char)param_1[0x100] == '\x01') {
          FUN_148d063d6(param_1);
        }
        (**(code **)(*param_1 + 0x330))(param_1,1);
      }
      else {
        uVar8 = FUN_1401b4c98(param_1);
        plVar4 = param_1 + 0x164;
        lVar7 = FUN_144a61814(uVar8,plVar4);
        if (lVar7 != 0) {
          FUN_1405a424c(uVar8,*plVar4);
        }
        param_1[0x164] = 0;
        uVar8 = FUN_1401b4c98(param_1);
        local_d0 = (undefined8 ****)0x0;
        local_c8 = 0;
        FUN_1446efa72(&local_d0,0,3,0x10);
        pppuVar5 = local_d0;
        local_c8 = 3;
        *local_d0 = (undefined8 **)&PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        pppuVar9 = (undefined8 ***)(DAT_14c758608 + 1);
        lVar7 = DAT_14c758608 + 1;
        if (pppuVar9 == (undefined8 ***)0x0) {
          LOCK();
          UNLOCK();
          pppuVar9 = (undefined8 ***)(DAT_14c758608 + 2);
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_d0[2] = pppuVar9;
        *local_d0 = (undefined8 **)&PTR_FUN_14b965cb0;
        local_d0[3] = (undefined8 ***)0x0;
        FUN_14485c47a(local_d0 + 3,param_1);
        *(undefined4 *)(pppuVar5 + 5) = 0;
        pppuVar5[4] = (undefined8 **)FUN_148d075f8;
        local_a8 = 0;
        local_a0 = 0;
        FUN_14487d8d8(&local_a8,&local_d0);
        local_68 = 1;
        local_e8 = local_d8;
        local_d8[0] = 0;
        local_d4 = 0xbf800000;
        FUN_1406f4044(uVar8,plVar4,&local_a8,fVar12);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
        FUN_1449db362(&local_d0);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d075f8 FUN_148d075f8 body=50 status=ok
// SIG undefined FUN_148d075f8(void)

void FUN_148d075f8(longlong *param_1)

{
  if ((char)param_1[0x100] == '\x01') {
    FUN_148d063d6(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000148d0761d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,1);
  return;
}



// FUNCTION 148d0762a FUN_148d0762a body=135 status=ok
// SIG undefined FUN_148d0762a(void)

void FUN_148d0762a(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x60) < '\0' != (bool)param_2) {
    FUN_140500af4();
    if ((-1 < *(char *)(param_1 + 0x60)) && (*(longlong *)(param_1 + 0xb20) != 0)) {
      puVar1 = (undefined8 *)(param_1 + 0xb20);
      uVar3 = FUN_1401b4c98(param_1);
      lVar2 = FUN_144a61814(uVar3,puVar1);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar3,*puVar1);
      }
      *puVar1 = 0;
    }
    if (*(longlong *)(param_1 + 0x840) != 0) {
      FUN_1488141ae(*(longlong *)(param_1 + 0x840),(byte)~*(byte *)(param_1 + 0x60) >> 7);
      return;
    }
  }
  return;
}



// FUNCTION 148d076b2 FUN_148d076b2 body=241 status=ok
// SIG undefined FUN_148d076b2(void)

void FUN_148d076b2(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14147df5e();
  FUN_148d077a4(local_78,param_1 + 0x2a8);
  FUN_14042b1ec(param_2,local_78,1);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 0x2d8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2d0);
    lVar3 = (longlong)*(int *)(param_1 + 0x2d8) * 0x28;
    do {
      FUN_140d2594c(local_78,lVar2);
      FUN_14042b1ec(param_2,local_78,1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d077a4 FUN_148d077a4 body=521 status=ok
// SIG undefined FUN_148d077a4(void)

undefined8 * FUN_148d077a4(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  void **ppvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = FUN_148d079ae(param_2);
  puVar1 = param_1 + 1;
  ppvVar2 = (void **)(param_1 + 3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_1400bbfc4(&local_58,lVar7);
    *(undefined4 *)puVar1 = local_58;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_54;
    *(undefined4 *)(param_1 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_4c;
    if (puVar1 == (undefined8 *)&local_58) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppvVar2 != (void *)0x0) {
        FUN_1400020a8();
      }
      param_1[3] = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 4) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_3c;
    }
    cVar6 = (*(code *)PTR_FUN_14c758760)();
    if (cVar6 != '\0') {
      uVar3 = *(uint *)(lVar7 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
        *param_1 = 0;
        goto LAB_148d078a9;
      }
    }
    FUN_14485c47a(param_1,lVar7);
  }
LAB_148d078a9:
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  if (param_1[1] == 0) {
    local_78 = *(undefined4 *)(param_2 + 8);
    uStack_74 = *(undefined4 *)(param_2 + 0xc);
    uStack_70 = *(undefined4 *)(param_2 + 0x10);
    uStack_6c = *(undefined4 *)(param_2 + 0x14);
    local_68 = (void *)0x0;
    local_60 = *(int *)(param_2 + 0x20);
    lVar7 = (longlong)local_60;
    pvVar4 = *(void **)(param_2 + 0x18);
    if (lVar7 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar4,lVar7 * 2);
    }
    iVar5 = local_60;
    pvVar4 = local_68;
    *param_1 = 0;
    *(undefined4 *)puVar1 = local_78;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_74;
    *(undefined4 *)(param_1 + 2) = uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_6c;
    if (ppvVar2 != &local_68) {
      lVar7 = (longlong)local_60;
      *(int *)(param_1 + 4) = local_60;
      if (local_60 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(ppvVar2,local_60);
        if (iVar5 != 0) {
          memcpy(*ppvVar2,pvVar4,lVar7 * 2);
        }
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d079ae FUN_148d079ae body=197 status=ok
// SIG undefined FUN_148d079ae(void)

longlong FUN_148d079ae(longlong param_1)

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
  lVar4 = FUN_1459f29b6();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148d07a74 FUN_148d07a74 body=122 status=ok
// SIG undefined FUN_148d07a74(void)

undefined8 * FUN_148d07a74(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = *(undefined8 *)(param_1 + 0x2a8);
  uVar2 = *(undefined4 *)(param_1 + 0x2b4);
  uVar3 = *(undefined4 *)(param_1 + 0x2b8);
  uVar4 = *(undefined4 *)(param_1 + 700);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x2b0);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x2c8);
  _Src = *(void **)(param_1 + 0x2c0);
  *(int *)(param_2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar1,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 148d07af4 FUN_148d07af4 body=45 status=ok
// SIG undefined FUN_148d07af4(void)

void FUN_148d07af4(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x40);
  FUN_140aa1618(param_1 + 0xd8,param_2);
  return;
}



// FUNCTION 148d07b22 FUN_148d07b22 body=325 status=ok
// SIG undefined FUN_148d07b22(void)

void FUN_148d07b22(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400ef488();
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar4 = FUN_143880244(param_1);
  if (*(char *)(lVar2 + 0x100) == '\x01') {
    FUN_140309ec4(lVar2 + 0x40,&local_40,lVar4 + 0x240);
    *(undefined8 *)(param_1 + 0x438) = local_30;
    *(undefined4 *)(param_1 + 0x428) = (undefined4)local_40;
    *(undefined4 *)(param_1 + 0x42c) = local_40._4_4_;
    *(undefined4 *)(param_1 + 0x430) = (undefined4)uStack_38;
    *(undefined4 *)(param_1 + 0x434) = uStack_38._4_4_;
    fVar6 = (float)FUN_140309e34(lVar2 + 0xd8,lVar4 + 0x240,lVar2 + 0xf0);
    fVar6 = fVar6 * fVar6;
  }
  else {
    *(undefined8 *)(param_1 + 0x438) = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x428) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x430) = uVar5;
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0x440) = fVar6;
  uVar5 = FUN_1405f939e(param_1);
  FUN_148d07c68(&local_40,uVar5);
  if ((undefined8 *)(param_1 + 0x418) != &local_40) {
    *(undefined8 *)(param_1 + 0x418) = local_40;
    local_40 = 0;
    plVar3 = *(longlong **)(param_1 + 0x420);
    *(longlong **)(param_1 + 0x420) = uStack_38;
    uStack_38 = (longlong *)0x0;
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
  if (uStack_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)uStack_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*uStack_38 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d07c68 FUN_148d07c68 body=226 status=ok
// SIG undefined FUN_148d07c68(void)

longlong * FUN_148d07c68(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_144747626(&local_28,DAT_14cbc6c18,param_2);
    plVar2 = local_20;
    if (local_28 != 0) {
      if (local_20 == (longlong *)0x0) {
        *param_1 = local_28;
      }
      else {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        *param_1 = local_28;
        if ((longlong *)param_1[1] != local_20) {
          LOCK();
          *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar2;
        }
        LOCK();
        plVar3 = plVar2 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d07d4c FUN_148d07d4c body=568 status=ok
// SIG undefined FUN_148d07d4c(void)

void FUN_148d07d4c(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ushort local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_1 + 0x420);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_148d07f57;
      LOCK();
      iVar2 = (int)plVar3[1];
      bVar13 = iVar8 == iVar2;
      if (bVar13) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar2 = iVar8;
      }
      iVar8 = iVar2;
      UNLOCK();
    } while (!bVar13);
    lVar4 = *(longlong *)(param_1 + 0x418);
    if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x60) != 0)) {
      local_c8 = *(undefined8 *)(param_1 + 0x48);
      lVar12 = *(longlong *)(lVar4 + 0x58);
      local_c0 = (longlong)*(int *)(lVar4 + 0x60) * 0x88 + lVar12;
      local_d0 = param_1;
      do {
        iVar8 = *(int *)(lVar12 + 0x30);
        if ((longlong)iVar8 != 0) {
          lVar4 = *(longlong *)(lVar12 + 0x28);
          lVar11 = 0;
          do {
            plVar5 = *(longlong **)(lVar4 + lVar11);
            if ((plVar5 != (longlong *)0x0) &&
               ((**(code **)(*plVar5 + 8))(plVar5,&local_98), local_80 == '\x01')) {
              local_a8 = local_88;
              local_b8 = local_98;
              uStack_b4 = uStack_94;
              uStack_b0 = uStack_90;
              uStack_ac = uStack_8c;
              cVar7 = FUN_148d07f86(param_1,local_c8,*(undefined8 *)(lVar4 + lVar11),&local_b8);
              if (cVar7 != '\0') {
                iVar2 = *(int *)(param_2 + 0x388);
                *(uint *)(param_2 + 0x388) = iVar2 + 1U;
                if (*(uint *)(param_2 + 0x38c) < iVar2 + 1U) {
                  FUN_14052e0a0(param_2,iVar2);
                }
                lVar9 = *(longlong *)(param_2 + 0x380);
                if (*(longlong *)(param_2 + 0x380) == 0) {
                  lVar9 = param_2;
                }
                local_60 = 0x18;
                local_78 = local_98;
                uStack_74 = uStack_94;
                uStack_70 = uStack_90;
                uStack_6c = uStack_8c;
                local_68 = local_88;
                local_58 = 4;
                FUN_141814da4((longlong)iVar2 * 0x38 + lVar9,&local_78,0);
                param_1 = local_d0;
                pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
                if (pcVar6 != (code *)0x0) {
                  puVar10 = &local_78;
                  if (0x18 < local_60) {
                    puVar10 = (undefined4 *)CONCAT44(uStack_74,local_78);
                  }
                  (*pcVar6)(puVar10);
                }
                if (0x18 < local_60) {
                  FUN_1400020a8(CONCAT44(uStack_74,local_78));
                }
              }
            }
            lVar11 = lVar11 + 0x10;
          } while ((longlong)iVar8 * 0x10 != lVar11);
        }
        lVar12 = lVar12 + 0x88;
      } while (lVar12 != local_c0);
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_148d07f57:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d07f86 FUN_148d07f86 body=644 status=ok
// SIG undefined FUN_148d07f86(void)

undefined8 FUN_148d07f86(longlong param_1,longlong param_2,longlong param_3,double *param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_3 + 8);
  if ((lVar1 == 0) ||
     ((*(char *)(param_2 + 0x100) == '\x01' &&
      (dVar2 = *param_4 - *(double *)(param_1 + 0x428),
      dVar11 = param_4[1] - *(double *)(param_1 + 0x430),
      dVar3 = param_4[2] - *(double *)(param_1 + 0x438),
      fVar10 = (float)(dVar3 * dVar3 + dVar11 * dVar11 + dVar2 * dVar2),
      (bool)*(char *)(param_2 + 0xf8) !=
      (*(float *)(param_1 + 0x440) <= fVar10 && fVar10 != *(float *)(param_1 + 0x440)))))) {
LAB_148d081d8:
    uVar6 = 0;
  }
  else {
    if (*(char *)(param_2 + 0x118) == '\x01') {
      local_48 = 0;
      lStack_40 = 0;
      uVar6 = FUN_1402d1c56();
      lVar8 = FUN_14477b664(uVar6);
      lVar9 = FUN_1402d1c56();
      uVar6 = FUN_1402d1c56();
      FUN_1402d1bfa(&local_38,uVar6,lVar1);
      lVar7 = local_38;
      if (local_38 != 0) {
        lStack_40 = 0;
      }
      local_50 = local_38;
      lVar5 = FUN_1402d1c56();
      if (lVar9 == 0) {
LAB_148d080a9:
        lVar5 = lVar9;
      }
      else if (lVar5 == 0) {
        lVar5 = 0;
      }
      else if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
               lVar5 + 0x30)) goto LAB_148d080a9;
      if (lVar8 != lVar5) {
        lStack_40 = 0;
      }
      uVar6 = FUN_14477b664(lVar5);
      local_48 = FUN_14477b664(uVar6);
      if (local_48 != 0 && lVar7 != 0) {
        lStack_40 = lVar1;
      }
      cVar4 = FUN_148d0820c(param_2 + 0x108,&local_50);
      if (cVar4 == '\0') goto LAB_148d081d8;
    }
    if (*(char *)(param_2 + 0x130) == '\x01') {
      local_48 = 0;
      lStack_40 = 0;
      uVar6 = FUN_1402d1c56();
      lVar7 = FUN_14477b664(uVar6);
      lVar8 = FUN_1402d1c56();
      uVar6 = FUN_1402d1c56();
      FUN_1402d1bfa(&local_38,uVar6,lVar1);
      if (local_38 != 0) {
        lStack_40 = 0;
      }
      local_50 = local_38;
      lVar9 = FUN_1402d1c56();
      if (lVar8 == 0) {
LAB_148d08181:
        lVar9 = lVar8;
      }
      else if (lVar9 == 0) {
        lVar9 = 0;
      }
      else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
               lVar9 + 0x30)) goto LAB_148d08181;
      if (lVar7 != lVar9) {
        lStack_40 = 0;
      }
      uVar6 = FUN_14477b664(lVar9);
      local_48 = FUN_14477b664(uVar6);
      if (local_48 != 0 && local_38 != 0) {
        lStack_40 = lVar1;
      }
      cVar4 = FUN_148d0820c(param_2 + 0x120,&local_50);
      if (cVar4 != '\0') goto LAB_148d081d8;
    }
    uVar6 = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148d0820c FUN_148d0820c body=255 status=ok
// SIG undefined FUN_148d0820c(void)

undefined8 FUN_148d0820c(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = *param_1;
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar1 + 8 + lVar8) == 0) {
        uVar5 = FUN_1402d1c56();
        uVar5 = FUN_14477b664(uVar5);
        *(undefined8 *)(lVar1 + 8 + lVar8) = uVar5;
      }
      lVar6 = param_2[1];
      if (lVar6 == 0) {
        lVar6 = FUN_1402d1c56();
      }
      uVar5 = *param_2;
      uVar7 = FUN_14477b664(lVar6);
      local_50 = uVar5;
      uVar3 = FUN_144a7891a(uVar7);
      local_58 = *(undefined8 *)(lVar1 + lVar8);
      uVar5 = *(undefined8 *)(lVar1 + 8 + lVar8);
      uVar4 = FUN_144a7891a(uVar5);
      local_60 = &local_50;
      local_68 = uVar7;
      uVar5 = FUN_144a789b8(uVar4,uVar5,&local_58,uVar3);
    } while (((char)uVar5 == '\0') &&
            (bVar9 = (longlong)(int)lVar2 * 0x18 + -0x18 != lVar8, lVar8 = lVar8 + 0x18, bVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148d0830c FUN_148d0830c body=386 status=ok
// SIG undefined FUN_148d0830c(void)

void FUN_148d0830c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = (**(code **)(*param_3 + 0xa8))(param_3);
  lVar4 = FUN_14479d2ce(lVar4 + 0xd8);
  if (lVar4 != 0) {
    lVar5 = FUN_141248a28();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      lVar5 = (**(code **)(*param_3 + 0xa8))(param_3);
      iVar7 = *(int *)(lVar5 + 0xa8);
      if (*(int *)(lVar4 + 0x8c8) != 0) {
        iVar7 = *(int *)(*(longlong *)(lVar4 + 0x8c0) + (longlong)iVar7 * 4);
      }
      iVar3 = *(int *)(lVar4 + 0xb48);
      *(uint *)(lVar4 + 0xb48) = iVar3 + 1U;
      if (*(uint *)(lVar4 + 0xb4c) < iVar3 + 1U) {
        FUN_1446f48e2((longlong *)(lVar4 + 0xb40),iVar3);
      }
      *(int *)(*(longlong *)(lVar4 + 0xb40) + (longlong)iVar3 * 4) = iVar7;
    }
  }
  uVar6 = FUN_1447210f0(param_1 + -0x390);
  FUN_148d07c68(&local_40,uVar6);
  if (local_38 != (longlong *)0x0) {
    iVar7 = (int)local_38[1];
    do {
      if (iVar7 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_38 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
      plVar8 = local_38;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (((local_40 != 0) && (lVar4 = FUN_14479d2ce(local_40 + 0x70), lVar4 != 0)) &&
         ((*(byte *)(lVar4 + 0x155) & 0x20) == 0)) {
        *(float *)(local_40 + 0x84) = (float)*(double *)(lVar4 + 0x6d0);
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d08490 FUN_148d08490 body=263 status=ok
// SIG undefined FUN_148d08490(void)

void FUN_148d08490(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14005d520();
  FUN_144b2002e(local_48,param_1,0);
  *(undefined8 *)(param_1 + 0x1378) = DAT_14cbc6548;
  FUN_14090c20c(param_1 + 0x8a8,param_1,param_2);
  FUN_14066f62c(param_1 + 0x8a8,local_48);
  if (*(int *)(param_1 + 0x9e0) != 3) {
    FUN_1446efa72((longlong *)(param_1 + 0x9d8),0,3,0x10);
    *(undefined4 *)(param_1 + 0x9e0) = 3;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x9d8);
  *puVar1 = &PTR_LAB_14b965e30;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b965dc0;
  puVar1[3] = param_1;
  puVar1[4] = &LAB_148d08598;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d085b0 FUN_148d085b0 body=23 status=ok
// SIG undefined FUN_148d085b0(void)

undefined1 FUN_148d085b0(longlong param_1)

{
  FUN_1447e031c(param_1 + 0x8a8);
  return 1;
}



// FUNCTION 148d085c8 FUN_148d085c8 body=117 status=ok
// SIG undefined FUN_148d085c8(void)

void FUN_148d085c8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_144a54ea2();
  if ((*(int *)(param_1 + 0x440) != 0) && (*(longlong **)(param_1 + 0x438) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x30))();
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce();
      *(undefined8 *)(param_1 + 0x1b20) = 0;
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x440) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x438);
        }
                    /* WARNING: Could not recover jumptable at 0x000148d0862f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x58))(plVar3,lVar2,*(code **)(*plVar3 + 0x58));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d0863e FUN_148d0863e body=116 status=ok
// SIG undefined FUN_148d0863e(void)

void FUN_148d0863e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148d0cb92(param_1,iVar1);
    }
    FUN_148d0cb7b((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_148d0cc26(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148d086dc FUN_148d086dc body=39 status=ok
// SIG undefined FUN_148d086dc(void)

bool FUN_148d086dc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402d24da(param_1 + 0x28);
  return *(longlong *)(param_1 + 0x30) == 0 || lVar1 != 0;
}



// FUNCTION 148d0872c FUN_148d0872c body=68 status=ok
// SIG undefined FUN_148d0872c(void)

longlong FUN_148d0872c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402d1dc0(param_1 + 0x1d8);
  if (lVar1 != 0) {
    lVar2 = FUN_14018d992();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148d08770 FUN_148d08770 body=255 status=ok
// SIG undefined FUN_148d08770(void)

undefined8 FUN_148d08770(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = *param_1;
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar1 + 8 + lVar8) == 0) {
        uVar5 = FUN_1415289f2();
        uVar5 = FUN_14477b664(uVar5);
        *(undefined8 *)(lVar1 + 8 + lVar8) = uVar5;
      }
      lVar6 = param_2[1];
      if (lVar6 == 0) {
        lVar6 = FUN_1415289f2();
      }
      uVar5 = *param_2;
      uVar7 = FUN_14477b664(lVar6);
      local_50 = uVar5;
      uVar3 = FUN_144a7891a(uVar7);
      local_58 = *(undefined8 *)(lVar1 + lVar8);
      uVar5 = *(undefined8 *)(lVar1 + 8 + lVar8);
      uVar4 = FUN_144a7891a(uVar5);
      local_60 = &local_50;
      local_68 = uVar7;
      uVar5 = FUN_144a789b8(uVar4,uVar5,&local_58,uVar3);
    } while (((char)uVar5 == '\0') &&
            (bVar9 = (longlong)(int)lVar2 * 0x18 + -0x18 != lVar8, lVar8 = lVar8 + 0x18, bVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148d08870 FUN_148d08870 body=32 status=ok
// SIG undefined FUN_148d08870(void)

undefined8 FUN_148d08870(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"OakCritterManager");
  return param_2;
}



// FUNCTION 148d08898 FUN_148d08898 body=63 status=ok
// SIG undefined FUN_148d08898(void)

undefined8 * FUN_148d08898(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x268);
    uVar1 = *(undefined8 *)(lVar3 + 0x270);
    *param_2 = *(undefined8 *)(lVar3 + 0x260);
    param_2[1] = uVar2;
    param_2[2] = uVar1;
  }
  *(bool *)(param_2 + 3) = lVar3 != 0;
  return param_2;
}



// FUNCTION 148d08e2c FUN_148d08e2c body=697 status=ok
// SIG undefined FUN_148d08e2c(void)

void FUN_148d08e2c(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined4 uVar7;
  undefined1 auStack_f8 [32];
  undefined8 ***local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [24];
  longlong local_90;
  undefined4 local_80;
  undefined8 ***local_78;
  undefined4 local_70;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) goto LAB_148d08e81;
  lVar3 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) goto LAB_148d08e81;
  lVar3 = FUN_148d090e6(param_1);
  if (lVar3 == 0) goto LAB_148d08e81;
  if ((*(char *)(lVar3 + 0x70) == '\x01') && (*(char *)(param_2 + 0x73eb) != '\x01')) {
    FUN_1457c939e(param_2);
  }
  local_78 = (undefined8 ***)&LAB_148d09134;
  local_70 = 0;
  FUN_148d0d2b2(local_a8,param_1);
  FUN_140dca198(param_2 + 0x71f8,&local_78,local_a8);
  FUN_1449db362(local_a8);
  local_c8 = *(undefined4 *)(param_2 + 0x7448);
  uStack_c4 = *(undefined4 *)(param_2 + 0x744c);
  uStack_c0 = *(undefined4 *)(param_2 + 0x7450);
  uStack_bc = *(undefined4 *)(param_2 + 0x7454);
  local_b8 = *(undefined4 *)(param_2 + 0x7458);
  uStack_b4 = *(undefined4 *)(param_2 + 0x745c);
  uStack_b0 = *(undefined4 *)(param_2 + 0x7460);
  uStack_ac = *(undefined4 *)(param_2 + 0x7464);
  cVar2 = FUN_1403ae288();
  if (cVar2 != '\0') {
    if (*(char *)(lVar3 + 0x18) == '\x02') {
      FUN_1410d9770(param_1,local_a8);
      FUN_1447325ac(local_a8,&local_78,1);
      FUN_14142ad0e(param_2 + 0x71a8,1,&local_78);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\x01') goto LAB_148d0908b;
      local_a8[0] = 0;
      local_80 = 0;
      FUN_1456bb102(local_a8,param_2);
      FUN_1448729ea(lVar3 + 0x20,&local_78,local_a8);
      uVar7 = FUN_144a7ecd0(&local_78);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar6 = &local_78;
        if (0x18 < local_60) {
          ppppuVar6 = (undefined8 ****)local_78;
        }
        (*pcVar1)(ppppuVar6);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78);
      }
      FUN_144a5ac3a(local_a8);
      lVar4 = FUN_14008e0ae(&local_c8);
      local_d8 = &local_78;
      FUN_1402a4426(lVar4 + 0x2c,local_a8,4,uVar7);
    }
    uVar5 = FUN_14008e0ae(&local_c8);
    FUN_148856710(uVar5,1);
  }
LAB_148d0908b:
  if (*(char *)(lVar3 + 0x71) == '\x01') {
    FUN_1410d9770(param_1,local_a8);
    FUN_1447325ac(local_a8,&local_78,1);
    FUN_148d09154(param_2 + 0x71a8,1,&local_78);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
LAB_148d08e81:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d090e6 FUN_148d090e6 body=78 status=ok
// SIG undefined FUN_148d090e6(void)

longlong * FUN_148d090e6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465a344e();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148d09154 FUN_148d09154 body=171 status=ok
// SIG undefined FUN_148d09154(void)

void FUN_148d09154(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  ushort uVar2;
  
  if (param_2 == '\0') {
    FUN_1400bc8c2(param_1 + 0x278,param_3);
  }
  else {
    FUN_1400bc96c(param_1 + 0x278,param_3);
  }
  *(byte *)(param_1 + 0x241) = *(byte *)(param_1 + 0x241) & 0xfb | *(byte *)(param_1 + 0x278) << 2;
  lVar1 = *(longlong *)(param_1 + 0x238);
  if (lVar1 != 0) {
    uVar2 = (ushort)(*(byte *)(param_1 + 0x278) & 0x3f);
    if (*(ushort *)(lVar1 + 0x7558) >> 0xf != uVar2) {
      *(ushort *)(lVar1 + 0x7558) = *(ushort *)(lVar1 + 0x7558) & 0x7fff | uVar2 << 0xf;
      FUN_144a62f0c(*(longlong *)(param_1 + 0x238),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),0x40);
      FUN_1409b52ac(*(longlong *)(param_1 + 0x238) + 0x3a90);
      return;
    }
  }
  return;
}



// FUNCTION 148d09200 FUN_148d09200 body=315 status=ok
// SIG undefined FUN_148d09200(void)

void FUN_148d09200(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_148d090e6(param_1);
      if (lVar1 != 0) {
        FUN_140457ffc(param_2 + 0x71f8,param_1);
        if (*(char *)(lVar1 + 0x18) == '\x02') {
          FUN_1410d9770(param_1,local_58);
          FUN_1447325ac(local_58,local_60,1);
          FUN_14142ad0e(param_2 + 0x71a8,0,local_60);
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else if (*(char *)(lVar1 + 0x18) == '\x01') {
          FUN_14053d96a(param_1 + 0x60);
        }
        if (*(char *)(lVar1 + 0x71) == '\x01') {
          FUN_1410d9770(param_1,local_58);
          FUN_1447325ac(local_58,local_60,1);
          FUN_148d09154(param_2 + 0x71a8,0,local_60);
          if (local_40 != 0) {
            FUN_1400020a8();
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



// FUNCTION 148d09340 FUN_148d09340 body=238 status=ok
// SIG undefined FUN_148d09340(void)

longlong * FUN_148d09340(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b965fe0;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b966000;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148d0d834(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0945a FUN_148d0945a body=189 status=ok
// SIG undefined FUN_148d0945a(void)

void FUN_148d0945a(longlong param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if ((*(char *)(param_1 + 0x243) == '\x01') &&
     (*(char *)(*(longlong *)(param_1 + 0x230) + 0x36) == '\x01')) {
    cVar2 = FUN_1403ae288(param_1 + 0x2a0);
    if (cVar2 != '\0') {
      fVar4 = (float)(**(code **)(*param_2 + 0x140))(param_2,0);
      if (*(int *)(*(longlong *)(param_1 + 0x238) + 0x47c0) < 1) {
        fVar5 = -1.0;
      }
      else {
        fVar5 = (float)FUN_1405583ce(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x47b8));
      }
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x230) + 0x38);
      uVar3 = FUN_14008e0ae(param_1 + 0x2a0);
      FUN_14654e92a(uVar3,(fVar4 / fVar5) * fVar1,0);
      FUN_14142ad8e(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d09540 FUN_148d09540 body=59 status=ok
// SIG undefined FUN_148d09540(void)

longlong FUN_148d09540(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146623994(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_148d0dac2(lVar2);
  return lVar2;
}



// FUNCTION 148d0957c FUN_148d0957c body=348 status=ok
// SIG undefined FUN_148d0957c(void)

undefined8 FUN_148d0957c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 != (longlong *)0x0) {
    cVar1 = FUN_143cfb6a0();
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x180) == '\x01') {
        plVar2 = (longlong *)(**(code **)(*param_4 + 0xe0))(param_4);
        if (plVar2 != (longlong *)0x0) {
          lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar4 = FUN_14018fb44();
          if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
               lVar4 + 0x30)) && (*(char *)((longlong)plVar2 + 0x121) == *(char *)(param_1 + 0x181))
             ) goto LAB_148d0960d;
        }
      }
      else {
LAB_148d0960d:
        if ((*(char *)(param_1 + 0x182) == '\0') && (*(char *)(param_1 + 0x184) != '\x01'))
        goto LAB_148d096d5;
        lVar3 = (**(code **)(*param_4 + 0x100))(param_4);
        if (lVar3 != 0) {
          lVar4 = FUN_144a7a5f4();
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
             ((*(char *)(param_1 + 0x182) != '\x01' ||
              (*(char *)(lVar3 + 0xe39) == *(char *)(param_1 + 0x183))))) {
            if (*(char *)(param_1 + 0x184) != '\x01') {
LAB_148d096d5:
              uVar5 = 1;
              goto LAB_148d09659;
            }
            lVar3 = FUN_140a2d0c8(lVar3);
            if (lVar3 != 0) {
              puVar6 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
                puVar6 = *(undefined4 **)(lVar3 + 8);
              }
              FUN_1447325ac(puVar6,&local_30,1);
              if (local_30 == *(longlong *)(param_1 + 0x188)) goto LAB_148d096d5;
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_148d09659:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d096da FUN_148d096da body=215 status=ok
// SIG undefined FUN_148d096da(void)

void FUN_148d096da(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = DAT_14cbc6bb8;
  local_60 = DAT_14cbc6bb0;
  FUN_1448075d0(local_50);
  uVar4 = FUN_144a06846(param_2,local_50);
  cVar3 = FUN_1410c4486(uVar4,0);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 1;
    uVar4 = DAT_14cbc6bc8;
    iVar1 = *(int *)(param_1 + 0x48);
    lVar5 = (longlong)iVar1;
    *(uint *)(param_1 + 0x48) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
      FUN_148d0dae8((longlong *)(param_1 + 0x40),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    *(undefined8 *)(lVar2 + lVar5 * 0x18) = uVar4;
    *(undefined4 *)(lVar2 + 8 + lVar5 * 0x18) = 0x3003;
    *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d097b2 FUN_148d097b2 body=245 status=ok
// SIG undefined FUN_148d097b2(void)

void FUN_148d097b2(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = FUN_144729dda(param_1 + 3);
  if (cVar3 != '\0') {
    param_2 = FUN_14479d2ce(param_1 + 3);
  }
  lVar1 = *param_1;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88,param_2);
  FUN_1448729ea(lVar1 + 0x150,local_58,local_88);
  iVar4 = FUN_14005fbd2(local_58,0);
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 4) = iVar5;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar6 = local_58;
    if (0x18 < local_40) {
      pppuVar6 = (undefined8 ***)local_58[0];
    }
    (*pcVar2)(pppuVar6);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d098be FUN_148d098be body=137 status=ok
// SIG undefined FUN_148d098be(void)

undefined8 FUN_148d098be(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_1;
  FUN_1446dcdd4(local_48);
  lVar1 = FUN_1417411b6(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14087c45e(lVar1,param_1[3],L"GetModifierForDamageTypeVsHealthType",1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d09948 FUN_148d09948 body=63 status=ok
// SIG undefined FUN_148d09948(void)

undefined8 * FUN_148d09948(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3f62d0;
  FUN_143ce8d30(param_1 + 0x1b);
  FUN_140333e92(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d09988 FUN_148d09988 body=38 status=ok
// SIG undefined FUN_148d09988(void)

undefined8 FUN_148d09988(undefined8 param_1,int param_2)

{
  FUN_148d04cae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d099ae FUN_148d099ae body=45 status=ok
// SIG undefined FUN_148d099ae(void)

longlong FUN_148d099ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145834b48(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d099e2 FUN_148d099e2 body=45 status=ok
// SIG undefined FUN_148d099e2(void)

longlong FUN_148d099e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145834b48(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d09a10 FUN_148d09a10 body=81 status=ok
// SIG undefined FUN_148d09a10(void)

undefined8 * FUN_148d09a10(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b965550;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 3);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa48))(plVar1);
    param_1[3] = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d09a62 FUN_148d09a62 body=38 status=ok
// SIG undefined FUN_148d09a62(void)

undefined8 FUN_148d09a62(undefined8 param_1,int param_2)

{
  FUN_141063422();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d09a88 FUN_148d09a88 body=125 status=ok
// SIG undefined FUN_148d09a88(void)

void FUN_148d09a88(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_148d09be8(param_2);
  }
  local_20 = FUN_1458f30b0();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_148d09b06(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d09b06 FUN_148d09b06 body=204 status=ok
// SIG undefined FUN_148d09b06(void)

void FUN_148d09b06(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148d09b59;
    }
  }
  lVar2 = 0;
LAB_148d09b59:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_148d09d52(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d09be8 FUN_148d09be8 body=48 status=ok
// SIG undefined FUN_148d09be8(void)

void FUN_148d09be8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148d09d52 FUN_148d09d52 body=442 status=ok
// SIG undefined FUN_148d09d52(void)

void FUN_148d09d52(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_148d09e6a:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_148d09e82;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_148d09e6a;
LAB_148d09e82:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_148d09f0e(param_3,iVar3);
          }
          *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d09f0e FUN_148d09f0e body=132 status=ok
// SIG undefined FUN_148d09f0e(void)

void FUN_148d09f0e(longlong param_1,int param_2)

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



// FUNCTION 148d09f94 FUN_148d09f94 body=125 status=ok
// SIG undefined FUN_148d09f94(void)

void FUN_148d09f94(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_148d0a0f4(param_2);
  }
  local_20 = FUN_1459f3202();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_148d0a012(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0a012 FUN_148d0a012 body=204 status=ok
// SIG undefined FUN_148d0a012(void)

void FUN_148d0a012(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148d0a065;
    }
  }
  lVar2 = 0;
LAB_148d0a065:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_148d0a25e(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0a0f4 FUN_148d0a0f4 body=48 status=ok
// SIG undefined FUN_148d0a0f4(void)

void FUN_148d0a0f4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148d0a25e FUN_148d0a25e body=442 status=ok
// SIG undefined FUN_148d0a25e(void)

void FUN_148d0a25e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_148d0a376:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_148d0a38e;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_148d0a376;
LAB_148d0a38e:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_148d0a41a(param_3,iVar3);
          }
          *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d0a41a FUN_148d0a41a body=132 status=ok
// SIG undefined FUN_148d0a41a(void)

void FUN_148d0a41a(longlong param_1,int param_2)

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



// FUNCTION 148d0a4a0 FUN_148d0a4a0 body=54 status=ok
// SIG undefined FUN_148d0a4a0(void)

longlong FUN_148d0a4a0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 148d0a4d6 FUN_148d0a4d6 body=132 status=ok
// SIG undefined FUN_148d0a4d6(void)

void FUN_148d0a4d6(longlong param_1,int param_2)

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



// FUNCTION 148d0a55c FUN_148d0a55c body=38 status=ok
// SIG undefined FUN_148d0a55c(void)

undefined8 FUN_148d0a55c(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0a582 FUN_148d0a582 body=38 status=ok
// SIG undefined FUN_148d0a582(void)

undefined8 FUN_148d0a582(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0a5a8 FUN_148d0a5a8 body=45 status=ok
// SIG undefined FUN_148d0a5a8(void)

void FUN_148d0a5a8(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b3f62d0;
  FUN_143ce8d30(param_1 + 0xe8);
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 148d0a5d6 FUN_148d0a5d6 body=29 status=ok
// SIG undefined FUN_148d0a5d6(void)

undefined8 FUN_148d0a5d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0a5f4 FUN_148d0a5f4 body=48 status=ok
// SIG undefined FUN_148d0a5f4(void)

void FUN_148d0a5f4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 148d0a624 FUN_148d0a624 body=118 status=ok
// SIG undefined FUN_148d0a624(void)

ulonglong FUN_148d0a624(int *param_1)

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



// FUNCTION 148d0a69c FUN_148d0a69c body=132 status=ok
// SIG undefined FUN_148d0a69c(void)

void FUN_148d0a69c(longlong param_1,int param_2)

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



// FUNCTION 148d0a722 FUN_148d0a722 body=53 status=ok
// SIG undefined FUN_148d0a722(void)

ulonglong FUN_148d0a722(int *param_1,int *param_2)

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



// FUNCTION 148d0a758 FUN_148d0a758 body=62 status=ok
// SIG undefined FUN_148d0a758(void)

void FUN_148d0a758(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148d0a796(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 148d0a796 FUN_148d0a796 body=93 status=ok
// SIG undefined FUN_148d0a796(void)

ulonglong FUN_148d0a796(uint param_1,uint param_2)

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



// FUNCTION 148d0a7f4 FUN_148d0a7f4 body=413 status=ok
// SIG undefined FUN_148d0a7f4(void)

void FUN_148d0a7f4(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14472eb64(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_144869a3c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 148d0a992 FUN_148d0a992 body=439 status=ok
// SIG undefined FUN_148d0a992(void)

void FUN_148d0a992(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 148d0ab4a FUN_148d0ab4a body=185 status=ok
// SIG undefined FUN_148d0ab4a(void)

int FUN_148d0ab4a(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_144902768(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148d0ab73;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148d0ab73:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 148d0ac04 FUN_148d0ac04 body=285 status=ok
// SIG undefined FUN_148d0ac04(void)

undefined4 * FUN_148d0ac04(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148d0ad22(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_148d0ae08(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_148d0a992(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0ad22 FUN_148d0ad22 body=229 status=ok
// SIG undefined FUN_148d0ad22(void)

int * FUN_148d0ad22(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 148d0ae08 FUN_148d0ae08 body=132 status=ok
// SIG undefined FUN_148d0ae08(void)

undefined8 FUN_148d0ae08(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_148d0ab4a();
    if (iVar1 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_148d0ae8e(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_148d0ae2c;
    }
  }
  uVar2 = 0;
LAB_148d0ae2c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0ae8e FUN_148d0ae8e body=114 status=ok
// SIG undefined FUN_148d0ae8e(void)

void FUN_148d0ae8e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 148d0af00 FUN_148d0af00 body=52 status=ok
// SIG undefined FUN_148d0af00(void)

void FUN_148d0af00(longlong *param_1)

{
  FUN_148d0af34();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148d0af34 FUN_148d0af34 body=89 status=ok
// SIG undefined FUN_148d0af34(void)

void FUN_148d0af34(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 148d0af8e FUN_148d0af8e body=110 status=ok
// SIG undefined FUN_148d0af8e(void)

void FUN_148d0af8e(longlong param_1,uint param_2)

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
    FUN_145ca3ba2(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_148d0b140(param_1);
    return;
  }
  FUN_148d0affc(param_1);
  FUN_145ca3ba2(param_1,param_2);
  return;
}



// FUNCTION 148d0affc FUN_148d0affc body=322 status=ok
// SIG undefined FUN_148d0affc(void)

void FUN_148d0affc(longlong *param_1)

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



// FUNCTION 148d0b140 FUN_148d0b140 body=439 status=ok
// SIG undefined FUN_148d0b140(void)

void FUN_148d0b140(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x80;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x74 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar7) =
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



// FUNCTION 148d0b2f8 FUN_148d0b2f8 body=185 status=ok
// SIG undefined FUN_148d0b2f8(void)

int FUN_148d0b2f8(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x80);
        cVar1 = FUN_144902768(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148d0b321;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x70 + (longlong)iVar4 * 0x80);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148d0b321:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 148d0b3b2 FUN_148d0b3b2 body=133 status=ok
// SIG undefined FUN_148d0b3b2(void)

longlong FUN_148d0b3b2(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148d0b438();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x80;
    if (lVar3 + lVar2 != 0) goto LAB_148d0b3eb;
  }
  local_30 = param_3;
  FUN_148d0b524(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 7;
LAB_148d0b3eb:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0b438 FUN_148d0b438 body=180 status=ok
// SIG undefined FUN_148d0b438(void)

int FUN_148d0b438(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x80);
        cVar1 = FUN_148d0b4ee(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148d0b4c6;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x70 + (longlong)iVar4 * 0x80);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148d0b4c6:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0b4ee FUN_148d0b4ee body=53 status=ok
// SIG undefined FUN_148d0b4ee(void)

ulonglong FUN_148d0b4ee(int *param_1,int *param_2)

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



// FUNCTION 148d0b524 FUN_148d0b524 body=322 status=ok
// SIG undefined FUN_148d0b524(void)

undefined4 * FUN_148d0b524(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148d0b668(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0;
  *(undefined4 *)((longlong)local_40 + 0x24) = 0;
  *(undefined4 *)(local_40 + 5) = 0;
  *(undefined4 *)((longlong)local_40 + 0x2c) = 0x3ff00000;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  *(undefined4 *)(local_40 + 10) = 0;
  *(undefined4 *)((longlong)local_40 + 0x54) = 0x3ff00000;
  *(undefined4 *)(local_40 + 0xb) = 0;
  *(undefined4 *)((longlong)local_40 + 0x5c) = 0x3ff00000;
  local_40[0xc] = 0x3ff0000000000000;
  local_40[0xd] = 0;
  *(undefined4 *)(local_40 + 0xe) = 0xffffffff;
  cVar1 = FUN_148d0b74e(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x74) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xe) =
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
      FUN_148d0b140(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0b668 FUN_148d0b668 body=229 status=ok
// SIG undefined FUN_148d0b668(void)

int * FUN_148d0b668(longlong *param_1,int *param_2)

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
      FUN_14045f6dc(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 148d0b74e FUN_148d0b74e body=139 status=ok
// SIG undefined FUN_148d0b74e(void)

undefined8 FUN_148d0b74e(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_148d0b2f8();
    if (iVar1 != -1) {
      memmove((void *)((longlong)iVar1 * 0x80 + *param_1),param_3,0x70);
      FUN_148d0b7da(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_148d0b772;
    }
  }
  uVar2 = 0;
LAB_148d0b772:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0b7da FUN_148d0b7da body=114 status=ok
// SIG undefined FUN_148d0b7da(void)

void FUN_148d0b7da(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
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



// FUNCTION 148d0b84c FUN_148d0b84c body=262 status=ok
// SIG undefined FUN_148d0b84c(void)

void FUN_148d0b84c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar3 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar7 = *param_1;
      lVar4 = lVar4 * 0x80;
      local_40 = *(undefined8 *)(lVar7 + lVar4);
      local_48 = param_2;
      cVar2 = FUN_144902768();
      if (cVar2 == '\0') {
        lVar4 = lVar7 + lVar4;
        do {
          lVar7 = lVar4;
          lVar4 = (longlong)*(int *)(lVar7 + 0x70);
          if (lVar4 == -1) goto LAB_148d0b870;
          lVar1 = *param_1;
          lVar4 = lVar4 * 0x80;
          local_40 = *(undefined8 *)(lVar1 + lVar4);
          local_48 = param_2;
          cVar2 = FUN_144902768(&local_40,&local_48);
          lVar4 = lVar1 + lVar4;
        } while (cVar2 == '\0');
        puVar5 = (undefined4 *)(lVar7 + 0x70);
      }
      else {
        puVar5 = (undefined4 *)((longlong)plVar3 + uVar6 * 4);
      }
      FUN_148d0b954(param_1,*puVar5);
    }
  }
LAB_148d0b870:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0b954 FUN_148d0b954 body=90 status=ok
// SIG undefined FUN_148d0b954(void)

void FUN_148d0b954(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x74 + (longlong)param_2 * 0x80);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x70 + lVar5 * 0x80);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x80 + 0x70);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x80 + 0x70);
  FUN_148d0b7da();
  return;
}



// FUNCTION 148d0b9ae FUN_148d0b9ae body=185 status=ok
// SIG undefined FUN_148d0b9ae(void)

int FUN_148d0b9ae(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_1400ff418(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148d0b9d7;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148d0b9d7:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 148d0ba68 FUN_148d0ba68 body=135 status=ok
// SIG undefined FUN_148d0ba68(void)

longlong FUN_148d0ba68(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148d0baf0();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x14 != 0) goto LAB_148d0baa2;
  }
  local_30 = param_3;
  FUN_148d0bbaa(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_148d0baa2:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x14 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0baf0 FUN_148d0baf0 body=185 status=ok
// SIG undefined FUN_148d0baf0(void)

int FUN_148d0baf0(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_140cba20c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148d0bb19;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148d0bb19:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 148d0bbaa FUN_148d0bbaa body=274 status=ok
// SIG undefined FUN_148d0bbaa(void)

undefined4 * FUN_148d0bbaa(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148d0bcbe(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_40 + 1) = 0;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  cVar1 = FUN_148d0bda4(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_148d0bea4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0bcbe FUN_148d0bcbe body=230 status=ok
// SIG undefined FUN_148d0bcbe(void)

int * FUN_148d0bcbe(longlong *param_1,int *param_2)

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



// FUNCTION 148d0bda4 FUN_148d0bda4 body=141 status=ok
// SIG undefined FUN_148d0bda4(void)

undefined8 FUN_148d0bda4(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar2 = FUN_148d0b9ae();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar3 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x14) = uVar3;
      FUN_148d0be32(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_148d0bdc8;
    }
  }
  uVar3 = 0;
LAB_148d0bdc8:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0be32 FUN_148d0be32 body=114 status=ok
// SIG undefined FUN_148d0be32(void)

void FUN_148d0be32(longlong *param_1,int param_2)

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



// FUNCTION 148d0bea4 FUN_148d0bea4 body=436 status=ok
// SIG undefined FUN_148d0bea4(void)

void FUN_148d0bea4(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
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



// FUNCTION 148d0c05a FUN_148d0c05a body=263 status=ok
// SIG undefined FUN_148d0c05a(void)

void FUN_148d0c05a(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar7 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x14);
      local_48 = param_2;
      cVar3 = FUN_1400ff418();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x14);
        do {
          puVar6 = puVar1;
          lVar4 = (longlong)*(int *)((longlong)puVar6 + 0xc);
          if (lVar4 == -1) goto LAB_148d0c07e;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x14);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_1400ff418(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar8 = (undefined4 *)((longlong)puVar6 + 0xc);
      }
      else {
        puVar8 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_148d0c162(param_1,*puVar8);
    }
  }
LAB_148d0c07e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0c162 FUN_148d0c162 body=87 status=ok
// SIG undefined FUN_148d0c162(void)

void FUN_148d0c162(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_148d0be32();
  return;
}



// FUNCTION 148d0c1ba FUN_148d0c1ba body=31 status=ok
// SIG undefined FUN_148d0c1ba(void)

undefined8 FUN_148d0c1ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0c1f4 FUN_148d0c1f4 body=29 status=ok
// SIG undefined FUN_148d0c1f4(void)

bool FUN_148d0c1f4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d0c212 FUN_148d0c212 body=101 status=ok
// SIG undefined FUN_148d0c212(void)

void FUN_148d0c212(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae30180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d0c278 FUN_148d0c278 body=101 status=ok
// SIG undefined FUN_148d0c278(void)

void FUN_148d0c278(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae30180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d0c2de FUN_148d0c2de body=134 status=ok
// SIG undefined FUN_148d0c2de(void)

void FUN_148d0c2de(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ae30180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b965b90;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d0c355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d0c364 FUN_148d0c364 body=62 status=ok
// SIG undefined FUN_148d0c364(void)

void FUN_148d0c364(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d0c39f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148d0c3a2 FUN_148d0c3a2 body=47 status=ok
// SIG undefined FUN_148d0c3a2(void)

void FUN_148d0c3a2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148d0c3d2 FUN_148d0c3d2 body=147 status=ok
// SIG undefined FUN_148d0c3d2(void)

void FUN_148d0c3d2(longlong param_1,int param_2)

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



// FUNCTION 148d0c466 FUN_148d0c466 body=90 status=ok
// SIG undefined FUN_148d0c466(void)

void FUN_148d0c466(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148d0c4c0 FUN_148d0c4c0 body=62 status=ok
// SIG undefined FUN_148d0c4c0(void)

void FUN_148d0c4c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148d0c4fe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148d0c4fe FUN_148d0c4fe body=112 status=ok
// SIG undefined FUN_148d0c4fe(void)

ulonglong FUN_148d0c4fe(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148d0c538;
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
LAB_148d0c538:
  return param_2 & 0xffffffff;
}



// FUNCTION 148d0c56e FUN_148d0c56e body=29 status=ok
// SIG undefined FUN_148d0c56e(void)

undefined8 FUN_148d0c56e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0c5a6 FUN_148d0c5a6 body=29 status=ok
// SIG undefined FUN_148d0c5a6(void)

bool FUN_148d0c5a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d0c5c4 FUN_148d0c5c4 body=26 status=ok
// SIG undefined FUN_148d0c5c4(void)

bool FUN_148d0c5c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d0c5de FUN_148d0c5de body=24 status=ok
// SIG undefined FUN_148d0c5de(void)

bool FUN_148d0c5de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d0c5f6 FUN_148d0c5f6 body=101 status=ok
// SIG undefined FUN_148d0c5f6(void)

void FUN_148d0c5f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965cb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d0c65c FUN_148d0c65c body=101 status=ok
// SIG undefined FUN_148d0c65c(void)

void FUN_148d0c65c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965cb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d0c6c2 FUN_148d0c6c2 body=134 status=ok
// SIG undefined FUN_148d0c6c2(void)

void FUN_148d0c6c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b965cb0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d0c739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d0c748 FUN_148d0c748 body=39 status=ok
// SIG undefined FUN_148d0c748(void)

void FUN_148d0c748(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d0c76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148d0c770 FUN_148d0c770 body=146 status=ok
// SIG undefined FUN_148d0c770(void)

bool FUN_148d0c770(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0c804 FUN_148d0c804 body=31 status=ok
// SIG undefined FUN_148d0c804(void)

undefined8 FUN_148d0c804(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0c838 FUN_148d0c838 body=85 status=ok
// SIG undefined FUN_148d0c838(void)

void FUN_148d0c838(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965d30;
  return;
}



// FUNCTION 148d0c88e FUN_148d0c88e body=118 status=ok
// SIG undefined FUN_148d0c88e(void)

void FUN_148d0c88e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b965d30;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d0c8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d0c904 FUN_148d0c904 body=101 status=ok
// SIG undefined FUN_148d0c904(void)

undefined8 FUN_148d0c904(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d74430(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0c96a FUN_148d0c96a body=29 status=ok
// SIG undefined FUN_148d0c96a(void)

undefined8 FUN_148d0c96a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0c9b0 FUN_148d0c9b0 body=93 status=ok
// SIG undefined FUN_148d0c9b0(void)

void FUN_148d0c9b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b965e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d0ca0e FUN_148d0ca0e body=93 status=ok
// SIG undefined FUN_148d0ca0e(void)

void FUN_148d0ca0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b965e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d0ca6c FUN_148d0ca6c body=126 status=ok
// SIG undefined FUN_148d0ca6c(void)

void FUN_148d0ca6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b965e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b965dc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d0cadb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d0caf8 FUN_148d0caf8 body=21 status=ok
// SIG undefined FUN_148d0caf8(void)

undefined8 FUN_148d0caf8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148d0cb10 FUN_148d0cb10 body=107 status=ok
// SIG undefined FUN_148d0cb10(void)

/* WARNING: Removing unreachable block (ram,0x000148d0cb42) */
/* WARNING: Removing unreachable block (ram,0x000148d0cb1e) */
/* WARNING: Removing unreachable block (ram,0x000148d0cb34) */
/* WARNING: Removing unreachable block (ram,0x000148d0cb4d) */
/* WARNING: Removing unreachable block (ram,0x000148d0cb36) */

void FUN_148d0cb10(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cbc6560;
  LOCK();
  UNLOCK();
  DAT_14cbc6560 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    DAT_14cbc6568 = DAT_14cbc6568 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    DAT_14cbc6568 = DAT_14cbc6568 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148d0cb7b FUN_148d0cb7b body=22 status=ok
// SIG undefined FUN_148d0cb7b(void)

void FUN_148d0cb7b(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 148d0cb92 FUN_148d0cb92 body=147 status=ok
// SIG undefined FUN_148d0cb92(void)

void FUN_148d0cb92(longlong param_1,int param_2)

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



// FUNCTION 148d0cc26 FUN_148d0cc26 body=62 status=ok
// SIG undefined FUN_148d0cc26(void)

void FUN_148d0cc26(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148d0cc64(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148d0cc64 FUN_148d0cc64 body=112 status=ok
// SIG undefined FUN_148d0cc64(void)

ulonglong FUN_148d0cc64(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148d0cc9e;
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
LAB_148d0cc9e:
  return param_2 & 0xffffffff;
}



// FUNCTION 148d0ccd4 FUN_148d0ccd4 body=113 status=ok
// SIG undefined FUN_148d0ccd4(void)

void FUN_148d0ccd4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
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



// FUNCTION 148d0cd46 FUN_148d0cd46 body=107 status=ok
// SIG undefined FUN_148d0cd46(void)

/* WARNING: Removing unreachable block (ram,0x000148d0cd78) */
/* WARNING: Removing unreachable block (ram,0x000148d0cd54) */
/* WARNING: Removing unreachable block (ram,0x000148d0cd6a) */
/* WARNING: Removing unreachable block (ram,0x000148d0cd83) */
/* WARNING: Removing unreachable block (ram,0x000148d0cd6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d0cd46(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cbc65c0;
  LOCK();
  UNLOCK();
  DAT_14cbc65c0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cbc65c8 = _DAT_14cbc65c8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cbc65c8 = _DAT_14cbc65c8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148d0cdb2 FUN_148d0cdb2 body=68 status=ok
// SIG undefined FUN_148d0cdb2(void)

undefined8 * FUN_148d0cdb2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b965ee0;
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



// FUNCTION 148d0cdfa FUN_148d0cdfa body=81 status=ok
// SIG undefined FUN_148d0cdfa(void)

undefined8 FUN_148d0cdfa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148d0ce52 FUN_148d0ce52 body=89 status=ok
// SIG undefined FUN_148d0ce52(void)

bool FUN_148d0ce52(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d0ce9d;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148d0ce9d:
  return lVar6 == param_2;
}



// FUNCTION 148d0cec8 FUN_148d0cec8 body=118 status=ok
// SIG undefined FUN_148d0cec8(void)

void FUN_148d0cec8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9667e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965ee0;
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



// FUNCTION 148d0cf3e FUN_148d0cf3e body=118 status=ok
// SIG undefined FUN_148d0cf3e(void)

void FUN_148d0cf3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9667e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965ee0;
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



// FUNCTION 148d0cfb4 FUN_148d0cfb4 body=156 status=ok
// SIG undefined FUN_148d0cfb4(void)

void FUN_148d0cfb4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9667e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b965ee0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d0d040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d0d050 FUN_148d0d050 body=104 status=ok
// SIG undefined FUN_148d0d050(void)

void FUN_148d0d050(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148d0d09d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d0d0ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148d0d0ba FUN_148d0d0ba body=48 status=ok
// SIG undefined FUN_148d0d0ba(void)

void FUN_148d0d0ba(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 148d0d0ea FUN_148d0d0ea body=120 status=ok
// SIG undefined FUN_148d0d0ea(void)

void FUN_148d0d0ea(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x30c)) {
    *(int *)(param_1 + 0x30c) = iVar3;
    FUN_148d0d162(param_1,*(undefined4 *)(param_1 + 0x308));
    return;
  }
  return;
}



// FUNCTION 148d0d162 FUN_148d0d162 body=149 status=ok
// SIG undefined FUN_148d0d162(void)

void FUN_148d0d162(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x300);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x300,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x300),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x300,param_2,param_3,0x18);
  return;
}



// FUNCTION 148d0d1f8 FUN_148d0d1f8 body=136 status=ok
// SIG undefined FUN_148d0d1f8(void)

void FUN_148d0d1f8(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x308);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x30c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x30c) = iVar5;
    FUN_148d0d162(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148d0d282 FUN_148d0d282 body=48 status=ok
// SIG undefined FUN_148d0d282(void)

void FUN_148d0d282(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 148d0d2b2 FUN_148d0d2b2 body=386 status=ok
// SIG undefined FUN_148d0d2b2(void)

longlong * FUN_148d0d2b2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148d0d3c3:
    *puVar5 = &PTR_LAB_14b966850;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b965f70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d0d3c3;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b966850;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b965f70;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148d0d434 FUN_148d0d434 body=64 status=ok
// SIG undefined FUN_148d0d434(void)

undefined8 * FUN_148d0d434(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b965f70;
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



// FUNCTION 148d0d478 FUN_148d0d478 body=81 status=ok
// SIG undefined FUN_148d0d478(void)

undefined8 FUN_148d0d478(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148d0d4d0 FUN_148d0d4d0 body=89 status=ok
// SIG undefined FUN_148d0d4d0(void)

bool FUN_148d0d4d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d0d51b;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148d0d51b:
  return lVar6 == param_2;
}



// FUNCTION 148d0d546 FUN_148d0d546 body=118 status=ok
// SIG undefined FUN_148d0d546(void)

void FUN_148d0d546(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b966850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965f70;
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



// FUNCTION 148d0d5bc FUN_148d0d5bc body=118 status=ok
// SIG undefined FUN_148d0d5bc(void)

void FUN_148d0d5bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b966850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965f70;
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



// FUNCTION 148d0d632 FUN_148d0d632 body=156 status=ok
// SIG undefined FUN_148d0d632(void)

void FUN_148d0d632(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b966850;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b965f70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d0d6be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d0d6ce FUN_148d0d6ce body=104 status=ok
// SIG undefined FUN_148d0d6ce(void)

void FUN_148d0d6ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148d0d71b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d0d72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148d0d736 FUN_148d0d736 body=101 status=ok
// SIG undefined FUN_148d0d736(void)

ulonglong FUN_148d0d736(longlong param_1)

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
LAB_148d0d790:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d0d790;
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



// FUNCTION 148d0d79e FUN_148d0d79e body=9 status=ok
// SIG undefined FUN_148d0d79e(void)

void FUN_148d0d79e(longlong param_1)

{
  FUN_148d0d7ec(param_1 + 0x10);
  return;
}



// FUNCTION 148d0d7a8 FUN_148d0d7a8 body=29 status=ok
// SIG undefined FUN_148d0d7a8(void)

undefined8 FUN_148d0d7a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0d7c6 FUN_148d0d7c6 body=38 status=ok
// SIG undefined FUN_148d0d7c6(void)

undefined8 FUN_148d0d7c6(undefined8 param_1,int param_2)

{
  FUN_148d0d7ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0d7ec FUN_148d0d7ec body=71 status=ok
// SIG undefined FUN_148d0d7ec(void)

void FUN_148d0d7ec(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b966000;
  plVar3 = (longlong *)param_1[0xd];
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
  FUN_140fae274(param_1);
  return;
}



// FUNCTION 148d0d834 FUN_148d0d834 body=167 status=ok
// SIG undefined FUN_148d0d834(void)

void FUN_148d0d834(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d0d8af;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d0d8af;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148d0d8af:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148d0d8cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d0d8dc FUN_148d0d8dc body=186 status=ok
// SIG undefined FUN_148d0d8dc(void)

void FUN_148d0d8dc(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_148d0d97e;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148d0d97e:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148d0d996 FUN_148d0d996 body=206 status=ok
// SIG undefined FUN_148d0d996(void)

void FUN_148d0d996(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  
  FUN_1457d8d86();
  uVar7 = FUN_1411f6360();
  *(undefined8 *)(param_1 + 8) = uVar7;
  puVar8 = (undefined4 *)FUN_14001cc68(0x18,0x10);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *puVar8 = *param_2;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_2 + 4);
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b9667a0;
  plVar9[2] = (longlong)puVar8;
  *(undefined4 **)(param_1 + 0x10) = puVar8;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar9 == plVar3) {
    if (plVar9 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return;
    }
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar9;
  }
  else {
    *(longlong **)(param_1 + 0x18) = plVar9;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 148d0da64 FUN_148d0da64 body=14 status=ok
// SIG undefined FUN_148d0da64(void)

void FUN_148d0da64(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
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



// FUNCTION 148d0da72 FUN_148d0da72 body=29 status=ok
// SIG undefined FUN_148d0da72(void)

undefined8 FUN_148d0da72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0da92 FUN_148d0da92 body=48 status=ok
// SIG undefined FUN_148d0da92(void)

void FUN_148d0da92(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,4);
  }
  return;
}



// FUNCTION 148d0dac2 FUN_148d0dac2 body=38 status=ok
// SIG undefined FUN_148d0dac2(void)

void FUN_148d0dac2(undefined8 *param_1)

{
  *param_1 = 0xbf80000000000000;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xbf800000;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  return;
}



// FUNCTION 148d0dae8 FUN_148d0dae8 body=147 status=ok
// SIG undefined FUN_148d0dae8(void)

void FUN_148d0dae8(longlong param_1,int param_2)

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



// FUNCTION 148d0db7c FUN_148d0db7c body=430 status=ok
// SIG undefined FUN_148d0db7c(void)

void FUN_148d0db7c(longlong param_1,longlong *param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (longlong)*(int *)(param_1 + 0x5b8)) {
    uVar5 = (longlong)*(int *)(param_1 + 0x5b8);
    do {
      lVar7 = (uVar5 - 1) * 0x20;
      lVar8 = *(longlong *)(param_1 + 0x5b0) + lVar7;
      lVar3 = FUN_141090500(lVar8);
      if (((lVar3 != 0) && (*param_2 != 0)) && ((longlong)*(int *)(lVar3 + 0x20) != 0)) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0x18) + lVar6) == *param_2) {
            lVar3 = FUN_14095dd8e(lVar3 + (ulonglong)*(byte *)(lVar8 + 0x18) * 0x28 + 0x10);
            if (lVar3 != 0) {
              local_60 = 0;
              local_58 = 0;
              local_50 = 0;
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar3);
              }
              local_58 = 1;
              lVar8 = *(longlong *)(param_1 + 0x250);
              lVar6 = lVar8;
              local_60 = lVar3;
              if ((lVar8 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                FUN_1456cec3c(lVar8);
                lVar6 = *(longlong *)(param_1 + 0x250);
              }
              local_50 = lVar8;
              FUN_14109058a(lVar6,&local_60);
            }
            uVar2 = *(uint *)(param_1 + 0x5b8);
            if (uVar5 != uVar2) {
              iVar4 = uVar2 - (int)uVar5;
              if (0 < iVar4) {
                iVar4 = 1;
              }
              memmove((void *)(lVar7 + *(longlong *)(param_1 + 0x5b0)),
                      (void *)((longlong)(int)(uVar2 - iVar4) * 0x20 +
                              *(longlong *)(param_1 + 0x5b0)),(longlong)iVar4 << 5);
              uVar2 = *(uint *)(param_1 + 0x5b8);
            }
            *(uint *)(param_1 + 0x5b8) = uVar2 - 1;
            break;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)*(int *)(lVar3 + 0x20) * 8 != lVar6);
      }
      bVar1 = 1 < (longlong)uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d0dd2c FUN_148d0dd2c body=183 status=ok
// SIG undefined FUN_148d0dd2c(void)

undefined4 FUN_148d0dd2c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x5e4);
  iVar2 = *(int *)(param_1 + 0x598);
  *(uint *)(param_1 + 0x598) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x59c) < iVar2 + 1U) {
    FUN_148d131ac((longlong *)(param_1 + 0x590),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x590);
  lVar5 = (longlong)iVar2 * 0x50;
  *(char *)(lVar3 + lVar5) = (char)uVar1;
  lVar4 = *param_2;
  *(longlong *)(lVar3 + 0x10 + lVar5) = lVar4;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = 0;
  if (lVar4 != 0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)*plVar6)(plVar6,lVar3 + lVar5 + 0x20);
  }
  *(int *)(param_1 + 0x5e4) = *(int *)(param_1 + 0x5e4) + 1;
  if (*param_2 != 0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return uVar1;
}



// FUNCTION 148d0dde4 FUN_148d0dde4 body=121 status=ok
// SIG undefined FUN_148d0dde4(void)

void FUN_148d0dde4(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x598);
  if ((longlong)iVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(byte *)(*(longlong *)(param_1 + 0x590) + uVar3) == param_2) {
        iVar2 = (int)(uVar3 >> 4) * -0x33333333;
        if (iVar1 <= iVar2 || iVar2 < 0) {
          return;
        }
        FUN_148d13240(param_1 + 0x590);
        FUN_148d132aa(param_1 + 0x590);
        return;
      }
      uVar3 = uVar3 + 0x50;
    } while ((longlong)iVar1 * 0x50 != uVar3);
  }
  return;
}



// FUNCTION 148d0de5e FUN_148d0de5e body=153 status=ok
// SIG undefined FUN_148d0de5e(void)

void FUN_148d0de5e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x614);
  uVar2 = FUN_1406820ce();
  (**(code **)(*param_3 + 8))(param_3,uVar2,5,uVar1,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x620);
  uVar2 = FUN_140682380();
  (**(code **)(*param_3 + 8))(param_3,uVar2,5,uVar1,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x62c);
  uVar2 = FUN_1406821b4();
  (**(code **)(*param_3 + 8))(param_3,uVar2,5,uVar1,0,0);
  return;
}



// FUNCTION 148d0def8 FUN_148d0def8 body=140 status=ok
// SIG undefined FUN_148d0def8(void)

void FUN_148d0def8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
        lVar4 = FUN_14069c71e();
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          FUN_1410902a8(plVar2,param_2,param_3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148d0df84 FUN_148d0df84 body=127 status=ok
// SIG undefined FUN_148d0df84(void)

void FUN_148d0df84(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
        lVar4 = FUN_14069c71e();
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          FUN_14069c758(plVar2,param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148d0e004 FUN_148d0e004 body=161 status=ok
// SIG undefined FUN_148d0e004(void)

void FUN_148d0e004(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (param_1 != 0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
        lVar4 = FUN_14069c71e();
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          FUN_148d0db7c(plVar2,&local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0e0a6 FUN_148d0e0a6 body=87 status=ok
// SIG undefined FUN_148d0e0a6(void)

void FUN_148d0e0a6(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (*(char *)(param_1 + 0x178) == '\x03')) {
      FUN_1400bc96c(param_1 + 0x41b8,&DAT_14cbc6e20);
      return;
    }
  }
  return;
}



// FUNCTION 148d0e0fe FUN_148d0e0fe body=87 status=ok
// SIG undefined FUN_148d0e0fe(void)

void FUN_148d0e0fe(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (*(char *)(param_1 + 0x178) == '\x03')) {
      FUN_1400bc8c2(param_1 + 0x41b8,&DAT_14cbc6e20);
      return;
    }
  }
  return;
}



// FUNCTION 148d0e156 FUN_148d0e156 body=727 status=ok
// SIG undefined FUN_148d0e156(void)

void FUN_148d0e156(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined4 *local_1d8;
  undefined *local_1d0;
  undefined1 *local_1c8;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [184];
  undefined1 local_e0 [32];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((param_1 != 0) && (lVar8 = FUN_14082ce84(param_4), lVar8 != 0)) {
    FUN_1405fab15(&local_70);
    *(undefined2 *)(local_70 + 0x279) = 0x101;
    *(undefined4 *)(local_70 + 0x78) = param_3;
    *(undefined1 *)(local_70 + 0x7c) = 1;
    lVar9 = FUN_14492b4b4(param_1);
    if (lVar9 != 0) {
      uVar10 = FUN_1447210f0(param_1);
      local_88 = 0;
      uStack_80 = 0;
      local_1d8 = &local_98;
      local_98 = 2;
      local_1c8 = &DAT_14cad0f10;
      local_1d0 = &DAT_14cad0f68;
      local_1e8 = &DAT_14c8463d0;
      local_1e0 = 1;
      local_94 = param_3;
      cVar6 = FUN_14038e76e(uVar10,&local_88,param_2,param_2);
      if (cVar6 != '\0') {
        if ((longlong)(int)uStack_80 != 0) {
          lVar12 = (longlong)(int)uStack_80 * 0x100 + local_88;
          lVar13 = local_88 + 0xb8;
          local_1b8 = lVar8;
          local_1b0 = lVar9;
          do {
            memcpy(local_198,(void *)(lVar13 + -0xb8),0xb8);
            FUN_144b23946(local_e0,lVar13);
            local_c0 = *(undefined4 *)(lVar13 + 0x20);
            uStack_bc = *(undefined4 *)(lVar13 + 0x24);
            uStack_b8 = *(undefined4 *)(lVar13 + 0x28);
            uStack_b4 = *(undefined4 *)(lVar13 + 0x2c);
            local_b0 = *(undefined4 *)(lVar13 + 0x30);
            uStack_ac = *(undefined4 *)(lVar13 + 0x34);
            uStack_a8 = *(undefined4 *)(lVar13 + 0x38);
            uStack_a4 = *(undefined4 *)(lVar13 + 0x3c);
            local_a0 = *(undefined8 *)(lVar13 + 0x40);
            lVar8 = FUN_14485cccc(local_e0);
            if (lVar8 != 0) {
              lVar9 = FUN_144a2f878();
              if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
                 (iVar7 = FUN_14486116a(local_1b0,lVar8), iVar7 == 2)) {
                lVar8 = *(longlong *)(lVar8 + 0x1c8);
                if (lVar8 == 0) {
                  uVar14 = (undefined4)DAT_14c8464f0;
                  uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                  puVar11 = &DAT_14c8464e0;
                }
                else {
                  uVar14 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
                  uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
                  puVar11 = (undefined8 *)(lVar8 + 0x260);
                }
                uVar3 = *(undefined4 *)((longlong)puVar11 + 4);
                uVar4 = *(undefined4 *)(puVar11 + 1);
                uVar5 = *(undefined4 *)((longlong)puVar11 + 0xc);
                *(undefined4 *)(local_70 + 0x1e0) = *(undefined4 *)puVar11;
                *(undefined4 *)(local_70 + 0x1e4) = uVar3;
                *(undefined4 *)(local_70 + 0x1e8) = uVar4;
                *(undefined4 *)(local_70 + 0x1ec) = uVar5;
                *(ulonglong *)(local_70 + 0x1f0) = CONCAT44(uVar15,uVar14);
                *(undefined1 *)(local_70 + 0x1f8) = 1;
                local_1a8 = local_70;
                local_1a0 = local_68;
                if (local_68 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_68 + 1) = (int)local_68[1] + 1;
                  UNLOCK();
                }
                local_1e8 = (undefined8 *)0x0;
                FUN_1405fd19a(param_1,local_1b8,0,&local_1a8);
              }
            }
            lVar8 = lVar13 + 0x48;
            lVar13 = lVar13 + 0x100;
          } while (lVar8 != lVar12);
        }
      }
      if (local_88 != 0) {
        FUN_1400020a8(local_88);
      }
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d0e42e FUN_148d0e42e body=143 status=ok
// SIG undefined FUN_148d0e42e(void)

void FUN_148d0e42e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_30 = *param_2;
      local_28 = param_2[1];
      FUN_1403350f6(param_1 + 0x7340);
      FUN_144a7b126(param_1 + 0x7340,&local_19,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0e4be FUN_148d0e4be body=146 status=ok
// SIG undefined FUN_148d0e4be(void)

void FUN_148d0e4be(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_30 = *param_2;
      local_28 = param_2[1];
      FUN_140805e68(param_1 + 0x7340,&local_30,1);
      FUN_144a7b126(param_1 + 0x7340,&local_19,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0e552 FUN_148d0e552 body=56 status=ok
// SIG undefined FUN_148d0e552(void)

undefined8 FUN_148d0e552(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  return 1;
}



// FUNCTION 148d0e58a FUN_148d0e58a body=1225 status=ok
// SIG undefined FUN_148d0e58a(void)

void FUN_148d0e58a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((longlong)*(int *)(param_1 + 0x4b8) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x4b0);
    lVar10 = (longlong)*(int *)(param_1 + 0x4b8) * 0x858 + lVar9;
    do {
      lVar7 = 0;
      do {
        plVar8 = (longlong *)(lVar9 + lVar7 + 0x1b8);
        lVar4 = *plVar8;
        if (lVar4 == 0) {
          uVar3 = FUN_140067708();
          lVar4 = FUN_14477b664(uVar3);
          *plVar8 = lVar4;
        }
        plVar5 = (longlong *)(lVar9 + lVar7 + 0x1b0);
        if (*(longlong *)(lVar9 + lVar7 + 0x1c0) == 0) {
          if ((lVar4 != 0) && (*plVar5 != 0)) {
            plVar6 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar6 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
              *(undefined8 *)(lVar9 + 0x1c0 + lVar7) = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar6 + 0x110))(plVar6);
              lVar4 = FUN_144aff482(uVar3,plVar5);
              *(longlong *)(lVar9 + 0x1c0 + lVar7) = lVar4;
              if (lVar4 != 0) goto LAB_148d0e600;
            }
          }
        }
        else {
LAB_148d0e600:
          lVar4 = *(longlong *)(lVar9 + 0x140 + lVar7);
          if (lVar4 == 0) {
            uVar3 = FUN_140067708();
            lVar4 = FUN_14477b664(uVar3);
            *(longlong *)(lVar9 + 0x140 + lVar7) = lVar4;
          }
          if (*(longlong *)(lVar9 + 0x148 + lVar7) == 0) {
            plVar6 = (longlong *)(lVar9 + lVar7 + 0x138);
            if ((lVar4 != 0) && (*plVar6 != 0)) {
              plVar1 = *(longlong **)(lVar4 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                *(undefined8 *)(lVar9 + 0x148 + lVar7) = 0;
              }
              else {
                uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar4 = FUN_144aff482(uVar3,plVar6);
                *(longlong *)(lVar9 + 0x148 + lVar7) = lVar4;
                if (lVar4 != 0) goto LAB_148d0e631;
              }
            }
            FUN_144a7bb84(plVar6,plVar5);
            *plVar5 = 0;
            *plVar8 = 0;
            *(undefined8 *)(lVar9 + lVar7 + 0x1c0) = 0;
          }
        }
LAB_148d0e631:
        plVar8 = (longlong *)(lVar9 + lVar7 + 0x1d0);
        lVar4 = *plVar8;
        if (lVar4 == 0) {
          uVar3 = FUN_140067708();
          lVar4 = FUN_14477b664(uVar3);
          *plVar8 = lVar4;
        }
        plVar5 = (longlong *)(lVar9 + lVar7 + 0x1c8);
        if (*(longlong *)(lVar9 + lVar7 + 0x1d8) == 0) {
          if ((lVar4 != 0) && (*plVar5 != 0)) {
            plVar6 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar6 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
              *(undefined8 *)(lVar9 + 0x1d8 + lVar7) = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar6 + 0x110))(plVar6);
              lVar4 = FUN_144aff482(uVar3,plVar5);
              *(longlong *)(lVar9 + 0x1d8 + lVar7) = lVar4;
              if (lVar4 != 0) goto LAB_148d0e66c;
            }
          }
        }
        else {
LAB_148d0e66c:
          lVar4 = *(longlong *)(lVar9 + 0x158 + lVar7);
          if (lVar4 == 0) {
            uVar3 = FUN_140067708();
            lVar4 = FUN_14477b664(uVar3);
            *(longlong *)(lVar9 + 0x158 + lVar7) = lVar4;
          }
          if (*(longlong *)(lVar9 + 0x160 + lVar7) == 0) {
            plVar6 = (longlong *)(lVar9 + lVar7 + 0x150);
            if ((lVar4 != 0) && (*plVar6 != 0)) {
              plVar1 = *(longlong **)(lVar4 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                *(undefined8 *)(lVar9 + 0x160 + lVar7) = 0;
              }
              else {
                uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar4 = FUN_144aff482(uVar3,plVar6);
                *(longlong *)(lVar9 + 0x160 + lVar7) = lVar4;
                if (lVar4 != 0) goto LAB_148d0e69d;
              }
            }
            FUN_144a7bb84(plVar6,plVar5);
            *plVar5 = 0;
            *plVar8 = 0;
            *(undefined8 *)(lVar9 + lVar7 + 0x1d8) = 0;
          }
        }
LAB_148d0e69d:
        plVar8 = (longlong *)(lVar9 + lVar7 + 0x1e8);
        lVar4 = *plVar8;
        if (lVar4 == 0) {
          uVar3 = FUN_140067708();
          lVar4 = FUN_14477b664(uVar3);
          *plVar8 = lVar4;
        }
        plVar5 = (longlong *)(lVar9 + lVar7 + 0x1e0);
        if (*(longlong *)(lVar9 + lVar7 + 0x1f0) == 0) {
          if ((lVar4 != 0) && (*plVar5 != 0)) {
            plVar6 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar6 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
              *(undefined8 *)(lVar9 + 0x1f0 + lVar7) = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar6 + 0x110))(plVar6);
              lVar4 = FUN_144aff482(uVar3,plVar5);
              *(longlong *)(lVar9 + 0x1f0 + lVar7) = lVar4;
              if (lVar4 != 0) goto LAB_148d0e6d8;
            }
          }
        }
        else {
LAB_148d0e6d8:
          lVar4 = *(longlong *)(lVar9 + 0x188 + lVar7);
          if (lVar4 == 0) {
            uVar3 = FUN_140067708();
            lVar4 = FUN_14477b664(uVar3);
            *(longlong *)(lVar9 + 0x188 + lVar7) = lVar4;
          }
          if (*(longlong *)(lVar9 + 400 + lVar7) == 0) {
            plVar6 = (longlong *)(lVar9 + lVar7 + 0x180);
            if ((lVar4 != 0) && (*plVar6 != 0)) {
              plVar1 = *(longlong **)(lVar4 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                *(undefined8 *)(lVar9 + 400 + lVar7) = 0;
              }
              else {
                uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar4 = FUN_144aff482(uVar3,plVar6);
                *(longlong *)(lVar9 + 400 + lVar7) = lVar4;
                if (lVar4 != 0) goto LAB_148d0e709;
              }
            }
            FUN_144a7bb84(plVar6,plVar5);
            *plVar5 = 0;
            *plVar8 = 0;
            *(undefined8 *)(lVar9 + lVar7 + 0x1f0) = 0;
          }
        }
LAB_148d0e709:
        lVar7 = lVar7 + 0x210;
      } while (lVar7 != 0x840);
      lVar9 = lVar9 + 0x858;
    } while (lVar9 != lVar10);
  }
  return;
}



// FUNCTION 148d0ea54 FUN_148d0ea54 body=62 status=ok
// SIG undefined FUN_148d0ea54(void)

undefined8 * FUN_148d0ea54(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1405831b2();
  *param_1 = *(undefined8 *)(lVar1 + 0xd18 + (param_2 & 0xff) * 0x18);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar1 + 0xd20 + (param_2 & 0xff) * 0x18);
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 148d0ea92 FUN_148d0ea92 body=81 status=ok
// SIG undefined FUN_148d0ea92(void)

undefined8 FUN_148d0ea92(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_1405faa04();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14018fb44();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),
                      *(undefined1 *)((longlong)plVar1 + 0x121));
    }
  }
  return 0;
}



// FUNCTION 148d0eae4 FUN_148d0eae4 body=659 status=ok
// SIG undefined FUN_148d0eae4(void)

void FUN_148d0eae4(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_90 = 0;
  local_8c = 0xffffffffffffffff;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  local_c8 = DAT_14cbc82e0;
  local_98 = 0x34;
  FUN_144a5dc74(local_d8);
  FUN_1446f470e(&local_100,L"Intrinsic Element Interface",1);
  local_110 = *(longlong *)(param_1 + 0x10);
  if ((local_110 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_108 = 1;
  local_106 = 0;
  local_104 = 0xffffffff;
  local_f8 = local_100;
  local_f0[0] = FUN_144830b78(local_f0);
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1480742ba(&local_c8,&local_f8,local_d8);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_144a5dc74(local_d8);
  FUN_1446f470e(&local_100,L"Intrinsic Element",1);
  local_110 = FUN_1409f759a();
  if ((local_110 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_110);
  }
  local_108 = 3;
  local_106 = 0;
  local_104 = 0xffffffff;
  local_f8 = local_100;
  local_f0[0] = FUN_144830b78(local_f0);
  uVar2 = uStack_a8;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar4 = (longlong)(int)uStack_a8;
  uVar3 = (int)uStack_a8 + 1;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar3);
  if (uStack_a8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_b0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_b0 + 8 + lVar4 * 0xc) = local_f0[0];
  *(undefined8 *)(local_b0 + lVar4 * 0xc) = local_f8;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_c8);
  FUN_148060334(&local_c8);
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0ed78 FUN_148d0ed78 body=218 status=ok
// SIG undefined FUN_148d0ed78(void)

void FUN_148d0ed78(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == DAT_14cbc82e0) {
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
    *local_30 = &PTR_FUN_14b967290;
    local_30[3] = param_1;
    FUN_144a450dc(param_4,&local_30);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0ee54 FUN_148d0ee54 body=148 status=ok
// SIG undefined FUN_148d0ee54(void)

void FUN_148d0ee54(int *param_1,char *param_2)

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



// FUNCTION 148d0ef0a FUN_148d0ef0a body=162 status=ok
// SIG undefined FUN_148d0ef0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d0ef0a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar6 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0x50);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 0x18);
        if (*plVar5 == lVar2) goto LAB_148d0ef62;
        iVar3 = (int)plVar5[2];
      } while (iVar3 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_148d0ef62:
  uVar4 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_148d136ec();
  *(uint *)(param_2 + 0x50) = uVar4 + _DAT_14cbc8e0c;
  *(uint *)(*(longlong *)(param_2 + 0x38) + (ulonglong)uVar4) = (uint)*(byte *)(plVar5 + 1);
  return;
}



// FUNCTION 148d0efb8 FUN_148d0efb8 body=59 status=ok
// SIG undefined FUN_148d0efb8(void)

bool FUN_148d0efb8(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
    lVar2 = FUN_14479d2ce(param_3 + 0x48);
    if (lVar2 != 0) {
      uVar1 = FUN_140ca96da(*(undefined8 *)(lVar2 + 0xa8));
      *param_2 = uVar1;
    }
  }
  return param_2 == (undefined1 *)0x0;
}



// FUNCTION 148d0effe FUN_148d0effe body=287 status=ok
// SIG undefined FUN_148d0effe(void)

void FUN_148d0effe(longlong param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  lVar4 = param_1 + 0xf8;
  cVar2 = FUN_14486ea84(lVar4);
  if (cVar2 == '\0') {
    return;
  }
  if ((param_3 < param_2) && (*(longlong *)(param_1 + 0x118) == 0)) {
    fVar5 = *(float *)(param_1 + 0x128);
    if (*(float *)(param_1 + 0x128) <= param_3) {
      fVar5 = param_3;
    }
    uVar1 = thunk_FUN_14008e0ae(lVar4);
    lVar3 = FUN_14008e0a4(uVar1);
    *(float *)(lVar3 + 0x34) = fVar5;
    FUN_14020a6cc(lVar3 + 0x2c,1);
    uVar1 = thunk_FUN_14008e0ae(lVar4);
    lVar3 = FUN_14008e0a4(uVar1);
    fVar5 = *(float *)(lVar3 + 200);
    if (param_3 <= *(float *)(lVar3 + 200)) {
      fVar5 = param_3;
    }
    *(float *)(param_1 + 300) = fVar5;
    uVar1 = thunk_FUN_14008e0ae(lVar4);
    uVar1 = FUN_14008e0a4(uVar1);
    FUN_1409d461e(uVar1,fVar5,1);
    return;
  }
  uVar1 = thunk_FUN_14008e0ae(lVar4);
  lVar3 = FUN_14008e0a4(uVar1);
  fVar5 = *(float *)(lVar3 + 0x30);
  if (*(float *)(lVar3 + 0x30) <= param_3) {
    fVar5 = param_3;
  }
  uVar1 = thunk_FUN_14008e0ae(lVar4);
  lVar4 = FUN_14008e0a4(uVar1);
  *(float *)(lVar4 + 0x34) = fVar5;
  FUN_14020a6cc(lVar4 + 0x2c,1);
  return;
}



// FUNCTION 148d0f11e FUN_148d0f11e body=263 status=ok
// SIG undefined FUN_148d0f11e(void)

void FUN_148d0f11e(longlong param_1,float param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  
  cVar3 = FUN_144729dda(param_1 + 0xf0);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(param_1 + 0xf0);
    if (*(char *)(lVar4 + 0x178) == '\x03') {
      lVar4 = param_1 + 0xf8;
      cVar3 = FUN_14486ea84(lVar4);
      if ((cVar3 != '\0') && (0.0001 < *(float *)(param_1 + 0x138))) {
        uVar1 = thunk_FUN_14008e0ae(lVar4);
        lVar2 = FUN_14008e0a4(uVar1);
        param_2 = *(float *)(lVar2 + 200) - param_2;
        fVar5 = 0.0;
        if (0.0 <= param_2) {
          fVar5 = param_2;
        }
        uVar1 = thunk_FUN_14008e0ae(lVar4);
        lVar2 = FUN_14008e0a4(uVar1);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(lVar2 + 200);
        uVar1 = thunk_FUN_14008e0ae(lVar4);
        uVar1 = FUN_14008e0a4(uVar1);
        FUN_1409d461e(uVar1,fVar5,1);
        uVar1 = thunk_FUN_14008e0ae(lVar4);
        lVar4 = FUN_14008e0a4(uVar1);
        *(float *)(lVar4 + 0xc4) = fVar5;
        FUN_14020a6cc(lVar4 + 0xbc,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d0f226 FUN_148d0f226 body=89 status=ok
// SIG undefined FUN_148d0f226(void)

void FUN_148d0f226(longlong param_1,float param_2)

{
  if (*(float *)(param_1 + 300) <= param_2 && param_2 != *(float *)(param_1 + 300)) {
    *(undefined1 *)(param_1 + 0x131) = 0;
    if (0.0001 < param_2 - *(float *)(param_1 + 0x144)) {
      FUN_1461bfdbe(param_1);
    }
    FUN_1461c006a(param_1);
  }
  *(float *)(param_1 + 300) = param_2;
  return;
}



// FUNCTION 148d0f280 FUN_148d0f280 body=143 status=ok
// SIG undefined FUN_148d0f280(void)

int FUN_148d0f280(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14011bb82(param_1,iVar1);
  }
  lVar4 = (longlong)param_3 * 0x18;
  memmove((void *)(*param_1 + lVar4 + 0x18),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar1 - param_3) * 0x18);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar4) = param_2[1];
  lVar3 = param_2[2];
  *(longlong *)(lVar2 + 0x10 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 148d0f310 FUN_148d0f310 body=508 status=ok
// SIG undefined FUN_148d0f310(void)

void FUN_148d0f310(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_1;
  if (lVar4 == 0) goto LAB_148d0f4c0;
  FUN_1401533ba(&local_58,&DAT_14cbc8318);
  lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x9b0) + 0x18))(lVar4 + 0x9b0);
  if ((lVar4 == 0) || ((int)param_1[2] == 0)) goto LAB_148d0f4c0;
  lVar4 = FUN_1403ca227();
  if ((longlong)*(int *)(lVar4 + 0x458) == 0) goto LAB_148d0f4c0;
  local_58 = 0;
  uStack_50 = 0;
  lVar7 = (longlong)(int)param_1[2];
  if (lVar7 < 1) {
    puVar5 = *(undefined1 **)(lVar4 + 0x450);
    puVar6 = puVar5 + (longlong)*(int *)(lVar4 + 0x458) * 0x18;
    uVar8 = 0;
    lVar4 = 0;
LAB_148d0f445:
    do {
      uVar3 = *(uint *)(puVar5 + 0x10);
      if ((int)uVar3 <= (int)uVar8) {
        if ((int)uVar3 < 1) {
LAB_148d0f480:
          FUN_148d0f50e(param_1,CONCAT71((int7)(uVar8 >> 8),*puVar5));
          FUN_144a65a1e(param_1[1],(int)param_1[2]);
          *(undefined4 *)(param_1 + 2) = 0;
          if (*(int *)((longlong)param_1 + 0x14) != 0) {
            FUN_145811e2e(param_1 + 1,0);
          }
          break;
        }
        lVar7 = 0;
        while (*(longlong *)(*(longlong *)(puVar5 + 8) + lVar7) == *(longlong *)(lVar4 + lVar7)) {
          lVar7 = lVar7 + 0x18;
          if ((ulonglong)uVar3 * 0x18 == lVar7) goto LAB_148d0f480;
        }
      }
      puVar5 = puVar5 + 0x18;
    } while (puVar5 != puVar6);
  }
  else {
    uVar8 = lVar7 + 1;
    lVar7 = lVar7 * 0x18 + -8;
    do {
      uVar2 = uStack_50;
      lVar1 = param_1[1];
      lVar9 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_14011bb82(&local_58,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar9 * 0x18) = *(undefined8 *)(lVar1 + -0x10 + lVar7);
      *(undefined8 *)(local_58 + 8 + lVar9 * 0x18) = *(undefined8 *)(lVar1 + -8 + lVar7);
      lVar1 = *(longlong *)(lVar1 + lVar7);
      *(longlong *)(local_58 + 0x10 + lVar9 * 0x18) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + -0x18;
    } while (1 < uVar8);
    if ((longlong)*(int *)(lVar4 + 0x458) != 0) {
      puVar5 = *(undefined1 **)(lVar4 + 0x450);
      puVar6 = puVar5 + (longlong)*(int *)(lVar4 + 0x458) * 0x18;
      uVar8 = uStack_50 & 0xffffffff;
      lVar4 = local_58;
      goto LAB_148d0f445;
    }
  }
  FUN_144a65a1e(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_148d0f4c0:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d0f50e FUN_148d0f50e body=188 status=ok
// SIG undefined FUN_148d0f50e(void)

void FUN_148d0f50e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_14487fd02();
    if (iVar1 == 3) {
      FUN_148c378d0(*param_1,param_2);
      return;
    }
    if ((byte)param_2 < 8) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_2 & 0xff) {
      case 0:
        FUN_148d0f5ca(param_1);
        return;
      case 1:
        FUN_148d0f64a(param_1);
        return;
      case 2:
        FUN_148d0f830(param_1);
        return;
      case 3:
        FUN_148d0fa16(param_1);
        return;
      case 4:
        FUN_148d0fde8(param_1);
        return;
      case 5:
        FUN_148d0feda(param_1);
        return;
      case 6:
        FUN_148d0ff7a(param_1);
        return;
      case 7:
        FUN_148d10018(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d0f5ca FUN_148d0f5ca body=127 status=ok
// SIG undefined FUN_148d0f5ca(void)

void FUN_148d0f5ca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*(longlong *)*param_1 + 0x5e0))();
    if (lVar2 != 0) {
      lVar3 = FUN_144a2f878();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        iVar1 = (**(code **)(*(longlong *)(lVar2 + 0x10c0) + 0x28))(lVar2 + 0x10c0);
        lVar2 = *param_1;
        uVar4 = FUN_1401e6c61();
        FUN_1441f0100(lVar2,uVar4,iVar1 + 5,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d0f64a FUN_148d0f64a body=485 status=ok
// SIG undefined FUN_148d0f64a(void)

void FUN_148d0f64a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) goto LAB_148d0f722;
  lVar4 = FUN_1403ca227();
  lVar6 = *(longlong *)(lVar4 + 0x410);
  if (lVar6 == 0) {
    uVar5 = FUN_140dddfde();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x410) = lVar6;
  }
  plVar9 = (longlong *)(lVar4 + 0x408);
  lVar7 = *(longlong *)(lVar4 + 0x418);
  if (lVar7 == 0) {
    if ((lVar6 == 0) || (*plVar9 == 0)) goto LAB_148d0f722;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,plVar9);
        *(longlong *)(lVar4 + 0x418) = lVar7;
        if (lVar7 == 0) goto LAB_148d0f722;
        lVar6 = *(longlong *)(lVar4 + 0x410);
        goto LAB_148d0f6b4;
      }
    }
    *(undefined8 *)(lVar4 + 0x418) = 0;
    goto LAB_148d0f722;
  }
LAB_148d0f6b4:
  lVar1 = *param_1;
  if (lVar6 == 0) {
    uVar5 = FUN_140dddfde();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x410) = lVar6;
    lVar7 = *(longlong *)(lVar4 + 0x418);
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar9 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_148d0f82c:
        lVar7 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 == '\0') goto LAB_148d0f82c;
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,plVar9);
      }
      *(longlong *)(lVar4 + 0x418) = lVar7;
    }
  }
  puVar8 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(lVar7 + 8);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_1400b2348(puVar8,local_48,1);
  FUN_1405f0cf6(local_34,local_48,0,1);
  (**(code **)(*(longlong *)(lVar1 + 0x9b0) + 0x28))((longlong *)(lVar1 + 0x9b0),local_34,1000000);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_148d0f722:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0f830 FUN_148d0f830 body=485 status=ok
// SIG undefined FUN_148d0f830(void)

void FUN_148d0f830(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) goto LAB_148d0f908;
  lVar4 = FUN_1403ca227();
  lVar6 = *(longlong *)(lVar4 + 0x428);
  if (lVar6 == 0) {
    uVar5 = FUN_140dddfde();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x428) = lVar6;
  }
  plVar9 = (longlong *)(lVar4 + 0x420);
  lVar7 = *(longlong *)(lVar4 + 0x430);
  if (lVar7 == 0) {
    if ((lVar6 == 0) || (*plVar9 == 0)) goto LAB_148d0f908;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,plVar9);
        *(longlong *)(lVar4 + 0x430) = lVar7;
        if (lVar7 == 0) goto LAB_148d0f908;
        lVar6 = *(longlong *)(lVar4 + 0x428);
        goto LAB_148d0f89a;
      }
    }
    *(undefined8 *)(lVar4 + 0x430) = 0;
    goto LAB_148d0f908;
  }
LAB_148d0f89a:
  lVar1 = *param_1;
  if (lVar6 == 0) {
    uVar5 = FUN_140dddfde();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x428) = lVar6;
    lVar7 = *(longlong *)(lVar4 + 0x430);
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar9 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_148d0fa12:
        lVar7 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 == '\0') goto LAB_148d0fa12;
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,plVar9);
      }
      *(longlong *)(lVar4 + 0x430) = lVar7;
    }
  }
  puVar8 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(lVar7 + 8);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_1400b2348(puVar8,local_48,1);
  FUN_1405f0cf6(local_34,local_48,0,1);
  (**(code **)(*(longlong *)(lVar1 + 0x9b0) + 0x28))((longlong *)(lVar1 + 0x9b0),local_34,100000);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_148d0f908:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0fa16 FUN_148d0fa16 body=976 status=ok
// SIG undefined FUN_148d0fa16(void)

void FUN_148d0fa16(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_428 [32];
  undefined8 *local_408;
  longlong *local_3f8;
  undefined8 local_3f0;
  undefined2 *local_3e8;
  undefined8 local_3e0;
  longlong local_3d8;
  undefined4 local_3d0;
  int local_3cc;
  longlong local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8 [2];
  undefined8 local_3a8;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  longlong *local_360;
  longlong *local_358;
  longlong local_350;
  longlong local_340;
  byte local_1b8;
  undefined1 local_128 [48];
  undefined2 local_f8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if ((*param_1 != 0) && (lVar8 = FUN_14492b4b4(), lVar8 != 0)) {
    local_3c8 = 0;
    uStack_3c0 = 0;
    local_3f8 = param_1;
    local_3f0 = FUN_1447210f0(*param_1);
    FUN_14020a61a(&local_378,&DAT_14cb246c8);
    lVar11 = local_350;
    plVar4 = local_358;
    plVar10 = local_360;
    plVar13 = (longlong *)CONCAT44(uStack_36c,local_370);
    lVar14 = CONCAT44(uStack_364,uStack_368);
    LOCK();
    piVar1 = (int *)(lVar14 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_350 + 8) = *(int *)(local_350 + 8) + 1;
    UNLOCK();
LAB_148d0fab5:
    lVar9 = local_3c8;
    plVar2 = local_3f8;
    if (plVar13 != plVar4) {
      lVar9 = FUN_14479d2ce(plVar13[2]);
      if ((lVar9 != 0) && (iVar6 = FUN_14486116a(lVar8,lVar9), uVar3 = uStack_3c0, iVar6 == 2)) {
        lVar15 = (longlong)(int)uStack_3c0;
        uVar7 = (int)uStack_3c0 + 1;
        uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar7);
        if (uStack_3c0._4_4_ < uVar7) {
          FUN_1447d05f2(&local_3c8,uVar3 & 0xffffffff);
        }
        *(longlong *)(local_3c8 + lVar15 * 8) = lVar9;
      }
      do {
        plVar13 = (longlong *)*plVar13;
        if (plVar13 == (longlong *)0x0) break;
        lVar9 = FUN_14020a22e(plVar13[2]);
      } while (lVar9 != *plVar10);
      goto LAB_148d0fab5;
    }
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + -1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(lVar14 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_350 + 8) = *(int *)(local_350 + 8) + -1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_364,uStack_368) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar8 = (longlong)(int)uStack_3c0;
    if (lVar8 != 0) {
      lVar14 = 0;
      do {
        plVar13 = *(longlong **)(lVar9 + lVar14);
        plVar10 = (longlong *)(**(code **)(*plVar13 + 0x5e0))(plVar13);
        if (plVar10 == (longlong *)0x0) {
LAB_148d0fbaa:
          if (plVar13 != (longlong *)0x0) {
            uVar12 = FUN_144a7b040();
            plVar10 = (longlong *)FUN_144718840(plVar13,uVar12);
            if ((plVar10 != (longlong *)0x0) &&
               (lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10), lVar11 != 0)) {
              FUN_14082cf0e(&local_378,plVar13,0,0);
              lVar15 = *plVar2;
              if (DAT_14c950c29 == '\x01') {
                if (lVar15 == 0) {
                  lVar15 = 0;
                }
                else {
                  FUN_1456cec3c();
                  lVar15 = *plVar2;
                }
              }
              local_f8 = 0x101;
              local_3f0 = CONCAT44(local_3f0._4_4_,7);
              local_340 = lVar15;
              FUN_1405c5f70(&local_3e8);
              FUN_14572d130(local_128,&local_3f0);
              local_3e8 = &DAT_14a171d50;
              local_3d0 = 0;
              if (local_3cc != 0) {
                FUN_140115c12(&local_3d8,0);
              }
              local_3e0 = 0;
              if (local_3d8 != 0) {
                FUN_1400020a8();
              }
              local_1b8 = local_1b8 | 8;
              fVar16 = (float)FUN_140f8608e(lVar11);
              local_3b8[0] = 0;
              local_3a8 = 0;
              local_408 = local_3b8;
              FUN_14082d216(&local_378,fVar16 * 100.0);
              FUN_1403dfdc4(&local_378);
            }
          }
        }
        else {
          lVar11 = FUN_144a2f878();
          if ((*(int *)(plVar10[2] + 0x38) < *(int *)(lVar11 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
              lVar11 + 0x30)) goto LAB_148d0fbaa;
          uVar12 = (**(code **)(plVar10[0x10f] + 0x10))(plVar10 + 0x10f);
          FUN_1411d52e8(uVar12,*(undefined8 *)(*plVar2 + 0x3d0));
          (**(code **)(*plVar10 + 0x928))(plVar10,3);
          local_378 = 0;
          local_360 = DAT_14c8464f0;
          local_370 = (undefined4)DAT_14c8464e0;
          uStack_36c = DAT_14c8464e0._4_4_;
          uStack_368 = (undefined4)DAT_14c8464e8;
          uStack_364 = DAT_14c8464e8._4_4_;
          local_358 = (longlong *)0x0;
          local_3f0 = 0;
          cVar5 = FUN_141533d14(plVar10);
          if (cVar5 == '\0') {
            cVar5 = FUN_143c98270(plVar10);
            uVar12 = 2;
            if (cVar5 != '\0') goto LAB_148d0fc5d;
          }
          else {
LAB_148d0fc5d:
            uVar12 = 0;
          }
          local_408 = (undefined8 *)0x0;
          FUN_140ecfed2(plVar10 + 0xf8f,uVar12,&local_3f0,&local_378);
        }
        lVar14 = lVar14 + 8;
      } while (lVar8 * 8 != lVar14);
    }
    if (local_3c8 != 0) {
      FUN_1400020a8(local_3c8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d0fde8 FUN_148d0fde8 body=240 status=ok
// SIG undefined FUN_148d0fde8(void)

void FUN_148d0fde8(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 != 0) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_1489ad626(&local_68);
    if ((longlong)(int)uStack_60 != 0) {
      puVar1 = local_68 + (int)uStack_60;
      puVar3 = local_68;
      do {
        local_78 = 0;
        uStack_70 = 0;
        FUN_145c4e23a(*puVar3,&local_78);
        lVar2 = local_78;
        lVar4 = (longlong)(int)uStack_70;
        if (lVar4 != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(lVar2 + lVar5) != 0) {
              FUN_1410c689e(*(longlong *)(lVar2 + lVar5),*param_1);
            }
            lVar5 = lVar5 + 8;
          } while (lVar4 * 8 != lVar5);
        }
        if (local_78 != 0) {
          FUN_1400020a8(local_78);
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar1);
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d0feda FUN_148d0feda body=160 status=ok
// SIG undefined FUN_148d0feda(void)

void FUN_148d0feda(longlong *param_1)

{
  char cVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc8328) {
    FUN_144b3d300(&DAT_14cbc8328);
    if (DAT_14cbc8328 == -1) {
      FUN_1446ddc76(&DAT_14cbc8320,"DevPerk",1);
      _Init_thread_footer(&DAT_14cbc8328);
    }
  }
  if (*param_1 != 0) {
    cVar1 = FUN_1441f0862();
    if (cVar1 != '\0') {
      FUN_1400bc8c2();
      return;
    }
    FUN_1400bc96c(*param_1 + 0x2580,&DAT_14cbc8320);
    return;
  }
  return;
}



// FUNCTION 148d0ff7a FUN_148d0ff7a body=157 status=ok
// SIG undefined FUN_148d0ff7a(void)

void FUN_148d0ff7a(longlong *param_1)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc8334) {
    FUN_144b3d300(&DAT_14cbc8334);
    if (DAT_14cbc8334 == -1) {
      FUN_1446f470e(&DAT_14cbc832c,L"DevPerk",1);
      _Init_thread_footer(&DAT_14cbc8334);
    }
  }
  if ((*param_1 != 0) && (lVar1 = *(longlong *)(*param_1 + 0xf40), lVar1 != 0)) {
    *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) ^ 1;
    FUN_1487bca54(lVar1,&DAT_14cbc832c);
    return;
  }
  return;
}



// FUNCTION 148d10018 FUN_148d10018 body=1606 status=ok
// SIG undefined FUN_148d10018(void)

void FUN_148d10018(longlong *param_1)

{
  longlong *plVar1;
  double dVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_418 [32];
  undefined8 local_3f8;
  undefined1 local_3f0;
  undefined1 local_3e8;
  undefined4 local_3e0;
  longlong *local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  undefined1 local_3a0 [24];
  longlong local_388;
  undefined8 uStack_380;
  longlong *local_378;
  ulonglong uStack_370;
  undefined1 local_360 [4];
  char local_35c;
  ulonglong local_358 [4];
  undefined1 local_338 [16];
  double local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  float local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined8 uStack_2bc;
  undefined8 local_2b4;
  undefined8 uStack_2ac;
  undefined1 local_2a4;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  longlong lStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  char local_1f8;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined7 local_1df;
  undefined1 uStack_1d8;
  undefined8 uStack_1d7;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if ((*param_1 == 0) || (plVar1 = *(longlong **)(*param_1 + 0x3d0), plVar1 == (longlong *)0x0))
  goto LAB_148d1054c;
  lVar7 = FUN_1403ca227();
  lVar9 = *(longlong *)(lVar7 + 0x468);
  if (lVar9 == 0) {
    uVar8 = FUN_141096302();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(lVar7 + 0x468) = lVar9;
  }
  plVar12 = *(longlong **)(lVar7 + 0x470);
  if (plVar12 == (longlong *)0x0) {
    if ((lVar9 == 0) || (*(longlong *)(lVar7 + 0x460) == 0)) goto LAB_148d1054c;
    plVar12 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar12 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar4 == '\0')) {
      *(undefined8 *)(lVar7 + 0x470) = 0;
      goto LAB_148d1054c;
    }
    uVar8 = (**(code **)(*plVar12 + 0x110))(plVar12);
    plVar12 = (longlong *)FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x460));
    *(longlong **)(lVar7 + 0x470) = plVar12;
    if (plVar12 == (longlong *)0x0) goto LAB_148d1054c;
  }
  uVar8 = FUN_1447210f0(*param_1);
  plVar10 = (longlong *)FUN_14007a5e6(uVar8);
  if (plVar10 != (longlong *)0x0) {
    lVar9 = FUN_14497e828(*param_1);
    if (lVar9 != 0) {
      lVar7 = FUN_144a79464();
      if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
         (cVar4 = FUN_144a87d0a(lVar9), cVar4 == '\0')) goto LAB_148d1054c;
    }
    uVar8 = FUN_14018b740();
    plVar11 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar8);
    uVar5 = 1;
    local_3d8 = plVar10;
    if (plVar11 != (longlong *)0x0) {
      uVar8 = FUN_14018b740();
      plVar10 = (longlong *)FUN_144718840(plVar11,uVar8);
      if (plVar10 != (longlong *)0x0 && plVar11 != plVar10) {
        uVar5 = (**(code **)(*plVar10 + 0x28))(plVar10);
      }
    }
    local_378 = (longlong *)0x0;
    uStack_370 = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_378,0);
    local_388 = 0;
    uStack_380 = 0;
    if ((longlong)(int)uStack_370 != 0) {
      lVar9 = (longlong)(int)uStack_370 * 0xd0;
      plVar12 = local_378;
      do {
        if ((*plVar12 != 0) || (plVar12[1] != 0)) {
          local_358[0] = local_358[0] & 0xffffffffffffff00;
          local_338._8_4_ = 0;
          FUN_1456bb102(local_358,plVar1);
          local_3e0 = 0;
          local_3e8 = 0;
          local_3f0 = 0;
          local_3f8 = 0;
          FUN_140372ab6(&local_388,plVar12,uVar5,local_358);
          FUN_144a5ac3a(local_358);
        }
        plVar12 = plVar12 + 0x1a;
        lVar9 = lVar9 + -0xd0;
      } while (lVar9 != 0);
    }
    (**(code **)(*plVar1 + 0x710))(plVar1,local_3a0);
    FUN_144a76660(local_3a0,&local_3b8);
    (**(code **)(*plVar1 + 0x718))(plVar1,&local_1c8);
    dVar2 = local_3b0 * 64.0 + local_1c0;
    FUN_144a7484c(local_3a0,local_358);
    uVar3 = local_358[0];
    plVar1 = local_3d8;
    uVar5 = 0;
    if ((longlong)(int)uStack_380 != 0) {
      lVar7 = (longlong)(int)uStack_380 * 0x68;
      lVar9 = local_388;
      do {
        uVar8 = FUN_1447210f0(*param_1);
        local_358[0] = local_358[0] & 0xffffffffffffff00;
        local_338._8_4_ = 0;
        FUN_1456bb102(local_358,uVar8);
        FUN_140368c94(lVar9,&local_1c8,local_358,0);
        FUN_144a5ac3a(local_358);
        uVar6 = rand();
        FUN_143dae3de(&local_3d0,0x42c80000,0x43160000);
        local_2d4 = DAT_14cb7bd70;
        local_2dc = DAT_14cb7bd68;
        local_2c8 = DAT_14cb7bd88;
        local_2d0 = DAT_14cb7bd80;
        local_2a4 = 0;
        local_2b4 = 0;
        uStack_2ac = 0;
        local_2c4 = 0;
        uStack_2bc = 0;
        local_2a0 = 0xffffffff;
        local_1f8 = '\0';
        uStack_1d8 = 0;
        uStack_1d7 = 0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        local_1df = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_278 = 0;
        uStack_270 = 0;
        local_288 = 0;
        lStack_280 = 0;
        local_298 = 0;
        uStack_290 = 0;
        local_338._8_4_ = SUB84(dVar2,0);
        local_338._0_8_ = local_3b8 * 64.0 + local_1c8;
        local_338._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        uStack_320 = 0;
        local_318 = 0x3ff0000000000000;
        uStack_310 = 0x3ff0000000000000;
        local_308 = 0x3ff0000000000000;
        uStack_300 = 0;
        local_2e8 = local_3c0;
        local_2f8 = local_3d0;
        uStack_2f4 = uStack_3cc;
        uStack_2f0 = uStack_3c8;
        uStack_2ec = uStack_3c4;
        local_358[0] = uVar3;
        local_328 = local_3a8 * 64.0 + local_1b8;
        local_2e0 = ((float)(uVar6 & 0x7fff) / 32767.0) * 250.0 + 750.0;
        (**(code **)(*plVar1 + 0x10))(plVar1,local_360,&local_1c8);
        if (local_35c == '\x01') {
          local_35c = '\0';
        }
        if (local_1f8 == '\x01') {
          local_1f8 = '\0';
        }
        if (lStack_280 != 0) {
          FUN_1400020a8();
        }
        FUN_140368b56(&local_1c8);
        lVar9 = lVar9 + 0x68;
        lVar7 = lVar7 + -0x68;
      } while (lVar7 != 0);
      uVar5 = (int)uStack_380;
    }
    FUN_14036924e(local_388,uVar5);
    if (local_388 != 0) {
      FUN_1400020a8();
    }
    FUN_140372266(local_378,uStack_370 & 0xffffffff);
    if (local_378 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_148d1054c:
  if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d1065f FUN_148d1065f body=3 status=ok
// SIG undefined FUN_148d1065f(void)

undefined8 FUN_148d1065f(void)

{
  return 0;
}



// FUNCTION 148d10662 FUN_148d10662 body=351 status=ok
// SIG undefined FUN_148d10662(void)

longlong * FUN_148d10662(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x570);
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_1 + 0x580;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar6 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x598) != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x598);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (local_60 != lVar2)) {
    do {
      iVar5 = iStack_74;
      lVar4 = *local_90;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_14027bf84(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) =
           *(undefined8 *)((longlong)iVar5 * 0x18 + 8 + lVar4);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar6) || (local_80 != lVar2)) || (local_90 != plVar1));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d107c2 FUN_148d107c2 body=520 status=ok
// SIG undefined FUN_148d107c2(void)

void FUN_148d107c2(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  if (param_4 == '\0') {
    if (*(int *)(param_1 + 0x578) != *(int *)(param_1 + 0x5a4)) {
      lVar2 = *param_2;
      lVar4 = param_1 + 0x5a8;
      if (*(longlong *)(param_1 + 0x5b0) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x5b0);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x5b8) - 1U &
                               (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
      if (iVar5 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x570);
        do {
          if (*(longlong *)(lVar4 + (longlong)iVar5 * 0x18) == lVar2) {
            FUN_140e0b1f6((longlong *)(param_1 + 0x570),param_2);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
          }
          iVar5 = *(int *)(lVar4 + (longlong)iVar5 * 0x18 + 0x10);
        } while (iVar5 != -1);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x578) != *(int *)(param_1 + 0x5a4)) {
      lVar2 = *param_2;
      lVar4 = param_1 + 0x5a8;
      if (*(longlong *)(param_1 + 0x5b0) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x5b0);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x5b8) - 1U &
                               (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
      if (iVar5 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x570);
        do {
          if (*(longlong *)(lVar4 + (longlong)iVar5 * 0x18) == lVar2) goto LAB_148d108e3;
          iVar5 = *(int *)(lVar4 + (longlong)iVar5 * 0x18 + 0x10);
        } while (iVar5 != -1);
      }
    }
    plStack_30 = &local_40;
    local_38 = param_2;
    FUN_148d13c04((longlong *)(param_1 + 0x570),local_24);
    lVar2 = local_40;
    if (local_40 != 0) {
      lVar3 = FUN_144a89a68();
      lVar4 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        FUN_148d13d4a(param_1 + 0x90,param_2,lVar2 + 200);
        goto LAB_148d108e3;
      }
    }
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
    FUN_148d13d4a(param_1 + 0x90,param_2,&local_38);
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_30 + 0x10))();
      }
    }
  }
LAB_148d108e3:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d109de FUN_148d109de body=59 status=ok
// SIG undefined FUN_148d109de(void)

longlong FUN_148d109de(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d13f30(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_148d13f1a(lVar2);
  return lVar2;
}



// FUNCTION 148d10a1a FUN_148d10a1a body=66 status=ok
// SIG undefined FUN_148d10a1a(void)

undefined8 FUN_148d10a1a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a89a68();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = FUN_14050cc5a(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148d10a5c FUN_148d10a5c body=149 status=ok
// SIG undefined FUN_148d10a5c(void)

ulonglong FUN_148d10a5c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x26c) == 1) {
    lVar1 = FUN_1418e26dc(param_3,param_4);
    if (lVar1 != 0) {
      puVar2 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
        puVar2 = *(undefined4 **)(lVar1 + 8);
      }
      uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      FUN_1447325ac(puVar2,&local_30,1);
      FUN_140ff3baa(param_2,&local_38);
      if (local_30 == local_38) goto LAB_148d10acf;
    }
  }
  uVar3 = 0;
LAB_148d10acf:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d10b1a FUN_148d10b1a body=386 status=ok
// SIG undefined FUN_148d10b1a(void)

undefined8 FUN_148d10b1a(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14882de10();
  lVar3 = (**(code **)(*param_1 + 0x358))(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_14125b292();
    cVar2 = FUN_1448093f4(lVar3,uVar4);
    if (cVar2 != '\0') {
      puVar5 = (undefined8 *)FUN_1447a1f4a(lVar3 + 0x18);
      local_88 = (void *)0x0;
      local_80 = *(int *)(puVar5 + 1);
      lVar3 = (longlong)local_80;
      _Src = (void *)*puVar5;
      if (lVar3 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,_Src,lVar3 * 2);
      }
      goto LAB_148d10bca;
    }
  }
  FUN_140056680(&local_88,L"Unnamed POI");
LAB_148d10bca:
  FUN_14146ec20(local_48,&local_88);
  local_70 = &local_28;
  local_78 = local_48;
  FUN_1407adb6e(&local_68);
  FUN_140230a2e(&local_58,L", Display Name: {0}",&local_68);
  iVar1 = local_50 + -1;
  if (local_50 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_58,iVar1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407adb3e(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d10cb2 FUN_148d10cb2 body=554 status=ok
// SIG undefined FUN_148d10cb2(void)

undefined8 FUN_148d10cb2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined1 *local_98;
  ulonglong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14882962c();
  lVar6 = FUN_14050ca38(param_1);
  if (lVar6 != 0) {
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar6 + 8);
    }
    local_88 = 0;
    uStack_80 = 0;
    FUN_1400b2348(puVar7,&local_88,1);
    FUN_14146ec20(local_48,&local_88);
    local_70 = &local_28;
    local_78 = local_48;
    FUN_1407adb6e(&local_68);
    FUN_140230a2e(&local_58,L", Mission: {0}",&local_68);
    iVar5 = local_50 + -1;
    if (local_50 == 0) {
      iVar5 = 0;
    }
    FUN_1400020e8(param_2,local_58,iVar5);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1407adb3e(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d10eb3;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_148848020(*(longlong *)(param_1 + 200),local_a8);
      FUN_14146ec20(local_48,local_a8);
      local_90 = &local_28;
      local_98 = local_48;
      FUN_1407adb6e(&local_68);
      FUN_140230a2e(&local_58,L", Waypoint: {0}",&local_68);
      iVar5 = local_50 + -1;
      if (local_50 == 0) {
        iVar5 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar5);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1407adb3e(local_68,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_38 != 0) {
        FUN_1400020a8();
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
  }
LAB_148d10eb3:
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d10efe FUN_148d10efe body=250 status=ok
// SIG undefined FUN_148d10efe(void)

undefined8 *
FUN_148d10efe(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  local_48 = (int)param_3[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  local_60 = (longlong *)*param_2;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  local_58 = (undefined4)param_2[1];
  FUN_145976f8e(param_1,&local_60,&local_50);
  *param_1 = &PTR_FUN_14b748b90;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_4 + 1);
  param_1[5] = *param_4;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d10ffa FUN_148d10ffa body=250 status=ok
// SIG undefined FUN_148d10ffa(void)

undefined8 *
FUN_148d10ffa(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  local_48 = (int)param_3[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  local_60 = (longlong *)*param_2;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  local_58 = (undefined4)param_2[1];
  FUN_145976f8e(param_1,&local_60,&local_50);
  *param_1 = &PTR_FUN_14b748ba0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_4 + 1);
  param_1[5] = *param_4;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1113a FUN_148d1113a body=145 status=ok
// SIG undefined FUN_148d1113a(void)

longlong FUN_148d1113a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar1 + 0x50);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x50) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x58) != 0) {
    return *(longlong *)(lVar1 + 0x58);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x48));
    }
    *(longlong *)(lVar1 + 0x58) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 148d111cc FUN_148d111cc body=369 status=ok
// SIG undefined FUN_148d111cc(void)

void FUN_148d111cc(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 != param_2) {
    return;
  }
  lVar3 = param_3[1];
  if (lVar3 == 0) {
    FUN_140355b7c();
    lVar3 = FUN_14477b664();
    param_3[1] = lVar3;
  }
  lVar5 = param_3[2];
  if (lVar5 != 0) {
LAB_148d11218:
    if (lVar3 == 0) {
      uVar4 = FUN_140355b7c();
      lVar3 = FUN_14477b664(uVar4);
      param_3[1] = lVar3;
      lVar5 = param_3[2];
      if (((lVar5 == 0) && (lVar5 = 0, lVar3 != 0)) && (*param_3 != 0)) {
        plVar1 = *(longlong **)(lVar3 + 0xb8);
        if (plVar1 == (longlong *)0x0) {
LAB_148d11339:
          lVar5 = 0;
        }
        else {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 == '\0') goto LAB_148d11339;
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,param_3);
        }
        param_3[2] = lVar5;
      }
    }
    uVar4 = FUN_1401548e0();
    cVar2 = FUN_1448093f4(lVar5,uVar4);
    lVar6 = 0;
    if (cVar2 != '\0') {
      lVar6 = lVar5;
    }
    goto LAB_148d11239;
  }
  lVar6 = 0;
  if ((lVar3 == 0) || (*param_3 == 0)) goto LAB_148d11239;
  plVar1 = *(longlong **)(lVar3 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_148d1132a:
    param_3[2] = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))();
    if (cVar2 == '\0') goto LAB_148d1132a;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,param_3);
    param_3[2] = lVar5;
    if (lVar5 != 0) {
      lVar3 = param_3[1];
      goto LAB_148d11218;
    }
  }
  lVar6 = 0;
LAB_148d11239:
  *(longlong *)(param_1 + 0xd8) = lVar6;
  FUN_140a1982e(param_1);
  FUN_1402798cc(param_1);
  return;
}



// FUNCTION 148d11344 FUN_148d11344 body=182 status=ok
// SIG undefined FUN_148d11344(void)

void FUN_148d11344(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xd8) != 0) goto LAB_148d11366;
  cVar1 = FUN_144729dda(param_1 + 200);
  if (cVar1 == '\0') {
LAB_148d113ed:
    lVar4 = 0;
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 200);
    FUN_145a14650(uVar2,local_38);
    lVar3 = FUN_145a158a4(local_38);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar3 == 0) goto LAB_148d113ed;
    uVar2 = FUN_1401548e0();
    cVar1 = FUN_1448093f4(lVar3,uVar2);
    lVar4 = 0;
    if (cVar1 != '\0') {
      lVar4 = lVar3;
    }
  }
  *(longlong *)(param_1 + 0xd8) = lVar4;
LAB_148d11366:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d113fc FUN_148d113fc body=125 status=ok
// SIG undefined FUN_148d113fc(void)

void FUN_148d113fc(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      cVar1 = FUN_144729dda(param_1 + 0x19);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*param_1 + 0x2e8))(param_1,param_2);
        if (cVar1 != '\0') {
          lVar2 = FUN_14479d2ce(param_1 + 0x19);
          FUN_146227a08(param_2,*(undefined4 *)(lVar2 + 0x394));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148d1148c FUN_148d1148c body=202 status=ok
// SIG undefined FUN_148d1148c(void)

undefined8 FUN_148d1148c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd8);
    if (lVar1 == 0) {
      local_28 = *(undefined8 *)(param_1 + 200);
      lVar1 = FUN_14050aea0();
      *(longlong *)(param_1 + 0xd8) = lVar1;
      if (lVar1 == 0) goto LAB_148d114cf;
    }
    lVar1 = FUN_1407c8d60(lVar1);
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0x34) == '\x01')) && (*(char *)(lVar1 + 0x35) == '\0'))
    {
      lVar1 = *(longlong *)(param_1 + 0xd8);
      if (lVar1 == 0) {
        local_28 = *(undefined8 *)(param_1 + 200);
        lVar1 = FUN_14050aea0();
        *(longlong *)(param_1 + 0xd8) = lVar1;
      }
      uVar2 = FUN_1447210f0(param_2);
      uVar2 = FUN_143dbe0cc(lVar1,uVar2);
      goto LAB_148d114d1;
    }
  }
LAB_148d114cf:
  uVar2 = 0;
LAB_148d114d1:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148d11558 FUN_148d11558 body=438 status=ok
// SIG undefined FUN_148d11558(void)

longlong * FUN_148d11558(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  cVar5 = (**(code **)(*param_1 + 0x2e8))(param_1,0);
  if (cVar5 != '\0') {
    FUN_144a5dc74(&local_78);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(&local_68,"BigMap_Action_FastTravel",0);
    FUN_140ac6c96(&local_68,&local_78);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar6 = FUN_14001cc68(0x30,0x10);
    FUN_1400b22c2(local_88,"action_ui_bigmap_tooltip_main_action");
    local_98 = local_78;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    local_90 = local_70;
    FUN_146624388(lVar6,&local_98,local_88,param_1);
    plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b9679d0;
    plVar7[2] = lVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_145976dba(param_2,iVar3);
    }
    lVar4 = *param_2;
    *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar6;
    *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar7;
    if (plVar7 != (longlong *)0x0) {
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
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d11764 FUN_148d11764 body=160 status=ok
// SIG undefined FUN_148d11764(void)

longlong FUN_148d11764(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar1 + 0xe8);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0xe8) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0xf0) != 0) {
    return *(longlong *)(lVar1 + 0xf0);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0xe0) != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0xe0));
    }
    *(longlong *)(lVar1 + 0xf0) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 148d1183a FUN_148d1183a body=44 status=ok
// SIG undefined FUN_148d1183a(void)

void FUN_148d1183a(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0x218);
  FUN_1412f3376(param_1);
  return;
}



// FUNCTION 148d1189e FUN_148d1189e body=40 status=ok
// SIG undefined FUN_148d1189e(void)

undefined8 FUN_148d1189e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1410fa0b8(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148d118d2 FUN_148d118d2 body=123 status=ok
// SIG undefined FUN_148d118d2(void)

uint * FUN_148d118d2(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_140fecfdc(param_4);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar4 = FUN_141563480(param_1 + 8);
    bVar2 = FUN_1411d9864(uVar3,uVar4);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x21);
    uVar4 = FUN_141563480(param_1 + 8);
    if (cVar1 == '\x01') {
      bVar2 = FUN_148d1194e(uVar3,uVar4);
    }
    else {
      bVar2 = FUN_14125be1e();
    }
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = (uint)bVar2;
  *(undefined1 *)(param_2 + 8) = 1;
  return param_2;
}



// FUNCTION 148d1194e FUN_148d1194e body=55 status=ok
// SIG undefined FUN_148d1194e(void)

undefined8 FUN_148d1194e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      uVar2 = FUN_140636ec6(lVar1);
      uVar2 = FUN_14125be1e(uVar2,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148d11986 FUN_148d11986 body=275 status=ok
// SIG undefined FUN_148d11986(void)

ulonglong FUN_148d11986(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == 0 || param_1 == 0) || (lVar4 = FUN_1447210f0(param_1), lVar4 == 0)) {
LAB_148d11a68:
    uVar8 = 0;
  }
  else {
    lVar5 = FUN_140636ec6(lVar4);
    if (lVar5 != 0) {
      lVar6 = FUN_144a5dd5e();
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
         (*(char *)(lVar5 + 0x178) != '\x03')) goto LAB_148d11a68;
    }
    lVar5 = FUN_140f7e331();
    if (*(char *)(lVar5 + 0x30) != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    FUN_144a7d35a(lVar4,&local_38);
    uVar8 = CONCAT71((int7)((ulonglong)&local_38 >> 8),1);
    if (-1 < (int)local_30) {
      do {
        if ((int)local_38[1] <= (int)local_30) break;
        uVar7 = FUN_14479d2ce((ulonglong)local_30 * 8 + *local_38);
        cVar3 = FUN_14125be1e(uVar7,param_2);
        if (cVar3 == '\0') goto LAB_148d11a68;
        uVar1 = local_30 + 1;
        bVar2 = -2 < (int)local_30;
        local_30 = uVar1;
      } while (bVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 148d11aae FUN_148d11aae body=207 status=ok
// SIG undefined FUN_148d11aae(void)

void FUN_148d11aae(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  lVar2 = DAT_14cb1aeb8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  if (DAT_14cb1aeb8 != 0) {
    FUN_1446dcdd4(local_48,&local_50);
    plVar1 = (longlong *)FUN_144837462(lVar2,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar3 = FUN_1401548e0();
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) && (*(char *)((longlong)plVar1 + 0x10aa) == '\x01')) {
        uVar4 = FUN_141563480(plVar1 + 0x216);
        FUN_14410af30(param_1,uVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d11b7e FUN_148d11b7e body=33 status=ok
// SIG undefined FUN_148d11b7e(void)

void FUN_148d11b7e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141563480(param_1 + 0x30);
  FUN_14125be1e(param_2,uVar1);
  return;
}



// FUNCTION 148d11ba0 FUN_148d11ba0 body=61 status=ok
// SIG undefined FUN_148d11ba0(void)

undefined1 FUN_148d11ba0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  lVar1 = FUN_140f7e331();
  if (*(char *)(lVar1 + 0x31) != '\0') {
    return 1;
  }
  uVar2 = FUN_141563480(param_1 + 0x30);
  uVar3 = FUN_14125be1e(param_2,uVar2);
  return uVar3;
}



// FUNCTION 148d11c44 FUN_148d11c44 body=266 status=ok
// SIG undefined FUN_148d11c44(void)

void FUN_148d11c44(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1413e0784();
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar1 != '\0') {
    local_40 = 0;
    FUN_14485c47a(&local_40,param_3);
    plVar4 = param_1 + 0xd;
    plVar3 = (longlong *)param_1[0x1d];
    if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
      plVar3 = plVar4;
    }
    uStack_38 = param_4;
    if ((longlong)(int)param_1[0x1e] == 0) {
      iVar2 = 0;
    }
    else {
      lVar5 = (longlong)(int)param_1[0x1e] << 4;
      do {
        if (plVar3[1] == uStack_38) {
          cVar1 = FUN_14038330a(plVar3,&local_40);
          if (cVar1 != '\0') goto LAB_148d11d1c;
        }
        plVar3 = plVar3 + 2;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
      iVar2 = (int)param_1[0x1e];
    }
    *(uint *)(param_1 + 0x1e) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xf4) < iVar2 + 1U) {
      FUN_148d17c22(plVar4,iVar2);
    }
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x1d];
    }
    plVar4 = plVar4 + (longlong)iVar2 * 2;
    *(undefined4 *)plVar4 = (undefined4)local_40;
    *(undefined4 *)((longlong)plVar4 + 4) = local_40._4_4_;
    *(undefined4 *)(plVar4 + 1) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)plVar4 + 0xc) = uStack_38._4_4_;
  }
LAB_148d11d1c:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d11d50 FUN_148d11d50 body=112 status=ok
// SIG undefined FUN_148d11d50(void)

void FUN_148d11d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412f7d0e();
  local_38 = 0;
  FUN_14485c47a(&local_38,param_3);
  local_30 = param_4;
  FUN_148d11dc2(param_1 + 0x68,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d11dc2 FUN_148d11dc2 body=239 status=ok
// SIG undefined FUN_148d11dc2(void)

void FUN_148d11dc2(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar6 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x88) << 4;
    iVar3 = 1;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar6 + 8) == *(longlong *)(param_2 + 8)) &&
         (cVar1 = FUN_14038330a(lVar6,param_2), cVar1 != '\0')) {
        if (iVar3 == 0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x88);
        iVar3 = iVar2 - iVar3;
        if (iVar3 != 0) {
          iVar5 = 1;
          if (iVar3 < 1) {
            iVar5 = iVar3;
          }
          lVar6 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar6 = param_1;
          }
          memmove((void *)((lVar4 >> 0x20) * 0x10 + lVar6),
                  (void *)((longlong)(iVar2 - iVar5) * 0x10 + lVar6),(longlong)iVar5 << 4);
          iVar2 = *(int *)(param_1 + 0x88);
        }
        *(int *)(param_1 + 0x88) = iVar2 + -1;
        FUN_148d17ca0(param_1);
        return;
      }
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 148d11eea FUN_148d11eea body=40 status=ok
// SIG undefined FUN_148d11eea(void)

undefined8 FUN_148d11eea(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d1f164(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148d11f1a FUN_148d11f1a body=104 status=ok
// SIG undefined FUN_148d11f1a(void)

void FUN_148d11f1a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14b748bc0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_144a5dc74(param_1 + 8);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



// FUNCTION 148d11faa FUN_148d11faa body=145 status=ok
// SIG undefined FUN_148d11faa(void)

undefined8 FUN_148d11faa(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong *local_50;
  code *local_48;
  undefined8 **local_40;
  undefined8 local_38;
  longlong local_30;
  code **local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    local_58 = &local_38;
    local_38 = 0;
    local_40 = &local_58;
    local_50 = &local_30;
    local_28 = &local_48;
    local_48 = FUN_144117678;
    local_18 = &local_28;
    local_20 = FUN_14100743a;
    FUN_1410070c8();
    uVar1 = local_38;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1203c FUN_148d1203c body=583 status=ok
// SIG undefined FUN_148d1203c(void)

undefined8 * FUN_148d1203c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_1418c9e66();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 == 0) {
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x28) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x20);
            goto LAB_148d12088;
          }
          goto LAB_148d120a2;
        }
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
  }
  else {
LAB_148d12088:
    if (lVar5 == 0) {
      uVar4 = FUN_1418c9e66();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x20) = lVar5;
      lVar6 = *(longlong *)(param_1 + 0x28);
      if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_148d12280:
          lVar6 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
          if (cVar3 == '\0') goto LAB_148d12280;
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(param_1 + 0x28) = lVar6;
      }
    }
    if (*(longlong *)(lVar6 + 0x30) != DAT_14caa8578) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (lVar5 == 0) {
        uVar4 = FUN_1418c9e66();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x20) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x28);
      }
      if (lVar6 == 0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        lVar6 = 0;
        if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_148d1227c:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_148d1227c;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x28) = lVar6;
        }
      }
      *param_2 = *(undefined8 *)(lVar6 + 0x30);
      goto LAB_148d120e5;
    }
  }
LAB_148d120a2:
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar5 = DAT_14caa8580;
  FUN_1446ddc76(&local_30,"StandIn.EchoLog.General",1);
  FUN_1400702d4(lVar5,param_2,local_30,1);
LAB_148d120e5:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d12284 FUN_148d12284 body=1 status=ok
// SIG undefined FUN_148d12284(void)

void FUN_148d12284(void)

{
  return;
}



// FUNCTION 148d12286 FUN_148d12286 body=1 status=ok
// SIG undefined FUN_148d12286(void)

void FUN_148d12286(void)

{
  return;
}



// FUNCTION 148d12288 FUN_148d12288 body=1 status=ok
// SIG undefined FUN_148d12288(void)

void FUN_148d12288(void)

{
  return;
}



// FUNCTION 148d1228a FUN_148d1228a body=1 status=ok
// SIG undefined FUN_148d1228a(void)

void FUN_148d1228a(void)

{
  return;
}



// FUNCTION 148d1228c FUN_148d1228c body=3 status=ok
// SIG undefined FUN_148d1228c(void)

undefined8 FUN_148d1228c(void)

{
  return 0;
}



// FUNCTION 148d12290 FUN_148d12290 body=3 status=ok
// SIG undefined FUN_148d12290(void)

undefined8 FUN_148d12290(void)

{
  return 0;
}



// FUNCTION 148d12294 FUN_148d12294 body=1 status=ok
// SIG undefined FUN_148d12294(void)

void FUN_148d12294(void)

{
  return;
}



// FUNCTION 148d12296 FUN_148d12296 body=1 status=ok
// SIG undefined FUN_148d12296(void)

void FUN_148d12296(void)

{
  return;
}



// FUNCTION 148d12298 FUN_148d12298 body=72 status=ok
// SIG undefined FUN_148d12298(void)

undefined8 *
FUN_148d12298(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_148d122e0(param_1,5);
  FUN_14410d7f8(param_1,param_3,param_4);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
  }
  else {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 148d122e0 FUN_148d122e0 body=247 status=ok
// SIG undefined FUN_148d122e0(void)

void FUN_148d122e0(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    cVar1 = FUN_144729dda(param_1 + 0x38);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 0x38);
      lVar3 = FUN_1447210f0(uVar2);
      if (lVar3 != 0) {
        lVar3 = FUN_140115352(lVar3);
        if (lVar3 != 0) {
          local_28 = *(undefined4 *)(param_1 + 0x60);
          local_30 = *(undefined8 *)(param_1 + 0x58);
          FUN_14887b712(lVar3);
        }
      }
    }
    local_38 = *(undefined8 *)(param_1 + 0x68);
    local_50 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = FUN_14477b664(*(undefined8 *)(param_1 + 0x48));
    local_48 = FUN_14477b664(uVar2);
    local_40 = *(undefined8 *)(param_1 + 0x50);
    local_58 = *(undefined4 *)(param_1 + 0x70);
    if (*(char *)(param_1 + 0x78) == '\x01') {
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
    cVar1 = '\x06';
    if (param_2 != '\0') {
      cVar1 = param_2;
    }
    FUN_148d17d86(param_1 + 0x20,&local_38,&local_50,cVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d123d8 FUN_148d123d8 body=23 status=ok
// SIG undefined FUN_148d123d8(void)

void FUN_148d123d8(longlong param_1,longlong *param_2)

{
  if ((*(char *)(param_1 + 0x78) == '\x01') && (*(longlong *)(param_1 + 0x68) == *param_2)) {
    FUN_148d122e0(param_1,2);
    return;
  }
  return;
}



// FUNCTION 148d123f0 thunk_FUN_148d122e0 body=7 status=ok
// SIG undefined thunk_FUN_148d122e0(void)

void thunk_FUN_148d122e0(undefined8 param_1)

{
  FUN_148d122e0(param_1,2);
  return;
}



// FUNCTION 148d123f8 FUN_148d123f8 body=20 status=ok
// SIG undefined FUN_148d123f8(void)

undefined8 FUN_148d123f8(longlong param_1,longlong *param_2)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x68) >> 8),
                    *(longlong *)(param_1 + 0x68) == *param_2);
  }
  return 0;
}



// FUNCTION 148d1240c FUN_148d1240c body=4 status=ok
// SIG undefined FUN_148d1240c(void)

undefined1 FUN_148d1240c(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



// FUNCTION 148d12410 FUN_148d12410 body=200 status=ok
// SIG undefined FUN_148d12410(void)

undefined8 FUN_148d12410(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      uVar3 = FUN_140b7bb2c();
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_1 + 0x48) = uVar3;
    }
    lVar4 = param_2[1];
    if (lVar4 == 0) {
      lVar4 = FUN_140b7bb2c();
    }
    uVar3 = *param_2;
    uVar5 = FUN_14477b664(lVar4);
    local_38 = uVar3;
    uVar1 = FUN_144a7891a(uVar5);
    local_40 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = FUN_144a7891a(uVar3);
    local_58 = uVar5;
    local_50 = &local_38;
    uVar3 = FUN_144a789b8(uVar2,uVar3,&local_40,uVar1);
  }
  else {
    uVar3 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d12502 FUN_148d12502 body=429 status=ok
// SIG undefined FUN_148d12502(void)

longlong FUN_148d12502(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  if (param_2 != 0) {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) == lVar6 + 0x30)) {
      uVar7 = FUN_1447210f0(param_2);
      lVar6 = FUN_1406f612e(uVar7);
      if (lVar6 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x20);
        if (lVar8 == 0) {
          uVar7 = FUN_14054e994();
          lVar8 = FUN_14477b664(uVar7);
          *(longlong *)(param_1 + 0x20) = lVar8;
        }
        if (((*(longlong *)(param_1 + 0x28) == 0) && (lVar8 != 0)) &&
           (*(longlong *)(param_1 + 0x18) != 0)) {
          plVar1 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
            uVar7 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
            uVar7 = FUN_144aff482(uVar7,(longlong *)(param_1 + 0x18));
          }
          *(undefined8 *)(param_1 + 0x28) = uVar7;
        }
        lVar8 = FUN_14148eec0(lVar6);
        if (lVar8 != 0) {
          uVar4 = FUN_1408966e4(param_2);
          puVar9 = (undefined8 *)FUN_1403362f0(lVar6,uVar4,lVar8);
          if (((puVar9 != (undefined8 *)0x0) && (uVar5 = (uint)*puVar9, -1 < (int)uVar5)) &&
             ((int)uVar5 < *(int *)(param_1 + 0x38))) {
            plVar1 = (longlong *)
                     (*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar5 & 0x7fffffff) * 0x18);
            lVar6 = plVar1[1];
            if (lVar6 == 0) {
              uVar7 = FUN_140b7bb2c();
              lVar6 = FUN_14477b664(uVar7);
              plVar1[1] = lVar6;
            }
            if (plVar1[2] != 0) {
              return plVar1[2];
            }
            if (lVar6 == 0) {
              return 0;
            }
            if (*plVar1 != 0) {
              plVar2 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                lVar6 = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar6 = FUN_144aff482(uVar7,plVar1);
              }
              plVar1[2] = lVar6;
              return lVar6;
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148d126b0 FUN_148d126b0 body=22 status=ok
// SIG undefined FUN_148d126b0(void)

undefined8 FUN_148d126b0(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cbc8d98;
  if (DAT_14cbc8d98 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbc8d98 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbc8d98 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbc8d98[0x3a] <= *(int *)((longlong)DAT_14cbc8d98 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cbc8d98 + 0x300))(DAT_14cbc8d98);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 148d126fe FUN_148d126fe body=297 status=ok
// SIG undefined FUN_148d126fe(void)

void FUN_148d126fe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar3 = FUN_1406d3bdc();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x40) = lVar4;
  }
  lVar5 = param_2;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x38) == 0)) goto LAB_148d12762;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      goto LAB_148d12762;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x38));
    *(longlong *)(param_1 + 0x48) = lVar5;
    if (param_2 == 0) goto LAB_148d12762;
  }
  if (lVar5 != 0) {
    lVar4 = FUN_144a2f878();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (lVar4 == 0) {
        lVar4 = FUN_1406d3bdc();
      }
      local_40 = *(undefined8 *)(param_1 + 0x38);
      local_38 = FUN_14477b664(lVar4);
      local_30 = *(undefined8 *)(param_1 + 0x48);
      FUN_148828138(param_2,*(undefined8 *)(param_1 + 0x30),&local_40);
    }
  }
LAB_148d12762:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


