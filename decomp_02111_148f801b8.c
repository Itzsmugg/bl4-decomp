// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148f801b8 FUN_148f801b8 body=1324 status=ok
// SIG undefined FUN_148f801b8(void)

undefined8 FUN_148f801b8(longlong *param_1)

{
  code *pcVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  wchar_t **ppwVar10;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar3 = (**(code **)(*param_1 + 0x2d8))();
  if (cVar3 == '\0') {
    plVar4 = (longlong *)FUN_14479d2ce(param_1 + 5);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2c8))(plVar4);
    local_a8 = L"OnExtrudeFailedMesssage";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"PolyEditExtrudeEdgeActivity";
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x1b);
    FUN_1446e940c(local_44,&local_a8);
    FUN_140208bae(&local_a8,local_44,local_b0,L"Action requires boundary edge selection.");
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_a8,3);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    uVar9 = 1;
  }
  else {
    FUN_14851b8ac(*(undefined8 *)(*(longlong *)(param_1[8] + 0x40) + 0x58),&local_a8);
    ppwVar10 = &local_a8;
    plVar4 = param_1 + 0x50;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *plVar4 = (longlong)*ppwVar10;
      ppwVar10 = ppwVar10 + 1;
      plVar4 = plVar4 + 1;
    }
    FUN_143b8439e(*(undefined8 *)(param_1[8] + 0x40),param_1 + 6);
    lVar8 = *(longlong *)(param_1[8] + 0x40);
    local_a8 = (wchar_t *)0x0;
    uStack_a0._0_4_ = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    pwVar2 = local_a8;
    uStack_a0._0_4_ = 3;
    *(undefined ***)local_a8 = &PTR_LAB_14ba263d0;
    uVar9 = FUN_144a3f946();
    *(undefined8 *)(pwVar2 + 8) = uVar9;
    *(undefined ***)pwVar2 = &PTR_FUN_14ba30fb0;
    pwVar2[0xc] = L'\0';
    pwVar2[0xd] = L'\0';
    pwVar2[0xe] = L'\0';
    pwVar2[0xf] = L'\0';
    FUN_14485c47a(pwVar2 + 0xc,param_1);
    *(longlong **)(pwVar2 + 0x10) = param_1;
    FUN_148f76e8e(lVar8 + 0x40,local_b0,&local_a8);
    FUN_1449db362(&local_a8);
    lVar8 = *(longlong *)(param_1[8] + 0x40);
    local_a8 = (wchar_t *)0x0;
    uStack_a0._0_4_ = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    pwVar2 = local_a8;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,3);
    *(undefined ***)local_a8 = &PTR_LAB_14aefe820;
    uVar9 = FUN_144a3f946();
    *(undefined8 *)(pwVar2 + 8) = uVar9;
    *(undefined ***)pwVar2 = &PTR_FUN_14ba31020;
    pwVar2[0xc] = L'\0';
    pwVar2[0xd] = L'\0';
    pwVar2[0xe] = L'\0';
    pwVar2[0xf] = L'\0';
    FUN_14485c47a(pwVar2 + 0xc,param_1);
    *(longlong **)(pwVar2 + 0x10) = param_1;
    FUN_1484d607c(lVar8 + 0x28,local_b0,&local_a8);
    FUN_1449db362(&local_a8);
    uVar9 = FUN_1409ffe1d();
    lVar8 = FUN_1484ec096(uVar9);
    if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar8);
    }
    param_1[0xd] = lVar8;
    uVar9 = (**(code **)(**(longlong **)(param_1[8] + 0x40) + 0x180))();
    FUN_1484e0ce2(lVar8,uVar9,&DAT_14c846480);
    FUN_1484e27dc(param_1[0xd],param_1 + 0x50);
    (**(code **)(*param_1 + 0x2c8))(param_1,param_1[7],1);
    *(undefined1 *)(param_1 + 0xe) = 1;
    lVar8 = *(longlong *)(param_1[8] + 0x70);
    FUN_145c3f772(param_1 + 0x28,lVar8 + 0x390);
    FUN_145c3f772(param_1 + 0x32,lVar8 + 0x3e0);
    FUN_145c3f772(param_1 + 0x3c,lVar8 + 0x430);
    FUN_14853173e(*(undefined8 *)(param_1[8] + 0x70));
    *(undefined1 *)(param_1 + 0x46) = 0;
    FUN_148f806e6(param_1);
    plVar4 = (longlong *)FUN_14479d2ce(param_1 + 5);
    uVar9 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
    uVar9 = FUN_148451354(uVar9);
    local_a8 = (wchar_t *)0x0;
    uStack_a0 = 0;
    plVar4 = (longlong *)FUN_14843d06b(uVar9,0x2a,param_1);
    if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar4);
    }
    param_1[10] = (longlong)plVar4;
    if (local_a8 != (wchar_t *)0x0) {
      FUN_1400020a8();
      plVar4 = (longlong *)param_1[10];
    }
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 5);
    lVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
    lVar8 = lVar6 + 0x28;
    if (lVar6 == 0) {
      lVar8 = 0;
    }
    (**(code **)(*plVar4 + 800))(plVar4,param_1[9],lVar8);
    (**(code **)(*(longlong *)param_1[10] + 0x350))((longlong *)param_1[10],0);
    *(undefined1 *)(param_1[10] + 0x82) = 0;
    *(undefined1 *)(param_1[10] + 0x83) = 1;
    local_a8 = (wchar_t *)0x0;
    uStack_a0 = 0;
    plVar4 = (longlong *)FUN_14843d06b(uVar9,0x7e,param_1);
    if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar4);
    }
    param_1[0xc] = (longlong)plVar4;
    if (local_a8 != (wchar_t *)0x0) {
      FUN_1400020a8();
      plVar4 = (longlong *)param_1[0xc];
    }
    uVar9 = 0;
    (**(code **)(*plVar4 + 800))(plVar4,param_1[0xb],0);
    (**(code **)(*(longlong *)param_1[0xc] + 0x350))((longlong *)param_1[0xc],0);
    FUN_148f80b46(param_1);
    FUN_148f80f74(param_1);
    FUN_148f8105a(param_1);
    FUN_148f81234(param_1);
    FUN_1485051e4(*(undefined8 *)(param_1[8] + 0x40));
    lVar8 = param_1[8];
    local_a8 = L"BeginExtrudeEdgeActivity";
    uStack_a0._0_4_ = 0x18;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"PolyEditExtrudeEdgeActivity";
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x1b);
    FUN_1446e940c(local_44,&local_a8);
    FUN_140208bae(&local_a8,local_44,local_b0,L"Begin Extrude Edges");
    pcVar1 = *(code **)(lVar8 + 0xc0);
    plVar4 = (longlong *)(lVar8 + 0xe0);
    if (*(longlong **)(lVar8 + 0xd0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar8 + 0xd0);
    }
    uVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar1)(uVar7,&local_a8);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f806e6 FUN_148f806e6 body=1119 status=ok
// SIG undefined FUN_148f806e6(void)

void FUN_148f806e6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  undefined1 auStack_138 [40];
  int *local_110;
  longlong *local_108;
  ulonglong local_100;
  uint local_f4;
  longlong *local_f0;
  undefined8 local_e8;
  int *local_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c4;
  uint *local_c0;
  int *local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = param_1 + 0x238;
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) < 0) {
    FUN_14481578e(lVar1,0);
  }
  plVar2 = (longlong *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(int *)(param_1 + 0x254) < 0) {
    FUN_14481578e(plVar2,0);
  }
  local_c4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30) + 0x1b0);
  uVar11 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  plVar10 = (longlong *)(param_1 + 0x1e0);
  piVar13 = (int *)(param_1 + 0x1f0);
  local_c0 = (uint *)&DAT_100000000;
  local_b0 = 0xffffffff;
  iStack_ac = 0;
  local_a8 = 0;
  local_b8 = piVar13;
  if (*(int *)(param_1 + 0x208) != 0) {
    FUN_1449c0562(&local_c0);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x208);
  }
  local_d8 = local_b0;
  iStack_d4 = iStack_ac;
  local_d0 = local_a8;
  local_cc = local_a4;
  local_e8 = local_c0;
  local_e0 = local_b8;
  local_110 = piVar13;
  local_108 = plVar10;
  local_100 = uVar11;
  local_f0 = plVar10;
  if ((iStack_ac != (int)uVar11) || (local_b8 != piVar13)) {
    do {
      iVar3 = *(int *)(*local_f0 + (longlong)iStack_d4 * 0xc);
      cVar7 = FUN_1482ac12c(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48),iVar3);
      if (cVar7 != '\0') {
        lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48) + 0x70);
        lVar8 = (longlong)iVar3 * 0x50;
        puVar6 = *(uint **)(lVar12 + 0x20 + lVar8);
        if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x68) == '\x01') {
          uVar5 = *puVar6;
          iVar3 = *(int *)(param_1 + 0x240);
          *(uint *)(param_1 + 0x240) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x244) < iVar3 + 1U) {
            FUN_1446f48e2(lVar1,iVar3);
          }
          *(uint *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar3 * 4) = uVar5;
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30);
          local_f4 = FUN_146bc96d4(lVar12,*(undefined4 *)
                                           (*(longlong *)
                                             (*(longlong *)(lVar12 + 0x1c0) +
                                             (ulonglong)(uVar5 >> 9) * 8) + 8 +
                                           (ulonglong)((uVar5 & 0x1ff) << 4)));
          if ((int)uStack_90 != local_64) {
            puVar9 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar9 = local_60;
            }
            iVar3 = *(int *)(puVar9 + (ulonglong)(local_50 - 1U & local_f4) * 4);
            while (iVar3 != -1) {
              lVar12 = local_98 + (longlong)iVar3 * 0x10;
              if (*(uint *)(local_98 + (longlong)iVar3 * 0x10) == local_f4) {
                if (lVar12 != 0) goto LAB_148f80ab5;
                break;
              }
              iVar3 = *(int *)(lVar12 + 8);
            }
          }
          local_c0 = &local_f4;
          local_b8 = &local_c4;
          FUN_140263e2a(&local_98,&local_9c,&local_c0,0);
          lVar12 = local_98 + (longlong)local_9c * 0x10;
          local_c4 = local_c4 + 1;
LAB_148f80ab5:
          iVar3 = *(int *)(param_1 + 0x250);
          *(uint *)(param_1 + 0x250) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x254) < iVar3 + 1U) {
            FUN_1446f48e2(plVar2,iVar3);
          }
          *(undefined4 *)(*plVar2 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar12 + 4);
          piVar13 = local_110;
        }
        else {
          lVar12 = (longlong)*(int *)(lVar12 + lVar8 + 0x28);
          if (lVar12 != 0) {
            lVar8 = 0;
            do {
              uVar4 = *(undefined4 *)((longlong)puVar6 + lVar8);
              iVar3 = *(int *)(param_1 + 0x240);
              *(uint *)(param_1 + 0x240) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0x244) < iVar3 + 1U) {
                FUN_1446f48e2(lVar1,iVar3);
              }
              *(undefined4 *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar3 * 4) = uVar4;
              iVar3 = *(int *)(param_1 + 0x250);
              *(uint *)(param_1 + 0x250) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0x254) < iVar3 + 1U) {
                FUN_1446f48e2(plVar2,iVar3);
              }
              *(int *)(*plVar2 + (longlong)iVar3 * 4) = local_c4;
              lVar8 = lVar8 + 4;
            } while (lVar12 * 4 != lVar8);
          }
          local_c4 = local_c4 + 1;
          plVar10 = local_108;
          uVar11 = local_100;
          piVar13 = local_110;
        }
      }
      local_d8 = local_d8 & ~local_e8._4_4_;
      FUN_1449c0562(&local_e8);
    } while (local_f0 != plVar10 || (local_e0 != piVar13 || iStack_d4 != (int)uVar11));
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_98);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f80b46 FUN_148f80b46 body=1069 status=ok
// SIG undefined FUN_148f80b46(void)

void FUN_148f80b46(longlong param_1)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 uVar23;
  uint uVar24;
  double dVar25;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong local_150;
  undefined4 *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_148 = (undefined4 *)0x0;
  uStack_140 = 0;
  local_158 = &local_d8;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_148f70e86(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30),param_1 + 0x238,
                *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0xb8),&local_148);
  if ((int)uStack_140 == 0) goto LAB_148f80ea0;
  local_128 = DAT_14c8464f0;
  local_138 = DAT_14c8464e0;
  uStack_130 = DAT_14c8464e8;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  local_108 = 0x3ff0000000000000;
  local_e8 = '\0';
  local_e0 = 0x3ff0000000000000;
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0xb9) == '\0') {
    uVar24 = 0x3ff00000;
  }
  else {
    uVar24 = 0x40100000;
  }
  local_150 = (ulonglong)uVar24 << 0x20;
  local_158 = &local_138;
  FUN_148f718d6(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30),*local_148,local_148[1],
                local_148[2]);
  *(undefined8 *)(param_1 + 0x78) = local_138;
  *(undefined8 *)(param_1 + 0x80) = uStack_130;
  *(undefined8 *)(param_1 + 0x88) = local_128;
  *(undefined8 *)(param_1 + 0x90) = uStack_120;
  *(undefined8 *)(param_1 + 0x98) = uStack_118;
  *(undefined8 *)(param_1 + 0xa0) = uStack_110;
  *(undefined8 *)(param_1 + 0xa8) = local_108;
  if (&local_138 != (undefined8 *)(param_1 + 0x78)) {
    if (local_e8 == '\x01') {
      *(undefined8 *)(param_1 + 0xc0) = local_f0;
      *(undefined8 *)(param_1 + 0xb0) = local_100;
      *(undefined8 *)(param_1 + 0xb8) = uStack_f8;
      uVar23 = 1;
    }
    else {
      if (*(char *)(param_1 + 200) != '\x01') goto LAB_148f80ccf;
      uVar23 = 0;
    }
    *(undefined1 *)(param_1 + 200) = uVar23;
  }
LAB_148f80ccf:
  *(undefined8 *)(param_1 + 0xd0) = local_e0;
  dVar16 = *(double *)(param_1 + 0x90);
  dVar17 = *(double *)(param_1 + 0x98);
  dVar18 = *(double *)(param_1 + 0xa0);
  dVar19 = *(double *)(param_1 + 0xa8);
  dVar20 = *(double *)(param_1 + 0x280);
  dVar21 = *(double *)(param_1 + 0x288);
  dVar22 = *(double *)(param_1 + 0x290);
  dVar1 = *(double *)(param_1 + 0x298);
  dVar2 = *(double *)(param_1 + 0x298);
  dVar3 = *(double *)(param_1 + 0x280);
  dVar4 = *(double *)(param_1 + 0x280);
  dVar5 = *(double *)(param_1 + 0x288);
  dVar6 = *(double *)(param_1 + 0x288);
  dVar7 = *(double *)(param_1 + 0x290);
  dVar8 = *(double *)(param_1 + 0x290);
  dVar10 = dVar16 * dVar8 * 1.0 + dVar19 * dVar6 + dVar4 * dVar18 * -1.0 + dVar17 * dVar2;
  dVar4 = dVar18 * dVar8 * -1.0 + ((dVar16 * dVar4 * -1.0 + dVar19 * dVar2) - dVar17 * dVar6);
  dVar6 = *(double *)(param_1 + 0x78) * *(double *)(param_1 + 0x2c0);
  dVar8 = *(double *)(param_1 + 0x80) * *(double *)(param_1 + 0x2c8);
  dVar25 = *(double *)(param_1 + 0x88) * *(double *)(param_1 + 0x2d0);
  dVar12 = dVar8 * dVar20 - dVar21 * dVar6;
  dVar13 = dVar25 * dVar21 - dVar22 * dVar8;
  dVar15 = dVar6 * dVar22 - dVar20 * dVar25;
  dVar13 = dVar13 + dVar13;
  dVar15 = dVar15 + dVar15;
  dVar12 = dVar12 + dVar12;
  dVar2 = (dVar22 * dVar13 - dVar20 * dVar12) + dVar2 * dVar15 + dVar8 +
          *(double *)(param_1 + 0x2a8);
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ =
       (dVar12 * dVar21 - dVar15 * dVar22) + dVar1 * dVar13 + dVar6 + *(double *)(param_1 + 0x2a0);
  auVar14._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xd8) = auVar14;
  *(double *)(param_1 + 0xe8) =
       dVar12 * dVar1 + dVar25 + (dVar15 * dVar20 - dVar13 * dVar21) + *(double *)(param_1 + 0x2b0);
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = dVar17 * dVar7 * -1.0 + dVar18 * dVar5 + dVar3 * dVar19 * 1.0 + dVar16 * dVar1;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xf0) = auVar9;
  auVar11._8_4_ = SUB84(dVar4,0);
  auVar11._0_8_ = dVar19 * dVar7 * 1.0 + ((dVar17 * dVar3 * 1.0 + dVar18 * dVar1) - dVar16 * dVar5);
  auVar11._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x100) = auVar11;
LAB_148f80ea0:
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1482fe8dc(&local_d8);
  if (local_148 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f80f74 FUN_148f80f74 body=229 status=ok
// SIG undefined FUN_148f80f74(void)

void FUN_148f80f74(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *(double *)(param_1 + 0xf8);
  dVar2 = dVar1 + dVar1;
  dVar3 = *(double *)(param_1 + 0x100);
  dVar5 = dVar3 + dVar3;
  dVar4 = *(double *)(*(longlong *)(param_1 + 0x38) + 0xb0);
  *(double *)(param_1 + 0x110) = (1.0 - (dVar5 * dVar3 + dVar1 * dVar2)) * dVar4;
  *(double *)(param_1 + 0x118) =
       (dVar2 * *(double *)(param_1 + 0xf0) + *(double *)(param_1 + 0x108) * dVar5) * dVar4;
  *(double *)(param_1 + 0x120) =
       (*(double *)(param_1 + 0xf0) * dVar5 - dVar2 * *(double *)(param_1 + 0x108)) * dVar4;
  dVar1 = *(double *)(*(longlong *)(param_1 + 0x38) + 0xb0);
  dVar3 = DAT_14c8463b0 * dVar1;
  dVar4 = DAT_14c8463a8 * dVar1;
  *(double *)(param_1 + 0x128) = dVar1 * DAT_14c8463a0;
  *(double *)(param_1 + 0x130) = dVar4;
  *(double *)(param_1 + 0x138) = dVar3;
  return;
}



// FUNCTION 148f8105a FUN_148f8105a body=472 status=ok
// SIG undefined FUN_148f8105a(void)

void FUN_148f8105a(longlong param_1)

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
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
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
  undefined1 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar1 = *(double *)(param_1 + 0x120);
  dVar2 = *(double *)(param_1 + 0xe8);
  dVar3 = *(double *)(param_1 + 0x110);
  dVar8 = *(double *)(param_1 + 0x118) + *(double *)(param_1 + 0xe0);
  dVar4 = *(double *)(param_1 + 0xd8);
  FUN_146bed047(&local_138,param_1 + 0xf0,param_1 + 0x128);
  dVar7 = (double)CONCAT44(uStack_124,local_128);
  dVar5 = *(double *)(param_1 + 0xe8);
  dVar9 = dStack_130 + *(double *)(param_1 + 0xe0);
  dVar6 = local_138 + *(double *)(param_1 + 0xd8);
  local_138 = *(double *)(param_1 + 0xf0);
  dStack_130 = *(double *)(param_1 + 0xf8);
  local_128 = *(undefined4 *)(param_1 + 0x100);
  uStack_124 = *(undefined4 *)(param_1 + 0x104);
  uStack_120 = *(undefined4 *)(param_1 + 0x108);
  uStack_11c = *(undefined4 *)(param_1 + 0x10c);
  local_118._8_4_ = SUB84(dVar8,0);
  local_118._0_8_ = dVar3 + dVar4;
  local_118._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  uStack_100 = 0;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0x3ff0000000000000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  local_108 = dVar1 + dVar2;
  FUN_148415b4c(*(undefined8 *)(param_1 + 0x60),&local_138,1);
  local_138 = *(double *)(param_1 + 0xf0);
  dStack_130 = *(double *)(param_1 + 0xf8);
  local_128 = *(undefined4 *)(param_1 + 0x100);
  uStack_124 = *(undefined4 *)(param_1 + 0x104);
  uStack_120 = *(undefined4 *)(param_1 + 0x108);
  uStack_11c = *(undefined4 *)(param_1 + 0x10c);
  local_118._8_4_ = SUB84(dVar9,0);
  local_118._0_8_ = dVar6;
  local_118._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  uStack_100 = 0;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0x3ff0000000000000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  local_108 = dVar7 + dVar5;
  FUN_148415b4c(*(undefined8 *)(param_1 + 0x50),&local_138,1);
  local_d8 = *(undefined8 *)(param_1 + 0xf0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xf8);
  local_c8 = *(undefined4 *)(param_1 + 0x100);
  uStack_c4 = *(undefined4 *)(param_1 + 0x104);
  uStack_c0 = *(undefined4 *)(param_1 + 0x108);
  uStack_bc = *(undefined4 *)(param_1 + 0x10c);
  local_b8 = *(undefined4 *)(param_1 + 0xd8);
  uStack_b4 = *(undefined4 *)(param_1 + 0xdc);
  uStack_b0 = *(undefined4 *)(param_1 + 0xe0);
  uStack_ac = *(undefined4 *)(param_1 + 0xe4);
  local_a8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_a0 = 0;
  local_98 = 0x3ff0000000000000;
  uStack_90 = 0x3ff0000000000000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  local_78 = 1;
  FUN_148415ec0(*(undefined8 *)(param_1 + 0x50));
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f81234 FUN_148f81234 body=140 status=ok
// SIG undefined FUN_148f81234(void)

void FUN_148f81234(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar3;
  bool bVar4;
  
  if (((*(char *)(param_1 + 0x70) == '\x01') &&
      (plVar3 = *(longlong **)(param_1 + 0x60), plVar3 != (longlong *)0x0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x50), plVar1 != (longlong *)0x0)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (*(int *)(lVar2 + 0xac) == 0) {
      (**(code **)(*plVar3 + 0x350))(plVar3,0);
      plVar3 = *(longlong **)(param_1 + 0x50);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x350);
      bVar4 = false;
    }
    else {
      (**(code **)(*plVar1 + 0x350))
                (plVar1,CONCAT71((int7)((ulonglong)lVar2 >> 8),*(int *)(lVar2 + 0xa8) == 0));
      plVar3 = *(longlong **)(param_1 + 0x60);
      bVar4 = *(int *)(*(longlong *)(param_1 + 0x38) + 0xa8) == 1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x350);
    }
                    /* WARNING: Could not recover jumptable at 0x000148f81299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3,bVar4);
    return;
  }
  return;
}



// FUNCTION 148f812c0 FUN_148f812c0 body=118 status=ok
// SIG undefined FUN_148f812c0(void)

undefined8 FUN_148f812c0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    FUN_148f81336(param_1);
    uVar1 = 2;
  }
  else if (param_2 == '\x02') {
    FUN_148f81336(param_1);
    uVar1 = 1;
    FUN_14851bbe8(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x58),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30),1,0xf);
  }
  else {
    FUN_143b844a2(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x40));
    FUN_148f813f6(param_1);
    FUN_148f81336(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 148f81336 FUN_148f81336 body=191 status=ok
// SIG undefined FUN_148f81336(void)

void FUN_148f81336(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((char)param_1[0x46] == '\0') {
    FUN_1485316d6(*(undefined8 *)(param_1[8] + 0x70),param_1 + 0x28,0);
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  FUN_143b844d6(*(undefined8 *)(param_1[8] + 0x40));
  FUN_140457ffc(*(longlong *)(param_1[8] + 0x40) + 0x40,param_1);
  FUN_140457ffc(*(longlong *)(param_1[8] + 0x40) + 0x28,param_1);
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[7],0);
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 5);
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  plVar1 = (longlong *)FUN_148451354(uVar2);
  (**(code **)(*plVar1 + 0x2d8))(plVar1,param_1);
  FUN_1484e0e5e(param_1[0xd]);
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}



// FUNCTION 148f813f6 FUN_148f813f6 body=571 status=ok
// SIG undefined FUN_148f813f6(void)

void FUN_148f813f6(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined1 local_210;
  undefined1 local_208 [4];
  undefined4 local_204;
  undefined1 local_200 [8];
  longlong local_1f8 [3];
  undefined1 local_1e0 [160];
  undefined1 local_140 [80];
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar2 = FUN_14851bd54(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x58))
  ;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  FUN_148f81632(local_1f8,uVar2,param_1 + 0x268);
  FUN_146c2c368(local_f0,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30));
  FUN_146c2c4e8(local_f0);
  local_210 = 1;
  local_218 = 1;
  FUN_146c005f0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30),uVar2,1,1);
  if (*(char *)(param_1 + 0x230) == '\0') {
    FUN_1485316d6(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x70),param_1 + 0x140,0);
    *(undefined1 *)(param_1 + 0x230) = 1;
  }
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&DAT_14cbf3de0);
  FUN_1458d302c(local_1e0);
  lVar4 = *(longlong *)(param_1 + 0x40);
  FUN_146c2caf6(local_f0,local_200);
  FUN_148f74f2e(lVar4 + 0x80,&DAT_14cbf3de0,local_200,local_1e0);
  FUN_148531782(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x70));
  FUN_148f8177c(local_1f8,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30),param_1 + 0x268);
  iVar1 = *(int *)(param_1 + 0x270);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x268);
    lVar5 = 0;
    do {
      local_204 = FUN_1482abca2(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48),
                                *(undefined4 *)(lVar4 + lVar5));
      FUN_144984904(local_140,local_208,&local_204,0);
      lVar5 = lVar5 + 4;
    } while ((longlong)iVar1 * 4 != lVar5);
  }
  FUN_1485316d6(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x70),local_1e0,1);
  FUN_14853184c(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x70));
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  FUN_1456c3cc8(local_1e0);
  FUN_146c2c40e(local_f0);
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f81632 FUN_148f81632 body=329 status=ok
// SIG undefined FUN_148f81632(void)

void FUN_148f81632(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  FUN_148f92762(param_1,(int)param_3[1]);
  lVar6 = param_3[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_3;
    lVar8 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + lVar8);
      if ((-1 < (int)uVar1) &&
         ((int)uVar1 < *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar4 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) + 8
                   + (ulonglong)((uVar1 & 0x1ff) << 4));
          lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (uVar4 >> 9 & 0x7fffff) * 8);
          uVar7 = (ulonglong)((uint)uVar4 & 0x1ff);
          if (*(uint *)(lVar5 + uVar7 * 0xc) == uVar1) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0x100000000;
            if ((*(uint *)(lVar5 + uVar7 * 0xc + 4) != uVar1) &&
               (uVar9 = 0xff00000000, *(uint *)(lVar5 + 8 + uVar7 * 0xc) == uVar1)) {
              uVar9 = 0x200000000;
            }
          }
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_148f927ec(param_1,iVar2);
          }
          *(ulonglong *)(*param_1 + (longlong)iVar2 * 8) = uVar9 | uVar4 & 0xffffffff;
        }
      }
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar6 * 4 != lVar8);
  }
  return;
}



// FUNCTION 148f8177c FUN_148f8177c body=269 status=ok
// SIG undefined FUN_148f8177c(void)

void FUN_148f8177c(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = *param_1;
    lVar8 = 0;
    do {
      uVar1 = *(uint *)(lVar4 + lVar8);
      if ((-1 < (int)uVar1) &&
         ((int)uVar1 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
        uVar7 = (ulonglong)(uVar1 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               uVar7 * 2) - 1U) < 0xfffe) {
          lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(uVar1 >> 9) * 8);
          local_48 = *(undefined4 *)(lVar5 + 8 + uVar7 * 0xc);
          local_50 = *(undefined8 *)(lVar5 + uVar7 * 0xc);
          uVar2 = *(undefined4 *)((longlong)&local_50 + (longlong)*(char *)(lVar4 + 4 + lVar8) * 4);
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_1446f48e2(param_3,iVar3);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = uVar2;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8188a FUN_148f8188a body=52 status=ok
// SIG undefined FUN_148f8188a(void)

void FUN_148f8188a(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2e8))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x300))(param_1,param_2);
  }
  FUN_148444606(param_1);
  return;
}



// FUNCTION 148f818be FUN_148f818be body=353 status=ok
// SIG undefined FUN_148f818be(void)

undefined4 FUN_148f818be(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = local_68;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70);
    iVar7 = 0;
    uVar6 = 0;
    if (*(int *)(lVar3 + 0x438) == *(int *)(lVar3 + 0x464)) goto LAB_148f81997;
    plVar1 = (longlong *)(lVar3 + 0x430);
    lVar2 = lVar3 + 0x440;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar2;
    if (*(int *)(lVar3 + 0x458) != 0) {
      FUN_1449c0562(&local_58);
      iVar7 = *(int *)(lVar3 + 0x458);
    }
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar7) || (local_50 != lVar2)) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        uVar6 = FUN_1482ac12c(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48),
                              *(undefined4 *)(*local_80 + (longlong)iVar5 * 0xc));
        if ((char)uVar6 != '\0') break;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
      } while (local_80 != plVar1 || (local_70 != lVar2 || local_68._4_4_ != iVar7));
      goto LAB_148f81997;
    }
  }
  local_68 = uVar4;
  uVar6 = 0;
LAB_148f81997:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148f81a24 FUN_148f81a24 body=126 status=ok
// SIG undefined FUN_148f81a24(void)

void FUN_148f81a24(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  code *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((*(char *)(param_1 + 0x70) == '\x01') && (*(longlong *)(param_1 + 0x40) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40), lVar1 != 0)) &&
     ((plVar2 = *(longlong **)(lVar1 + 0x58), plVar2 != (longlong *)0x0 &&
      (*(longlong *)(param_1 + 0x68) != 0)))) {
    local_10 = &local_20;
    local_18 = FUN_14437262a;
    local_20 = param_1;
    (**(code **)(*plVar2 + 0x2a0))(plVar2);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f81aa4 FUN_148f81aa4 body=199 status=ok
// SIG undefined FUN_148f81aa4(void)

void FUN_148f81aa4(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar1 + 0xa8) == 1) {
    dVar2 = *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0x120) +
            *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x110) +
            *(double *)(param_1 + 0x118) * *(double *)(param_1 + 0x118);
  }
  else {
    FUN_146bed047(&local_30,param_1 + 0xf0,param_1 + 0x128);
    dVar2 = local_20 * local_20 + local_30 * local_30 + local_28 * local_28;
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  *(double *)(lVar1 + 0xb0) = SQRT(dVar2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f81b6c FUN_148f81b6c body=698 status=ok
// SIG undefined FUN_148f81b6c(void)

void FUN_148f81b6c(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == '\0') {
    lVar1 = param_1 + 0xf0;
    local_78 = (*(double *)(param_1 + 0x120) + *(double *)(param_1 + 0xe8)) -
               *(double *)(param_1 + 0xe8);
    dStack_80 = (*(double *)(param_1 + 0x118) + *(double *)(param_1 + 0xe0)) -
                *(double *)(param_1 + 0xe0);
    local_88 = (*(double *)(param_1 + 0x110) + *(double *)(param_1 + 0xd8)) -
               *(double *)(param_1 + 0xd8);
    FUN_146bf2028(lVar1,&local_a0);
    *(undefined8 *)(param_1 + 0x138) = local_90;
    *(undefined8 *)(param_1 + 0x128) = local_a0;
    *(undefined8 *)(param_1 + 0x130) = uStack_98;
    *(undefined8 *)(param_1 + 0x130) = 0;
    FUN_148415b26(*(undefined8 *)(param_1 + 0x60),&local_88);
    local_78 = local_58 - *(double *)(param_1 + 0xe8);
    dStack_80 = dStack_60 - *(double *)(param_1 + 0xe0);
    local_88 = local_68 - *(double *)(param_1 + 0xd8);
    FUN_146bf2028(lVar1,&local_a0,&local_88);
    uStack_98 = 0;
    FUN_146bed047(&local_88,lVar1,&local_a0);
    local_58 = local_78 + *(double *)(param_1 + 0xe8);
    dStack_60 = dStack_80 + *(double *)(param_1 + 0xe0);
    local_68 = local_88 + *(double *)(param_1 + 0xd8);
    local_88 = *(double *)(param_1 + 0xf0);
    dStack_80 = *(double *)(param_1 + 0xf8);
    local_78 = *(double *)(param_1 + 0x100);
    uStack_70 = *(undefined4 *)(param_1 + 0x108);
    uStack_6c = *(undefined4 *)(param_1 + 0x10c);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    FUN_146bed047(&local_88,param_1 + 0xf0,param_1 + 0x128);
    *(double *)(param_1 + 0x110) =
         (local_88 + *(double *)(param_1 + 0xd8)) - *(double *)(param_1 + 0xd8);
    *(double *)(param_1 + 0x118) =
         (dStack_80 + *(double *)(param_1 + 0xe0)) - *(double *)(param_1 + 0xe0);
    *(double *)(param_1 + 0x120) =
         (local_78 + *(double *)(param_1 + 0xe8)) - *(double *)(param_1 + 0xe8);
    FUN_148415b26(*(undefined8 *)(param_1 + 0x50),&local_88);
    local_88 = *(double *)(param_1 + 0xf0);
    dStack_80 = *(double *)(param_1 + 0xf8);
    local_78 = *(double *)(param_1 + 0x100);
    uStack_70 = *(undefined4 *)(param_1 + 0x108);
    uStack_6c = *(undefined4 *)(param_1 + 0x10c);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
  }
  uStack_30 = 0;
  local_38 = 0x3ff0000000000000;
  uStack_40 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_148415b4c(uVar2,&local_88,1);
  FUN_148f81234(param_1);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_1485051e4(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x40));
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f81e28 FUN_148f81e28 body=347 status=ok
// SIG undefined FUN_148f81e28(void)

void FUN_148f81e28(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  double local_68;
  double local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    local_58 = (&DAT_14c758c60)[DAT_14cbf3df2];
    local_54 = (&DAT_14c758c60)[DAT_14cbf3df1];
    local_50 = (&DAT_14c758c60)[DAT_14cbf3df0];
    local_4c = (float)DAT_14cbf3df3 * 0.003921569;
    local_88 = 0x408f400000000000;
    local_80 = 0;
    uStack_78 = 0;
    FUN_146bed047(&local_48,param_1 + 0xf0);
    local_60 = local_38 + *(double *)(param_1 + 0xe8);
    local_68 = local_40 + *(double *)(param_1 + 0xe0);
    local_70 = local_48 + *(double *)(param_1 + 0xd8);
    local_90 = 1;
    local_a8 = 1;
    local_98 = 0x3f800000;
    local_a0 = 0x3f000000;
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1 + 0xd8,&local_70,&local_58);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f81f96 FUN_148f81f96 body=483 status=ok
// SIG undefined FUN_148f81f96(void)

undefined8 * FUN_148f81f96(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *_Dst;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  _Dst = (void *)FUN_14001cc68(400);
  memset(_Dst,0,400);
  FUN_148f92872(_Dst);
  uVar3 = *(undefined8 *)(param_1 + 0x420);
  lVar4 = *(longlong *)(param_1 + 0x428);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)((longlong)_Dst + 0x90);
  *(undefined8 *)((longlong)_Dst + 0x88) = uVar3;
  *(longlong *)((longlong)_Dst + 0x90) = lVar4;
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
  uVar3 = *(undefined8 *)(param_1 + 0x430);
  lVar4 = *(longlong *)(param_1 + 0x438);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)((longlong)_Dst + 0xa0);
  *(undefined8 *)((longlong)_Dst + 0x98) = uVar3;
  *(longlong *)((longlong)_Dst + 0xa0) = lVar4;
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
  local_78 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  local_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x48);
  local_58 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  local_48 = *(undefined8 *)(param_1 + 0x60);
  local_40 = *(undefined4 *)(param_1 + 0x70);
  uStack_3c = *(undefined4 *)(param_1 + 0x74);
  uStack_38 = *(undefined4 *)(param_1 + 0x78);
  uStack_34 = *(undefined4 *)(param_1 + 0x7c);
  local_30 = *(undefined8 *)(param_1 + 0x80);
  FUN_1484665ec(_Dst);
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(uint *)((longlong)_Dst + 0xa8) = (uint)(*(int *)(lVar4 + 0xa8) == 1);
  *(undefined8 *)((longlong)_Dst + 0xb0) = *(undefined8 *)(lVar4 + 0xb0);
  *(undefined8 *)((longlong)_Dst + 0xd8) = *(undefined8 *)(param_1 + 0x378);
  uVar3 = *(undefined8 *)(param_1 + 0x358);
  uVar13 = *(undefined8 *)(param_1 + 0x360);
  uVar14 = *(undefined8 *)(param_1 + 0x370);
  *(undefined8 *)((longlong)_Dst + 200) = *(undefined8 *)(param_1 + 0x368);
  *(undefined8 *)((longlong)_Dst + 0xd0) = uVar14;
  *(undefined8 *)((longlong)_Dst + 0xb8) = uVar3;
  *(undefined8 *)((longlong)_Dst + 0xc0) = uVar13;
  uVar6 = *(undefined4 *)(param_1 + 0x38c);
  uVar7 = *(undefined4 *)(param_1 + 0x390);
  uVar8 = *(undefined4 *)(param_1 + 0x394);
  uVar9 = *(undefined4 *)(param_1 + 0x398);
  uVar10 = *(undefined4 *)(param_1 + 0x39c);
  uVar11 = *(undefined4 *)(param_1 + 0x3a0);
  uVar12 = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)((longlong)_Dst + 0xe0) = *(undefined4 *)(param_1 + 0x388);
  *(undefined4 *)((longlong)_Dst + 0xe4) = uVar6;
  *(undefined4 *)((longlong)_Dst + 0xe8) = uVar7;
  *(undefined4 *)((longlong)_Dst + 0xec) = uVar8;
  *(undefined4 *)((longlong)_Dst + 0xf0) = uVar9;
  *(undefined4 *)((longlong)_Dst + 0xf4) = uVar10;
  *(undefined4 *)((longlong)_Dst + 0xf8) = uVar11;
  *(undefined4 *)((longlong)_Dst + 0xfc) = uVar12;
  *(undefined8 *)((longlong)_Dst + 0x100) = *(undefined8 *)(param_1 + 0x3a8);
  *(undefined4 *)((longlong)_Dst + 0x108) = *(undefined4 *)(param_1 + 0x3b8);
  *(undefined4 *)((longlong)_Dst + 0x10c) = *(undefined4 *)(param_1 + 0x3bc);
  *param_2 = _Dst;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8217a FUN_148f8217a body=796 status=ok
// SIG undefined FUN_148f8217a(void)

void FUN_148f8217a(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484445fc();
  plVar5 = (longlong *)FUN_148f82497(param_1);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
  param_1[9] = (longlong)plVar5;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  plVar9 = param_1 + 5;
  uVar6 = FUN_14479d2ce(plVar9);
  (**(code **)(*plVar5 + 0x2a8))(plVar5,uVar6,&local_40);
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,param_1[9]);
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[9],0);
  local_40 = (undefined8 *)&LAB_148f82608;
  local_38 = 0;
  FUN_148f8252c(param_1[9] + 0x90,local_48,param_1);
  param_1[0x2a] = 0x3f800000;
  param_1[0x2b] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x2c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x41000000;
  *(undefined1 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x382) = 1;
  *(undefined2 *)(param_1 + 0x70) = 0x100;
  uVar6 = FUN_1409ffe1d();
  plVar5 = (longlong *)FUN_14843c80f(uVar6);
  (**(code **)(*plVar5 + 0x358))(plVar5,param_1 + 8);
  plVar7 = (longlong *)FUN_14479d2ce(plVar9);
  (**(code **)(*plVar7 + 0x2e8))(plVar7,plVar5,0);
  uVar6 = FUN_1409ffe1d();
  plVar5 = (longlong *)FUN_1484101e0(uVar6);
  (**(code **)(*plVar5 + 0x300))(plVar5,param_1 + 7);
  plVar7 = (longlong *)FUN_14479d2ce(plVar9);
  (**(code **)(*plVar7 + 0x2e8))(plVar7,plVar5,0);
  plVar5 = (longlong *)FUN_14479d2ce(plVar9);
  uVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  uVar6 = FUN_148451390(uVar6);
  lVar8 = FUN_148f740cc(uVar6);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar8);
  }
  param_1[10] = lVar8;
  lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + 0x80);
  plVar5 = *(longlong **)(*(longlong *)(lVar8 + 0x70) + 0x88);
  if (plVar5 == (longlong *)0x0) {
    param_1[0x18] = lVar3;
    plVar9 = (longlong *)param_1[0x19];
    if (plVar9 == (longlong *)0x0) goto LAB_148f823f0;
    param_1[0x19] = 0;
LAB_148f823ba:
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_148f823f0;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar9;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[0x18] = lVar3;
    plVar9 = (longlong *)param_1[0x19];
    if (plVar5 != plVar9) {
      param_1[0x19] = (longlong)plVar5;
      if (plVar9 == (longlong *)0x0) goto LAB_148f823f0;
      goto LAB_148f823ba;
    }
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_148f823f0;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_148f823f0:
  lVar8 = param_1[10];
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar4 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e06450;
  uVar6 = FUN_144a3f946();
  puVar4[2] = uVar6;
  *puVar4 = &PTR_FUN_14ba31140;
  puVar4[3] = 0;
  FUN_14485c47a(puVar4 + 3,param_1);
  puVar4[4] = param_1;
  FUN_140c6314c(lVar8 + 0x100,local_48,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f82497 FUN_148f82497 body=148 status=ok
// SIG undefined FUN_148f82497(void)

undefined8 FUN_148f82497(undefined8 param_1)

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
  uVar1 = FUN_1459f4ea2();
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



// FUNCTION 148f8252c FUN_148f8252c body=218 status=ok
// SIG undefined FUN_148f8252c(void)

undefined8
FUN_148f8252c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aedba20;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14ba310d0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14844f9a0(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f82616 FUN_148f82616 body=568 status=ok
// SIG undefined FUN_148f82616(void)

void FUN_148f82616(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30);
  plVar4 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149fab260;
  FUN_146bff712(plVar4 + 2,uVar3);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x450) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x458);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x458) = 0;
LAB_148f8268c:
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
      if (plVar4 != (longlong *)0x0) goto LAB_148f826f2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x450) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x458);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x458) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148f8268c;
    }
LAB_148f826f2:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48);
  plVar5 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14aee5500;
  plVar4 = plVar5 + 2;
  FUN_148f92d0a(plVar4,uVar3);
  if (plVar5 == (longlong *)0x0) {
    FUN_1482ab8e4(0x10,*(undefined8 *)(param_1 + 0x450));
    *(undefined8 *)(param_1 + 0x460) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x468);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x468) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
    FUN_1482ab8e4(plVar4,*(undefined8 *)(param_1 + 0x450));
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x460) = plVar4;
    plVar4 = *(longlong **)(param_1 + 0x468);
    if (plVar5 == plVar4) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      goto LAB_148f827c8;
    }
    *(longlong **)(param_1 + 0x468) = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_148f827c8;
  }
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
  if (plVar5 == (longlong *)0x0) {
    return;
  }
LAB_148f827c8:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 148f8284e FUN_148f8284e body=250 status=ok
// SIG undefined FUN_148f8284e(void)

void FUN_148f8284e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[0xb] == '\x01') {
    (**(code **)(*param_1 + 0x300))(param_1);
  }
  plVar3 = (longlong *)param_1[9];
  FUN_140056680(local_30,&DAT_149dfb77a);
  uVar4 = FUN_14479d2ce(param_1 + 5);
  (**(code **)(*plVar3 + 0x2a0))(plVar3,uVar4,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1448a8284(param_1[9] + 0x90);
  param_1[0x18] = 0;
  plVar3 = (longlong *)param_1[0x19];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x19] = 0;
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
  param_1[9] = 0;
  FUN_140457ffc(param_1[10] + 0x100,param_1);
  param_1[10] = 0;
  FUN_148444606(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8294a FUN_148f8294a body=775 status=ok
// SIG undefined FUN_148f8294a(void)

undefined8 FUN_148f8294a(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t **ppwVar6;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined1 local_50 [8];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 5);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c8))(plVar3);
  local_b8 = L"InsertEdgeActivityDescription";
  local_b0 = 0x1d;
  FUN_1446e940c(local_44,&local_b8);
  local_b8 = L"UPolyEditInsertEdgeActivity";
  local_b0 = 0x1b;
  FUN_1446e940c(local_48,&local_b8);
  FUN_140208bae(&local_b8,local_48,local_44,
                L"Click two points on the boundary of a face to insert a new edge between the points and split the face."
               );
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_b8,2);
  if (local_b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_b8 + 0x10))();
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[9],1);
  lVar4 = param_1[10];
  lVar1 = *(longlong *)(lVar4 + 0x70);
  if (((*(int *)(lVar1 + 1000) != *(int *)(lVar1 + 0x414)) ||
      (*(int *)(lVar1 + 0x438) != *(int *)(lVar1 + 0x464))) ||
     (*(int *)(lVar1 + 0x398) != *(int *)(lVar1 + 0x3c4))) {
    FUN_148531782();
    FUN_14853173e(*(undefined8 *)(param_1[10] + 0x70));
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 5);
    lVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
    local_b8 = L"ClearSelection";
    local_b0 = 0xe;
    FUN_1446e940c(local_44,&local_b8);
    local_b8 = L"UPolyEditInsertEdgeActivity";
    local_b0 = 0x1b;
    FUN_1446e940c(local_48,&local_b8);
    FUN_140208bae(&local_b8,local_48,local_44,L"Clear Selection");
    FUN_1485323bc(*(undefined8 *)(param_1[10] + 0x70),local_50);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))
              (lVar4 + 0x28,*(undefined8 *)(param_1[10] + 0x70),local_50,&local_b8);
    if (local_b8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_b8 + 0x10))();
    }
    lVar4 = param_1[10];
  }
  FUN_14851b8ac(*(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x58),&local_b8);
  ppwVar6 = &local_b8;
  plVar3 = param_1 + 0xc;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar3 = (longlong)*ppwVar6;
    ppwVar6 = ppwVar6 + 1;
    plVar3 = plVar3 + 1;
  }
  FUN_148f82616(param_1);
  FUN_148f82c52(param_1);
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((longlong)param_1 + 0x425) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  lVar4 = param_1[10];
  local_b8 = L"BeginInsertEdgeActivity";
  local_b0 = 0x17;
  FUN_1446e940c(local_44,&local_b8);
  local_b8 = L"UPolyEditInsertEdgeActivity";
  local_b0 = 0x1b;
  FUN_1446e940c(local_48,&local_b8);
  FUN_140208bae(&local_b8,local_48,local_44,L"Begin Insert Edge");
  pcVar2 = *(code **)(lVar4 + 0xc0);
  plVar3 = (longlong *)(lVar4 + 0xe0);
  if (*(longlong **)(lVar4 + 0xd0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar4 + 0xd0);
  }
  uVar5 = (**(code **)(*plVar3 + 8))(plVar3);
  (*pcVar2)(uVar5,&local_b8);
  if (local_b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_b8 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f82c52 FUN_148f82c52 body=340 status=ok
// SIG undefined FUN_148f82c52(void)

void FUN_148f82c52(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143b8439e(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40),param_1 + 0x30);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar2 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ba263d0;
  uVar3 = FUN_144a3f946();
  puVar2[2] = uVar3;
  *puVar2 = &PTR_FUN_14ba311b0;
  puVar2[3] = 0;
  FUN_14485c47a(puVar2 + 3,param_1);
  puVar2[4] = param_1;
  FUN_148f76e8e(lVar1 + 0x40,local_50,&local_48);
  FUN_1449db362(&local_48);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar2 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14aefe820;
  uVar3 = FUN_144a3f946();
  puVar2[2] = uVar3;
  *puVar2 = &PTR_FUN_14ba31220;
  puVar2[3] = 0;
  FUN_14485c47a(puVar2 + 3,param_1);
  puVar2[4] = param_1;
  FUN_1484d607c(lVar1 + 0x28,local_50,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f82da8 FUN_148f82da8 body=280 status=ok
// SIG undefined FUN_148f82da8(void)

byte FUN_148f82da8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  
  bVar4 = 2;
  if ((char)param_1[0xb] == '\x01') {
    (**(code **)(*param_1 + 0x2c8))(param_1,param_1[9],0);
    FUN_1448a8284(param_1[9] + 0x90);
    FUN_140457ffc(*(longlong *)(param_1[10] + 0x40) + 0x40,param_1);
    FUN_140457ffc(*(longlong *)(param_1[10] + 0x40) + 0x28,param_1);
    *(undefined4 *)(param_1 + 0x84) = 0;
    FUN_148f82ec0(param_1);
    FUN_143b844d6(*(undefined8 *)(param_1[10] + 0x40));
    param_1[0x85] = 0;
    plVar3 = (longlong *)param_1[0x86];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x86] = 0;
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
    param_1[0x87] = 0;
    plVar3 = (longlong *)param_1[0x88];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x88] = 0;
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
    *(undefined1 *)(param_1 + 0xb) = 0;
    bVar4 = (**(code **)(*param_1 + 0x2f8))(param_1);
    bVar4 = bVar4 ^ 1;
  }
  return bVar4;
}



// FUNCTION 148f82ec0 FUN_148f82ec0 body=173 status=ok
// SIG undefined FUN_148f82ec0(void)

void FUN_148f82ec0(longlong param_1)

{
  FUN_143b844a2(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40));
  FUN_14851bbe8(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 0x58),
                *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30),1,0xf);
  *(undefined1 *)(param_1 + 0x424) = 1;
  if (*(int *)(param_1 + 0xdc) < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_146c94d7e(param_1 + 0xd0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(param_1 + 0xec) < 0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    FUN_1447a8aa0(param_1 + 0xe0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  if (*(int *)(param_1 + 0x420) == 1) {
    *(undefined4 *)(param_1 + 0x420) = 0;
  }
  return;
}



// FUNCTION 148f82f72 FUN_148f82f72 body=889 status=ok
// SIG undefined FUN_148f82f72(void)

void FUN_148f82f72(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  undefined8 *local_280;
  undefined8 local_278;
  undefined8 *local_268;
  undefined8 local_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined1 local_248 [4];
  undefined1 local_244 [4];
  undefined1 local_240 [8];
  undefined1 local_238 [240];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if ((*(int *)(param_1 + 0x420) == 2) &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 0x91) == '\x01')) {
    if (*(char *)(param_1 + 0x425) == '\x01') {
      FUN_146c2c368(local_f0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30));
      FUN_146c2c4e8(local_f0);
      local_128 = 0;
      local_120 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_11c = 0xffffffff00000080;
      local_114 = 0;
      local_108 = 0;
      local_100 = 0;
      FUN_145c3f772(&local_148,*(undefined8 *)(param_1 + 0x438));
      FUN_148f76300(local_f0,&local_148,1);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30);
      uVar6 = FUN_14851bd54(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 0x58));
      local_280 = (undefined8 *)CONCAT71(local_280._1_7_,1);
      local_288 = CONCAT71(local_288._1_7_,1);
      FUN_146c005f0(uVar3,uVar6,1,1);
      FUN_148466536(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48),
                    *(undefined8 *)(param_1 + 0x428));
      FUN_1482ab8e4(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30));
      FUN_148f82616(param_1);
      FUN_1458d302c(local_238);
      lVar8 = *(longlong *)(param_1 + 0x50);
      FUN_146c2caf6(local_f0,local_240);
      local_260 = L"EdgeInsertionTransactionName";
      uStack_258 = 0x1c;
      FUN_1446e940c(local_244,&local_260);
      local_260 = L"UPolyEditInsertEdgeActivity";
      uStack_258 = 0x1b;
      FUN_1446e940c(local_248,&local_260);
      FUN_140208bae(&local_260,local_248,local_244,L"Edge Insertion");
      FUN_148f74f2e(lVar8 + 0x80,&local_260,local_240,local_238);
      if (local_260 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_260 + 0x10))();
      }
      *(undefined4 *)(param_1 + 0x420) = 0;
      if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xac) == '\x01') {
        local_288 = param_1 + 0x3b4;
        local_278 = 0;
        local_280 = &local_260;
        cVar4 = FUN_148f832ec(param_1,param_1 + 0x3f0,param_1 + 0x388,param_1 + 0x3b0);
        if (cVar4 != '\0') {
          uVar5 = *(uint *)(param_1 + 0xec);
          iVar9 = 0;
          if ((int)uVar5 < 0) {
            *(undefined4 *)(param_1 + 0xe8) = 0;
            FUN_1447a8aa0(param_1 + 0xe0,0);
            iVar9 = *(int *)(param_1 + 0xe8);
            uVar5 = *(uint *)(param_1 + 0xec);
          }
          *(uint *)(param_1 + 0xe8) = iVar9 + 1U;
          if (uVar5 < iVar9 + 1U) {
            FUN_1403e3958(param_1 + 0xe0,iVar9);
          }
          lVar8 = *(longlong *)(param_1 + 0xe0);
          *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar9 * 0x18) = local_250;
          puVar1 = (undefined4 *)(lVar8 + (longlong)iVar9 * 0x18);
          *puVar1 = (undefined4)local_260;
          puVar1[1] = local_260._4_4_;
          puVar1[2] = uStack_258;
          puVar1[3] = uStack_254;
          *(undefined4 *)(param_1 + 0x420) = 1;
          plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
          lVar8 = (**(code **)(*plVar7 + 0x2c8))(plVar7);
          local_268 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          uVar2 = *(undefined4 *)(param_1 + 0x448);
          *local_268 = &PTR_LAB_14ba31290;
          *(undefined4 *)(local_268 + 1) = uVar2;
          *(undefined1 *)((longlong)local_268 + 0xc) = 0;
          (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x20))
                    (lVar8 + 0x28,param_1,&local_268,&DAT_14cbf3e40);
        }
      }
      FUN_1456c3cc8(local_238);
      FUN_146c2c40e(local_f0);
    }
    else {
      *(uint *)(param_1 + 0x420) = (uint)(0 < *(int *)(param_1 + 0xe8));
    }
    if (*(int *)(param_1 + 0xdc) < 0) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
      FUN_146c94d7e(param_1 + 0xd0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f832ec FUN_148f832ec body=2431 status=ok
// SIG undefined FUN_148f832ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_148f832ec(longlong param_1,double *param_2,uint *param_3,int *param_4,undefined1 *param_5,
             double *param_6,double *param_7)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
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
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_278 [32];
  double *local_258;
  undefined1 *local_250;
  int *local_248;
  int local_23c;
  undefined1 local_238 [24];
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  undefined1 local_1d0 [88];
  int local_178;
  int local_14c;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  *param_4 = -1;
  *param_3 = 0xffffffff;
  dVar15 = param_2[3];
  dVar24 = param_2[4];
  dVar8 = *(double *)(param_1 + 0x60);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0xa0);
  dVar16 = -dVar8;
  dVar21 = -*(double *)(param_1 + 0x68);
  dVar20 = *(double *)(param_1 + 0x70) * -1.0;
  dVar22 = *(double *)(param_1 + 0x78) * 1.0;
  dVar28 = dVar24 * dVar16 - dVar15 * dVar21;
  dVar29 = param_2[5] * dVar21 - dVar24 * dVar20;
  dVar27 = dVar15 * dVar20 - param_2[5] * dVar16;
  dVar29 = dVar29 + dVar29;
  dVar27 = dVar27 + dVar27;
  dVar28 = dVar28 + dVar28;
  auVar26 = divpd(_DAT_149934d80,auVar2);
  local_208 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar26._0_8_);
  dStack_200 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar26._8_8_);
  local_1f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0xb0))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0xb0)));
  dVar18 = *param_2 - *(double *)(param_1 + 0x80);
  dVar19 = param_2[1] - *(double *)(param_1 + 0x88);
  dVar17 = param_2[2] - *(double *)(param_1 + 0x90);
  dVar23 = dVar19 * dVar16 - dVar21 * dVar18;
  dVar25 = dVar17 * dVar21 - dVar20 * dVar19;
  dVar30 = dVar18 * dVar20 - dVar17 * dVar16;
  dVar25 = dVar25 + dVar25;
  dVar30 = dVar30 + dVar30;
  dVar23 = dVar23 + dVar23;
  dStack_1f0 = ((dVar28 * dVar21 - dVar27 * dVar20) + dVar22 * dVar29 + dVar15) * local_208;
  dStack_1e8 = (dVar8 * dVar28 + dVar20 * dVar29 + dVar22 * dVar27 + dVar24) * dStack_200;
  dStack_1e0 = (dVar28 * dVar22 + param_2[5] + (dVar27 * dVar16 - dVar29 * dVar21)) * local_1f8;
  local_208 = ((dVar23 * dVar21 - dVar30 * dVar20) + dVar22 * dVar25 + dVar18) * local_208;
  dStack_200 = (dVar8 * dVar23 + dVar20 * dVar25 + dVar22 * dVar30 + dVar19) * dStack_200;
  local_1f8 = (dVar23 * dVar22 + dVar17 + (dVar30 * dVar16 - dVar25 * dVar21)) * local_1f8;
  dVar16 = dStack_1e0 * dStack_1e0 + dStack_1f0 * dStack_1f0 + dStack_1e8 * dStack_1e8;
  if (9.99999993922529e-09 < dVar16) {
    dVar16 = 1.0 / SQRT(dVar16);
    dStack_1f0 = dStack_1f0 * dVar16;
    dStack_1e8 = dStack_1e8 * dVar16;
    dStack_1e0 = dStack_1e0 * dVar16;
  }
  if (param_7 != (double *)0x0) {
    param_7[4] = dStack_1e8;
    param_7[5] = dStack_1e0;
    param_7[2] = local_1f8;
    param_7[3] = dStack_1f0;
    *param_7 = local_208;
    param_7[1] = dStack_200;
  }
  FUN_1458d302c(local_1d0);
  *(undefined1 *)(param_1 + 899) =
       *(undefined1 *)
        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x78) + 0xad);
  local_248 = &local_23c;
  local_250 = local_238;
  local_258 = &local_220;
  uVar9 = FUN_148524926(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x380,&local_208,local_1d0);
  if ((char)uVar9 == '\0') goto LAB_148f83741;
  if (local_14c < local_178) {
    iVar10 = FUN_1482ae398(local_1d0);
    *param_4 = iVar10;
    *param_5 = 1;
    *(undefined1 *)(param_3 + 1) = 1;
    uVar11 = FUN_1482abba8(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48),*param_4);
    *param_3 = uVar11;
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x10) +
             (ulonglong)(uVar11 >> 9) * 8);
    pdVar1 = (double *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
    dVar16 = *pdVar1;
    dVar21 = pdVar1[1];
    param_6[2] = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
    *param_6 = dVar16;
    param_6[1] = dVar21;
    goto LAB_148f83741;
  }
  iVar10 = FUN_1482ae192(local_1d0);
  *param_4 = iVar10;
  *param_5 = 0;
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48) + 0x70);
  lVar12 = (longlong)*param_4 * 0x50;
  lVar5 = lVar6 + lVar12;
  lVar13 = (longlong)local_23c;
  lVar7 = *(longlong *)(lVar6 + 0x10 + lVar12);
  uVar11 = *(uint *)(*(longlong *)(lVar6 + 0x20 + lVar12) + lVar13 * 4);
  uVar3 = *(uint *)(lVar7 + lVar13 * 4);
  uVar4 = *(uint *)(lVar7 + 4 + lVar13 * 4);
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x10);
  lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
  uVar14 = (ulonglong)uVar3 & 0x1ff;
  dVar16 = *(double *)(lVar7 + uVar14 * 0x18);
  dVar21 = *(double *)(lVar7 + 8 + uVar14 * 0x18);
  dVar23 = *(double *)(lVar7 + 0x10 + uVar14 * 0x18);
  lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
  uVar14 = (ulonglong)uVar4 & 0x1ff;
  dVar25 = *(double *)(lVar6 + uVar14 * 0x18);
  dVar30 = *(double *)(lVar6 + 8 + uVar14 * 0x18);
  dVar15 = *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
  dVar8 = dVar15 - dVar23;
  dVar28 = dVar30 - dVar21;
  dVar24 = dVar25 - dVar16;
  dVar18 = SQRT(dVar8 * dVar8 + dVar24 * dVar24 + dVar28 * dVar28);
  dVar17 = 1.0 / dVar18;
  dVar8 = dVar8 * dVar17;
  dVar28 = dVar28 * dVar17;
  dVar17 = dVar17 * dVar24;
  *(double *)(param_3 + 2) = dVar17;
  *(double *)(param_3 + 4) = dVar28;
  *(double *)(param_3 + 6) = dVar8;
  dVar19 = (double)(float)((local_210 - dVar23) * dVar8 +
                          (local_220 - dVar16) * dVar17 + (local_218 - dVar21) * dVar28);
  dVar24 = *(double *)(*(longlong *)(param_1 + 0x48) + 0xb0);
  if (dVar19 <= dVar24) {
    *(undefined1 *)(param_3 + 1) = 1;
    *param_3 = uVar3;
    *param_6 = dVar16;
    param_6[1] = dVar21;
    param_6[2] = dVar23;
    if (local_23c < 1) goto LAB_148f83741;
    uVar11 = *(uint *)(*(longlong *)(lVar5 + 0x10) + -4 + lVar13 * 4);
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x10) +
             (ulonglong)(uVar11 >> 9) * 8);
    uVar14 = (ulonglong)(uVar11 & 0x1ff);
    dVar23 = dVar23 - *(double *)(lVar5 + 0x10 + uVar14 * 0x18);
    dVar21 = dVar21 - *(double *)(lVar5 + 8 + uVar14 * 0x18);
    dVar16 = dVar16 - *(double *)(lVar5 + uVar14 * 0x18);
    dVar30 = SQRT(dVar23 * dVar23 + dVar16 * dVar16 + dVar21 * dVar21);
    dVar25 = 1.0 / dVar30;
    if (0.0 < dVar30) {
      dVar15 = dVar23 * dVar25;
      dVar21 = dVar21 * dVar25;
    }
    else {
      dVar21 = 0.0;
      dVar15 = 0.0;
    }
    dVar23 = (double)(-(ulonglong)(0.0 < dVar30) & (ulonglong)(dVar16 * dVar25)) +
             *(double *)(param_3 + 2);
    dVar21 = dVar21 + *(double *)(param_3 + 4);
    dVar15 = dVar15 + *(double *)(param_3 + 6);
    dVar16 = SQRT(dVar15 * dVar15 + dVar23 * dVar23 + dVar21 * dVar21);
    if (dVar16 <= 0.0) {
LAB_148f83c57:
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      goto LAB_148f83741;
    }
    dVar16 = 1.0 / dVar16;
    *(double *)(param_3 + 2) = dVar23 * dVar16;
    *(double *)(param_3 + 4) = dVar21 * dVar16;
    dVar15 = dVar15 * dVar16;
  }
  else {
    if (dVar24 < ABS(dVar19 - dVar18)) {
      *(undefined1 *)(param_3 + 1) = 0;
      *param_3 = uVar11;
      *(double *)(param_3 + 8) = dVar19 / dVar18;
      *param_6 = dVar16 + dVar17 * dVar19;
      param_6[1] = dVar21 + dVar28 * dVar19;
      param_6[2] = dVar23 + dVar8 * dVar19;
      if (uVar3 != *(uint *)(*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x1c0) +
                              (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)((uVar11 & 0x1ff) << 4))) {
        *(double *)(param_3 + 8) = 1.0 - *(double *)(param_3 + 8);
      }
      goto LAB_148f83741;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    *param_3 = uVar4;
    *param_6 = dVar25;
    param_6[1] = dVar30;
    param_6[2] = dVar15;
    if (*(int *)(lVar5 + 0x18) <= local_23c + 2) goto LAB_148f83741;
    uVar11 = *(uint *)(*(longlong *)(lVar5 + 0x10) + (longlong)(local_23c + 2) * 4);
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x10) +
             (ulonglong)(uVar11 >> 9) * 8);
    uVar14 = (ulonglong)(uVar11 & 0x1ff);
    dVar15 = *(double *)(lVar5 + 0x10 + uVar14 * 0x18) - dVar15;
    dVar30 = *(double *)(lVar5 + 8 + uVar14 * 0x18) - dVar30;
    dVar25 = *(double *)(lVar5 + uVar14 * 0x18) - dVar25;
    dVar21 = SQRT(dVar15 * dVar15 + dVar25 * dVar25 + dVar30 * dVar30);
    dVar16 = 1.0 / dVar21;
    if (0.0 < dVar21) {
      dVar15 = dVar15 * dVar16;
      dVar30 = dVar30 * dVar16;
    }
    else {
      dVar30 = 0.0;
      dVar15 = 0.0;
    }
    dVar16 = (double)(-(ulonglong)(0.0 < dVar21) & (ulonglong)(dVar25 * dVar16)) +
             *(double *)(param_3 + 2);
    dVar30 = dVar30 + *(double *)(param_3 + 4);
    dVar15 = dVar15 + *(double *)(param_3 + 6);
    dVar21 = SQRT(dVar15 * dVar15 + dVar16 * dVar16 + dVar30 * dVar30);
    if (dVar21 <= 0.0) goto LAB_148f83c57;
    dVar21 = 1.0 / dVar21;
    *(double *)(param_3 + 2) = dVar16 * dVar21;
    *(double *)(param_3 + 4) = dVar30 * dVar21;
    dVar15 = dVar15 * dVar21;
  }
  *(double *)(param_3 + 6) = dVar15;
LAB_148f83741:
  FUN_1456c3cc8(local_1d0);
  if ((local_e0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f83c6c FUN_148f83c6c body=595 status=ok
// SIG undefined FUN_148f83c6c(void)

void FUN_148f83c6c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar9 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2c8))(plVar9);
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x378))(plVar9);
  (**(code **)(*plVar9 + 0x18))(plVar9,param_1 + 0xf0);
  (**(code **)(*param_2 + 0x18))(param_2,local_98);
  lVar1 = param_1 + 0x140;
  local_e0 = param_2;
  FUN_148453350(lVar1,param_2,local_98);
  local_e8 = param_1 + 0x60;
  FUN_148453434(lVar1);
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48);
  lVar10 = (longlong)*(int *)(lVar13 + 0x78);
  if (lVar10 != 0) {
    lVar13 = *(longlong *)(lVar13 + 0x70);
    lVar10 = lVar10 * 0x50 + lVar13;
    do {
      iVar4 = *(int *)(lVar13 + 0x28);
      if ((longlong)iVar4 != 0) {
        lVar6 = *(longlong *)(lVar13 + 0x20);
        lVar12 = 0;
        do {
          uVar5 = *(uint *)(lVar6 + lVar12);
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30);
          uVar11 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(lVar7 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8) +
                    (ulonglong)((uVar5 & 0x1ff) << 4));
          lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + (uVar11 >> 9 & 0x7fffff) * 8);
          local_a8 = *(undefined8 *)(lVar8 + 0x10 + (uVar11 & 0x1ff) * 0x18);
          puVar2 = (undefined8 *)(lVar8 + (uVar11 & 0x1ff) * 0x18);
          local_b8 = *puVar2;
          uStack_b0 = puVar2[1];
          lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + (uVar11 >> 0x29) * 8);
          uVar11 = uVar11 >> 0x20 & 0x1ff;
          local_c8 = *(undefined8 *)(lVar7 + 0x10 + uVar11 * 0x18);
          puVar3 = (undefined4 *)(lVar7 + uVar11 * 0x18);
          local_d8 = *puVar3;
          uStack_d4 = puVar3[1];
          uStack_d0 = puVar3[2];
          uStack_cc = puVar3[3];
          FUN_148527000(lVar1,&local_b8,&local_d8);
          lVar12 = lVar12 + 4;
        } while ((longlong)iVar4 * 4 != lVar12);
      }
      lVar13 = lVar13 + 0x50;
    } while (lVar13 != lVar10);
  }
  FUN_14845342a(lVar1);
  lVar1 = param_1 + 0x260;
  FUN_148453350(lVar1,local_e0,local_98);
  FUN_148453434(lVar1,local_e8);
  if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
    lVar13 = *(longlong *)(param_1 + 0xd0);
    lVar10 = (longlong)*(int *)(param_1 + 0xd8) * 0x30 + lVar13;
    do {
      FUN_148527000(lVar1,lVar13,lVar13 + 0x18);
      lVar13 = lVar13 + 0x30;
    } while (lVar13 != lVar10);
  }
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar13 = *(longlong *)(param_1 + 0xe0);
    lVar10 = (longlong)*(int *)(param_1 + 0xe8) * 0x18;
    do {
      FUN_148526e7a(lVar1,lVar13);
      lVar13 = lVar13 + 0x18;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  FUN_14845342a(lVar1);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f83ecc FUN_148f83ecc body=109 status=ok
// SIG undefined FUN_148f83ecc(void)

void FUN_148f83ecc(longlong param_1)

{
  if (*(int *)(param_1 + 0xdc) < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_146c94d7e(param_1 + 0xd0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  FUN_143b844a2(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40));
  FUN_14851bbe8(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 0x58),
                *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30),1,0xf);
  *(undefined1 *)(param_1 + 0x424) = 1;
  return;
}



// FUNCTION 148f83f3a FUN_148f83f3a body=340 status=ok
// SIG undefined FUN_148f83f3a(void)

void FUN_148f83f3a(longlong param_1,int *param_2,int param_3,char param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((((((*(char *)(param_1 + 0x424) == '\0') && (*(char *)(param_1 + 0x3e4) == param_4)) &&
        (*(int *)(param_1 + 0x3e0) == param_3)) &&
       ((*(char *)(param_1 + 0x3bc) == (char)param_2[1] && (*(int *)(param_1 + 0x3b8) == *param_2)))
       ) && (((char)param_2[1] != '\0' ||
             ((*(double *)(param_2 + 8) == *(double *)(param_1 + 0x3d8) &&
              (!NAN(*(double *)(param_2 + 8)) && !NAN(*(double *)(param_1 + 0x3d8)))))))) &&
     ((*(int *)(param_1 + 1000) == param_5 && (*(int *)(param_1 + 0x3ec) == param_6)))) {
    return;
  }
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_2 + 8);
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[7];
  *(int *)(param_1 + 0x3c8) = param_2[4];
  *(int *)(param_1 + 0x3cc) = iVar5;
  *(int *)(param_1 + 0x3d0) = iVar6;
  *(int *)(param_1 + 0x3d4) = iVar7;
  *(int *)(param_1 + 0x3b8) = iVar1;
  *(int *)(param_1 + 0x3bc) = iVar2;
  *(int *)(param_1 + 0x3c0) = iVar3;
  *(int *)(param_1 + 0x3c4) = iVar4;
  *(int *)(param_1 + 0x3e0) = param_3;
  *(char *)(param_1 + 0x3e4) = param_4;
  *(int *)(param_1 + 1000) = param_5;
  *(int *)(param_1 + 0x3ec) = param_6;
  if (*(char *)(param_1 + 0x3b4) == '\x01') {
    FUN_148f8408e(param_1,*(undefined4 *)(param_1 + 0x3b0),param_5,param_6,param_1 + 0x390);
    if ((*(byte *)(param_1 + 0x3e4) & 1) == 0) goto LAB_148f84048;
    param_6 = *(int *)(param_1 + 0x3ec);
    param_3 = *(int *)(param_1 + 0x3e0);
    param_5 = *(int *)(param_1 + 1000);
  }
  else if (param_4 == '\0') goto LAB_148f84048;
  FUN_148f8408e(param_1,param_3,param_5,param_6,param_1 + 0x3c0);
LAB_148f84048:
  *(undefined1 *)(param_1 + 0x424) = 0;
  if (*(int *)(param_1 + 0xdc) < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_146c94d7e(param_1 + 0xd0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  FUN_1485051e4(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40));
  return;
}



// FUNCTION 148f8408e FUN_148f8408e body=1034 status=ok
// SIG undefined FUN_148f8408e(void)

void FUN_148f8408e(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  double *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  void *_Src;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  uint *local_c8;
  int local_c0;
  undefined4 local_bc;
  double *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  uVar8 = DAT_14c8464e8._4_4_;
  uVar7 = (undefined4)DAT_14c8464e8;
  uVar6 = DAT_14c8464e0._4_4_;
  uVar5 = (undefined4)DAT_14c8464e0;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_5[2] = DAT_14c8464f0;
  *(undefined4 *)param_5 = uVar5;
  *(undefined4 *)((longlong)param_5 + 4) = uVar6;
  *(undefined4 *)(param_5 + 1) = uVar7;
  *(undefined4 *)((longlong)param_5 + 0xc) = uVar8;
  uVar9 = FUN_1482abba8(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48));
  lVar11 = FUN_1482abc36(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48),param_3);
  local_b8 = (double *)0x0;
  uStack_b0 = 0;
  lVar14 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x18) + 8 + (longlong)param_4 * 0x28);
  if (lVar14 != 0) {
    lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + (longlong)param_4 * 0x28);
    lVar13 = 0;
    do {
      lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48) + 0x70);
      lVar12 = (longlong)*(int *)(lVar11 + lVar13) * 0x50;
      local_c8 = (uint *)0x0;
      local_c0 = *(int *)(lVar17 + 0x18 + lVar12);
      lVar16 = (longlong)local_c0;
      _Src = *(void **)(lVar17 + 0x10 + lVar12);
      if (lVar16 == 0) {
        local_bc = 0;
      }
      else {
        FUN_144a06ca8(&local_c8,local_c0,0);
        memcpy(local_c8,_Src,lVar16 << 2);
      }
      uVar15 = uStack_b0;
      if (*local_c8 == uVar9) {
        uVar10 = local_c8[1];
        lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x10);
LAB_148f841c5:
        lVar17 = *(longlong *)(lVar17 + (ulonglong)(uVar10 >> 9) * 8);
        local_d8 = *(double *)(lVar17 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
        puVar1 = (undefined4 *)(lVar17 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
        local_e8 = *puVar1;
        uStack_e4 = puVar1[1];
        uStack_e0 = puVar1[2];
        uStack_dc = puVar1[3];
        lVar17 = (longlong)(int)uStack_b0;
        uVar10 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar10);
        if (uStack_b0._4_4_ < uVar10) {
          FUN_1403e3958(&local_b8,uVar15 & 0xffffffff);
        }
        local_b8[lVar17 * 3 + 2] = local_d8;
        local_b8[lVar17 * 3] = (double)CONCAT44(uStack_e4,local_e8);
        (local_b8 + lVar17 * 3)[1] = (double)CONCAT44(uStack_dc,uStack_e0);
      }
      else if (local_c8[local_c0 + -1] == uVar9) {
        uVar10 = local_c8[(longlong)local_c0 + -2];
        lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x10);
        goto LAB_148f841c5;
      }
      if (local_c8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + 4;
    } while (lVar14 * 4 != lVar13);
  }
  lVar11 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x10) +
            (ulonglong)(uVar9 >> 9) * 8);
  uVar15 = (ulonglong)(uVar9 & 0x1ff);
  dVar20 = *(double *)(lVar11 + 0x10 + uVar15 * 0x18);
  dVar3 = dVar20 - local_b8[2];
  dVar22 = *(double *)(lVar11 + 8 + uVar15 * 0x18);
  dVar18 = dVar22 - local_b8[1];
  dVar2 = *(double *)(lVar11 + uVar15 * 0x18);
  dVar19 = dVar2 - *local_b8;
  dVar21 = SQRT(dVar3 * dVar3 + dVar19 * dVar19 + dVar18 * dVar18);
  dVar4 = 1.0 / dVar21;
  dVar19 = (double)(-(ulonglong)(0.0 < dVar21) & (ulonglong)(dVar19 * dVar4));
  if (0.0 < dVar21) {
    dVar3 = dVar3 * dVar4;
    dVar18 = dVar18 * dVar4;
  }
  else {
    dVar18 = 0.0;
    dVar3 = 0.0;
  }
  *param_5 = dVar19;
  param_5[1] = dVar18;
  param_5[2] = dVar3;
  dVar20 = local_b8[5] - dVar20;
  dVar22 = local_b8[4] - dVar22;
  dVar2 = local_b8[3] - dVar2;
  dVar21 = SQRT(dVar20 * dVar20 + dVar2 * dVar2 + dVar22 * dVar22);
  dVar4 = 1.0 / dVar21;
  if (0.0 < dVar21) {
    dVar20 = dVar20 * dVar4;
    dVar22 = dVar22 * dVar4;
  }
  else {
    dVar20 = 0.0;
    dVar22 = 0.0;
  }
  dVar19 = dVar19 + (double)(-(ulonglong)(0.0 < dVar21) & (ulonglong)(dVar2 * dVar4));
  dVar18 = dVar18 + dVar22;
  dVar3 = dVar3 + dVar20;
  dVar22 = SQRT(dVar3 * dVar3 + dVar19 * dVar19 + dVar18 * dVar18);
  dVar20 = 1.0 / dVar22;
  if (0.0 < dVar22) {
    dVar19 = dVar19 * dVar20;
    dVar18 = dVar18 * dVar20;
  }
  else {
    dVar19 = 0.0;
    dVar18 = 0.0;
  }
  *param_5 = dVar19;
  param_5[1] = dVar18;
  param_5[2] = (double)(-(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar3 * dVar20));
  if (local_b8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f8449a FUN_148f8449a body=913 status=ok
// SIG undefined FUN_148f8449a(void)

undefined1 * FUN_148f8449a(longlong param_1,undefined1 *param_2,double *param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  double dVar9;
  longlong *plVar10;
  double dVar11;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined4 local_128;
  undefined2 local_123;
  undefined1 local_121;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined2 local_e0;
  undefined1 uStack_de;
  undefined5 uStack_dd;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined1 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_c8 = 0.0;
  FUN_14485c47a(&local_c8,0);
  *(double *)(param_2 + 0x38) = local_c8;
  if (*(char *)(param_1 + 0x20) != '\x01') goto LAB_148f8454e;
  puVar1 = (undefined8 *)(param_2 + 0x10);
  if (*(int *)(param_1 + 1000) == 1) {
    local_108 = DAT_14c8464f0;
    local_118 = DAT_14c8464e0;
    uStack_110 = DAT_14c8464e8;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0x3ff0000000000000;
    cVar8 = FUN_148f8482c(param_1 + -0x38,param_3,&local_e0);
    if (cVar8 == '\0') {
      local_120 = 0;
      local_128 = 0xffffffff;
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x58);
      local_c8 = 1.79769313486232e+308;
      local_b8 = 0.0;
      local_a8 = (longlong *)0x0;
      local_78 = 0;
      local_138 = &local_c8;
      cVar8 = (**(code **)(*plVar10 + 0x38))(plVar10,&local_118);
      if (local_b8 != 0.0) {
        plVar10 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar10 = local_98;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      uVar6 = local_120;
      if (cVar8 == '\0') goto LAB_148f8454e;
      local_c8 = 0.0;
      FUN_14485c47a(&local_c8,0);
      *param_2 = 1;
      uVar7 = (undefined4)local_c8;
      *(undefined4 *)(param_2 + 1) = uVar7;
      *(undefined4 *)(param_2 + 4) = local_c8._3_4_;
      *(undefined8 *)(param_2 + 8) = uVar6;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
      param_2[0x28] = 0;
      *(undefined2 *)(param_2 + 0x29) = local_123;
      dVar9 = local_c8;
      uStack_de = local_121;
    }
    else {
      dVar9 = param_3[2];
      dVar2 = param_3[1];
      dVar3 = *param_3;
      dVar4 = param_3[4];
      dVar5 = param_3[3];
      dVar11 = param_3[5];
      local_c8 = 0.0;
      FUN_14485c47a(&local_c8,0);
      *param_2 = 1;
      uVar7 = (undefined4)local_c8;
      *(undefined4 *)(param_2 + 1) = uVar7;
      *(undefined4 *)(param_2 + 4) = local_c8._3_4_;
      *(double *)(param_2 + 8) =
           (local_d0 - dVar9) * dVar11 +
           ((double)CONCAT53(uStack_dd,CONCAT12(uStack_de,local_e0)) - dVar3) * dVar5 +
           (local_d8 - dVar2) * dVar4;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
      param_2[0x28] = 0;
      *(undefined2 *)(param_2 + 0x29) = (undefined2)local_120;
      dVar9 = local_c8;
      uStack_de = local_120._2_1_;
    }
  }
  else {
    if (*(int *)(param_1 + 1000) != 0) goto LAB_148f8454e;
    if (*(int *)(param_1 + 0xb4) < 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      FUN_1447a8aa0(param_1 + 0xa8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    cVar8 = FUN_148f8482c(param_1 + -0x38,param_3,&local_c8,0);
    if (cVar8 == '\0') goto LAB_148f8454e;
    dVar5 = local_b8 - param_3[2];
    dVar9 = param_3[1];
    dVar11 = local_c8 - *param_3;
    dVar2 = param_3[4];
    dVar3 = param_3[3];
    dVar4 = param_3[5];
    local_118 = 0.0;
    FUN_14485c47a(&local_118,0);
    *param_2 = 1;
    uVar7 = (undefined4)local_118;
    *(undefined4 *)(param_2 + 1) = uVar7;
    *(undefined4 *)(param_2 + 4) = local_118._3_4_;
    *(double *)(param_2 + 8) = dVar5 * dVar4 + dVar11 * dVar3 + (local_c0 - dVar9) * dVar2;
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
    *(undefined2 *)(param_2 + 0x29) = local_e0;
    dVar9 = local_118;
  }
  param_2[0x2b] = uStack_de;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(double *)(param_2 + 0x38) = dVar9;
LAB_148f8454e:
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8482c FUN_148f8482c body=1332 status=ok
// SIG undefined FUN_148f8482c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_148f8482c(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  undefined1 auStack_258 [32];
  double *local_238;
  undefined1 *local_230;
  undefined8 local_228;
  undefined1 local_220 [24];
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  undefined1 local_1b0 [240];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  dVar4 = param_2[3];
  dVar5 = param_2[4];
  dVar6 = *(double *)(param_1 + 0x60);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0xa0);
  dVar8 = -dVar6;
  dVar2 = -*(double *)(param_1 + 0x68);
  dVar12 = *(double *)(param_1 + 0x70) * -1.0;
  dVar13 = *(double *)(param_1 + 0x78) * 1.0;
  dVar15 = dVar5 * dVar8 - dVar4 * dVar2;
  dVar18 = param_2[5] * dVar2 - dVar5 * dVar12;
  dVar14 = dVar4 * dVar12 - param_2[5] * dVar8;
  dVar18 = dVar18 + dVar18;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  auVar17 = divpd(_DAT_149934d80,auVar1);
  local_1e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar17._0_8_);
  dStack_1e0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar17._8_8_);
  dVar10 = *param_2 - *(double *)(param_1 + 0x80);
  dVar11 = param_2[1] - *(double *)(param_1 + 0x88);
  local_1d8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0xb0))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0xb0)));
  dVar9 = param_2[2] - *(double *)(param_1 + 0x90);
  dVar16 = dVar11 * dVar8 - dVar2 * dVar10;
  dVar3 = dVar9 * dVar2 - dVar12 * dVar11;
  dVar19 = dVar10 * dVar12 - dVar9 * dVar8;
  dVar3 = dVar3 + dVar3;
  dVar19 = dVar19 + dVar19;
  dVar16 = dVar16 + dVar16;
  dStack_1d0 = ((dVar15 * dVar2 - dVar14 * dVar12) + dVar13 * dVar18 + dVar4) * local_1e8;
  dStack_1c8 = (dVar6 * dVar15 + dVar12 * dVar18 + dVar13 * dVar14 + dVar5) * dStack_1e0;
  local_1e8 = ((dVar16 * dVar2 - dVar19 * dVar12) + dVar13 * dVar3 + dVar10) * local_1e8;
  dStack_1e0 = (dVar6 * dVar16 + dVar12 * dVar3 + dVar13 * dVar19 + dVar11) * dStack_1e0;
  dStack_1c0 = (dVar15 * dVar13 + param_2[5] + (dVar14 * dVar8 - dVar18 * dVar2)) * local_1d8;
  local_1d8 = (dVar16 * dVar13 + dVar9 + (dVar19 * dVar8 - dVar3 * dVar2)) * local_1d8;
  dVar8 = dStack_1c0 * dStack_1c0 + dStack_1d0 * dStack_1d0 + dStack_1c8 * dStack_1c8;
  if (9.99999993922529e-09 < dVar8) {
    dVar8 = 1.0 / SQRT(dVar8);
    dStack_1d0 = dStack_1d0 * dVar8;
    dStack_1c8 = dStack_1c8 * dVar8;
    dStack_1c0 = dStack_1c0 * dVar8;
  }
  if (param_4 != (double *)0x0) {
    param_4[4] = dStack_1c8;
    param_4[5] = dStack_1c0;
    param_4[2] = local_1d8;
    param_4[3] = dStack_1d0;
    *param_4 = local_1e8;
    param_4[1] = dStack_1e0;
  }
  FUN_1458d302c(local_1b0);
  *(undefined1 *)(param_1 + 899) =
       *(undefined1 *)
        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x78) + 0xad);
  local_230 = local_220;
  local_238 = &local_208;
  local_228 = 0;
  uVar7 = FUN_148524926(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x380,&local_1e8,local_1b0);
  if ((char)uVar7 != '\0') {
    local_208 = local_208 * *(double *)(param_1 + 0xa0);
    dStack_200 = dStack_200 * *(double *)(param_1 + 0xa8);
    local_1f8 = local_1f8 * *(double *)(param_1 + 0xb0);
    dVar4 = *(double *)(param_1 + 0x60);
    dVar5 = *(double *)(param_1 + 0x68);
    dVar6 = *(double *)(param_1 + 0x70);
    dVar2 = *(double *)(param_1 + 0x78);
    dVar8 = *(double *)(param_1 + 0x78);
    dVar19 = dStack_200 * dVar4 - local_208 * dVar5;
    dVar15 = local_1f8 * dVar5 - dStack_200 * dVar6;
    dVar9 = local_208 * dVar6 - dVar4 * local_1f8;
    dVar15 = dVar15 + dVar15;
    dVar9 = dVar9 + dVar9;
    dVar19 = dVar19 + dVar19;
    dVar3 = *(double *)(param_1 + 0x88);
    dVar16 = *(double *)(param_1 + 0x90);
    *param_3 = (dVar19 * dVar5 - dVar9 * dVar6) + dVar2 * dVar15 + local_208 +
               *(double *)(param_1 + 0x80);
    param_3[1] = (dVar6 * dVar15 - dVar4 * dVar19) + dVar8 * dVar9 + dStack_200 + dVar3;
    param_3[2] = dVar19 * dVar2 + local_1f8 + (dVar9 * dVar4 - dVar15 * dVar5) + dVar16;
  }
  FUN_1456c3cc8(local_1b0);
  if ((local_c0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f84d62 FUN_148f84d62 body=1198 status=ok
// SIG undefined FUN_148f84d62(void)

ulonglong FUN_148f84d62(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 unaff_RBP;
  ulonglong uVar16;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined8 *local_180;
  double *local_178;
  undefined4 local_164;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined1 local_105;
  undefined4 local_104;
  int local_100;
  char local_fc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  undefined1 local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar1 = param_1 + -0x38;
    if (*(int *)(param_1 + 1000) == 1) {
      if (0 < *(int *)(param_1 + 0xb0)) {
        plVar2 = (longlong *)(param_1 + 0xa8);
        FUN_14051b394(plVar2,1,1);
        local_178 = &local_158;
        local_148 = DAT_14c8464f0;
        local_158 = DAT_14c8464e0;
        dStack_150 = DAT_14c8464e8;
        local_140 = 0.0;
        dStack_138 = 0.0;
        local_130 = 1.0;
        local_180 = (undefined8 *)&local_120;
        local_188 = (undefined8 *)&local_105;
        cVar12 = FUN_148f832ec(lVar1,param_2,&local_100,&local_104);
        if (cVar12 == '\0') {
          if (*(char *)(param_1 + 0x3ec) == '\0') {
            FUN_143b844a2(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40));
            FUN_14851bbe8(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40) + 0x58),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30),1,0xf);
            *(undefined1 *)(param_1 + 0x3ec) = 1;
          }
          plVar2 = (longlong *)(param_1 + 0x98);
          *(undefined4 *)(param_1 + 0xa0) = 0;
          if (*(int *)(param_1 + 0xa4) < 0) {
            FUN_146c94d7e(plVar2,0);
          }
          local_160 = 0.0;
          local_164 = 0xffffffff;
          plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x58);
          local_188 = &local_d8;
          local_d8 = 0x7fefffffffffffff;
          local_c8 = 0;
          local_b8 = (longlong *)0x0;
          local_88 = 0;
          uVar13 = (**(code **)(*plVar14 + 0x38))(plVar14,&local_158);
          uVar16 = (ulonglong)uVar13;
          if (local_c8 != 0) {
            plVar14 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar14 = local_a8;
            }
            (**(code **)(*plVar14 + 0x10))();
          }
          if ((char)uVar13 != '\0') {
            dVar6 = local_130 * local_160 + local_148;
            dVar8 = dStack_138 * local_160 + dStack_150;
            dVar7 = local_160 * local_140 + local_158;
            puVar3 = *(undefined4 **)(param_1 + 0xa8);
            iVar5 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
              FUN_146c94cea(plVar2,iVar5);
            }
            lVar1 = *plVar2;
            lVar15 = (longlong)iVar5 * 0x30;
            *(undefined8 *)(lVar1 + 0x10 + lVar15) = *(undefined8 *)(puVar3 + 4);
            uVar9 = puVar3[1];
            uVar10 = puVar3[2];
            uVar11 = puVar3[3];
            puVar4 = (undefined4 *)(lVar1 + lVar15);
            *puVar4 = *puVar3;
            puVar4[1] = uVar9;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            *(double *)(lVar1 + 0x18 + lVar15) = dVar7;
            *(double *)(lVar1 + 0x20 + lVar15) = dVar8;
            *(double *)(lVar1 + 0x28 + lVar15) = dVar6;
          }
          goto LAB_148f84dc4;
        }
        if ((local_fc == *(char *)(param_1 + 0x354)) && (local_100 == *(int *)(param_1 + 0x350))) {
LAB_148f84f74:
          if (*(int *)(param_1 + 0xa4) < 0) {
            *(undefined4 *)(param_1 + 0xa0) = 0;
            FUN_146c94d7e(param_1 + 0x98,0);
          }
          else {
            *(undefined4 *)(param_1 + 0xa0) = 0;
          }
        }
        else {
          local_178 = &local_160;
          local_180 = &local_d8;
          local_188 = (undefined8 *)CONCAT71(local_188._1_7_,local_105);
          cVar12 = FUN_148f85211(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x48),
                                 *(undefined4 *)(param_1 + 0x378),*(undefined1 *)(param_1 + 0x37c),
                                 local_104);
          if (cVar12 == '\0') goto LAB_148f84f74;
          local_180 = (undefined8 *)CONCAT44(local_180._4_4_,local_160._0_4_);
          local_188 = (undefined8 *)CONCAT44(local_188._4_4_,(undefined4)local_d8);
          FUN_148f83f3a(lVar1,&local_100,local_104,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_105) & 0xffffffff);
        }
        iVar5 = *(int *)(param_1 + 0xb0);
        *(uint *)(param_1 + 0xb0) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0xb4) < iVar5 + 1U) {
          FUN_1403e3958(plVar2,iVar5);
        }
        lVar1 = *plVar2;
        *(undefined8 *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18) = local_110;
        puVar3 = (undefined4 *)(lVar1 + (longlong)iVar5 * 0x18);
        *puVar3 = local_120;
        puVar3[1] = uStack_11c;
        puVar3[2] = uStack_118;
        puVar3[3] = uStack_114;
        uVar16 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
        goto LAB_148f84dc4;
      }
      *(undefined4 *)(param_1 + 1000) = 0;
      FUN_148f82ec0(lVar1);
    }
    else if (*(int *)(param_1 + 1000) == 0) {
      plVar2 = (longlong *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0xb0) = 0;
      if (*(int *)(param_1 + 0xb4) < 0) {
        FUN_1447a8aa0(plVar2,0);
      }
      local_188 = (undefined8 *)(param_1 + 0x37c);
      local_180 = &local_d8;
      local_178 = (double *)0x0;
      uVar13 = FUN_148f832ec(lVar1,param_2,param_1 + 0x350,param_1 + 0x378);
      uVar16 = (ulonglong)uVar13;
      if ((char)uVar13 != '\0') {
        iVar5 = *(int *)(param_1 + 0xb0);
        *(uint *)(param_1 + 0xb0) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0xb4) < iVar5 + 1U) {
          FUN_1403e3958(plVar2,iVar5);
        }
        lVar1 = *plVar2;
        *(longlong *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18) = local_c8;
        puVar3 = (undefined4 *)(lVar1 + (longlong)iVar5 * 0x18);
        *puVar3 = (undefined4)local_d8;
        puVar3[1] = local_d8._4_4_;
        puVar3[2] = uStack_d0;
        puVar3[3] = uStack_cc;
      }
      goto LAB_148f84dc4;
    }
  }
  uVar16 = 0;
LAB_148f84dc4:
  if ((local_70 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f85211 FUN_148f85211 body=962 status=ok
// SIG undefined FUN_148f85211(void)

bool FUN_148f85211(longlong param_1,int param_2,char param_3,int param_4,char param_5,
                  undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_6 = 0xffffffff;
  *param_7 = 0xffffffff;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  lVar4 = (longlong)param_2;
  local_60 = param_1;
  if (param_3 == '\0') {
    puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + lVar4 * 0x50);
    lVar4 = FUN_1482abc36(0,*(undefined4 *)(*(longlong *)(param_1 + 0x70) + lVar4 * 0x50));
    if (0 < (longlong)*(int *)(lVar4 + 0x20)) {
      lVar5 = 0;
LAB_148f85446:
      lVar6 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar5 * 0x28);
      if (lVar6 != 0) {
        lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar5 * 0x28);
        lVar6 = lVar6 * 4;
        lVar10 = 0;
        do {
          iVar2 = *(int *)(lVar8 + lVar10);
          if (((param_5 == '\0') && (iVar2 == param_4)) ||
             ((param_5 != '\0' &&
              ((lVar9 = (longlong)iVar2 * 0x50,
               *(int *)(*(longlong *)(local_60 + 0x70) + 0x48 + lVar9) == param_4 ||
               (*(int *)(*(longlong *)(local_60 + 0x70) + 0x4c + lVar9) == param_4)))))) {
            lVar10 = 0;
            goto LAB_148f854a1;
          }
          lVar10 = lVar10 + 4;
        } while (lVar6 != lVar10);
      }
      goto LAB_148f85494;
    }
LAB_148f854da:
    if (puVar12[1] != -1) {
      lVar4 = FUN_1482abc36(local_60);
      uVar7 = uStack_50;
      if (0 < (longlong)*(int *)(lVar4 + 0x20)) {
        lVar5 = 0;
LAB_148f8550d:
        lVar6 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar5 * 0x28);
        if (lVar6 != 0) {
          lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar5 * 0x28);
          lVar6 = lVar6 * 4;
          lVar10 = 0;
          do {
            iVar2 = *(int *)(lVar8 + lVar10);
            if (((param_5 == '\0') && (iVar2 == param_4)) ||
               ((param_5 != '\0' &&
                ((lVar9 = (longlong)iVar2 * 0x50,
                 *(int *)(*(longlong *)(local_60 + 0x70) + 0x48 + lVar9) == param_4 ||
                 (*(int *)(*(longlong *)(local_60 + 0x70) + 0x4c + lVar9) == param_4)))))) {
              lVar10 = 0;
              goto LAB_148f8556b;
            }
            lVar10 = lVar10 + 4;
          } while (lVar6 != lVar10);
        }
        goto LAB_148f8555b;
      }
    }
  }
  else {
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x10 + lVar4 * 0x18);
    if (lVar5 != 0) {
      puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x50) + 8 + lVar4 * 0x18);
      puVar13 = puVar12 + lVar5;
      do {
        lVar4 = local_60;
        uVar1 = *puVar12;
        lVar5 = FUN_1482abc36(local_60,uVar1);
        uVar7 = uStack_50;
        if (0 < (longlong)*(int *)(lVar5 + 0x20)) {
          lVar4 = *(longlong *)(lVar4 + 0x70);
          lVar6 = 0;
LAB_148f852c0:
          lVar8 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x18) + 8 + lVar6 * 0x28);
          if (lVar8 != 0) {
            lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + lVar6 * 0x28);
            lVar8 = lVar8 * 4;
            lVar9 = 0;
            do {
              iVar2 = *(int *)(lVar10 + lVar9);
              if (((param_5 == '\0') && (iVar2 == param_4)) ||
                 ((param_5 != '\0' &&
                  ((lVar11 = (longlong)iVar2 * 0x50, *(int *)(lVar4 + 0x48 + lVar11) == param_4 ||
                   (*(int *)(lVar4 + 0x4c + lVar11) == param_4)))))) {
                lVar9 = 0;
                goto LAB_148f8531b;
              }
              lVar9 = lVar9 + 4;
            } while (lVar8 != lVar9);
          }
          goto LAB_148f8530e;
        }
LAB_148f8536e:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar13);
    }
  }
LAB_148f8537b:
  puVar12 = local_58;
  lVar4 = local_60;
  uVar7 = uStack_50 & 0xffffffff;
  if (uVar7 != 0) {
    if (1 < (int)uStack_50) {
      lVar5 = 0;
      do {
        lVar6 = FUN_1482abc36(lVar4,*(undefined4 *)((longlong)puVar12 + lVar5));
        if (*(int *)(lVar6 + 0x20) == 1) {
          *param_6 = *(undefined4 *)((longlong)puVar12 + lVar5);
          *param_7 = 0;
          goto LAB_148f853d9;
        }
        lVar5 = lVar5 + 8;
      } while (uVar7 * 8 - lVar5 != 0);
    }
    *param_6 = *local_58;
    *param_7 = local_58[1];
  }
LAB_148f853d9:
  if (local_58 != (undefined4 *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 != 0;
  while (lVar9 = lVar9 + 4, lVar8 != lVar9) {
LAB_148f8531b:
    lVar11 = (longlong)*(int *)(lVar10 + lVar9) * 0x50;
    if ((*(int *)(lVar4 + 0x48 + lVar11) == param_2) || (*(int *)(lVar4 + 0x4c + lVar11) == param_2)
       ) {
      lVar4 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_1406b704c(&local_58,uVar7 & 0xffffffff);
      }
      local_58[lVar4 * 2] = uVar1;
      local_58[lVar4 * 2 + 1] = (int)lVar6;
      goto LAB_148f8536e;
    }
  }
LAB_148f8530e:
  lVar6 = lVar6 + 1;
  if (lVar6 == *(int *)(lVar5 + 0x20)) goto LAB_148f8536e;
  goto LAB_148f852c0;
  while (lVar10 = lVar10 + 4, lVar6 != lVar10) {
LAB_148f854a1:
    if (*(int *)(lVar8 + lVar10) == param_2) {
      uStack_50 = CONCAT44(uStack_50._4_4_,1);
      FUN_1406b704c(&local_58,0);
      *local_58 = *puVar12;
      local_58[1] = (int)lVar5;
      goto LAB_148f854da;
    }
  }
LAB_148f85494:
  lVar5 = lVar5 + 1;
  if (lVar5 == *(int *)(lVar4 + 0x20)) goto LAB_148f854da;
  goto LAB_148f85446;
  while (lVar10 = lVar10 + 4, lVar6 != lVar10) {
LAB_148f8556b:
    if (*(int *)(lVar8 + lVar10) == param_2) {
      lVar4 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_1406b704c(&local_58,uVar7 & 0xffffffff);
      }
      local_58[lVar4 * 2] = puVar12[1];
      local_58[lVar4 * 2 + 1] = (int)lVar5;
      goto LAB_148f8537b;
    }
  }
LAB_148f8555b:
  lVar5 = lVar5 + 1;
  if (lVar5 == *(int *)(lVar4 + 0x20)) goto LAB_148f8537b;
  goto LAB_148f8550d;
}



// FUNCTION 148f855d4 FUN_148f855d4 body=180 status=ok
// SIG undefined FUN_148f855d4(void)

void FUN_148f855d4(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    iVar1 = *(int *)(param_1 + 1000);
    if (iVar1 == 2) {
LAB_148f855fc:
      FUN_148f82ec0(param_1 + -0x38);
      return;
    }
    if (iVar1 == 1) {
      FUN_143b844a2(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40));
      FUN_14851bbe8(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40) + 0x58),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30),1,0xf);
      *(undefined1 *)(param_1 + 0x3ec) = 1;
      FUN_14051b394(param_1 + 0xa8,1,1);
      if (*(int *)(param_1 + 0xa4) < 0) {
        *(undefined4 *)(param_1 + 0xa0) = 0;
        FUN_146c94d7e(param_1 + 0x98,0);
        return;
      }
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    else if (iVar1 == 0) goto LAB_148f855fc;
  }
  return;
}



// FUNCTION 148f85688 FUN_148f85688 body=364 status=ok
// SIG undefined FUN_148f85688(void)

undefined1 * FUN_148f85688(longlong param_1,undefined1 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  char cVar7;
  double dVar8;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  undefined2 local_4b;
  undefined1 local_49;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_68 = 0.0;
  FUN_14485c47a(&local_68,0);
  *(double *)(param_2 + 0x38) = local_68;
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(uint *)(param_1 + 0x3e0) < 2)) {
    cVar7 = FUN_148f8482c(param_1 + -0x40,param_3,&local_68,0);
    if (cVar7 != '\0') {
      dVar1 = param_3[2];
      dVar2 = param_3[1];
      dVar8 = local_68 - *param_3;
      dVar3 = param_3[4];
      dVar4 = param_3[3];
      dVar5 = param_3[5];
      local_48 = 0;
      FUN_14485c47a(&local_48,0);
      *param_2 = 1;
      uVar6 = (undefined4)local_48;
      *(undefined4 *)(param_2 + 1) = uVar6;
      *(undefined4 *)(param_2 + 4) = local_48._3_4_;
      *(double *)(param_2 + 8) =
           (local_58 - dVar1) * dVar5 + dVar8 * dVar4 + (local_60 - dVar2) * dVar3;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
      param_2[0x28] = 0;
      *(undefined2 *)(param_2 + 0x29) = local_4b;
      param_2[0x2b] = local_49;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = local_48;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f857f6 FUN_148f857f6 body=750 status=ok
// SIG undefined FUN_148f857f6(void)

void FUN_148f857f6(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 unaff_RBP;
  int iVar15;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  int *local_b0;
  undefined4 *local_a8;
  undefined1 local_95;
  undefined4 local_94;
  int local_90;
  uint local_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  int local_60 [6];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar14 = param_1 + -0x40;
  if (*(int *)(param_1 + 0x3e0) != 1) {
    if (*(int *)(param_1 + 0x3e0) == 0) {
      local_b8 = (undefined1 *)(param_1 + 0x374);
      local_b0 = &local_88;
      local_a8 = (undefined4 *)0x0;
      cVar10 = FUN_148f832ec(lVar14,param_2,param_1 + 0x348,param_1 + 0x370);
      if (cVar10 != '\0') {
        uVar11 = *(uint *)(param_1 + 0xac);
        iVar15 = 0;
        if ((int)uVar11 < 0) {
          *(undefined4 *)(param_1 + 0xa8) = 0;
          FUN_1447a8aa0(param_1 + 0xa0,0);
          iVar15 = *(int *)(param_1 + 0xa8);
          uVar11 = *(uint *)(param_1 + 0xac);
        }
        *(uint *)(param_1 + 0xa8) = iVar15 + 1U;
        if (uVar11 < iVar15 + 1U) {
          FUN_1403e3958(param_1 + 0xa0,iVar15);
        }
        lVar3 = *(longlong *)(param_1 + 0xa0);
        *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar15 * 0x18) = local_78;
        piVar1 = (int *)(lVar3 + (longlong)iVar15 * 0x18);
        *piVar1 = local_88;
        piVar1[1] = iStack_84;
        piVar1[2] = iStack_80;
        piVar1[3] = iStack_7c;
        *(undefined4 *)(param_1 + 0x3e0) = 1;
        lVar3 = param_1 + -0x18;
        plVar12 = (longlong *)FUN_14479d2ce(lVar3);
        lVar13 = (**(code **)(*plVar12 + 0x2c8))(plVar12);
        (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x10))(lVar13 + 0x28,&DAT_14cbf3e40);
        plVar12 = (longlong *)FUN_14479d2ce(lVar3);
        lVar13 = (**(code **)(*plVar12 + 0x2c8))(plVar12);
        local_48 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        uVar2 = *(undefined4 *)(param_1 + 0x408);
        *local_48 = &PTR_LAB_14ba31290;
        *(undefined4 *)(local_48 + 1) = uVar2;
        *(undefined1 *)((longlong)local_48 + 0xc) = 0;
        (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x20))
                  (lVar13 + 0x28,lVar14,&local_48,&DAT_14cbf3e40);
        plVar12 = (longlong *)FUN_14479d2ce(lVar3);
        lVar14 = (**(code **)(*plVar12 + 0x2c8))(plVar12);
        (**(code **)(*(longlong *)(lVar14 + 0x28) + 0x18))(lVar14 + 0x28);
      }
    }
    goto LAB_148f85836;
  }
  local_b0 = local_60;
  local_b8 = &local_95;
  local_a8 = (undefined4 *)0x0;
  cVar10 = FUN_148f832ec(lVar14,param_2,&local_88,&local_8c);
  if (cVar10 != '\0') {
    if (((char)iStack_84 != *(char *)(param_1 + 0x34c)) || (local_88 != *(int *)(param_1 + 0x348)))
    {
      local_a8 = &local_94;
      local_b0 = &local_90;
      local_b8 = (undefined1 *)CONCAT71(local_b8._1_7_,local_95);
      cVar10 = FUN_148f85211(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x48),
                             *(undefined4 *)(param_1 + 0x370),*(undefined1 *)(param_1 + 0x374),
                             local_8c);
      if (cVar10 != '\0') {
        local_b0 = (int *)CONCAT44(local_b0._4_4_,local_94);
        local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,local_90);
        FUN_148f83f3a(lVar14,&local_88,local_8c,
                      CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_95) & 0xffffffff);
        *(undefined4 *)(param_1 + 0x3e0) = 2;
        goto LAB_148f859fb;
      }
    }
    FUN_143b844a2(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40));
    FUN_14851bbe8(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x40) + 0x58),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x30),1,0xf);
    *(undefined1 *)(param_1 + 0x3e4) = 1;
  }
LAB_148f859fb:
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = *(undefined8 *)(param_2 + 4);
  uVar8 = *(undefined8 *)(param_2 + 6);
  uVar9 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x3d8) = uVar9;
  *(undefined8 *)(param_1 + 0x3c0) = uVar7;
  *(undefined8 *)(param_1 + 0x3c8) = uVar8;
  *(undefined4 *)(param_1 + 0x3b0) = uVar2;
  *(undefined4 *)(param_1 + 0x3b4) = uVar4;
  *(undefined4 *)(param_1 + 0x3b8) = uVar5;
  *(undefined4 *)(param_1 + 0x3bc) = uVar6;
LAB_148f85836:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f85ae6 FUN_148f85ae6 body=80 status=ok
// SIG undefined FUN_148f85ae6(void)

void FUN_148f85ae6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459f4f8e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f85b19;
  }
  param_2 = 0;
LAB_148f85b19:
  *(undefined4 *)(param_2 + 0x420) = 0;
  FUN_148f82ec0(param_2);
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 148f85b56 FUN_148f85b56 body=745 status=ok
// SIG undefined FUN_148f85b56(void)

undefined8 * FUN_148f85b56(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  void *_Dst;
  undefined8 *puVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  _Dst = (void *)FUN_14001cc68(0x1a0);
  memset(_Dst,0,0x1a0);
  FUN_148f93024(_Dst);
  uVar6 = *(undefined8 *)(param_1 + 0x370);
  lVar7 = *(longlong *)(param_1 + 0x378);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)((longlong)_Dst + 0x90);
  *(undefined8 *)((longlong)_Dst + 0x88) = uVar6;
  *(longlong *)((longlong)_Dst + 0x90) = lVar7;
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
  uVar6 = *(undefined8 *)(param_1 + 0x380);
  lVar7 = *(longlong *)(param_1 + 0x388);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)((longlong)_Dst + 0xa0);
  *(undefined8 *)((longlong)_Dst + 0x98) = uVar6;
  *(longlong *)((longlong)_Dst + 0xa0) = lVar7;
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
  local_a0 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = *(undefined8 *)(param_1 + 0x38);
  local_90 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = *(undefined8 *)(param_1 + 0x48);
  local_80 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = *(undefined8 *)(param_1 + 0x58);
  local_70 = *(undefined8 *)(param_1 + 0x60);
  local_68 = *(undefined4 *)(param_1 + 0x70);
  uStack_64 = *(undefined4 *)(param_1 + 0x74);
  uStack_60 = *(undefined4 *)(param_1 + 0x78);
  uStack_5c = *(undefined4 *)(param_1 + 0x7c);
  local_58 = *(undefined8 *)(param_1 + 0x80);
  FUN_148465f32(_Dst);
  lVar7 = *(longlong *)(param_1 + 0x18);
  *(uint *)((longlong)_Dst + 0xa8) = (uint)(*(int *)(lVar7 + 0xac) == 1);
  *(undefined8 *)((longlong)_Dst + 0xb0) = *(undefined8 *)(lVar7 + 0xd0);
  iVar4 = *(int *)(param_1 + 0x390);
  if (-1 < (longlong)iVar4) {
    *(int *)((longlong)_Dst + 0xb8) = iVar4;
    *(undefined4 *)((longlong)_Dst + 0xd4) =
         *(undefined4 *)
          ((longlong)iVar4 * 0x50 + *(longlong *)(*(longlong *)((longlong)_Dst + 0x98) + 0x70) +
           0x48 + (ulonglong)*(byte *)(lVar7 + 0xc9) * 4);
    iVar4 = *(int *)(lVar7 + 0xa8);
    if (iVar4 == 0) {
      iVar4 = *(int *)(lVar7 + 0xb0);
      if (0 < iVar4) {
        iVar10 = 1;
        do {
          iVar5 = *(int *)((longlong)_Dst + 200);
          *(uint *)((longlong)_Dst + 200) = iVar5 + 1U;
          if (*(uint *)((longlong)_Dst + 0xcc) < iVar5 + 1U) {
            FUN_144941252((longlong *)((longlong)_Dst + 0xc0),iVar5);
          }
          *(double *)(*(longlong *)((longlong)_Dst + 0xc0) + (longlong)iVar5 * 8) =
               (double)iVar10 / (double)(iVar4 + 1);
          bVar11 = iVar10 != iVar4;
          iVar10 = iVar10 + 1;
        } while (bVar11);
      }
    }
    else {
      cVar3 = *(char *)(lVar7 + 200);
      iVar10 = *(int *)((longlong)_Dst + 200);
      *(uint *)((longlong)_Dst + 200) = iVar10 + 1U;
      if (cVar3 == '\x01') {
        puVar9 = (undefined8 *)(param_1 + 0x398);
      }
      else if (iVar4 == 1) {
        puVar9 = (undefined8 *)(lVar7 + 0xb8);
      }
      else {
        puVar9 = (undefined8 *)(lVar7 + 0xc0);
      }
      if (*(uint *)((longlong)_Dst + 0xcc) < iVar10 + 1U) {
        FUN_144941252((longlong *)((longlong)_Dst + 0xc0),iVar10);
      }
      *(undefined8 *)(*(longlong *)((longlong)_Dst + 0xc0) + (longlong)iVar10 * 8) = *puVar9;
    }
    *(bool *)((longlong)_Dst + 0xd0) = *(uint *)(*(longlong *)(param_1 + 0x18) + 0xa8) < 2;
  }
  *param_2 = _Dst;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148f85e40 FUN_148f85e40 body=795 status=ok
// SIG undefined FUN_148f85e40(void)

void FUN_148f85e40(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484445fc();
  plVar5 = (longlong *)FUN_148f8615c(param_1);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
  param_1[9] = (longlong)plVar5;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  plVar9 = param_1 + 5;
  uVar6 = FUN_14479d2ce(plVar9);
  (**(code **)(*plVar5 + 0x2a8))(plVar5,uVar6,&local_40);
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,param_1[9]);
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[9],0);
  local_40 = (undefined8 *)&LAB_148f862ce;
  local_38 = 0;
  FUN_148f861f2(param_1[9] + 0x90,local_48,param_1);
  param_1[0x2c] = 0x3f80000000000000;
  param_1[0x2d] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x2e) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x52) = 0x40400000;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined2 *)(param_1 + 0x72) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x392) = 0;
  uVar6 = FUN_1409ffe1d();
  plVar5 = (longlong *)FUN_14843c80f(uVar6);
  (**(code **)(*plVar5 + 0x358))(plVar5,param_1 + 8);
  plVar7 = (longlong *)FUN_14479d2ce(plVar9);
  (**(code **)(*plVar7 + 0x2e8))(plVar7,plVar5,param_1);
  uVar6 = FUN_1409ffe1d();
  plVar5 = (longlong *)FUN_1484101e0(uVar6);
  (**(code **)(*plVar5 + 0x300))(plVar5,param_1 + 7);
  plVar7 = (longlong *)FUN_14479d2ce(plVar9);
  (**(code **)(*plVar7 + 0x2e8))(plVar7,plVar5,param_1);
  plVar5 = (longlong *)FUN_14479d2ce(plVar9);
  uVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  uVar6 = FUN_148451390(uVar6);
  lVar8 = FUN_148f740cc(uVar6);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar8);
  }
  param_1[10] = lVar8;
  lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + 0x80);
  plVar5 = *(longlong **)(*(longlong *)(lVar8 + 0x70) + 0x88);
  if (plVar5 == (longlong *)0x0) {
    param_1[0x18] = lVar3;
    plVar9 = (longlong *)param_1[0x19];
    if (plVar9 == (longlong *)0x0) goto LAB_148f860b5;
    param_1[0x19] = 0;
LAB_148f8607f:
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_148f860b5;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar9;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[0x18] = lVar3;
    plVar9 = (longlong *)param_1[0x19];
    if (plVar5 != plVar9) {
      param_1[0x19] = (longlong)plVar5;
      if (plVar9 == (longlong *)0x0) goto LAB_148f860b5;
      goto LAB_148f8607f;
    }
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_148f860b5;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_148f860b5:
  lVar8 = param_1[10];
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar4 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e06450;
  uVar6 = FUN_144a3f946();
  puVar4[2] = uVar6;
  *puVar4 = &PTR_FUN_14ba313b0;
  puVar4[3] = 0;
  FUN_14485c47a(puVar4 + 3,param_1);
  puVar4[4] = param_1;
  FUN_140c6314c(lVar8 + 0x100,local_48,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8615c FUN_148f8615c body=148 status=ok
// SIG undefined FUN_148f8615c(void)

undefined8 FUN_148f8615c(undefined8 param_1)

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
  uVar1 = FUN_1459f507a();
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



// FUNCTION 148f861f2 FUN_148f861f2 body=218 status=ok
// SIG undefined FUN_148f861f2(void)

undefined8
FUN_148f861f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aedba20;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14ba31340;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14844f9a0(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f862dc FUN_148f862dc body=568 status=ok
// SIG undefined FUN_148f862dc(void)

void FUN_148f862dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30);
  plVar4 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149fab260;
  FUN_146bff712(plVar4 + 2,uVar3);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3a0) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x3a8);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3a8) = 0;
LAB_148f86352:
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
      if (plVar4 != (longlong *)0x0) goto LAB_148f863b8;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x3a0) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x3a8);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x3a8) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148f86352;
    }
LAB_148f863b8:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48);
  plVar5 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14aee5500;
  plVar4 = plVar5 + 2;
  FUN_148f92d0a(plVar4,uVar3);
  if (plVar5 == (longlong *)0x0) {
    FUN_1482ab8e4(0x10,*(undefined8 *)(param_1 + 0x3a0));
    *(undefined8 *)(param_1 + 0x3b0) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x3b8);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x3b8) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
    FUN_1482ab8e4(plVar4,*(undefined8 *)(param_1 + 0x3a0));
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x3b0) = plVar4;
    plVar4 = *(longlong **)(param_1 + 0x3b8);
    if (plVar5 == plVar4) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      goto LAB_148f8648e;
    }
    *(longlong **)(param_1 + 0x3b8) = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_148f8648e;
  }
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
  if (plVar5 == (longlong *)0x0) {
    return;
  }
LAB_148f8648e:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 148f86514 FUN_148f86514 body=250 status=ok
// SIG undefined FUN_148f86514(void)

void FUN_148f86514(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[0xb] == '\x01') {
    (**(code **)(*param_1 + 0x300))(param_1);
  }
  plVar3 = (longlong *)param_1[9];
  FUN_140056680(local_30,&DAT_149dfb77a);
  uVar4 = FUN_14479d2ce(param_1 + 5);
  (**(code **)(*plVar3 + 0x2a0))(plVar3,uVar4,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1448a8284(param_1[9] + 0x90);
  param_1[0x18] = 0;
  plVar3 = (longlong *)param_1[0x19];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x19] = 0;
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
  param_1[9] = 0;
  FUN_140457ffc(param_1[10] + 0x100,param_1);
  param_1[10] = 0;
  FUN_148444606(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f86610 FUN_148f86610 body=777 status=ok
// SIG undefined FUN_148f86610(void)

undefined8 FUN_148f86610(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t **ppwVar6;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined1 local_50 [8];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 5);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c8))(plVar3);
  local_b8 = L"InsertEdgeLoopActivityDescription";
  local_b0 = 0x21;
  FUN_1446e940c(local_44,&local_b8);
  local_b8 = L"UPolyEditInsertEdgeLoopActivity";
  local_b0 = 0x1f;
  FUN_1446e940c(local_48,&local_b8);
  FUN_140208bae(&local_b8,local_48,local_44,
                L"Click an edge to insert an edge loop passing across that edge. Edge loops follow a sequence of quad-like polygroups."
               );
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_b8,2);
  if (local_b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_b8 + 0x10))();
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[9],1);
  lVar4 = param_1[10];
  lVar1 = *(longlong *)(lVar4 + 0x70);
  if (((*(int *)(lVar1 + 1000) != *(int *)(lVar1 + 0x414)) ||
      (*(int *)(lVar1 + 0x438) != *(int *)(lVar1 + 0x464))) ||
     (*(int *)(lVar1 + 0x398) != *(int *)(lVar1 + 0x3c4))) {
    FUN_148531782();
    FUN_14853173e(*(undefined8 *)(param_1[10] + 0x70));
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 5);
    lVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
    local_b8 = L"ClearSelection";
    local_b0 = 0xe;
    FUN_1446e940c(local_44,&local_b8);
    local_b8 = L"UPolyEditInsertEdgeLoopActivity";
    local_b0 = 0x1f;
    FUN_1446e940c(local_48,&local_b8);
    FUN_140208bae(&local_b8,local_48,local_44,L"Clear Selection");
    FUN_1485323bc(*(undefined8 *)(param_1[10] + 0x70),local_50);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))
              (lVar4 + 0x28,*(undefined8 *)(param_1[10] + 0x70),local_50,&local_b8);
    if (local_b8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_b8 + 0x10))();
    }
    lVar4 = param_1[10];
  }
  FUN_14851b8ac(*(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x58),&local_b8);
  ppwVar6 = &local_b8;
  plVar3 = param_1 + 0xc;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar3 = (longlong)*ppwVar6;
    ppwVar6 = ppwVar6 + 1;
    plVar3 = plVar3 + 1;
  }
  FUN_148f862dc(param_1);
  FUN_148f8691a(param_1);
  *(undefined2 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb) = 1;
  lVar4 = param_1[10];
  local_b8 = L"BeginInsertEdgeLoopActivity";
  local_b0 = 0x1b;
  FUN_1446e940c(local_44,&local_b8);
  local_b8 = L"UPolyEditInsertEdgeLoopActivity";
  local_b0 = 0x1f;
  FUN_1446e940c(local_48,&local_b8);
  FUN_140208bae(&local_b8,local_48,local_44,L"Begin Insert Edge Loop");
  pcVar2 = *(code **)(lVar4 + 0xc0);
  plVar3 = (longlong *)(lVar4 + 0xe0);
  if (*(longlong **)(lVar4 + 0xd0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar4 + 0xd0);
  }
  uVar5 = (**(code **)(*plVar3 + 8))(plVar3);
  (*pcVar2)(uVar5,&local_b8);
  if (local_b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_b8 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8691a FUN_148f8691a body=340 status=ok
// SIG undefined FUN_148f8691a(void)

void FUN_148f8691a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143b8439e(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40),param_1 + 0x30);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar2 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ba263d0;
  uVar3 = FUN_144a3f946();
  puVar2[2] = uVar3;
  *puVar2 = &PTR_FUN_14ba31420;
  puVar2[3] = 0;
  FUN_14485c47a(puVar2 + 3,param_1);
  puVar2[4] = param_1;
  FUN_148f76e8e(lVar1 + 0x40,local_50,&local_48);
  FUN_1449db362(&local_48);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar2 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14aefe820;
  uVar3 = FUN_144a3f946();
  puVar2[2] = uVar3;
  *puVar2 = &PTR_FUN_14ba31490;
  puVar2[3] = 0;
  FUN_14485c47a(puVar2 + 3,param_1);
  puVar2[4] = param_1;
  FUN_1484d607c(lVar1 + 0x28,local_50,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f86a70 FUN_148f86a70 body=139 status=ok
// SIG undefined FUN_148f86a70(void)

byte FUN_148f86a70(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = 2;
  if ((char)param_1[0xb] == '\x01') {
    (**(code **)(*param_1 + 0x2c8))(param_1,param_1[9],0);
    FUN_1448a8284(param_1[9] + 0x90);
    FUN_140457ffc(*(longlong *)(param_1[10] + 0x40) + 0x40,param_1);
    FUN_140457ffc(*(longlong *)(param_1[10] + 0x40) + 0x28,param_1);
    FUN_148f86afc(param_1);
    FUN_143b844d6(*(undefined8 *)(param_1[10] + 0x40));
    *(undefined1 *)(param_1 + 0xb) = 0;
    bVar1 = (**(code **)(*param_1 + 0x2f8))(param_1);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



// FUNCTION 148f86afc FUN_148f86afc body=208 status=ok
// SIG undefined FUN_148f86afc(void)

void FUN_148f86afc(longlong param_1)

{
  FUN_143b844a2(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40));
  FUN_14851bbe8(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 0x58),
                *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30),1,0xf);
  *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
  if (*(int *)(param_1 + 0xdc) < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_146c94d7e(param_1 + 0xd0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(param_1 + 0xec) < 0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    FUN_146c94d7e(param_1 + 0xe0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  if (-1 < *(int *)(param_1 + 0xfc)) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_1447a8aa0(param_1 + 0xf0,0);
  return;
}



// FUNCTION 148f86bd0 FUN_148f86bd0 body=676 status=ok
// SIG undefined FUN_148f86bd0(void)

void FUN_148f86bd0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_288 [32];
  undefined1 local_268;
  undefined1 local_260;
  undefined1 local_258 [4];
  undefined1 local_254 [4];
  undefined1 local_250 [8];
  wchar_t *local_248;
  undefined4 local_240;
  undefined1 local_238 [240];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x3d0) == '\x01') &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 0x91) == '\x01')) {
    if (*(char *)(param_1 + 0x3d1) == '\x01') {
      FUN_146c2c368(local_f0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30));
      FUN_146c2c4e8(local_f0);
      local_128 = 0;
      local_120 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_11c = 0xffffffff00000080;
      local_114 = 0;
      local_108 = 0;
      local_100 = 0;
      FUN_145c3f772(&local_148,*(undefined8 *)(param_1 + 1000));
      FUN_148f76300(local_f0,&local_148,1);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30);
      uVar3 = FUN_14851bd54(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 0x58));
      local_260 = 1;
      local_268 = 1;
      FUN_146c005f0(uVar1,uVar3,1,1);
      FUN_148466536(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48),
                    *(undefined8 *)(param_1 + 0x3d8));
      FUN_1482ab8e4(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30));
      FUN_148f862dc(param_1);
      FUN_1458d302c(local_238);
      lVar2 = *(longlong *)(param_1 + 0x50);
      FUN_146c2caf6(local_f0,local_250);
      local_248 = L"EdgeLoopInsertionTransactionName";
      local_240 = 0x20;
      FUN_1446e940c(local_254,&local_248);
      local_248 = L"UPolyEditInsertEdgeLoopActivity";
      local_240 = 0x1f;
      FUN_1446e940c(local_258,&local_248);
      FUN_140208bae(&local_248,local_258,local_254,L"Edge Loop Insertion");
      FUN_148f74f2e(lVar2 + 0x80,&local_248,local_250,local_238);
      if (local_248 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_248 + 0x10))();
      }
      FUN_1456c3cc8(local_238);
      FUN_146c2c40e(local_f0);
    }
    if (*(int *)(param_1 + 0xdc) < 0) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
      FUN_146c94d7e(param_1 + 0xd0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
    if (*(int *)(param_1 + 0xec) < 0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      FUN_146c94d7e(param_1 + 0xe0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    if (*(int *)(param_1 + 0xfc) < 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
      FUN_1447a8aa0(param_1 + 0xf0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    *(undefined1 *)(param_1 + 0x3d0) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f86e76 FUN_148f86e76 body=460 status=ok
// SIG undefined FUN_148f86e76(void)

void FUN_148f86e76(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2c8))(plVar4);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x378))(plVar4);
  lVar5 = param_1 + 0x100;
  (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
  lVar1 = param_1 + 0x150;
  FUN_148453350(lVar1,param_2,lVar5);
  FUN_148453434(lVar1,param_1 + 0x60);
  if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xd0);
    lVar7 = (longlong)*(int *)(param_1 + 0xd8) * 0x30 + lVar6;
    do {
      FUN_148527000(lVar1,lVar6,lVar6 + 0x18);
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar7);
  }
  FUN_14845342a(lVar1);
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xca) != '\0') {
    lVar1 = param_1 + 0x270;
    FUN_148453350(lVar1,param_2,lVar5);
    FUN_148453434(lVar1,param_1 + 0x60);
    if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xe0);
      lVar6 = (longlong)*(int *)(param_1 + 0xe8) * 0x30 + lVar5;
      do {
        FUN_148527000(lVar1,lVar5,lVar5 + 0x18);
        lVar5 = lVar5 + 0x30;
      } while (lVar5 != lVar6);
    }
    iVar3 = *(int *)(param_1 + 0xf8);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 0xf0);
      lVar6 = 0;
      do {
        local_60 = *(undefined1 *)(param_1 + 0x2ac);
        local_68 = *(undefined4 *)(param_1 + 0x290);
        local_48 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
        puVar2 = (undefined4 *)(lVar5 + lVar6);
        local_58 = *puVar2;
        uStack_54 = puVar2[1];
        uStack_50 = puVar2[2];
        uStack_4c = puVar2[3];
        (**(code **)(*(longlong *)(param_1 + 0x270) + 0x40))
                  (lVar1,&local_58,*(undefined4 *)(param_1 + 0x398),param_1 + 0x280);
        lVar6 = lVar6 + 0x18;
      } while ((longlong)iVar3 * 0x18 != lVar6);
    }
    FUN_14845342a(lVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f87054 FUN_148f87054 body=1373 status=ok
// SIG undefined FUN_148f87054(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_148f87054(longlong param_1,undefined1 *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar20;
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 auStack_278 [32];
  double *local_258;
  undefined1 *local_250;
  undefined8 local_248;
  undefined1 local_238 [24];
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  undefined2 local_1cb;
  undefined1 local_1c9;
  undefined8 local_1c8;
  undefined8 local_1c0 [30];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_1c0[0] = 0;
  FUN_14485c47a(local_1c0,0);
  *(undefined8 *)(param_2 + 0x38) = local_1c0[0];
  dVar4 = param_3[3];
  dVar5 = param_3[4];
  dVar6 = *(double *)(param_1 + 0x60);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0xa0);
  dVar2 = -dVar6;
  dVar10 = -*(double *)(param_1 + 0x68);
  dVar14 = *(double *)(param_1 + 0x70) * -1.0;
  dVar15 = *(double *)(param_1 + 0x78) * 1.0;
  dVar17 = dVar5 * dVar2 - dVar4 * dVar10;
  dVar20 = param_3[5] * dVar10 - dVar5 * dVar14;
  dVar16 = dVar4 * dVar14 - param_3[5] * dVar2;
  dVar20 = dVar20 + dVar20;
  dVar16 = dVar16 + dVar16;
  dVar17 = dVar17 + dVar17;
  auVar19 = divpd(_DAT_149934d80,auVar1);
  local_208 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar19._0_8_);
  dStack_200 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar19._8_8_);
  dVar12 = *param_3 - *(double *)(param_1 + 0x80);
  dVar13 = param_3[1] - *(double *)(param_1 + 0x88);
  local_1f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0xb0))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0xb0)));
  dVar11 = param_3[2] - *(double *)(param_1 + 0x90);
  dVar18 = dVar13 * dVar2 - dVar10 * dVar12;
  dVar3 = dVar11 * dVar10 - dVar14 * dVar13;
  dVar21 = dVar12 * dVar14 - dVar11 * dVar2;
  dVar3 = dVar3 + dVar3;
  dVar21 = dVar21 + dVar21;
  dVar18 = dVar18 + dVar18;
  local_1f0 = ((dVar17 * dVar10 - dVar16 * dVar14) + dVar15 * dVar20 + dVar4) * local_208;
  dStack_1e8 = (dVar6 * dVar17 + dVar14 * dVar20 + dVar15 * dVar16 + dVar5) * dStack_200;
  local_208 = ((dVar18 * dVar10 - dVar21 * dVar14) + dVar15 * dVar3 + dVar12) * local_208;
  dStack_200 = (dVar6 * dVar18 + dVar14 * dVar3 + dVar15 * dVar21 + dVar13) * dStack_200;
  local_1e0 = (dVar17 * dVar15 + param_3[5] + (dVar16 * dVar2 - dVar20 * dVar10)) * local_1f8;
  local_1f8 = (dVar18 * dVar15 + dVar11 + (dVar21 * dVar2 - dVar3 * dVar10)) * local_1f8;
  dVar17 = local_1e0 * local_1e0 + local_1f0 * local_1f0 + dStack_1e8 * dStack_1e8;
  if (9.99999993922529e-09 < dVar17) {
    dVar17 = 1.0 / SQRT(dVar17);
    local_1f0 = local_1f0 * dVar17;
    dStack_1e8 = dStack_1e8 * dVar17;
    local_1e0 = local_1e0 * dVar17;
  }
  FUN_1458d302c(local_1c0);
  *(undefined1 *)(param_1 + 0x393) =
       *(undefined1 *)
        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x78) + 0xad);
  local_250 = local_238;
  local_258 = &local_220;
  local_248 = 0;
  cVar8 = FUN_148524926(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x390,&local_208,local_1c0);
  if (cVar8 != '\0') {
    iVar9 = FUN_1482ae192(local_1c0);
    if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48) + 0x70) + 0x48 +
                (longlong)iVar9 * 0x50) != -1) {
      dVar10 = (local_218 - dStack_200) * dStack_1e8;
      dVar17 = (local_220 - local_208) * local_1f0;
      dVar2 = (local_210 - local_1f8) * local_1e0;
      local_1c8 = 0;
      FUN_14485c47a(&local_1c8,0);
      *param_2 = 1;
      uVar7 = (undefined4)local_1c8;
      *(undefined4 *)(param_2 + 1) = uVar7;
      *(undefined4 *)(param_2 + 4) = local_1c8._3_4_;
      *(double *)(param_2 + 8) = dVar2 + dVar17 + dVar10;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
      param_2[0x28] = 0;
      *(undefined2 *)(param_2 + 0x29) = local_1cb;
      param_2[0x2b] = local_1c9;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = local_1c8;
    }
  }
  FUN_1456c3cc8(local_1c0);
  if ((local_d0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f875b2 FUN_148f875b2 body=1783 status=ok
// SIG undefined FUN_148f875b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_148f875b2(longlong param_1,double *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  undefined7 uVar11;
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
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  undefined1 *local_2b0;
  int *local_2a8;
  longlong local_298 [2];
  double local_288;
  undefined8 local_280;
  undefined1 local_278 [8];
  longlong local_270;
  undefined8 local_238;
  int local_22c;
  undefined1 local_228 [24];
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  undefined1 local_1c0 [240];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  dVar17 = param_2[3];
  dVar20 = param_2[4];
  dVar7 = *(double *)(param_1 + 0x60);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0xa0);
  dVar14 = -dVar7;
  dVar13 = -*(double *)(param_1 + 0x68);
  dVar19 = *(double *)(param_1 + 0x70) * -1.0;
  dVar21 = *(double *)(param_1 + 0x78) * 1.0;
  dVar25 = dVar20 * dVar14 - dVar17 * dVar13;
  dVar26 = param_2[5] * dVar13 - dVar20 * dVar19;
  dVar24 = dVar17 * dVar19 - param_2[5] * dVar14;
  dVar26 = dVar26 + dVar26;
  dVar24 = dVar24 + dVar24;
  dVar25 = dVar25 + dVar25;
  auVar23 = divpd(_DAT_149934d80,auVar2);
  local_1f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar23._0_8_);
  dStack_1f0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar23._8_8_);
  dVar16 = *param_2 - *(double *)(param_1 + 0x80);
  dVar18 = param_2[1] - *(double *)(param_1 + 0x88);
  local_1e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0xb0))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0xb0)));
  dVar15 = param_2[2] - *(double *)(param_1 + 0x90);
  dVar22 = dVar18 * dVar14 - dVar13 * dVar16;
  dVar12 = dVar15 * dVar13 - dVar19 * dVar18;
  dVar27 = dVar16 * dVar19 - dVar15 * dVar14;
  dVar12 = dVar12 + dVar12;
  dVar27 = dVar27 + dVar27;
  dVar22 = dVar22 + dVar22;
  local_1e0 = ((dVar25 * dVar13 - dVar24 * dVar19) + dVar21 * dVar26 + dVar17) * local_1f8;
  dStack_1d8 = (dVar7 * dVar25 + dVar19 * dVar26 + dVar21 * dVar24 + dVar20) * dStack_1f0;
  local_1f8 = ((dVar22 * dVar13 - dVar27 * dVar19) + dVar21 * dVar12 + dVar16) * local_1f8;
  dStack_1f0 = (dVar7 * dVar22 + dVar19 * dVar12 + dVar21 * dVar27 + dVar18) * dStack_1f0;
  local_1d0 = (dVar25 * dVar21 + param_2[5] + (dVar24 * dVar14 - dVar26 * dVar13)) * local_1e8;
  local_1e8 = (dVar22 * dVar21 + dVar15 + (dVar27 * dVar14 - dVar12 * dVar13)) * local_1e8;
  dVar14 = local_1d0 * local_1d0 + local_1e0 * local_1e0 + dStack_1d8 * dStack_1d8;
  if (9.99999993922529e-09 < dVar14) {
    dVar14 = 1.0 / SQRT(dVar14);
    local_1e0 = local_1e0 * dVar14;
    dStack_1d8 = dStack_1d8 * dVar14;
    local_1d0 = local_1d0 * dVar14;
  }
  FUN_1458d302c(local_1c0);
  *(undefined1 *)(param_1 + 0x393) =
       *(undefined1 *)
        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x78) + 0xad);
  local_2a8 = &local_22c;
  local_2b0 = local_228;
  local_2b8 = &local_210;
  cVar8 = FUN_148524926(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x390,&local_1f8,local_1c0);
  if (cVar8 == '\0') {
    FUN_148f86afc(param_1);
    uVar10 = 0;
    goto LAB_148f879bd;
  }
  iVar9 = FUN_1482ae192(local_1c0);
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48) + 0x70) +
           (longlong)iVar9 * 0x50);
  local_280 = *puVar1;
  FUN_146c7f210(local_278,puVar1 + 1);
  local_238 = puVar1[9];
  if ((int)local_238 == -1) {
LAB_148f8799f:
    FUN_148f86afc(param_1);
    uVar10 = 0;
  }
  else {
    uVar11 = (undefined7)((ulonglong)param_1 >> 8);
    if (*(int *)(*(longlong *)(param_1 + 0x48) + 0xa8) != 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x48) + 200) != '\0') {
        uVar3 = *(uint *)(local_270 + (longlong)local_22c * 4);
        uVar4 = *(uint *)(local_270 + 4 + (longlong)local_22c * 4);
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x10);
        lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8);
        uVar10 = (ulonglong)uVar3 & 0x1ff;
        dVar14 = *(double *)(lVar6 + uVar10 * 0x18);
        dVar13 = *(double *)(lVar6 + 8 + uVar10 * 0x18);
        dVar22 = *(double *)(lVar6 + 0x10 + uVar10 * 0x18);
        lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8);
        uVar10 = (ulonglong)uVar4 & 0x1ff;
        dVar20 = *(double *)(lVar5 + 0x10 + uVar10 * 0x18) - dVar22;
        dVar17 = *(double *)(lVar5 + 8 + uVar10 * 0x18) - dVar13;
        dVar27 = *(double *)(lVar5 + uVar10 * 0x18) - dVar14;
        dVar12 = dVar20 * dVar20 + dVar27 * dVar27 + dVar17 * dVar17;
        if (9.99999993922529e-09 < dVar12) {
          dVar12 = 1.0 / SQRT(dVar12);
          dVar27 = dVar27 * dVar12;
          dVar17 = dVar17 * dVar12;
          dVar20 = dVar20 * dVar12;
        }
        local_298[0] = 0;
        local_298[1] = 0;
        dVar12 = (double)FUN_1482ac182(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48),iVar9,
                                       local_298);
        local_288 = (local_210 - dVar14) * dVar27 + (local_208 - dVar13) * dVar17 +
                    (local_200 - dVar22) * dVar20 +
                    *(double *)(local_298[0] + (longlong)local_22c * 8);
        lVar5 = *(longlong *)(param_1 + 0x48);
        if (*(char *)(lVar5 + 0xc9) == '\x01') {
          local_288 = dVar12 - local_288;
        }
        if (local_288 <= *(double *)(lVar5 + 0xd0)) {
LAB_148f87c59:
          FUN_148f86afc(param_1);
          uVar10 = 0;
        }
        else {
          if (*(int *)(lVar5 + 0xa8) == 1) {
            if (ABS(local_288 - dVar12) <= *(double *)(lVar5 + 0xd0)) goto LAB_148f87c59;
            local_288 = local_288 / dVar12;
          }
          FUN_148f87caa(param_1,iVar9,&local_288);
          uVar10 = CONCAT71(uVar11,1);
        }
        if (local_298[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_148f879a9;
      }
      dVar14 = (double)FUN_1482ac182(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48),iVar9,0);
      lVar5 = *(longlong *)(param_1 + 0x48);
      if (*(int *)(lVar5 + 0xa8) == 1) {
        dVar13 = ABS(*(double *)(lVar5 + 0xb8) * dVar14 - dVar14);
      }
      else {
        if (*(int *)(lVar5 + 0xa8) != 2) goto LAB_148f87a58;
        dVar13 = *(double *)(lVar5 + 0xc0);
        if (dVar14 < dVar13) goto LAB_148f8799f;
      }
      if (dVar13 <= *(double *)(lVar5 + 0xd0)) goto LAB_148f8799f;
    }
LAB_148f87a58:
    FUN_148f87caa(param_1,iVar9,0);
    uVar10 = CONCAT71(uVar11,1);
  }
LAB_148f879a9:
  FUN_146c7d752(local_278);
LAB_148f879bd:
  FUN_1456c3cc8(local_1c0);
  if ((local_d0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 148f87caa FUN_148f87caa body=152 status=ok
// SIG undefined FUN_148f87caa(void)

void FUN_148f87caa(longlong param_1,int param_2,double *param_3)

{
  if (*(int *)(param_1 + 0x3c0) == param_2) {
    if ((param_3 == (double *)0x0) || (*(int *)(*(longlong *)(param_1 + 0x48) + 0xa8) == 0)) {
      return;
    }
    if ((*param_3 == *(double *)(param_1 + 0x3c8)) &&
       (!NAN(*param_3) && !NAN(*(double *)(param_1 + 0x3c8)))) {
      return;
    }
    *(int *)(param_1 + 0x3c0) = param_2;
  }
  else {
    *(int *)(param_1 + 0x3c0) = param_2;
    if (param_3 == (double *)0x0) goto LAB_148f87d03;
  }
  *(double *)(param_1 + 0x3c8) = *param_3;
LAB_148f87d03:
  if (*(int *)(param_1 + 0xdc) < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_146c94d7e(param_1 + 0xd0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  FUN_1485051e4(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40));
  return;
}



// FUNCTION 148f87d42 FUN_148f87d42 body=178 status=ok
// SIG undefined FUN_148f87d42(void)

undefined1 * FUN_148f87d42(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x398) == '\0') && (*(char *)(param_1 + 0x20) != '\0')) {
    FUN_148f87054(param_1 + -0x38,param_2);
    if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  FUN_14485c47a(&local_20,0);
  *(undefined8 *)(param_2 + 0x38) = local_20;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 148f87e2c FUN_148f87e2c body=225 status=ok
// SIG undefined FUN_148f87e2c(void)

undefined1 * FUN_148f87e2c(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [37];
  undefined2 local_33;
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30,0);
  if ((*(char *)(param_1 + 0x390) == '\0') && (*(char *)(param_1 + 0x18) != '\0')) {
    FUN_148f87054(param_1 + -0x40,param_2,param_3);
  }
  else {
    *param_2 = 0;
    uVar1 = (undefined4)local_30;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *(undefined4 *)(param_2 + 4) = local_30._3_4_;
    *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
    *(undefined2 *)(param_2 + 0x29) = local_33;
    param_2[0x2b] = local_31;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f87f0e FUN_148f87f0e body=45 status=ok
// SIG undefined FUN_148f87f0e(void)

void FUN_148f87f0e(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x390) == '\0') {
    cVar1 = FUN_148f875b2(param_1 + -0x40);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x390) = 1;
    }
  }
  return;
}



// FUNCTION 148f87f5c FUN_148f87f5c body=388 status=ok
// SIG undefined FUN_148f87f5c(void)

void FUN_148f87f5c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1484445fc();
  uVar2 = FUN_1409ffe1d();
  plVar3 = (longlong *)FUN_148f880e1(uVar2);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[8] = (longlong)plVar3;
  FUN_140056680(local_38,&DAT_149dfb77a);
  plVar1 = param_1 + 5;
  uVar2 = FUN_14479d2ce(plVar1);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,uVar2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,param_1[8]);
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[8],0);
  uVar2 = FUN_1409ffe1d();
  plVar3 = (longlong *)FUN_14843c80f(uVar2);
  (**(code **)(*plVar3 + 0x358))(plVar3,param_1 + 6);
  plVar4 = (longlong *)FUN_14479d2ce(plVar1);
  (**(code **)(*plVar4 + 0x2e8))(plVar4,plVar3,0);
  uVar2 = FUN_1409ffe1d();
  plVar3 = (longlong *)FUN_1484101e0(uVar2);
  (**(code **)(*plVar3 + 0x300))(plVar3,param_1 + 7);
  plVar4 = (longlong *)FUN_14479d2ce(plVar1);
  (**(code **)(*plVar4 + 0x2e8))(plVar4,plVar3,0);
  plVar3 = (longlong *)FUN_14479d2ce(plVar1);
  uVar2 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  uVar2 = FUN_148451390(uVar2);
  lVar5 = FUN_148f740cc(uVar2);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0xc] = lVar5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f880e1 FUN_148f880e1 body=148 status=ok
// SIG undefined FUN_148f880e1(void)

undefined8 FUN_148f880e1(undefined8 param_1)

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
  uVar1 = FUN_1459f5252();
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



// FUNCTION 148f88176 FUN_148f88176 body=160 status=ok
// SIG undefined FUN_148f88176(void)

void FUN_148f88176(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f88218();
  plVar1 = *(longlong **)(param_1 + 0x40);
  FUN_140056680(local_30,&DAT_149dfb77a);
  uVar2 = FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,uVar2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  local_30[0] = 0;
  FUN_14485c47a(local_30,0);
  *(longlong *)(param_1 + 0x28) = local_30[0];
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f88218 FUN_148f88218 body=85 status=ok
// SIG undefined FUN_148f88218(void)

void FUN_148f88218(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_14851b2ea();
    param_1[10] = 0;
  }
  FUN_14851b64a(*(undefined8 *)(*(longlong *)(param_1[0xc] + 0x40) + 0x58),1);
  param_1[0xb] = 0;
                    /* WARNING: Could not recover jumptable at 0x000148f8826a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[8],0);
  return;
}



// FUNCTION 148f8828e FUN_148f8828e body=442 status=ok
// SIG undefined FUN_148f8828e(void)

undefined8 FUN_148f8828e(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(*param_1 + 0x2d8))();
  if (cVar3 == '\0') {
    plVar4 = (longlong *)FUN_14479d2ce(param_1 + 5);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2c8))(plVar4);
    local_38 = L"InsetOutsetNoSelectionMesssage";
    local_30 = 0x1e;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UPolyEditInsetOutsetActivity";
    local_30 = 0x1c;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,L"Cannot inset or outset without face selection.");
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_38,3);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
    uVar5 = 1;
  }
  else {
    FUN_148f88218(param_1);
    cVar3 = FUN_148f8844a(param_1);
    uVar5 = 1;
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 9) = 1;
      lVar1 = param_1[0xc];
      local_38 = L"BeginInsetOutsetActivity";
      local_30 = 0x18;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"UPolyEditInsetOutsetActivity";
      local_30 = 0x1c;
      FUN_1446e940c(local_40,&local_38);
      FUN_140208bae(&local_38,local_40,local_3c,L"Begin Inset/Outset");
      pcVar2 = *(code **)(lVar1 + 0xc0);
      plVar4 = (longlong *)(lVar1 + 0xe0);
      if (*(longlong **)(lVar1 + 0xd0) != (longlong *)0x0) {
        plVar4 = *(longlong **)(lVar1 + 0xd0);
      }
      uVar5 = (**(code **)(*plVar4 + 8))(plVar4);
      (*pcVar2)(uVar5,&local_38);
      if (local_38 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_38 + 0x10))();
      }
      uVar5 = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8844a FUN_148f8844a body=1394 status=ok
// SIG undefined FUN_148f8844a(void)

bool FUN_148f8844a(longlong *param_1)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8;
  longlong local_4b8 [3];
  undefined1 local_49c [4];
  undefined8 local_498 [4];
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8 [4];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  longlong local_378 [2];
  wchar_t *local_368;
  undefined8 uStack_360;
  double *local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  wchar_t *local_308;
  undefined8 uStack_300;
  double *local_2f8;
  undefined3 uStack_2f0;
  undefined5 uStack_2ed;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  wchar_t local_260 [272];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  local_378[0] = 0;
  local_378[1] = 0;
  FUN_1482aeaa2(*(undefined8 *)(param_1[0xc] + 0x48),*(longlong *)(param_1[0xc] + 0x70) + 0x390);
  FUN_14851b8ac(*(undefined8 *)(*(longlong *)(param_1[0xc] + 0x40) + 0x58),local_3d8);
  lVar5 = param_1[0xc];
  plVar7 = param_1 + 5;
  uVar4 = FUN_14479d2ce(plVar7);
  lVar5 = FUN_148f73c42(uVar4,lVar5);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[10] = lVar5;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  uStack_424 = 0;
  uStack_420 = 0;
  uStack_41c = 0x3ff00000;
  local_418 = local_3b8;
  uStack_410 = uStack_3b0;
  local_408 = local_3a8;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f4 = 0x3ff00000;
  uStack_3f0 = 0;
  uStack_3ec = 0x3ff00000;
  local_3e8 = 0x3ff0000000000000;
  uStack_3e0 = 0;
  FUN_14851b91a(lVar5);
  puVar9 = local_3d8;
  puVar10 = local_498;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_478 = (undefined4)DAT_14c8464e0;
  uStack_474 = DAT_14c8464e0._4_4_;
  uStack_470 = (undefined4)DAT_14c8464e8;
  uStack_46c = DAT_14c8464e8._4_4_;
  local_468 = DAT_14c8464f0;
  uStack_460 = 0;
  FUN_1484e0044(param_1[10],*(undefined8 *)(param_1[0xc] + 0x30),local_378);
  FUN_14851b64a(*(undefined8 *)(*(longlong *)(param_1[0xc] + 0x40) + 0x58),0);
  local_4c8 = 0;
  FUN_1411b354a(local_260,0,0,0);
  FUN_1484e03b8(param_1[10],local_260);
  plVar6 = (longlong *)FUN_148f88c8a(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar6);
  }
  param_1[0xb] = (longlong)plVar6;
  uVar4 = FUN_14479d2ce(plVar7);
  (**(code **)(*plVar6 + 0x2a0))(plVar6,uVar4);
  lVar5 = param_1[0xb];
  local_308 = *(wchar_t **)(lVar5 + 0x30);
  uVar4 = *(undefined8 *)(lVar5 + 0x38);
  local_2f8 = *(double **)(lVar5 + 0x40);
  dVar1 = *(double *)(lVar5 + 0x48);
  local_348 = *(double *)(lVar5 + 0x50);
  dStack_340 = *(double *)(lVar5 + 0x58);
  uVar2 = *(undefined8 *)(lVar5 + 0x60);
  uStack_2d0 = *(undefined8 *)(lVar5 + 0x68);
  uStack_2d8 = (undefined4)uVar2;
  uStack_2d4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_2e8 = SUB84(local_348,0);
  uStack_2e4 = (undefined4)((ulonglong)local_348 >> 0x20);
  uStack_2e0 = SUB84(dStack_340,0);
  uStack_2dc = (undefined4)((ulonglong)dStack_340 >> 0x20);
  uStack_2f0 = SUB83(dVar1,0);
  uStack_2ed = (undefined5)((ulonglong)dVar1 >> 0x18);
  uStack_300 = uVar4;
  uVar4 = uStack_300;
  *(undefined8 *)(lVar5 + 0x60) = local_338;
  *(undefined8 *)(lVar5 + 0x68) = uStack_330;
  *(undefined ***)(lVar5 + 0x50) = &PTR_LAB_14ba31500;
  *(longlong **)(lVar5 + 0x58) = param_1;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(double *)(lVar5 + 0x48) = dStack_350;
  *(undefined1 **)(lVar5 + 0x30) = &LAB_1443748bc;
  *(double *)(lVar5 + 0x38) = uStack_360;
  uStack_300._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_368 = local_308;
  uStack_360._0_4_ = (int)uVar4;
  uStack_360._4_4_ = uStack_300._4_4_;
  local_338 = uVar2;
  uStack_330 = uStack_2d0;
  local_358 = local_2f8;
  dStack_350 = dVar1;
  if (local_308 != (wchar_t *)0x0) {
    pdVar8 = local_2f8;
    if (local_2f8 == (double *)0x0) {
      pdVar8 = &local_348;
    }
    uStack_300 = uVar4;
    (**(code **)((longlong)*pdVar8 + 0x10))();
  }
  *(undefined8 *)(param_1[0xb] + 0x70) = 0x3ff0000000000000;
  uStack_300 = 0;
  local_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2e0 = uStack_2e0 & 0xff000000;
  local_2f8 = (double *)0x0;
  uStack_2f0 = 0;
  uStack_2ed = 0;
  uStack_2dc = 2;
  uStack_2d8 = 1;
  local_2c8 = 0;
  local_2b8 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_308 = local_260;
  FUN_146c68b4c(&local_308);
  iVar3 = (int)local_2f8;
  if ((int)local_2f8 == 0) {
    plVar7 = (longlong *)FUN_14479d2ce(plVar7);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c8))(plVar7);
    local_368 = L"InsetOutsetNoBorderMesssage";
    uStack_360._0_4_ = 0x1b;
    FUN_1446e940c(local_4b8,&local_368);
    local_368 = L"UPolyEditInsetOutsetActivity";
    uStack_360 = (double)CONCAT44(uStack_360._4_4_,0x1c);
    FUN_1446e940c(local_49c,&local_368);
    FUN_140208bae(&local_368,local_49c,local_4b8,
                  L"Cannot inset or outset when selection has no border.");
    (**(code **)(*plVar7 + 0x340))(plVar7,&local_368,3);
    if (local_368 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_368 + 0x10))();
    }
  }
  else {
    local_4b8[0] = 0;
    local_4b8[1] = 0;
    FUN_14845d8b4(uStack_300,local_4b8);
    local_348 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    dStack_340 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_368 = (wchar_t *)0x0;
    uStack_360 = 0.0;
    local_358 = (double *)0x0;
    dStack_350 = 1.0;
    local_338 = DAT_14c8464f0;
    uStack_330 = 0;
    local_328 = (undefined4)DAT_14c846510;
    uStack_324 = DAT_14c846510._4_4_;
    uStack_320 = (undefined4)DAT_14c846518;
    uStack_31c = DAT_14c846518._4_4_;
    local_318 = DAT_14c846520;
    uStack_310 = 0;
    (**(code **)(*(longlong *)param_1[0xb] + 0x2d8))((longlong *)param_1[0xb],local_4b8);
    (**(code **)(*param_1 + 0x2c8))(param_1,param_1[8],1);
    FUN_145c688c4(*(undefined8 *)(param_1[0xc] + 0x30),&local_368,0);
    dVar1 = (double)(-(ulonglong)(0.0 <= dStack_340 - (double)local_358) &
                    (ulonglong)(dStack_340 - (double)local_358));
    dVar13 = (double)(-(ulonglong)(0.0 <= local_348 - uStack_360) &
                     (ulonglong)(local_348 - uStack_360));
    uVar11 = -(ulonglong)(dVar1 <= dVar13);
    dVar13 = (double)(~uVar11 & (ulonglong)dVar1 | uVar11 & (ulonglong)dVar13);
    dVar1 = (double)(-(ulonglong)(0.0 <= dStack_350 - (double)local_368) &
                    (ulonglong)(dStack_350 - (double)local_368));
    uVar11 = -(ulonglong)(dVar13 <= dVar1);
    fVar12 = (float)(double)(uVar11 & (ulonglong)dVar1 | ~uVar11 & (ulonglong)dVar13);
    if (0.0 < fVar12) {
      *(float *)(param_1 + 0xd) = 1.0 / fVar12;
    }
    *(undefined1 *)((longlong)param_1 + 0x49) = 1;
    if (local_4b8[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1482f1656(&local_308);
  FUN_141082778(local_260);
  if (local_378[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return iVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f889c2 FUN_148f889c2 body=78 status=ok
// SIG undefined FUN_148f889c2(void)

undefined8 FUN_148f889c2(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    FUN_148f88218(param_1);
    uVar1 = 2;
  }
  else if (param_2 == '\x02') {
    FUN_148f88218();
    *(undefined1 *)(param_1 + 0x48) = 0;
    uVar1 = 1;
  }
  else {
    FUN_148f88a10(param_1);
    FUN_148f88218(param_1);
    *(undefined1 *)(param_1 + 0x48) = 0;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 148f88a10 FUN_148f88a10 body=633 status=ok
// SIG undefined FUN_148f88a10(void)

void FUN_148f88a10(longlong param_1)

{
  undefined8 uVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [8];
  undefined1 local_c0 [16];
  void *local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  byte local_93;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_80;
  undefined1 local_68 [16];
  void *local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + 0x390;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_1482aeaa2(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),lVar5,&local_58);
  FUN_1482df8e6(local_c0,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30));
  _Src = local_58;
  local_98 = *(undefined4 *)(param_1 + 0x68);
  iVar2 = (int)uStack_50;
  lVar4 = (longlong)(int)uStack_50;
  local_a8 = (int)uStack_50;
  if ((int)uStack_50 == 0 && local_a4 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_144a06ca8(&local_b0,uStack_50 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy(local_b0,_Src,lVar4 << 2);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x70);
  uVar7 = (uint)((ulonglong)uVar1 >> 0x20);
  if (*(char *)(lVar4 + 0xb5) == '\x01') {
    uVar7 = uVar7 ^ 0x80000000;
    local_94 = 0;
  }
  else {
    local_94 = *(undefined1 *)(lVar4 + 0xb4);
  }
  local_a0 = CONCAT44(uVar7,(int)uVar1);
  local_90 = *(undefined4 *)(lVar4 + 0xa8);
  local_93 = *(byte *)(lVar4 + 0xac) ^ 1;
  local_8c = *(undefined4 *)(lVar4 + 0xb0);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30);
  uVar3 = FUN_14001cc68(0xa8,0x10);
  FUN_146c2c368(uVar3,uVar1);
  lVar4 = local_80;
  bVar6 = local_80 != 0;
  local_80 = uVar3;
  if (bVar6) {
    FUN_146c2c40e(lVar4);
    FUN_1400020a8(lVar4);
  }
  FUN_146c2c4e8(local_80);
  FUN_1482df9a8(local_c0);
  local_d8 = 0;
  FUN_146c38f66(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30),local_68,1,1);
  lVar4 = *(longlong *)(param_1 + 0x60);
  FUN_146c2caf6(local_80,local_c8);
  local_48 = L"PolyMeshInsetOutsetChange";
  local_40 = 0x19;
  FUN_1446e940c(local_cc,&local_48);
  local_48 = L"UPolyEditInsetOutsetActivity";
  local_40 = 0x1c;
  FUN_1446e940c(local_d0,&local_48);
  FUN_140208bae(&local_48,local_d0,local_cc,L"Inset/Outset");
  FUN_148f74f2e(lVar4 + 0x80,&local_48,local_c8,lVar5);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_1482df938(local_c0);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f88c8a FUN_148f88c8a body=148 status=ok
// SIG undefined FUN_148f88c8a(void)

undefined8 FUN_148f88c8a(undefined8 param_1)

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
  uVar1 = FUN_14595c296();
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



// FUNCTION 148f88d38 FUN_148f88d38 body=117 status=ok
// SIG undefined FUN_148f88d38(void)

void FUN_148f88d38(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(char *)(param_1 + 0x49) == '\x01')) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (*(char *)(lVar1 + 0xb5) == '\0') {
      uVar2 = *(undefined1 *)(lVar1 + 0xb4);
    }
    else {
      uVar2 = 0;
    }
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x58) + 0x70);
    if (*(char *)(lVar1 + 0xb5) != '\0') {
      uVar3 = uVar3 ^ 0x8000000000000000;
    }
    FUN_1484e0196(*(longlong *)(param_1 + 0x50),uVar3,uVar2,(double)*(float *)(lVar1 + 0xa8),
                  (double)*(float *)(lVar1 + 0xb0),*(undefined1 *)(lVar1 + 0xac));
    *(undefined1 *)(param_1 + 0x49) = 0;
  }
  return;
}



// FUNCTION 148f88dae FUN_148f88dae body=148 status=ok
// SIG undefined FUN_148f88dae(void)

undefined1 * FUN_148f88dae(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  FUN_14485c47a(&local_28,0);
  *(undefined8 *)(param_2 + 0x38) = local_28;
  *param_2 = *(undefined1 *)(param_1 + 0x18);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f88e44 FUN_148f88e44 body=108 status=ok
// SIG undefined FUN_148f88e44(void)

void FUN_148f88e44(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x18) != '\x01') {
    return;
  }
  lVar1 = param_1 + -0x30;
  FUN_148f88a10(lVar1);
  FUN_148f88218(lVar1);
  *(undefined1 *)(param_1 + 0x18) = 0;
  lVar2 = FUN_14479d2ce();
  if (lVar2 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar3 = FUN_145a7ba0c();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000148f88ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
  return;
}



// FUNCTION 148f88eb0 FUN_148f88eb0 body=148 status=ok
// SIG undefined FUN_148f88eb0(void)

undefined1 * FUN_148f88eb0(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  FUN_14485c47a(&local_28,0);
  *(undefined8 *)(param_2 + 0x38) = local_28;
  *param_2 = *(undefined1 *)(param_1 + 0x10);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f88f46 FUN_148f88f46 body=34 status=ok
// SIG undefined FUN_148f88f46(void)

undefined1 FUN_148f88f46(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2e0))();
  *(undefined1 *)(param_1 + 0x11) = 1;
  return *(undefined1 *)(param_1 + 0x10);
}



// FUNCTION 148f88f78 FUN_148f88f78 body=388 status=ok
// SIG undefined FUN_148f88f78(void)

void FUN_148f88f78(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1484445fc();
  uVar2 = FUN_1409ffe1d();
  plVar3 = (longlong *)FUN_148f890fd(uVar2);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[8] = (longlong)plVar3;
  FUN_140056680(local_38,&DAT_149dfb77a);
  plVar1 = param_1 + 5;
  uVar2 = FUN_14479d2ce(plVar1);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,uVar2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,param_1[8]);
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[8],0);
  uVar2 = FUN_1409ffe1d();
  plVar3 = (longlong *)FUN_14843c80f(uVar2);
  (**(code **)(*plVar3 + 0x358))(plVar3,param_1 + 6);
  plVar4 = (longlong *)FUN_14479d2ce(plVar1);
  (**(code **)(*plVar4 + 0x2e8))(plVar4,plVar3,0);
  uVar2 = FUN_1409ffe1d();
  plVar3 = (longlong *)FUN_1484101e0(uVar2);
  (**(code **)(*plVar3 + 0x300))(plVar3,param_1 + 7);
  plVar4 = (longlong *)FUN_14479d2ce(plVar1);
  (**(code **)(*plVar4 + 0x2e8))(plVar4,plVar3,0);
  plVar3 = (longlong *)FUN_14479d2ce(plVar1);
  uVar2 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  uVar2 = FUN_148451390(uVar2);
  lVar5 = FUN_148f740cc(uVar2);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0xb] = lVar5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f890fd FUN_148f890fd body=148 status=ok
// SIG undefined FUN_148f890fd(void)

undefined8 FUN_148f890fd(undefined8 param_1)

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
  uVar1 = FUN_1459f542a();
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



// FUNCTION 148f89192 FUN_148f89192 body=160 status=ok
// SIG undefined FUN_148f89192(void)

void FUN_148f89192(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f89234();
  plVar1 = *(longlong **)(param_1 + 0x40);
  FUN_140056680(local_30,&DAT_149dfb77a);
  uVar2 = FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,uVar2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  local_30[0] = 0;
  FUN_14485c47a(local_30,0);
  *(longlong *)(param_1 + 0x28) = local_30[0];
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f89234 FUN_148f89234 body=85 status=ok
// SIG undefined FUN_148f89234(void)

void FUN_148f89234(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_14851b2ea();
    param_1[9] = 0;
  }
  FUN_14851b64a(*(undefined8 *)(*(longlong *)(param_1[0xb] + 0x40) + 0x58),1);
  param_1[10] = 0;
                    /* WARNING: Could not recover jumptable at 0x000148f89286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[8],0);
  return;
}



// FUNCTION 148f892aa FUN_148f892aa body=590 status=ok
// SIG undefined FUN_148f892aa(void)

undefined8 FUN_148f892aa(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = (**(code **)(*param_1 + 0x2d8))();
  if (cVar3 == '\0') {
    plVar4 = (longlong *)FUN_14479d2ce(param_1 + 5);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2c8))(plVar4);
    local_48 = L"OnSetUVsFailedMesssage";
    local_40 = 0x16;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UPolyEditPlanarProjectionUVActivity";
    local_40 = 0x23;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"Cannot set UVs without face selection.");
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_48,3);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    uVar5 = 1;
  }
  else {
    FUN_148f89234(param_1);
    FUN_148f894fa(param_1);
    *(undefined1 *)(param_1 + 0xc) = 1;
    plVar4 = (longlong *)FUN_14479d2ce(param_1 + 5);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2c8))(plVar4);
    local_48 = L"OnBeginSetUVsMessage";
    local_40 = 0x14;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UPolyEditPlanarProjectionUVActivity";
    local_40 = 0x23;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"Click on the face to Set UVs");
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_48,1);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    lVar1 = param_1[0xb];
    local_48 = L"BeginSetUVsActivity";
    local_40 = 0x13;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UPolyEditPlanarProjectionUVActivity";
    local_40 = 0x23;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"Begin Set UVs");
    pcVar2 = *(code **)(lVar1 + 0xc0);
    plVar4 = (longlong *)(lVar1 + 0xe0);
    if (*(longlong **)(lVar1 + 0xd0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar1 + 0xd0);
    }
    uVar5 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar2)(uVar5,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    uVar5 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f894fa FUN_148f894fa body=1207 status=ok
// SIG undefined FUN_148f894fa(void)

void FUN_148f894fa(longlong *param_1)

{
  longlong *plVar1;
  double dVar2;
  byte bVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_448 [32];
  undefined1 local_428;
  undefined8 local_418 [4];
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358 [4];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  longlong local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  double local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [544];
  double local_88;
  undefined8 uStack_80;
  double *local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_448;
  local_2f8 = 0;
  uStack_2f0 = 0;
  FUN_1482aeaa2(*(undefined8 *)(param_1[0xb] + 0x48),*(longlong *)(param_1[0xb] + 0x70) + 0x390);
  FUN_14851b8ac(*(undefined8 *)(*(longlong *)(param_1[0xb] + 0x40) + 0x58),local_358);
  lVar7 = param_1[0xb];
  plVar1 = param_1 + 5;
  uVar6 = FUN_14479d2ce(plVar1);
  lVar7 = FUN_148f73c42(uVar6,lVar7);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar7);
  }
  param_1[9] = lVar7;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3a8 = 0;
  uStack_3a4 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0x3ff00000;
  local_398 = local_338;
  uStack_390 = uStack_330;
  local_388 = local_328;
  uStack_380 = 0;
  local_378 = 0;
  uStack_374 = 0x3ff00000;
  uStack_370 = 0;
  uStack_36c = 0x3ff00000;
  local_368 = 0x3ff0000000000000;
  uStack_360 = 0;
  FUN_14851b91a(lVar7);
  puVar10 = local_358;
  puVar11 = local_418;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_3f8 = (undefined4)DAT_14c8464e0;
  uStack_3f4 = DAT_14c8464e0._4_4_;
  uStack_3f0 = (undefined4)DAT_14c8464e8;
  uStack_3ec = DAT_14c8464e8._4_4_;
  local_3e8 = DAT_14c8464f0;
  uStack_3e0 = 0;
  FUN_1484e04a4(param_1[9],*(undefined8 *)(param_1[0xb] + 0x30),&local_2f8);
  lVar7 = param_1[9];
  bVar3 = *(byte *)(param_1[8] + 0xa8);
  lVar12 = param_1[0xb];
  uVar6 = FUN_14479d2ce(plVar1);
  FUN_148f73d3d(uVar6,lVar12,lVar7,(bVar3 ^ 1) * 2);
  *(uint *)((longlong)param_1 + 100) = (*(byte *)(param_1[8] + 0xa8) ^ 1) * 2;
  local_428 = 0;
  FUN_1411b354a(local_2a8,0,0,0);
  FUN_1484e03b8(param_1[9],local_2a8);
  FUN_14851b64a(*(undefined8 *)(*(longlong *)(param_1[0xb] + 0x40) + 0x58),0);
  plVar8 = (longlong *)FUN_148f7b658(param_1);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar8);
  }
  param_1[10] = (longlong)plVar8;
  uVar6 = FUN_14479d2ce(plVar1);
  (**(code **)(*plVar8 + 0x2a0))(plVar8,uVar6);
  (**(code **)(*(longlong *)param_1[10] + 0x2d0))((longlong *)param_1[10],local_2a8);
  (**(code **)(*(longlong *)param_1[10] + 0x2e0))((longlong *)param_1[10],2);
  *(undefined1 *)(param_1[10] + 0xc0) = 1;
  uVar6 = FUN_14855653a();
  lVar7 = param_1[10];
  local_88 = *(double *)(lVar7 + 0x80);
  uStack_80 = *(double *)(lVar7 + 0x88);
  local_78 = *(double **)(lVar7 + 0x90);
  uStack_70 = *(double *)(lVar7 + 0x98);
  local_68 = *(double *)(lVar7 + 0xa0);
  dStack_60 = *(double *)(lVar7 + 0xa8);
  local_58 = *(undefined8 *)(lVar7 + 0xb0);
  uStack_50 = *(undefined8 *)(lVar7 + 0xb8);
  uVar5 = uStack_50;
  dVar4 = uStack_70;
  dVar2 = uStack_80;
  *(undefined8 *)(lVar7 + 0xb0) = uVar6;
  *(ulonglong *)(lVar7 + 0xb8) = CONCAT44(uStack_2ac,uStack_2b0);
  *(undefined ***)(lVar7 + 0xa0) = &PTR_LAB_14ba31520;
  *(longlong **)(lVar7 + 0xa8) = param_1;
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(ulonglong *)(lVar7 + 0x98) = CONCAT44(uStack_2cc,uStack_2d0);
  *(code **)(lVar7 + 0x80) = FUN_144374950;
  *(ulonglong *)(lVar7 + 0x88) = CONCAT44(uStack_2dc,uStack_2e0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_2b8 = local_58;
  uStack_2b0 = (undefined4)uStack_50;
  uStack_2ac = uStack_50._4_4_;
  local_2c8 = local_68;
  dStack_2c0 = dStack_60;
  local_2d8 = local_78;
  uStack_2d0 = (undefined4)uStack_70;
  uStack_2cc = uStack_70._4_4_;
  local_2e8 = local_88;
  uStack_2e0 = (undefined4)uStack_80;
  uStack_2dc = uStack_80._4_4_;
  uStack_80 = dVar2;
  uStack_70 = dVar4;
  uStack_50 = uVar5;
  if (local_88 != 0.0) {
    pdVar9 = local_2d8;
    if (local_78 == (double *)0x0) {
      pdVar9 = &local_2c8;
    }
    (**(code **)((longlong)*pdVar9 + 0x10))();
  }
  lVar7 = local_2f8;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0x7fefffffffffffff;
  param_1[0xf] = 0x7fefffffffffffff;
  param_1[0x10] = -0x10000000000001;
  param_1[0x11] = -0x10000000000001;
  param_1[0x12] = -0x10000000000001;
  lVar12 = (longlong)(int)uStack_2f0;
  if (lVar12 != 0) {
    lVar13 = 0;
    do {
      FUN_146c14aac(*(undefined8 *)(param_1[0xb] + 0x30),&local_88,*(undefined4 *)(lVar7 + lVar13));
      dVar2 = (double)param_1[0xd];
      uVar14 = SUB84(dVar2,0);
      uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (local_88 <= dVar2) {
        uVar14 = SUB84(local_88,0);
        uVar15 = (undefined4)((ulonglong)local_88 >> 0x20);
      }
      dVar2 = (double)param_1[0xe];
      uVar16 = SUB84(dVar2,0);
      uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
      param_1[0xd] = CONCAT44(uVar15,uVar14);
      if (uStack_80 <= dVar2) {
        uVar16 = SUB84(uStack_80,0);
        uVar17 = (undefined4)((ulonglong)uStack_80 >> 0x20);
      }
      param_1[0xe] = CONCAT44(uVar17,uVar16);
      dVar2 = (double)param_1[0xf];
      uVar14 = SUB84(dVar2,0);
      uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if ((double)local_78 <= dVar2) {
        uVar14 = SUB84(local_78,0);
        uVar15 = (undefined4)((ulonglong)local_78 >> 0x20);
      }
      param_1[0xf] = CONCAT44(uVar15,uVar14);
      dVar2 = (double)param_1[0x10];
      uVar14 = SUB84(dVar2,0);
      uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= uStack_70) {
        uVar14 = SUB84(uStack_70,0);
        uVar15 = (undefined4)((ulonglong)uStack_70 >> 0x20);
      }
      param_1[0x10] = CONCAT44(uVar15,uVar14);
      dVar2 = (double)param_1[0x11];
      uVar14 = SUB84(dVar2,0);
      uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= local_68) {
        uVar14 = SUB84(local_68,0);
        uVar15 = (undefined4)((ulonglong)local_68 >> 0x20);
      }
      param_1[0x11] = CONCAT44(uVar15,uVar14);
      dVar2 = (double)param_1[0x12];
      uVar14 = SUB84(dVar2,0);
      uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= dStack_60) {
        uVar14 = SUB84(dStack_60,0);
        uVar15 = (undefined4)((ulonglong)dStack_60 >> 0x20);
      }
      param_1[0x12] = CONCAT44(uVar15,uVar14);
      lVar13 = lVar13 + 4;
    } while (lVar12 * 4 != lVar13);
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[8],1);
  FUN_141082778(local_2a8);
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f899b6 FUN_148f899b6 body=34 status=ok
// SIG undefined FUN_148f899b6(void)

int FUN_148f899b6(longlong param_1)

{
  byte bVar1;
  
  FUN_148f89234();
  bVar1 = *(byte *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x60) = 0;
  return 2 - (uint)bVar1;
}



// FUNCTION 148f899d8 FUN_148f899d8 body=1781 status=ok
// SIG undefined FUN_148f899d8(void)

void FUN_148f899d8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double *pdVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_278 [32];
  code *local_258;
  undefined8 **local_250;
  undefined8 *local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 *local_230;
  undefined8 uStack_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined8 *local_1e8;
  double *pdStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  double dStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar1 = *(longlong *)(param_1 + 0x50);
  local_b8 = *(double *)(lVar1 + 0x108);
  local_e8 = *(double *)(lVar1 + 0xd8);
  dStack_e0 = *(double *)(lVar1 + 0xe0);
  local_d8 = *(double *)(lVar1 + 0xe8);
  dStack_d0 = *(double *)(lVar1 + 0xf0);
  local_c8 = *(double *)(lVar1 + 0xf8);
  dStack_c0 = *(double *)(lVar1 + 0x100);
  local_118 = (double)DAT_14c8464f0;
  local_128 = DAT_14c8464e0;
  uStack_120 = DAT_14c8464e8;
  dStack_110 = 0.0;
  dStack_108 = 0.0;
  dStack_100 = 0.0;
  local_f8 = 1.0;
  dVar5 = *(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x78);
  dVar7 = 0.0;
  dVar5 = (double)(-(ulonglong)(0.0 <= dVar5) & (ulonglong)dVar5);
  dVar6 = *(double *)(param_1 + 0x88) - *(double *)(param_1 + 0x70);
  dVar6 = (double)(-(ulonglong)(0.0 <= dVar6) & (ulonglong)dVar6);
  uVar4 = -(ulonglong)(dVar5 <= dVar6);
  dVar6 = (double)(~uVar4 & (ulonglong)dVar5 | uVar4 & (ulonglong)dVar6);
  dVar5 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar5 = (double)(-(ulonglong)(0.0 <= dVar5) & (ulonglong)dVar5);
  uVar4 = -(ulonglong)(dVar6 <= dVar5);
  dVar5 = 1.0 / (double)(uVar4 & (ulonglong)dVar5 | ~uVar4 & (ulonglong)dVar6);
  local_130 = dVar5;
  FUN_14851b8ac(*(undefined8 *)(param_1 + 0x48),&local_1e8);
  local_180 = local_1e8;
  uStack_178 = pdStack_1e0;
  local_170 = local_1d8;
  dStack_168 = dStack_1d0;
  local_160 = local_1c8;
  uStack_158 = dStack_1c0;
  local_150 = local_1b8;
  local_148 = local_1a8;
  uStack_140 = uStack_1a0;
  local_138 = local_198;
  plVar2 = *(longlong **)(param_1 + 0x50);
  if ((int)plVar2[0x1a] == 1) {
    (**(code **)(*plVar2 + 0x2d8))(plVar2,&local_e8);
    pdVar3 = *(double **)(*(longlong *)(param_1 + 0x50) + 200);
    local_d8 = local_d8 - pdVar3[2];
    dStack_e0 = dStack_e0 - pdVar3[1];
    local_e8 = local_e8 - *pdVar3;
    dVar9 = SQRT(local_d8 * local_d8 + local_e8 * local_e8 + dStack_e0 * dStack_e0);
    local_1f8 = 0.0;
    uVar11 = 0;
    uVar12 = 0;
    dVar6 = 0.0;
    if (0.0 < dVar9) {
      dVar6 = 1.0 / dVar9;
      dVar7 = local_e8 * dVar6;
      local_1f8 = dStack_e0 * dVar6;
      uVar11 = SUB84(local_d8 * dVar6,0);
      uVar12 = (undefined4)((ulonglong)(local_d8 * dVar6) >> 0x20);
      dVar6 = dVar9;
    }
    local_1f0 = (double)CONCAT44(uVar12,uVar11);
    dVar9 = *(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x78);
    dVar9 = (double)(-(ulonglong)(0.0 <= dVar9) & (ulonglong)dVar9);
    dVar10 = *(double *)(param_1 + 0x88) - *(double *)(param_1 + 0x70);
    dVar10 = (double)(-(ulonglong)(0.0 <= dVar10) & (ulonglong)dVar10);
    uVar4 = -(ulonglong)(dVar9 <= dVar10);
    dVar8 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
    dVar9 = (double)(~uVar4 & (ulonglong)dVar9 | uVar4 & (ulonglong)dVar10);
    dVar8 = (double)(-(ulonglong)(0.0 <= dVar8) & (ulonglong)dVar8);
    uVar4 = -(ulonglong)(dVar9 <= dVar8);
    dVar6 = dVar6 / (double)(uVar4 & (ulonglong)dVar8 | ~uVar4 & (ulonglong)dVar9);
    dVar9 = 1.0;
    if (dVar6 <= 1.0) {
      dVar9 = dVar6;
    }
    dVar9 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar9);
    local_130 = dVar5 * (dVar9 * 25.0 + (1.0 - dVar9));
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
    local_d8 = pdVar3[2];
    dStack_d0 = pdVar3[3];
    local_c8 = pdVar3[4];
    dStack_c0 = pdVar3[5];
    local_b8 = pdVar3[6];
    local_218 = dStack_d0 * (dStack_c0 + dStack_c0) + local_b8 * (local_c8 + local_c8);
    local_210 = (dStack_c0 + dStack_c0) * local_c8 - (dStack_d0 + dStack_d0) * local_b8;
    local_208 = 1.0 - ((local_c8 + local_c8) * local_c8 + dStack_d0 * (dStack_d0 + dStack_d0));
    local_200 = dVar7;
    FUN_146c5d0c4(&local_180,&local_230);
    FUN_146ba22f0(&local_180,&local_248,&local_e8);
    dStack_1d0 = 0.0;
    local_1c8 = 0.0;
    dStack_1c0 = 0.0;
    local_1b8 = 1.0;
    local_1e8 = local_248;
    pdStack_1e0 = (double *)uStack_240;
    local_1d8 = local_238;
    local_98 = DAT_14c8463c8;
    local_a8 = DAT_14c8463b8;
    uStack_a0 = DAT_14c8463c0;
    FUN_146bfb7f2(&dStack_1d0,&local_a8,&local_230);
    local_f8 = local_1b8;
    dStack_108 = local_1c8;
    dStack_100 = dStack_1c0;
    local_118 = local_1d8;
    dStack_110 = dStack_1d0;
    local_128 = local_1e8;
    uStack_120 = pdStack_1e0;
    local_1e8 = (undefined8 *)
                (dStack_1d0 * (dStack_1c0 + dStack_1c0) + local_1b8 * (local_1c8 + local_1c8));
    pdStack_1e0 = (double *)
                  ((dStack_1c0 + dStack_1c0) * local_1c8 - (dStack_1d0 + dStack_1d0) * local_1b8);
    local_1d8 = 1.0 - ((local_1c8 + local_1c8) * local_1c8 + dStack_1d0 * (dStack_1d0 + dStack_1d0))
    ;
    FUN_146c5d1a4(&local_180,&local_a8,&local_200);
    FUN_1482ae2be(&local_128,0,&local_a8,&local_1e8);
  }
  else {
    local_200 = dStack_d0 * (dStack_c0 + dStack_c0) + local_b8 * (local_c8 + local_c8);
    local_1f8 = (dStack_c0 + dStack_c0) * local_c8 - (dStack_d0 + dStack_d0) * local_b8;
    local_1f0 = 1.0 - ((local_c8 + local_c8) * local_c8 + dStack_d0 * (dStack_d0 + dStack_d0));
    FUN_146c5d0c4(&local_180,&local_218);
    FUN_146ba22f0(&local_180,&local_230,&local_e8);
    dStack_1d0 = 0.0;
    local_1c8 = 0.0;
    dStack_1c0 = 0.0;
    local_1b8 = 1.0;
    local_1e8 = local_230;
    pdStack_1e0 = (double *)uStack_228;
    local_1d8 = local_220;
    local_98 = DAT_14c8463c8;
    local_a8 = DAT_14c8463b8;
    uStack_a0 = DAT_14c8463c0;
    FUN_146bfb7f2(&dStack_1d0,&local_a8,&local_218);
    local_128 = local_1e8;
    uStack_120 = pdStack_1e0;
    local_118 = local_1d8;
    dStack_110 = dStack_1d0;
    dStack_108 = local_1c8;
    dStack_100 = dStack_1c0;
    local_f8 = local_1b8;
  }
  local_1e8 = &local_128;
  pdStack_1e0 = &local_130;
  local_258 = FUN_1443749f6;
  local_250 = &local_1e8;
  FUN_1484e05f6(*(undefined8 *)(param_1 + 0x48),&local_258,0);
  if ((local_90 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8a0ce FUN_148f8a0ce body=2111 status=ok
// SIG undefined FUN_148f8a0ce(void)

void FUN_148f8a0ce(longlong param_1)

{
  double *pdVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined4 local_310;
  undefined1 local_308;
  undefined1 local_300;
  longlong local_2f0;
  undefined1 local_2e4 [4];
  undefined1 local_2e0 [8];
  undefined8 local_2d8;
  undefined8 local_2d0;
  void *local_2c8;
  int local_2c0;
  undefined4 local_2bc;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  undefined1 local_260 [24];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  void *local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_2f0 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x70) + 0x390;
  local_188 = (void *)0x0;
  uStack_180 = 0;
  FUN_1482aeaa2(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x48));
  pdVar1 = *(double **)(*(longlong *)(param_1 + 0x50) + 200);
  local_198 = pdVar1[6];
  local_1c8 = *pdVar1;
  dStack_1c0 = pdVar1[1];
  local_1b8 = pdVar1[2];
  dStack_1b0 = pdVar1[3];
  local_1a8 = pdVar1[4];
  dStack_1a0 = pdVar1[5];
  dVar9 = *(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x78);
  dVar9 = (double)(-(ulonglong)(0.0 <= dVar9) & (ulonglong)dVar9);
  dVar10 = *(double *)(param_1 + 0x88) - *(double *)(param_1 + 0x70);
  dVar10 = (double)(-(ulonglong)(0.0 <= dVar10) & (ulonglong)dVar10);
  uVar7 = -(ulonglong)(dVar9 <= dVar10);
  dVar10 = (double)(~uVar7 & (ulonglong)dVar9 | uVar7 & (ulonglong)dVar10);
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar9 = (double)(-(ulonglong)(0.0 <= dVar9) & (ulonglong)dVar9);
  uVar7 = -(ulonglong)(dVar10 <= dVar9);
  dVar13 = (double)(uVar7 & (ulonglong)dVar9 | ~uVar7 & (ulonglong)dVar10);
  dVar9 = pdVar1[9] - local_1b8;
  dVar12 = pdVar1[8] - dStack_1c0;
  dVar11 = pdVar1[7] - local_1c8;
  dVar10 = SQRT(dVar9 * dVar9 + dVar11 * dVar11 + dVar12 * dVar12);
  local_1e0 = 0.0;
  local_1d8 = 0.0;
  local_1d0 = 0.0;
  dVar14 = 0.0;
  if (0.0 < dVar10) {
    local_1d0 = 1.0 / dVar10;
    local_1e0 = dVar11 * local_1d0;
    local_1d8 = dVar12 * local_1d0;
    local_1d0 = dVar9 * local_1d0;
    dVar14 = dVar10;
  }
  dVar14 = dVar14 / dVar13;
  dVar9 = 1.0;
  if (dVar14 <= 1.0) {
    dVar9 = dVar14;
  }
  dVar9 = (double)(~-(ulonglong)(dVar14 < 0.0) & (ulonglong)dVar9);
  dVar10 = (1.0 / dVar13) * (dVar9 * 25.0 + (1.0 - dVar9));
  local_1f8 = dStack_1b0 * (dStack_1a0 + dStack_1a0) + local_198 * (local_1a8 + local_1a8);
  local_1f0 = (dStack_1a0 + dStack_1a0) * local_1a8 - (dStack_1b0 + dStack_1b0) * local_198;
  local_1e8 = 1.0 - ((local_1a8 + local_1a8) * local_1a8 + dStack_1b0 * (dStack_1b0 + dStack_1b0));
  FUN_14851b8ac(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x40) + 0x58),
                &local_168);
  local_248 = local_168;
  uStack_240 = uStack_160;
  local_238 = local_158;
  uStack_230 = uStack_150;
  local_228 = local_148;
  uStack_224 = uStack_144;
  uStack_220 = uStack_140;
  uStack_21c = uStack_13c;
  local_218 = local_138;
  local_210 = local_128;
  uStack_20c = uStack_124;
  uStack_208 = uStack_120;
  uStack_204 = uStack_11c;
  local_200 = local_118;
  FUN_146c5d0c4(&local_248,local_260,&local_1f8);
  FUN_146ba22f0(&local_248,&local_2b8,&local_1c8);
  local_270 = 0.0;
  local_280 = 0.0;
  dStack_278 = 0.0;
  local_268 = 1.0;
  local_298 = local_2b8;
  dStack_290 = dStack_2b0;
  local_288 = local_2a8;
  local_158 = (double)DAT_14c8463c8;
  local_168 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  uStack_160 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  FUN_146bfb7f2(&local_280,&local_168,local_260);
  local_168 = local_280 * (local_270 + local_270) + local_268 * (dStack_278 + dStack_278);
  uStack_160 = (local_270 + local_270) * dStack_278 - (local_280 + local_280) * local_268;
  local_158 = 1.0 - ((dStack_278 + dStack_278) * dStack_278 + local_280 * (local_280 + local_280));
  FUN_146c5d1a4(&local_248,&local_2b8,&local_1e0);
  FUN_1482ae2be(&local_298,0,&local_2b8,&local_168);
  dVar9 = dStack_1a0 + dStack_1a0;
  dVar13 = local_1a8 + local_1a8;
  local_2a8 = (dVar9 * local_1a8 + local_198 * (dStack_1b0 + dStack_1b0) +
              (dVar9 * dStack_1b0 - dVar13 * local_198)) * dVar10 * 0.7071067811865475 + local_1b8;
  dStack_2b0 = ((1.0 - ((dStack_1b0 + dStack_1b0) * dStack_1b0 + dStack_1a0 * dVar9)) +
               dVar9 * local_198 + dVar13 * dStack_1b0) * dVar10 * 0.7071067811865475 + dStack_1c0;
  local_2b8 = ((dVar13 * dStack_1b0 - dVar9 * local_198) +
              (1.0 - (local_1a8 * dVar13 + dStack_1a0 * dVar9))) * dVar10 * 0.7071067811865475 +
              local_1c8;
  FUN_146ba22f0(&local_248,&local_168,&local_2b8);
  local_2a8 = local_158;
  local_2b8 = local_168;
  dStack_2b0 = uStack_160;
  dVar9 = local_298 - local_168;
  dVar13 = dStack_290 - uStack_160;
  dVar10 = local_288 - local_158;
  FUN_146c2c368(&local_168,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x30));
  FUN_146c2c4e8(&local_168);
  pvVar2 = local_188;
  local_2c8 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_180;
  local_2c0 = (int)uStack_180;
  if (lVar5 == 0) {
    local_2bc = 0;
  }
  else {
    FUN_144a06ca8(&local_2c8,uStack_180 & 0xffffffff,0);
    memcpy(local_2c8,pvVar2,lVar5 << 2);
    pvVar2 = local_2c8;
    lVar5 = (longlong)local_2c0;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        FUN_146c2c9fe(&local_168,*(undefined4 *)((longlong)pvVar2 + lVar6),1);
        lVar6 = lVar6 + 4;
      } while (lVar5 * 4 != lVar6);
    }
    if (local_2c8 != (void *)0x0) {
      FUN_1400020a8(local_2c8);
    }
  }
  local_2d0 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x30);
  local_318 = &local_2d8;
  fVar8 = (float)SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar13 * dVar13);
  local_2d8 = DAT_14c84635c;
  local_178 = (wchar_t *)CONCAT44(fVar8,fVar8);
  local_300 = 0;
  local_308 = 0;
  local_310 = 0;
  FUN_146bca2ae(&local_2d0,&local_188,&local_298,&local_178);
  lVar5 = *(longlong *)(param_1 + 0x58);
  FUN_146c2caf6(&local_168,local_2e0);
  local_178 = L"PolyMeshSetUVsChange";
  local_170 = 0x14;
  FUN_1446e940c(&local_2d8,&local_178);
  local_178 = L"UPolyEditPlanarProjectionUVActivity";
  local_170 = 0x23;
  FUN_1446e940c(local_2e4,&local_178);
  FUN_140208bae(&local_178,local_2e4,&local_2d8,L"Set UVs");
  FUN_148f74f2e(lVar5 + 0x80,&local_178,local_2e0,local_2f0);
  if (local_178 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_178 + 0x10))();
  }
  FUN_148f89234(param_1);
  *(undefined1 *)(param_1 + 0x60) = 0;
  lVar5 = FUN_14479d2ce();
  if (lVar5 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar3 = FUN_145a7ba0c();
    plVar4 = (longlong *)FUN_144718840(lVar5,uVar3);
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
  FUN_146c2c40e(&local_168);
  if (local_188 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f8a90e FUN_148f8a90e body=101 status=ok
// SIG undefined FUN_148f8a90e(void)

void FUN_148f8a90e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x378))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0xa0);
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f8a968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148f8a974 FUN_148f8a974 body=100 status=ok
// SIG undefined FUN_148f8a974(void)

void FUN_148f8a974(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = (*(byte *)(*(longlong *)(param_1 + 0x40) + 0xa8) ^ 1) * 2;
  if (*(int *)(param_1 + 100) != iVar3) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    uVar4 = FUN_14479d2ce(param_1 + 0x28);
    FUN_148f73d3d(uVar4,uVar2,uVar1,iVar3);
    *(int *)(param_1 + 100) = iVar3;
  }
  if (*(char *)(param_1 + 0x61) == '\x01') {
    FUN_148f899d8(param_1);
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return;
}



// FUNCTION 148f8a9d8 FUN_148f8a9d8 body=148 status=ok
// SIG undefined FUN_148f8a9d8(void)

undefined1 * FUN_148f8a9d8(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  FUN_14485c47a(&local_28,0);
  *(undefined8 *)(param_2 + 0x38) = local_28;
  *param_2 = *(undefined1 *)(param_1 + 0x30);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8aa6e FUN_148f8aa6e body=132 status=ok
// SIG undefined FUN_148f8aa6e(void)

void FUN_148f8aa6e(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    local_28 = param_2[8];
    uStack_24 = param_2[9];
    uStack_20 = param_2[10];
    uStack_1c = param_2[0xb];
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x310))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 800))();
      if (cVar1 != '\0') {
        FUN_148f8a0ce(param_1 + -0x30);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8aaf4 FUN_148f8aaf4 body=148 status=ok
// SIG undefined FUN_148f8aaf4(void)

undefined1 * FUN_148f8aaf4(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  FUN_14485c47a(&local_28,0);
  *(undefined8 *)(param_2 + 0x38) = local_28;
  *param_2 = *(undefined1 *)(param_1 + 0x28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8ab8a FUN_148f8ab8a body=98 status=ok
// SIG undefined FUN_148f8ab8a(void)

undefined1 FUN_148f8ab8a(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x308))();
  *(undefined1 *)(param_1 + 0x29) = 1;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined1 *)(param_1 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8abff FUN_148f8abff body=148 status=ok
// SIG undefined FUN_148f8abff(void)

undefined8 FUN_148f8abff(undefined8 param_1)

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
  uVar1 = FUN_145b9b5ec();
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



// FUNCTION 148f8ac94 FUN_148f8ac94 body=142 status=ok
// SIG undefined FUN_148f8ac94(void)

bool FUN_148f8ac94(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1484ca608();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = &LAB_144374b8c;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8ad24 FUN_148f8ad24 body=349 status=ok
// SIG undefined FUN_148f8ad24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_148f8ad24(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf3f78) {
    FUN_144b3d300(&DAT_14cbf3f78);
    if (DAT_14cbf3f78 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b71442();
      uVar3 = FUN_145b71358();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cbf3f68 = (undefined *)0x0;
      _DAT_14cbf3f74 = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cbf3f70 = local_48;
      FUN_1484d23fc(&DAT_14cbf3f40,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cbf3f40;
        if (DAT_14cbf3f68 != (undefined *)0x0) {
          _Dst = DAT_14cbf3f68;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144370177);
      _Init_thread_footer(&DAT_14cbf3f78);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cbf3f40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8ae82 FUN_148f8ae82 body=1311 status=ok
// SIG undefined FUN_148f8ae82(void)

void FUN_148f8ae82(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_168 [44];
  undefined1 local_13c [4];
  longlong local_138 [2];
  undefined8 local_128 [13];
  undefined1 local_c0 [56];
  wchar_t *local_88;
  undefined4 local_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1484416be();
  if (0 < (int)param_1[0x15]) {
    lVar4 = 0;
    do {
      FUN_148506321(*(undefined8 *)(param_1[0x14] + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_1[0x15]);
    if ((int)param_1[0x15] == 1) {
      plVar1 = (longlong *)FUN_148f732b9(param_1);
      if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(plVar1);
      }
      param_1[0x18] = (longlong)plVar1;
      FUN_140056680(&local_88,&DAT_149dfb77a);
      (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_88);
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = param_1[0x18];
      local_80 = 0;
      local_88 = (wchar_t *)0x3e800000000;
      uVar2 = FUN_14850658d(*(undefined8 *)param_1[0x14]);
      FUN_148f722f8(lVar4,uVar2,0);
      FUN_148f723a4(param_1[0x18],1);
      (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
      local_68 = 0;
      local_58 = &PTR_LAB_14ba31540;
      local_78 = FUN_144374b94;
      local_50 = param_1;
      FUN_1484c5b30(param_1[0x18] + 0x28,param_1[0x18] + 0xa8);
    }
  }
  plVar1 = (longlong *)FUN_148f8b3a2(param_1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x19] = (longlong)plVar1;
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1[0x19] + 0xcc) = 0;
  *(undefined1 *)(param_1[0x19] + 0xcb) = 0;
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x19]);
  plVar1 = (longlong *)FUN_148f735f0(param_1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x1a] = (longlong)plVar1;
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x1a]);
  if ((int)param_1[0x15] == 1) {
    lVar4 = FUN_148f7371a(param_1);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar4);
    }
    param_1[0x2c] = lVar4;
    uVar2 = (**(code **)(*param_1 + 0x390))(param_1);
    FUN_1484e44b4(lVar4,uVar2);
    FUN_148506417(&local_88,*(undefined8 *)param_1[0x14],0);
    FUN_1484e49f8(param_1[0x2c],&local_88);
    plVar1 = (longlong *)FUN_1485062af(*(undefined8 *)param_1[0x14]);
    lVar4 = param_1[0x2c];
    (**(code **)(*plVar1 + 0x520))(plVar1,local_c0,0,0);
    puVar5 = &DAT_14c846480;
    if (plVar1[0x39] != 0) {
      puVar5 = (undefined8 *)(plVar1[0x39] + 0x240);
    }
    puVar6 = local_128;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_1484e4a20(lVar4,local_128,local_c0);
    plVar1 = *(longlong **)(param_1[0x2c] + 0x28);
    FUN_140056680(local_138,&DAT_149dfb77a);
    (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,local_138);
    if (local_138[0] != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(param_1[0x2c] + 0x28));
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_148f8c15e(param_1);
  lVar4 = param_1[0x1c];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = param_1[0x1b];
    lVar7 = 0;
    do {
      FUN_1485051e4(*(undefined8 *)(lVar3 + lVar7));
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  local_88 = L"ToolName";
  local_80 = 8;
  FUN_1446e940c(local_138,&local_88);
  local_88 = L"UUVLayoutTool";
  local_80 = 0xd;
  FUN_1446e940c(local_13c,&local_88);
  FUN_140208bae(&local_88,local_13c,local_138,L"UV Layout");
  (**(code **)(*param_1 + 0x370))(param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_88 = L"OnStartUVLayoutTool";
  local_80 = 0x13;
  FUN_1446e940c(local_138,&local_88);
  local_88 = L"UUVLayoutTool";
  local_80 = 0xd;
  FUN_1446e940c(local_13c,&local_88);
  FUN_140208bae(&local_88,local_13c,local_138,
                L"Transform/Rotate/Scale existing UV Charts using various strategies");
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_88,2);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8b3a2 FUN_148f8b3a2 body=148 status=ok
// SIG undefined FUN_148f8b3a2(void)

undefined8 FUN_148f8b3a2(undefined8 param_1)

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
  uVar1 = FUN_14595bc2a();
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



// FUNCTION 148f8b438 FUN_148f8b438 body=1703 status=ok
// SIG undefined FUN_148f8b438(void)

void FUN_148f8b438(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 **ppuVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 auStack_308 [32];
  undefined1 local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  undefined1 local_2c8 [8];
  void *local_2c0;
  int local_2b8;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined8 *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  longlong *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  longlong local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 *local_268;
  undefined8 uStack_260;
  longlong *local_258;
  undefined8 uStack_250;
  longlong local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  plVar3 = param_1 + 0x1b;
  iVar4 = (int)param_1[0x1c];
  lVar13 = (longlong)iVar4;
  iVar17 = (int)param_1[0x15];
  if (iVar17 < iVar4) {
    do {
      lVar12 = lVar13 * 8;
      lVar13 = lVar13 + -1;
      FUN_143b846cc(*(undefined8 *)(*plVar3 + -8 + lVar12));
    } while (iVar17 < lVar13);
    FUN_148f8bafe(plVar3,iVar17,1);
    FUN_1484ca2a6(param_1 + 0x1f,iVar17,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_308);
  }
  local_2d8 = param_1 + 0x1f;
  FUN_1484ca2a6(local_2d8,iVar17,1);
  FUN_148f8bb7c(param_1 + 0x1d,iVar17);
  if (iVar4 < iVar17) {
    iVar17 = iVar17 - iVar4;
    lVar13 = lVar13 << 3;
    local_2d0 = param_1 + 0x1d;
    do {
      plVar5 = local_2d0;
      plVar9 = (longlong *)FUN_14001cc68(0x230,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_149fab260;
      local_2e8 = 0;
      FUN_1411b354a(plVar9 + 2,0,0,0);
      if (plVar9 == (longlong *)0x0) {
        lVar12 = *local_2d8;
        *(undefined8 *)(lVar12 + lVar13 * 2) = 0x10;
        plVar15 = *(longlong **)(lVar12 + 8 + lVar13 * 2);
        if (plVar15 != (longlong *)0x0) {
          *(undefined8 *)(lVar12 + 8 + lVar13 * 2) = 0;
LAB_148f8b592:
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          if (plVar9 != (longlong *)0x0) goto LAB_148f8b5f9;
        }
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        lVar12 = *local_2d8;
        *(longlong **)(lVar12 + lVar13 * 2) = plVar9 + 2;
        plVar15 = *(longlong **)(lVar12 + 8 + lVar13 * 2);
        if (plVar9 == plVar15) {
          LOCK();
          plVar15 = plVar9 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        else {
          *(longlong **)(lVar12 + 8 + lVar13 * 2) = plVar9;
          if (plVar15 != (longlong *)0x0) goto LAB_148f8b592;
        }
LAB_148f8b5f9:
        LOCK();
        plVar15 = plVar9 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      iStack_2a0 = 0;
      local_2a8 = (undefined8 *)0x3e800000000;
      FUN_148506727(&local_268,*(undefined8 *)(param_1[0x14] + lVar13),&local_2a8);
      FUN_146c00942(*(undefined8 *)(param_1[0x1f] + lVar13 * 2),&local_268);
      FUN_141082778(&local_268);
      uVar10 = FUN_1409ffe1d();
      lVar11 = FUN_148f8bbf3(uVar10);
      lVar12 = param_1[0x1d];
      if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar11);
      }
      *(longlong *)(lVar12 + lVar13) = lVar11;
      lVar12 = *(longlong *)(*plVar5 + lVar13);
      uVar10 = *(undefined8 *)(*local_2d8 + lVar13 * 2);
      lVar11 = *(longlong *)(*local_2d8 + 8 + lVar13 * 2);
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      plVar9 = *(longlong **)(lVar12 + 0x90);
      *(undefined8 *)(lVar12 + 0x88) = uVar10;
      *(longlong *)(lVar12 + 0x90) = lVar11;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar9 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      lVar12 = param_1[0x19];
      lVar11 = *(longlong *)(param_1[0x1d] + lVar13);
      if (DAT_14c950c29 == '\x01') {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_14689c22e();
          lVar12 = param_1[0x19];
        }
      }
      *(longlong *)(lVar11 + 0x30) = lVar12;
      FUN_1485063a5(&local_268,*(undefined8 *)(param_1[0x14] + lVar13));
      ppuVar14 = &local_268;
      puVar16 = (undefined8 *)(*(longlong *)(param_1[0x1d] + lVar13) + 0xe0);
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar16 = *ppuVar14;
        ppuVar14 = ppuVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      lVar12 = *(longlong *)(param_1[0x1d] + lVar13);
      local_2a8 = *(undefined8 **)(lVar12 + 0xa0);
      uStack_260 = *(ulonglong *)(lVar12 + 0xa8);
      local_298 = *(longlong **)(lVar12 + 0xb0);
      uStack_250 = *(undefined8 *)(lVar12 + 0xb8);
      local_248 = *(longlong *)(lVar12 + 0xc0);
      uStack_240 = *(undefined8 *)(lVar12 + 200);
      local_238 = *(undefined8 *)(lVar12 + 0xd0);
      uStack_230 = *(undefined8 *)(lVar12 + 0xd8);
      uVar7 = local_238;
      uVar8 = uStack_230;
      local_258 = local_298;
      uVar10 = uStack_250;
      local_268 = local_2a8;
      uVar6 = uStack_260;
      *(ulonglong *)(lVar12 + 0xd0) = CONCAT44(uStack_274,local_278);
      *(ulonglong *)(lVar12 + 0xd8) = CONCAT44(uStack_26c,uStack_270);
      *(undefined ***)(lVar12 + 0xc0) = &PTR_LAB_14ba31560;
      *(longlong **)(lVar12 + 200) = param_1;
      *(undefined8 *)(lVar12 + 0xb0) = 0;
      *(ulonglong *)(lVar12 + 0xb8) = CONCAT44(uStack_28c,uStack_290);
      *(code **)(lVar12 + 0xa0) = FUN_144374c56;
      *(ulonglong *)(lVar12 + 0xa8) = CONCAT44(uStack_29c,iStack_2a0);
      uStack_260._4_4_ = (undefined4)(uStack_260 >> 0x20);
      uStack_250._4_4_ = (undefined4)((ulonglong)uStack_250 >> 0x20);
      local_238._4_4_ = (undefined4)((ulonglong)local_238 >> 0x20);
      uStack_230._4_4_ = (undefined4)((ulonglong)uStack_230 >> 0x20);
      iStack_2a0 = (int)uStack_260;
      uStack_29c = uStack_260._4_4_;
      local_288 = local_248;
      uStack_280 = uStack_240;
      local_278 = (undefined4)local_238;
      uStack_274 = local_238._4_4_;
      uStack_270 = (undefined4)uStack_230;
      uStack_26c = uStack_230._4_4_;
      uStack_290 = (undefined4)uStack_250;
      uStack_28c = uStack_250._4_4_;
      uStack_260 = uVar6;
      uStack_250 = uVar10;
      local_238 = uVar7;
      uStack_230 = uVar8;
      if (local_2a8 != (undefined8 *)0x0) {
        plVar9 = local_298;
        if (local_298 == (longlong *)0x0) {
          plVar9 = &local_288;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      FUN_1446ddc76(&local_2b0,"Preview",1);
      local_2e0 = 0;
      local_2e8 = 0;
      lVar12 = FUN_1484c90fb(*(undefined8 *)(*plVar5 + lVar13),local_2b0,0,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar12);
      }
      iVar4 = (int)param_1[0x1c];
      *(uint *)(param_1 + 0x1c) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0xe4) < iVar4 + 1U) {
        FUN_148f93520(plVar3,iVar4);
      }
      lVar11 = *plVar3;
      *(longlong *)(lVar11 + (longlong)iVar4 * 8) = lVar12;
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar12);
        lVar12 = *(longlong *)(lVar11 + (longlong)iVar4 * 8);
      }
      lVar11 = *(longlong *)(param_1[0x1d] + lVar13) + 0x28;
      if (*(longlong *)(param_1[0x1d] + lVar13) == 0) {
        lVar11 = 0;
      }
      uVar10 = (**(code **)(*param_1 + 0x390))(param_1);
      FUN_148504f74(lVar12,uVar10,lVar11);
      FUN_148558526(*(undefined8 *)(lVar12 + 0x58),*(undefined8 *)(param_1[0x14] + lVar13));
      FUN_148506417(&local_2a8,*(undefined8 *)(param_1[0x14] + lVar13),0);
      uVar10 = (**(code **)(*param_1 + 0x2c8))(param_1);
      uVar10 = FUN_1485578f6(uVar10);
      puVar16 = local_2a8;
      local_2c0 = (void *)0x0;
      lVar11 = (longlong)iStack_2a0;
      local_2b8 = iStack_2a0;
      if (lVar11 == 0) {
        local_2b4 = 0;
      }
      else {
        FUN_1411312f2(&local_2c0,iStack_2a0,0);
        memcpy(local_2c0,puVar16,lVar11 << 3);
      }
      FUN_1485053d2(lVar12,&local_2c0,uVar10,0);
      FUN_14851bbe8(*(undefined8 *)(lVar12 + 0x58),*(undefined8 *)(param_1[0x1f] + lVar13 * 2),1,0xf
                   );
      uVar10 = *(undefined8 *)(lVar12 + 0x58);
      FUN_1485063a5(&local_268,*(undefined8 *)(param_1[0x14] + lVar13));
      FUN_14851b91a(uVar10,&local_268);
      local_268 = (undefined8 *)0x0;
      uStack_260 = uStack_260 & 0xffffffff00000000;
      FUN_1446efa72(&local_268,0,2);
      puVar16 = local_268;
      uStack_260 = CONCAT44(uStack_260._4_4_,2);
      *local_268 = &PTR_LAB_14aefe820;
      uVar10 = FUN_144a3f946();
      puVar16[2] = uVar10;
      *puVar16 = &PTR_FUN_14ba31580;
      puVar16[3] = param_1;
      FUN_1484d607c(lVar12 + 0x28,local_2c8);
      FUN_1449db362(&local_268);
      FUN_1485054ca(lVar12,1);
      if (local_2a8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + 8;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f8bafe FUN_148f8bafe body=124 status=ok
// SIG undefined FUN_148f8bafe(void)

void FUN_148f8bafe(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148f93520(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_148f935a6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148f8bb7c FUN_148f8bb7c body=118 status=ok
// SIG undefined FUN_148f8bb7c(void)

void FUN_148f8bb7c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148f93648(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148f936ce(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148f8bbf3 FUN_148f8bbf3 body=148 status=ok
// SIG undefined FUN_148f8bbf3(void)

undefined8 FUN_148f8bbf3(undefined8 param_1)

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
  uVar1 = FUN_1459d77d6();
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



// FUNCTION 148f8bc88 FUN_148f8bc88 body=623 status=ok
// SIG undefined FUN_148f8bc88(void)

/* WARNING: Removing unreachable block (ram,0x000148f8bec9) */

void FUN_148f8bc88(longlong param_1,char param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [39];
  char local_b1;
  longlong local_b0;
  longlong local_a8 [10];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b1 = param_2;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x28);
    FUN_140056680(&local_b0,&DAT_149dfb77a);
    (**(code **)(*plVar7 + 0x2a0))(plVar7,param_1,&local_b0);
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    FUN_1484e49a4(*(undefined8 *)(param_1 + 0x160));
  }
  plVar7 = *(longlong **)(param_1 + 200);
  FUN_140056680(&local_b0,&DAT_149dfb77a);
  (**(code **)(*plVar7 + 0x2a0))(plVar7,param_1,&local_b0);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  plVar7 = *(longlong **)(param_1 + 0xd0);
  FUN_140056680(&local_b0,&DAT_149dfb77a);
  (**(code **)(*plVar7 + 0x2a0))(plVar7,param_1,&local_b0);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar4 = 0;
    do {
      FUN_14850635b(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0xa8));
  }
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    lVar8 = 0;
    do {
      FUN_143b84538(*(undefined8 *)(lVar4 + lVar8),&local_b0);
      uVar2 = uStack_50;
      lVar5 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_148f9379a(&local_58,uVar2 & 0xffffffff);
      }
      plVar7 = (longlong *)(local_58 + lVar5 * 0x58);
      *plVar7 = local_b0;
      local_b0 = 0;
      plVar6 = local_a8;
      for (lVar5 = 10; plVar7 = plVar7 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
        *plVar7 = *plVar6;
        plVar6 = plVar6 + 1;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  if (local_b1 == '\x01') {
    FUN_148f8bef8(param_1,&local_58);
  }
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar4 = 0;
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0xa8));
  }
  FUN_148f93769(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8bef8 FUN_148f8bef8 body=298 status=ok
// SIG undefined FUN_148f8bef8(void)

void FUN_148f8bef8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_1 + 0x2c8))();
  local_50 = L"UVLayoutToolTransactionName";
  local_48 = 0x1b;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"UUVLayoutTool";
  local_48 = 0xd;
  FUN_1446e940c(local_58,&local_50);
  FUN_140208bae(&local_50,local_58,local_54,L"UV Layout Tool");
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  if (0 < (int)param_1[0x15]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_148507113(*(undefined8 *)(param_1[0x14] + lVar2 * 8),*(undefined8 *)(*param_2 + lVar1));
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x58;
    } while (lVar2 < (int)param_1[0x15]);
  }
  lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8c024 FUN_148f8c024 body=84 status=ok
// SIG undefined FUN_148f8c024(void)

void FUN_148f8c024(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x378))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x22);
  if (param_1[0x2c] != 0) {
    FUN_1484e4b14(param_1[0x2c],param_2);
    return;
  }
  return;
}



// FUNCTION 148f8c078 FUN_148f8c078 body=116 status=ok
// SIG undefined FUN_148f8c078(void)

void FUN_148f8c078(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd8);
    lVar3 = 0;
    do {
      FUN_148505016(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1484e55e8(*(longlong *)(param_1 + 0x160),param_2);
    return;
  }
  return;
}



// FUNCTION 148f8c0ec FUN_148f8c0ec body=113 status=ok
// SIG undefined FUN_148f8c0ec(void)

void FUN_148f8c0ec(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 200) == param_2) || (*(longlong *)(param_1 + 0xc0) == param_2)) {
    FUN_148f8b438(param_1);
    iVar1 = *(int *)(param_1 + 0xe0);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xd8);
      lVar3 = 0;
      do {
        FUN_1485051e4(*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
  }
  else if (*(longlong *)(param_1 + 0xd0) == param_2) {
    FUN_148f8c15e(param_1);
    return;
  }
  return;
}



// FUNCTION 148f8c15e FUN_148f8c15e body=120 status=ok
// SIG undefined FUN_148f8c15e(void)

void FUN_148f8c15e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_148f71ee6(*(undefined8 *)(param_1 + 0xd0));
  FUN_148f8b438(param_1);
  if (0 < *(int *)(param_1 + 0xe0)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + lVar3 * 8);
      lVar2 = FUN_148f71fb0(*(undefined8 *)(param_1 + 0xd0));
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar2);
      }
      *(longlong *)(lVar1 + 0x70) = lVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0xe0));
  }
  return;
}



// FUNCTION 148f8c1d6 FUN_148f8c1d6 body=202 status=ok
// SIG undefined FUN_148f8c1d6(void)

void FUN_148f8c1d6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    local_258 = 0;
    FUN_1411b354a(local_248,0,0,0);
    cVar3 = FUN_14850522a(param_2,local_248,0);
    if (cVar3 != '\0') {
      lVar1 = *(longlong *)(param_1 + 0xc0);
      uVar2 = *(undefined8 *)(param_1 + 0x160);
      iVar5 = 0;
      if (lVar1 != 0) {
        iVar4 = FUN_140e1307c(lVar1 + 0xb8,lVar1 + 0xa8);
        iVar5 = 0;
        if (iVar4 != -1) {
          iVar5 = iVar4;
        }
      }
      FUN_1484e56c6(uVar2,local_248,iVar5);
    }
    FUN_141082778(local_248);
  }
  if ((local_28 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8c2e4 FUN_148f8c2e4 body=84 status=ok
// SIG undefined FUN_148f8c2e4(void)

void FUN_148f8c2e4(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f8c32e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,1,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f8c338 FUN_148f8c338 body=84 status=ok
// SIG undefined FUN_148f8c338(void)

void FUN_148f8c338(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f8c382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,2,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f8c38c FUN_148f8c38c body=84 status=ok
// SIG undefined FUN_148f8c38c(void)

void FUN_148f8c38c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f8c3d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,3,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f8c409 FUN_148f8c409 body=148 status=ok
// SIG undefined FUN_148f8c409(void)

undefined8 FUN_148f8c409(undefined8 param_1)

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
  uVar1 = FUN_1459f56ee();
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



// FUNCTION 148f8c49e FUN_148f8c49e body=142 status=ok
// SIG undefined FUN_148f8c49e(void)

bool FUN_148f8c49e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1484cb2dc();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = &LAB_144374e4e;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8c52e FUN_148f8c52e body=3230 status=ok
// SIG undefined FUN_148f8c52e(void)

void FUN_148f8c52e(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined8 *puVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  undefined4 uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  code **ppcVar21;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 local_230;
  undefined1 local_224 [4];
  longlong *local_220;
  code *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  code *local_1d8;
  undefined8 local_1c8;
  undefined **local_1b8;
  longlong *local_1b0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  longlong *local_170;
  code *local_158;
  undefined8 local_148;
  undefined **local_138;
  longlong *local_130;
  longlong **local_128;
  code *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_1484416be();
  FUN_148506321(param_1[0x14]);
  plVar16 = (longlong *)FUN_148f8d1cd(param_1);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar16);
  }
  param_1[0x25] = (longlong)plVar16;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_118);
  if (local_118 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar18 = param_1[0x25];
  local_118 = (code *)0x0;
  uStack_110._0_4_ = 0;
  FUN_1446efa72(&local_118,0,2,0x10);
  pcVar10 = local_118;
  uStack_110 = CONCAT44(uStack_110._4_4_,2);
  *(undefined ***)local_118 = &PTR_LAB_14aedba20;
  uVar17 = FUN_144a3f946();
  *(undefined8 *)(pcVar10 + 0x10) = uVar17;
  *(undefined ***)pcVar10 = &PTR_FUN_14ba315f0;
  *(longlong **)(pcVar10 + 0x18) = param_1;
  FUN_14844f9a0(lVar18 + 0x90,&local_218,&local_118);
  FUN_1449db362(&local_118);
  FUN_148f8d262(param_1);
  FUN_148f8de38(param_1);
  plVar16 = (longlong *)FUN_148f732b9(param_1);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar16);
  }
  param_1[0x24] = (longlong)plVar16;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_118);
  if (local_118 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_148f7236e(param_1[0x24],param_1[0x2e],0);
  FUN_148f723a4(param_1[0x24],1);
  local_a8 = 0;
  local_98 = &PTR_LAB_14ba31660;
  local_b8 = FUN_144374fee;
  local_90 = param_1;
  FUN_1484c5b30(param_1[0x24] + 0x28,param_1[0x24] + 0xa8);
  plVar16 = (longlong *)FUN_148f735f0(param_1);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar16);
  }
  param_1[0x27] = (longlong)plVar16;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_118);
  if (local_118 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar18 = param_1[0x27];
  local_118 = (code *)0x0;
  uStack_110 = uStack_110 & 0xffffffff00000000;
  FUN_1446efa72(&local_118,0,2,0x10);
  pcVar10 = local_118;
  uStack_110 = CONCAT44(uStack_110._4_4_,2);
  *(undefined ***)local_118 = &PTR_LAB_14aedba20;
  uVar17 = FUN_144a3f946();
  *(undefined8 *)(pcVar10 + 0x10) = uVar17;
  *(undefined ***)pcVar10 = &PTR_FUN_14ba31680;
  *(longlong **)(pcVar10 + 0x18) = param_1;
  FUN_14844f9a0(lVar18 + 0x90,&local_218,&local_118);
  FUN_1449db362(&local_118);
  lVar18 = FUN_148f8e0f0(param_1);
  if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar18);
  }
  param_1[0x26] = lVar18;
  FUN_14485c47a(lVar18 + 0xa8,param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x24]);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x25]);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x26]);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x27]);
  FUN_148f8e186(param_1);
  param_1[0x74] = 0x3f800000;
  param_1[0x75] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x76) = 0x40000000;
  dVar1 = (double)param_1[0x4e];
  dVar2 = (double)param_1[0x51];
  dVar3 = (double)param_1[0x4c];
  dVar4 = (double)param_1[0x4f];
  dVar7 = ((double)param_1[0x4d] + (double)param_1[0x50]) * 0.5;
  plVar16 = (longlong *)FUN_1484c6256(param_1);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar16);
  }
  param_1[0x2b] = (longlong)plVar16;
  local_118 = (code *)0x0;
  uStack_110 = 0;
  local_108 = (longlong *)0x0;
  uStack_100 = 0x3ff0000000000000;
  local_f8._8_4_ = SUB84(dVar7,0);
  local_f8._0_8_ = (dVar3 + dVar4) * 0.5;
  local_f8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  local_e8 = (dVar1 + dVar2) * 0.5;
  (**(code **)(*plVar16 + 0x2b8))(plVar16,&local_118);
  local_118 = FUN_148f8e2ae;
  uStack_110 = uStack_110 & 0xffffffff00000000;
  FUN_148f8e1d2(param_1[0x2b] + 0x28,&local_218,param_1,&local_118);
  local_118 = (code *)0x0;
  uStack_110 = 0;
  uVar17 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar16 = (longlong *)FUN_14843d0eb(uVar17,0x3fe,param_1,&local_118);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar16);
  }
  param_1[0x2a] = (longlong)plVar16;
  if (local_118 != (code *)0x0) {
    FUN_1400020a8();
    plVar16 = (longlong *)param_1[0x2a];
  }
  lVar19 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar18 = lVar19 + 0x28;
  if (lVar19 == 0) {
    lVar18 = 0;
  }
  (**(code **)(*plVar16 + 800))(plVar16,param_1[0x2b],lVar18);
  lVar18 = param_1[0x25];
  uVar15 = *(undefined4 *)(lVar18 + 0xb4);
  uVar8 = *(undefined4 *)(lVar18 + 0xb8);
  uVar9 = *(undefined4 *)(lVar18 + 0xbc);
  *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(lVar18 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar15;
  *(undefined4 *)(param_1 + 0x56) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar9;
  param_1[0x57] = *(longlong *)(lVar18 + 0xc0);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(lVar18 + 200);
  FUN_148415b26(param_1[0x2a],&local_118);
  ppcVar21 = &local_118;
  plVar16 = param_1 + 0x5a;
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *plVar16 = (longlong)*ppcVar21;
    ppcVar21 = ppcVar21 + 1;
    plVar16 = plVar16 + 1;
  }
  FUN_148f8e2d0(param_1);
  local_128 = &local_220;
  local_148 = 0;
  local_138 = &PTR_LAB_14ba317c0;
  local_158 = FUN_14437521a;
  local_220 = param_1;
  local_130 = param_1;
  uVar15 = FUN_148f8e3ec(param_1[0x25] + 0x28,param_1[0x25] + 0xb0);
  *(undefined4 *)(param_1 + 0x66) = uVar15;
  local_188 = 0;
  local_178 = &PTR_LAB_14ba317e0;
  local_198 = &LAB_14437541c;
  local_170 = param_1;
  uVar15 = FUN_1484c9b00(param_1[0x25] + 0x28,param_1[0x25] + 200);
  *(undefined4 *)((longlong)param_1 + 0x334) = uVar15;
  local_1c8 = 0;
  local_1b8 = &PTR_LAB_14ba31860;
  local_1d8 = FUN_144375498;
  local_1b0 = param_1;
  FUN_148f8e4c4(param_1[0x25] + 0x28,param_1[0x25] + 0xcc);
  lVar18 = param_1[0x25];
  iVar5 = *(int *)(lVar18 + 0x30);
  if ((longlong)iVar5 != 0) {
    lVar18 = *(longlong *)(lVar18 + 0x28);
    lVar19 = 0;
    do {
      (**(code **)(**(longlong **)(lVar18 + lVar19) + 0x10))();
      lVar19 = lVar19 + 8;
    } while ((longlong)iVar5 * 8 != lVar19);
    lVar18 = param_1[0x25];
  }
  param_1[0x54] = *(longlong *)(lVar18 + 0xc0);
  uVar15 = *(undefined4 *)(lVar18 + 0xb4);
  uVar8 = *(undefined4 *)(lVar18 + 0xb8);
  uVar9 = *(undefined4 *)(lVar18 + 0xbc);
  *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(lVar18 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0x294) = uVar15;
  *(undefined4 *)(param_1 + 0x53) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x29c) = uVar9;
  *(undefined1 *)(param_1 + 0x67) = 0;
  puVar20 = (undefined8 *)FUN_14001cc68(0xd0);
  memset(puVar20 + 2,0,0xc0);
  *puVar20 = &PTR_FUN_14af11bc0;
  puVar20[0xe] = 0;
  puVar20[1] = 0;
  puVar20[2] = 0;
  puVar20[0x14] = 0;
  puVar20[0x15] = 0;
  puVar20[0x16] = 0;
  puVar20[0x17] = 0;
  *(undefined1 *)(puVar20 + 0x18) = 0;
  puVar6 = (undefined8 *)param_1[0x96];
  param_1[0x96] = (longlong)puVar20;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  uVar17 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar17 = FUN_148452156(uVar17);
  *(undefined8 *)(param_1[0x96] + 8) = uVar17;
  lVar18 = param_1[0x96];
  local_218 = *(code **)(lVar18 + 0x20);
  uStack_110 = *(undefined8 *)(lVar18 + 0x28);
  local_208 = *(longlong **)(lVar18 + 0x30);
  uStack_100 = *(undefined8 *)(lVar18 + 0x38);
  local_1f8 = *(longlong *)*(undefined1 (*) [16])(lVar18 + 0x40);
  uStack_1f0 = *(undefined8 *)(lVar18 + 0x48);
  local_e8 = *(double *)(lVar18 + 0x50);
  uStack_e0 = *(undefined8 *)(lVar18 + 0x58);
  uVar12 = local_e8;
  uVar13 = uStack_e0;
  local_f8 = *(undefined1 (*) [16])(lVar18 + 0x40);
  local_108 = local_208;
  uVar11 = uStack_100;
  local_118 = local_218;
  uVar17 = uStack_110;
  *(ulonglong *)(lVar18 + 0x50) = CONCAT44(uStack_1e4,local_1e8);
  *(ulonglong *)(lVar18 + 0x58) = CONCAT44(uStack_1dc,uStack_1e0);
  *(undefined ***)(lVar18 + 0x40) = &PTR_LAB_14ba31880;
  *(longlong **)(lVar18 + 0x48) = param_1;
  *(undefined8 *)(lVar18 + 0x30) = 0;
  *(ulonglong *)(lVar18 + 0x38) = CONCAT44(uStack_1fc,uStack_200);
  *(code **)(lVar18 + 0x20) = FUN_14437550a;
  *(ulonglong *)(lVar18 + 0x28) = CONCAT44(uStack_20c,uStack_210);
  uStack_110._4_4_ = (undefined4)(uStack_110 >> 0x20);
  uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
  local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
  uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
  local_1e8 = (undefined4)local_e8;
  uStack_1e4 = local_e8._4_4_;
  uStack_1e0 = (undefined4)uStack_e0;
  uStack_1dc = uStack_e0._4_4_;
  uStack_200 = (undefined4)uStack_100;
  uStack_1fc = uStack_100._4_4_;
  uStack_210 = (undefined4)uStack_110;
  uStack_20c = uStack_110._4_4_;
  uStack_110 = uVar17;
  uStack_100 = uVar11;
  local_e8 = (double)uVar12;
  uStack_e0 = uVar13;
  if (local_218 != (code *)0x0) {
    plVar16 = local_208;
    if (local_208 == (longlong *)0x0) {
      plVar16 = &local_1f8;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  lVar18 = param_1[0x96];
  uVar17 = FUN_1485062e8(param_1[0x14]);
  iVar5 = *(int *)(lVar18 + 0xb8);
  *(uint *)(lVar18 + 0xb8) = iVar5 + 1U;
  if (*(uint *)(lVar18 + 0xbc) < iVar5 + 1U) {
    FUN_140097524((longlong *)(lVar18 + 0xb0),iVar5);
  }
  *(undefined8 *)(*(longlong *)(lVar18 + 0xb0) + (longlong)iVar5 * 8) = uVar17;
  uVar17 = FUN_1409ffe1d();
  lVar18 = FUN_14843c80f(uVar17);
  if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar18);
  }
  param_1[0x97] = lVar18;
  local_218 = *(code **)(lVar18 + 0x80);
  uStack_110 = *(undefined8 *)(lVar18 + 0x88);
  local_208 = *(longlong **)(lVar18 + 0x90);
  uStack_100 = *(undefined8 *)(lVar18 + 0x98);
  local_f8._0_8_ = *(longlong *)(lVar18 + 0xa0);
  local_f8._8_8_ = *(undefined8 *)(lVar18 + 0xa8);
  local_e8 = *(double *)(lVar18 + 0xb0);
  uStack_e0 = *(undefined8 *)(lVar18 + 0xb8);
  uVar12 = local_e8;
  uVar13 = uStack_e0;
  local_108 = local_208;
  uVar11 = uStack_100;
  local_118 = local_218;
  uVar17 = uStack_110;
  *(ulonglong *)(lVar18 + 0xb0) = CONCAT44(uStack_1e4,local_1e8);
  *(ulonglong *)(lVar18 + 0xb8) = CONCAT44(uStack_1dc,uStack_1e0);
  *(undefined ***)(lVar18 + 0xa0) = &PTR_LAB_14aedb970;
  *(undefined1 **)(lVar18 + 0xa8) = &LAB_148441f18;
  *(undefined8 *)(lVar18 + 0x90) = 0;
  *(ulonglong *)(lVar18 + 0x98) = CONCAT44(uStack_1fc,uStack_200);
  *(undefined1 **)(lVar18 + 0x80) = &LAB_14844e6fa;
  *(ulonglong *)(lVar18 + 0x88) = CONCAT44(uStack_20c,uStack_210);
  uStack_110._4_4_ = (undefined4)(uStack_110 >> 0x20);
  uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
  local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
  uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
  local_1e8 = (undefined4)local_e8;
  uStack_1e4 = local_e8._4_4_;
  uStack_1e0 = (undefined4)uStack_e0;
  uStack_1dc = uStack_e0._4_4_;
  local_1f8 = local_f8._0_8_;
  uStack_1f0 = local_f8._8_8_;
  uStack_200 = (undefined4)uStack_100;
  uStack_1fc = uStack_100._4_4_;
  uStack_210 = (undefined4)uStack_110;
  uStack_20c = uStack_110._4_4_;
  uStack_110 = uVar17;
  uStack_100 = uVar11;
  local_e8 = (double)uVar12;
  uStack_e0 = uVar13;
  if (local_218 != (code *)0x0) {
    plVar16 = &local_1f8;
    if (local_208 != (longlong *)0x0) {
      plVar16 = local_208;
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  local_108 = (longlong *)0x0;
  local_f8._8_8_ = &LAB_148441f14;
  local_f8._0_8_ = &PTR_LAB_14aedb970;
  local_118 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(param_1[0x97] + 200,1,&local_118);
  if (local_118 != (code *)0x0) {
    plVar16 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar16 = (longlong *)local_f8;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  (**(code **)(*(longlong *)param_1[0x97] + 0x358))((longlong *)param_1[0x97],param_1[0x96]);
  (**(code **)(*param_1 + 0x2e8))(param_1,param_1[0x97],0);
  cVar14 = (**(code **)(*param_1 + 0x3b8))(param_1);
  if (cVar14 != '\0') {
    plVar16 = (longlong *)FUN_148f8e599(param_1);
    if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar16);
    }
    param_1[0x22] = (longlong)plVar16;
    FUN_140056680(&local_118,&DAT_149dfb77a);
    (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_118);
    if (local_118 != (code *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x308))(param_1,param_1[0x22]);
    FUN_14851cfa4(param_1[0x22],param_1);
    *(undefined1 *)(param_1[0x22] + 0xa8) = 1;
    *(char *)(param_1[0x22] + 0xaa) = (char)param_1[0x16];
    *(undefined1 *)(param_1[0x22] + 0xab) = *(undefined1 *)((longlong)param_1 + 0xb4);
    lVar18 = FUN_1484ec096(param_1);
    if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar18);
    }
    param_1[0x23] = lVar18;
    uVar17 = (**(code **)(*param_1 + 0x3a0))(param_1);
    FUN_1484e0ce2(lVar18,uVar17,param_1 + 0x40);
    local_238 = param_1[0x30];
    local_248 = 0;
    uStack_240 = 0;
    local_230 = 0;
    FUN_14852be87(param_1[0x23],param_1[0x22],param_1[0x2e],param_1 + 0x16);
  }
  FUN_1485051e4(param_1[0x28]);
  local_118 = (code *)0x14ba1690c;
  uStack_110._0_4_ = 8;
  FUN_1446e940c(&local_218,&local_118);
  local_118 = (code *)0x14ba2f3a0;
  uStack_110 = CONCAT44(uStack_110._4_4_,0x11);
  FUN_1446e940c(local_224,&local_118);
  FUN_140208bae(&local_118,local_224,&local_218,L"UV Projection");
  (**(code **)(*param_1 + 0x370))(param_1,&local_118);
  if (local_118 != (code *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  plVar16 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_118 = (code *)0x14ba2fe80;
  uStack_110._0_4_ = 0x1b;
  FUN_1446e940c(&local_218,&local_118);
  local_118 = (code *)0x14ba2f3a0;
  uStack_110 = CONCAT44(uStack_110._4_4_,0x11);
  FUN_1446e940c(local_224,&local_118);
  FUN_140208bae(&local_118,local_224,&local_218,
                L"Generate UVs for a Mesh by projecting onto simple geometric shapes. Ctrl+click to reposition shape. Shift+Ctrl+click to reposition shape without reorienting. Face selections can be made in the PolyEdit and TriEdit Tools. "
               );
  (**(code **)(*plVar16 + 0x340))(plVar16,&local_118,2);
  if (local_118 != (code *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  if ((local_70 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8d1cd FUN_148f8d1cd body=148 status=ok
// SIG undefined FUN_148f8d1cd(void)

undefined8 FUN_148f8d1cd(undefined8 param_1)

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
  uVar1 = FUN_1459f5602();
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



// FUNCTION 148f8d262 FUN_148f8d262 body=3028 status=ok
// SIG undefined FUN_148f8d262(void)

void FUN_148f8d262(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  int iVar8;
  undefined8 *puVar9;
  void *_Src;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double *pdVar20;
  char cVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined8 uVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  longlong **pplVar29;
  longlong *plVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStack_428 [32];
  undefined1 local_408;
  double local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  double local_3e8;
  double dStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_390;
  double local_388;
  double dStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  void *local_358;
  int local_350;
  undefined8 local_348;
  undefined4 local_340;
  code *local_338;
  longlong **local_330;
  undefined8 local_328;
  undefined4 local_320;
  longlong *local_318 [69];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  plVar22 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar22[1] = (longlong)&DAT_100000001;
  *plVar22 = (longlong)&PTR_FUN_149fab260;
  local_408 = 0;
  FUN_1411b354a(plVar22 + 2,0,0,0);
  if (plVar22 == (longlong *)0x0) {
    param_1[0x2e] = 0x10;
    plVar23 = (longlong *)param_1[0x2f];
    if (plVar23 != (longlong *)0x0) {
      param_1[0x2f] = 0;
LAB_148f8d35d:
      LOCK();
      plVar30 = plVar23 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
      if (plVar22 != (longlong *)0x0) goto LAB_148f8d3ca;
    }
  }
  else {
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
    param_1[0x2e] = (longlong)(plVar22 + 2);
    plVar23 = (longlong *)param_1[0x2f];
    if (plVar22 == plVar23) {
      LOCK();
      plVar23 = plVar22 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    else {
      param_1[0x2f] = (longlong)plVar22;
      if (plVar23 != (longlong *)0x0) goto LAB_148f8d35d;
    }
LAB_148f8d3ca:
    LOCK();
    plVar23 = plVar22 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  local_320 = 0;
  local_328 = 0x3e800000000;
  FUN_148506727(local_318,param_1[0x14]);
  plVar22 = param_1 + 0x2e;
  FUN_146c00942(*plVar22,local_318);
  FUN_141082778(local_318);
  FUN_1485063a5(local_318,param_1[0x14]);
  pplVar29 = local_318;
  plVar23 = param_1 + 0x40;
  for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
    *plVar23 = (longlong)*pplVar29;
    pplVar29 = pplVar29 + 1;
    plVar23 = plVar23 + 1;
  }
  plVar23 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar23[1] = (longlong)&DAT_100000001;
  *plVar23 = (longlong)&PTR_FUN_14aee5340;
  plVar23[2] = 0;
  plVar23[3] = 0;
  if (plVar23 == (longlong *)0x0) {
    param_1[0x30] = 0x10;
    plVar30 = (longlong *)param_1[0x31];
    if (plVar30 != (longlong *)0x0) {
      param_1[0x31] = 0;
LAB_148f8d4b8:
      LOCK();
      plVar2 = plVar30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar30)(plVar30);
        LOCK();
        piVar1 = (int *)((longlong)plVar30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
        }
      }
      if (plVar23 != (longlong *)0x0) goto LAB_148f8d525;
    }
  }
  else {
    LOCK();
    *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
    UNLOCK();
    param_1[0x30] = (longlong)(plVar23 + 2);
    plVar30 = (longlong *)param_1[0x31];
    if (plVar23 == plVar30) {
      LOCK();
      plVar30 = plVar23 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    else {
      param_1[0x31] = (longlong)plVar23;
      if (plVar30 != (longlong *)0x0) goto LAB_148f8d4b8;
    }
LAB_148f8d525:
    LOCK();
    plVar30 = plVar23 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      (**(code **)*plVar23)(plVar23);
      LOCK();
      piVar1 = (int *)((longlong)plVar23 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  cVar21 = (**(code **)(*param_1 + 0x3b8))(param_1);
  if (cVar21 != '\0') {
    uVar24 = (**(code **)(*param_1 + 0x3c0))(param_1);
    local_338 = FUN_1443755c4;
    local_330 = local_318;
    local_318[0] = param_1;
    FUN_148385b4a(uVar24,param_1[0x2e],&local_338,0);
    local_348 = *(undefined8 *)param_1[0x30];
    local_340 = *(undefined4 *)((undefined8 *)param_1[0x30] + 1);
    FUN_146bc855c(param_1 + 0x36);
  }
  plVar23 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar23[1] = (longlong)&DAT_100000001;
  *plVar23 = (longlong)&PTR_FUN_14aee5340;
  plVar23[2] = 0;
  plVar23[3] = 0;
  if (plVar23 == (longlong *)0x0) {
    param_1[0x32] = 0x10;
    plVar30 = (longlong *)param_1[0x33];
    if (plVar30 != (longlong *)0x0) {
      param_1[0x33] = 0;
LAB_148f8d609:
      LOCK();
      plVar2 = plVar30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar30)(plVar30);
        LOCK();
        piVar1 = (int *)((longlong)plVar30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
        }
      }
      if (plVar23 != (longlong *)0x0) goto LAB_148f8d676;
    }
  }
  else {
    LOCK();
    *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
    UNLOCK();
    param_1[0x32] = (longlong)(plVar23 + 2);
    plVar30 = (longlong *)param_1[0x33];
    if (plVar23 == plVar30) {
      LOCK();
      plVar30 = plVar23 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    else {
      param_1[0x33] = (longlong)plVar23;
      if (plVar30 != (longlong *)0x0) goto LAB_148f8d609;
    }
LAB_148f8d676:
    LOCK();
    plVar30 = plVar23 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      (**(code **)*plVar23)(plVar23);
      LOCK();
      piVar1 = (int *)((longlong)plVar23 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  FUN_146c36aac(*plVar22,param_1[0x30],param_1[0x32]);
  lVar26 = *plVar22;
  plVar23 = (longlong *)FUN_14001cc68(0xe0,0x10);
  plVar23[1] = (longlong)&DAT_100000001;
  *plVar23 = (longlong)&PTR_FUN_14af7cde0;
  FUN_146ba21d6(plVar23 + 2,lVar26,0);
  if (plVar23 == (longlong *)0x0) {
    param_1[0x34] = 0x10;
    plVar30 = (longlong *)param_1[0x35];
    if (plVar30 == (longlong *)0x0) goto LAB_148f8d790;
    param_1[0x35] = 0;
LAB_148f8d706:
    LOCK();
    plVar2 = plVar30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar30)(plVar30);
      LOCK();
      piVar1 = (int *)((longlong)plVar30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
    }
    if (plVar23 == (longlong *)0x0) goto LAB_148f8d790;
  }
  else {
    LOCK();
    *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
    UNLOCK();
    param_1[0x34] = (longlong)(plVar23 + 2);
    plVar30 = (longlong *)param_1[0x35];
    if (plVar23 == plVar30) {
      LOCK();
      plVar30 = plVar23 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    else {
      param_1[0x35] = (longlong)plVar23;
      if (plVar30 != (longlong *)0x0) goto LAB_148f8d706;
    }
  }
  LOCK();
  plVar30 = plVar23 + 1;
  *(int *)plVar30 = (int)*plVar30 + -1;
  UNLOCK();
  if ((int)*plVar30 == 0) {
    (**(code **)*plVar23)(plVar23);
    LOCK();
    piVar1 = (int *)((longlong)plVar23 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
  }
LAB_148f8d790:
  lVar26 = param_1[0x34];
  if (*(int *)(param_1[0x30] + 8) < 1) {
    FUN_146bee918(lVar26);
    *(ulonglong *)(lVar26 + 0x10) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(lVar26 + 8) + 0x214) +
               *(int *)(*(longlong *)(lVar26 + 8) + 0x218));
  }
  else {
    FUN_1484c10de(lVar26);
  }
  puVar9 = (undefined8 *)param_1[0x32];
  iVar8 = *(int *)(puVar9 + 1);
  if ((longlong)iVar8 < 1) {
    lVar26 = *plVar22;
    uVar25 = *(int *)(lVar26 + 0x20) * 0x200 + *(int *)(lVar26 + 0x24);
    uVar27 = 0;
    if ((uVar25 != 0) &&
       (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar26 + 0x28) - 1U))) {
      uVar28 = 1;
      uVar31 = 1;
      if (1 < (int)uVar25) {
        uVar28 = uVar25;
      }
      do {
        uVar27 = uVar28;
        if (uVar28 == uVar31) break;
        uVar33 = uVar31 >> 9;
        uVar34 = uVar31 & 0x1ff;
        uVar27 = uVar31;
        uVar31 = uVar31 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar26 + 0x28))[uVar33] +
                                           (ulonglong)uVar34 * 2) - 1U));
    }
    if (uVar27 == uVar25) {
      dVar35 = -1.79769313486232e+308;
      dVar16 = -1.79769313486232e+308;
      dVar14 = -1.79769313486232e+308;
      uVar40 = 0xffffffff;
      uVar42 = 0x7fefffff;
      dVar12 = 1.79769313486232e+308;
      dVar15 = 1.79769313486232e+308;
    }
    else {
      local_3a8 = (double)param_1[0x48];
      dStack_3a0 = (double)param_1[0x49];
      local_3b8 = (double)param_1[0x4a];
      dStack_3b0 = (double)param_1[0x4b];
      local_3e8 = (double)param_1[0x40];
      dStack_3e0 = (double)param_1[0x41];
      dVar11 = (double)param_1[0x42];
      local_3c8 = (double)param_1[0x44];
      dStack_3c0 = (double)param_1[0x45];
      pdVar3 = (double *)(param_1 + 0x43);
      local_3d8 = *(undefined4 *)pdVar3;
      uStack_3d4 = *(undefined4 *)((longlong)param_1 + 0x21c);
      dVar7 = *pdVar3;
      uStack_3d0 = SUB84(dVar7,0);
      uStack_3cc = (undefined4)((ulonglong)dVar7 >> 0x20);
      local_3f8 = (double)param_1[0x46];
      uVar41 = 0xffffffff;
      uVar43 = 0x7fefffff;
      dVar36 = -1.79769313486232e+308;
      dVar17 = 1.79769313486232e+308;
      dVar18 = -1.79769313486232e+308;
      dVar19 = -1.79769313486232e+308;
      dVar13 = 1.79769313486232e+308;
      do {
        lVar10 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + (ulonglong)(uVar27 >> 9) * 8);
        pdVar6 = (double *)(lVar10 + (ulonglong)(uVar27 & 0x1ff) * 0x18);
        dVar35 = *pdVar6 * local_3a8;
        dVar16 = pdVar6[1] * dStack_3a0;
        dVar14 = *(double *)(lVar10 + 0x10 + (ulonglong)(uVar27 & 0x1ff) * 0x18) * local_3b8;
        dVar37 = dVar16 * local_3e8 - dStack_3e0 * dVar35;
        dVar38 = dVar14 * dStack_3e0 - dVar11 * dVar16;
        dVar39 = dVar35 * dVar11 - local_3e8 * dVar14;
        dVar38 = dVar38 + dVar38;
        dVar39 = dVar39 + dVar39;
        dVar37 = dVar37 + dVar37;
        dVar35 = (dVar37 * dStack_3e0 - dVar39 * dVar11) + *pdVar3 * dVar38 + dVar35 + local_3c8;
        dVar16 = (dVar11 * dVar38 - local_3e8 * dVar37) + dVar7 * dVar39 + dVar16 + dStack_3c0;
        dVar15 = dVar35;
        if (dVar17 <= dVar35) {
          dVar15 = dVar17;
        }
        if (dVar35 <= dVar19) {
          dVar35 = dVar19;
        }
        dVar12 = dVar16;
        if (dVar13 <= dVar16) {
          dVar12 = dVar13;
        }
        dVar14 = dVar37 * *pdVar3 + dVar14 + (dVar39 * local_3e8 - dVar38 * dStack_3e0) + local_3f8;
        if (dVar16 <= dVar18) {
          dVar16 = dVar18;
        }
        uVar40 = SUB84(dVar14,0);
        uVar42 = (int)((ulonglong)dVar14 >> 0x20);
        if ((double)CONCAT44(uVar43,uVar41) <= dVar14) {
          uVar40 = uVar41;
          uVar42 = uVar43;
        }
        if (dVar14 <= dVar36) {
          dVar14 = dVar36;
        }
        uVar28 = uVar27 + 1;
        if ((int)(uVar27 + 1) < (int)uVar25) {
          uVar28 = uVar25;
        }
        do {
          uVar31 = uVar28;
          if (uVar28 - 1 == uVar27) break;
          uVar27 = uVar27 + 1;
          uVar31 = uVar27;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar26 + 0x28) +
                                               (ulonglong)(uVar27 >> 9) * 8) +
                                             (ulonglong)(uVar27 & 0x1ff) * 2) - 1U));
        uVar27 = uVar31;
        uVar41 = uVar40;
        uVar43 = uVar42;
        dVar36 = dVar14;
        dVar17 = dVar15;
        dVar18 = dVar16;
        dVar19 = dVar35;
        dVar13 = dVar12;
      } while (uVar27 != uVar25);
    }
  }
  else {
    local_358 = (void *)0x0;
    _Src = (void *)*puVar9;
    local_350 = iVar8;
    FUN_144a06ca8(&local_358,iVar8,0);
    memcpy(local_358,_Src,(longlong)iVar8 << 2);
    if ((longlong)local_350 == 0) {
      dVar35 = -1.79769313486232e+308;
      dVar16 = -1.79769313486232e+308;
      uVar40 = 0xffffffff;
      uVar42 = 0x7fefffff;
      dVar12 = 1.79769313486232e+308;
      dVar15 = 1.79769313486232e+308;
      dVar14 = -1.79769313486232e+308;
    }
    else {
      local_3b8 = (double)param_1[0x48];
      dStack_3b0 = (double)param_1[0x49];
      local_3c8 = (double)param_1[0x4a];
      dStack_3c0 = (double)param_1[0x4b];
      pdVar3 = (double *)(param_1 + 0x42);
      uStack_370 = *(undefined4 *)pdVar3;
      uStack_36c = *(undefined4 *)((longlong)param_1 + 0x214);
      local_3e8 = *pdVar3;
      uStack_360 = *(undefined4 *)(param_1 + 0x43);
      uStack_35c = *(undefined4 *)((longlong)param_1 + 0x21c);
      dStack_3e0 = (double)param_1[0x43];
      pdVar6 = (double *)(param_1 + 0x43);
      local_3d8 = *(undefined4 *)pdVar6;
      uStack_3d4 = *(undefined4 *)((longlong)param_1 + 0x21c);
      dVar7 = *pdVar6;
      uStack_3d0 = SUB84(dVar7,0);
      uStack_3cc = (undefined4)((ulonglong)dVar7 >> 0x20);
      pdVar4 = (double *)(param_1 + 0x40);
      local_368 = *(undefined4 *)pdVar4;
      uStack_364 = *(undefined4 *)((longlong)param_1 + 0x204);
      local_3f8 = *pdVar4;
      pdVar20 = (double *)(param_1 + 0x41);
      uStack_3f0 = *(undefined4 *)pdVar20;
      uStack_3ec = *(undefined4 *)((longlong)param_1 + 0x20c);
      local_388 = (double)param_1[0x44];
      dStack_380 = (double)param_1[0x45];
      local_390 = (double)param_1[0x46];
      dVar36 = 1.79769313486232e+308;
      lVar26 = 0;
      dVar35 = -1.79769313486232e+308;
      dVar14 = -1.79769313486232e+308;
      dVar17 = 1.79769313486232e+308;
      dVar18 = -1.79769313486232e+308;
      dVar19 = 1.79769313486232e+308;
      do {
        local_3a8 = dVar14;
        lVar10 = *(longlong *)
                  (*(longlong *)(param_1[0x2e] + 0x10) +
                  (ulonglong)(*(uint *)((longlong)local_358 + lVar26) >> 9) * 8);
        uVar32 = (ulonglong)(*(uint *)((longlong)local_358 + lVar26) & 0x1ff);
        pdVar5 = (double *)(lVar10 + uVar32 * 0x18);
        dVar37 = *pdVar5 * local_3b8;
        dVar15 = pdVar5[1] * dStack_3b0;
        dVar11 = *(double *)(lVar10 + 0x10 + uVar32 * 0x18) * local_3c8;
        dVar13 = dVar15 * local_3f8 - *pdVar20 * dVar37;
        dVar14 = dVar11 * *pdVar20 - *pdVar3 * dVar15;
        dVar16 = dVar37 * local_3e8 - *pdVar4 * dVar11;
        dVar14 = dVar14 + dVar14;
        dVar16 = dVar16 + dVar16;
        dVar13 = dVar13 + dVar13;
        dVar37 = (dVar13 * *pdVar20 - dVar16 * *pdVar3) + *pdVar6 * dVar14 + dVar37 + local_388;
        dVar12 = (local_3e8 * dVar14 - *pdVar4 * dVar13) + dVar7 * dVar16 + dVar15 + dStack_380;
        dVar14 = dVar13 * *pdVar6 + dVar11 + (dVar16 * local_3f8 - dVar14 * *pdVar20) + local_390;
        dVar15 = dVar37;
        if (dVar17 <= dVar37) {
          dVar15 = dVar17;
        }
        if (dVar37 <= dVar35) {
          dVar37 = dVar35;
        }
        dVar35 = dVar37;
        dVar16 = dVar12;
        if (dVar12 <= dVar18) {
          dVar16 = dVar18;
        }
        uVar40 = SUB84(dVar14,0);
        uVar42 = (undefined4)((ulonglong)dVar14 >> 0x20);
        if (dVar36 <= dVar14) {
          uVar40 = SUB84(dVar36,0);
          uVar42 = (undefined4)((ulonglong)dVar36 >> 0x20);
        }
        if (dVar14 <= local_3a8) {
          dVar14 = local_3a8;
        }
        if (dVar19 <= dVar12) {
          dVar12 = dVar19;
        }
        lVar26 = lVar26 + 4;
        dVar36 = (double)CONCAT44(uVar42,uVar40);
        dVar17 = dVar15;
        dVar18 = dVar16;
        dVar19 = dVar12;
        local_378 = uStack_3f0;
        uStack_374 = uStack_3ec;
      } while ((longlong)local_350 * 4 != lVar26);
    }
    if (local_358 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  param_1[0x4c] = (longlong)dVar15;
  param_1[0x4d] = (longlong)dVar12;
  param_1[0x4e] = CONCAT44(uVar42,uVar40);
  param_1[0x4f] = (longlong)dVar35;
  param_1[0x50] = (longlong)dVar16;
  param_1[0x51] = (longlong)dVar14;
  lVar26 = param_1[0x25];
  *(double *)(lVar26 + 0xb0) = dVar35 - dVar15;
  *(double *)(lVar26 + 0xb8) = dVar16 - dVar12;
  *(double *)(lVar26 + 0xc0) = dVar14 - (double)CONCAT44(uVar42,uVar40);
  if ((local_f0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f8de38 FUN_148f8de38 body=695 status=ok
// SIG undefined FUN_148f8de38(void)

void FUN_148f8de38(longlong *param_1)

{
  byte bVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code **ppcVar6;
  undefined1 auStack_d8 [32];
  code *local_b8;
  undefined4 local_b0;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = FUN_1409ffe1d();
  lVar3 = FUN_148f8e62e(uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x2c] = lVar3;
  if ((param_1 != (longlong *)0x0) && ((bVar1 & 1) != 0)) {
    FUN_14689c22e(param_1);
  }
  *(longlong **)(lVar3 + 0x30) = param_1;
  lVar3 = FUN_1484c5d32(param_1[0x2c]);
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(lVar3);
  }
  param_1[0x28] = lVar3;
  lVar4 = param_1[0x2c] + 0x28;
  if (param_1[0x2c] == 0) {
    lVar4 = 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_148504f74(lVar3,uVar2,lVar4);
  FUN_148558526(*(undefined8 *)(param_1[0x28] + 0x58),param_1[0x14]);
  local_b8 = FUN_148f8e7a0;
  local_b0 = 0;
  FUN_148f8e6c4(param_1[0x28] + 0x28,&local_48,param_1);
  FUN_14851b65c(*(undefined8 *)(param_1[0x28] + 0x58),1);
  FUN_148506417(&local_48,param_1[0x14],0);
  lVar3 = param_1[0x28];
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar2 = FUN_1485578f6(uVar2);
  _Src = local_48;
  local_58 = (void *)0x0;
  local_50 = local_40;
  if ((longlong)local_40 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1411312f2(&local_58,local_40,0);
    memcpy(local_58,_Src,(longlong)local_40 << 3);
  }
  FUN_1485053d2(lVar3,&local_58,uVar2,0);
  FUN_14851bbe8(*(undefined8 *)(param_1[0x28] + 0x58),param_1[0x2e],1,0xf);
  uVar2 = *(undefined8 *)(param_1[0x28] + 0x58);
  plVar5 = param_1 + 0x40;
  ppcVar6 = &local_b8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *ppcVar6 = (code *)*plVar5;
    plVar5 = plVar5 + 1;
    ppcVar6 = ppcVar6 + 1;
  }
  FUN_14851b91a(uVar2);
  FUN_1485054ca(param_1[0x28],1);
  lVar3 = FUN_1484ec096(param_1);
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(lVar3);
  }
  param_1[0x2d] = lVar3;
  plVar5 = param_1 + 0x40;
  ppcVar6 = &local_b8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *ppcVar6 = (code *)*plVar5;
    plVar5 = plVar5 + 1;
    ppcVar6 = ppcVar6 + 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_1484e0ce2(lVar3,uVar2,&local_b8);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8e0f0 FUN_148f8e0f0 body=148 status=ok
// SIG undefined FUN_148f8e0f0(void)

undefined8 FUN_148f8e0f0(undefined8 param_1)

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
  uVar1 = FUN_14599aaa0();
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



// FUNCTION 148f8e186 FUN_148f8e186 body=76 status=ok
// SIG undefined FUN_148f8e186(void)

void FUN_148f8e186(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_148f71ee6(*(undefined8 *)(param_1 + 0x138));
  lVar2 = FUN_148f71fb0(*(undefined8 *)(param_1 + 0x138));
  lVar1 = *(longlong *)(param_1 + 0x140);
  if ((lVar2 != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_14689c22e(lVar2);
  }
  *(longlong *)(lVar1 + 0x70) = lVar2;
  return;
}



// FUNCTION 148f8e1d2 FUN_148f8e1d2 body=218 status=ok
// SIG undefined FUN_148f8e1d2(void)

undefined8
FUN_148f8e1d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aeff220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14ba316f0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1484d65de(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8e2ae FUN_148f8e2ae body=33 status=ok
// SIG undefined FUN_148f8e2ae(void)

void FUN_148f8e2ae(longlong param_1)

{
  FUN_1485051e4(*(undefined8 *)(param_1 + 0x140));
  *(undefined1 *)(param_1 + 0x338) = 1;
  return;
}



// FUNCTION 148f8e2d0 FUN_148f8e2d0 body=283 status=ok
// SIG undefined FUN_148f8e2d0(void)

void FUN_148f8e2d0(longlong param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint *puVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x128);
  uVar1 = *(uint *)(lVar5 + 0xcc);
  if ((ulonglong)uVar1 < 4) {
    puVar6 = &switchD_148f8e2f8::switchdataD_14ba31968;
    switch(uVar1) {
    case 0:
      *(undefined8 *)(lVar5 + 0xc0) = *(undefined8 *)(param_1 + 0x2b8);
      uVar2 = *(undefined4 *)(param_1 + 0x2ac);
      uVar3 = *(undefined4 *)(param_1 + 0x2b0);
      uVar4 = *(undefined4 *)(param_1 + 0x2b4);
      *(undefined4 *)(lVar5 + 0xb0) = *(undefined4 *)(param_1 + 0x2a8);
      *(undefined4 *)(lVar5 + 0xb4) = uVar2;
      *(undefined4 *)(lVar5 + 0xb8) = uVar3;
      *(undefined4 *)(lVar5 + 0xbc) = uVar4;
      UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x150) + 0x330);
                    /* WARNING: Could not recover jumptable at 0x000148f8e333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (*(longlong **)(param_1 + 0x150),param_1 + 0x2d0,0x14ba31901,UNRECOVERED_JUMPTABLE);
      return;
    case 2:
      FUN_148f8f6e4(param_1,0);
      return;
    case 3:
      FUN_148f8f6e4(param_1,CONCAT71((int7)((ulonglong)
                                            ((longlong)&switchD_148f8e2f8::switchdataD_14ba31968 +
                                            (longlong)
                                            (int)(&switchD_148f8e2f8::switchdataD_14ba31968)[uVar1])
                                           >> 8),1));
      return;
    }
    if ((((*(double *)(lVar5 + 0x108) != DAT_14c8464e0) ||
         (NAN(*(double *)(lVar5 + 0x108)) || NAN(DAT_14c8464e0))) ||
        (*(double *)(lVar5 + 0x110) != DAT_14c8464e8)) ||
       (((NAN(*(double *)(lVar5 + 0x110)) || NAN(DAT_14c8464e8) ||
         (*(double *)(lVar5 + 0x118) != DAT_14c8464f0)) ||
        (NAN(*(double *)(lVar5 + 0x118)) || NAN(DAT_14c8464f0))))) {
      puVar6 = *(uint **)(lVar5 + 0x118);
      *(uint **)(lVar5 + 0xc0) = puVar6;
      *(undefined4 *)(lVar5 + 0xb0) = *(undefined4 *)(lVar5 + 0x108);
      *(undefined4 *)(lVar5 + 0xb4) = *(undefined4 *)(lVar5 + 0x10c);
      *(undefined4 *)(lVar5 + 0xb8) = *(undefined4 *)(lVar5 + 0x110);
      *(undefined4 *)(lVar5 + 0xbc) = *(undefined4 *)(lVar5 + 0x114);
      lVar5 = *(longlong *)(param_1 + 0x128) + 0x130;
    }
    else {
      *(undefined8 *)(lVar5 + 0xc0) = *(undefined8 *)(param_1 + 0x2b8);
      uVar2 = *(undefined4 *)(param_1 + 0x2ac);
      uVar3 = *(undefined4 *)(param_1 + 0x2b0);
      uVar4 = *(undefined4 *)(param_1 + 0x2b4);
      *(undefined4 *)(lVar5 + 0xb0) = *(undefined4 *)(param_1 + 0x2a8);
      *(undefined4 *)(lVar5 + 0xb4) = uVar2;
      *(undefined4 *)(lVar5 + 0xb8) = uVar3;
      *(undefined4 *)(lVar5 + 0xbc) = uVar4;
      lVar5 = param_1 + 0x2d0;
    }
                    /* WARNING: Could not recover jumptable at 0x000148f8e386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x150) + 0x330))
              (*(longlong **)(param_1 + 0x150),lVar5,CONCAT71((int7)((ulonglong)puVar6 >> 8),1));
    return;
  }
  return;
}



// FUNCTION 148f8e3ec FUN_148f8e3ec body=215 status=ok
// SIG undefined FUN_148f8e3ec(void)

int FUN_148f8e3ec(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xf0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_148f93b44(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8e4c4 FUN_148f8e4c4 body=212 status=ok
// SIG undefined FUN_148f8e4c4(void)

void FUN_148f8e4c4(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_148f93f02(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8e599 FUN_148f8e599 body=148 status=ok
// SIG undefined FUN_148f8e599(void)

undefined8 FUN_148f8e599(undefined8 param_1)

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
  uVar1 = FUN_1458bce4c();
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



// FUNCTION 148f8e62e FUN_148f8e62e body=148 status=ok
// SIG undefined FUN_148f8e62e(void)

undefined8 FUN_148f8e62e(undefined8 param_1)

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
  uVar1 = FUN_1459d89a6();
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



// FUNCTION 148f8e6c4 FUN_148f8e6c4 body=218 status=ok
// SIG undefined FUN_148f8e6c4(void)

undefined8
FUN_148f8e6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aefe820;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14ba318a0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1484d607c(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8e7a0 FUN_148f8e7a0 body=527 status=ok
// SIG undefined FUN_148f8e7a0(void)

void FUN_148f8e7a0(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 **local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 **local_70;
  longlong local_68 [2];
  float local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar1 = (double)param_1[0x4f];
  dVar2 = (double)param_1[0x4c];
  dVar3 = (double)param_1[0x50];
  dVar4 = (double)param_1[0x4d];
  dVar5 = (double)param_1[0x51];
  dVar6 = (double)param_1[0x4e];
  lVar11 = FUN_14851bd54(*(undefined8 *)(param_1[0x28] + 0x58));
  lVar9 = *(longlong *)(lVar11 + 0x208);
  local_48 = lVar11;
  uVar10 = FUN_140e1307c(param_1[0x24] + 0xb8,param_1[0x24] + 0xa8);
  local_50 = 0;
  if (uVar10 == 0xffffffff) {
    uVar10 = 0;
  }
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(lVar9 + 0x28))) {
    local_50 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + (ulonglong)uVar10 * 8);
  }
  local_68[1] = 0x40000000ff0ff00f;
  lVar9 = param_1[0x2d];
  if (*(int *)(param_1[0x30] + 8) < 1) {
    local_b0 = &local_98;
    local_90 = &local_50;
    local_88 = local_68;
    puVar13 = &local_b8;
    pcVar12 = FUN_144375826;
  }
  else {
    local_70 = &local_98;
    local_88 = &local_50;
    local_80 = local_68;
    puVar13 = &local_78;
    pcVar12 = FUN_1443755fe;
    local_90 = param_1;
  }
  local_98 = &local_48;
  *puVar13 = pcVar12;
  iVar7 = *(int *)(lVar11 + 0x1d0);
  iVar8 = *(int *)(lVar11 + 0x1d4);
  local_68[0] = lVar11;
  local_58 = (float)(SQRT((dVar5 - dVar6) * (dVar5 - dVar6) +
                          (dVar1 - dVar2) * (dVar1 - dVar2) + (dVar3 - dVar4) * (dVar3 - dVar4)) *
                    0.01) * 0.1;
  FUN_140056680(local_a8,L"UVSeams");
  local_c8 = 1;
  FUN_1484e2e98(lVar9,local_a8,iVar7 * 0x200 + iVar8,puVar13);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8e9b0 FUN_148f8e9b0 body=733 status=ok
// SIG undefined FUN_148f8e9b0(void)

void FUN_148f8e9b0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined8 *local_b8 [12];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)param_1[0x24];
  FUN_140056680(local_b8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,local_b8);
  if (local_b8[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x25];
  *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(lVar4 + 0xc0);
  *(undefined4 *)(lVar4 + 0x108) = *(undefined4 *)(lVar4 + 0xb0);
  *(undefined4 *)(lVar4 + 0x10c) = *(undefined4 *)(lVar4 + 0xb4);
  *(undefined4 *)(lVar4 + 0x110) = *(undefined4 *)(lVar4 + 0xb8);
  *(undefined4 *)(lVar4 + 0x114) = *(undefined4 *)(lVar4 + 0xbc);
  *(undefined1 *)(param_1[0x25] + 0x120) = *(undefined1 *)(param_1[0x25] + 200);
  FUN_148415b26(param_1[0x2a],local_b8);
  ppuVar5 = local_b8;
  puVar6 = (undefined8 *)(param_1[0x25] + 0x130);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *ppuVar5;
    ppuVar5 = ppuVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  plVar3 = (longlong *)param_1[0x25];
  FUN_140056680(local_b8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,local_b8);
  if (local_b8[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x27];
  FUN_140056680(local_b8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,local_b8);
  if (local_b8[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1484e0e5e(param_1[0x2d]);
  FUN_14850635b(param_1[0x14]);
  FUN_143b84538(param_1[0x28],local_b8);
  if ((char)param_2 == '\x01') {
    lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_58 = L"UVProjectionToolTransactionName";
    local_50 = 0x1f;
    FUN_1446e940c(local_bc,&local_58);
    local_58 = L"UUVProjectionTool";
    local_50 = 0x11;
    FUN_1446e940c(local_c0,&local_58);
    FUN_140208bae(&local_58,local_c0,local_bc,L"Project UVs");
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_b8[0] != (undefined8 *)0x0) {
      FUN_148507113(param_1[0x14]);
    }
    cVar1 = (**(code **)(*param_1 + 0x3b8))(param_1);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x3c0))(param_1);
      FUN_14855093c(param_1,param_1[0x14],uVar2);
    }
    lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  }
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar3 = (longlong *)FUN_148451354(uVar2);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,param_1);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_1484cb4bc(param_1,param_2);
  if (local_b8[0] != (undefined8 *)0x0) {
    (**(code **)*local_b8[0])(local_b8[0],1);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8eca6 FUN_148f8eca6 body=924 status=ok
// SIG undefined FUN_148f8eca6(void)

undefined8 * FUN_148f8eca6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
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
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  longlong *_Dst;
  int iVar25;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  _Dst = (longlong *)FUN_14001cc68(0x198);
  memset(_Dst,0,0x198);
  FUN_148f944c4(_Dst);
  lVar8 = *(longlong *)(param_1 + 8);
  *(undefined1 *)(_Dst + 0x20) = *(undefined1 *)(*(longlong *)(lVar8 + 0x128) + 0xa8);
  uVar11 = *(undefined4 *)(lVar8 + 0x204);
  uVar12 = *(undefined4 *)(lVar8 + 0x208);
  uVar13 = *(undefined4 *)(lVar8 + 0x20c);
  uVar14 = *(undefined4 *)(lVar8 + 0x210);
  uVar15 = *(undefined4 *)(lVar8 + 0x214);
  uVar16 = *(undefined4 *)(lVar8 + 0x218);
  uVar17 = *(undefined4 *)(lVar8 + 0x21c);
  uVar18 = *(undefined4 *)(lVar8 + 0x220);
  uVar19 = *(undefined4 *)(lVar8 + 0x224);
  uVar20 = *(undefined4 *)(lVar8 + 0x228);
  uVar21 = *(undefined4 *)(lVar8 + 0x22c);
  lVar3 = *(longlong *)(lVar8 + 0x230);
  lVar22 = *(longlong *)(lVar8 + 0x240);
  lVar23 = *(longlong *)(lVar8 + 0x248);
  lVar4 = *(longlong *)(lVar8 + 0x250);
  *(undefined4 *)(_Dst + 0x16) = *(undefined4 *)(lVar8 + 0x200);
  *(undefined4 *)((longlong)_Dst + 0xb4) = uVar11;
  *(undefined4 *)(_Dst + 0x17) = uVar12;
  *(undefined4 *)((longlong)_Dst + 0xbc) = uVar13;
  *(undefined4 *)(_Dst + 0x18) = uVar14;
  *(undefined4 *)((longlong)_Dst + 0xc4) = uVar15;
  *(undefined4 *)(_Dst + 0x19) = uVar16;
  *(undefined4 *)((longlong)_Dst + 0xcc) = uVar17;
  *(undefined4 *)(_Dst + 0x1a) = uVar18;
  *(undefined4 *)((longlong)_Dst + 0xd4) = uVar19;
  *(undefined4 *)(_Dst + 0x1b) = uVar20;
  *(undefined4 *)((longlong)_Dst + 0xdc) = uVar21;
  _Dst[0x1c] = lVar3;
  _Dst[0x1d] = lVar22;
  _Dst[0x1e] = lVar23;
  _Dst[0x1f] = lVar4;
  (**(code **)(**(longlong **)(lVar8 + 0x158) + 0x2b0))(*(longlong **)(lVar8 + 0x158),&local_a8);
  lVar3 = *(longlong *)(lVar8 + 0x128);
  dVar5 = *(double *)(lVar3 + 0xc0);
  dVar6 = *(double *)(lVar3 + 0xb8);
  dVar7 = *(double *)(lVar3 + 0xb0);
  _Dst[0x21] = local_88;
  _Dst[0x22] = lStack_80;
  *(undefined4 *)(_Dst + 0x23) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  *(int *)(_Dst + 0x24) = (int)local_a8;
  *(int *)((longlong)_Dst + 0x124) = (int)((ulonglong)local_a8 >> 0x20);
  auVar10._8_4_ = (int)local_98;
  auVar10._0_8_ = uStack_a0;
  auVar10._12_4_ = (int)((ulonglong)local_98 >> 0x20);
  *(undefined1 (*) [16])(_Dst + 0x25) = auVar10;
  _Dst[0x27] = lStack_90;
  _Dst[0x28] = (longlong)(dVar7 * 0.5);
  _Dst[0x29] = (longlong)(dVar6 * 0.5);
  _Dst[0x2a] = (longlong)(dVar5 * 0.5);
  lVar3 = *(longlong *)(param_1 + 8);
  *(undefined4 *)((longlong)_Dst + 0x15c) = *(undefined4 *)(*(longlong *)(lVar3 + 0x128) + 0xd0);
  _Dst[0x2c] = (longlong)(double)*(float *)(*(longlong *)(lVar3 + 0x128) + 0xd4);
  *(undefined4 *)(_Dst + 0x2d) = *(undefined4 *)(*(longlong *)(lVar3 + 0x128) + 0xd8);
  _Dst[0x2e] = (longlong)(double)*(float *)(*(longlong *)(lVar3 + 0x128) + 0xdc);
  *(undefined4 *)(_Dst + 0x30) = *(undefined4 *)(*(longlong *)(lVar3 + 0x128) + 0xe0);
  dVar5 = *(double *)(*(longlong *)(lVar3 + 0x128) + 0xf0);
  *(float *)((longlong)_Dst + 0x184) = (float)*(double *)(*(longlong *)(lVar3 + 0x128) + 0xe8);
  *(float *)(_Dst + 0x31) = (float)dVar5;
  dVar5 = *(double *)(*(longlong *)(lVar3 + 0x128) + 0x100);
  *(float *)((longlong)_Dst + 0x18c) = (float)*(double *)(*(longlong *)(lVar3 + 0x128) + 0xf8);
  *(float *)(_Dst + 0x32) = (float)dVar5;
  lVar4 = *(longlong *)(lVar3 + 0x170);
  lVar3 = *(longlong *)(lVar3 + 0x178);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)_Dst[0x12];
  _Dst[0x11] = lVar4;
  _Dst[0x12] = lVar3;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x180);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x188);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)_Dst[0x14];
  _Dst[0x13] = lVar3;
  _Dst[0x14] = lVar4;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x120);
  iVar24 = FUN_140e1307c(lVar3 + 0xb8,lVar3 + 0xa8);
  iVar25 = 0;
  if (iVar24 != -1) {
    iVar25 = iVar24;
  }
  *(int *)(_Dst + 0x15) = iVar25;
  lVar3 = *(longlong *)(param_1 + 8);
  local_a8 = *(undefined8 *)(lVar3 + 0x200);
  uStack_a0 = *(undefined8 *)(lVar3 + 0x208);
  local_98 = *(undefined8 *)(lVar3 + 0x210);
  lStack_90 = *(undefined8 *)(lVar3 + 0x218);
  local_88 = *(undefined8 *)(lVar3 + 0x220);
  lStack_80 = *(undefined8 *)(lVar3 + 0x228);
  local_78 = *(undefined8 *)(lVar3 + 0x230);
  uStack_70 = *(undefined4 *)(lVar3 + 0x240);
  uStack_6c = *(undefined4 *)(lVar3 + 0x244);
  uStack_68 = *(undefined4 *)(lVar3 + 0x248);
  uStack_64 = *(undefined4 *)(lVar3 + 0x24c);
  local_60 = *(undefined8 *)(lVar3 + 0x250);
  (**(code **)(*_Dst + 8))(_Dst);
  *param_2 = _Dst;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8f044 FUN_148f8f044 body=830 status=ok
// SIG undefined FUN_148f8f044(void)

void FUN_148f8f044(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined4 local_170;
  longlong local_168;
  undefined4 local_160;
  undefined1 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8;
  undefined1 local_e8 [56];
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88 [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = param_1 + 0x390;
  *(undefined1 *)(param_1 + 0x3cc) = 0;
  FUN_148453350(lVar1,param_2,param_1 + 0x340);
  (**(code **)(**(longlong **)(param_1 + 0x158) + 0x2b0))(*(longlong **)(param_1 + 0x158),local_e8);
  lVar2 = *(longlong *)(param_1 + 0x128);
  dVar4 = *(double *)(lVar2 + 0xc0) * 0.5;
  dVar6 = *(double *)(lVar2 + 0xb8) * 0.5;
  dVar5 = *(double *)(lVar2 + 0xb0) * 0.5;
  uStack_b0 = 0;
  local_a8._8_8_ = 0x3ff0000000000000;
  local_a8._0_8_ = 0x3ff0000000000000;
  local_98 = 0x3ff0000000000000;
  uStack_90 = 0;
  if (*(char *)(lVar2 + 0xa8) == '\x01') {
    dVar3 = (double)(float)(dVar6 + dVar6);
    local_a8._8_4_ = SUB84(dVar3,0);
    local_a8._0_8_ = (double)(float)(dVar5 + dVar5);
    local_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  }
  FUN_148453434(lVar1,local_e8);
  switch(*(undefined1 *)(*(longlong *)(param_1 + 0x128) + 0xa8)) {
  case 0:
    local_118 = -dVar4;
    dStack_120 = -dVar6;
    local_128 = -dVar5;
    local_f8 = 1;
    local_178 = CONCAT71(local_178._1_7_,*(undefined1 *)(param_1 + 0x3cc));
    local_110 = dVar5;
    local_108 = dVar6;
    local_100 = dVar4;
    (**(code **)(*(longlong *)(param_1 + 0x390) + 0x30))
              (lVar1,&local_128,param_1 + 0x3a0,*(undefined4 *)(param_1 + 0x3b0));
    break;
  case 1:
    local_88[2] = (double)((float)(dVar4 + dVar4) * -0.5);
    local_158 = *(undefined1 *)(param_1 + 0x3cc);
    local_160 = *(undefined4 *)(param_1 + 0x3b0);
    local_128 = 0.0;
    dStack_120 = 0.0;
    local_118 = 1.0;
    local_88[0] = 0.0;
    local_88[1] = 0.0;
    local_168 = param_1 + 0x3a0;
    local_178 = CONCAT44(local_178._4_4_,(float)(dVar4 + dVar4));
    local_170 = 0x10;
    (**(code **)(*(longlong *)(param_1 + 0x390) + 0x28))(lVar1,local_88,&local_128,0x3f000000);
    break;
  case 2:
  case 3:
    dStack_120 = (double)(float)(dVar6 + dVar6);
    local_128 = 0.0;
    local_118 = 0.0;
    local_88[0] = (double)(float)(dVar5 + dVar5);
    local_88[1] = 0.0;
    local_88[2] = 0.0;
    local_138 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_170 = *(undefined4 *)(param_1 + 0x3b0);
    local_178 = param_1 + 0x3a0;
    local_168 = CONCAT71(local_168._1_7_,*(undefined1 *)(param_1 + 0x3cc));
    (**(code **)(*(longlong *)(param_1 + 0x390) + 0x38))(lVar1);
  }
  FUN_14845342a(lVar1);
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f8f384 FUN_148f8f384 body=444 status=ok
// SIG undefined FUN_148f8f384(void)

void FUN_148f8f384(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x128) == param_2) && (param_3 != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x128) + 200) != '\0')) {
    lVar9 = *(longlong *)(param_3 + 8);
    lVar8 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar8 + 8) == 0) {
      bVar11 = lVar9 != 0;
      if (lVar9 != lVar8 && bVar11) {
        do {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          bVar11 = lVar9 != 0;
          if (lVar9 == lVar8) break;
        } while (lVar9 != 0);
      }
      if (!bVar11) goto LAB_148f8f3a6;
    }
    else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) goto LAB_148f8f3a6;
    local_40 = *(longlong *)(*(longlong *)(param_3 + 0x70) + 0x18);
    FUN_1400021e4(&local_40,&local_30);
    FUN_1400b22c2(&local_40,"Vector");
    if (local_28 == local_38) {
      bVar11 = true;
      if (1 < local_28) {
        lVar9 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_30 + lVar9);
          uVar6 = (uint)uVar1;
          uVar2 = *(ushort *)(local_40 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148f8f46b;
            }
            iVar7 = uVar6 - uVar10;
            goto LAB_148f8f53a;
          }
          if (uVar1 == 0) break;
LAB_148f8f46b:
          lVar9 = lVar9 + 2;
        }
        iVar7 = 0;
LAB_148f8f53a:
        bVar11 = iVar7 == 0;
      }
    }
    else {
      bVar11 = local_38 + local_28 == 1;
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (bVar11) {
      lVar9 = *(longlong *)(param_1 + 0x128);
      uVar3 = *(undefined4 *)(lVar9 + 0xb4);
      uVar4 = *(undefined4 *)(lVar9 + 0xb8);
      uVar5 = *(undefined4 *)(lVar9 + 0xbc);
      *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(lVar9 + 0xb0);
      *(undefined4 *)(param_1 + 0x294) = uVar3;
      *(undefined4 *)(param_1 + 0x298) = uVar4;
      *(undefined4 *)(param_1 + 0x29c) = uVar5;
      *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(lVar9 + 0xc0);
      (**(code **)(**(longlong **)
                     (*(longlong *)(lVar9 + 0x28) + (longlong)*(int *)(param_1 + 0x330) * 8) + 0x10)
      )();
    }
  }
LAB_148f8f3a6:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f8f542 FUN_148f8f542 body=90 status=ok
// SIG undefined FUN_148f8f542(void)

void FUN_148f8f542(longlong *param_1,undefined4 param_2)

{
  FUN_1484cb470();
  if ((char)param_1[0x98] == '\x01') {
    (**(code **)(*param_1 + 0x3d0))(param_1,*(undefined4 *)((longlong)param_1 + 0x4c4));
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  }
  FUN_148505016(param_1[0x28],param_2);
  return;
}



// FUNCTION 148f8f59c FUN_148f8f59c body=296 status=ok
// SIG undefined FUN_148f8f59c(void)

void FUN_148f8f59c(longlong param_1,undefined4 *param_2,undefined8 param_3,char param_4)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(**(longlong **)(param_1 + 0x158) + 0x2b0))(*(longlong **)(param_1 + 0x158),&local_c8)
  ;
  local_50 = local_c8;
  uStack_48 = uStack_c0;
  local_40 = local_b8;
  uStack_3c = uStack_b4;
  uStack_38 = uStack_b0;
  uStack_34 = uStack_ac;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = *(undefined8 *)(param_2 + 4);
  if (param_4 == '\0') {
    FUN_1482ae234(&local_68,2,param_3);
  }
  local_a8 = CONCAT44(uStack_64,local_68);
  uStack_a0 = CONCAT44(uStack_5c,uStack_60);
  local_c8 = local_50;
  uStack_c0 = uStack_48;
  local_b8 = local_40;
  uStack_b4 = uStack_3c;
  uStack_b0 = uStack_38;
  uStack_ac = uStack_34;
  local_98 = local_58;
  uStack_90 = 0;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0x3ff0000000000000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x330))
            (*(longlong **)(param_1 + 0x150),&local_c8,1);
  FUN_1485051e4(*(undefined8 *)(param_1 + 0x140));
  *(undefined1 *)(param_1 + 0x338) = 1;
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f8f6e4 FUN_148f8f6e4 body=2080 status=ok
// SIG undefined FUN_148f8f6e4(void)

void FUN_148f8f6e4(double param_1,char param_2)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  void *_Src;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  code *local_1d0;
  double *local_1c8;
  longlong local_1c0;
  void *local_1b8;
  int local_1b0;
  longlong local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double dStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double dStack_108;
  double local_f8;
  longlong *local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_148415b26(*(undefined8 *)((longlong)param_1 + 0x150),&local_198);
  local_138 = local_178;
  dStack_130 = uStack_170;
  local_128 = local_168;
  dStack_120 = local_198;
  dStack_118 = uStack_190;
  uStack_110 = (undefined4)local_188;
  uStack_10c = local_188._4_4_;
  dStack_108 = dStack_180;
  local_1a8 = 0;
  uStack_1a0 = 0;
  iVar3 = *(int *)(*(undefined8 **)((longlong)param_1 + 400) + 1);
  if ((longlong)iVar3 < 1) {
    FUN_148f9007d(*(longlong *)((longlong)param_1 + 0x170),
                  *(longlong *)((longlong)param_1 + 0x170) + 0x20,&local_1a8);
  }
  else {
    local_1b8 = (void *)0x0;
    _Src = (void *)**(undefined8 **)((longlong)param_1 + 400);
    local_1b0 = iVar3;
    FUN_144a06ca8(&local_1b8,iVar3,0);
    memcpy(local_1b8,_Src,(longlong)iVar3 << 2);
    FUN_148f8ff52(*(undefined8 *)((longlong)param_1 + 0x170),&local_1b8,&local_1a8);
  }
  if (param_2 != '\0') {
    bVar2 = *(byte *)(*(longlong *)((longlong)param_1 + 0x128) + 0xa8);
    if (bVar2 < 3) {
      local_188 = DAT_14c8464f0;
      local_198 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_190 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      dStack_180 = 0.0;
      local_178 = 0.0;
      uStack_170 = 0.0;
      local_168 = 1.0;
      dStack_160 = 1.0;
      local_158 = 1.0;
      dStack_150 = 1.0;
      local_1c0 = 0;
      local_1c8 = &local_f8;
      local_f0 = &local_1a8;
      local_1d0 = FUN_1443759a8;
      local_1e0 = 0;
      local_1e8 = 0;
      local_f8 = param_1;
      cVar10 = FUN_14826a79e(&local_1c0,uStack_1a0 & 0xffffffff,1000);
      if ((cVar10 == '\0') || (cVar10 = FUN_14826a948(&local_1c0), cVar10 == '\0')) {
        local_188 = (*(double *)((longlong)param_1 + 0x270) + *(double *)((longlong)param_1 + 0x288)
                    ) * 0.5;
        uStack_190 = (*(double *)((longlong)param_1 + 0x268) +
                     *(double *)((longlong)param_1 + 0x280)) * 0.5;
        local_198 = (*(double *)((longlong)param_1 + 0x260) + *(double *)((longlong)param_1 + 0x278)
                    ) * 0.5;
        dStack_150 = (*(double *)((longlong)param_1 + 0x288) -
                     *(double *)((longlong)param_1 + 0x270)) * 0.5;
        local_158 = (*(double *)((longlong)param_1 + 0x280) - *(double *)((longlong)param_1 + 0x268)
                    ) * 0.5;
        dStack_160 = (*(double *)((longlong)param_1 + 0x278) -
                     *(double *)((longlong)param_1 + 0x260)) * 0.5;
        dStack_180 = 0.0;
        local_178 = 0.0;
        uStack_170 = 0.0;
        local_168 = 1.0;
      }
      else {
        FUN_14826a958(&local_1c0,&local_198);
      }
      dStack_108 = local_168;
      dStack_118 = local_178;
      uStack_110 = (undefined4)uStack_170;
      uStack_10c = uStack_170._4_4_;
      local_128 = local_188;
      dStack_120 = dStack_180;
      local_138 = local_198;
      dStack_130 = uStack_190;
      if (local_1c0 != 0) {
        (**(code **)(local_1c0 + -0x10))(local_1c0 + -0x10);
      }
    }
    else if (bVar2 == 3) {
      if (*(int *)(*(longlong *)((longlong)param_1 + 0x180) + 8) < 1) {
        FUN_1483383e2(*(undefined8 *)((longlong)param_1 + 0x170),&local_138,&local_198,1);
      }
      else {
        local_1e8 = 1;
        FUN_148338df0(*(undefined8 *)((longlong)param_1 + 0x170),
                      *(longlong *)((longlong)param_1 + 0x180),&local_138,&local_198);
      }
      FUN_1483bed02(&local_138,(longlong)param_1 + 0x200);
    }
  }
  lVar11 = (longlong)(int)uStack_1a0;
  if (lVar11 < 1) {
    uVar15 = 0xffffffff;
    uVar16 = 0xffefffff;
    uVar22 = 0xffffffff;
    uVar23 = 0x7fefffff;
    uVar24 = uVar22;
    uVar26 = uVar23;
    uVar13 = uVar15;
    uVar14 = uVar16;
    uVar20 = uVar15;
    uVar21 = uVar16;
    uVar28 = uVar22;
    uVar29 = uVar23;
  }
  else {
    uVar24 = 0xffffffff;
    uVar26 = 0x7fefffff;
    uVar13 = 0xffffffff;
    uVar14 = 0xffefffff;
    lVar12 = 0;
    uVar15 = uVar13;
    uVar16 = uVar14;
    uVar20 = uVar13;
    uVar21 = uVar14;
    uVar25 = uVar24;
    uVar27 = uVar26;
    uVar28 = uVar24;
    uVar29 = uVar26;
    do {
      local_1d8 = (double)CONCAT44(uVar14,uVar13);
      dVar5 = *(double *)(local_1a8 + lVar12) * *(double *)((longlong)param_1 + 0x240);
      dVar6 = ((double *)(local_1a8 + lVar12))[1] * *(double *)((longlong)param_1 + 0x248);
      dVar4 = *(double *)(local_1a8 + 0x10 + lVar12) * *(double *)((longlong)param_1 + 0x250);
      dVar7 = *(double *)((longlong)param_1 + 0x200);
      dVar8 = *(double *)((longlong)param_1 + 0x208);
      dVar9 = *(double *)((longlong)param_1 + 0x210);
      dVar1 = *(double *)((longlong)param_1 + 0x218);
      dVar17 = dVar6 * dVar7 - dVar5 * dVar8;
      dVar18 = dVar4 * dVar8 - dVar6 * dVar9;
      dVar19 = dVar5 * dVar9 - dVar7 * dVar4;
      dVar18 = dVar18 + dVar18;
      dVar19 = dVar19 + dVar19;
      dVar17 = dVar17 + dVar17;
      local_188 = (dVar17 * dVar1 + dVar4 + (dVar19 * dVar7 - dVar18 * dVar8) +
                  *(double *)((longlong)param_1 + 0x230)) - local_128;
      uStack_190 = ((dVar9 * dVar18 - dVar7 * dVar17) +
                    *(double *)((longlong)param_1 + 0x218) * dVar19 + dVar6 +
                   *(double *)((longlong)param_1 + 0x228)) - dStack_130;
      local_198 = ((dVar17 * dVar8 - dVar19 * dVar9) + dVar1 * dVar18 + dVar5 +
                  *(double *)((longlong)param_1 + 0x220)) - local_138;
      FUN_146bf2028(&dStack_120,&local_f8,&local_198);
      uVar22 = (undefined4)((ulonglong)local_f8 >> 0x20);
      uVar13 = SUB84(local_f0,0);
      uVar14 = (undefined4)((ulonglong)local_f0 >> 0x20);
      uVar23 = SUB84(local_f8,0);
      uVar30 = uVar22;
      if ((double)CONCAT44(uVar29,uVar28) <= local_f8) {
        uVar23 = uVar28;
        uVar30 = uVar29;
      }
      uVar29 = uVar30;
      uVar28 = uVar23;
      uVar23 = SUB84(local_f8,0);
      if (local_f8 <= (double)CONCAT44(uVar16,uVar15)) {
        uVar23 = uVar15;
        uVar22 = uVar16;
      }
      uVar16 = uVar22;
      uVar15 = uVar23;
      uVar22 = uVar13;
      uVar23 = uVar14;
      if ((double)CONCAT44(uVar26,uVar24) <= (double)local_f0) {
        uVar22 = uVar24;
        uVar23 = uVar26;
      }
      uVar26 = uVar23;
      uVar24 = uVar22;
      if ((double)local_f0 <= local_1d8) {
        uVar13 = SUB84(local_1d8,0);
        uVar14 = (undefined4)((ulonglong)local_1d8 >> 0x20);
      }
      uVar30 = (undefined4)((ulonglong)local_e8 >> 0x20);
      uVar22 = SUB84(local_e8,0);
      uVar23 = uVar30;
      if ((double)CONCAT44(uVar27,uVar25) <= local_e8) {
        uVar22 = uVar25;
        uVar23 = uVar27;
      }
      uVar25 = SUB84(local_e8,0);
      if (local_e8 <= (double)CONCAT44(uVar21,uVar20)) {
        uVar25 = uVar20;
        uVar30 = uVar21;
      }
      uVar21 = uVar30;
      uVar20 = uVar25;
      lVar12 = lVar12 + 0x18;
      uVar25 = uVar22;
      uVar27 = uVar23;
    } while (lVar11 * 0x18 != lVar12);
  }
  lVar11 = *(longlong *)((longlong)param_1 + 0x128);
  if (*(byte *)(lVar11 + 0xa8) < 3) {
    local_e8 = ((double)CONCAT44(uVar23,uVar22) + (double)CONCAT44(uVar21,uVar20)) * 0.5;
    local_f0 = (longlong *)
               (((double)CONCAT44(uVar26,uVar24) + (double)CONCAT44(uVar14,uVar13)) * 0.5);
    local_f8 = ((double)CONCAT44(uVar29,uVar28) + (double)CONCAT44(uVar16,uVar15)) * 0.5;
    FUN_146bed047(&local_198,&dStack_120);
    local_128 = local_188 + local_128;
    dStack_130 = uStack_190 + dStack_130;
    local_138 = local_198 + local_138;
    lVar11 = *(longlong *)((longlong)param_1 + 0x128);
  }
  dVar5 = ((double)CONCAT44(uVar21,uVar20) - (double)CONCAT44(uVar23,uVar22)) * 0.5;
  dVar4 = ((double)CONCAT44(uVar14,uVar13) - (double)CONCAT44(uVar26,uVar24)) * 0.5;
  dVar1 = ((double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(uVar29,uVar28)) * 0.5;
  *(double *)(lVar11 + 0xb0) = dVar1 + dVar1;
  *(double *)(lVar11 + 0xb8) = dVar4 + dVar4;
  *(double *)(lVar11 + 0xc0) = dVar5 + dVar5;
  if (-1 < (longlong)*(int *)((longlong)param_1 + 0x330)) {
    (**(code **)(**(longlong **)
                   (*(longlong *)(*(longlong *)((longlong)param_1 + 0x128) + 0x28) +
                   (longlong)*(int *)((longlong)param_1 + 0x330) * 8) + 0x10))();
  }
  if (-1 < (longlong)*(int *)((longlong)param_1 + 0x334)) {
    (**(code **)(**(longlong **)
                   (*(longlong *)(*(longlong *)((longlong)param_1 + 0x128) + 0x28) +
                   (longlong)*(int *)((longlong)param_1 + 0x334) * 8) + 0x10))();
  }
  local_198 = dStack_120;
  uStack_190 = dStack_118;
  local_188 = (double)CONCAT44(uStack_10c,uStack_110);
  dStack_180 = dStack_108;
  local_178 = local_138;
  uStack_170 = dStack_130;
  local_168 = local_128;
  dStack_160 = 0.0;
  local_158 = 1.0;
  dStack_150 = 1.0;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0;
  (**(code **)(**(longlong **)((longlong)param_1 + 0x150) + 0x330))
            (*(longlong **)((longlong)param_1 + 0x150),&local_198,1);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f8ff06 FUN_148f8ff06 body=76 status=ok
// SIG undefined FUN_148f8ff06(void)

void FUN_148f8ff06(longlong param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 3) {
    uVar1 = *(undefined1 *)(param_1 + 0x338);
    FUN_148f8e2d0(param_1);
    *(undefined1 *)(param_1 + 0x338) = uVar1;
    return;
  }
  if (param_2 == 2) {
    uVar2 = 1;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uVar2 = 0;
  }
  FUN_148f8f6e4(param_1,uVar2);
  return;
}



// FUNCTION 148f8ff52 FUN_148f8ff52 body=275 status=ok
// SIG undefined FUN_148f8ff52(void)

void FUN_148f8ff52(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *param_2;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(lVar7 + lVar8);
      if ((-1 < (int)uVar2) &&
         ((int)uVar2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
        uVar6 = (ulonglong)(uVar2 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 9) * 8) +
                               uVar6 * 2) - 1U) < 0xfffe) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          local_48 = *(undefined8 *)(lVar4 + 0x10 + uVar6 * 0x18);
          puVar1 = (undefined4 *)(lVar4 + uVar6 * 0x18);
          local_58 = *puVar1;
          uStack_54 = puVar1[1];
          uStack_50 = puVar1[2];
          uStack_4c = puVar1[3];
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_1403e3958(param_3,iVar3);
          }
          lVar4 = *param_3;
          *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = local_48;
          puVar1 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
          *puVar1 = local_58;
          puVar1[1] = uStack_54;
          puVar1[2] = uStack_50;
          puVar1[3] = uStack_4c;
        }
      }
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar8);
    lVar7 = *param_2;
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9007d FUN_148f9007d body=395 status=ok
// SIG undefined FUN_148f9007d(void)

void FUN_148f9007d(longlong param_1,int *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = *param_2 * 0x200 + param_2[1];
  uVar10 = 0;
  if ((uVar6 != 0) && (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 2) - 1U))
     ) {
    uVar8 = 1;
    uVar9 = 1;
    if (1 < (int)uVar6) {
      uVar8 = uVar6;
    }
    do {
      uVar10 = uVar8;
      if (uVar8 == uVar9) break;
      uVar5 = uVar9 >> 9;
      uVar7 = uVar9 & 0x1ff;
      uVar10 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 2))[uVar5] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  do {
    if (uVar10 == uVar6) {
      if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if ((-1 < (int)uVar10) &&
       ((int)uVar10 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
      uVar4 = (ulonglong)(uVar10 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar10 >> 9) * 8) +
                             uVar4 * 2) - 1U) < 0xfffe) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        local_48 = *(undefined8 *)(lVar3 + 0x10 + uVar4 * 0x18);
        puVar1 = (undefined4 *)(lVar3 + uVar4 * 0x18);
        local_58 = *puVar1;
        uStack_54 = puVar1[1];
        uStack_50 = puVar1[2];
        uStack_4c = puVar1[3];
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_3,iVar2);
        }
        lVar3 = *param_3;
        *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = local_48;
        puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
      }
    }
    uVar8 = uVar10 + 1;
    if ((int)(uVar10 + 1) < (int)uVar6) {
      uVar8 = uVar6;
    }
    uVar9 = uVar10;
    do {
      uVar10 = uVar8;
      if (uVar8 - 1 == uVar9) break;
      uVar10 = uVar9 + 1;
      uVar9 = uVar10;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 2) +
                                           (ulonglong)(uVar10 >> 9) * 8) +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 148f9020e FUN_148f9020e body=45 status=ok
// SIG undefined FUN_148f9020e(void)

longlong FUN_148f9020e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9023c FUN_148f9023c body=45 status=ok
// SIG undefined FUN_148f9023c(void)

longlong FUN_148f9023c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9027a FUN_148f9027a body=45 status=ok
// SIG undefined FUN_148f9027a(void)

longlong FUN_148f9027a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145df12a2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f902a8 FUN_148f902a8 body=45 status=ok
// SIG undefined FUN_148f902a8(void)

longlong FUN_148f902a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145df12a2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f902d6 FUN_148f902d6 body=45 status=ok
// SIG undefined FUN_148f902d6(void)

longlong FUN_148f902d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145df12a2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9030c FUN_148f9030c body=45 status=ok
// SIG undefined FUN_148f9030c(void)

longlong FUN_148f9030c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14619f434(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9033a FUN_148f9033a body=45 status=ok
// SIG undefined FUN_148f9033a(void)

longlong FUN_148f9033a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14619f434(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9036a FUN_148f9036a body=45 status=ok
// SIG undefined FUN_148f9036a(void)

longlong FUN_148f9036a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_14619f434(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9039c FUN_148f9039c body=45 status=ok
// SIG undefined FUN_148f9039c(void)

longlong FUN_148f9039c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1461a9db2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f903ca FUN_148f903ca body=45 status=ok
// SIG undefined FUN_148f903ca(void)

longlong FUN_148f903ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1461a9db2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f903fa FUN_148f903fa body=45 status=ok
// SIG undefined FUN_148f903fa(void)

longlong FUN_148f903fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_1461a9db2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9042c FUN_148f9042c body=45 status=ok
// SIG undefined FUN_148f9042c(void)

longlong FUN_148f9042c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9045a FUN_148f9045a body=45 status=ok
// SIG undefined FUN_148f9045a(void)

longlong FUN_148f9045a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f90490 FUN_148f90490 body=45 status=ok
// SIG undefined FUN_148f90490(void)

longlong FUN_148f90490(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f904be FUN_148f904be body=45 status=ok
// SIG undefined FUN_148f904be(void)

longlong FUN_148f904be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f904f8 FUN_148f904f8 body=45 status=ok
// SIG undefined FUN_148f904f8(void)

longlong FUN_148f904f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e09eea(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9052c FUN_148f9052c body=48 status=ok
// SIG undefined FUN_148f9052c(void)

longlong FUN_148f9052c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145e09eea(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f90564 FUN_148f90564 body=48 status=ok
// SIG undefined FUN_148f90564(void)

longlong FUN_148f90564(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145e09eea(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f905a4 FUN_148f905a4 body=45 status=ok
// SIG undefined FUN_148f905a4(void)

longlong FUN_148f905a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f905da FUN_148f905da body=45 status=ok
// SIG undefined FUN_148f905da(void)

longlong FUN_148f905da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_146140806(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f90608 FUN_148f90608 body=48 status=ok
// SIG undefined FUN_148f90608(void)

longlong FUN_148f90608(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_146140806(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9063a FUN_148f9063a body=77 status=ok
// SIG undefined FUN_148f9063a(void)

bool FUN_148f9063a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    return true;
  }
  if (param_2 != 0) {
    lVar1 = FUN_1459f4a06();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f90655;
  }
  param_2 = 0;
LAB_148f90655:
  return *(int *)(param_2 + 100) != *(int *)(param_1 + 8);
}



// FUNCTION 148f90688 FUN_148f90688 body=32 status=ok
// SIG undefined FUN_148f90688(void)

undefined8 FUN_148f90688(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FPolyEditCutFacesActivityFirstPointChange");
  return param_2;
}



// FUNCTION 148f906a8 FUN_148f906a8 body=29 status=ok
// SIG undefined FUN_148f906a8(void)

undefined8 FUN_148f906a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f906c6 FUN_148f906c6 body=38 status=ok
// SIG undefined FUN_148f906c6(void)

undefined8 FUN_148f906c6(undefined8 param_1,int param_2)

{
  FUN_148f906ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f906ec FUN_148f906ec body=150 status=ok
// SIG undefined FUN_148f906ec(void)

void FUN_148f906ec(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ba30850;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f90777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 148f90782 FUN_148f90782 body=199 status=ok
// SIG undefined FUN_148f90782(void)

undefined8 * FUN_148f90782(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14ba30880;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14ba308a0;
  param_1[7] = param_2;
  param_1[2] = &LAB_148f90976;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14ba308c0;
  param_1[0x17] = &LAB_148f909c4;
  param_1[0x12] = &LAB_148f909cc;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148f9084a FUN_148f9084a body=38 status=ok
// SIG undefined FUN_148f9084a(void)

undefined8 FUN_148f9084a(undefined8 param_1,int param_2)

{
  FUN_148f90a20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f90870 FUN_148f90870 body=207 status=ok
// SIG undefined FUN_148f90870(void)

void FUN_148f90870(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_148f90921;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_148f90921:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f90940 FUN_148f90940 body=53 status=ok
// SIG undefined FUN_148f90940(void)

void FUN_148f90940(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 148f909a6 FUN_148f909a6 body=29 status=ok
// SIG undefined FUN_148f909a6(void)

undefined8 FUN_148f909a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f90a02 FUN_148f90a02 body=29 status=ok
// SIG undefined FUN_148f90a02(void)

undefined8 FUN_148f90a02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f90a20 FUN_148f90a20 body=127 status=ok
// SIG undefined FUN_148f90a20(void)

void FUN_148f90a20(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba30880;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148f90aa0 FUN_148f90aa0 body=199 status=ok
// SIG undefined FUN_148f90aa0(void)

undefined8 * FUN_148f90aa0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14ba30920;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14ba30940;
  param_1[7] = param_2;
  param_1[2] = &LAB_148f90c94;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14ba30960;
  param_1[0x17] = &LAB_148f90ce2;
  param_1[0x12] = &LAB_148f90cea;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148f90b68 FUN_148f90b68 body=38 status=ok
// SIG undefined FUN_148f90b68(void)

undefined8 FUN_148f90b68(undefined8 param_1,int param_2)

{
  FUN_148f90d3e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f90b8e FUN_148f90b8e body=207 status=ok
// SIG undefined FUN_148f90b8e(void)

void FUN_148f90b8e(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_148f90c3f;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_148f90c3f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f90c5e FUN_148f90c5e body=53 status=ok
// SIG undefined FUN_148f90c5e(void)

void FUN_148f90c5e(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 148f90cc4 FUN_148f90cc4 body=29 status=ok
// SIG undefined FUN_148f90cc4(void)

undefined8 FUN_148f90cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f90d20 FUN_148f90d20 body=29 status=ok
// SIG undefined FUN_148f90d20(void)

undefined8 FUN_148f90d20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f90d3e FUN_148f90d3e body=127 status=ok
// SIG undefined FUN_148f90d3e(void)

void FUN_148f90d3e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba30920;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148f90dbe FUN_148f90dbe body=199 status=ok
// SIG undefined FUN_148f90dbe(void)

undefined8 * FUN_148f90dbe(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14ba309a0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14ba309c0;
  param_1[7] = param_2;
  param_1[2] = &LAB_148f90fb2;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14ba309e0;
  param_1[0x17] = &LAB_148f91000;
  param_1[0x12] = &LAB_148f91008;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148f90e86 FUN_148f90e86 body=38 status=ok
// SIG undefined FUN_148f90e86(void)

undefined8 FUN_148f90e86(undefined8 param_1,int param_2)

{
  FUN_148f9105c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f90eac FUN_148f90eac body=207 status=ok
// SIG undefined FUN_148f90eac(void)

void FUN_148f90eac(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_148f90f5d;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_148f90f5d:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f90f7c FUN_148f90f7c body=53 status=ok
// SIG undefined FUN_148f90f7c(void)

void FUN_148f90f7c(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 148f90fe2 FUN_148f90fe2 body=29 status=ok
// SIG undefined FUN_148f90fe2(void)

undefined8 FUN_148f90fe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9103e FUN_148f9103e body=29 status=ok
// SIG undefined FUN_148f9103e(void)

undefined8 FUN_148f9103e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9105c FUN_148f9105c body=127 status=ok
// SIG undefined FUN_148f9105c(void)

void FUN_148f9105c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba309a0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148f910dc FUN_148f910dc body=199 status=ok
// SIG undefined FUN_148f910dc(void)

undefined8 * FUN_148f910dc(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14ba30a80;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14ba30aa0;
  param_1[7] = param_2;
  param_1[2] = &LAB_148f912d0;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14ba30ac0;
  param_1[0x17] = &LAB_148f9131e;
  param_1[0x12] = &LAB_148f91326;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148f911a4 FUN_148f911a4 body=38 status=ok
// SIG undefined FUN_148f911a4(void)

undefined8 FUN_148f911a4(undefined8 param_1,int param_2)

{
  FUN_148f9137a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f911ca FUN_148f911ca body=207 status=ok
// SIG undefined FUN_148f911ca(void)

void FUN_148f911ca(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_148f9127b;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_148f9127b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9129a FUN_148f9129a body=53 status=ok
// SIG undefined FUN_148f9129a(void)

void FUN_148f9129a(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 148f91300 FUN_148f91300 body=29 status=ok
// SIG undefined FUN_148f91300(void)

undefined8 FUN_148f91300(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9135c FUN_148f9135c body=29 status=ok
// SIG undefined FUN_148f9135c(void)

undefined8 FUN_148f9135c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9137a FUN_148f9137a body=127 status=ok
// SIG undefined FUN_148f9137a(void)

void FUN_148f9137a(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba30a80;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148f913fa FUN_148f913fa body=199 status=ok
// SIG undefined FUN_148f913fa(void)

undefined8 * FUN_148f913fa(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14ba30b80;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14ba30ba0;
  param_1[7] = param_2;
  param_1[2] = &LAB_148f915ee;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14ba30bc0;
  param_1[0x17] = &LAB_148f9163c;
  param_1[0x12] = &LAB_148f91644;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148f914c2 FUN_148f914c2 body=38 status=ok
// SIG undefined FUN_148f914c2(void)

undefined8 FUN_148f914c2(undefined8 param_1,int param_2)

{
  FUN_148f91698();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f914e8 FUN_148f914e8 body=207 status=ok
// SIG undefined FUN_148f914e8(void)

void FUN_148f914e8(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_148f91599;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_148f91599:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f915b8 FUN_148f915b8 body=53 status=ok
// SIG undefined FUN_148f915b8(void)

void FUN_148f915b8(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 148f9161e FUN_148f9161e body=29 status=ok
// SIG undefined FUN_148f9161e(void)

undefined8 FUN_148f9161e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9167a FUN_148f9167a body=29 status=ok
// SIG undefined FUN_148f9167a(void)

undefined8 FUN_148f9167a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f91698 FUN_148f91698 body=127 status=ok
// SIG undefined FUN_148f91698(void)

void FUN_148f91698(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba30b80;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148f91718 FUN_148f91718 body=228 status=ok
// SIG undefined FUN_148f91718(void)

undefined8 * FUN_148f91718(undefined8 *param_1)

{
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14ba30d10;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3ff00000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0x3ff0000000000000;
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x2b] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x162) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  return param_1;
}



// FUNCTION 148f917fc FUN_148f917fc body=38 status=ok
// SIG undefined FUN_148f917fc(void)

undefined8 FUN_148f917fc(undefined8 param_1,int param_2)

{
  FUN_148f91f16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f91822 FUN_148f91822 body=1779 status=ok
// SIG undefined FUN_148f91822(void)

void FUN_148f91822(longlong param_1,char *param_2)

{
  void **ppvVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  longlong lVar10;
  uint *puVar11;
  double dVar12;
  undefined1 local_1b8 [32];
  undefined1 local_198;
  undefined1 local_190;
  undefined1 local_17c [4];
  code *local_178;
  undefined8 uStack_170;
  undefined ***local_168;
  undefined8 uStack_160;
  undefined **local_158;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined4 local_130;
  code *local_128;
  undefined8 uStack_120;
  undefined ***local_118;
  undefined8 uStack_110;
  undefined **local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8;
  undefined1 local_c7;
  code *local_b8;
  undefined8 uStack_b0;
  undefined ***local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70 [24];
  uint *local_58;
  int local_50;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)local_1b8;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_148f919cb;
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar9 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
    }
    uVar5 = (**(code **)(*plVar9 + 8))();
    cVar4 = (*pcVar2)(uVar5);
    *param_2 = cVar4;
    if (cVar4 != '\0') goto LAB_148f919cb;
  }
  local_190 = 1;
  local_198 = 1;
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0xf0);
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_148f919cb;
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar9 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
    }
    uVar5 = (**(code **)(*plVar9 + 8))();
    cVar4 = (*pcVar2)(uVar5);
    *param_2 = cVar4;
    if (cVar4 != '\0') goto LAB_148f919cb;
  }
  if (*(int *)(param_1 + 0x120) == 1) {
    if ((ABS(*(double *)(param_1 + 0x128)) <= 9.999999747378752e-05) &&
       (ABS(*(double *)(param_1 + 0x130)) <= 9.999999747378752e-05)) {
      dVar12 = *(double *)(param_1 + 0x138);
      goto LAB_148f919bd;
    }
  }
  else if (((*(int *)(param_1 + 0x120) == 0) &&
           (ABS(*(double *)(param_1 + 0x140)) <= 9.999999747378752e-05)) &&
          (ABS(*(double *)(param_1 + 0x148)) <= 9.999999747378752e-05)) {
    dVar12 = *(double *)(param_1 + 0x150);
LAB_148f919bd:
    if (ABS(dVar12) <= 9.999999747378752e-05) goto LAB_148f919cb;
  }
  FUN_148f7010a(local_e8,*(undefined8 *)(param_1 + 8));
  uVar3 = uStack_a0;
  pppuVar8 = local_a8;
  uVar5 = uStack_b0;
  pcVar2 = local_b8;
  if (*(int *)(param_1 + 0x120) == 1) {
    local_108[0] = &PTR_LAB_14ba30d50;
    pcVar6 = (code *)&LAB_148f920a0;
LAB_148f91a70:
    uStack_144 = uStack_84;
    uStack_140 = uStack_80;
    uStack_13c = uStack_7c;
    local_158 = local_98;
    uStack_150 = (undefined4)uStack_90;
    uStack_14c = CONCAT44(local_88,uStack_90._4_4_);
    local_168 = local_a8;
    uStack_160 = uStack_a0;
    local_178 = local_b8;
    uStack_170 = uStack_b0;
    local_b8 = pcVar6;
    uStack_b0 = uStack_120;
    local_a8 = (undefined ***)0x0;
    uStack_a0 = uStack_110;
    local_98 = local_108[0];
    uStack_90 = param_1;
    local_128 = pcVar2;
    uStack_120 = uVar5;
    local_f8 = local_88;
    uStack_f4 = uStack_84;
    uStack_f0 = uStack_80;
    uStack_ec = uStack_7c;
    local_118 = pppuVar8;
    uStack_110 = uVar3;
    if (pcVar2 != (code *)0x0) {
      if (pppuVar8 == (undefined ***)0x0) {
        pppuVar8 = local_108;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  else if (*(int *)(param_1 + 0x120) == 0) {
    local_108[0] = &PTR_LAB_14ba30d30;
    pcVar6 = FUN_148f91ff8;
    goto LAB_148f91a70;
  }
  FUN_14054c6c4(local_d8,param_1 + 0x100);
  if ((undefined1 *)(param_1 + 0x110) != local_70) {
    FUN_148374760();
  }
  local_78 = *(undefined8 *)(param_1 + 0x158);
  local_c8 = *(int *)(param_1 + 0x120) == 0;
  local_c7 = *(undefined1 *)(param_1 + 0x160);
  if (param_2 == (char *)0x0) {
    FUN_148f70182(local_e8,0);
LAB_148f91bb8:
    ppvVar1 = (void **)(param_1 + 0x168);
    if (ppvVar1 != &local_48) {
      *(int *)(param_1 + 0x170) = local_40;
      if (local_40 == 0 && *(int *)(param_1 + 0x174) == 0) {
        *(undefined4 *)(param_1 + 0x174) = 0;
      }
      else {
        FUN_144a06ca8(ppvVar1,local_40);
        if (local_40 != 0) {
          memcpy(*ppvVar1,local_48,(longlong)local_40 << 2);
        }
      }
    }
    local_158 = (undefined **)0x0;
    uStack_150 = 0;
    local_178 = (code *)0x0;
    uStack_170 = 0;
    uStack_14c = 0xffffffff00000080;
    uStack_144 = 0;
    local_138 = 0;
    local_130 = 0;
    if (*(char *)(param_1 + 0x162) == '\x01') {
      if ((longlong)local_50 != 0) {
        puVar11 = local_58;
        do {
          lVar10 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 8) + 0x180) +
                    (ulonglong)(*puVar11 >> 9) * 8);
          uVar7 = (ulonglong)(*puVar11 & 0x1ff);
          uStack_120 = CONCAT44(uStack_120._4_4_,*(undefined4 *)(lVar10 + 8 + uVar7 * 0xc));
          local_128 = *(code **)(lVar10 + uVar7 * 0xc);
          lVar10 = 0;
          do {
            FUN_1447cbafe(&local_178,local_17c,(longlong)&local_128 + lVar10,0);
            lVar10 = lVar10 + 4;
          } while (lVar10 != 0xc);
          puVar11 = puVar11 + 1;
        } while (puVar11 != local_58 + local_50);
      }
    }
    else if ((*(char *)(param_1 + 0x161) == '\x01') && ((longlong)local_50 != 0)) {
      puVar11 = local_58;
      do {
        lVar10 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x180) +
                  (ulonglong)(*puVar11 >> 9) * 8);
        uVar7 = (ulonglong)(*puVar11 & 0x1ff);
        uStack_120 = CONCAT44(uStack_120._4_4_,*(undefined4 *)(lVar10 + 8 + uVar7 * 0xc));
        local_128 = *(code **)(lVar10 + uVar7 * 0xc);
        lVar10 = 0;
        do {
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                         (ulonglong)(*(uint *)((longlong)&local_128 + lVar10) >> 9) * 8) + 0xc +
                       (ulonglong)((*(uint *)((longlong)&local_128 + lVar10) & 0x1ff) << 4)) == -1)
             || (cVar4 = FUN_146c13702(), cVar4 != '\0')) {
            FUN_1447cbafe(&local_178,local_17c,(longlong)&local_128 + lVar10,0);
          }
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0xc);
        puVar11 = puVar11 + 1;
      } while (puVar11 != local_58 + local_50);
    }
    FUN_140619b9c(&local_178,&local_128);
    if ((code **)(param_1 + 0x178) == &local_128) {
      if (local_128 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x178) != 0) {
        FUN_1400020a8();
      }
      *(code **)(param_1 + 0x178) = local_128;
      local_128 = (code *)0x0;
      *(undefined4 *)(param_1 + 0x180) = (undefined4)uStack_120;
      *(undefined4 *)(param_1 + 0x184) = uStack_120._4_4_;
    }
    local_130 = 0;
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_178);
  }
  else if (*param_2 == '\0') {
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar9 = *(longlong **)(param_2 + 0x80);
    if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
      plVar9 = (longlong *)(param_2 + 0x90);
    }
    uVar5 = (**(code **)(*plVar9 + 8))();
    cVar4 = (*pcVar2)(uVar5);
    *param_2 = cVar4;
    if ((cVar4 == '\0') && (FUN_148f70182(local_e8,param_2), *param_2 == '\0')) {
      pcVar2 = *(code **)(param_2 + 0x70);
      plVar9 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_2 + 0x80);
      }
      uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
      cVar4 = (*pcVar2)(uVar5);
      *param_2 = cVar4;
      if (cVar4 == '\0') goto LAB_148f91bb8;
    }
  }
  FUN_148f7ad1e(local_e8);
LAB_148f919cb:
  if ((local_38 ^ (ulonglong)local_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f91f16 FUN_148f91f16 body=226 status=ok
// SIG undefined FUN_148f91f16(void)

void FUN_148f91f16(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ba30d10;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(param_1 + 0x31);
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f91fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 148f91ff8 FUN_148f91ff8 body=95 status=ok
// SIG undefined FUN_148f91ff8(void)

undefined8 FUN_148f91ff8(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  local_18 = *(undefined8 *)(lVar1 + 0x150);
  local_28 = *(undefined4 *)(lVar1 + 0x140);
  uStack_24 = *(undefined4 *)(lVar1 + 0x144);
  uStack_20 = *(undefined4 *)(lVar1 + 0x148);
  uStack_1c = *(undefined4 *)(lVar1 + 0x14c);
  FUN_148f71a64(param_4,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f92082 FUN_148f92082 body=29 status=ok
// SIG undefined FUN_148f92082(void)

undefined8 FUN_148f92082(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f92108 FUN_148f92108 body=29 status=ok
// SIG undefined FUN_148f92108(void)

undefined8 FUN_148f92108(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f92126 FUN_148f92126 body=199 status=ok
// SIG undefined FUN_148f92126(void)

undefined8 * FUN_148f92126(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14ba30e50;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14ba30e70;
  param_1[7] = param_2;
  param_1[2] = &LAB_148f9231a;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14ba30e90;
  param_1[0x17] = &LAB_148f92368;
  param_1[0x12] = &LAB_148f92370;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148f921ee FUN_148f921ee body=38 status=ok
// SIG undefined FUN_148f921ee(void)

undefined8 FUN_148f921ee(undefined8 param_1,int param_2)

{
  FUN_148f923c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f92214 FUN_148f92214 body=207 status=ok
// SIG undefined FUN_148f92214(void)

void FUN_148f92214(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_148f922c5;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_148f922c5:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f922e4 FUN_148f922e4 body=53 status=ok
// SIG undefined FUN_148f922e4(void)

void FUN_148f922e4(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 148f9234a FUN_148f9234a body=29 status=ok
// SIG undefined FUN_148f9234a(void)

undefined8 FUN_148f9234a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f923a6 FUN_148f923a6 body=29 status=ok
// SIG undefined FUN_148f923a6(void)

undefined8 FUN_148f923a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f923c4 FUN_148f923c4 body=127 status=ok
// SIG undefined FUN_148f923c4(void)

void FUN_148f923c4(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba30e50;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148f92444 FUN_148f92444 body=199 status=ok
// SIG undefined FUN_148f92444(void)

undefined8 * FUN_148f92444(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14ba30ef0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14ba30f10;
  param_1[7] = param_2;
  param_1[2] = &LAB_148f92638;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14ba30f30;
  param_1[0x17] = &LAB_148f92686;
  param_1[0x12] = &LAB_148f9268e;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148f9250c FUN_148f9250c body=38 status=ok
// SIG undefined FUN_148f9250c(void)

undefined8 FUN_148f9250c(undefined8 param_1,int param_2)

{
  FUN_148f926e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f92532 FUN_148f92532 body=207 status=ok
// SIG undefined FUN_148f92532(void)

void FUN_148f92532(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_148f925e3;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_148f925e3:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f92602 FUN_148f92602 body=53 status=ok
// SIG undefined FUN_148f92602(void)

void FUN_148f92602(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 148f92668 FUN_148f92668 body=29 status=ok
// SIG undefined FUN_148f92668(void)

undefined8 FUN_148f92668(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f926c4 FUN_148f926c4 body=29 status=ok
// SIG undefined FUN_148f926c4(void)

undefined8 FUN_148f926c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f926e2 FUN_148f926e2 body=127 status=ok
// SIG undefined FUN_148f926e2(void)

void FUN_148f926e2(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba30ef0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148f92762 FUN_148f92762 body=41 status=ok
// SIG undefined FUN_148f92762(void)

void FUN_148f92762(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_148f9278c();
  return;
}



// FUNCTION 148f9278c FUN_148f9278c body=95 status=ok
// SIG undefined FUN_148f9278c(void)

void FUN_148f9278c(longlong param_1,uint param_2)

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



// FUNCTION 148f927ec FUN_148f927ec body=132 status=ok
// SIG undefined FUN_148f927ec(void)

void FUN_148f927ec(longlong param_1,int param_2)

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



// FUNCTION 148f92872 FUN_148f92872 body=162 status=ok
// SIG undefined FUN_148f92872(void)

undefined8 * FUN_148f92872(undefined8 *param_1)

{
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14ba310b0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0x3f50624dc0000000;
  param_1[0x21] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  return param_1;
}



// FUNCTION 148f92914 FUN_148f92914 body=38 status=ok
// SIG undefined FUN_148f92914(void)

undefined8 FUN_148f92914(undefined8 param_1,int param_2)

{
  FUN_148f9293a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9293a FUN_148f9293a body=281 status=ok
// SIG undefined FUN_148f9293a(void)

void FUN_148f9293a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ba310b0;
  plVar3 = (longlong *)param_1[0x30];
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
  plVar3 = (longlong *)param_1[0x2e];
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
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x23);
  plVar3 = (longlong *)param_1[0x14];
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
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f92a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 148f92a54 FUN_148f92a54 body=29 status=ok
// SIG undefined FUN_148f92a54(void)

undefined8 FUN_148f92a54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f92a8c FUN_148f92a8c body=29 status=ok
// SIG undefined FUN_148f92a8c(void)

bool FUN_148f92a8c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f92aaa FUN_148f92aaa body=26 status=ok
// SIG undefined FUN_148f92aaa(void)

bool FUN_148f92aaa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f92ac4 FUN_148f92ac4 body=24 status=ok
// SIG undefined FUN_148f92ac4(void)

bool FUN_148f92ac4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f92adc FUN_148f92adc body=101 status=ok
// SIG undefined FUN_148f92adc(void)

void FUN_148f92adc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba310d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f92b42 FUN_148f92b42 body=101 status=ok
// SIG undefined FUN_148f92b42(void)

void FUN_148f92b42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba310d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f92ba8 FUN_148f92ba8 body=134 status=ok
// SIG undefined FUN_148f92ba8(void)

void FUN_148f92ba8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aedba20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba310d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f92c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f92c2e FUN_148f92c2e body=52 status=ok
// SIG undefined FUN_148f92c2e(void)

void FUN_148f92c2e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f92c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148f92c62 FUN_148f92c62 body=167 status=ok
// SIG undefined FUN_148f92c62(void)

bool FUN_148f92c62(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f92d0a FUN_148f92d0a body=640 status=ok
// SIG undefined FUN_148f92d0a(void)

undefined8 * FUN_148f92d0a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_14ae728b0;
  lVar2 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar2;
  param_1[4] = 0;
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)(param_2 + 0x30);
    if (*(undefined8 **)(param_2 + 0x20) != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_2 + 0x20);
    }
    (**(code **)*puVar8)(puVar8,param_1 + 4);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_148473ac0(param_1 + 10,iVar1,0);
    FUN_148473b33(param_1[10],uVar3,iVar1);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_148473bc4(param_1 + 0xc,iVar1,0);
    FUN_148473c33(param_1[0xc],uVar3,iVar1);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_148473c68(param_1 + 0xe,iVar1,0);
    FUN_148473cdb(param_1[0xe],uVar3,iVar1);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x84);
  uVar6 = *(undefined4 *)(param_2 + 0x88);
  uVar7 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x11) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar7;
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  pvVar4 = *(void **)(param_2 + 0x90);
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],pvVar4,(longlong)iVar1 << 2);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_144a69486(param_1 + 0x14,param_2 + 0xa0);
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_2 + 200);
  pvVar4 = *(void **)(param_2 + 0xc0);
  *(int *)(param_1 + 0x19) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x18,iVar1,0);
    memcpy((void *)param_1[0x18],pvVar4,(longlong)iVar1 << 2);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  FUN_140cae46a(param_1 + 0x1a,param_2 + 0xd0);
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  FUN_145c3f772(param_1 + 0x24,param_2 + 0x120);
  return param_1;
}



// FUNCTION 148f92f8c FUN_148f92f8c body=89 status=ok
// SIG undefined FUN_148f92f8c(void)

bool FUN_148f92f8c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459f4f8e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f92f9c;
  }
  param_2 = 0;
LAB_148f92f9c:
  bVar2 = true;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_2 + 0x448) == *(int *)(param_1 + 8))) {
    bVar2 = *(int *)(param_2 + 0x420) == 0;
  }
  return bVar2;
}



// FUNCTION 148f92fe6 FUN_148f92fe6 body=32 status=ok
// SIG undefined FUN_148f92fe6(void)

undefined8 FUN_148f92fe6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGroupEdgeInsertionFirstPointChange");
  return param_2;
}



// FUNCTION 148f93006 FUN_148f93006 body=29 status=ok
// SIG undefined FUN_148f93006(void)

undefined8 FUN_148f93006(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f93024 FUN_148f93024 body=203 status=ok
// SIG undefined FUN_148f93024(void)

undefined8 * FUN_148f93024(undefined8 *param_1)

{
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14ba31320;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return param_1;
}



// FUNCTION 148f930f0 FUN_148f930f0 body=38 status=ok
// SIG undefined FUN_148f930f0(void)

undefined8 FUN_148f930f0(undefined8 param_1,int param_2)

{
  FUN_148f93116();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f93116 FUN_148f93116 body=340 status=ok
// SIG undefined FUN_148f93116(void)

void FUN_148f93116(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ba31320;
  plVar3 = (longlong *)param_1[0x32];
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
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x27);
  plVar3 = (longlong *)param_1[0x26];
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
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x14];
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
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f9325f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 148f9326a FUN_148f9326a body=29 status=ok
// SIG undefined FUN_148f9326a(void)

undefined8 FUN_148f9326a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f932a2 FUN_148f932a2 body=29 status=ok
// SIG undefined FUN_148f932a2(void)

bool FUN_148f932a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f932c0 FUN_148f932c0 body=26 status=ok
// SIG undefined FUN_148f932c0(void)

bool FUN_148f932c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f932da FUN_148f932da body=24 status=ok
// SIG undefined FUN_148f932da(void)

bool FUN_148f932da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f932f2 FUN_148f932f2 body=101 status=ok
// SIG undefined FUN_148f932f2(void)

void FUN_148f932f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba31340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f93358 FUN_148f93358 body=101 status=ok
// SIG undefined FUN_148f93358(void)

void FUN_148f93358(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba31340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f933be FUN_148f933be body=134 status=ok
// SIG undefined FUN_148f933be(void)

void FUN_148f933be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aedba20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba31340;
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
                    /* WARNING: Could not recover jumptable at 0x000148f93435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f93444 FUN_148f93444 body=52 status=ok
// SIG undefined FUN_148f93444(void)

void FUN_148f93444(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f93475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148f93478 FUN_148f93478 body=167 status=ok
// SIG undefined FUN_148f93478(void)

bool FUN_148f93478(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f93520 FUN_148f93520 body=132 status=ok
// SIG undefined FUN_148f93520(void)

void FUN_148f93520(longlong param_1,int param_2)

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



// FUNCTION 148f935a6 FUN_148f935a6 body=63 status=ok
// SIG undefined FUN_148f935a6(void)

void FUN_148f935a6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f935e6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148f935e6 FUN_148f935e6 body=97 status=ok
// SIG undefined FUN_148f935e6(void)

ulonglong FUN_148f935e6(undefined8 param_1,uint param_2,uint param_3)

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


