// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1475b6be6 FUN_1475b6be6 body=77 status=ok
// SIG undefined FUN_1475b6be6(void)

undefined8 * FUN_1475b6be6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  FUN_1406ed278(param_1 + 1);
  FUN_1406ed278(param_1 + 0x23);
  FUN_1406ed278(param_1 + 0x45);
  FUN_1406ed278(param_1 + 0x67);
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1475b6c34 FUN_1475b6c34 body=583 status=ok
// SIG undefined FUN_1475b6c34(void)

void FUN_1475b6c34(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0x100000000;
  if ((longlong)*(int *)(param_1 + 0x168) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x168) * 0x128;
    lVar4 = *(longlong *)(param_1 + 0x160) + 8;
    do {
      FUN_140f937a0(&local_58,lVar4);
      lVar4 = lVar4 + 0x128;
      lVar6 = lVar6 + -0x128;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x178) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x178) * 0x458;
    lVar4 = *(longlong *)(param_1 + 0x170) + 0x338;
    do {
      FUN_140f937a0(&local_58,lVar4 + -0x330);
      FUN_140f937a0(&local_58,lVar4 + -0x220);
      FUN_140f937a0(&local_58,lVar4 + -0x110);
      FUN_140f937a0(&local_58,lVar4);
      lVar4 = lVar4 + 0x458;
      lVar6 = lVar6 + -0x458;
    } while (lVar6 != 0);
  }
  local_60 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_60[1] = (longlong)&DAT_100000001;
  *local_60 = (longlong)&PTR_FUN_14a492060;
  local_68 = local_60 + 2;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 2;
  if (local_40 == 0) {
    local_60[9] = local_48;
    *(undefined4 *)(local_60 + 7) = local_58;
    *(undefined4 *)((longlong)local_60 + 0x3c) = uStack_54;
    *(undefined4 *)(local_60 + 8) = uStack_50;
    *(undefined4 *)((longlong)local_60 + 0x44) = uStack_4c;
  }
  local_60[10] = local_40;
  local_40 = 0;
  *(undefined4 *)(local_60 + 0xb) = (undefined4)local_38;
  *(undefined4 *)((longlong)local_60 + 0x5c) = local_38._4_4_;
  local_38 = 0x100000000;
  FUN_140aec6f8(&local_68);
  plVar1 = local_60;
  if (local_60 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (plVar5 == (longlong *)0x0) goto LAB_1475b6e28;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1475b6df2:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1475b6e28;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (local_60 != plVar5) {
      *(longlong **)(param_1 + 0xe8) = local_60;
      if (plVar5 == (longlong *)0x0) goto LAB_1475b6e28;
      goto LAB_1475b6df2;
    }
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1475b6e28;
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1475b6e28:
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b6e7c FUN_1475b6e7c body=1472 status=ok
// SIG undefined FUN_1475b6e7c(void)

void FUN_1475b6e7c(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined2 local_2e2;
  undefined2 local_2e0;
  undefined2 local_2de;
  int local_2dc;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c4;
  undefined8 local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined **local_298;
  uint local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  undefined1 local_27c;
  undefined2 local_278;
  undefined8 local_274;
  undefined2 local_26c;
  undefined1 local_26a;
  undefined1 local_269;
  undefined2 local_268;
  undefined4 local_264;
  undefined1 local_260;
  undefined1 local_25c;
  undefined1 local_258 [96];
  undefined1 local_1f8 [120];
  undefined **local_180 [10];
  char local_130;
  char local_118;
  char local_100;
  undefined **local_f0;
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  char local_d4;
  undefined2 local_d0;
  undefined8 local_cc;
  undefined2 local_c4;
  undefined1 local_c2;
  char local_c1;
  undefined2 local_c0;
  undefined4 local_bc;
  char local_b8;
  undefined2 local_b0;
  longlong local_a8;
  char local_a0;
  undefined1 local_98;
  char local_88;
  char local_70;
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  plVar7 = (longlong *)FUN_1475b743e();
  if (plVar7 != (longlong *)0x0) {
    uVar2 = *(uint *)(param_3 + 0x10);
    local_2c0 = param_2;
    lVar8 = FUN_14009d2a0();
    lVar9 = FUN_14038fb82();
    piVar4 = *(int **)(param_3 + 8);
    if (piVar4 == (int *)0x0) {
      iVar10 = 0;
      iVar11 = 0;
      iVar14 = 0;
      iVar15 = 0;
    }
    else {
      iVar10 = *piVar4;
      iVar11 = piVar4[1];
      iVar14 = piVar4[2];
      iVar15 = piVar4[3];
    }
    uVar16 = (uint)CONCAT12(((iVar11 != 0 || iVar10 != 0) || iVar14 != 0) || iVar15 != 0,
                            *(undefined2 *)(lVar8 + 100));
    local_2d0 = param_4;
    if ((char)(uVar2 >> 0x18) == '\a') {
      lVar5 = *(longlong *)(param_1 + 0x78);
      lVar13 = (ulonglong)(uVar2 & 0xffffff) * 0x458;
      lVar1 = lVar13 + lVar5;
      iVar3 = *(int *)(lVar5 + 0x68 + lVar13);
      if (((((iVar3 != 0) || (*(char *)(lVar1 + 0x84) != '\0')) || (*(int *)(lVar1 + 0x178) != 0))
          || ((*(char *)(lVar1 + 0x194) != '\0' || (*(int *)(lVar1 + 0x288) != 0)))) ||
         ((*(char *)(lVar1 + 0x2a4) != '\0' ||
          ((*(int *)(lVar1 + 0x398) != 0 || (*(char *)(lVar1 + 0x3b4) == '\x01')))))) {
        local_274 = *(undefined8 *)(lVar1 + 0x448);
        if ((int)local_274 == -1) {
          local_274 = 0xffffffff;
        }
        local_2de = *(undefined2 *)(lVar9 + 0xf0);
        local_26a = *(undefined1 *)(lVar1 + 0x450);
        local_2d8 = CONCAT71(local_2d8._1_7_,local_26a);
        local_2e2 = *(undefined2 *)(lVar8 + 0x72);
        local_2e0 = *(undefined2 *)(lVar8 + 0x78);
        if ((int)local_274 == -1) {
          local_274 = 0xffffffff;
        }
        local_2c4 = *(undefined4 *)(lVar1 + 0x454);
        local_27c = 1;
        if ((int)local_274 == -1) {
          local_274 = 0xffffffff;
        }
        local_2a0 = lVar13 + lVar5 + 8;
        uVar12 = 1;
        local_269 = 1;
        local_260 = 1;
        local_25c = 0;
        local_298 = &PTR_FUN_14a4c53b0;
        uVar6 = 1;
        if (iVar3 == 0) {
          uVar6 = *(undefined1 *)(lVar1 + 0x84);
        }
        local_2dc = iVar3;
        local_290 = uVar16;
        local_28c = iVar10;
        local_288 = iVar11;
        local_284 = iVar14;
        local_280 = iVar15;
        local_278 = local_2de;
        local_26c = local_2e2;
        local_268 = local_2e0;
        local_264 = local_2c4;
        local_2f8._0_1_ = uVar6;
        FUN_1475b767e(&local_298,local_258,*(undefined2 *)(lVar8 + 0x7e));
        local_2a8 = lVar1 + 0x118;
        if (*(int *)(lVar1 + 0x178) == 0) {
          uVar12 = *(undefined1 *)(lVar1 + 0x194);
        }
        local_2f8._0_1_ = uVar12;
        FUN_1475b770a(local_258,local_1f8,*(undefined2 *)(lVar8 + 0x80));
        local_2b0 = lVar1 + 0x228;
        uVar6 = 1;
        local_2f8._0_1_ = 1;
        if (*(int *)(lVar1 + 0x288) == 0) {
          local_2f8._0_1_ = *(undefined1 *)(lVar1 + 0x2a4);
        }
        FUN_1475b77a0(local_1f8,local_180,*(undefined2 *)(lVar8 + 0x82));
        local_2b8 = lVar1 + 0x338;
        if (*(int *)(lVar1 + 0x398) == 0) {
          uVar6 = *(undefined1 *)(lVar1 + 0x3b4);
        }
        local_2f8 = CONCAT71(local_2f8._1_7_,uVar6);
        FUN_1475b7844(local_180,&local_f0,*(undefined2 *)(lVar8 + 0x84));
        FUN_1475b757c(param_4,&local_f0);
        local_f0 = &PTR_FUN_14a4c0a50;
        if (local_58 == '\x01') {
          local_58 = '\0';
        }
        if (local_70 == '\x01') {
          local_70 = '\0';
        }
        if (local_88 == '\x01') {
          local_88 = '\0';
        }
        if (local_a0 == '\x01') {
          local_a0 = '\0';
        }
        if (local_b8 == '\x01') {
          local_b8 = '\0';
        }
        if (local_c1 == '\x01') {
          local_c1 = '\0';
        }
        if ((int)local_cc != -1) {
          local_cc = 0xffffffff;
        }
        if (local_d4 == '\x01') {
          local_d4 = '\0';
        }
        local_180[0] = &PTR_FUN_14a4c0a70;
        if (local_100 == '\x01') {
          local_100 = '\0';
        }
        if (local_118 == '\x01') {
          local_118 = '\0';
        }
        if (local_130 == '\x01') {
          local_130 = '\0';
        }
      }
    }
    else if (uVar2 >> 0x18 == 6) {
      lVar5 = *(longlong *)(param_1 + 0x68);
      lVar13 = (ulonglong)(uVar2 & 0xffffff) * 0x128;
      lVar1 = lVar5 + lVar13;
      if ((*(int *)(lVar5 + 0x68 + lVar13) != 0) || (*(char *)(lVar1 + 0x84) == '\x01')) {
        local_2d8 = lVar13 + lVar5 + 8;
        local_cc = *(undefined8 *)(lVar1 + 0x118);
        if ((int)local_cc == -1) {
          local_cc = 0xffffffff;
        }
        local_d0 = *(undefined2 *)(lVar9 + 0xea);
        local_c2 = *(undefined1 *)(lVar1 + 0x120);
        local_2e0 = CONCAT11(local_2e0._1_1_,local_c2);
        local_c4 = *(undefined2 *)(lVar8 + 0x72);
        local_2e2 = *(undefined2 *)(lVar8 + 0x78);
        if ((int)local_cc == -1) {
          local_cc = 0xffffffff;
        }
        local_bc = *(undefined4 *)(lVar1 + 0x124);
        if ((int)local_cc == -1) {
          local_cc = 0xffffffff;
        }
        local_b0 = *(undefined2 *)(lVar8 + 0x7e);
        local_d4 = '\x01';
        if ((int)local_cc == -1) {
          local_cc = 0xffffffff;
        }
        local_c1 = '\x01';
        local_b8 = '\x01';
        local_a0 = '\x01';
        local_98 = 0;
        local_f0 = &PTR_FUN_14a4c53d0;
        local_e8 = uVar16;
        local_e4 = iVar10;
        local_e0 = iVar11;
        local_dc = iVar14;
        local_d8 = iVar15;
        local_c0 = local_2e2;
        local_a8 = local_2d8;
        FUN_1475b747a(param_4);
      }
    }
    local_2f8 = local_2d0;
    (**(code **)(*plVar7 + 0x10))(plVar7,param_1 + -0xf8,local_2c0,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475b743e FUN_1475b743e body=59 status=ok
// SIG undefined FUN_1475b743e(void)

undefined8 FUN_1475b743e(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14595791e();
  lVar2 = FUN_140561e42(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_144718840(lVar2,uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1475b747a FUN_1475b747a body=257 status=ok
// SIG undefined FUN_1475b747a(void)

void FUN_1475b747a(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147612e3e(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b757c FUN_1475b757c body=257 status=ok
// SIG undefined FUN_1475b757c(void)

void FUN_1475b757c(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_14761338c(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b767e FUN_1475b767e body=139 status=ok
// SIG undefined FUN_1475b767e(void)

undefined8 *
FUN_1475b767e(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_30;
  local_2e = param_5;
  local_28 = *param_4;
  local_20 = 1;
  local_48 = param_1 + 0x30;
  uVar1 = *(undefined1 *)(param_1 + 0x3c);
  local_30 = param_3;
  FUN_147612f84(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x2c);
  *(undefined1 *)(param_2 + 0xb) = uVar1;
  *param_2 = &PTR_FUN_14a4c53f0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b770a FUN_1475b770a body=148 status=ok
// SIG undefined FUN_1475b770a(void)

undefined8 *
FUN_1475b770a(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_30;
  local_2e = param_5;
  local_28 = *param_4;
  local_20 = 1;
  local_40 = param_1 + 0x40;
  local_48 = param_1 + 0x30;
  uVar1 = *(undefined1 *)(param_1 + 0x58);
  local_30 = param_3;
  FUN_147613080(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x2c);
  *(undefined1 *)(param_2 + 0xe) = uVar1;
  *param_2 = &PTR_FUN_14a4c5410;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b77a0 FUN_1475b77a0 body=162 status=ok
// SIG undefined FUN_1475b77a0(void)

undefined8 *
FUN_1475b77a0(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &local_38;
  local_36 = param_5;
  local_30 = *param_4;
  local_28 = 1;
  local_48 = param_1 + 0x58;
  local_50 = param_1 + 0x40;
  local_58 = param_1 + 0x30;
  uVar1 = *(undefined1 *)(param_1 + 0x70);
  local_38 = param_3;
  FUN_147613170(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x2c);
  *(undefined1 *)(param_2 + 0x11) = uVar1;
  *param_2 = &PTR_FUN_14a4c5430;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b7844 FUN_1475b7844 body=178 status=ok
// SIG undefined FUN_1475b7844(void)

undefined8 *
FUN_1475b7844(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_40;
  local_3e = param_5;
  local_38 = *param_4;
  local_30 = 1;
  local_50 = param_1 + 0x70;
  local_58 = param_1 + 0x58;
  local_60 = param_1 + 0x40;
  local_68 = param_1 + 0x30;
  uVar1 = *(undefined1 *)(param_1 + 0x88);
  local_40 = param_3;
  FUN_147613282(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x2c);
  *(undefined1 *)(param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14a4c5450;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b78f8 FUN_1475b78f8 body=1012 status=ok
// SIG undefined FUN_1475b78f8(void)

void FUN_1475b78f8(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_4f8 [40];
  longlong *local_4d0;
  longlong *local_4c8;
  undefined8 *local_4c0;
  undefined8 local_4b8;
  undefined **local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined4 local_498;
  undefined8 local_494;
  undefined8 uStack_48c;
  undefined4 local_484;
  undefined4 local_480;
  undefined8 local_47c;
  undefined8 uStack_474;
  undefined4 local_46c;
  undefined8 local_468;
  undefined2 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined5 uStack_440;
  undefined3 uStack_43b;
  undefined5 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_404;
  undefined8 local_3fc;
  undefined8 uStack_3f4;
  undefined4 local_3ec;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined1 local_290 [272];
  undefined1 local_180 [272];
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  puVar6 = (undefined8 *)param_1[0x22];
  uVar5 = 0;
  if ((longlong)(int)param_1[0x23] != 0) {
    puVar7 = puVar6 + (longlong)(int)param_1[0x23] * 0x23;
    do {
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_498 = 2;
      local_484 = 0;
      local_494 = 0;
      uStack_48c = 0;
      local_480 = 2;
      local_46c = 0;
      local_47c = 0;
      uStack_474 = 0;
      local_468 = 2;
      local_4b0 = &PTR_FUN_14a46ea60;
      local_460 = 0x404;
      local_410 = 0;
      local_408 = 0;
      uStack_438 = 0;
      local_448 = 0;
      uStack_440 = 0;
      uStack_43b = 0;
      local_458 = 0;
      uStack_450 = 0;
      local_430 = 0;
      uStack_428 = 0;
      local_404 = 0xffffffff00000080;
      local_3d8 = 0;
      local_3d0 = 0;
      local_3ec = 0;
      local_3fc = 0;
      uStack_3f4 = 0;
      local_3cc = 0xffffffff00000080;
      local_3c4 = 0;
      local_3b8 = 0;
      local_3b0 = 0;
      local_3a8 = 0x10000ea60;
      local_4b8 = *puVar6;
      uStack_398 = CONCAT31(uStack_398._1_3_,2);
      uStack_394 = 0xffffffff;
      local_3a0 = local_4b8;
      FUN_14753be88(&local_4b0,puVar6 + 1);
      iVar3 = (int)param_1[0x2d];
      *(uint *)(param_1 + 0x2d) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x16c) < iVar3 + 1U) {
        FUN_1476134dc(param_1 + 0x2c,iVar3);
      }
      puVar1 = (undefined8 *)(param_1[0x2c] + (longlong)iVar3 * 0x128);
      *puVar1 = local_4b8;
      FUN_140737604(puVar1 + 1,&local_4b0);
      *(undefined4 *)(puVar1 + 0x23) = (undefined4)local_3a0;
      *(undefined4 *)((longlong)puVar1 + 0x11c) = local_3a0._4_4_;
      *(undefined4 *)(puVar1 + 0x24) = uStack_398;
      *(undefined4 *)((longlong)puVar1 + 0x124) = uStack_394;
      FUN_1404dbc70(&local_4b0);
      puVar6 = puVar6 + 0x23;
    } while (puVar6 != puVar7);
    uVar5 = (undefined4)param_1[0x23];
    puVar6 = (undefined8 *)param_1[0x22];
  }
  iVar3 = *(int *)((longlong)param_1 + 0x11c);
  FUN_1458c57f7(puVar6,uVar5);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x11c) != 0)) {
    FUN_147613570(param_1 + 0x22);
  }
  puVar6 = (undefined8 *)param_1[0x28];
  uVar5 = 0;
  if ((longlong)(int)param_1[0x29] != 0) {
    local_4c0 = puVar6 + (longlong)(int)param_1[0x29] * 0x89;
    local_4c8 = param_1 + 0x2e;
    local_4d0 = param_1;
    do {
      FUN_1475ad47e();
      local_4b8 = *puVar6;
      uStack_68 = CONCAT31(uStack_68._1_3_,2);
      uStack_64 = 0xffffffff;
      local_70 = local_4b8;
      FUN_14753be88(&local_4b0,puVar6 + 1);
      FUN_14753be88(&local_3a0,puVar6 + 0x23);
      FUN_14753be88(local_290,puVar6 + 0x45);
      FUN_14753be88(local_180,puVar6 + 0x67);
      iVar3 = (int)local_4d0[0x2f];
      *(uint *)(local_4d0 + 0x2f) = iVar3 + 1U;
      if (*(uint *)((longlong)local_4d0 + 0x17c) < iVar3 + 1U) {
        FUN_1476135a0(local_4c8,iVar3);
      }
      lVar4 = *local_4c8;
      FUN_1475b18b8(lVar4 + (longlong)iVar3 * 0x458,&local_4b8);
      puVar2 = (undefined4 *)(lVar4 + 0x448 + (longlong)iVar3 * 0x458);
      *puVar2 = (undefined4)local_70;
      puVar2[1] = local_70._4_4_;
      puVar2[2] = uStack_68;
      puVar2[3] = uStack_64;
      FUN_1404dbc70(local_180);
      FUN_1404dbc70(local_290);
      FUN_1404dbc70(&local_3a0);
      FUN_1404dbc70(&local_4b0);
      puVar6 = puVar6 + 0x89;
    } while (puVar6 != local_4c0);
    uVar5 = (undefined4)local_4d0[0x29];
    puVar6 = (undefined8 *)local_4d0[0x28];
    param_1 = local_4d0;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x14c);
  FUN_1458c58dd(puVar6,uVar5);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x14c) != 0)) {
    FUN_147613634(param_1 + 0x28);
  }
  (**(code **)(*param_1 + 0x368))(param_1);
  if ((local_60 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b7cee FUN_1475b7cee body=845 status=ok
// SIG undefined FUN_1475b7cee(void)

void FUN_1475b7cee(longlong *param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined4 local_198;
  int iStack_194;
  undefined4 local_190;
  int iStack_18c;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined **ppuStack_170;
  ulonglong local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  undefined5 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar3 = param_1[0x2c];
  iVar2 = (int)param_1[0x2d];
  lVar7 = (longlong)iVar2;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      if ((((*(int *)(lVar3 + 0x118 + lVar8) == (int)*param_2) &&
           (*(int *)(lVar3 + 0x11c + lVar8) == *(int *)((longlong)param_2 + 4))) &&
          (*(char *)(lVar3 + 0x120 + lVar8) == (char)param_2[1])) &&
         (*(int *)(lVar3 + 0x124 + lVar8) == *(int *)((longlong)param_2 + 0xc))) {
        lVar3 = lVar3 + lVar8;
        goto LAB_1475b7ee0;
      }
      lVar8 = lVar8 + 0x128;
    } while (lVar7 * 0x128 - lVar8 != 0);
  }
  lVar8 = *param_2;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 2;
  local_154 = 0;
  uStack_14c = 0;
  local_144 = 0x200000000;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  local_128 = 2;
  ppuStack_170 = &PTR_FUN_14a46ea60;
  local_120 = 0x404;
  local_d0 = 0;
  local_c8 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_fb = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_98 = 0;
  local_90 = 0;
  local_ac = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0x10000ea60;
  local_60 = (int)*param_2;
  iStack_5c = *(int *)((longlong)param_2 + 4);
  iStack_58 = (int)param_2[1];
  iStack_54 = *(int *)((longlong)param_2 + 0xc);
  *(uint *)(param_1 + 0x2d) = iVar2 + 1U;
  local_178 = lVar8;
  if (*(uint *)((longlong)param_1 + 0x16c) < iVar2 + 1U) {
    FUN_1476134dc(param_1 + 0x2c,iVar2);
    lVar3 = param_1[0x2c];
  }
  plVar4 = (longlong *)(lVar3 + lVar7 * 0x128);
  *plVar4 = lVar8;
  FUN_147613664(plVar4 + 1,&ppuStack_170);
  *(int *)(plVar4 + 0x23) = local_60;
  *(int *)((longlong)plVar4 + 0x11c) = iStack_5c;
  *(int *)(plVar4 + 0x24) = iStack_58;
  *(int *)((longlong)plVar4 + 0x124) = iStack_54;
  FUN_1404dbc70(&ppuStack_170);
  lVar3 = param_1[0x2c] + lVar7 * 0x128;
  (**(code **)(*param_1 + 0x368))(param_1);
LAB_1475b7ee0:
  local_1a8 = &local_178;
  local_178 = 0;
  ppuStack_170 = (undefined **)0x0;
  local_168 = local_168 & 0xffffffff00000000;
  FUN_14752859e(lVar3 + 8,param_3,param_4,0);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 == '\0') goto LAB_1475b7fb6;
  local_180 = param_1[0x13];
  local_188 = param_1[0x14];
  local_190 = CONCAT31(local_190._1_3_,1);
  iStack_18c = param_3;
  local_198 = CONCAT31(local_198._1_3_,1);
  iStack_194 = param_3;
  cVar1 = (char)local_188;
  iVar2 = (int)((ulonglong)local_188 >> 0x20);
  if ((char)local_180 == '\x02') {
    plVar6 = &local_180;
    if (cVar1 == '\x02') {
      plVar4 = &local_188;
    }
    else {
      plVar4 = &local_188;
      if (iVar2 <= param_3) {
        plVar4 = (longlong *)&local_198;
      }
      if (iVar2 < param_3) {
        plVar4 = (longlong *)&local_198;
      }
    }
LAB_1475b7f95:
    local_178 = *plVar6;
    ppuStack_170 = (undefined **)*plVar4;
  }
  else {
    iVar5 = (int)((ulonglong)local_180 >> 0x20);
    if (cVar1 == '\x02') {
      plVar4 = &local_188;
LAB_1475b7f72:
      if (param_3 < iVar5) {
        plVar6 = (longlong *)&local_190;
      }
      else {
        plVar6 = (longlong *)&local_190;
        if (iVar5 < param_3) {
          plVar6 = &local_180;
        }
      }
      goto LAB_1475b7f95;
    }
    if ((iVar5 <= iVar2) && ((iVar5 != iVar2 || ((char)local_180 != '\0' && cVar1 != '\0')))) {
      plVar4 = &local_188;
      if (iVar2 <= param_3) {
        plVar4 = (longlong *)&local_198;
      }
      if (iVar2 < param_3) {
        plVar4 = (longlong *)&local_198;
      }
      goto LAB_1475b7f72;
    }
    local_178 = CONCAT44(param_3,local_190);
    ppuStack_170 = (undefined **)CONCAT44(param_3,local_198);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_178);
LAB_1475b7fb6:
  if ((local_50 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475b803c FUN_1475b803c body=804 status=ok
// SIG undefined FUN_1475b803c(void)

void FUN_1475b803c(longlong *param_1,int *param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_4f8 [32];
  longlong *local_4d8;
  undefined4 local_4c8;
  int iStack_4c4;
  undefined4 local_4c0;
  int iStack_4bc;
  longlong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong lStack_4a0;
  undefined4 local_498;
  undefined1 local_390 [272];
  undefined1 local_280 [272];
  undefined1 local_170 [272];
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  if ((longlong)(int)param_1[0x2f] != 0) {
    lVar8 = param_1[0x2e];
    lVar7 = (longlong)(int)param_1[0x2f] * 0x458;
    do {
      if ((((*(int *)(lVar8 + 0x448) == *param_2) && (*(int *)(lVar8 + 0x44c) == param_2[1])) &&
          (*(char *)(lVar8 + 0x450) == (char)param_2[2])) && (*(int *)(lVar8 + 0x454) == param_2[3])
         ) {
        if (lVar8 != 0) goto LAB_1475b8196;
        break;
      }
      lVar8 = lVar8 + 0x458;
      lVar7 = lVar7 + -0x458;
    } while (lVar7 != 0);
  }
  FUN_1475b6be6(&local_4a8,*(undefined8 *)param_2);
  local_60 = *param_2;
  iStack_5c = param_2[1];
  iStack_58 = param_2[2];
  iStack_54 = param_2[3];
  iVar3 = (int)param_1[0x2f];
  *(uint *)(param_1 + 0x2f) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x17c) < iVar3 + 1U) {
    FUN_1476135a0(param_1 + 0x2e,iVar3);
  }
  lVar7 = param_1[0x2e];
  lVar8 = (longlong)iVar3 * 0x458;
  FUN_14761374a(lVar7 + lVar8,&local_4a8);
  piVar1 = (int *)(lVar7 + 0x448 + lVar8);
  *piVar1 = local_60;
  piVar1[1] = iStack_5c;
  piVar1[2] = iStack_58;
  piVar1[3] = iStack_54;
  FUN_1404dbc70(local_170);
  FUN_1404dbc70(local_280);
  FUN_1404dbc70(local_390);
  FUN_1404dbc70(&lStack_4a0);
  lVar8 = lVar8 + param_1[0x2e];
  (**(code **)(*param_1 + 0x368))(param_1);
LAB_1475b8196:
  local_498 = 0;
  local_4a8 = 0;
  lStack_4a0 = 0;
  local_4d8 = &local_4a8;
  FUN_14752859e(lVar8 + 8,param_3,*param_4,0);
  local_498 = 0;
  local_4a8 = 0;
  lStack_4a0 = 0;
  local_4d8 = &local_4a8;
  FUN_14752859e(lVar8 + 0x118,param_3,param_4[1],0);
  local_498 = 0;
  local_4a8 = 0;
  lStack_4a0 = 0;
  local_4d8 = &local_4a8;
  FUN_14752859e(lVar8 + 0x228,param_3,param_4[2],0);
  local_498 = 0;
  local_4a8 = 0;
  lStack_4a0 = 0;
  local_4d8 = &local_4a8;
  FUN_14752859e(lVar8 + 0x338,param_3,param_4[3],0);
  cVar2 = FUN_145c40fca(param_1,1);
  if (cVar2 == '\0') goto LAB_1475b82da;
  local_4b0 = param_1[0x13];
  local_4b8 = param_1[0x14];
  local_4c0 = CONCAT31(local_4c0._1_3_,1);
  iStack_4bc = param_3;
  local_4c8 = CONCAT31(local_4c8._1_3_,1);
  iStack_4c4 = param_3;
  cVar2 = (char)local_4b8;
  iVar3 = (int)((ulonglong)local_4b8 >> 0x20);
  if ((char)local_4b0 == '\x02') {
    plVar6 = &local_4b0;
    if (cVar2 == '\x02') {
      plVar4 = &local_4b8;
    }
    else {
      plVar4 = &local_4b8;
      if (iVar3 <= param_3) {
        plVar4 = (longlong *)&local_4c8;
      }
      if (iVar3 < param_3) {
        plVar4 = (longlong *)&local_4c8;
      }
    }
LAB_1475b82b9:
    local_4a8 = *plVar6;
    lStack_4a0 = *plVar4;
  }
  else {
    iVar5 = (int)((ulonglong)local_4b0 >> 0x20);
    if (cVar2 == '\x02') {
      plVar4 = &local_4b8;
LAB_1475b8296:
      if (param_3 < iVar5) {
        plVar6 = (longlong *)&local_4c0;
      }
      else {
        plVar6 = (longlong *)&local_4c0;
        if (iVar5 < param_3) {
          plVar6 = &local_4b0;
        }
      }
      goto LAB_1475b82b9;
    }
    if ((iVar5 <= iVar3) && ((iVar5 != iVar3 || ((char)local_4b0 != '\0' && cVar2 != '\0')))) {
      plVar4 = &local_4b8;
      if (iVar3 <= param_3) {
        plVar4 = (longlong *)&local_4c8;
      }
      if (iVar3 < param_3) {
        plVar4 = (longlong *)&local_4c8;
      }
      goto LAB_1475b8296;
    }
    local_4a8 = CONCAT44(param_3,local_4c0);
    lStack_4a0 = CONCAT44(param_3,local_4c8);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_4a8);
LAB_1475b82da:
  if ((local_50 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475b8362 FUN_1475b8362 body=122 status=ok
// SIG undefined FUN_1475b8362(void)

ulonglong FUN_1475b8362(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 unaff_RDI;
  undefined7 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar3 = (ulonglong)(int)param_1[0x2d];
  if ((longlong)uVar3 < 1) {
LAB_1475b83bb:
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)param_1[0x2c];
    uVar2 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (*plVar4 == *param_2) {
      uVar3 = CONCAT71(uVar2,1);
    }
    else {
      uVar1 = 0;
      do {
        plVar4 = plVar4 + 0x25;
        if (uVar3 - 1 == uVar1) goto LAB_1475b83bb;
        uVar1 = uVar1 + 1;
      } while (*plVar4 != *param_2);
      uVar3 = CONCAT71(uVar2,uVar1 < uVar3);
    }
    FUN_1475b83dc();
    (**(code **)(*param_1 + 0x368))(param_1);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1475b83dc FUN_1475b83dc body=100 status=ok
// SIG undefined FUN_1475b83dc(void)

void FUN_1475b83dc(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_1404dbc70(lVar1 + (longlong)(int)param_2 * 0x128 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x128);
    memmove(_Dst,(void *)((longlong)_Dst + 0x128),(longlong)(int)(~param_2 + iVar2) * 0x128);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1476137aa(param_1);
  return;
}



// FUNCTION 1475b8440 FUN_1475b8440 body=133 status=ok
// SIG undefined FUN_1475b8440(void)

ulonglong FUN_1475b8440(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  longlong *plVar5;
  
  uVar2 = (ulonglong)(int)param_1[0x2f];
  if ((longlong)uVar2 < 1) {
LAB_1475b8499:
    uVar2 = 0;
  }
  else {
    plVar1 = param_1 + 0x2e;
    plVar5 = (longlong *)*plVar1;
    uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (*plVar5 == *param_2) {
      uVar2 = CONCAT71(uVar4,1);
    }
    else {
      uVar3 = 0;
      do {
        plVar5 = plVar5 + 0x8b;
        if (uVar2 - 1 == uVar3) goto LAB_1475b8499;
        uVar3 = uVar3 + 1;
      } while (*plVar5 != *param_2);
      uVar2 = CONCAT71(uVar4,uVar3 < uVar2);
    }
    FUN_147613856(plVar1);
    FUN_1476138e4(plVar1);
    (**(code **)(*param_1 + 0x368))(param_1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1475b84c6 FUN_1475b84c6 body=26 status=ok
// SIG undefined FUN_1475b84c6(void)

void FUN_1475b84c6(undefined8 param_1)

{
  FUN_140836bcc();
  FUN_1475b78f8(param_1);
  return;
}



// FUNCTION 1475b84e5 FUN_1475b84e5 body=215 status=ok
// SIG undefined FUN_1475b84e5(void)

void FUN_1475b84e5(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = param_1[0xc];
  uVar6 = param_1[0xd];
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + 0xe);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  local_90 = *(undefined8 *)(param_1 + 6);
  local_a0 = param_1[8];
  uStack_9c = param_1[9];
  uStack_98 = param_1[10];
  uStack_94 = param_1[0xb];
  FUN_144a7484c(&local_a0,&local_88);
  *param_2 = local_88;
  param_2[1] = uStack_84;
  param_2[2] = uStack_80;
  param_2[3] = uStack_7c;
  param_2[4] = local_78;
  param_2[5] = uStack_74;
  param_2[6] = uStack_70;
  param_2[7] = uStack_6c;
  param_2[8] = uVar7;
  param_2[9] = uVar8;
  param_2[10] = (int)uVar1;
  param_2[0xb] = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined8 *)(param_2 + 0xc) = uVar2;
  *(undefined8 *)(param_2 + 0xe) = 0;
  param_2[0x10] = uVar5;
  param_2[0x11] = uVar6;
  param_2[0x12] = (int)uVar3;
  param_2[0x13] = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined8 *)(param_2 + 0x14) = uVar4;
  *(undefined8 *)(param_2 + 0x16) = 0;
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b85bd FUN_1475b85bd body=180 status=ok
// SIG undefined FUN_1475b85bd(void)

void FUN_1475b85bd(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = param_1[4];
  uVar8 = param_1[5];
  uVar1 = param_1[6];
  local_78 = *param_1;
  uStack_70 = param_1[1];
  local_68 = *(undefined4 *)(param_1 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_60 = *(undefined4 *)(param_1 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_1448052ee(&local_78,&local_58);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x44);
  uVar5 = *(undefined4 *)(param_1 + 9);
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x4c);
  uVar2 = param_1[10];
  *param_2 = uVar7;
  param_2[1] = uVar8;
  param_2[2] = uVar1;
  param_2[3] = local_48;
  param_2[4] = local_58;
  param_2[5] = local_50;
  *(undefined4 *)(param_2 + 6) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar4;
  *(undefined4 *)(param_2 + 7) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar6;
  param_2[8] = uVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b889c FUN_1475b889c body=203 status=ok
// SIG undefined FUN_1475b889c(void)

void FUN_1475b889c(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = DAT_14c759090;
  if (0.0 < DAT_14c759090) {
    dVar2 = *(double *)(param_1 + 0x260);
    dVar3 = *(double *)(param_1 + 0x268);
    dVar1 = *(double *)(param_1 + 0x270);
    FUN_1475b8967(param_1);
    dVar4 = 1.0 / dVar4;
    *(double *)(param_1 + 0x1e0) = dVar4 * (*(double *)(param_1 + 0x260) - dVar2);
    *(double *)(param_1 + 0x1e8) = (*(double *)(param_1 + 0x268) - dVar3) * dVar4;
    *(double *)(param_1 + 0x1f0) = (*(double *)(param_1 + 0x270) - dVar1) * dVar4;
    return;
  }
  FUN_1475b8967(param_1);
  return;
}



// FUNCTION 1475b8967 FUN_1475b8967 body=375 status=ok
// SIG undefined FUN_1475b8967(void)

void FUN_1475b8967(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  char local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(longlong *)(param_1 + 0xa8) == 0) ||
     (plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x1c8), plVar7 == (longlong *)0x0)) {
    local_f0 = '\0';
  }
  else {
    local_f0 = (**(code **)(*plVar7 + 0x480))(plVar7,0);
    local_f0 = local_f0 * '\x02';
  }
  uVar1 = param_2[2];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[4];
  local_f8 = 0;
  local_b0 = uVar2;
  local_a8 = uVar3;
  local_a0 = uVar1;
  local_98 = uVar6;
  local_90 = uVar5;
  local_88 = uVar4;
  FUN_1401ca0e6(param_1,&local_b0,&local_98,0);
  local_c8 = uVar2;
  local_c0 = uVar3;
  local_b8 = uVar1;
  FUN_144a48320(param_1);
  local_e0 = uVar6;
  local_d8 = uVar5;
  local_d0 = uVar4;
  FUN_144b21d44(param_1);
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b8ae0 FUN_1475b8ae0 body=178 status=ok
// SIG undefined FUN_1475b8ae0(void)

void FUN_1475b8ae0(undefined2 *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 auStack_68 [36];
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
    FUN_14116d4f0(local_40,param_2);
    local_42 = *(undefined1 *)(param_1 + 1);
    local_44 = *param_1;
    local_41 = 0;
    (**(code **)(*param_2 + 0x4a0))(param_2);
  }
  else {
    FUN_14116d4f0(local_40,param_2);
    (**(code **)(*param_2 + 0x490))(param_2,param_3,&DAT_14cadad98,*param_4);
  }
  FUN_14116d584(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b8b94 FUN_1475b8b94 body=59 status=ok
// SIG undefined FUN_1475b8b94(void)

void FUN_1475b8b94(longlong param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = rand();
  *(float *)(param_1 + 0x10) = ((float)(uVar1 & 0x7fff) / 32767.0) * param_2;
  return;
}



// FUNCTION 1475b8be6 FUN_1475b8be6 body=116 status=ok
// SIG undefined FUN_1475b8be6(void)

double * FUN_1475b8be6(double *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1459c5316(param_2,&local_28);
  *param_1 = (double)local_28;
  param_1[1] = (double)local_24;
  param_1[2] = (double)local_20;
  param_1[3] = (double)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b8c5b FUN_1475b8c5b body=98 status=ok
// SIG undefined FUN_1475b8c5b(void)

void FUN_1475b8c5b(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_3[3];
  local_10 = (float)param_3[2];
  local_14 = (float)param_3[1];
  local_18 = (float)*param_3;
  FUN_147a18f5a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b8d36 FUN_1475b8d36 body=98 status=ok
// SIG undefined FUN_1475b8d36(void)

void FUN_1475b8d36(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_3[3];
  local_10 = (float)param_3[2];
  local_14 = (float)param_3[1];
  local_18 = (float)*param_3;
  FUN_147a17c1e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b8e03 FUN_1475b8e03 body=98 status=ok
// SIG undefined FUN_1475b8e03(void)

void FUN_1475b8e03(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_3[3];
  local_10 = (float)param_3[2];
  local_14 = (float)param_3[1];
  local_18 = (float)*param_3;
  FUN_147a174d6();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b8ea6 FUN_1475b8ea6 body=98 status=ok
// SIG undefined FUN_1475b8ea6(void)

void FUN_1475b8ea6(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_3[3];
  local_10 = (float)param_3[2];
  local_14 = (float)param_3[1];
  local_18 = (float)*param_3;
  FUN_147a178ea();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b8f49 FUN_1475b8f49 body=98 status=ok
// SIG undefined FUN_1475b8f49(void)

void FUN_1475b8f49(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_3[3];
  local_10 = (float)param_3[2];
  local_14 = (float)param_3[1];
  local_18 = (float)*param_3;
  FUN_147a17f52();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b8fec FUN_1475b8fec body=98 status=ok
// SIG undefined FUN_1475b8fec(void)

void FUN_1475b8fec(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_3[3];
  local_10 = (float)param_3[2];
  local_14 = (float)param_3[1];
  local_18 = (float)*param_3;
  FUN_147a18272();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b9120 FUN_1475b9120 body=98 status=ok
// SIG undefined FUN_1475b9120(void)

void FUN_1475b9120(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_3[3];
  local_10 = (float)param_3[2];
  local_14 = (float)param_3[1];
  local_18 = (float)*param_3;
  FUN_1479dded4();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b91c3 FUN_1475b91c3 body=98 status=ok
// SIG undefined FUN_1475b91c3(void)

void FUN_1475b91c3(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_3[3];
  local_10 = (float)param_3[2];
  local_14 = (float)param_3[1];
  local_18 = (float)*param_3;
  FUN_1479ddd50();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b9285 FUN_1475b9285 body=122 status=ok
// SIG undefined FUN_1475b9285(void)

void FUN_1475b9285(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = (float)param_3[3];
  local_20 = (float)param_3[2];
  local_24 = (float)param_3[1];
  local_28 = (float)*param_3;
  FUN_1411ab38a(&local_28,&local_2c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1479de048(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58,local_2c);
}



// FUNCTION 1475b9378 FUN_1475b9378 body=98 status=ok
// SIG undefined FUN_1475b9378(void)

void FUN_1475b9378(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_3[3];
  local_10 = (float)param_3[2];
  local_14 = (float)param_3[1];
  local_18 = (float)*param_3;
  FUN_1479e46b2();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b93db FUN_1475b93db body=60 status=ok
// SIG undefined FUN_1475b93db(void)

longlong * FUN_1475b93db(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a81888(param_2);
  *param_1 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1475b9417 FUN_1475b9417 body=87 status=ok
// SIG undefined FUN_1475b9417(void)

void FUN_1475b9417(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406f4b62(param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_144a85a6c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1475b9452;
  }
  lVar1 = 0;
LAB_1475b9452:
                    /* WARNING: Could not recover jumptable at 0x0001475b946b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xaa8))(param_1,lVar1,0);
  return;
}



// FUNCTION 1475b946e FUN_1475b946e body=60 status=ok
// SIG undefined FUN_1475b946e(void)

longlong * FUN_1475b946e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147a0f4e4(param_2);
  *param_1 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1475b94aa FUN_1475b94aa body=76 status=ok
// SIG undefined FUN_1475b94aa(void)

void FUN_1475b94aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406f4b62(param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_144a85a6c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1475b94e5;
  }
  lVar1 = 0;
LAB_1475b94e5:
  FUN_147a0f522(param_1,lVar1);
  return;
}



// FUNCTION 1475b94f6 FUN_1475b94f6 body=163 status=ok
// SIG undefined FUN_1475b94f6(void)

void FUN_1475b94f6(longlong param_1,ushort param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145aaa7aa(&local_38,param_1);
  puVar3 = (undefined8 *)((ulonglong)param_2 + param_1);
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  if (local_30 != 2) {
    (**(code **)(*local_38 + 0x588))();
  }
  iVar1 = (**(code **)(*DAT_14cab4b98 + 0xb0))();
  if (0 < iVar1) {
    local_38[0x3c] = 0;
    local_38[0x3d] = 0;
    local_38[0x3e] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b959a FUN_1475b959a body=164 status=ok
// SIG undefined FUN_1475b959a(void)

void FUN_1475b959a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145aaa7aa(&local_38,param_1);
  FUN_1475b9640(param_2,param_1,param_3);
  if (local_30 != 2) {
    (**(code **)(*local_38 + 0x588))();
  }
  iVar1 = (**(code **)(*DAT_14cab4b98 + 0xb0))();
  if (0 < iVar1) {
    local_38[0x3c] = 0;
    local_38[0x3d] = 0;
    local_38[0x3e] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b9640 FUN_1475b9640 body=246 status=ok
// SIG undefined FUN_1475b9640(void)

void FUN_1475b9640(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar2 = (longlong *)FUN_1406f9508(param_1,param_2);
  if ((plVar2 == (longlong *)0x0) || (cVar1 = (**(code **)(*plVar2 + 0x80))(plVar2), cVar1 == '\0'))
  {
    lVar3 = FUN_14479d2ce(local_30);
    if (lVar3 == 0) {
      lVar3 = FUN_1406f977c(local_60);
      if ((lVar3 != 0) &&
         (puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + local_38), puVar4 != (undefined8 *)0x0))
      {
        for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = *param_3;
          param_3 = param_3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
    }
    else {
      FUN_1476461f6(param_2,lVar3,param_3);
    }
  }
  else {
    (**(code **)(*plVar2 + 0x98))(plVar2,param_2,param_3);
  }
  lVar3 = FUN_14479d2ce(local_28);
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar3,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475b9738 FUN_1475b9738 body=1034 status=ok
// SIG undefined FUN_1475b9738(void)

void FUN_1475b9738(longlong param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  longlong local_180;
  char *local_178;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  int local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  longlong local_130 [9];
  longlong local_e8 [10];
  longlong local_98;
  byte local_90;
  ushort local_80;
  undefined6 uStack_7e;
  longlong local_78;
  byte local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_178 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab4bb4) && (FUN_144b3d300(&DAT_14cab4bb4), DAT_14cab4bb4 == -1)) {
    FUN_140056680(local_e8,L"Transform");
    FUN_1446ddc76(&local_138,"Transform",1);
    FUN_140aecba6(&DAT_14cab4ba0,local_138,local_e8);
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    _Init_thread_footer(&DAT_14cab4bb4);
  }
  if (0 < (int)param_3[1]) {
    puVar9 = (undefined4 *)(param_1 + 0xf0);
    local_180 = param_1 + 200;
    lVar6 = 0;
    local_188 = puVar9;
    do {
      lVar2 = *(longlong *)(*param_3 + lVar6 * 8);
      if (lVar2 != 0) {
        if ((code *)*param_4 != (code *)0x0) {
          local_e8[0] = CONCAT44(local_e8[0]._4_4_,(int)lVar6);
          cVar3 = (*(code *)*param_4)(param_4[1],local_e8);
          if (cVar3 == '\0') goto LAB_1475b9a29;
        }
        local_148 = *puVar9;
        uStack_144 = puVar9[1];
        uStack_140 = puVar9[2];
        uStack_13c = puVar9[3];
        FUN_140dbbab4(&local_80,lVar2,&DAT_14cab4ba0,&local_148);
        if (local_68 == 1) {
          cVar3 = '\0';
          local_158 = 0;
          local_e8[0] = 0;
          FUN_14485c47a(local_e8,lVar2);
          local_158 = local_e8[0];
          local_150 = DAT_14cab4ba8;
          FUN_14027461a(local_180,&local_15c,lVar2);
          FUN_140bf3856(param_1,&local_160,&local_158);
          local_16c = local_15c;
          local_168 = DAT_14cab58a4;
          local_164 = local_160;
          FUN_140adeba6(*(undefined8 *)(param_1 + 0xb0),&local_16c);
          lVar5 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),&local_16c);
          if (lVar5 != 0) {
            cVar3 = '\x02' - (*(short *)(lVar5 + 0xe) == 0);
          }
          cVar4 = FUN_140bf367c(param_1,local_160,cVar3);
          if (cVar4 == '\0') {
            local_90 = 0;
            local_e8[0] = 0;
            local_e8[1] = 0;
            local_e8[2] = 0;
            local_e8[3] = 0;
            local_e8[4] = 0;
            local_e8[5] = 0;
            local_e8[6] = 0;
            local_e8[7] = 0;
            local_e8[8] = 0;
            if (local_70 == 1) {
              lVar5 = (longlong)*(int *)(param_1 + 0xfc) * (ulonglong)local_80;
              local_e8[9] = *(longlong *)(param_1 + 0xf0) + lVar5;
              (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x18 + lVar5))(local_130,lVar2);
LAB_1475b999c:
              plVar7 = local_130;
              lVar5 = 9;
              plVar8 = local_e8;
            }
            else {
              if (local_70 != 0) {
                local_e8[9] = CONCAT62(uStack_7e,local_80);
                local_98 = local_78;
                if (local_78 != 0) {
                  LOCK();
                  *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
                  UNLOCK();
                }
                local_90 = 2;
                FUN_1476463b4(CONCAT62(uStack_7e,local_80),local_130,lVar2);
                goto LAB_1475b999c;
              }
              local_e8[9] = (longlong)local_80;
              local_90 = 1;
              lVar5 = 9;
              plVar7 = (longlong *)(lVar2 + (ulonglong)local_80);
              plVar8 = local_e8;
            }
            for (; lVar5 != 0; lVar5 = lVar5 + -1) {
              *plVar8 = *plVar7;
              plVar7 = plVar7 + 1;
              plVar8 = plVar8 + 1;
            }
            FUN_140bf4144(param_1,local_160,cVar3);
            (*(code *)(&PTR_LAB_14a4c7e10)[local_90])(local_e8 + 9);
          }
          puVar9 = local_188;
          if (*local_178 == '\x01') {
            pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x70 + (longlong)local_160 * 0x78);
            *pbVar1 = *pbVar1 | 2;
          }
        }
        if ((local_68 & 1) != 0) {
          (*(code *)(&PTR_FUN_14a4c7e50)[local_70])(&local_80);
        }
      }
LAB_1475b9a29:
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_3[1]);
  }
  if (*param_4 != 0) {
    *param_4 = 0;
    param_4[1] = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475b9b48 FUN_1475b9b48 body=51 status=ok
// SIG undefined FUN_1475b9b48(void)

void FUN_1475b9b48(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_145c40fca(param_1,1);
  if (cVar2 != '\0') {
    *(undefined8 *)(param_1 + 0x118) = param_2[2];
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x108) = *param_2;
    *(undefined8 *)(param_1 + 0x110) = uVar1;
  }
  return;
}



// FUNCTION 1475b9ba4 FUN_1475b9ba4 body=196 status=ok
// SIG undefined FUN_1475b9ba4(void)

void FUN_1475b9ba4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cab4a28;
  uStack_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x118) = puVar4[2];
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b9c6c FUN_1475b9c6c body=326 status=ok
// SIG undefined FUN_1475b9c6c(void)

void FUN_1475b9c6c(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_54 [16];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  FUN_14179f016((undefined4 *)(param_1 + 0x108),local_54,param_3,&local_68);
  uVar4 = FUN_1447addd0(local_54,0x10);
  iVar5 = FUN_1475a0174(param_2,uVar4 ^ local_44,local_54);
  if (iVar5 != -1) {
    uVar6 = FUN_147552f3e(*param_4);
    uVar4 = FUN_1447addd0(local_54,0x10);
    iVar5 = FUN_1475a0174(param_2,uVar4 ^ local_44,local_54);
    lVar7 = 0;
    if (iVar5 != -1) {
      lVar7 = (longlong)iVar5 * 0x30 + *param_2;
    }
    FUN_14757416c(lVar7 + 0x14,&local_80,param_3,uVar6);
    *(undefined4 *)(param_1 + 0x108) = local_80;
    *(undefined4 *)(param_1 + 0x10c) = uStack_7c;
    *(undefined4 *)(param_1 + 0x110) = uStack_78;
    *(undefined4 *)(param_1 + 0x114) = uStack_74;
    *(undefined8 *)(param_1 + 0x118) = local_70;
  }
  plVar3 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b9db4 FUN_1475b9db4 body=64 status=ok
// SIG undefined FUN_1475b9db4(void)

void FUN_1475b9db4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_140c60952(param_2,iVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x10);
  *puVar1 = *(undefined8 *)(param_1 + 0x108);
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 1475b9e10 FUN_1475b9e10 body=248 status=ok
// SIG undefined FUN_1475b9e10(void)

void FUN_1475b9e10(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined1 param_5)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_7c [4];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_5;
  FUN_14757577e(param_1);
  local_68 = param_1 + 0x120;
  local_70 = param_1 + 0x1a0;
  local_60 = param_1 + 0x188;
  local_78 = param_1 + 0x178;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  uStack_44 = 0;
  local_40 = 2;
  FUN_1475b9f0a(&local_78,local_7c,param_3);
  if (0 < param_4) {
    local_58 = 0x3f800000;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_48 = 0;
    uStack_44 = 0;
    local_40 = 2;
    FUN_1475b9f0a(&local_78,local_7c,param_4 + param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b9f0a FUN_1475b9f0a body=116 status=ok
// SIG undefined FUN_1475b9f0a(void)

undefined8 FUN_1475b9f0a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar9 = FUN_147525ee8(param_1,param_3,0);
  if (iVar9 == -1) {
    iVar9 = FUN_14753fcec(param_1,param_3,param_4);
  }
  else {
    lVar3 = **(longlong **)(param_1 + 0x18);
    uVar4 = *param_4;
    uVar5 = param_4[1];
    uVar6 = param_4[2];
    uVar7 = param_4[3];
    uVar8 = *(undefined8 *)(param_4 + 5);
    puVar2 = (undefined8 *)(lVar3 + 0xc + (longlong)iVar9 * 0x1c);
    *puVar2 = *(undefined8 *)(param_4 + 3);
    puVar2[1] = uVar8;
    puVar1 = (undefined4 *)(lVar3 + (longlong)iVar9 * 0x1c);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  FUN_147524308(param_1,param_2,iVar9);
  return param_2;
}



// FUNCTION 1475b9f7e FUN_1475b9f7e body=51 status=ok
// SIG undefined FUN_1475b9f7e(void)

void FUN_1475b9f7e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_145c40fca(param_1,1);
  if (cVar2 != '\0') {
    *(undefined8 *)(param_1 + 0x118) = param_2[2];
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x108) = *param_2;
    *(undefined8 *)(param_1 + 0x110) = uVar1;
  }
  return;
}



// FUNCTION 1475b9ff2 FUN_1475b9ff2 body=311 status=ok
// SIG undefined FUN_1475b9ff2(void)

void FUN_1475b9ff2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0xc30);
  if ((lVar4 != 0) && (iVar3 = *(int *)(lVar4 + 0x30), (longlong)iVar3 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x28);
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 0x108 + lVar9);
      if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
        FUN_1456cec3c(lVar5);
LAB_1475ba064:
        lVar8 = FUN_1458989be();
        if ((((lVar8 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
            (*(int *)(lVar8 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30 && (lVar5 = *(longlong *)(lVar5 + 0x90), lVar5 != 0)))) {
          local_58 = *param_4;
          local_50 = param_4[1];
          if (local_50 != 0) {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
          }
          FUN_14759584e(lVar5,param_2,param_3,&local_58);
        }
      }
      else if (lVar5 != 0) goto LAB_1475ba064;
      lVar9 = lVar9 + 0x110;
    } while ((longlong)iVar3 * 0x110 - lVar9 != 0);
  }
  plVar7 = (longlong *)param_4[1];
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
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ba12a FUN_1475ba12a body=319 status=ok
// SIG undefined FUN_1475ba12a(void)

void FUN_1475ba12a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar4 = *(longlong *)(param_1 + 0xc30);
  if ((lVar4 != 0) && (iVar2 = *(int *)(lVar4 + 0x30), (longlong)iVar2 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x28);
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 0x108 + lVar10);
      if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
        FUN_1456cec3c(lVar5);
LAB_1475ba186:
        lVar9 = FUN_1458989be();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          lVar9 = *(longlong *)(lVar5 + 0x98);
          if ((lVar9 != 0) &&
             (((*(int *)(lVar9 + 0x30) != 0 || *(int *)(lVar9 + 0x2c) != 0) ||
              *(int *)(lVar9 + 0x34) != 0) || *(int *)(lVar9 + 0x38) != 0)) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_140c60952(param_2,iVar3);
            }
            uVar6 = *(undefined4 *)(lVar9 + 0x30);
            uVar7 = *(undefined4 *)(lVar9 + 0x34);
            uVar8 = *(undefined4 *)(lVar9 + 0x38);
            puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 0x10);
            *puVar1 = *(undefined4 *)(lVar9 + 0x2c);
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
          }
          lVar5 = *(longlong *)(lVar5 + 0x90);
          if ((lVar5 != 0) &&
             (((*(int *)(lVar5 + 0x30) != 0 || *(int *)(lVar5 + 0x2c) != 0) ||
              *(int *)(lVar5 + 0x34) != 0) || *(int *)(lVar5 + 0x38) != 0)) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_140c60952(param_2,iVar3);
            }
            uVar6 = *(undefined4 *)(lVar5 + 0x30);
            uVar7 = *(undefined4 *)(lVar5 + 0x34);
            uVar8 = *(undefined4 *)(lVar5 + 0x38);
            puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 0x10);
            *puVar1 = *(undefined4 *)(lVar5 + 0x2c);
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
          }
        }
      }
      else if (lVar5 != 0) goto LAB_1475ba186;
      lVar10 = lVar10 + 0x110;
    } while ((longlong)iVar2 * 0x110 - lVar10 != 0);
  }
  return;
}



// FUNCTION 1475ba26a FUN_1475ba26a body=68 status=ok
// SIG undefined FUN_1475ba26a(void)

void FUN_1475ba26a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ba2b0 FUN_1475ba2b0 body=100 status=ok
// SIG undefined FUN_1475ba2b0(void)

void FUN_1475ba2b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1475545d8(param_4,param_3);
  if (0 < *(int *)(*(longlong *)(param_1 + 0xc30) + 0x30)) {
    iVar2 = 0;
    do {
      FUN_1475547f4(param_4,param_2,param_1,iVar2 + -0x80000000,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(longlong *)(param_1 + 0xc30) + 0x30));
  }
  return;
}



// FUNCTION 1475ba314 FUN_1475ba314 body=104 status=ok
// SIG undefined FUN_1475ba314(void)

undefined8 FUN_1475ba314(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FUN_1475ba2b0(param_1 + -0x128,param_2,param_3,param_4);
  }
  if (*(longlong *)(param_1 + 0xb00) != 0) {
    FUN_1475332f4(*(longlong *)(param_1 + 0xb00),param_2,param_3,param_4,param_1 + -0x128);
  }
  return 0;
}



// FUNCTION 1475ba506 FUN_1475ba506 body=198 status=ok
// SIG undefined FUN_1475ba506(void)

void FUN_1475ba506(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = FUN_14001cc68(0x68,8);
  FUN_14764648e(uVar3,param_2);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = uVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ba5ce FUN_1475ba5ce body=114 status=ok
// SIG undefined FUN_1475ba5ce(void)

void FUN_1475ba5ce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined **local_30;
  undefined2 local_28;
  undefined1 local_26;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14009d2a0();
  local_28 = *(undefined2 *)(lVar1 + 0x54);
  local_26 = 0;
  local_30 = &PTR_FUN_14a4995a0;
  FUN_1475ba642(param_1 + -0x128,&local_30,param_3,param_4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ba642 FUN_1475ba642 body=3112 status=ok
// SIG undefined FUN_1475ba642(void)

void FUN_1475ba642(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong lVar18;
  char cVar19;
  uint uVar20;
  char cVar21;
  undefined4 uVar22;
  int7 iVar23;
  undefined4 uVar24;
  undefined7 uVar25;
  undefined4 uVar26;
  undefined8 in_R10;
  undefined2 *puVar27;
  char cVar28;
  bool bVar29;
  undefined1 auStack_7a8 [32];
  byte local_788;
  undefined2 local_774;
  undefined1 local_771;
  longlong local_770;
  longlong local_768;
  undefined2 local_75a;
  longlong local_758;
  longlong local_750;
  undefined8 local_748;
  undefined4 local_740;
  undefined4 local_73c;
  undefined4 local_738;
  uint local_734;
  longlong local_730;
  longlong local_728;
  undefined8 local_720;
  longlong local_718;
  undefined8 local_710;
  longlong local_708;
  undefined8 local_700;
  longlong local_6f8;
  undefined8 local_6f0;
  longlong local_6e8;
  undefined8 local_6e0;
  longlong local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined **local_6a8;
  undefined2 local_6a0;
  uint local_698;
  longlong local_690;
  undefined1 local_688;
  uint local_680;
  longlong local_678;
  undefined1 local_670;
  uint local_668;
  longlong local_660;
  undefined1 local_658;
  uint local_650;
  longlong local_648;
  undefined1 local_640;
  undefined1 local_638;
  undefined1 local_630 [144];
  undefined1 local_5a0 [168];
  undefined1 local_4f8 [192];
  undefined1 local_438 [216];
  undefined1 local_360 [240];
  undefined1 local_270 [8];
  undefined2 local_268;
  undefined4 local_260;
  undefined8 local_258;
  char local_250;
  undefined4 local_248;
  undefined8 local_240;
  char local_238;
  undefined4 local_230;
  undefined8 local_228;
  char local_220;
  undefined4 local_218;
  undefined8 local_210;
  char local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  char local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  char local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  char local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  char local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  char local_190;
  undefined4 local_188;
  undefined8 local_180;
  char local_178;
  undefined1 local_170;
  undefined **local_168;
  undefined2 local_160;
  undefined2 local_15e;
  undefined1 local_15c;
  undefined4 local_158;
  undefined8 local_150;
  char local_148;
  undefined4 local_140;
  undefined8 local_138;
  char local_130;
  undefined4 local_128;
  undefined8 local_120;
  char local_118;
  undefined4 local_110;
  undefined8 local_108;
  char local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  char local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  char local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  char local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  char local_a0;
  undefined4 local_98;
  undefined8 local_90;
  char local_88;
  undefined4 local_80;
  undefined8 local_78;
  char local_70;
  undefined2 local_68;
  undefined1 local_60;
  char local_51 [9];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  local_770 = param_3;
  local_758 = param_2;
  local_748 = param_4;
  local_768 = FUN_14009d2a0();
  lVar11 = FUN_14038fb82();
  uVar12 = FUN_140bc7f26();
  lVar13 = FUN_144a78ede(param_1,uVar12);
  lVar14 = FUN_140bc800c();
  if (*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) {
    bVar29 = false;
  }
  else {
    bVar29 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30;
  }
  lVar14 = FUN_140bc91a6();
  iVar10 = *(int *)(lVar14 + 0x38);
  lVar18 = 0x6c;
  if ((iVar10 <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar10 * 8) ==
      lVar14 + 0x30)) {
    lVar18 = 0x78;
  }
  lVar13 = 0x84;
  if (!bVar29) {
    lVar13 = lVar18;
  }
  uVar4 = *(uint *)(param_1 + 0x138);
  if ((uVar4 & 1) == 0) {
    local_51[0] = '\0';
  }
  else {
    local_51[0] = '\x01';
    if (*(int *)(param_1 + 0x1a0) == 0) {
      local_51[0] = *(char *)(param_1 + 0x1c0);
    }
  }
  uVar1 = *(undefined2 *)(lVar11 + lVar13);
  if ((uVar4 & 2) == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
    if (*(int *)(param_1 + 0x2b8) == 0) {
      cVar8 = *(char *)(param_1 + 0x2d8);
    }
  }
  local_51[1] = cVar8;
  if ((uVar4 & 4) == 0) {
    cVar19 = '\0';
  }
  else {
    cVar19 = '\x01';
    if (*(int *)(param_1 + 0x3d0) == 0) {
      cVar19 = *(char *)(param_1 + 0x3f0);
    }
  }
  local_51[2] = cVar19;
  if ((uVar4 & 8) == 0) {
    cVar28 = '\0';
  }
  else {
    cVar28 = '\x01';
    if (*(int *)(param_1 + 0x4e8) == 0) {
      cVar28 = *(char *)(param_1 + 0x508);
    }
  }
  local_51[3] = cVar28;
  if ((uVar4 & 0x10) == 0) {
    cVar21 = '\0';
  }
  else {
    cVar21 = '\x01';
    if (*(int *)(param_1 + 0x600) == 0) {
      cVar21 = *(char *)(param_1 + 0x620);
    }
  }
  local_51[4] = cVar21;
  if ((uVar4 & 0x20) == 0) {
    uVar26 = 0;
  }
  else {
    uVar25 = (undefined7)((ulonglong)in_R10 >> 8);
    uVar26 = (undefined4)CONCAT71(uVar25,1);
    if (*(int *)(param_1 + 0x718) == 0) {
      uVar26 = (undefined4)CONCAT71(uVar25,*(undefined1 *)(param_1 + 0x738));
    }
  }
  local_51[5] = (char)uVar26;
  if ((uVar4 & 0x40) == 0) {
    uVar24 = 0;
  }
  else {
    uVar25 = (undefined7)((ulonglong)param_4 >> 8);
    uVar24 = (undefined4)CONCAT71(uVar25,1);
    if (*(int *)(param_1 + 0x830) == 0) {
      uVar24 = (undefined4)CONCAT71(uVar25,*(undefined1 *)(param_1 + 0x850));
    }
  }
  local_51[6] = (char)uVar24;
  if ((char)uVar4 < '\0') {
    iVar23 = (int7)(int3)((uint)iVar10 >> 8);
    uVar22 = (undefined4)CONCAT71(iVar23,1);
    if (*(int *)(param_1 + 0x948) == 0) {
      uVar22 = (undefined4)CONCAT71(iVar23,*(undefined1 *)(param_1 + 0x968));
    }
  }
  else {
    uVar22 = 0;
  }
  local_51[7] = (char)uVar22;
  if ((uVar4 >> 8 & 1) == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = 1;
    if (*(int *)(param_1 + 0xa60) == 0) {
      uVar17 = (uint)*(byte *)(param_1 + 0xa80);
    }
  }
  local_51[8] = (char)uVar17;
  lVar13 = 0;
  do {
    if (local_51[lVar13] == '\x01') {
      puVar27 = (undefined2 *)(local_768 + 0x9a);
      puVar6 = (undefined2 *)(local_768 + 0x98);
      puVar7 = (undefined2 *)(local_768 + 0x96);
      if (*(char *)(param_1 + 0xc38) != '\0') {
        puVar27 = (undefined2 *)(lVar11 + 0xd0);
        puVar6 = (undefined2 *)(lVar11 + 0xce);
        puVar7 = (undefined2 *)(lVar11 + 0xcc);
      }
      uVar2 = *puVar7;
      uVar15 = *(int *)(local_770 + 0x10) - DAT_14cab4ce0;
      local_740 = uVar26;
      local_73c = uVar24;
      local_738 = uVar22;
      local_734 = uVar17;
      if ((((int)uVar15 < 0) || (DAT_14cab4cd8 <= (int)uVar15)) ||
         (ppuVar5 = *(undefined ***)(DAT_14cab4cd0 + (ulonglong)uVar15 * 8),
         ppuVar5 == (undefined **)0x0)) {
        uVar17 = 0;
        local_774 = *puVar27;
        local_75a = *puVar6;
        if (local_51[0] != '\0') {
          FUN_1446f470e(&local_6b0,L"Location.X",1);
          uVar17 = 0x10000;
          if (*(longlong *)(param_1 + 0xc28) != 0) {
            bVar9 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_6b0);
            uVar17 = (uint)(bVar9 ^ 1) << 0x10;
          }
        }
        local_750 = CONCAT44(local_750._4_4_,(uint)*(ushort *)(local_768 + 0x90));
        local_771 = *(undefined1 *)(local_758 + 10);
        local_758 = CONCAT62(local_758._2_6_,*(undefined2 *)(local_758 + 8));
        uVar15 = 0;
        local_770 = CONCAT44(local_770._4_4_,uVar17);
        if (cVar8 != '\0') {
          FUN_1446f470e(&local_6b8,L"Location.Y",1);
          uVar15 = 0x10000;
          uVar17 = (uint)local_770;
          if (*(longlong *)(param_1 + 0xc28) != 0) {
            bVar9 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_6b8);
            uVar15 = (uint)(bVar9 ^ 1) << 0x10;
            uVar17 = (uint)local_770;
          }
        }
        uVar3 = *(ushort *)(local_768 + 0x92);
        uVar20 = 0;
        if (cVar19 != '\0') {
          FUN_1446f470e(&local_6c0,L"Location.Z",1);
          uVar20 = 0x10000;
          uVar17 = (uint)local_770;
          if (*(longlong *)(param_1 + 0xc28) != 0) {
            bVar9 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_6c0);
            uVar20 = (uint)(bVar9 ^ 1) << 0x10;
            uVar17 = (uint)local_770;
          }
        }
        local_690 = param_1 + 0x140;
        uVar17 = uVar17 | (uint)local_750;
        local_678 = param_1 + 600;
        uVar15 = uVar15 | uVar3;
        local_660 = param_1 + 0x370;
        uVar20 = *(ushort *)(local_768 + 0x94) | uVar20;
        if (cVar28 == '\0') {
          bVar9 = 0;
        }
        else {
          local_770 = local_690;
          local_750 = local_678;
          local_730 = local_660;
          FUN_1446f470e(&local_6c8,L"Rotation.X",1);
          if (*(longlong *)(param_1 + 0xc28) == 0) {
            bVar9 = 0;
          }
          else {
            bVar9 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_6c8);
          }
          bVar9 = bVar9 ^ 1;
          local_690 = local_770;
          local_678 = local_750;
          local_660 = local_730;
        }
        local_648 = param_1 + 0x488;
        local_6a0 = (undefined2)local_758;
        local_688 = 1;
        local_670 = 1;
        local_658 = 1;
        local_650 = (uint)CONCAT12(bVar9,uVar2);
        local_640 = 1;
        local_638 = local_771;
        local_6a8 = &PTR_FUN_14a4c7d80;
        local_698 = uVar17;
        local_680 = uVar15;
        local_668 = uVar20;
        if (cVar21 == '\0') {
          local_788 = 0;
        }
        else {
          FUN_1446f470e(&local_6d0,L"Rotation.Y",1);
          if (*(longlong *)(param_1 + 0xc28) == 0) {
            local_788 = 0;
          }
          else {
            local_788 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_6d0);
          }
          local_788 = local_788 ^ 1;
        }
        local_6d8 = param_1 + 0x5a0;
        FUN_147646d98(&local_6a8,local_630,local_75a);
        if ((char)local_740 == '\0') {
          local_788 = 0;
        }
        else {
          FUN_1446f470e(&local_6e0,L"Rotation.Z",1);
          if (*(longlong *)(param_1 + 0xc28) == 0) {
            local_788 = 0;
          }
          else {
            local_788 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_6e0);
          }
          local_788 = local_788 ^ 1;
        }
        local_6e8 = param_1 + 0x6b8;
        FUN_147646e30(local_630,local_5a0,local_774);
        if ((char)local_73c == '\0') {
          local_788 = 0;
        }
        else {
          FUN_1446f470e(&local_6f0,L"Scale.X",1);
          if (*(longlong *)(param_1 + 0xc28) == 0) {
            local_788 = 0;
          }
          else {
            local_788 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_6f0);
          }
          local_788 = local_788 ^ 1;
        }
        local_6f8 = param_1 + 2000;
        FUN_147646ed6(local_5a0,local_4f8,*(undefined2 *)(local_768 + 0x9c));
        if ((char)local_738 == '\0') {
          bVar9 = 0;
        }
        else {
          FUN_1446f470e(&local_700,L"Scale.Y",1);
          bVar9 = 1;
          if (*(longlong *)(param_1 + 0xc28) != 0) {
            bVar9 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_700);
            bVar9 = bVar9 ^ 1;
          }
        }
        local_708 = param_1 + 0x8e8;
        local_788 = bVar9;
        FUN_147646f8c(local_4f8,local_438,*(undefined2 *)(local_768 + 0x9e));
        if ((char)local_734 == '\0') {
          bVar9 = 0;
        }
        else {
          FUN_1446f470e(&local_710,L"Scale.Z",1);
          bVar9 = 1;
          if (*(longlong *)(param_1 + 0xc28) != 0) {
            bVar9 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_710);
            bVar9 = bVar9 ^ 1;
          }
        }
        local_718 = param_1 + 0xa00;
        local_788 = bVar9;
        FUN_147647052(local_438,local_360,*(undefined2 *)(local_768 + 0xa0));
        if (((uVar4 >> 9 & 1) == 0) ||
           ((*(int *)(param_1 + 0xb78) == 0 && (*(char *)(param_1 + 0xb94) != '\x01')))) {
          bVar9 = 0;
        }
        else {
          FUN_1446f470e(&local_720,L"Weight",1);
          bVar9 = 1;
          if (*(longlong *)(param_1 + 0xc28) != 0) {
            bVar9 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_720);
            bVar9 = bVar9 ^ 1;
          }
        }
        local_728 = param_1 + 0xb18;
        local_788 = bVar9;
        FUN_147647128(local_360,local_270,*(undefined2 *)(local_768 + 0xb6));
        local_160 = local_268;
        local_158 = local_260;
        local_148 = local_250;
        if (local_250 == '\x01') {
          local_150 = local_258;
        }
        local_140 = local_248;
        local_130 = local_238;
        if (local_238 == '\x01') {
          local_138 = local_240;
        }
        local_128 = local_230;
        local_118 = local_220;
        if (local_220 == '\x01') {
          local_120 = local_228;
        }
        local_110 = local_218;
        local_100 = local_208;
        if (local_208 == '\x01') {
          local_108 = local_210;
        }
        local_f8 = local_200;
        local_e8 = local_1f0;
        if (local_1f0 == '\x01') {
          local_f0 = local_1f8;
        }
        local_e0 = local_1e8;
        local_d0 = local_1d8;
        if (local_1d8 == '\x01') {
          local_d8 = local_1e0;
        }
        local_c8 = local_1d0;
        local_b8 = local_1c0;
        if (local_1c0 == '\x01') {
          local_c0 = local_1c8;
        }
        local_b0 = local_1b8;
        local_a0 = local_1a8;
        if (local_1a8 == '\x01') {
          local_a8 = local_1b0;
        }
        local_98 = local_1a0;
        local_88 = local_190;
        if (local_190 == '\x01') {
          local_90 = local_198;
        }
        local_80 = local_188;
        local_70 = local_178;
        if (local_178 == '\x01') {
          local_78 = local_180;
        }
        local_60 = local_170;
        local_168 = &PTR_FUN_14a4c6ee0;
        local_68 = uVar1;
        FUN_147646c96(local_748);
      }
      else {
        if ((*(longlong *)(param_1 + 0xc28) == 0) ||
           (cVar8 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),ppuVar5), uVar12 = local_748,
           cVar8 == '\0')) break;
        iVar10 = *(int *)(local_770 + 0x10) - DAT_14cab4ce0;
        if (iVar10 == 9) {
          if ((uVar4 >> 9 & 1) == 0) break;
          local_15c = *(undefined1 *)(local_758 + 10);
          local_160 = *(undefined2 *)(local_758 + 8);
          local_168 = &PTR_FUN_14a4c6ec0;
          local_15e = uVar1;
          FUN_147646bf8(local_748,&local_168);
          local_160 = *(undefined2 *)(local_768 + 0xe4);
          uVar16 = *(undefined8 *)(param_1 + 0xc28);
        }
        else {
          if (local_51[iVar10] != '\x01') break;
          local_15c = *(undefined1 *)(local_758 + 10);
          local_160 = *(undefined2 *)(local_758 + 8);
          local_168 = &PTR_FUN_14a4c6ec0;
          local_15e = uVar1;
          FUN_147646bf8(local_748,&local_168);
          local_160 = *(undefined2 *)(local_768 + 0xbc + (longlong)iVar10 * 2);
          uVar16 = *(undefined8 *)(param_1 + 0xc28);
        }
        local_168 = ppuVar5;
        FUN_147533240(uVar16,&local_168,local_770,uVar12);
      }
      break;
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 9);
  if ((local_48 ^ (ulonglong)auStack_7a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475bb26c FUN_1475bb26c body=1066 status=ok
// SIG undefined FUN_1475bb26c(void)

undefined8 FUN_1475bb26c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  local_38 = 0x100000000;
  lVar6 = *(longlong *)(param_1 + 0xc30);
  if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x30) != 0)) {
    lVar4 = *(longlong *)(lVar6 + 0x28);
    lVar6 = (longlong)*(int *)(lVar6 + 0x30) * 0x110;
    do {
      FUN_147649e9e(&local_58,lVar4);
      lVar4 = lVar4 + 0x110;
      lVar6 = lVar6 + -0x110;
    } while (lVar6 != 0);
  }
  FUN_1446f470e(&local_60,L"Location.X",1);
  FUN_1475bb697(&local_58,*(undefined8 *)(param_1 + 0xc28),local_60,param_1 + 0x140);
  FUN_1446f470e(&local_68,L"Location.Y",1);
  FUN_1475bb697(&local_58,*(undefined8 *)(param_1 + 0xc28),local_68,param_1 + 600);
  FUN_1446f470e(&local_70,L"Location.Z",1);
  FUN_1475bb697(&local_58,*(undefined8 *)(param_1 + 0xc28),local_70,param_1 + 0x370);
  FUN_1446f470e(&local_78,L"Rotation.X",1);
  FUN_1475bb697(&local_58,*(undefined8 *)(param_1 + 0xc28),local_78,param_1 + 0x488);
  FUN_1446f470e(&local_80,L"Rotation.Y",1);
  FUN_1475bb697(&local_58,*(undefined8 *)(param_1 + 0xc28),local_80,param_1 + 0x5a0);
  FUN_1446f470e(&local_88,L"Rotation.Z",1);
  FUN_1475bb697(&local_58,*(undefined8 *)(param_1 + 0xc28),local_88,param_1 + 0x6b8);
  FUN_1446f470e(&local_90,L"Scale.X",1);
  FUN_1475bb697(&local_58,*(undefined8 *)(param_1 + 0xc28),local_90,param_1 + 2000);
  FUN_1446f470e(&local_98,L"Scale.Y",1);
  FUN_1475bb697(&local_58,*(undefined8 *)(param_1 + 0xc28),local_98,param_1 + 0x8e8);
  FUN_1446f470e(&local_a0,L"Scale.Z",1);
  FUN_1475bb697(&local_58,*(undefined8 *)(param_1 + 0xc28),local_a0,param_1 + 0xa00);
  FUN_1446f470e(&local_a8,L"Weight",1);
  FUN_1475bb6eb(&local_58,*(undefined8 *)(param_1 + 0xc28),local_a8,param_1 + 0xb18);
  local_b0 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_b0[1] = (longlong)&DAT_100000001;
  *local_b0 = (longlong)&PTR_FUN_14a492060;
  local_b8 = local_b0 + 2;
  local_b0[2] = 0;
  local_b0[3] = 0;
  local_b0[4] = 0;
  local_b0[5] = 0;
  local_b0[6] = 2;
  if (local_40 == 0) {
    local_b0[9] = local_48;
    *(undefined4 *)(local_b0 + 7) = local_58;
    *(undefined4 *)((longlong)local_b0 + 0x3c) = uStack_54;
    *(undefined4 *)(local_b0 + 8) = uStack_50;
    *(undefined4 *)((longlong)local_b0 + 0x44) = uStack_4c;
  }
  local_b0[10] = local_40;
  local_40 = 0;
  *(undefined4 *)(local_b0 + 0xb) = (undefined4)local_38;
  *(undefined4 *)((longlong)local_b0 + 0x5c) = local_38._4_4_;
  local_38 = 0x100000000;
  FUN_140aec6f8(&local_b8);
  plVar1 = local_b0;
  if (local_b0 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_b8;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (plVar5 == (longlong *)0x0) goto LAB_1475bb638;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1475bb602:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1475bb638;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_b8;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (local_b0 != plVar5) {
      *(longlong **)(param_1 + 0xe8) = local_b0;
      if (plVar5 == (longlong *)0x0) goto LAB_1475bb638;
      goto LAB_1475bb602;
    }
    LOCK();
    plVar5 = local_b0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1475bb638;
    (**(code **)*local_b0)(local_b0);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1475bb638:
  plVar1 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_b0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_58);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bb697 FUN_1475bb697 body=84 status=ok
// SIG undefined FUN_1475bb697(void)

void FUN_1475bb697(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_1475331b0(param_2,param_3);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475bb6d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2c8))(plVar1,param_3,param_1,*(code **)(*plVar1 + 0x2c8));
      return;
    }
  }
  FUN_145b24cb6(param_1,param_4);
  return;
}



// FUNCTION 1475bb6eb FUN_1475bb6eb body=84 status=ok
// SIG undefined FUN_1475bb6eb(void)

void FUN_1475bb6eb(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_1475331b0(param_2,param_3);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475bb72a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2c8))(plVar1,param_3,param_1,*(code **)(*plVar1 + 0x2c8));
      return;
    }
  }
  FUN_140f937a0(param_1,param_4);
  return;
}



// FUNCTION 1475bb740 FUN_1475bb740 body=7345 status=ok
// SIG undefined FUN_1475bb740(void)

undefined8 * FUN_1475bb740(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined **ppuVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_328 [32];
  undefined **local_308;
  undefined **local_300;
  undefined8 local_2f8;
  longlong *local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined8 local_120;
  undefined **local_118;
  undefined1 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  byte local_e0;
  undefined **local_d8;
  char local_d0;
  undefined **local_cc;
  char local_c4;
  undefined **local_c0;
  char local_b8;
  undefined **local_a8;
  char local_a0;
  undefined **local_9c;
  char local_94;
  undefined **local_90;
  char local_88;
  undefined **local_78;
  char local_70;
  undefined **local_6c;
  char local_64;
  undefined **local_60;
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    FUN_14757509a(param_1);
  }
  FUN_140e2938c(local_140);
  FUN_140e2938c(local_160);
  FUN_140e2938c(local_180);
  FUN_140e2938c(local_1a0);
  FUN_140e2938c(local_1c0);
  FUN_140e2938c(local_1e0);
  FUN_140e2938c(local_200);
  FUN_140e2938c(local_220);
  FUN_140e2938c(local_240);
  iVar10 = 0;
  local_70 = '\0';
  local_64 = '\0';
  local_58 = '\0';
  lVar3 = FUN_147526316(local_140);
  if (lVar3 != 0) {
    local_258 = *param_3;
    uStack_254 = param_3[1];
    uStack_250 = param_3[2];
    uStack_24c = param_3[3];
    uVar5 = FUN_147526316(local_140);
    FUN_1475bd3f2(&local_120,uVar5,&local_258);
    if ((char)local_118 == '\0') {
      if (local_70 != '\0') {
        local_70 = '\0';
      }
    }
    else {
      local_308 = local_120;
      local_78 = local_120;
      local_70 = '\x01';
    }
    iVar10 = 1;
  }
  lVar3 = FUN_147526316(local_160);
  if (lVar3 != 0) {
    local_268 = *param_3;
    uStack_264 = param_3[1];
    uStack_260 = param_3[2];
    uStack_25c = param_3[3];
    uVar5 = FUN_147526316(local_160);
    FUN_1475bd3f2(&local_120,uVar5,&local_268);
    if ((char)local_118 == '\0') {
      if (local_64 == '\x01') {
        local_64 = '\0';
      }
    }
    else {
      local_6c = local_120;
      local_64 = '\x01';
    }
    iVar10 = iVar10 + 1;
  }
  lVar3 = FUN_147526316(local_180);
  if (lVar3 != 0) {
    local_278 = *param_3;
    uStack_274 = param_3[1];
    uStack_270 = param_3[2];
    uStack_26c = param_3[3];
    uVar5 = FUN_147526316(local_180);
    FUN_1475bd3f2(&local_120,uVar5,&local_278);
    if ((char)local_118 == '\0') {
      if (local_58 == '\x01') {
        local_58 = '\0';
      }
    }
    else {
      local_60 = local_120;
      local_58 = '\x01';
    }
    iVar10 = iVar10 + 1;
  }
  iVar12 = 0;
  local_a0 = '\0';
  local_94 = '\0';
  local_88 = '\0';
  lVar3 = FUN_147526316(local_1a0);
  if (lVar3 != 0) {
    local_288 = *param_3;
    uStack_284 = param_3[1];
    uStack_280 = param_3[2];
    uStack_27c = param_3[3];
    uVar5 = FUN_147526316(local_1a0);
    FUN_1475bd3f2(&local_120,uVar5,&local_288);
    if ((char)local_118 == '\0') {
      if (local_a0 != '\0') {
        local_a0 = '\0';
      }
    }
    else {
      local_a8 = local_120;
      local_a0 = '\x01';
    }
    iVar12 = 1;
  }
  lVar3 = FUN_147526316(local_1c0);
  if (lVar3 != 0) {
    local_298 = *param_3;
    uStack_294 = param_3[1];
    uStack_290 = param_3[2];
    uStack_28c = param_3[3];
    uVar5 = FUN_147526316(local_1c0);
    FUN_1475bd3f2(&local_120,uVar5,&local_298);
    if ((char)local_118 == '\0') {
      if (local_94 == '\x01') {
        local_94 = '\0';
      }
    }
    else {
      local_9c = local_120;
      local_94 = '\x01';
    }
    iVar12 = iVar12 + 1;
  }
  lVar3 = FUN_147526316(local_1e0);
  if (lVar3 != 0) {
    local_2a8 = *param_3;
    uStack_2a4 = param_3[1];
    uStack_2a0 = param_3[2];
    uStack_29c = param_3[3];
    uVar5 = FUN_147526316(local_1e0);
    FUN_1475bd3f2(&local_120,uVar5,&local_2a8);
    if ((char)local_118 == '\0') {
      if (local_88 == '\x01') {
        local_88 = '\0';
      }
    }
    else {
      local_90 = local_120;
      local_88 = '\x01';
    }
    iVar12 = iVar12 + 1;
  }
  iVar8 = 0;
  local_d0 = '\0';
  local_c4 = '\0';
  local_b8 = '\0';
  lVar3 = FUN_147526316(local_200);
  if (lVar3 != 0) {
    local_2b8 = *param_3;
    uStack_2b4 = param_3[1];
    uStack_2b0 = param_3[2];
    uStack_2ac = param_3[3];
    uVar5 = FUN_147526316(local_200);
    FUN_1475bd3f2(&local_120,uVar5,&local_2b8);
    if ((char)local_118 == '\0') {
      if (local_d0 != '\0') {
        local_d0 = '\0';
      }
    }
    else {
      local_d8 = local_120;
      local_d0 = '\x01';
    }
    iVar8 = 1;
  }
  lVar3 = FUN_147526316(local_220);
  if (lVar3 != 0) {
    local_2c8 = *param_3;
    uStack_2c4 = param_3[1];
    uStack_2c0 = param_3[2];
    uStack_2bc = param_3[3];
    uVar5 = FUN_147526316(local_220);
    FUN_1475bd3f2(&local_120,uVar5,&local_2c8);
    if ((char)local_118 == '\0') {
      if (local_c4 == '\x01') {
        local_c4 = '\0';
      }
    }
    else {
      local_cc = local_120;
      local_c4 = '\x01';
    }
    iVar8 = iVar8 + 1;
  }
  lVar3 = FUN_147526316(local_240);
  if (lVar3 != 0) {
    local_2d8 = *param_3;
    uStack_2d4 = param_3[1];
    uStack_2d0 = param_3[2];
    uStack_2cc = param_3[3];
    uVar5 = FUN_147526316(local_240);
    FUN_1475bd3f2(&local_120,uVar5,&local_2d8);
    if ((char)local_118 == '\0') {
      if (local_b8 == '\x01') {
        local_b8 = '\0';
      }
    }
    else {
      local_c0 = local_120;
      local_b8 = '\x01';
    }
    iVar8 = iVar8 + 1;
  }
  if ((uint)(iVar10 + iVar12 + iVar8) < 2) {
    if (iVar10 == 0) {
      if (iVar12 == 0) {
        if (iVar8 == 0) {
          *param_2 = 0;
          param_2[1] = 0;
          goto LAB_1475bba82;
        }
        plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
        if (DAT_14cab4c60 == 0) {
          uVar5 = FUN_140d2a6db();
          DAT_14cab4c60 = FUN_140002ddd(FUN_146346ef1,uVar5,L"MovieScene3DScaleKeyStruct");
        }
        FUN_1446e6d0e(plVar4,DAT_14cab4c60);
        plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_14a4c7c20;
        plVar6[2] = (longlong)plVar4;
        lVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
        if (local_d0 == '\x01') {
          local_308 = (undefined **)(lVar3 + 0x18);
          local_300 = local_d8;
          uVar5 = *(undefined8 *)(param_1 + 0xe0);
          uVar2 = FUN_14752647e(local_200);
          FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
            UNLOCK();
          }
          local_f0 = local_2e0;
          local_f8 = local_2e8;
          local_e0 = local_e0 | 3;
          local_120 = &PTR_FUN_14a4c70c0;
          local_108 = local_2f8;
          local_100 = local_2f0;
          local_118 = local_300;
          local_110 = 1;
          local_e8 = lVar3 + 8;
          FUN_147573770(local_308,&local_120);
          if ((local_e0 & 1) != 0) {
            ppuVar9 = (undefined **)&local_120;
            if ((local_e0 & 2) == 0) {
              ppuVar9 = local_120;
            }
            local_e0 = local_e0 & 0xfe;
            (**(code **)*ppuVar9)(ppuVar9,0);
            if ((local_e0 & 2) == 0) {
              FUN_1400020a8(local_120);
            }
          }
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_2f0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_2f0 + 0x10))();
            }
          }
        }
        if (local_c4 == '\x01') {
          local_308 = (undefined **)(lVar3 + 0x18);
          local_300 = local_cc;
          uVar5 = *(undefined8 *)(param_1 + 0xe0);
          uVar2 = FUN_14752647e(local_220);
          FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
            UNLOCK();
          }
          local_f0 = local_2e0;
          local_f8 = local_2e8;
          local_e0 = local_e0 | 3;
          local_120 = &PTR_FUN_14a4c70c0;
          local_108 = local_2f8;
          local_100 = local_2f0;
          local_118 = local_300;
          local_110 = 1;
          local_e8 = lVar3 + 0xc;
          FUN_147573770(local_308,&local_120);
          if ((local_e0 & 1) != 0) {
            ppuVar9 = (undefined **)&local_120;
            if ((local_e0 & 2) == 0) {
              ppuVar9 = local_120;
            }
            local_e0 = local_e0 & 0xfe;
            (**(code **)*ppuVar9)(ppuVar9,0);
            if ((local_e0 & 2) == 0) {
              FUN_1400020a8(local_120);
            }
          }
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_2f0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_2f0 + 0x10))();
            }
          }
        }
        ppuVar9 = local_c0;
        if (local_b8 == '\x01') {
          local_308 = (undefined **)(lVar3 + 0x18);
          uVar5 = *(undefined8 *)(param_1 + 0xe0);
          uVar2 = FUN_14752647e(local_240);
          FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
            UNLOCK();
          }
          local_f0 = local_2e0;
          local_f8 = local_2e8;
          local_e0 = local_e0 | 3;
          local_120 = &PTR_FUN_14a4c70c0;
          local_108 = local_2f8;
          local_100 = local_2f0;
          local_118 = ppuVar9;
          local_110 = 1;
          local_e8 = lVar3 + 0x10;
          FUN_147573770(local_308,&local_120);
          if ((local_e0 & 1) != 0) {
            ppuVar9 = (undefined **)&local_120;
            if ((local_e0 & 2) == 0) {
              ppuVar9 = local_120;
            }
            local_e0 = local_e0 & 0xfe;
            (**(code **)*ppuVar9)(ppuVar9,0);
            if ((local_e0 & 2) == 0) {
              FUN_1400020a8(local_120);
            }
          }
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_2f0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_2f0 + 0x10))();
            }
          }
        }
        FUN_1475737dc(lVar3 + 0x18);
        FUN_147573828(lVar3 + 0x18,&local_120);
        uVar2 = 0;
        if (local_120._4_1_ != '\0') {
          uVar2 = (undefined4)local_120;
        }
        *(undefined4 *)(lVar3 + 0x14) = uVar2;
        goto LAB_1475bba52;
      }
      plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
      if (DAT_14cab4c48 == 0) {
        uVar5 = FUN_140d2a6db();
        DAT_14cab4c48 = FUN_140002ddd(FUN_146346e5b,uVar5,L"MovieScene3DRotationKeyStruct");
      }
      FUN_1446e6d0e(plVar4,DAT_14cab4c48);
      plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar6[1] = (longlong)&DAT_100000001;
      *plVar6 = (longlong)&PTR_FUN_14a4c7c20;
      plVar6[2] = (longlong)plVar4;
      lVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
      if (local_a0 == '\x01') {
        local_308 = (undefined **)(lVar3 + 0x28);
        local_300 = local_a8;
        uVar5 = *(undefined8 *)(param_1 + 0xe0);
        uVar2 = FUN_14752647e(local_1a0);
        FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
          UNLOCK();
        }
        local_f0 = local_2e0;
        local_f8 = local_2e8;
        local_e0 = local_e0 | 3;
        local_120 = &PTR_FUN_14a4c7d60;
        local_108 = local_2f8;
        local_100 = local_2f0;
        local_118 = local_300;
        local_110 = 1;
        local_e8 = lVar3 + 0x18;
        FUN_147573770(local_308,&local_120);
        if ((local_e0 & 1) != 0) {
          ppuVar9 = (undefined **)&local_120;
          if ((local_e0 & 2) == 0) {
            ppuVar9 = local_120;
          }
          local_e0 = local_e0 & 0xfe;
          (**(code **)*ppuVar9)(ppuVar9,0);
          if ((local_e0 & 2) == 0) {
            FUN_1400020a8(local_120);
          }
        }
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_2f0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2f0 + 0x10))();
          }
        }
      }
      if (local_94 == '\x01') {
        local_308 = (undefined **)(lVar3 + 0x28);
        local_300 = local_9c;
        uVar5 = *(undefined8 *)(param_1 + 0xe0);
        uVar2 = FUN_14752647e(local_1c0);
        FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
          UNLOCK();
        }
        local_f0 = local_2e0;
        local_f8 = local_2e8;
        local_e0 = local_e0 | 3;
        local_120 = &PTR_FUN_14a4c7d60;
        local_108 = local_2f8;
        local_100 = local_2f0;
        local_118 = local_300;
        local_110 = 1;
        local_e8 = lVar3 + 8;
        FUN_147573770(local_308,&local_120);
        if ((local_e0 & 1) != 0) {
          ppuVar9 = (undefined **)&local_120;
          if ((local_e0 & 2) == 0) {
            ppuVar9 = local_120;
          }
          local_e0 = local_e0 & 0xfe;
          (**(code **)*ppuVar9)(ppuVar9,0);
          if ((local_e0 & 2) == 0) {
            FUN_1400020a8(local_120);
          }
        }
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_2f0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2f0 + 0x10))();
          }
        }
      }
      if (local_88 == '\x01') {
        lVar11 = lVar3 + 0x10;
        uVar5 = *(undefined8 *)(param_1 + 0xe0);
        puVar7 = local_1e0;
        ppuVar9 = local_90;
        goto LAB_1475bce1e;
      }
    }
    else {
      plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
      if (DAT_14cab4c30 == 0) {
        uVar5 = FUN_140d2a6db();
        DAT_14cab4c30 = FUN_140002ddd(FUN_146346dc5,uVar5,L"MovieScene3DLocationKeyStruct");
      }
      FUN_1446e6d0e(plVar4,DAT_14cab4c30);
      plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar6[1] = (longlong)&DAT_100000001;
      *plVar6 = (longlong)&PTR_FUN_14a4c7c20;
      plVar6[2] = (longlong)plVar4;
      lVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
      if (local_70 == '\x01') {
        local_300 = (undefined **)(lVar3 + 0x28);
        uVar5 = *(undefined8 *)(param_1 + 0xe0);
        uVar2 = FUN_14752647e(local_140);
        FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
          UNLOCK();
        }
        local_f0 = local_2e0;
        local_f8 = local_2e8;
        local_e0 = local_e0 | 3;
        local_120 = &PTR_FUN_14a4c7d60;
        local_108 = local_2f8;
        local_100 = local_2f0;
        local_118 = local_308;
        local_110 = 1;
        local_e8 = lVar3 + 8;
        FUN_147573770(local_300,&local_120);
        if ((local_e0 & 1) != 0) {
          ppuVar9 = (undefined **)&local_120;
          if ((local_e0 & 2) == 0) {
            ppuVar9 = local_120;
          }
          local_e0 = local_e0 & 0xfe;
          (**(code **)*ppuVar9)(ppuVar9,0);
          if ((local_e0 & 2) == 0) {
            FUN_1400020a8(local_120);
          }
        }
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_2f0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2f0 + 0x10))();
          }
        }
      }
      if (local_64 == '\x01') {
        local_308 = (undefined **)(lVar3 + 0x28);
        local_300 = local_6c;
        uVar5 = *(undefined8 *)(param_1 + 0xe0);
        uVar2 = FUN_14752647e(local_160);
        FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
          UNLOCK();
        }
        local_f0 = local_2e0;
        local_f8 = local_2e8;
        local_e0 = local_e0 | 3;
        local_120 = &PTR_FUN_14a4c7d60;
        local_108 = local_2f8;
        local_100 = local_2f0;
        local_118 = local_300;
        local_110 = 1;
        local_e8 = lVar3 + 0x10;
        FUN_147573770(local_308,&local_120);
        if ((local_e0 & 1) != 0) {
          ppuVar9 = (undefined **)&local_120;
          if ((local_e0 & 2) == 0) {
            ppuVar9 = local_120;
          }
          local_e0 = local_e0 & 0xfe;
          (**(code **)*ppuVar9)(ppuVar9,0);
          if ((local_e0 & 2) == 0) {
            FUN_1400020a8(local_120);
          }
        }
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_2f0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2f0 + 0x10))();
          }
        }
      }
      if (local_58 == '\x01') {
        lVar11 = lVar3 + 0x18;
        uVar5 = *(undefined8 *)(param_1 + 0xe0);
        puVar7 = local_180;
        ppuVar9 = local_60;
LAB_1475bce1e:
        local_308 = (undefined **)(lVar3 + 0x28);
        uVar2 = FUN_14752647e(puVar7);
        FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
          UNLOCK();
        }
        local_f0 = local_2e0;
        local_f8 = local_2e8;
        local_e0 = local_e0 | 3;
        local_120 = &PTR_FUN_14a4c7d60;
        local_108 = local_2f8;
        local_100 = local_2f0;
        local_110 = 1;
        local_118 = ppuVar9;
        local_e8 = lVar11;
        FUN_147573770(local_308,&local_120);
        if ((local_e0 & 1) != 0) {
          ppuVar9 = (undefined **)&local_120;
          if ((local_e0 & 2) == 0) {
            ppuVar9 = local_120;
          }
          local_e0 = local_e0 & 0xfe;
          (**(code **)*ppuVar9)(ppuVar9,0);
          if ((local_e0 & 2) == 0) {
            FUN_1400020a8(local_120);
          }
        }
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_2f0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2f0 + 0x10))();
          }
        }
      }
    }
    FUN_1475737dc(lVar3 + 0x28);
    FUN_147573828(lVar3 + 0x28,&local_120);
    uVar2 = 0;
    if (local_120._4_1_ != '\0') {
      uVar2 = (undefined4)local_120;
    }
    *(undefined4 *)(lVar3 + 0x20) = uVar2;
  }
  else {
    plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
    if (DAT_14cab4c78 == 0) {
      uVar5 = FUN_140d2a6db();
      DAT_14cab4c78 = FUN_140002ddd(FUN_146346f87,uVar5,L"MovieScene3DTransformKeyStruct");
    }
    FUN_1446e6d0e(plVar4,DAT_14cab4c78);
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14a4c7c20;
    plVar6[2] = (longlong)plVar4;
    lVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if (local_70 == '\x01') {
      local_300 = (undefined **)(lVar3 + 0x48);
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = FUN_14752647e(local_140);
      FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
        UNLOCK();
      }
      local_f0 = local_2e0;
      local_f8 = local_2e8;
      local_e0 = local_e0 | 3;
      local_120 = &PTR_FUN_14a4c7d60;
      local_108 = local_2f8;
      local_100 = local_2f0;
      local_118 = local_308;
      local_110 = 1;
      local_e8 = lVar3 + 8;
      FUN_147573770(local_300,&local_120);
      if ((local_e0 & 1) != 0) {
        ppuVar9 = (undefined **)&local_120;
        if ((local_e0 & 2) == 0) {
          ppuVar9 = local_120;
        }
        local_e0 = local_e0 & 0xfe;
        (**(code **)*ppuVar9)(ppuVar9,0);
        if ((local_e0 & 2) == 0) {
          FUN_1400020a8(local_120);
        }
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
    }
    if (local_64 == '\x01') {
      local_308 = (undefined **)(lVar3 + 0x48);
      local_300 = local_6c;
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = FUN_14752647e(local_160);
      FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
        UNLOCK();
      }
      local_f0 = local_2e0;
      local_f8 = local_2e8;
      local_e0 = local_e0 | 3;
      local_120 = &PTR_FUN_14a4c7d60;
      local_108 = local_2f8;
      local_100 = local_2f0;
      local_118 = local_300;
      local_110 = 1;
      local_e8 = lVar3 + 0x10;
      FUN_147573770(local_308,&local_120);
      if ((local_e0 & 1) != 0) {
        ppuVar9 = (undefined **)&local_120;
        if ((local_e0 & 2) == 0) {
          ppuVar9 = local_120;
        }
        local_e0 = local_e0 & 0xfe;
        (**(code **)*ppuVar9)(ppuVar9,0);
        if ((local_e0 & 2) == 0) {
          FUN_1400020a8(local_120);
        }
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
    }
    if (local_58 == '\x01') {
      local_308 = (undefined **)(lVar3 + 0x48);
      local_300 = local_60;
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = FUN_14752647e(local_180);
      FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
        UNLOCK();
      }
      local_f0 = local_2e0;
      local_f8 = local_2e8;
      local_e0 = local_e0 | 3;
      local_120 = &PTR_FUN_14a4c7d60;
      local_108 = local_2f8;
      local_100 = local_2f0;
      local_118 = local_300;
      local_110 = 1;
      local_e8 = lVar3 + 0x18;
      FUN_147573770(local_308,&local_120);
      if ((local_e0 & 1) != 0) {
        ppuVar9 = (undefined **)&local_120;
        if ((local_e0 & 2) == 0) {
          ppuVar9 = local_120;
        }
        local_e0 = local_e0 & 0xfe;
        (**(code **)*ppuVar9)(ppuVar9,0);
        if ((local_e0 & 2) == 0) {
          FUN_1400020a8(local_120);
        }
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
    }
    if (local_a0 == '\x01') {
      local_308 = (undefined **)(lVar3 + 0x48);
      local_300 = local_a8;
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = FUN_14752647e(local_1a0);
      FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
        UNLOCK();
      }
      local_f0 = local_2e0;
      local_f8 = local_2e8;
      local_e0 = local_e0 | 3;
      local_120 = &PTR_FUN_14a4c7d60;
      local_108 = local_2f8;
      local_100 = local_2f0;
      local_118 = local_300;
      local_110 = 1;
      local_e8 = lVar3 + 0x30;
      FUN_147573770(local_308,&local_120);
      if ((local_e0 & 1) != 0) {
        ppuVar9 = (undefined **)&local_120;
        if ((local_e0 & 2) == 0) {
          ppuVar9 = local_120;
        }
        local_e0 = local_e0 & 0xfe;
        (**(code **)*ppuVar9)(ppuVar9,0);
        if ((local_e0 & 2) == 0) {
          FUN_1400020a8(local_120);
        }
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
    }
    if (local_94 == '\x01') {
      local_308 = (undefined **)(lVar3 + 0x48);
      local_300 = local_9c;
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = FUN_14752647e(local_1c0);
      FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
        UNLOCK();
      }
      local_f0 = local_2e0;
      local_f8 = local_2e8;
      local_e0 = local_e0 | 3;
      local_120 = &PTR_FUN_14a4c7d60;
      local_108 = local_2f8;
      local_100 = local_2f0;
      local_118 = local_300;
      local_110 = 1;
      local_e8 = lVar3 + 0x20;
      FUN_147573770(local_308,&local_120);
      if ((local_e0 & 1) != 0) {
        ppuVar9 = (undefined **)&local_120;
        if ((local_e0 & 2) == 0) {
          ppuVar9 = local_120;
        }
        local_e0 = local_e0 & 0xfe;
        (**(code **)*ppuVar9)(ppuVar9,0);
        if ((local_e0 & 2) == 0) {
          FUN_1400020a8(local_120);
        }
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
    }
    if (local_88 == '\x01') {
      local_308 = (undefined **)(lVar3 + 0x48);
      local_300 = local_90;
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = FUN_14752647e(local_1e0);
      FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
        UNLOCK();
      }
      local_f0 = local_2e0;
      local_f8 = local_2e8;
      local_e0 = local_e0 | 3;
      local_120 = &PTR_FUN_14a4c7d60;
      local_108 = local_2f8;
      local_100 = local_2f0;
      local_118 = local_300;
      local_110 = 1;
      local_e8 = lVar3 + 0x28;
      FUN_147573770(local_308,&local_120);
      if ((local_e0 & 1) != 0) {
        ppuVar9 = (undefined **)&local_120;
        if ((local_e0 & 2) == 0) {
          ppuVar9 = local_120;
        }
        local_e0 = local_e0 & 0xfe;
        (**(code **)*ppuVar9)(ppuVar9,0);
        if ((local_e0 & 2) == 0) {
          FUN_1400020a8(local_120);
        }
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
    }
    if (local_d0 == '\x01') {
      local_308 = (undefined **)(lVar3 + 0x48);
      local_300 = local_d8;
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = FUN_14752647e(local_200);
      FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
        UNLOCK();
      }
      local_f0 = local_2e0;
      local_f8 = local_2e8;
      local_e0 = local_e0 | 3;
      local_120 = &PTR_FUN_14a4c70c0;
      local_108 = local_2f8;
      local_100 = local_2f0;
      local_118 = local_300;
      local_110 = 1;
      local_e8 = lVar3 + 0x38;
      FUN_147573770(local_308,&local_120);
      if ((local_e0 & 1) != 0) {
        ppuVar9 = (undefined **)&local_120;
        if ((local_e0 & 2) == 0) {
          ppuVar9 = local_120;
        }
        local_e0 = local_e0 & 0xfe;
        (**(code **)*ppuVar9)(ppuVar9,0);
        if ((local_e0 & 2) == 0) {
          FUN_1400020a8(local_120);
        }
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
    }
    if (local_c4 == '\x01') {
      local_308 = (undefined **)(lVar3 + 0x48);
      local_300 = local_cc;
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = FUN_14752647e(local_220);
      FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
        UNLOCK();
      }
      local_f0 = local_2e0;
      local_f8 = local_2e8;
      local_e0 = local_e0 | 3;
      local_120 = &PTR_FUN_14a4c70c0;
      local_108 = local_2f8;
      local_100 = local_2f0;
      local_118 = local_300;
      local_110 = 1;
      local_e8 = lVar3 + 0x3c;
      FUN_147573770(local_308,&local_120);
      if ((local_e0 & 1) != 0) {
        ppuVar9 = (undefined **)&local_120;
        if ((local_e0 & 2) == 0) {
          ppuVar9 = local_120;
        }
        local_e0 = local_e0 & 0xfe;
        (**(code **)*ppuVar9)(ppuVar9,0);
        if ((local_e0 & 2) == 0) {
          FUN_1400020a8(local_120);
        }
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
    }
    ppuVar9 = local_c0;
    if (local_b8 == '\x01') {
      local_308 = (undefined **)(lVar3 + 0x48);
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = FUN_14752647e(local_240);
      FUN_1475bd4b6(uVar5,&local_2f8,uVar2);
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
        UNLOCK();
      }
      local_f0 = local_2e0;
      local_f8 = local_2e8;
      local_e0 = local_e0 | 3;
      local_120 = &PTR_FUN_14a4c70c0;
      local_108 = local_2f8;
      local_100 = local_2f0;
      local_118 = ppuVar9;
      local_110 = 1;
      local_e8 = lVar3 + 0x40;
      FUN_147573770(local_308,&local_120);
      if ((local_e0 & 1) != 0) {
        ppuVar9 = (undefined **)&local_120;
        if ((local_e0 & 2) == 0) {
          ppuVar9 = local_120;
        }
        local_e0 = local_e0 & 0xfe;
        (**(code **)*ppuVar9)(ppuVar9,0);
        if ((local_e0 & 2) == 0) {
          FUN_1400020a8(local_120);
        }
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
    }
    FUN_1475737dc(lVar3 + 0x48);
    FUN_147573828(lVar3 + 0x48,&local_120);
    uVar2 = 0;
    if (local_120._4_1_ != '\0') {
      uVar2 = (undefined4)local_120;
    }
    *(undefined4 *)(lVar3 + 0x44) = uVar2;
  }
LAB_1475bba52:
  *param_2 = plVar4;
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_1475bba82:
  lVar3 = 0x20;
  do {
    if (*(char *)((longlong)&local_d8 + lVar3) == '\x01') {
      *(undefined1 *)((longlong)&local_d8 + lVar3) = 0;
    }
    lVar3 = lVar3 + -0xc;
  } while (lVar3 != -4);
  lVar3 = 0x20;
  do {
    if (*(char *)((longlong)&local_a8 + lVar3) == '\x01') {
      *(undefined1 *)((longlong)&local_a8 + lVar3) = 0;
    }
    lVar3 = lVar3 + -0xc;
  } while (lVar3 != -4);
  lVar3 = 0x20;
  do {
    if (*(char *)((longlong)&local_78 + lVar3) == '\x01') {
      *(undefined1 *)((longlong)&local_78 + lVar3) = 0;
    }
    lVar3 = lVar3 + -0xc;
  } while (lVar3 != -4);
  if (local_238 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_238 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_238 + 0x10))();
    }
  }
  if (local_218 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_218 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_218 + 0x10))();
    }
  }
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_1f8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_1f8 + 0x10))();
    }
  }
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_1d8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_1d8 + 0x10))();
    }
  }
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_1b8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_1b8 + 0x10))();
    }
  }
  if (local_198 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_198 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_198 + 0x10))();
    }
  }
  if (local_178 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_178 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_178 + 0x10))();
    }
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_158 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_158 + 0x10))();
    }
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_138 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_138 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475bd3f2 FUN_1475bd3f2 body=195 status=ok
// SIG undefined FUN_1475bd3f2(void)

undefined8 * FUN_1475bd3f2(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    local_50 = param_2 + 0x88;
    local_40 = param_2 + 0x68;
    local_58 = (longlong *)(param_2 + 0x58);
    lVar3 = param_3[1];
    local_48 = param_2;
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_3;
      lVar5 = 0;
      do {
        uVar1 = *(undefined4 *)(lVar2 + lVar5);
        iVar4 = FUN_14752433e(&local_58,uVar1);
        if (iVar4 != -1) {
          *param_1 = CONCAT44(*(undefined4 *)(*local_58 + (longlong)iVar4 * 4),uVar1);
          *(undefined1 *)(param_1 + 1) = 1;
          goto LAB_1475bd471;
        }
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar5);
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
LAB_1475bd471:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bd4b6 FUN_1475bd4b6 body=165 status=ok
// SIG undefined FUN_1475bd4b6(void)

undefined8 FUN_1475bd4b6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_145b24df8();
  FUN_1475264be(param_1,&local_58,*(undefined8 *)(lVar2 + 0x18),param_3);
  local_38 = local_58;
  local_30 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14764a020(param_2,&local_38,local_48,local_40);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bd59e FUN_1475bd59e body=202 status=ok
// SIG undefined FUN_1475bd59e(void)

void FUN_1475bd59e(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14581db06(param_1,&local_21);
  cVar1 = FUN_1411696b0(&local_21,param_2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xda) = 1;
    *(char *)(param_1 + 0xd9) = (char)param_2;
  }
  FUN_14581db06(param_1,&local_22);
  cVar1 = FUN_1411696b0(&local_22,param_2);
  if (cVar1 != '\0') {
    if ((char)param_2 == '\x01') {
      uVar2 = 0x3ff0000000000000;
    }
    else {
      if (((param_2 & 0xff) != 4) && ((param_2 & 0xff) != 2)) goto LAB_1475bd640;
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + 0x850) = 1;
    *(undefined8 *)(param_1 + 0x848) = uVar2;
    *(undefined1 *)(param_1 + 0x968) = 1;
    *(undefined8 *)(param_1 + 0x960) = uVar2;
    *(undefined1 *)(param_1 + 0xa80) = 1;
    *(undefined8 *)(param_1 + 0xa78) = uVar2;
  }
LAB_1475bd640:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bd66a FUN_1475bd66a body=209 status=ok
// SIG undefined FUN_1475bd66a(void)

undefined8 FUN_1475bd66a(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 0xb38);
  if ((lVar9 == 0) || ((longlong)*(int *)(lVar9 + 0x30) == 0)) {
    uVar6 = 0;
  }
  else {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    lVar8 = *(longlong *)(lVar9 + 0x28);
    uVar5 = CONCAT71((int7)((ulonglong)lVar9 >> 8),DAT_14c950c29);
    lVar9 = (longlong)*(int *)(lVar9 + 0x30) * 0x110;
    do {
      lVar7 = *(longlong *)(lVar8 + 0x108);
      if (((uVar5 & 1) == 0) || (lVar7 == 0)) {
        if (lVar7 != 0) goto LAB_1475bd6c8;
      }
      else {
        uVar6 = FUN_1456cec3c(lVar7);
        lVar7 = *(longlong *)(lVar8 + 0x108);
        uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),DAT_14c950c29);
LAB_1475bd6c8:
        if (((uVar5 & 1) != 0) && (lVar7 != 0)) {
          uVar6 = FUN_1456cec3c(lVar7);
          uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),DAT_14c950c29);
        }
        if ((((*(int *)(lVar7 + 0x2c) == iVar1) && (*(int *)(lVar7 + 0x30) == iVar2)) &&
            (*(int *)(lVar7 + 0x34) == iVar3)) && (*(int *)(lVar7 + 0x38) == iVar4))
        goto LAB_1475bd733;
      }
      lVar8 = lVar8 + 0x110;
      lVar9 = lVar9 + -0x110;
    } while (lVar9 != 0);
    lVar8 = 0;
LAB_1475bd733:
    uVar6 = CONCAT71((int7)(uVar5 >> 8),lVar8 != 0);
  }
  return uVar6;
}



// FUNCTION 1475bd73c FUN_1475bd73c body=261 status=ok
// SIG undefined FUN_1475bd73c(void)

longlong FUN_1475bd73c(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = *(longlong *)(param_1 + 0xb38);
  if ((lVar5 != 0) && (iVar7 = *(int *)(lVar5 + 0x30), (longlong)iVar7 != 0)) {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    lVar5 = *(longlong *)(lVar5 + 0x28);
    lVar9 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar8 = *(longlong *)(lVar5 + 0x108 + lVar9);
      if (((bVar6 & 1) == 0) || (lVar8 == 0)) {
        if (lVar8 != 0) goto LAB_1475bd7a6;
      }
      else {
        FUN_1456cec3c(lVar8);
        lVar8 = *(longlong *)(lVar5 + 0x108 + lVar9);
        bVar6 = DAT_14c950c29;
LAB_1475bd7a6:
        if (((bVar6 & 1) != 0) && (lVar8 != 0)) {
          FUN_1456cec3c(lVar8);
          bVar6 = DAT_14c950c29;
        }
        if ((((*(int *)(lVar8 + 0x2c) == iVar1) && (*(int *)(lVar8 + 0x30) == iVar2)) &&
            (*(int *)(lVar8 + 0x34) == iVar3)) && (*(int *)(lVar8 + 0x38) == iVar4)) {
          iVar7 = (int)(lVar9 >> 4) * -0xf0f0f0f;
          if (iVar7 == -1) {
            return 0;
          }
          return (longlong)iVar7 * 0x110 + *(longlong *)(*(longlong *)(param_1 + 0xb38) + 0x28);
        }
      }
      lVar9 = lVar9 + 0x110;
    } while ((longlong)iVar7 * 0x110 - lVar9 != 0);
  }
  return 0;
}



// FUNCTION 1475bd842 FUN_1475bd842 body=129 status=ok
// SIG undefined FUN_1475bd842(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1475bd842(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4cf8) {
    FUN_144b3d300(&DAT_14cab4cf8);
    if (DAT_14cab4cf8 == -1) {
      DAT_14cab4ce8 = 0;
      _DAT_14cab4cf0 = 0;
      atexit(FUN_1432f4885);
      _Init_thread_footer(&DAT_14cab4cf8);
    }
  }
  puVar1 = &DAT_14cab4ce8;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xb38) + 0x28);
  }
  return puVar1;
}



// FUNCTION 1475bd8c4 FUN_1475bd8c4 body=703 status=ok
// SIG undefined FUN_1475bd8c4(void)

void FUN_1475bd8c4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_178 [40];
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar1 = param_1 + -0x1f;
  if (param_1[0x167] == 0) {
    lVar4 = FUN_1475bdb84(plVar1);
    if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar4);
    }
    param_1[0x167] = lVar4;
  }
  if ((param_2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*param_1 + 0x10))(param_1,(longlong)param_2 + 0x2c), cVar3 == '\0')) {
    FUN_144757f48(param_1[0x167],8);
    lVar4 = param_1[0x167];
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 2;
    local_134 = 0;
    uStack_12c = 0;
    local_124 = 0x200000000;
    local_11c = 0;
    uStack_114 = 0;
    local_10c = 0;
    local_108 = 2;
    local_100 = 0x404;
    local_b0 = 0;
    local_a8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_a4 = 0xffffffff00000080;
    local_78 = 0;
    local_70 = 0;
    local_9c = 0;
    uStack_94 = 0;
    local_8c = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_150 = &PTR_FUN_14a49f3e0;
    local_48 = param_2;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    iVar2 = *(int *)(lVar4 + 0x30);
    *(uint *)(lVar4 + 0x30) = iVar2 + 1U;
    if (*(uint *)(lVar4 + 0x34) < iVar2 + 1U) {
      FUN_14764a2d6((longlong *)(lVar4 + 0x28),iVar2);
    }
    lVar4 = *(longlong *)(lVar4 + 0x28);
    lVar6 = (longlong)iVar2 * 0x110;
    FUN_14764a36a(lVar4 + lVar6,&local_150);
    *(undefined ***)(lVar4 + lVar6) = &PTR_FUN_14a49f3e0;
    *(longlong **)(lVar4 + 0x108 + lVar6) = local_48;
    if ((local_48 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_140bb7e7c(&local_150);
    lVar4 = *(longlong *)(param_1[0x167] + 0x28);
    *(undefined2 *)(lVar4 + 0x68 + lVar6) = 0x100;
    (**(code **)(*param_2 + 0x170))(param_2,0,plVar1,0x10);
    (**(code **)(param_1[-0x1f] + 0x358))(plVar1);
    if ((longlong)(int)param_1[3] != 0) {
      lVar5 = 0;
      do {
        if ((*(int *)(param_1[2] + 8 + lVar5) != 0) && (*(longlong *)(param_1[2] + lVar5) != 0)) {
          FUN_14764a43e(param_1 + 2,param_1,lVar4 + lVar6);
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)(int)param_1[3] * 0x10 != lVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475bdb84 FUN_1475bdb84 body=174 status=ok
// SIG undefined FUN_1475bdb84(void)

undefined8 FUN_1475bdb84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d4098();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 9;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1475bdc34 FUN_1475bdc34 body=311 status=ok
// SIG undefined FUN_1475bdc34(void)

void FUN_1475bdc34(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0xb38);
  if ((lVar1 != 0) && (iVar3 = *(int *)(lVar1 + 0x30), (longlong)iVar3 != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0x28);
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar5 = *(longlong *)(lVar1 + 0x108 + lVar4);
      if (((bVar2 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_1475bdc9b;
      }
      else {
        FUN_1456cec3c(lVar5);
        lVar5 = *(longlong *)(lVar1 + 0x108 + lVar4);
        bVar2 = DAT_14c950c29;
LAB_1475bdc9b:
        if (((bVar2 & 1) != 0) && (lVar5 != 0)) {
          FUN_1456cec3c(lVar5);
          bVar2 = DAT_14c950c29;
        }
        if (*(longlong *)(lVar5 + 0x18) == param_2) {
          iVar3 = (int)(lVar4 >> 4) * -0xf0f0f0f;
          if (iVar3 == -1) {
            return;
          }
          if (((bVar2 & 1) != 0) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb38) + 0x28) + 0x108 +
               (longlong)iVar3 * 0x110) != 0)) {
            FUN_1456cec3c();
            bVar2 = DAT_14c950c29;
          }
          if ((param_3 != 0) && ((bVar2 & 1) != 0)) {
            FUN_1456cec3c(param_3);
          }
                    /* WARNING: Could not recover jumptable at 0x0001475bdd4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(param_1 + -0xf8) + 0x358))((longlong *)(param_1 + -0xf8));
          return;
        }
      }
      lVar4 = lVar4 + 0x110;
    } while ((longlong)iVar3 * 0x110 - lVar4 != 0);
  }
  return;
}



// FUNCTION 1475bdd6c FUN_1475bdd6c body=256 status=ok
// SIG undefined FUN_1475bdd6c(void)

void FUN_1475bdd6c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (((*(char *)(param_1 + 0x28) == '\0') && (lVar1 = *(longlong *)(param_1 + 0xb38), lVar1 != 0))
     && (iVar3 = *(int *)(lVar1 + 0x30), (longlong)iVar3 != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0x28);
    uVar5 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar4 = *(longlong *)(lVar1 + 0x108 + uVar5);
      if (((bVar2 & 1) == 0) || (lVar4 == 0)) {
        if (lVar4 != 0) goto LAB_1475bdddd;
      }
      else {
        FUN_1456cec3c(lVar4);
        lVar4 = *(longlong *)(lVar1 + 0x108 + uVar5);
        bVar2 = DAT_14c950c29;
LAB_1475bdddd:
        if (((bVar2 & 1) != 0) && (lVar4 != 0)) {
          FUN_1456cec3c(lVar4);
          bVar2 = DAT_14c950c29;
        }
        if (lVar4 == param_2) {
          iVar3 = (int)(uVar5 >> 4) * -0xf0f0f0f;
          if (iVar3 < 0) {
            return;
          }
          if (*(int *)(*(longlong *)(param_1 + 0xb38) + 0x30) <= iVar3) {
            return;
          }
          FUN_1475bde6c(*(longlong *)(param_1 + 0xb38) + 0x28,iVar3,1);
                    /* WARNING: Could not recover jumptable at 0x0001475bde65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(param_1 + -0xf8) + 0x358))((longlong *)(param_1 + -0xf8));
          return;
        }
      }
      uVar5 = uVar5 + 0x110;
    } while ((longlong)iVar3 * 0x110 - uVar5 != 0);
  }
  return;
}



// FUNCTION 1475bde6c FUN_1475bde6c body=112 status=ok
// SIG undefined FUN_1475bde6c(void)

void FUN_1475bde6c(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x110 + *param_1);
  FUN_140bb7e7c(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x110),(longlong)(int)(~param_2 + iVar1) * 0x110);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  if (param_3 != '\x01') {
    return;
  }
  FUN_14764a4ee(param_1);
  return;
}



// FUNCTION 1475bdedc FUN_1475bdedc body=86 status=ok
// SIG undefined FUN_1475bdedc(void)

longlong FUN_1475bdedc(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xaf8);
  if ((lVar1 == 0 & param_2) == 1) {
    lVar1 = FUN_1475bdf32(param_1 + -0x130);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xaf8) = lVar1;
  }
  return lVar1;
}



// FUNCTION 1475bdf32 FUN_1475bdf32 body=174 status=ok
// SIG undefined FUN_1475bdf32(void)

undefined8 FUN_1475bdf32(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14594a3e4();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1475bdff4 FUN_1475bdff4 body=72 status=ok
// SIG undefined FUN_1475bdff4(void)

void FUN_1475bdff4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + -0x18) = 0;
  plVar3 = *(longlong **)(param_1 + -0x10);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + -0x10) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001475be031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1475be03c FUN_1475be03c body=72 status=ok
// SIG undefined FUN_1475be03c(void)

void FUN_1475be03c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + -0x50) = 0;
  plVar3 = *(longlong **)(param_1 + -0x48);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + -0x48) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001475be079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1475be088 FUN_1475be088 body=136 status=ok
// SIG undefined FUN_1475be088(void)

undefined8 FUN_1475be088(longlong param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar8 = *(uint *)(param_1 + 0x58);
  if (uVar8 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x80);
    *(longlong *)(param_3 + 8) = lVar6;
    uVar9 = *(undefined4 *)(param_1 + 0x60);
    uVar10 = *(undefined4 *)(param_1 + 100);
    uVar11 = *(undefined4 *)(param_1 + 0x68);
    uVar12 = *(undefined4 *)(param_1 + 0x6c);
    uVar13 = *(undefined4 *)(param_1 + 0x70);
    uVar14 = *(undefined4 *)(param_1 + 0x74);
    uVar15 = *(undefined4 *)(param_1 + 0x78);
    uVar16 = *(undefined4 *)(param_1 + 0x7c);
  }
  else {
    if ((int)uVar8 < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar1 = (uVar8 >> 1) + uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar1 * 4) <= param_2) {
          uVar7 = uVar1 + (uVar8 & 1);
        }
        bVar4 = 1 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar4);
    }
    uVar5 = 1;
    if (1 < (int)uVar7) {
      uVar5 = (ulonglong)uVar7;
    }
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar6 = uVar5 * 5;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(lVar3 + -8 + uVar5 * 0x28);
    puVar2 = (undefined4 *)(lVar3 + -0x28 + uVar5 * 0x28);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    uVar11 = puVar2[2];
    uVar12 = puVar2[3];
    puVar2 = (undefined4 *)(lVar3 + -0x18 + uVar5 * 0x28);
    uVar13 = *puVar2;
    uVar14 = puVar2[1];
    uVar15 = puVar2[2];
    uVar16 = puVar2[3];
  }
  param_3[4] = uVar13;
  param_3[5] = uVar14;
  param_3[6] = uVar15;
  param_3[7] = uVar16;
  *param_3 = uVar9;
  param_3[1] = uVar10;
  param_3[2] = uVar11;
  param_3[3] = uVar12;
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
}



// FUNCTION 1475be110 FUN_1475be110 body=94 status=ok
// SIG undefined FUN_1475be110(void)

void FUN_1475be110(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x98;
  local_18 = param_1 + 0x88;
  local_30 = param_1 + 0x50;
  local_20 = param_1;
  FUN_147523910(&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475be170 FUN_1475be170 body=116 status=ok
// SIG undefined FUN_1475be170(void)

void FUN_1475be170(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x98;
  local_10 = param_1 + 0x88;
  local_28 = param_1 + 0x50;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_147523b62(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475be1e6 FUN_1475be1e6 body=116 status=ok
// SIG undefined FUN_1475be1e6(void)

void FUN_1475be1e6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x98;
  local_10 = param_1 + 0x88;
  local_28 = param_1 + 0x50;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_1475be25c(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475be25c FUN_1475be25c body=90 status=ok
// SIG undefined FUN_1475be25c(void)

void FUN_1475be25c(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_14764a5a2(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1475be2b6 FUN_1475be2b6 body=116 status=ok
// SIG undefined FUN_1475be2b6(void)

void FUN_1475be2b6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x98;
  local_10 = param_1 + 0x88;
  local_28 = param_1 + 0x50;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_1475be32c(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475be32c FUN_1475be32c body=234 status=ok
// SIG undefined FUN_1475be32c(void)

void FUN_1475be32c(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    do {
      iVar2 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar6 * 4));
      if (iVar2 == -1) {
        FUN_147a3fc60(&local_68);
        lVar4 = *param_3;
        uVar3 = local_68;
      }
      else {
        lVar4 = *(longlong *)param_1[3];
        lVar5 = (longlong)iVar2;
        local_48 = *(undefined8 *)(lVar4 + 0x20 + lVar5 * 0x28);
        puVar1 = (undefined4 *)(lVar4 + lVar5 * 0x28);
        local_68 = *puVar1;
        uStack_64 = puVar1[1];
        uStack_60 = puVar1[2];
        uStack_5c = puVar1[3];
        puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x28);
        local_58 = *puVar1;
        uStack_54 = puVar1[1];
        uStack_50 = puVar1[2];
        uStack_4c = puVar1[3];
        uVar3 = FUN_14764a6ae(param_1,*(undefined4 *)(*(longlong *)*param_1 + lVar5 * 4),&local_68);
        FUN_147524308(param_1,&local_6c,uVar3);
        lVar4 = *param_3;
        uVar3 = local_6c;
      }
      *(undefined4 *)(lVar4 + lVar6 * 4) = uVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_2[1]);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475be418 FUN_1475be418 body=153 status=ok
// SIG undefined FUN_1475be418(void)

void FUN_1475be418(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1 + 0x98;
  local_30 = param_1 + 0x88;
  local_48 = param_1 + 0x50;
  lVar2 = param_2[1];
  local_38 = param_1;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(&local_48,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_14764a7fe(&local_48,iVar3);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475be4b2 FUN_1475be4b2 body=272 status=ok
// SIG undefined FUN_1475be4b2(void)

void FUN_1475be4b2(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x58)) {
    uVar7 = 0;
    uVar8 = *(uint *)(param_1 + 0x58);
    do {
      uVar2 = (uVar8 >> 1) + uVar7;
      if (*(int *)(*plVar1 + (ulonglong)uVar2 * 4) <= param_2) {
        uVar7 = uVar2 + (uVar8 & 1);
      }
      bVar5 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar5);
    uVar6 = 1;
    if (1 < (int)uVar7) {
      uVar6 = (ulonglong)uVar7;
    }
    lVar4 = *(longlong *)(param_1 + 0x88);
    local_48 = *(undefined8 *)(lVar4 + -8 + uVar6 * 0x28);
    puVar3 = (undefined8 *)(lVar4 + -0x28 + uVar6 * 0x28);
    local_68 = (longlong *)*puVar3;
    lStack_60 = puVar3[1];
    puVar3 = (undefined8 *)(lVar4 + -0x18 + uVar6 * 0x28);
    local_58 = *puVar3;
    lStack_50 = puVar3[1];
    local_88 = plVar1;
    local_80 = param_1 + 0x98;
    local_78 = param_1;
    local_70 = param_1 + 0x88;
    FUN_1475be5c4(&local_88,local_8c,param_2);
  }
  local_68 = plVar1;
  lStack_60 = param_1 + 0x98;
  local_58 = param_1;
  lStack_50 = param_1 + 0x88;
  FUN_1475be638(&local_68,param_2,param_3);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475be5c4 FUN_1475be5c4 body=116 status=ok
// SIG undefined FUN_1475be5c4(void)

undefined8 FUN_1475be5c4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  
  iVar9 = FUN_147525ee8(param_1,param_3,0);
  if (iVar9 == -1) {
    iVar9 = FUN_14764a6ae(param_1,param_3,param_4);
  }
  else {
    lVar3 = **(longlong **)(param_1 + 0x18);
    lVar10 = (longlong)iVar9;
    *(undefined8 *)(lVar3 + 0x20 + lVar10 * 0x28) = *(undefined8 *)(param_4 + 8);
    uVar4 = *param_4;
    uVar5 = param_4[1];
    uVar6 = param_4[2];
    uVar7 = param_4[3];
    uVar8 = *(undefined8 *)(param_4 + 6);
    puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar10 * 0x28);
    *puVar2 = *(undefined8 *)(param_4 + 4);
    puVar2[1] = uVar8;
    puVar1 = (undefined4 *)(lVar3 + lVar10 * 0x28);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  FUN_147524308(param_1,param_2,iVar9);
  return param_2;
}



// FUNCTION 1475be638 FUN_1475be638 body=353 status=ok
// SIG undefined FUN_1475be638(void)

void FUN_1475be638(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_60) {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar3 = local_78;
      uVar4 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_1475be6c3;
      }
      else if (iVar2 < param_2) {
LAB_1475be6c3:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar3 = local_88;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    lVar6 = (longlong)(int)uStack_80;
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        iVar5 = FUN_14752433e(param_1,*(undefined4 *)(lVar3 + lVar7 * 4));
        if (iVar5 != -1) {
          FUN_14764a7fe(param_1,iVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475be79a FUN_1475be79a body=103 status=ok
// SIG undefined FUN_1475be79a(void)

undefined8 FUN_1475be79a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x98;
  local_18 = param_1 + 0x88;
  local_30 = param_1 + 0x50;
  local_20 = param_1;
  FUN_147524308(&local_30,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475be802 FUN_1475be802 body=92 status=ok
// SIG undefined FUN_1475be802(void)

void FUN_1475be802(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x98;
  local_10 = param_1 + 0x88;
  local_28 = param_1 + 0x50;
  local_18 = param_1;
  FUN_14752433e(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475be860 FUN_1475be860 body=92 status=ok
// SIG undefined FUN_1475be860(void)

void FUN_1475be860(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x98;
  local_10 = param_1 + 0x88;
  local_28 = param_1 + 0x50;
  local_18 = param_1;
  FUN_147524082(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475be8f6 FUN_1475be8f6 body=129 status=ok
// SIG undefined FUN_1475be8f6(void)

void FUN_1475be8f6(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x94) < 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    FUN_14764a95e(param_1 + 0x88);
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  FUN_147a408e2(param_1 + 0x98);
  uVar1 = DAT_14cab4a28;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1475be978 FUN_1475be978 body=92 status=ok
// SIG undefined FUN_1475be978(void)

void FUN_1475be978(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x98;
  local_10 = param_1 + 0x88;
  local_28 = param_1 + 0x50;
  local_18 = param_1;
  FUN_1475243aa(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475be9f2 FUN_1475be9f2 body=448 status=ok
// SIG undefined FUN_1475be9f2(void)

void FUN_1475be9f2(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  longlong *local_68;
  uint local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140836bcc();
  if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
    local_58 = 0;
    uStack_50 = 0;
    lVar9 = *(longlong *)(param_1 + 0x298);
    lVar11 = (longlong)*(int *)(param_1 + 0x2a0) << 4;
    do {
      uVar7 = uStack_50;
      lVar10 = (longlong)(int)uStack_50;
      uVar8 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
      if (uStack_50._4_4_ < uVar8) {
        FUN_140c60952(&local_58,uVar7 & 0xffffffff);
      }
      puVar1 = (undefined8 *)(local_58 + lVar10 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_140b10a34(lVar9,lVar10 * 0x10 + local_58);
      uVar6 = DAT_14cab4a28;
      lVar9 = lVar9 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    iVar3 = *(int *)(param_1 + 0x290);
    if ((-1 < (longlong)iVar3) && (iVar3 < (int)uStack_50)) {
      puVar1 = (undefined8 *)(local_58 + (longlong)iVar3 * 0x10);
      uVar5 = puVar1[1];
      *(undefined8 *)(param_1 + 0x158) = *puVar1;
      *(undefined8 *)(param_1 + 0x160) = uVar5;
      *(undefined4 *)(param_1 + 0x168) = uVar6;
      *(undefined8 *)(param_1 + 0x16c) = 0;
      *(undefined8 *)(param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
    FUN_147a3fcb4(param_1 + 0x218,&local_68);
    if (-1 < (int)local_60) {
      do {
        if ((int)local_68[1] <= (int)local_60) break;
        iVar3 = *(int *)(*local_68 + 4 + (ulonglong)local_60 * 8);
        if ((-1 < (longlong)iVar3) && (iVar3 < (int)uStack_50)) {
          puVar2 = (undefined4 *)(local_58 + (longlong)iVar3 * 0x10);
          local_98 = *puVar2;
          uStack_94 = puVar2[1];
          uStack_90 = puVar2[2];
          uStack_8c = puVar2[3];
          local_88 = DAT_14cab4a28;
          local_84 = 0;
          uStack_7c = 0;
          local_74 = 0;
          FUN_1475bebb4(param_1 + 0xf8,(double)*(float *)(*local_68 + (ulonglong)local_60 * 8),
                        &local_98);
        }
        uVar8 = local_60 + 1;
        bVar4 = -2 < (int)local_60;
        local_60 = uVar8;
      } while (bVar4);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475bebb4 FUN_1475bebb4 body=222 status=ok
// SIG undefined FUN_1475bebb4(void)

void FUN_1475bebb4(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145cba7c3(&local_48);
  FUN_147572fa9(&local_4c,0,local_48,param_2);
  iVar2 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
    FUN_14753e8f2(param_1 + 0x50,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 4) = local_4c;
  iVar2 = *(int *)(param_1 + 0x90);
  lVar11 = (longlong)iVar2;
  *(uint *)(param_1 + 0x90) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar2 + 1U) {
    FUN_147609226((longlong *)(param_1 + 0x88),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x88);
  *(undefined8 *)(lVar3 + 0x20 + lVar11 * 0x28) = *(undefined8 *)(param_3 + 8);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[5];
  uVar9 = param_3[6];
  uVar10 = param_3[7];
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar11 * 0x28);
  *puVar1 = param_3[4];
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + lVar11 * 0x28);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bec94 FUN_1475bec94 body=657 status=ok
// SIG undefined FUN_1475bec94(void)

void FUN_1475bec94(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c4 [16];
  uint local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_5c [16];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar3 = (undefined8 *)(param_1 + 0x158);
  local_70 = *param_4;
  local_68 = param_4[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  FUN_14179f016(puVar3,local_5c,param_3,&local_70);
  uVar5 = FUN_1447addd0(local_5c,0x10);
  iVar6 = FUN_1475a0174(param_2,uVar5 ^ local_4c,local_5c);
  if (iVar6 != -1) {
    uVar7 = FUN_147552f3e(*param_4);
    local_88 = *puVar3;
    uStack_80 = *(undefined8 *)(param_1 + 0x160);
    local_98 = *(undefined4 *)(param_1 + 0x170);
    uStack_94 = *(undefined4 *)(param_1 + 0x174);
    uStack_90 = *(undefined4 *)(param_1 + 0x178);
    uStack_8c = *(undefined4 *)(param_1 + 0x17c);
    uVar5 = FUN_1447addd0(local_5c,0x10);
    iVar6 = FUN_1475a0174(param_2,uVar5 ^ local_4c,local_5c);
    lVar9 = 0;
    if (iVar6 != -1) {
      lVar9 = (longlong)iVar6 * 0x30 + *param_2;
    }
    FUN_14757416c(lVar9 + 0x14,&local_b0,param_3,uVar7);
    *puVar3 = CONCAT44(uStack_ac,local_b0);
    *(ulonglong *)(param_1 + 0x160) = CONCAT44(uStack_a4,uStack_a8);
    *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_9c,local_a0);
    *(undefined4 *)(param_1 + 0x170) = local_98;
    *(undefined4 *)(param_1 + 0x174) = uStack_94;
    *(undefined4 *)(param_1 + 0x178) = uStack_90;
    *(undefined4 *)(param_1 + 0x17c) = uStack_8c;
  }
  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
    puVar10 = *(undefined4 **)(param_1 + 0x180);
    lVar9 = (longlong)*(int *)(param_1 + 0x188) * 0x28;
    do {
      local_d8 = *param_4;
      local_d0 = param_4[1];
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      FUN_14179f016(puVar10,local_c4,param_3,&local_d8);
      uVar5 = FUN_1447addd0(local_c4,0x10);
      iVar6 = FUN_1475a0174(param_2,uVar5 ^ local_b4,local_c4);
      if (iVar6 != -1) {
        local_e0 = FUN_147552f3e(*param_4);
        uVar5 = FUN_1447addd0(local_c4,0x10);
        iVar6 = FUN_1475a0174(param_2,uVar5 ^ local_b4,local_c4);
        lVar8 = (longlong)iVar6 * 0x30 + *param_2;
        if (iVar6 == -1) {
          lVar8 = 0;
        }
        FUN_14757416c(lVar8 + 0x14,&local_b0,param_3,local_e0);
        *puVar10 = local_b0;
        puVar10[1] = uStack_ac;
        puVar10[2] = uStack_a8;
        puVar10[3] = uStack_a4;
        puVar10[4] = local_a0;
        puVar10[5] = uStack_9c;
      }
      puVar10 = puVar10 + 10;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
  }
  plVar4 = (longlong *)param_4[1];
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
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475befd2 FUN_1475befd2 body=179 status=ok
// SIG undefined FUN_1475befd2(void)

void FUN_1475befd2(longlong param_1,longlong param_2)

{
  longlong lVar1;
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
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  *(longlong *)(param_1 + 0x5f8) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bf08a FUN_1475bf08a body=154 status=ok
// SIG undefined FUN_1475bf08a(void)

void FUN_1475bf08a(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x5f0) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bf12a FUN_1475bf12a body=154 status=ok
// SIG undefined FUN_1475bf12a(void)

void FUN_1475bf12a(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x5f2) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bf1c6 FUN_1475bf1c6 body=191 status=ok
// SIG undefined FUN_1475bf1c6(void)

void FUN_1475bf1c6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
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
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  param_1[0x20] = lVar1;
  (**(code **)(*param_1 + 0x358))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bf286 FUN_1475bf286 body=62 status=ok
// SIG undefined FUN_1475bf286(void)

void FUN_1475bf286(longlong *param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x20] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001475bf2b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1);
  return;
}



// FUNCTION 1475bf2c4 FUN_1475bf2c4 body=152 status=ok
// SIG undefined FUN_1475bf2c4(void)

void FUN_1475bf2c4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x108) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bf362 FUN_1475bf362 body=154 status=ok
// SIG undefined FUN_1475bf362(void)

void FUN_1475bf362(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x5f1) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bf418 FUN_1475bf418 body=31 status=ok
// SIG undefined FUN_1475bf418(void)

void FUN_1475bf418(longlong *param_1)

{
  FUN_147574e9a();
                    /* WARNING: Could not recover jumptable at 0x0001475bf430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1);
  return;
}



// FUNCTION 1475bf438 FUN_1475bf438 body=861 status=ok
// SIG undefined FUN_1475bf438(void)

undefined8 FUN_1475bf438(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined **local_58;
  undefined4 *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  local_80 = 0x100000000;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
LAB_1475bf510:
    FUN_140f937a0(&local_a0,param_1 + 0x120);
    FUN_140f937a0(&local_a0,param_1 + 0x230);
  }
  else {
    lVar6 = FUN_145b371be();
    if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         != lVar6 + 0x30)) || (lVar6 = *(longlong *)(lVar4 + 0x20), lVar6 == 0)) goto LAB_1475bf510;
    lVar7 = FUN_14073751e();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_1475bf510;
    cVar5 = FUN_14756e08a(lVar6,lVar4);
    FUN_140f937a0(&local_a0,param_1 + 0x120);
    FUN_140f937a0(&local_a0,param_1 + 0x230);
    if (cVar5 != '\0') {
      FUN_14764a98e(&local_a0,param_1 + 0x4d0);
    }
  }
  FUN_1475bf796(param_1,*(undefined8 *)(param_1 + 0x100));
  local_68 = 0;
  local_58 = &PTR_LAB_14a4c70e0;
  local_78 = (longlong *)&LAB_14764ace8;
  local_50 = &local_a0;
  FUN_14764ab00(param_1,&local_78);
  local_68 = 0;
  local_58 = &PTR_LAB_14a4c7100;
  local_78 = (longlong *)&LAB_14764af22;
  local_50 = &local_a0;
  FUN_14764ad3c(param_1,&local_78);
  local_68 = 0;
  local_58 = &PTR_LAB_14a4c7120;
  local_78 = (longlong *)&LAB_14764b15c;
  local_50 = &local_a0;
  FUN_14764af76(param_1,&local_78);
  local_68 = 0;
  local_58 = &PTR_LAB_14a4c7140;
  local_78 = (longlong *)&LAB_14764b398;
  local_50 = &local_a0;
  FUN_14764b1b0(param_1,&local_78);
  local_68 = 0;
  local_58 = &PTR_LAB_14a4c7160;
  local_78 = (longlong *)&LAB_14764b5d6;
  local_50 = &local_a0;
  FUN_14764b3ec(param_1,&local_78);
  local_70 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_70[1] = (longlong)&DAT_100000001;
  *local_70 = (longlong)&PTR_FUN_14a492060;
  local_78 = local_70 + 2;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 2;
  if (local_88 == 0) {
    local_70[9] = local_90;
    *(undefined4 *)(local_70 + 7) = local_a0;
    *(undefined4 *)((longlong)local_70 + 0x3c) = uStack_9c;
    *(undefined4 *)(local_70 + 8) = uStack_98;
    *(undefined4 *)((longlong)local_70 + 0x44) = uStack_94;
  }
  local_70[10] = local_88;
  local_88 = 0;
  *(undefined4 *)(local_70 + 0xb) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_70 + 0x5c) = local_80._4_4_;
  local_80 = 0x100000000;
  FUN_140aec6f8(&local_78);
  plVar1 = local_70;
  if (local_70 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_78;
    plVar8 = *(longlong **)(param_1 + 0xe8);
    if (plVar8 == (longlong *)0x0) goto LAB_1475bf73a;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1475bf704:
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1475bf73a;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar8;
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_78;
    plVar8 = *(longlong **)(param_1 + 0xe8);
    if (local_70 != plVar8) {
      *(longlong **)(param_1 + 0xe8) = local_70;
      if (plVar8 == (longlong *)0x0) goto LAB_1475bf73a;
      goto LAB_1475bf704;
    }
    LOCK();
    plVar8 = local_70 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1475bf73a;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1475bf73a:
  plVar1 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_a0);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475bf796 FUN_1475bf796 body=3778 status=ok
// SIG undefined FUN_1475bf796(void)

void FUN_1475bf796(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  void *_Src;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_3a8 [40];
  undefined8 *local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  ulonglong *local_358;
  longlong local_350;
  void *local_348;
  int local_340;
  undefined4 local_33c;
  undefined8 *local_338;
  ulonglong uStack_330;
  undefined8 local_328;
  undefined1 *local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined **local_308;
  undefined8 local_300;
  undefined1 *puStack_2f8;
  uint local_2f0;
  int iStack_2ec;
  undefined4 uStack_2e8;
  undefined8 uStack_2e4;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined8 uStack_2cc;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined5 local_2a8;
  undefined3 uStack_2a3;
  undefined2 uStack_2a0;
  undefined3 uStack_29e;
  undefined3 uStack_29b;
  undefined5 local_298;
  undefined3 uStack_293;
  undefined5 uStack_290;
  undefined3 uStack_28b;
  ulonglong local_288 [3];
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined8 uStack_254;
  undefined8 uStack_24c;
  undefined8 uStack_244;
  undefined4 uStack_23c;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined8 uStack_21c;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined8 local_208;
  ulonglong local_200;
  undefined *local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  int local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined *local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  int local_180;
  undefined8 local_17c;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  undefined *local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  int local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  int local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x348))(param_2);
    local_338 = (undefined8 *)0x0;
    uStack_330 = 0;
    (**(code **)(*param_2 + 0x378))(param_2,&local_338);
    local_98 = 0;
    local_90 = 0;
    local_b8 = (undefined *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_378 = param_1 + 0x340;
    FUN_1475c065a();
    local_e8 = 0;
    local_e0 = 0;
    local_108 = (undefined *)0x0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_370 = param_1 + 0x480;
    FUN_1475c07be();
    local_138 = 0;
    local_130 = 0;
    local_158 = (undefined *)0x0;
    uStack_150 = 0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_368 = param_1 + 0x3e0;
    FUN_1475c0924();
    local_188 = 0;
    local_180 = 0;
    local_1a8 = (undefined *)0x0;
    uStack_1a0 = 0;
    local_17c = 0xffffffff00000080;
    local_174 = 0;
    local_168 = 0;
    local_160 = 0;
    local_360 = param_1 + 0x430;
    FUN_1475c0a86();
    local_1d8 = 0;
    local_1d0 = 0;
    local_1f8 = (undefined *)0x0;
    uStack_1f0 = 0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    param_1 = param_1 + 0x390;
    FUN_1475c0be8(param_1);
    if ((longlong)(int)uStack_330 != 0) {
      local_380 = &uStack_254;
      local_358 = local_288;
      lVar12 = (longlong)(int)uStack_330 * 0xa0;
      puVar7 = local_338;
      local_350 = param_1;
      do {
        switch(*(undefined1 *)(puVar7 + 0x10)) {
        case 1:
          local_300 = 0;
          puStack_2f8 = (undefined1 *)0x0;
          local_2f0 = 2;
          local_2dc = 0;
          iStack_2ec = 0;
          uStack_2e8 = 0;
          uStack_2e4 = 0;
          local_2d8 = 2;
          local_2c4 = 0;
          local_2d4 = 0;
          uStack_2cc = 0;
          local_2c0 = 2;
          local_308 = &PTR_FUN_14a46e9c0;
          local_2b8 = CONCAT62(local_2b8._2_6_,0x404);
          uStack_268 = 0;
          uStack_264 = 0;
          uStack_260 = 0;
          uStack_2b0 = 0;
          local_2a8 = 0;
          uStack_2a3 = 0;
          uStack_2a0 = 0;
          local_288[0] = 0;
          local_288[1] = 0;
          local_298 = 0;
          uStack_293 = 0;
          uStack_290 = 0;
          uStack_28b = 0;
          uStack_25c = 0x80;
          local_258 = 0xffffffff;
          uStack_230 = 0;
          uStack_22c = 0;
          local_228 = 0;
          *(undefined4 *)(local_380 + 2) = 0;
          *local_380 = 0;
          local_380[1] = 0;
          uStack_224 = 0x80;
          uStack_220 = 0xffffffff;
          uStack_21c = (ulonglong)uStack_21c._4_4_ << 0x20;
          local_210 = 0;
          local_208 = (ulonglong)local_208._4_4_ << 0x20;
          uVar3 = *puVar7;
          uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar9 = (uint)uVar3 & 0xffff;
          lVar5 = FUN_14764c3f4(local_368,
                                ((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4),puVar7,&local_308);
          uVar2 = *(undefined1 *)((longlong)puVar7 + 0xc);
          *(undefined1 *)(lVar5 + 0x69) = 1;
          *(undefined1 *)(lVar5 + 0x68) = uVar2;
          FUN_140bb7e7c(&local_308);
          ppuVar6 = &local_158;
          break;
        case 2:
          local_300 = 0;
          puStack_2f8 = (undefined1 *)0x0;
          local_2f0 = 2;
          local_2dc = 0;
          iStack_2ec = 0;
          uStack_2e8 = 0;
          uStack_2e4 = 0;
          local_2d8 = 2;
          local_2c4 = 0;
          local_2d4 = 0;
          uStack_2cc = 0;
          local_2c0 = 2;
          local_308 = &PTR_FUN_14a46eaf0;
          local_2b8 = CONCAT53(local_2b8._3_5_,0x404);
          uStack_268 = 0;
          uStack_264 = 0;
          uStack_260 = 0;
          uStack_2a0 = 0;
          uStack_29e = 0;
          uStack_2b0 = 0;
          local_2a8 = 0;
          uStack_2a3 = 0;
          local_288[0] = 0;
          local_288[1] = 0;
          local_298 = 0;
          uStack_293 = 0;
          uStack_290 = 0;
          uStack_28b = 0;
          uStack_25c = 0x80;
          local_258 = 0xffffffff;
          uStack_230 = 0;
          uStack_22c = 0;
          local_228 = 0;
          *(undefined4 *)(local_380 + 2) = 0;
          *local_380 = 0;
          local_380[1] = 0;
          uStack_224 = 0x80;
          uStack_220 = 0xffffffff;
          uStack_21c = (ulonglong)uStack_21c._4_4_ << 0x20;
          local_210 = 0;
          local_208 = (ulonglong)local_208._4_4_ << 0x20;
          uVar3 = *puVar7;
          uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar9 = (uint)uVar3 & 0xffff;
          lVar5 = FUN_14764ca64(local_360,
                                ((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4),puVar7,&local_308);
          uVar1 = *(undefined4 *)(puVar7 + 2);
          *(undefined1 *)(lVar5 + 0x6c) = 1;
          *(undefined4 *)(lVar5 + 0x68) = uVar1;
          FUN_14581ef76(&local_308);
          ppuVar6 = &local_1a8;
          break;
        case 3:
          local_300 = 0;
          puStack_2f8 = (undefined1 *)0x0;
          local_2f0 = 2;
          local_2dc = 0;
          iStack_2ec = 0;
          uStack_2e8 = 0;
          uStack_2e4 = 0;
          local_2d8 = 2;
          local_2c4 = 0;
          local_2d4 = 0;
          uStack_2cc = 0;
          local_2c0 = 2;
          local_308 = &PTR_FUN_14a46ea60;
          local_2b8 = CONCAT62(local_2b8._2_6_,0x404);
          uStack_268 = 0;
          uStack_264 = 0;
          uStack_260 = 0;
          uStack_290 = 0;
          uStack_2a0 = 0;
          uStack_29e = 0;
          uStack_29b = 0;
          local_298 = 0;
          uStack_293 = 0;
          uStack_2b0 = 0;
          local_2a8 = 0;
          uStack_2a3 = 0;
          *local_358 = 0;
          local_358[1] = 0;
          uStack_25c = 0x80;
          local_258 = 0xffffffff;
          uStack_230 = 0;
          uStack_22c = 0;
          local_228 = 0;
          *(undefined4 *)(local_380 + 2) = 0;
          *local_380 = 0;
          local_380[1] = 0;
          uStack_224 = 0x80;
          uStack_220 = 0xffffffff;
          uStack_21c = (ulonglong)uStack_21c._4_4_ << 0x20;
          local_210 = 0;
          local_208 = (ulonglong)local_208._4_4_ << 0x20;
          local_200 = 0x10000ea60;
          uVar3 = *puVar7;
          uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar9 = (uint)uVar3 & 0xffff;
          lVar5 = FUN_14764b774(local_378,
                                ((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4),puVar7,&local_308);
          uVar1 = *(undefined4 *)(puVar7 + 1);
          *(undefined1 *)(lVar5 + 0x7c) = 1;
          *(undefined4 *)(lVar5 + 0x78) = uVar1;
          FUN_1404dbc70(&local_308);
          ppuVar6 = &local_b8;
          break;
        case 4:
          local_300 = 0;
          puStack_2f8 = (undefined1 *)0x0;
          local_2f0 = 2;
          local_2dc = 0;
          iStack_2ec = 0;
          uStack_2e8 = 0;
          uStack_2e4 = 0;
          local_2d8 = 2;
          local_2c4 = 0;
          local_2d4 = 0;
          uStack_2cc = 0;
          local_2c0 = 2;
          local_308 = &PTR_FUN_14a4ab3d0;
          uStack_260 = 0;
          uStack_25c = 0;
          local_258 = 0;
          local_298 = 0;
          uStack_293 = 0;
          uStack_290 = 0;
          uStack_28b = 0;
          local_2a8 = 0;
          uStack_2a3 = 0;
          uStack_2a0 = 0;
          uStack_29e = 0;
          uStack_29b = 0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_288[0] = local_288[0] & 0xffffffffffffff00;
          local_288[1] = 0;
          local_288[2] = 0;
          uStack_254 = -0xffffff80;
          local_228 = 0;
          uStack_224 = 0;
          uStack_220 = 0;
          uStack_23c = 0;
          uStack_24c = 0;
          uStack_244 = 0;
          uStack_21c = -0xffffff80;
          uStack_214 = 0;
          local_208 = 0;
          local_200 = local_200 & 0xffffffff00000000;
          uVar3 = *puVar7;
          uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar9 = (uint)uVar3 & 0xffff;
          lVar5 = FUN_14764d11e(param_1,((uint)uVar3 << 0x10 | uVar9) +
                                        (int)((ulonglong)uVar3 >> 0x20) +
                                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4),puVar7,
                                &local_308);
          local_348 = (void *)0x0;
          local_340 = *(int *)(puVar7 + 5);
          lVar8 = (longlong)local_340;
          _Src = (void *)puVar7[4];
          if (lVar8 == 0) {
            local_33c = 0;
            iVar11 = 0;
          }
          else {
            FUN_1446dd670(&local_348,local_340,0);
            memcpy(local_348,_Src,lVar8 * 2);
            iVar11 = local_340;
          }
          *(undefined1 *)(lVar5 + 0x80) = 1;
          iVar10 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar10 = 0;
          }
          FUN_1402980a2(lVar5 + 0x70,local_348,iVar10);
          if (local_348 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_14156b236(&local_308);
          ppuVar6 = &local_1f8;
          param_1 = local_350;
          break;
        default:
          goto switchD_1475c0065_caseD_5;
        case 0xc:
          local_358[0xc] = 0;
          local_358[0xd] = 0;
          local_358[10] = 0;
          local_358[0xb] = 0;
          local_358[8] = 0;
          local_358[9] = 0;
          local_358[6] = 0;
          local_358[7] = 0;
          local_358[4] = 0;
          local_358[5] = 0;
          local_358[2] = 0;
          local_358[3] = 0;
          *local_358 = 0;
          local_358[1] = 0;
          local_358[0xe] = 0;
          local_300 = 0;
          puStack_2f8 = (undefined1 *)0x0;
          local_2f0 = 2;
          local_2dc = 0;
          iStack_2ec = 0;
          uStack_2e8 = 0;
          uStack_2e4 = 0;
          local_2d8 = 2;
          local_2c4 = 0;
          local_2d4 = 0;
          uStack_2cc = 0;
          local_2c0 = 2;
          local_308 = &PTR_FUN_14a46bc60;
          local_298 = 0;
          uStack_293 = 0;
          uStack_290 = 0;
          uStack_28b = 0;
          local_2a8 = 0;
          uStack_2a3 = 0;
          uStack_2a0 = 0;
          uStack_29e = 0;
          uStack_29b = 0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          uStack_26c = 0x80;
          uStack_268 = 0xffffffff;
          uStack_254 = (ulonglong)uStack_254._4_4_ << 0x20;
          uStack_264 = 0;
          uStack_260 = 0;
          uStack_25c = 0;
          local_258 = 0;
          uStack_234 = 0x80;
          uStack_230 = 0xffffffff;
          uVar3 = *puVar7;
          uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar9 = (uint)uVar3 & 0xffff;
          FUN_14764bd56(local_370,
                        ((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4),puVar7,&local_308);
          FUN_14753af42(&local_308);
          ppuVar6 = &local_108;
        }
        FUN_144a8b5fe(ppuVar6,*puVar7);
switchD_1475c0065_caseD_5:
        puVar7 = puVar7 + 0x14;
        lVar12 = lVar12 + -0xa0;
      } while (lVar12 != 0);
    }
    local_328 = 0x100000000;
    local_318 = 0xffffffff;
    local_310 = 0;
    iVar11 = 0;
    local_320 = local_a8;
    if (local_90 != 0) {
      FUN_1449c0562(&local_328);
      iVar11 = local_90;
    }
    lVar12 = local_378;
    local_2f0 = (uint)local_318;
    iStack_2ec = (int)((ulonglong)local_318 >> 0x20);
    uStack_2e8 = local_310;
    uStack_2e4 = CONCAT44(uStack_2e4._4_4_,local_30c);
    local_300 = local_328;
    puStack_2f8 = local_320;
    local_308 = &local_b8;
    if ((iStack_2ec != iVar11) || (local_320 != local_a8)) {
      do {
        FUN_14764d7f0(lVar12,*(undefined8 *)(*local_308 + (longlong)iStack_2ec * 0x10));
        local_2f0 = local_2f0 & ~local_300._4_4_;
        FUN_1449c0562(&local_300);
      } while (local_308 != &local_b8 || (puStack_2f8 != local_a8 || iStack_2ec != iVar11));
    }
    lVar12 = local_370;
    local_328 = 0x100000000;
    local_318 = 0xffffffff;
    local_310 = 0;
    iVar11 = 0;
    local_320 = local_f8;
    if (local_e0 != 0) {
      FUN_1449c0562(&local_328);
      iVar11 = local_e0;
    }
    lVar5 = local_368;
    local_2f0 = (uint)local_318;
    iStack_2ec = (int)((ulonglong)local_318 >> 0x20);
    uStack_2e8 = local_310;
    uStack_2e4 = CONCAT44(uStack_2e4._4_4_,local_30c);
    local_300 = local_328;
    puStack_2f8 = local_320;
    local_308 = &local_108;
    if ((iStack_2ec != iVar11) || (local_320 != local_f8)) {
      do {
        FUN_14764d908(lVar12,*(undefined8 *)(*local_308 + (longlong)iStack_2ec * 0x10));
        local_2f0 = local_2f0 & ~local_300._4_4_;
        FUN_1449c0562(&local_300);
      } while (local_308 != &local_108 || (puStack_2f8 != local_f8 || iStack_2ec != iVar11));
    }
    local_328 = 0x100000000;
    local_318 = 0xffffffff;
    local_310 = 0;
    iVar11 = 0;
    local_320 = local_148;
    if (local_130 != 0) {
      FUN_1449c0562(&local_328);
      iVar11 = local_130;
    }
    local_2f0 = (uint)local_318;
    iStack_2ec = (int)((ulonglong)local_318 >> 0x20);
    uStack_2e8 = local_310;
    uStack_2e4 = CONCAT44(uStack_2e4._4_4_,local_30c);
    local_300 = local_328;
    puStack_2f8 = local_320;
    local_308 = &local_158;
    if ((iStack_2ec != iVar11) || (local_320 != local_148)) {
      do {
        FUN_14764da28(lVar5,*(undefined8 *)(*local_308 + (longlong)iStack_2ec * 0x10));
        local_2f0 = local_2f0 & ~local_300._4_4_;
        FUN_1449c0562(&local_300);
      } while (local_308 != &local_158 || (puStack_2f8 != local_148 || iStack_2ec != iVar11));
    }
    local_328 = 0x100000000;
    local_318 = 0xffffffff;
    local_310 = 0;
    iVar11 = 0;
    local_320 = local_198;
    if (local_180 != 0) {
      FUN_1449c0562(&local_328);
      iVar11 = local_180;
    }
    lVar12 = local_360;
    local_2f0 = (uint)local_318;
    iStack_2ec = (int)((ulonglong)local_318 >> 0x20);
    uStack_2e8 = local_310;
    uStack_2e4 = CONCAT44(uStack_2e4._4_4_,local_30c);
    local_300 = local_328;
    puStack_2f8 = local_320;
    local_308 = &local_1a8;
    if ((iStack_2ec != iVar11) || (local_320 != local_198)) {
      do {
        FUN_14764db3c(lVar12,*(undefined8 *)(*local_308 + (longlong)iStack_2ec * 0x10));
        local_2f0 = local_2f0 & ~local_300._4_4_;
        FUN_1449c0562(&local_300);
      } while (local_308 != &local_1a8 || (puStack_2f8 != local_198 || iStack_2ec != iVar11));
    }
    local_328 = 0x100000000;
    local_318 = 0xffffffff;
    local_310 = 0;
    iVar11 = 0;
    local_320 = local_1e8;
    if (local_1d0 != 0) {
      FUN_1449c0562(&local_328);
      iVar11 = local_1d0;
    }
    local_2f0 = (uint)local_318;
    iStack_2ec = (int)((ulonglong)local_318 >> 0x20);
    uStack_2e8 = local_310;
    uStack_2e4 = CONCAT44(uStack_2e4._4_4_,local_30c);
    local_300 = local_328;
    puStack_2f8 = local_320;
    local_308 = &local_1f8;
    if ((iStack_2ec != iVar11) || (local_320 != local_1e8)) {
      do {
        FUN_14764dc50(param_1,*(undefined8 *)(*local_308 + (longlong)iStack_2ec * 0x10));
        local_2f0 = local_2f0 & ~local_300._4_4_;
        FUN_1449c0562(&local_300);
      } while (local_308 != &local_1f8 || (puStack_2f8 != local_1e8 || iStack_2ec != iVar11));
    }
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(&local_1f8);
    local_160 = 0;
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(&local_1a8);
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(&local_158);
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(&local_108);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(&local_b8);
    FUN_145aa5488(local_338,uStack_330 & 0xffffffff);
    if (local_338 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c065a FUN_1475c065a body=353 status=ok
// SIG undefined FUN_1475c065a(void)

void FUN_1475c065a(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449ad616(param_2);
  uVar3 = (longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34);
  uVar2 = (uint)uVar3;
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar3);
    }
    FUN_144732142(param_2,uVar3 & 0xffffffff);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar1)) {
      *(int *)(param_2 + 0x48) = iVar1;
      FUN_144869b4a(param_2);
    }
  }
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_144a13f80(param_2,&local_40,(longlong)iStack_4c * 0x120 + *local_68,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c07be FUN_1475c07be body=356 status=ok
// SIG undefined FUN_1475c07be(void)

void FUN_1475c07be(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449ad616(param_2);
  uVar3 = (longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34);
  uVar2 = (uint)uVar3;
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar3);
    }
    FUN_144732142(param_2,uVar3 & 0xffffffff);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar1)) {
      *(int *)(param_2 + 0x48) = iVar1;
      FUN_144869b4a(param_2);
    }
  }
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_144a13f80(param_2,&local_40,(longlong)iStack_4c * 0x108 + *local_68,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c0924 FUN_1475c0924 body=352 status=ok
// SIG undefined FUN_1475c0924(void)

void FUN_1475c0924(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449ad616(param_2);
  uVar3 = (longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34);
  uVar2 = (uint)uVar3;
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar3);
    }
    FUN_144732142(param_2,uVar3 & 0xffffffff);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar1)) {
      *(int *)(param_2 + 0x48) = iVar1;
      FUN_144869b4a(param_2);
    }
  }
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_144a13f80(param_2,&local_40,(longlong)iStack_4c * 0x118 + *local_68,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c0a86 FUN_1475c0a86 body=352 status=ok
// SIG undefined FUN_1475c0a86(void)

void FUN_1475c0a86(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449ad616(param_2);
  uVar3 = (longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34);
  uVar2 = (uint)uVar3;
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar3);
    }
    FUN_144732142(param_2,uVar3 & 0xffffffff);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar1)) {
      *(int *)(param_2 + 0x48) = iVar1;
      FUN_144869b4a(param_2);
    }
  }
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_144a13f80(param_2,&local_40,(longlong)iStack_4c * 0x118 + *local_68,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c0be8 FUN_1475c0be8 body=353 status=ok
// SIG undefined FUN_1475c0be8(void)

void FUN_1475c0be8(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449ad616(param_2);
  uVar3 = (longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34);
  uVar2 = (uint)uVar3;
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar3);
    }
    FUN_144732142(param_2,uVar3 & 0xffffffff);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar1)) {
      *(int *)(param_2 + 0x48) = iVar1;
      FUN_144869b4a(param_2);
    }
  }
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_144a13f80(param_2,&local_40,(longlong)iStack_4c * 0x120 + *local_68,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c0d64 FUN_1475c0d64 body=92 status=ok
// SIG undefined FUN_1475c0d64(void)

void FUN_1475c0d64(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined4 local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < (longlong)*(int *)(param_1 + 0x108)) {
    FUN_144a808d5(local_20,(longlong)*(int *)(param_1 + 0x108),param_2,param_3);
    *(undefined4 *)(param_1 + 0x108) = local_20[0];
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c0dc2 FUN_1475c0dc2 body=658 status=ok
// SIG undefined FUN_1475c0dc2(void)

void FUN_1475c0dc2(longlong *param_1)

{
  double dVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  dVar1 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140836bcc();
  (**(code **)(*param_1 + 0x358))(param_1);
  fVar6 = *(float *)((longlong)param_1 + 0x114);
  if ((fVar6 != -3.4028235e+38) || (NAN(fVar6))) {
    *(undefined1 *)((longlong)param_1 + 0x2ac) = 1;
    *(float *)(param_1 + 0x55) = fVar6;
    *(undefined4 *)((longlong)param_1 + 0x114) = 0xff7fffff;
  }
  fVar6 = *(float *)(param_1 + 0x23);
  if ((fVar6 != -3.4028235e+38) || (NAN(fVar6))) {
    *(undefined1 *)((longlong)param_1 + 0x19c) = 1;
    *(float *)(param_1 + 0x33) = fVar6;
    *(undefined4 *)(param_1 + 0x23) = 0xff7fffff;
  }
  fVar6 = *(float *)(param_1 + 0x22);
  if ((fVar6 != -3.4028235e+38) || (NAN(fVar6))) {
    if (((fVar6 == 0.0) && (!NAN(fVar6))) || ((char)param_1[0x13] == '\x02')) {
      bVar2 = false;
    }
    else {
      uVar3 = FUN_14073751e();
      lVar4 = FUN_144a78ede(param_1,uVar3);
      lVar4 = *(longlong *)(lVar4 + 0x118);
      dVar1 = ((double)((lVar4 >> 0x20) *
                       ((longlong)
                        (((ulonglong)((char)param_1[0x13] != '\x01') << 0x20) + param_1[0x13]) >>
                       0x20)) +
              (double)((ulonglong)(double)(int)((ulonglong)lVar4 >> 0x20) & 0x8000000000000000)) /
              (double)(int)lVar4 - (double)*(float *)(param_1 + 0x22);
      bVar2 = true;
    }
    *(undefined4 *)(param_1 + 0x22) = 0xff7fffff;
    fVar6 = *(float *)((longlong)param_1 + 0x10c);
    if ((fVar6 != -3.4028235e+38) || (NAN(fVar6))) goto LAB_1475c0e9b;
    FUN_145cba7c3(local_38);
    if (!bVar2) goto LAB_1475c0f78;
  }
  else {
    fVar6 = *(float *)((longlong)param_1 + 0x10c);
    if ((fVar6 == -3.4028235e+38) && (!NAN(fVar6))) {
      FUN_145cba7c3(local_38);
      goto LAB_1475c0f78;
    }
LAB_1475c0e9b:
    dVar1 = (double)fVar6;
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0xff7fffff;
    FUN_145cba7c3(local_38);
  }
  uVar3 = FUN_14073751e();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  uVar3 = *(undefined8 *)(lVar4 + 0x120);
  uVar5 = FUN_14073751e();
  lVar4 = FUN_144a78ede(param_1,uVar5);
  dVar1 = ((double)(int)uVar3 / (double)(int)((ulonglong)uVar3 >> 0x20)) * dVar1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar1;
  auVar8 = roundpd(auVar8,auVar8,1);
  dVar7 = auVar8._0_8_;
  dVar1 = dVar1 - dVar7;
  if (2147483647.0 <= dVar7) {
    dVar7 = 2147483647.0;
  }
  if (dVar7 <= -2147483648.0) {
    dVar7 = -2147483648.0;
  }
  fVar6 = (float)dVar1;
  if (0.99999994 <= fVar6) {
    fVar6 = 0.99999994;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar6 = fVar6 + 0.5 + -0.5;
  if (0.99999994 <= fVar6) {
    fVar6 = 0.99999994;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  FUN_144a808d5(local_40,CONCAT44(fVar6,(int)dVar7),uVar3,*(undefined8 *)(lVar4 + 0x118));
  *(undefined4 *)(param_1 + 0x21) = local_40[0];
LAB_1475c0f78:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475c1056 FUN_1475c1056 body=543 status=ok
// SIG undefined FUN_1475c1056(void)

undefined1 * FUN_1475c1056(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  float fVar15;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    iVar4 = 0;
    uVar5 = 2;
    uVar6 = 2;
    iVar3 = 0;
  }
  else {
    fVar7 = (float)FUN_147571136();
    uVar1 = FUN_14073751e();
    lVar2 = FUN_144a78ede(param_1,uVar1);
    dVar8 = (double)(int)*(undefined8 *)(lVar2 + 0x118);
    dVar11 = (double)(int)((ulonglong)*(undefined8 *)(lVar2 + 0x118) >> 0x20);
    dVar9 = dVar8 / dVar11;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar9;
    auVar14 = roundpd(auVar14,auVar14,1);
    dVar13 = auVar14._0_8_;
    dVar9 = dVar9 - dVar13;
    if (2147483647.0 <= dVar13) {
      dVar13 = 2147483647.0;
    }
    if (dVar13 <= -2147483648.0) {
      dVar13 = -2147483648.0;
    }
    iVar3 = (int)dVar9;
    fVar15 = (float)dVar9 - (float)iVar3;
    iVar3 = (int)dVar13 + iVar3;
    fVar12 = fVar15;
    if (0.99999994 <= fVar15) {
      fVar12 = 0.99999994;
    }
    fVar12 = (float)(~-(uint)(0.0 < fVar15) & (uint)fVar15 | (uint)fVar12 & -(uint)(0.0 < fVar15)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (((fVar7 != 10000.0) || (NAN(fVar7))) && (0.0 < fVar7)) {
      dVar11 = ((double)fVar7 * dVar8) / dVar11;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar11;
      auVar14 = roundpd(auVar10,auVar10,1);
      dVar9 = auVar14._0_8_;
      dVar11 = dVar11 - dVar9;
      if (2147483647.0 <= dVar9) {
        dVar9 = 2147483647.0;
      }
      if (dVar9 <= -2147483648.0) {
        dVar9 = -2147483648.0;
      }
      iVar3 = (int)dVar11;
      fVar12 = (float)dVar11 - (float)iVar3;
      fVar7 = fVar12;
      if (0.99999994 <= fVar12) {
        fVar7 = 0.99999994;
      }
      fVar7 = (float)(~-(uint)(0.0 < fVar12) & (uint)fVar12 | (uint)fVar7 & -(uint)(0.0 < fVar12)) +
              0.5 + -0.5;
      if (0.99999994 <= fVar7) {
        fVar7 = 0.99999994;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      auVar14 = roundps(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),1);
      iVar4 = (iVar3 - *(int *)(param_1 + 0x108)) + (int)dVar9 + (int)auVar14._0_4_;
      fVar7 = (fVar7 - auVar14._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar7) {
        fVar7 = 0.99999994;
      }
      fVar15 = fVar7;
      if (fVar7 <= 0.0) {
        fVar15 = 0.0;
      }
      iVar3 = 1;
      fVar12 = 0.0;
      if (0.0 < fVar7) {
        iVar3 = iVar4;
        fVar12 = fVar15;
      }
      if (iVar4 != 1) {
        iVar3 = 1;
        fVar12 = 0.0;
      }
      if (1 < iVar4) {
        fVar12 = fVar15;
        iVar3 = iVar4;
      }
    }
    iVar4 = (uint)((char)*(undefined8 *)(param_1 + 0x98) != '\x01') +
            (int)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    iVar3 = iVar3 + iVar4 + (int)(fVar12 + 0.5);
    uVar5 = 1;
    uVar6 = 0;
  }
  *param_2 = uVar5;
  *(int *)(param_2 + 4) = iVar4;
  param_2[8] = uVar6;
  *(int *)(param_2 + 0xc) = iVar3;
  param_2[0x10] = 1;
  return param_2;
}



// FUNCTION 1475c1276 FUN_1475c1276 body=176 status=ok
// SIG undefined FUN_1475c1276(void)

void FUN_1475c1276(longlong param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144757f48(param_1,8);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 != '\0') {
    if ((char)param_3 != '\0') {
      uVar3 = *(ulonglong *)(param_1 + 0x98) & 0xff;
      iVar2 = 0;
      if (uVar3 != 2) {
        iVar2 = (*(int *)(param_1 + 0x108) -
                ((uint)((int)uVar3 != 1) + (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20))) +
                *param_2;
      }
      *(int *)(param_1 + 0x108) = iVar2;
    }
    local_38 = *param_2;
    iStack_34 = param_2[1];
    iStack_30 = param_2[2];
    iStack_2c = param_2[3];
    FUN_147575be8(param_1,&local_38,param_3,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c1328 FUN_1475c1328 body=185 status=ok
// SIG undefined FUN_1475c1328(void)

longlong FUN_1475c1328(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x108);
  uVar4 = *(ulonglong *)(param_1 + 0x98) & 0xff;
  iVar6 = 0;
  if (uVar4 != 2) {
    iVar6 = ((iVar1 - (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20)) - (uint)((int)uVar4 != 1)) +
            *param_2;
  }
  local_38 = *param_2;
  iStack_34 = param_2[1];
  iStack_30 = param_2[2];
  iStack_2c = param_2[3];
  lVar2 = FUN_1475759e6(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_1459908d6();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (lVar5 = lVar2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
       != lVar3 + 0x30)) {
      lVar5 = 0;
    }
    *(int *)(lVar5 + 0x108) = iVar6;
  }
  *(int *)(param_1 + 0x108) = iVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c13e2 FUN_1475c13e2 body=509 status=ok
// SIG undefined FUN_1475c13e2(void)

longlong * FUN_1475c13e2(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_138 [40];
  undefined1 local_110 [192];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)(param_3 + 0x18);
  lVar4 = *(longlong *)(param_3 + 0x20);
  if (lVar4 == 0) {
    if (lVar2 != 0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0x1800000000;
      if (param_2 != (longlong *)0x0) {
        FUN_140a44582(param_2,local_110,0);
        puVar5 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar5 = local_50;
        }
        if ((longlong)(int)local_48 == 0) goto LAB_1475c14ac;
        lVar4 = 0;
        do {
          plVar3 = *(longlong **)(puVar5 + lVar4);
          lVar6 = plVar3[3];
          if (lVar6 == lVar2) break;
          bVar8 = (longlong)(int)local_48 * 8 + -8 != lVar4;
          lVar4 = lVar4 + 8;
        } while (bVar8);
        if (local_50 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (lVar6 == lVar2) goto LAB_1475c14da;
      }
    }
LAB_1475c14b6:
    lVar2 = (**(code **)(*param_2 + 0x3a8))(param_2);
    if (lVar2 != 0) {
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x3a8))(param_2);
      goto LAB_1475c14da;
    }
  }
  else {
    if (lVar2 != 0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0x1800000000;
      if (param_2 != (longlong *)0x0) {
        FUN_140a44582(param_2,local_110,0);
        lVar6 = (longlong)(int)local_48;
        puVar5 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar5 = local_50;
        }
        if (lVar6 != 0) {
          lVar7 = 0;
          do {
            plVar3 = *(longlong **)(puVar5 + lVar7);
            if ((plVar3[3] == lVar2) &&
               (cVar1 = (**(code **)(*plVar3 + 0x4c8))(plVar3,lVar4), cVar1 != '\0')) {
              if (local_50 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1475c14da;
            }
            lVar7 = lVar7 + 8;
          } while (lVar6 * 8 != lVar7);
        }
LAB_1475c14ac:
        if (local_50 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1475c14b6;
    }
    cVar1 = (**(code **)(*(longlong *)param_2[0x39] + 0x4c8))((longlong *)param_2[0x39],lVar4);
    if (cVar1 == '\0') goto LAB_1475c14b6;
  }
  plVar3 = (longlong *)param_2[0x39];
LAB_1475c14da:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 1475c15e0 FUN_1475c15e0 body=705 status=ok
// SIG undefined FUN_1475c15e0(void)

undefined8 FUN_1475c15e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + -0xf8;
  uVar3 = FUN_1475545d8(param_4,param_3);
  uVar10 = 0;
  uVar4 = FUN_14755452a(param_4,lVar1,0);
  FUN_147554828(param_4,param_2,uVar4,uVar3);
  uVar7 = *(int *)(param_1 + 0x2a0) - *(int *)(param_1 + 0x2cc);
  uVar5 = (*(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x27c)) % 9;
  if ((int)uVar7 <= (int)uVar5) {
    uVar7 = uVar5;
  }
  uVar5 = *(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x31c);
  if ((int)uVar5 <= (int)uVar7) {
    uVar5 = uVar7;
  }
  uVar7 = *(int *)(param_1 + 0x340) - *(int *)(param_1 + 0x36c);
  if ((int)uVar7 <= (int)uVar5) {
    uVar7 = uVar5;
  }
  if (0 < (int)uVar7) {
    do {
      uVar4 = FUN_14755452a(param_4,lVar1,uVar10 | 0x1000000);
      FUN_147554828(param_4,param_2,uVar4,uVar3);
      uVar10 = uVar10 + 1;
    } while (uVar7 != uVar10);
  }
  local_88 = (longlong *)(param_1 + 0x388);
  local_58 = 0;
  uStack_50 = 0;
  FUN_1475c18a2(local_88,&local_58);
  FUN_14063460b(local_58);
  uVar6 = uStack_50 & 0xffffffff;
  if (0 < (int)uStack_50) {
    local_80 = param_1 + 0x3c0;
    lVar12 = 0;
    local_78 = param_1;
    do {
      if (*(int *)(param_1 + 0x390) != *(int *)(param_1 + 0x3bc)) {
        lVar11 = *(longlong *)(local_58 + lVar12 * 8);
        uVar7 = (uint)((ulonglong)lVar11 >> 0x10);
        uVar5 = (uint)lVar11 & 0xffff;
        lVar9 = *(longlong *)(param_1 + 0x3c8);
        if (*(longlong *)(param_1 + 0x3c8) == 0) {
          lVar9 = local_80;
        }
        iVar8 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(param_1 + 0x3d0) - 1U &
                                 (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar5) +
                                 (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar5 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            lVar9 = *local_88 + (longlong)iVar8 * 0x108;
            if (*(longlong *)(*local_88 + (longlong)iVar8 * 0x108) == lVar11) goto LAB_1475c173e;
            iVar8 = *(int *)(lVar9 + 0x100);
          } while (iVar8 != -1);
        }
      }
      lVar9 = 0;
LAB_1475c173e:
      lVar11 = (longlong)*(int *)(lVar9 + 0x60);
      if (0 < lVar11) {
        puVar13 = *(undefined4 **)(lVar9 + 0x58);
        local_70 = lVar12;
        do {
          cVar2 = FUN_1400a246c(param_2);
          if (cVar2 != '\0') {
            local_68[0] = 1;
            local_64 = *puVar13;
            local_60 = 1;
            local_5c = local_64;
            uVar4 = FUN_14755452a(param_4,lVar1,(uint)lVar12 | 0x2000000);
            FUN_147554a56(param_4,local_68,uVar4,uVar3);
          }
          puVar13 = puVar13 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        uVar6 = uStack_50 & 0xffffffff;
        lVar12 = local_70;
        param_1 = local_78;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uVar6);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1475c18a2 FUN_1475c18a2 body=766 status=ok
// SIG undefined FUN_1475c18a2(void)

void FUN_1475c18a2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x108);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_1475c1a51;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar1 + lVar3 * 0x108);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x108 + *local_e0,0);
LAB_1475c1a51:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c1ba2 FUN_1475c1ba2 body=2945 status=ok
// SIG undefined FUN_1475c1ba2(void)

void FUN_1475c1ba2(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  int iVar15;
  undefined4 *puVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  byte bVar20;
  bool bVar21;
  undefined1 auStack_1d8 [40];
  uint local_1b0;
  int local_1ac;
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong *local_188;
  uint local_17c;
  longlong *local_178;
  longlong *local_170;
  longlong local_168;
  ulonglong uStack_160;
  undefined **local_158;
  uint local_150;
  int local_14c;
  undefined8 local_148;
  int local_140;
  undefined1 local_13c;
  uint local_138;
  undefined2 local_130;
  longlong local_128;
  undefined1 local_120;
  undefined2 local_118;
  undefined4 local_114;
  longlong local_110;
  undefined1 local_108;
  undefined2 local_100;
  longlong local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_b4;
  undefined1 local_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_1a0 = FUN_14009d2a0();
    lVar8 = FUN_14038fb82();
    piVar5 = *(int **)(param_3 + 8);
    if (piVar5 == (int *)0x0) {
      iVar11 = 0;
      iVar15 = 0;
      uVar19 = 0;
      iVar9 = 0;
    }
    else {
      iVar11 = *piVar5;
      iVar15 = piVar5[1];
      uVar19 = piVar5[2];
      iVar9 = piVar5[3];
    }
    lVar10 = param_1 + -0xf8;
    uVar13 = *(uint *)(param_3 + 0x10);
    uVar12 = uVar13 & 0xffffff;
    if (uVar13 >> 0x18 == 2) {
      local_168 = 0;
      uStack_160 = 0;
      local_1ac = iVar9;
      local_1a8 = lVar8;
      FUN_1475c18a2(param_1 + 0x388,&local_168);
      FUN_14063460b(local_168,uStack_160 & 0xffffffff);
      local_198 = (longlong *)CONCAT44(local_198._4_4_,iVar15);
      local_190 = CONCAT44(local_190._4_4_,iVar11);
      bVar21 = local_1ac == 0;
      uVar4 = *(undefined2 *)(local_1a0 + 100);
      uVar2 = *(undefined2 *)(local_1a0 + 0x126);
      local_1b0 = uVar19;
      if (lVar10 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar10);
      }
      uVar3 = *(undefined2 *)(local_1a8 + 0x100);
      if ((~DAT_14c950c29 & 1) == 0 && lVar10 != 0) {
        FUN_1456cec3c(lVar10);
      }
      uStack_90 = CONCAT35(uStack_90._5_3_,0x100000000);
      uStack_a0 = CONCAT44((int)local_190,
                           (uint)CONCAT12(((iVar15 != 0 || iVar11 != 0) || uVar19 != 0) || !bVar21,
                                          uVar4));
      local_98 = CONCAT44(local_1b0,(int)local_198);
      uStack_90 = CONCAT44(uStack_90._4_4_,local_1ac);
      local_88 = CONCAT44(local_88._4_4_,
                          (uint)CONCAT12(((iVar15 == 0 && iVar11 == 0) && uVar19 == 0) && bVar21,
                                         uVar2));
      uStack_80 = CONCAT62(uStack_80._2_6_,uVar3);
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      local_78 = lVar10;
      if ((lVar10 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(lVar10);
      }
      local_68 = local_68 & 0xffffffffffffff00;
      local_a8 = &PTR_FUN_14a4c7180;
      FUN_1475c3826(&local_a8,&local_158,*(undefined2 *)(local_1a8 + 0x104),
                    (ulonglong)(uVar12 * 8) + local_168);
      FUN_1475c3724(param_4,&local_158);
    }
    else {
      if (uVar13 >> 0x18 != 1) {
        if (uVar13 >> 0x18 == 0) {
          bVar20 = ((iVar15 == 0 && iVar11 == 0) && uVar19 == 0) && iVar9 == 0;
          bVar17 = ((iVar15 != 0 || iVar11 != 0) || uVar19 != 0) || iVar9 != 0;
          local_190 = CONCAT44(local_190._4_4_,(uint)*(ushort *)(local_1a0 + 100));
          local_1b0 = (uint)*(ushort *)(local_1a0 + 0x126);
          local_1ac = iVar9;
          if (lVar10 != 0 && DAT_14c950c29 == 1) {
            local_198 = (longlong *)CONCAT71(local_198._1_7_,bVar20);
            local_188 = (longlong *)CONCAT71(local_188._1_7_,bVar17);
            local_1a8 = lVar8;
            FUN_1456cec3c(lVar10);
            lVar8 = local_1a8;
            bVar17 = (byte)local_188;
            bVar20 = (byte)local_198;
          }
          local_1a8 = CONCAT62(local_1a8._2_6_,*(undefined2 *)(lVar8 + 0x100));
          if ((~DAT_14c950c29 & 1) == 0 && lVar10 != 0) {
            FUN_1456cec3c(lVar10);
          }
          if ((~DAT_14c950c29 & 1) == 0 && lVar10 != 0) {
            FUN_1456cec3c(lVar10);
          }
          uVar12 = (uint)bVar17 * 0x10000 + (int)local_190;
          uVar13 = (uint)bVar20 * 0x10000 + local_1b0;
          local_118 = *(undefined2 *)(local_1a0 + 0x7e);
          if ((lVar10 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            local_1b0 = CONCAT22(local_1b0._2_2_,local_118);
            FUN_1456cec3c(lVar10);
            local_118 = (undefined2)local_1b0;
          }
          uVar4 = *(undefined2 *)(local_1a0 + 0x80);
          local_13c = 1;
          local_148 = CONCAT44(uVar19,iVar15);
          local_140 = local_1ac;
          local_130 = (undefined2)local_1a8;
          local_120 = 1;
          local_150 = uVar12;
          local_14c = iVar11;
          local_138 = uVar13;
          local_128 = lVar10;
          if ((lVar10 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(lVar10);
          }
          local_108 = 1;
          local_f0 = 1;
          local_e8 = 0;
          local_158 = &PTR_FUN_14a4c71a0;
          local_110 = param_1 + 0x28;
          local_100 = uVar4;
          local_f8 = param_1 + 0x138;
          FUN_1475c2724(param_4);
        }
        goto LAB_1475c1c30;
      }
      local_168 = 0;
      uStack_160 = 0;
      local_198 = (longlong *)(param_1 + 0x248);
      local_58 = 0;
      lStack_50 = 0;
      local_68 = 0;
      lStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (undefined **)0x0;
      uStack_a0 = 0;
      iVar18 = *(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x27c);
      local_1b0 = uVar19;
      local_1ac = iVar9;
      local_190 = param_4;
      if ((int)(uVar12 * 9) < iVar18) {
        FUN_1475c2826(local_198,&local_168);
        uVar19 = iVar18 + uVar12 * -9;
        if (uVar19 != 0 && (int)(uVar12 * 9) <= iVar18) {
          uVar13 = 9;
          if (uVar19 < 9) {
            uVar13 = uVar19;
          }
          memcpy(&local_a8,(void *)((ulonglong)(uVar12 * 0x48) + local_168),(ulonglong)(uVar13 << 3)
                );
        }
      }
      iVar9 = local_1ac;
      local_178 = (longlong *)(param_1 + 0x298);
      if ((int)uVar12 < *(int *)(param_1 + 0x2a0) - *(int *)(param_1 + 0x2cc)) {
        bVar21 = (longlong)uStack_160 < 0;
        uStack_160 = uStack_160 & 0xffffffff00000000;
        if (bVar21) {
          FUN_1402191ca(&local_168,0);
        }
        FUN_1475c2b20(local_178,&local_168);
        lStack_60 = *(longlong *)(local_168 + (ulonglong)uVar12 * 8);
      }
      local_170 = (longlong *)(param_1 + 0x2e8);
      if ((int)uVar12 < *(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x31c)) {
        bVar21 = (longlong)uStack_160 < 0;
        uStack_160 = uStack_160 & 0xffffffff00000000;
        if (bVar21) {
          FUN_1402191ca(&local_168,0);
        }
        FUN_1475c2e1a(local_170,&local_168);
        local_58 = *(longlong *)(local_168 + (ulonglong)uVar12 * 8);
      }
      local_188 = (longlong *)(param_1 + 0x338);
      if ((int)uVar12 < *(int *)(param_1 + 0x340) - *(int *)(param_1 + 0x36c)) {
        bVar21 = (longlong)uStack_160 < 0;
        uStack_160 = uStack_160 & 0xffffffff00000000;
        if (bVar21) {
          FUN_1402191ca(&local_168,0);
        }
        FUN_1475c3112(local_188,&local_168);
        lStack_50 = *(longlong *)(local_168 + (ulonglong)uVar12 * 8);
      }
      bVar21 = local_1b0 == 0;
      uVar1 = *(ushort *)(local_1a0 + 100);
      uVar4 = *(undefined2 *)(local_1a0 + 0x126);
      local_1a8 = lVar8;
      if (lVar10 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar10);
      }
      uVar2 = *(undefined2 *)(local_1a8 + 0x100);
      local_150 = (uint)uVar1;
      if ((~DAT_14c950c29 & 1) == 0 && lVar10 != 0) {
        local_17c = (uint)uVar1;
        FUN_1456cec3c(lVar10);
        local_150 = local_17c;
      }
      lVar8 = local_1a8;
      local_150 = (uint)(((iVar15 != 0 || iVar11 != 0) || !bVar21) || iVar9 != 0) << 0x10 |
                  local_150;
      uVar19 = (uint)CONCAT12(((iVar15 == 0 && iVar11 == 0) && bVar21) && iVar9 == 0,uVar4);
      if ((~DAT_14c950c29 & 1) == 0 && lVar10 != 0) {
        FUN_1456cec3c(lVar10);
      }
      uVar4 = *(undefined2 *)(lVar8 + 0x102);
      local_13c = 1;
      local_148 = CONCAT44(local_1b0,iVar15);
      local_140 = local_1ac;
      local_120 = 1;
      local_14c = iVar11;
      local_138 = uVar19;
      local_130 = uVar2;
      local_128 = lVar10;
      if ((lVar10 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(lVar10);
      }
      uVar7 = local_190;
      local_b4 = 1;
      pppuVar14 = &local_a8;
      puVar16 = &local_114;
      for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar16 = *(undefined4 *)pppuVar14;
        pppuVar14 = (undefined ***)((longlong)pppuVar14 + 4);
        puVar16 = puVar16 + 1;
      }
      local_b0 = 0;
      local_158 = &PTR_FUN_14a4c71c0;
      local_118 = uVar4;
      FUN_1475c340a(local_190,&local_158);
      lVar8 = 0;
      do {
        ppuVar6 = (&local_a8)[lVar8];
        if (ppuVar6 != (undefined **)0x0) {
          if (*(int *)(param_1 + 0x250) != *(int *)(param_1 + 0x27c)) {
            uVar19 = (uint)((ulonglong)ppuVar6 >> 0x10);
            uVar13 = (uint)ppuVar6 & 0xffff;
            lVar10 = *(longlong *)(param_1 + 0x288);
            if (*(longlong *)(param_1 + 0x288) == 0) {
              lVar10 = param_1 + 0x280;
            }
            iVar11 = *(int *)(lVar10 + (ulonglong)
                                       (*(int *)(param_1 + 0x290) - 1U &
                                       (int)((ulonglong)ppuVar6 >> 0x20) +
                                       ((uint)ppuVar6 << 0x10 | uVar13) +
                                       (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar13 >> 4)) * 4);
            if (iVar11 != -1) {
              do {
                local_148 = *local_198 + (longlong)iVar11 * 0x120;
                if (*(undefined ***)(*local_198 + (longlong)iVar11 * 0x120) == ppuVar6)
                goto LAB_1475c2075;
                iVar11 = *(int *)(local_148 + 0x118);
              } while (iVar11 != -1);
            }
          }
          local_148 = 0;
LAB_1475c2075:
          local_148 = local_148 + 8;
          local_150 = CONCAT22(local_150._2_2_,*(undefined2 *)(local_1a0 + 0x7e + lVar8 * 2));
          local_140 = CONCAT31(local_140._1_3_,1);
          local_138 = local_138 & 0xffffff00;
          local_158 = &PTR_FUN_14a4c71e0;
          FUN_1475c350c(uVar7,&local_158);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 9);
      if (lStack_60 != 0) {
        if (*(int *)(param_1 + 0x2a0) != *(int *)(param_1 + 0x2cc)) {
          uVar19 = (uint)((ulonglong)lStack_60 >> 0x10);
          uVar13 = (uint)lStack_60 & 0xffff;
          lVar8 = param_1 + 0x2d0;
          if (*(longlong *)(param_1 + 0x2d8) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x2d8);
          }
          iVar11 = *(int *)(lVar8 + (ulonglong)
                                    (*(int *)(param_1 + 0x2e0) - 1U &
                                    (int)((ulonglong)lStack_60 >> 0x20) +
                                    ((uint)lStack_60 << 0x10 | uVar13) +
                                    (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar13 >> 4)) * 4);
          if (iVar11 != -1) {
            do {
              local_148 = *local_178 + (longlong)iVar11 * 0x120;
              if (*(longlong *)(*local_178 + (longlong)iVar11 * 0x120) == lStack_60)
              goto LAB_1475c259f;
              iVar11 = *(int *)(local_148 + 0x118);
            } while (iVar11 != -1);
          }
        }
        local_148 = 0;
LAB_1475c259f:
        local_148 = local_148 + 8;
        local_150 = CONCAT22(local_150._2_2_,*(undefined2 *)(local_1a0 + 0xa2));
        local_140 = CONCAT31(local_140._1_3_,1);
        local_138 = local_138 & 0xffffff00;
        local_158 = &PTR_FUN_14a4c7200;
        FUN_1475c3592(uVar7);
      }
      if (local_58 != 0) {
        if (*(int *)(param_1 + 0x2f0) != *(int *)(param_1 + 0x31c)) {
          uVar19 = (uint)((ulonglong)local_58 >> 0x10);
          uVar13 = (uint)local_58 & 0xffff;
          lVar8 = param_1 + 800;
          if (*(longlong *)(param_1 + 0x328) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x328);
          }
          iVar11 = *(int *)(lVar8 + (ulonglong)
                                    (*(int *)(param_1 + 0x330) - 1U &
                                    (int)((ulonglong)local_58 >> 0x20) +
                                    ((uint)local_58 << 0x10 | uVar13) +
                                    (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar13 >> 4)) * 4);
          if (iVar11 != -1) {
            do {
              local_148 = *local_170 + (longlong)iVar11 * 0x118;
              if (*(longlong *)(*local_170 + (longlong)iVar11 * 0x118) == local_58)
              goto LAB_1475c2649;
              iVar11 = *(int *)(local_148 + 0x110);
            } while (iVar11 != -1);
          }
        }
        local_148 = 0;
LAB_1475c2649:
        local_148 = local_148 + 8;
        local_150 = CONCAT22(local_150._2_2_,*(undefined2 *)(local_1a0 + 0x7c));
        local_140 = CONCAT31(local_140._1_3_,1);
        local_138 = local_138 & 0xffffff00;
        local_158 = &PTR_FUN_14a4c7220;
        FUN_1475c3618(uVar7);
      }
      if (lStack_50 != 0) {
        if (*(int *)(param_1 + 0x340) != *(int *)(param_1 + 0x36c)) {
          uVar19 = (uint)((ulonglong)lStack_50 >> 0x10);
          uVar13 = (uint)lStack_50 & 0xffff;
          lVar8 = param_1 + 0x370;
          if (*(longlong *)(param_1 + 0x378) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x378);
          }
          iVar11 = *(int *)(lVar8 + (ulonglong)
                                    (*(int *)(param_1 + 0x380) - 1U &
                                    (int)((ulonglong)lStack_50 >> 0x20) +
                                    ((uint)lStack_50 << 0x10 | uVar13) +
                                    (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar13 >> 4)) * 4);
          if (iVar11 != -1) {
            do {
              local_148 = *local_188 + (longlong)iVar11 * 0x118;
              if (*(longlong *)(*local_188 + (longlong)iVar11 * 0x118) == lStack_50)
              goto LAB_1475c2183;
              iVar11 = *(int *)(local_148 + 0x110);
            } while (iVar11 != -1);
          }
        }
        local_148 = 0;
LAB_1475c2183:
        local_148 = local_148 + 8;
        local_150 = CONCAT22(local_150._2_2_,*(undefined2 *)(local_1a0 + 0x76));
        local_140 = CONCAT31(local_140._1_3_,1);
        local_138 = local_138 & 0xffffff00;
        local_158 = &PTR_FUN_14a4c7240;
        FUN_1475c369e(uVar7);
      }
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1475c1c30:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475c2724 FUN_1475c2724 body=257 status=ok
// SIG undefined FUN_1475c2724(void)

void FUN_1475c2724(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_14764ddf4(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c2826 FUN_1475c2826 body=760 status=ok
// SIG undefined FUN_1475c2826(void)

void FUN_1475c2826(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x120);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_1475c29cf;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar1 + lVar3 * 0x120);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x120 + *local_e0,0);
LAB_1475c29cf:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c2b20 FUN_1475c2b20 body=760 status=ok
// SIG undefined FUN_1475c2b20(void)

void FUN_1475c2b20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x120);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_1475c2cc9;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar1 + lVar3 * 0x120);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x120 + *local_e0,0);
LAB_1475c2cc9:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c2e1a FUN_1475c2e1a body=758 status=ok
// SIG undefined FUN_1475c2e1a(void)

void FUN_1475c2e1a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x118);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_1475c2fc1;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar1 + lVar3 * 0x118);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x118 + *local_e0,0);
LAB_1475c2fc1:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c3112 FUN_1475c3112 body=758 status=ok
// SIG undefined FUN_1475c3112(void)

void FUN_1475c3112(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x118);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_1475c32b9;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar1 + lVar3 * 0x118);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x118 + *local_e0,0);
LAB_1475c32b9:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c340a FUN_1475c340a body=257 status=ok
// SIG undefined FUN_1475c340a(void)

void FUN_1475c340a(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_14764df3a(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c350c FUN_1475c350c body=134 status=ok
// SIG undefined FUN_1475c350c(void)

void FUN_1475c350c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar4 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined1 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined1 *)(param_2 + 0x20);
  iVar5 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar5 + 1U) {
    FUN_140561fb4(param_1,iVar5);
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar7 = param_1;
  }
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar5 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4c71e0;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  puVar1[2] = uVar6;
  *(undefined1 *)(puVar1 + 3) = uVar2;
  *(undefined1 *)(puVar1 + 4) = uVar3;
  return;
}



// FUNCTION 1475c3592 FUN_1475c3592 body=134 status=ok
// SIG undefined FUN_1475c3592(void)

void FUN_1475c3592(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar4 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined1 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined1 *)(param_2 + 0x20);
  iVar5 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar5 + 1U) {
    FUN_140561fb4(param_1,iVar5);
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar7 = param_1;
  }
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar5 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4c7200;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  puVar1[2] = uVar6;
  *(undefined1 *)(puVar1 + 3) = uVar2;
  *(undefined1 *)(puVar1 + 4) = uVar3;
  return;
}



// FUNCTION 1475c3618 FUN_1475c3618 body=134 status=ok
// SIG undefined FUN_1475c3618(void)

void FUN_1475c3618(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar4 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined1 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined1 *)(param_2 + 0x20);
  iVar5 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar5 + 1U) {
    FUN_140561fb4(param_1,iVar5);
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar7 = param_1;
  }
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar5 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4c7220;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  puVar1[2] = uVar6;
  *(undefined1 *)(puVar1 + 3) = uVar2;
  *(undefined1 *)(puVar1 + 4) = uVar3;
  return;
}



// FUNCTION 1475c369e FUN_1475c369e body=134 status=ok
// SIG undefined FUN_1475c369e(void)

void FUN_1475c369e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar4 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined1 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined1 *)(param_2 + 0x20);
  iVar5 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar5 + 1U) {
    FUN_140561fb4(param_1,iVar5);
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar7 = param_1;
  }
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar5 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4c7240;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  puVar1[2] = uVar6;
  *(undefined1 *)(puVar1 + 3) = uVar2;
  *(undefined1 *)(puVar1 + 4) = uVar3;
  return;
}



// FUNCTION 1475c3724 FUN_1475c3724 body=257 status=ok
// SIG undefined FUN_1475c3724(void)

void FUN_1475c3724(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_14764e1c2(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c3826 FUN_1475c3826 body=114 status=ok
// SIG undefined FUN_1475c3826(void)

undefined8 *
FUN_1475c3826(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 local_24 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = local_24;
  local_20 = *param_4;
  uVar1 = *(undefined1 *)(param_1 + 0x40);
  local_24[0] = param_3;
  FUN_14764e140(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x28);
  *(undefined1 *)(param_2 + 10) = uVar1;
  *param_2 = &PTR_FUN_14a4c7260;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c38c8 FUN_1475c38c8 body=293 status=ok
// SIG undefined FUN_1475c38c8(void)

undefined1 * FUN_1475c38c8(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    iVar1 = 1;
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_14073751e();
    lVar3 = FUN_144a78ede(param_1,uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x118);
    fVar5 = (float)(**(code **)(**(longlong **)(param_1 + 0xf8) + 8))();
    dVar9 = ((double)(int)uVar2 * (double)fVar5) / (double)(int)((ulonglong)uVar2 >> 0x20);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar9;
    auVar8 = roundpd(auVar8,auVar8,1);
    dVar7 = auVar8._0_8_;
    dVar9 = dVar9 - dVar7;
    if (2147483647.0 <= dVar7) {
      dVar7 = 2147483647.0;
    }
    if (dVar7 <= -2147483648.0) {
      dVar7 = -2147483648.0;
    }
    iVar1 = (int)dVar9;
    fVar6 = (float)dVar9 - (float)iVar1;
    fVar5 = fVar6;
    if (0.99999994 <= fVar6) {
      fVar5 = 0.99999994;
    }
    fVar5 = (float)(~-(uint)(0.0 < fVar6) & (uint)fVar6 | (uint)fVar5 & -(uint)(0.0 < fVar6)) + 0.5
            + -0.5;
    if (0.99999994 <= fVar5) {
      fVar5 = 0.99999994;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    iVar4 = (uint)((char)*(undefined8 *)(param_1 + 0x98) != '\x01') +
            (int)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    iVar1 = iVar1 + iVar4 + (int)dVar7 + (int)(fVar5 + 0.5) + 1;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar4;
  param_2[8] = 0;
  *(int *)(param_2 + 0xc) = iVar1;
  param_2[0x10] = 1;
  return param_2;
}



// FUNCTION 1475c39ee FUN_1475c39ee body=252 status=ok
// SIG undefined FUN_1475c39ee(void)

void FUN_1475c39ee(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144757f48(param_1,8);
  cVar1 = FUN_145c40fca(param_1,1);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xf8) != 0)) {
    if ((char)param_3 != '\0') {
      uVar2 = FUN_14073751e();
      lVar3 = FUN_144a78ede(param_1,uVar2);
      uVar4 = *(ulonglong *)(param_1 + 0x98) & 0xff;
      uVar5 = 0;
      if (uVar4 != 2) {
        local_68 = *(undefined8 *)(lVar3 + 0x118);
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        FUN_1475c3aeb(&local_34,&local_48,*(undefined8 *)(param_1 + 0xf8),
                      (uint)((int)uVar4 != 1) + (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20));
        uVar5 = local_34;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 8) = uVar5;
    }
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    FUN_147575be8(param_1,&local_58,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c3aeb FUN_1475c3aeb body=550 status=ok
// SIG undefined FUN_1475c3aeb(void)

int * FUN_1475c3aeb(int *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                   longlong param_5)

{
  int iVar1;
  double dVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (ABS(*(float *)((longlong)param_3 + 0x14)) <= 1e-08) {
    dVar8 = 1.0;
  }
  else {
    dVar8 = (double)*(float *)((longlong)param_3 + 0x14);
  }
  roundps(ZEXT416(*(uint *)(param_2 + 4)),ZEXT416(*(uint *)(param_2 + 4)),1);
  fVar4 = (float)(**(code **)(*param_3 + 8))(param_3);
  lVar3 = param_3[2];
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  dVar7 = (double)(int)((ulonglong)param_5 >> 0x20);
  dVar2 = (double)(int)param_5;
  fVar5 = (float)FUN_1447c7e44();
  dVar6 = ((double)fVar5 * dVar2) / dVar7;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar6;
  auVar11 = roundpd(auVar11,auVar11,1);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (double)(int)(dVar6 - auVar11._0_8_) + dVar6;
  auVar9 = roundpd(auVar9,auVar9,1);
  dVar6 = auVar9._0_8_;
  if (2147483647.0 <= dVar6) {
    dVar6 = 2147483647.0;
  }
  if (dVar6 <= -2147483648.0) {
    dVar6 = -2147483648.0;
  }
  dVar7 = ((double)(float)((double)fVar4 -
                          (((double)((param_5 >> 0x20) * ((longlong)iVar1 + (longlong)(int)lVar3)) +
                           (double)((ulonglong)dVar7 & 0x8000000000000000)) / dVar2) / dVar8) *
          dVar2) / dVar7;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar7;
  auVar9 = roundpd(auVar12,auVar12,1);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (double)(int)(dVar7 - auVar9._0_8_) + dVar7;
  auVar9 = roundpd(auVar10,auVar10,1);
  dVar8 = auVar9._0_8_;
  if (2147483647.0 <= dVar8) {
    dVar8 = 2147483647.0;
  }
  if (dVar8 <= -2147483648.0) {
    dVar8 = -2147483648.0;
  }
  *param_1 = ((int)dVar6 + (int)param_3[1]) % (int)dVar8;
  return param_1;
}



// FUNCTION 1475c3d12 FUN_1475c3d12 body=283 status=ok
// SIG undefined FUN_1475c3d12(void)

longlong FUN_1475c3d12(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 8);
    uVar2 = FUN_14073751e();
    lVar3 = FUN_144a78ede(param_1,uVar2);
    uVar5 = *(ulonglong *)(param_1 + 0x98) & 0xff;
    if (uVar5 == 2) {
      local_2c = 0;
    }
    else {
      local_68 = *(undefined8 *)(lVar3 + 0x118);
      local_48 = *param_2;
      uStack_44 = param_2[1];
      uStack_40 = param_2[2];
      uStack_3c = param_2[3];
      FUN_1475c3aeb(&local_2c,&local_48,*(undefined8 *)(param_1 + 0xf8),
                    (uint)((int)uVar5 != 1) + (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20));
    }
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    lVar3 = FUN_1475759e6(param_1,&local_58,param_3);
    if (lVar3 != 0) {
      lVar4 = FUN_1459e45b4();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (lVar6 = lVar3,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         != lVar4 + 0x30)) {
        lVar6 = 0;
      }
      *(undefined4 *)(*(longlong *)(lVar6 + 0xf8) + 8) = local_2c;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 8) = uVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c3e2e FUN_1475c3e2e body=820 status=ok
// SIG undefined FUN_1475c3e2e(void)

void FUN_1475c3e2e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  float fVar21;
  double dVar22;
  undefined1 unaff_XMM8 [16];
  
  FUN_147539898();
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    uVar6 = FUN_14073751e();
    lVar7 = FUN_144a78ede(param_1,uVar6);
    lVar7 = *(longlong *)(lVar7 + 0x118);
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    fVar13 = *(float *)((longlong)*(longlong **)(param_1 + 0xf8) + 0x14);
    if (ABS(fVar13) <= 1e-08) {
      dVar17 = 1.0;
    }
    else {
      dVar17 = (double)fVar13;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    fVar13 = (float)(**(code **)(**(longlong **)(param_1 + 0xf8) + 8))();
    lVar2 = *(longlong *)(param_1 + 0xf8);
    dVar16 = (double)(int)((ulonglong)lVar7 >> 0x20);
    dVar3 = (double)(int)lVar7;
    dVar4 = (double)(float)((double)fVar13 -
                           (((double)(((longlong)*(int *)(lVar2 + 0xc) +
                                      (longlong)*(int *)(lVar2 + 0x10)) * (lVar7 >> 0x20)) +
                            (double)((ulonglong)dVar16 & 0x8000000000000000)) / dVar3) / dVar17);
    dVar20 = (dVar3 * dVar4) / dVar16;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar20;
    auVar19 = roundpd(unaff_XMM8,auVar19,1);
    dVar22 = auVar19._0_8_;
    dVar20 = dVar20 - dVar22;
    if (2147483647.0 <= dVar22) {
      dVar22 = 2147483647.0;
    }
    if (dVar22 <= -2147483648.0) {
      dVar22 = -2147483648.0;
    }
    iVar8 = (int)dVar20;
    iVar10 = (int)dVar22 + iVar8;
    if (1 < iVar10) {
      iVar12 = (int)((ulonglong)uVar6 >> 0x20) + (uint)((char)uVar6 == '\x01') + -1;
      fVar21 = (float)dVar20 - (float)iVar8;
      fVar13 = fVar21;
      if (0.99999994 <= fVar21) {
        fVar13 = 0.99999994;
      }
      fVar13 = (float)(~-(uint)(0.0 < fVar21) & (uint)fVar21 | (uint)fVar13 & -(uint)(0.0 < fVar21))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar13) {
        fVar13 = 0.99999994;
      }
      dVar16 = ((double)(float)(dVar4 - (((double)((ulonglong)dVar16 & 0x8000000000000000) +
                                         (double)((lVar7 >> 0x20) * (longlong)*(int *)(lVar2 + 8)))
                                        / dVar3) / dVar17) * dVar3) / dVar16;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar16;
      auVar19 = roundpd(auVar18,auVar18,1);
      dVar17 = auVar19._0_8_;
      dVar16 = dVar16 - dVar17;
      if (2147483647.0 <= dVar17) {
        dVar17 = 2147483647.0;
      }
      if (dVar17 <= -2147483648.0) {
        dVar17 = -2147483648.0;
      }
      iVar8 = (int)dVar16;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar14 = (float)dVar16 - (float)iVar8;
      fVar21 = fVar14;
      if (0.99999994 <= fVar14) {
        fVar21 = 0.99999994;
      }
      fVar21 = (float)(~-(uint)(0.0 < fVar14) & (uint)fVar14 | (uint)fVar21 & -(uint)(0.0 < fVar14))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar21) {
        fVar21 = 0.99999994;
      }
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      iVar9 = (int)((ulonglong)uVar1 >> 0x20) + (uint)((char)uVar1 != '\x01');
      bVar11 = true;
      for (fVar14 = 0.0; (iVar9 < iVar12 || ((iVar9 == iVar12 && (fVar14 < 0.0))));
          fVar14 = fVar14 - auVar19._0_4_) {
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_14753e8f2(param_2,iVar5);
        }
        *(int *)(*param_2 + (longlong)iVar5 * 4) = iVar9;
        if (bVar11) {
          fVar14 = fVar14 + fVar21;
          fVar15 = fVar14 + fVar14;
          iVar5 = (int)dVar17 + iVar8;
        }
        else {
          fVar14 = fVar14 + fVar13;
          fVar15 = fVar14 + fVar14;
          iVar5 = iVar10;
        }
        iVar9 = iVar9 + iVar5 + ((int)ROUND(fVar15 + -0.5) >> 1);
        auVar19 = roundss(ZEXT816(0),ZEXT416((uint)fVar14),9);
        bVar11 = false;
      }
    }
  }
  return;
}



// FUNCTION 1475c4162 FUN_1475c4162 body=144 status=ok
// SIG undefined FUN_1475c4162(void)

void FUN_1475c4162(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    uVar1 = 0;
  }
  else {
    local_c = (uint)((char)*(undefined8 *)(param_1 + 0xa0) == '\x01') +
              (int)((ulonglong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
    local_10 = (uint)((char)*(undefined8 *)(param_1 + 0x98) != '\x01') +
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    local_18 = param_4;
    uVar1 = FUN_1475ab43e(&local_10,*(longlong *)(param_1 + 0xf8),param_2,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar1);
}



// FUNCTION 1475c41f8 FUN_1475c41f8 body=23 status=ok
// SIG undefined FUN_1475c41f8(void)

undefined1 FUN_1475c41f8(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1475c4238 FUN_1475c4238 body=196 status=ok
// SIG undefined FUN_1475c4238(void)

void FUN_1475c4238(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cab4a28;
  uStack_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x124) = puVar4[2];
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  *(undefined4 *)(param_1 + 0x120) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c4310 FUN_1475c4310 body=335 status=ok
// SIG undefined FUN_1475c4310(void)

void FUN_1475c4310(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_54 [16];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  FUN_14179f016((undefined4 *)(param_1 + 0x114),local_54,param_3,&local_68);
  uVar4 = FUN_1447addd0(local_54,0x10);
  iVar5 = FUN_1475a0174(param_2,uVar4 ^ local_44,local_54);
  if (iVar5 != -1) {
    uVar6 = FUN_147552f3e(*param_4);
    uVar4 = FUN_1447addd0(local_54,0x10);
    iVar5 = FUN_1475a0174(param_2,uVar4 ^ local_44,local_54);
    lVar7 = 0;
    if (iVar5 != -1) {
      lVar7 = (longlong)iVar5 * 0x30 + *param_2;
    }
    FUN_14757416c(lVar7 + 0x14,&local_80,param_3,uVar6);
    *(undefined4 *)(param_1 + 0x114) = local_80;
    *(undefined4 *)(param_1 + 0x118) = uStack_7c;
    *(undefined4 *)(param_1 + 0x11c) = uStack_78;
    *(undefined4 *)(param_1 + 0x120) = uStack_74;
    *(undefined4 *)(param_1 + 0x124) = local_70;
    *(undefined4 *)(param_1 + 0x128) = local_6c;
  }
  plVar3 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c4460 FUN_1475c4460 body=64 status=ok
// SIG undefined FUN_1475c4460(void)

void FUN_1475c4460(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_140c60952(param_2,iVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x11c);
  puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x10);
  *puVar1 = *(undefined8 *)(param_1 + 0x114);
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 1475c44a0 FUN_1475c44a0 body=439 status=ok
// SIG undefined FUN_1475c44a0(void)

void FUN_1475c44a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined1 local_270 [24];
  undefined1 local_258 [472];
  longlong local_80;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  *(undefined1 *)(param_1 + 400) = 0;
  if ((*(char *)(param_1 + 0x98) != '\x02') &&
     (((*(int *)(param_1 + 0x118) != 0 || *(int *)(param_1 + 0x114) != 0) ||
      *(int *)(param_1 + 0x11c) != 0) || *(int *)(param_1 + 0x120) != 0)) {
    uVar3 = FUN_14073751e();
    uVar3 = FUN_144a78ede(param_1,uVar3);
    lVar4 = FUN_14633fa90(uVar3,param_1 + 0x114);
    if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0x28), (longlong)iVar1 != 0)) {
      lVar4 = *(longlong *)(lVar4 + 0x20);
      lVar8 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar8);
        if (lVar2 != 0) {
          lVar5 = FUN_140bc800c();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            FUN_1475a981e(local_270);
            uVar3 = DAT_14cab2cc8;
            DAT_14cab2cc8 = local_80 + 0x28;
            FUN_1475a9c46(local_270,lVar2,0);
            FUN_14073c474(param_1,&local_288);
            local_278 = local_288._4_4_;
            local_274 = 0;
            FUN_1475aa106(local_270);
            FUN_1475aa544(local_270);
            local_288 = (undefined8 *)0x0;
            uStack_280 = 0;
            FUN_1475a7b5c(local_258,local_80,0,&local_288);
            if (0 < (int)uStack_280) {
              puVar6 = local_288;
              puVar7 = (undefined8 *)(param_1 + 0x130);
              for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
              *(undefined1 *)(param_1 + 400) = 1;
            }
            if (local_288 != (undefined8 *)0x0) {
              FUN_1400020a8(local_288);
            }
            DAT_14cab2cc8 = uVar3;
            FUN_1475a9b08(local_270);
            break;
          }
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475c465c FUN_1475c465c body=258 status=ok
// SIG undefined FUN_1475c465c(void)

void FUN_1475c465c(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x128);
  if ((((lVar3 != 0) && (lVar2 = FUN_1411080a4(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x128), lVar3 != 0)))) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_1 + 0x128);
    }
    *(longlong *)(param_1 + 0x100) = lVar3;
  }
  fVar1 = *(float *)(param_1 + 0x130);
  if ((fVar1 != 1.0) || (NAN(fVar1))) {
    *(float *)(param_1 + 0x108) = fVar1;
  }
  if (*(char *)(param_1 + 0x134) != '\0') {
    *(char *)(param_1 + 0x10c) = *(char *)(param_1 + 0x134);
  }
  if ((*(double *)(param_1 + 0x138) == DAT_14c8464f8) &&
     (!NAN(*(double *)(param_1 + 0x138)) && !NAN(DAT_14c8464f8))) {
    if ((*(double *)(param_1 + 0x140) == DAT_14c846500) &&
       (!NAN(*(double *)(param_1 + 0x140)) && !NAN(DAT_14c846500))) {
      if ((*(double *)(param_1 + 0x148) == DAT_14c846508) &&
         (!NAN(*(double *)(param_1 + 0x148)) && !NAN(DAT_14c846508))) goto LAB_1475c46f3;
    }
  }
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x144);
LAB_1475c46f3:
  FUN_140836bcc(param_1);
  return;
}



// FUNCTION 1475c475e FUN_1475c475e body=406 status=ok
// SIG undefined FUN_1475c475e(void)

void FUN_1475c475e(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 local_cc;
  undefined1 local_c8;
  undefined1 local_c0 [120];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    lVar2 = FUN_1411080a4();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (*(longlong *)(param_1 + 8) != 0)) {
      lVar3 = FUN_14009d2a0();
      lVar2 = FUN_14038fb82();
      piVar1 = *(int **)(param_3 + 8);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
        iVar7 = 0;
        iVar5 = 0;
        iVar6 = 0;
      }
      else {
        iVar4 = *piVar1;
        iVar7 = piVar1[1];
        iVar5 = piVar1[2];
        iVar6 = piVar1[3];
      }
      local_128 = *(longlong *)(param_1 + 8);
      if ((local_128 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_120 = *(undefined8 *)(param_1 + 0x10);
      uStack_118 = *(undefined8 *)(param_1 + 0x18);
      local_110 = *(undefined4 *)(param_1 + 0x20);
      uStack_10c = *(undefined4 *)(param_1 + 0x24);
      uStack_108 = *(undefined4 *)(param_1 + 0x28);
      uStack_104 = *(undefined4 *)(param_1 + 0x2c);
      local_f8 = *(undefined4 *)(param_1 + -0xcc);
      uStack_f4 = *(undefined4 *)(param_1 + -200);
      uStack_f0 = *(undefined4 *)(param_1 + -0xc4);
      uStack_ec = *(undefined4 *)(param_1 + -0xc0);
      local_100 = 0;
      if (*(char *)(param_1 + -0x60) != '\x02') {
        local_100 = *(undefined4 *)(param_1 + -0x5c);
      }
      local_fc = 0x7fffffff;
      if (*(char *)(param_1 + -0x58) != '\x02') {
        local_fc = *(undefined4 *)(param_1 + -0x54);
      }
      local_e0 = (uint)CONCAT12(((iVar7 != 0 || iVar4 != 0) || iVar5 != 0) || iVar6 != 0,
                                *(undefined2 *)(lVar3 + 100));
      local_cc = 1;
      local_c8 = 0;
      local_e8 = &PTR_FUN_14a4c5390;
      local_dc = iVar4;
      local_d8 = iVar7;
      local_d4 = iVar5;
      local_d0 = iVar6;
      FUN_1475c49f8(&local_e8,local_c0,*(undefined2 *)(lVar2 + 0x106));
      FUN_1475c48f6(param_4,local_c0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c48f6 FUN_1475c48f6 body=257 status=ok
// SIG undefined FUN_1475c48f6(void)

void FUN_1475c48f6(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_14764ea20(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c49f8 FUN_1475c49f8 body=271 status=ok
// SIG undefined FUN_1475c49f8(void)

undefined8 *
FUN_1475c49f8(longlong param_1,undefined8 *param_2,undefined2 param_3,longlong *param_4)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_4;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_58 = param_4[1];
  lStack_50 = param_4[2];
  local_48 = (undefined4)param_4[3];
  uStack_44 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_40 = (undefined4)param_4[4];
  uStack_3c = *(undefined4 *)((longlong)param_4 + 0x24);
  local_78 = (undefined4)param_4[5];
  uStack_74 = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_70 = (undefined4)param_4[6];
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0x34);
  local_68 = param_4[7];
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  cVar2 = *(char *)(param_1 + 0x1c);
  *(char *)((longlong)param_2 + 0x1c) = cVar2;
  if (cVar2 == '\x01') {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_2 + 2) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
    *(undefined4 *)(param_2 + 3) = uVar6;
  }
  *(undefined2 *)(param_2 + 4) = param_3;
  *(undefined1 *)(param_2 + 0xd) = 1;
  param_2[5] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  *(undefined4 *)(param_2 + 8) = local_48;
  *(undefined4 *)((longlong)param_2 + 0x44) = uStack_44;
  *(undefined4 *)(param_2 + 9) = uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uStack_3c;
  param_2[6] = local_58;
  param_2[7] = lStack_50;
  *(undefined4 *)(param_2 + 10) = local_78;
  *(undefined4 *)((longlong)param_2 + 0x54) = uStack_74;
  *(undefined4 *)(param_2 + 0xb) = uStack_70;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uStack_6c;
  param_2[0xc] = local_68;
  *(undefined1 *)(param_2 + 0xe) = uVar1;
  *param_2 = &PTR_FUN_14a4c7360;
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c4b0c FUN_1475c4b0c body=358 status=ok
// SIG undefined FUN_1475c4b0c(void)

void FUN_1475c4b0c(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 local_cc;
  undefined1 local_c8;
  undefined1 local_c0 [120];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  piVar1 = *(int **)(param_3 + 8);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
    iVar7 = 0;
    iVar5 = 0;
    iVar6 = 0;
  }
  else {
    iVar4 = *piVar1;
    iVar7 = piVar1[1];
    iVar5 = piVar1[2];
    iVar6 = piVar1[3];
  }
  local_128 = *(longlong *)(param_1 + 8);
  if ((local_128 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_120 = *(undefined8 *)(param_1 + 0x10);
  uStack_118 = *(undefined8 *)(param_1 + 0x18);
  local_110 = *(undefined4 *)(param_1 + 0x20);
  uStack_10c = *(undefined4 *)(param_1 + 0x24);
  uStack_108 = *(undefined4 *)(param_1 + 0x28);
  uStack_104 = *(undefined4 *)(param_1 + 0x2c);
  local_f8 = *(undefined4 *)(param_1 + -0xcc);
  uStack_f4 = *(undefined4 *)(param_1 + -200);
  uStack_f0 = *(undefined4 *)(param_1 + -0xc4);
  uStack_ec = *(undefined4 *)(param_1 + -0xc0);
  local_100 = 0;
  if (*(char *)(param_1 + -0x60) != '\x02') {
    local_100 = *(undefined4 *)(param_1 + -0x5c);
  }
  local_fc = 0x7fffffff;
  if (*(char *)(param_1 + -0x58) != '\x02') {
    local_fc = *(undefined4 *)(param_1 + -0x54);
  }
  local_e0 = (uint)CONCAT12(((iVar7 != 0 || iVar4 != 0) || iVar5 != 0) || iVar6 != 0,
                            *(undefined2 *)(lVar2 + 100));
  local_cc = 1;
  local_c8 = 0;
  local_e8 = &PTR_FUN_14a4c5390;
  local_dc = iVar4;
  local_d8 = iVar7;
  local_d4 = iVar5;
  local_d0 = iVar6;
  FUN_1475c49f8(&local_e8,local_c0,*(undefined2 *)(lVar3 + 0x106));
  FUN_1475c48f6(param_4,local_c0);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c4c78 FUN_1475c4c78 body=191 status=ok
// SIG undefined FUN_1475c4c78(void)

undefined8 FUN_1475c4c78(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_1475545d8(param_4,param_3);
  lVar3 = (longlong)*(int *)(param_1 + 0x60);
  if (0 < lVar3) {
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    iVar5 = 0;
    do {
      cVar1 = FUN_1400a246c(param_2,puVar4);
      if (cVar1 != '\0') {
        local_58[0] = 1;
        local_54 = *puVar4;
        local_50 = 1;
        local_68 = uVar2;
        local_4c = local_54;
        FUN_147554a22(param_4,local_58,param_1 + -0xf8,iVar5);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c4d38 FUN_1475c4d38 body=199 status=ok
// SIG undefined FUN_1475c4d38(void)

void FUN_1475c4d38(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = (longlong)*(int *)(param_3 + 0x10);
  if ((-1 < lVar5) && (*(int *)(param_3 + 0x10) < *(int *)(param_1 + 0x70))) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar4 = FUN_1475c4e00(param_2);
    if (lVar4 != 0) {
      local_58 = lVar2 + lVar5 * 0x28;
      local_38 = *(undefined4 *)(lVar1 + lVar5 * 4);
      local_34 = 0;
      puVar3 = *(undefined4 **)(param_3 + 8);
      if (puVar3 == (undefined4 *)0x0) {
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
      }
      else {
        local_48 = *puVar3;
        uStack_44 = puVar3[1];
        uStack_40 = puVar3[2];
        uStack_3c = puVar3[3];
      }
      FUN_147658ea8(lVar4,*(undefined4 *)(param_3 + 0x30),&local_48,&local_38);
      *(undefined8 *)(param_2 + 0x278) = *(undefined8 *)(param_2 + 0x270);
      *(undefined1 *)(param_2 + 0x289) = 1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c4e00 FUN_1475c4e00 body=98 status=ok
// SIG undefined FUN_1475c4e00(void)

void FUN_1475c4e00(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b3547e();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c4e64 FUN_1475c4e64 body=139 status=ok
// SIG undefined FUN_1475c4e64(void)

void FUN_1475c4e64(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140298672(param_1,&local_28);
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



// FUNCTION 1475c4ef0 FUN_1475c4ef0 body=274 status=ok
// SIG undefined FUN_1475c4ef0(void)

void FUN_1475c4ef0(longlong param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar3 = FUN_145c40fca(param_1,1);
  _Src = local_38;
  if ((cVar3 != '\0') && (ppvVar1 = (void **)(param_1 + 0x7e0), ppvVar1 != &local_38)) {
    iVar2 = (int)uStack_30;
    lVar4 = (longlong)(int)uStack_30;
    *(int *)(param_1 + 0x7e8) = (int)uStack_30;
    if ((int)uStack_30 == 0 && *(int *)(param_1 + 0x7ec) == 0) {
      *(undefined4 *)(param_1 + 0x7ec) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_30 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar4 * 2);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c5016 FUN_1475c5016 body=1032 status=ok
// SIG undefined FUN_1475c5016(void)

undefined8 * FUN_1475c5016(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_138 [40];
  undefined4 *local_110;
  longlong *local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = param_3;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    FUN_14757509a(param_1);
  }
  local_100 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
  if (DAT_14cab4ec0 == 0) {
    uVar5 = FUN_140d2a6db();
    DAT_14cab4ec0 = FUN_140002ddd(FUN_14634799f,uVar5,L"MovieSceneColorKeyStruct");
  }
  FUN_1446e6d0e(plVar4,DAT_14cab4ec0);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a4c7c20;
  plVar6[2] = (longlong)plVar4;
  local_108 = plVar4;
  lVar7 = (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar1 = lVar7 + 0x20;
  local_a8 = *local_110;
  uStack_a4 = local_110[1];
  uStack_a0 = local_110[2];
  uStack_9c = local_110[3];
  FUN_1475c5420(*(undefined8 *)(param_1 + 0xe0),local_c8,0);
  puVar8 = (undefined8 *)&local_90;
  FUN_1475c54c6(puVar8,local_c8,lVar7 + 8,&local_a8);
  FUN_147573770(lVar1,puVar8);
  if ((local_50 & 1) != 0) {
    if ((local_50 & 2) == 0) {
      puVar8 = (undefined8 *)CONCAT44(uStack_8c,local_90);
    }
    local_50 = local_50 & 0xfe;
    (**(code **)*puVar8)(puVar8,0);
    if ((local_50 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_8c,local_90));
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_c0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  local_d8 = *local_110;
  uStack_d4 = local_110[1];
  uStack_d0 = local_110[2];
  uStack_cc = local_110[3];
  FUN_1475c5420(*(undefined8 *)(param_1 + 0xe0),local_c8,1);
  puVar8 = (undefined8 *)&local_90;
  FUN_1475c54c6(puVar8,local_c8,lVar7 + 0xc,&local_d8);
  FUN_147573770(lVar1,puVar8);
  if ((local_50 & 1) != 0) {
    if ((local_50 & 2) == 0) {
      puVar8 = (undefined8 *)CONCAT44(uStack_8c,local_90);
    }
    local_50 = local_50 & 0xfe;
    (**(code **)*puVar8)(puVar8,0);
    if ((local_50 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_8c,local_90));
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_c0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  local_e8 = *local_110;
  uStack_e4 = local_110[1];
  uStack_e0 = local_110[2];
  uStack_dc = local_110[3];
  FUN_1475c5420(*(undefined8 *)(param_1 + 0xe0),local_c8,2);
  puVar8 = (undefined8 *)&local_90;
  FUN_1475c54c6(puVar8,local_c8,lVar7 + 0x10,&local_e8);
  FUN_147573770(lVar1,puVar8);
  if ((local_50 & 1) != 0) {
    if ((local_50 & 2) == 0) {
      puVar8 = (undefined8 *)CONCAT44(uStack_8c,local_90);
    }
    local_50 = local_50 & 0xfe;
    (**(code **)*puVar8)(puVar8,0);
    if ((local_50 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_8c,local_90));
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_c0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  local_f8 = *local_110;
  uStack_f4 = local_110[1];
  uStack_f0 = local_110[2];
  uStack_ec = local_110[3];
  FUN_1475c5420(*(undefined8 *)(param_1 + 0xe0),local_c8,3);
  puVar8 = (undefined8 *)&local_90;
  FUN_1475c54c6(puVar8,local_c8,lVar7 + 0x14,&local_f8);
  FUN_147573770(lVar1,puVar8);
  if ((local_50 & 1) != 0) {
    if ((local_50 & 2) == 0) {
      puVar8 = (undefined8 *)CONCAT44(uStack_8c,local_90);
    }
    local_50 = local_50 & 0xfe;
    (**(code **)*puVar8)(puVar8,0);
    if ((local_50 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_8c,local_90));
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_c0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  FUN_1475737dc(lVar1);
  FUN_147573828(lVar1,&local_90);
  puVar8 = local_100;
  uVar3 = 0;
  if ((char)uStack_8c != '\0') {
    uVar3 = local_90;
  }
  *(undefined4 *)(lVar7 + 0x18) = uVar3;
  *local_100 = local_108;
  local_100[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c5420 FUN_1475c5420 body=165 status=ok
// SIG undefined FUN_1475c5420(void)

undefined8 FUN_1475c5420(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_140f938fc();
  FUN_1475264be(param_1,&local_58,*(undefined8 *)(lVar2 + 0x18),param_3);
  local_38 = local_58;
  local_30 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14764eb00(param_2,&local_38,local_48,local_40);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c54c6 FUN_1475c54c6 body=222 status=ok
// SIG undefined FUN_1475c54c6(void)

undefined8 *
FUN_1475c54c6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = *(undefined4 *)(param_2 + 3);
  local_30 = param_2[2];
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 3;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a4c7c40;
  param_1[3] = uVar2;
  param_1[4] = lVar1;
  param_1[5] = local_30;
  *(undefined4 *)(param_1 + 6) = local_28;
  param_1[7] = param_3;
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  uVar2 = FUN_147526316(param_2);
  FUN_14764eb78(&local_30,uVar2,&local_48);
  puVar3 = param_1;
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    puVar3 = (undefined8 *)*param_1;
  }
  if (&local_30 != puVar3 + 1) {
    if ((char)local_28 == '\x01') {
      puVar3[1] = local_30;
      uVar4 = 1;
    }
    else {
      if (*(char *)(puVar3 + 2) != '\x01') goto LAB_1475c5579;
      uVar4 = 0;
    }
    *(undefined1 *)(puVar3 + 2) = uVar4;
  }
LAB_1475c5579:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c55a6 FUN_1475c55a6 body=23 status=ok
// SIG undefined FUN_1475c55a6(void)

undefined1 FUN_1475c55a6(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1475c55be FUN_1475c55be body=708 status=ok
// SIG undefined FUN_1475c55be(void)

void FUN_1475c55be(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_108 [64];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_78 [5];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_38 = 0;
  local_30 = 2;
  local_2c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  FUN_144a5dc74(local_b8);
  FUN_144a5dc74(local_a8);
  FUN_144a5dc74(local_98);
  FUN_144a5dc74(local_88);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_4c;
  uStack_c4 = uStack_48;
  uStack_c0 = uStack_44;
  uStack_bc = uStack_40;
  FUN_1475c5884(param_1,puVar1,local_3c);
  FUN_14583ec6c(local_b8);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c5884 FUN_1475c5884 body=992 status=ok
// SIG undefined FUN_1475c5884(void)

void FUN_1475c5884(longlong *param_1,int *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 auStack_508 [32];
  undefined4 local_4e8;
  int iStack_4e4;
  undefined4 local_4e0;
  int iStack_4dc;
  longlong local_4d8;
  undefined8 local_4d0;
  undefined4 uStack_4c8;
  undefined8 uStack_4c4;
  undefined8 local_4bc;
  int *local_4b0;
  int *local_4a8;
  int *local_4a0;
  int *local_498;
  undefined1 local_390 [272];
  undefined1 local_280 [272];
  undefined1 local_170 [272];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_508;
  if ((longlong)(int)param_1[0x23] != 0) {
    piVar5 = (int *)param_1[0x22];
    lVar4 = (longlong)(int)param_1[0x23] * 0x450;
    do {
      if ((((*piVar5 == *param_2) && (piVar5[1] == param_2[1])) &&
          ((char)piVar5[2] == (char)param_2[2])) && (piVar5[3] == param_2[3])) {
        if (piVar5 != (int *)0x0) goto LAB_1475c595b;
        break;
      }
      piVar5 = piVar5 + 0x114;
      lVar4 = lVar4 + -0x450;
    } while (lVar4 != 0);
  }
  FUN_1475c6464(&local_4b0);
  iVar2 = (int)param_1[0x23];
  *(uint *)(param_1 + 0x23) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x11c) < iVar2 + 1U) {
    FUN_14764f6c2(param_1 + 0x22,iVar2);
  }
  FUN_14764f662(param_1[0x22] + (longlong)iVar2 * 0x450,&local_4b0);
  FUN_1404dbc70(local_170);
  FUN_1404dbc70(local_280);
  FUN_1404dbc70(local_390);
  FUN_1404dbc70(&local_4a0);
  piVar5 = (int *)((longlong)iVar2 * 0x450 + param_1[0x22]);
  (**(code **)(*param_1 + 0x358))(param_1);
LAB_1475c595b:
  local_4a0 = piVar5 + 4;
  local_4a8 = piVar5 + 0x24;
  local_498 = piVar5 + 0x1e;
  local_4b0 = piVar5 + 0x1a;
  local_4d0._0_4_ = *param_4;
  local_4d0._4_4_ = 0;
  uStack_4c8 = 0;
  uStack_4c4 = 0;
  local_4bc = 0x200000000;
  FUN_1475b9f0a(&local_4b0,&local_4d8,param_3,&local_4d0);
  local_4a0 = piVar5 + 0x48;
  local_4a8 = piVar5 + 0x68;
  local_498 = piVar5 + 0x62;
  local_4b0 = piVar5 + 0x5e;
  local_4d0._0_4_ = param_4[1];
  local_4d0._4_4_ = 0;
  uStack_4c8 = 0;
  uStack_4c4 = 0;
  local_4bc = 0x200000000;
  FUN_1475b9f0a(&local_4b0,&local_4d8,param_3,&local_4d0);
  local_4a0 = piVar5 + 0x8c;
  local_4a8 = piVar5 + 0xac;
  local_498 = piVar5 + 0xa6;
  local_4b0 = piVar5 + 0xa2;
  local_4d0._0_4_ = param_4[2];
  local_4d0._4_4_ = 0;
  uStack_4c8 = 0;
  uStack_4c4 = 0;
  local_4bc = 0x200000000;
  FUN_1475b9f0a(&local_4b0,&local_4d8,param_3,&local_4d0);
  local_4a0 = piVar5 + 0xd0;
  local_4a8 = piVar5 + 0xf0;
  local_498 = piVar5 + 0xea;
  local_4b0 = piVar5 + 0xe6;
  local_4d0._0_4_ = param_4[3];
  local_4d0._4_4_ = 0;
  uStack_4c8 = 0;
  uStack_4c4 = 0;
  local_4bc = 0x200000000;
  FUN_1475b9f0a(&local_4b0,&local_4d8,param_3,&local_4d0);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 == '\0') goto LAB_1475c5bd0;
  lVar4 = param_1[0x13];
  local_4d0._0_4_ = (undefined4)lVar4;
  local_4d0._4_4_ = (int)((ulonglong)lVar4 >> 0x20);
  local_4d8 = param_1[0x14];
  local_4e0 = CONCAT31(local_4e0._1_3_,1);
  iStack_4dc = param_3;
  local_4e8 = CONCAT31(local_4e8._1_3_,1);
  iStack_4e4 = param_3;
  cVar1 = (char)local_4d8;
  iVar2 = (int)((ulonglong)local_4d8 >> 0x20);
  puVar3 = &local_4d0;
  if ((char)lVar4 == '\x02') {
    if (cVar1 == '\x02') {
      plVar6 = &local_4d8;
    }
    else {
      plVar6 = &local_4d8;
      if (iVar2 <= param_3) {
        plVar6 = (longlong *)&local_4e8;
      }
      if (iVar2 < param_3) {
        plVar6 = (longlong *)&local_4e8;
      }
    }
LAB_1475c5baf:
    local_4b0 = (int *)*puVar3;
    local_4a8 = (int *)*plVar6;
  }
  else {
    plVar6 = &local_4d8;
    if (cVar1 == '\x02') {
LAB_1475c5b8c:
      if (param_3 < local_4d0._4_4_) {
        puVar3 = (undefined8 *)&local_4e0;
      }
      else if (param_3 <= local_4d0._4_4_) {
        puVar3 = (undefined8 *)&local_4e0;
      }
      goto LAB_1475c5baf;
    }
    if ((local_4d0._4_4_ <= iVar2) &&
       ((local_4d0._4_4_ != iVar2 || ((char)lVar4 != '\0' && cVar1 != '\0')))) {
      plVar6 = &local_4d8;
      if (iVar2 <= param_3) {
        plVar6 = (longlong *)&local_4e8;
      }
      if (iVar2 < param_3) {
        plVar6 = (longlong *)&local_4e8;
      }
      goto LAB_1475c5b8c;
    }
    local_4b0 = (int *)CONCAT44(param_3,local_4e0);
    local_4a8 = (int *)CONCAT44(param_3,local_4e8);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_4b0);
LAB_1475c5bd0:
  if ((local_60 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475c5c66 FUN_1475c5c66 body=508 status=ok
// SIG undefined FUN_1475c5c66(void)

void FUN_1475c5c66(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [48];
  longlong local_58 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  local_28 = 2;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475c5e64(param_1,puVar1,local_34,local_38);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c5e64 FUN_1475c5e64 body=853 status=ok
// SIG undefined FUN_1475c5e64(void)

void FUN_1475c5e64(longlong *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  longlong *plVar9;
  undefined1 auStack_1e8 [40];
  undefined4 local_1c0;
  int iStack_1bc;
  undefined4 local_1b8;
  int iStack_1b4;
  longlong local_1b0;
  undefined4 local_1a8;
  int iStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 local_194;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_178;
  undefined **local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined2 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined5 uStack_108;
  undefined3 uStack_103;
  undefined5 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar4 = param_1[0x20];
  iVar3 = (int)param_1[0x21];
  lVar5 = (longlong)iVar3;
  if (lVar5 != 0) {
    ppuVar8 = (undefined **)(lVar4 + 0x10);
    do {
      if ((((*(int *)(ppuVar8 + -2) == *param_2) &&
           (*(int *)((longlong)ppuVar8 + -0xc) == param_2[1])) &&
          (*(char *)(ppuVar8 + -1) == (char)param_2[2])) &&
         (*(int *)((longlong)ppuVar8 + -4) == param_2[3])) goto LAB_1475c5fed;
      ppuVar7 = ppuVar8 + 0x22;
      ppuVar8 = ppuVar8 + 0x24;
    } while (ppuVar7 != (undefined **)(lVar5 * 0x120 + lVar4));
  }
  local_170 = (undefined **)0x0;
  uStack_168 = 0;
  local_160 = 2;
  local_15c = 0;
  uStack_154 = 0;
  local_14c = 0x200000000;
  local_144 = 0;
  uStack_13c = 0;
  local_134 = 0;
  local_130 = 2;
  local_178 = &PTR_FUN_14a46ea60;
  local_128 = 0x404;
  local_d8 = 0;
  local_d0 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_103 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_a0 = 0;
  local_98 = 0;
  local_b4 = 0;
  local_c4 = 0;
  uStack_bc = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0x10000ea60;
  local_188._0_4_ = *param_2;
  local_188._4_4_ = param_2[1];
  uStack_180._0_4_ = param_2[2];
  uStack_180._4_4_ = param_2[3];
  *(uint *)(param_1 + 0x21) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x10c) < iVar3 + 1U) {
    FUN_14764f5ce(param_1 + 0x20,iVar3);
    lVar4 = param_1[0x20];
  }
  piVar1 = (int *)(lVar4 + lVar5 * 0x120);
  *piVar1 = (int)local_188;
  piVar1[1] = local_188._4_4_;
  piVar1[2] = (int)uStack_180;
  piVar1[3] = uStack_180._4_4_;
  FUN_147613664(piVar1 + 4,&local_178);
  FUN_1404dbc70(&local_178);
  ppuVar8 = (undefined **)(param_1[0x20] + lVar5 * 0x120 + 0x10);
  (**(code **)(*param_1 + 0x358))(param_1);
LAB_1475c5fed:
  uStack_180 = ppuVar8 + 0x10;
  local_170 = ppuVar8 + 0xd;
  local_188 = ppuVar8 + 0xb;
  iStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  local_194 = 0x200000000;
  local_1a8 = param_4;
  local_178 = ppuVar8;
  FUN_1475b9f0a(&local_188,&local_1b0,param_3,&local_1a8);
  cVar2 = FUN_145c40fca(param_1,1);
  if (cVar2 == '\0') goto LAB_1475c6136;
  lVar4 = param_1[0x13];
  local_1a8 = (undefined4)lVar4;
  iStack_1a4 = (int)((ulonglong)lVar4 >> 0x20);
  local_1b0 = param_1[0x14];
  local_1b8 = CONCAT31(local_1b8._1_3_,1);
  iStack_1b4 = param_3;
  local_1c0 = CONCAT31(local_1c0._1_3_,1);
  iStack_1bc = param_3;
  cVar2 = (char)local_1b0;
  iVar3 = (int)((ulonglong)local_1b0 >> 0x20);
  plVar6 = (longlong *)&local_1a8;
  if ((char)lVar4 == '\x02') {
    if (cVar2 == '\x02') {
      plVar9 = &local_1b0;
    }
    else {
      plVar9 = &local_1b0;
      if (iVar3 <= param_3) {
        plVar9 = (longlong *)&local_1c0;
      }
      if (iVar3 < param_3) {
        plVar9 = (longlong *)&local_1c0;
      }
    }
LAB_1475c6115:
    local_188 = (undefined **)*plVar6;
    uStack_180 = (undefined **)*plVar9;
  }
  else {
    plVar9 = &local_1b0;
    if (cVar2 == '\x02') {
LAB_1475c60f2:
      if (param_3 < iStack_1a4) {
        plVar6 = (longlong *)&local_1b8;
      }
      else if (param_3 <= iStack_1a4) {
        plVar6 = (longlong *)&local_1b8;
      }
      goto LAB_1475c6115;
    }
    if ((iStack_1a4 <= iVar3) && ((iStack_1a4 != iVar3 || ((char)lVar4 != '\0' && cVar2 != '\0'))))
    {
      plVar9 = &local_1b0;
      if (iVar3 <= param_3) {
        plVar9 = (longlong *)&local_1c0;
      }
      if (iVar3 < param_3) {
        plVar9 = (longlong *)&local_1c0;
      }
      goto LAB_1475c60f2;
    }
    local_188 = (undefined **)CONCAT44(param_3,local_1b8);
    uStack_180 = (undefined **)CONCAT44(param_3,local_1c0);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_188);
LAB_1475c6136:
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475c61c0 FUN_1475c61c0 body=189 status=ok
// SIG undefined FUN_1475c61c0(void)

void FUN_1475c61c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 2;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1475c627e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c627e FUN_1475c627e body=149 status=ok
// SIG undefined FUN_1475c627e(void)

ulonglong FUN_1475c627e(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  uVar2 = (ulonglong)(int)param_1[0x23];
  if ((longlong)uVar2 < 1) {
    uVar5 = 0;
  }
  else {
    plVar1 = param_1 + 0x22;
    piVar3 = (int *)(*plVar1 + 0xc);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    uVar4 = 0;
    do {
      if ((((piVar3[-3] == *param_2) && (piVar3[-2] == param_2[1])) &&
          ((char)piVar3[-1] == (char)param_2[2])) && (*piVar3 == param_2[3])) {
        FUN_14764f804(plVar1);
        FUN_14764f892(plVar1);
        (**(code **)(*param_1 + 0x358))(param_1);
        break;
      }
      uVar4 = uVar4 + 1;
      uVar5 = CONCAT71((int7)(uVar5 >> 8),uVar4 < uVar2);
      piVar3 = piVar3 + 0x114;
    } while (uVar2 != uVar4);
  }
  return uVar5 & 0xffffff01;
}



// FUNCTION 1475c631a FUN_1475c631a body=189 status=ok
// SIG undefined FUN_1475c631a(void)

void FUN_1475c631a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 2;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1475c63d8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c63d8 FUN_1475c63d8 body=137 status=ok
// SIG undefined FUN_1475c63d8(void)

ulonglong FUN_1475c63d8(longlong *param_1,int *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  int *piVar4;
  
  uVar1 = (ulonglong)(int)param_1[0x21];
  if ((longlong)uVar1 < 1) {
    uVar3 = 0;
  }
  else {
    piVar4 = (int *)(param_1[0x20] + 0xc);
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    uVar2 = 0;
    do {
      if ((((piVar4[-3] == *param_2) && (piVar4[-2] == param_2[1])) &&
          ((char)piVar4[-1] == (char)param_2[2])) && (*piVar4 == param_2[3])) {
        FUN_1475c672c();
        (**(code **)(*param_1 + 0x358))(param_1);
        break;
      }
      uVar2 = uVar2 + 1;
      uVar3 = CONCAT71((int7)(uVar3 >> 8),uVar2 < uVar1);
      piVar4 = piVar4 + 0x48;
    } while (uVar1 != uVar2);
  }
  return uVar3 & 0xffffff01;
}



// FUNCTION 1475c6464 FUN_1475c6464 body=91 status=ok
// SIG undefined FUN_1475c6464(void)

undefined8 * FUN_1475c6464(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  FUN_1406ed278(param_1 + 2);
  FUN_1406ed278(param_1 + 0x24);
  FUN_1406ed278(param_1 + 0x46);
  FUN_1406ed278(param_1 + 0x68);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 1475c64c0 FUN_1475c64c0 body=586 status=ok
// SIG undefined FUN_1475c64c0(void)

undefined8 FUN_1475c64c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0x100000000;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x108) * 0x120;
    lVar4 = *(longlong *)(param_1 + 0x100) + 0x10;
    do {
      FUN_140f937a0(&local_58,lVar4);
      lVar4 = lVar4 + 0x120;
      lVar6 = lVar6 + -0x120;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x118) * 0x450;
    lVar6 = *(longlong *)(param_1 + 0x110) + 0x340;
    do {
      FUN_140f937a0(&local_58,lVar6 + -0x330);
      FUN_140f937a0(&local_58,lVar6 + -0x220);
      FUN_140f937a0(&local_58,lVar6 + -0x110);
      FUN_140f937a0(&local_58,lVar6);
      lVar6 = lVar6 + 0x450;
      lVar4 = lVar4 + -0x450;
    } while (lVar4 != 0);
  }
  local_60 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_60[1] = (longlong)&DAT_100000001;
  *local_60 = (longlong)&PTR_FUN_14a492060;
  local_68 = local_60 + 2;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 2;
  if (local_40 == 0) {
    local_60[9] = local_48;
    *(undefined4 *)(local_60 + 7) = local_58;
    *(undefined4 *)((longlong)local_60 + 0x3c) = uStack_54;
    *(undefined4 *)(local_60 + 8) = uStack_50;
    *(undefined4 *)((longlong)local_60 + 0x44) = uStack_4c;
  }
  local_60[10] = local_40;
  local_40 = 0;
  *(undefined4 *)(local_60 + 0xb) = (undefined4)local_38;
  *(undefined4 *)((longlong)local_60 + 0x5c) = local_38._4_4_;
  local_38 = 0x100000000;
  FUN_140aec6f8(&local_68);
  plVar1 = local_60;
  if (local_60 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (plVar5 == (longlong *)0x0) goto LAB_1475c66b5;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1475c667f:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1475c66b5;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (local_60 != plVar5) {
      *(longlong **)(param_1 + 0xe8) = local_60;
      if (plVar5 == (longlong *)0x0) goto LAB_1475c66b5;
      goto LAB_1475c667f;
    }
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1475c66b5;
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1475c66b5:
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c670c FUN_1475c670c body=31 status=ok
// SIG undefined FUN_1475c670c(void)

void FUN_1475c670c(longlong *param_1)

{
  FUN_147574e9a();
                    /* WARNING: Could not recover jumptable at 0x0001475c6724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1);
  return;
}



// FUNCTION 1475c672c FUN_1475c672c body=102 status=ok
// SIG undefined FUN_1475c672c(void)

void FUN_1475c672c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_1404dbc70(lVar1 + (longlong)(int)param_2 * 0x120 + 0x10);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x120);
    memmove(_Dst,(void *)((longlong)_Dst + 0x120),(longlong)(int)(~param_2 + iVar2) * 0x120);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_14764f756(param_1);
  return;
}



// FUNCTION 1475c6792 FUN_1475c6792 body=93 status=ok
// SIG undefined FUN_1475c6792(void)

void FUN_1475c6792(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c3a60;
  if (*(char *)((longlong)param_1 + 0xac) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 1475c67f4 FUN_1475c67f4 body=166 status=ok
// SIG undefined FUN_1475c67f4(void)

void FUN_1475c67f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = FUN_1475545d8(param_4,param_3);
  iVar1 = *(int *)(param_1 + 0x108);
  uVar2 = *(uint *)(param_1 + 0x118);
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      uVar4 = FUN_14755452a(param_4,param_1,iVar5);
      FUN_147554828(param_4,param_2,uVar4,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      uVar4 = FUN_14755452a(param_4,param_1,uVar6 | 0x1000000);
      FUN_147554828(param_4,param_2,uVar4,uVar3);
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  return;
}



// FUNCTION 1475c689e FUN_1475c689e body=4 status=ok
// SIG undefined FUN_1475c689e(void)

void FUN_1475c689e(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 1475c68a6 FUN_1475c68a6 body=758 status=ok
// SIG undefined FUN_1475c68a6(void)

void FUN_1475c68a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0x100000000;
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x118) * 0x118;
    lVar4 = *(longlong *)(param_1 + 0x110) + 8;
    do {
      FUN_140f937a0(&local_58,lVar4);
      lVar4 = lVar4 + 0x118;
      lVar6 = lVar6 + -0x118;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x128) * 0x228;
    lVar4 = *(longlong *)(param_1 + 0x120) + 0x118;
    do {
      FUN_140f937a0(&local_58,lVar4 + -0x110);
      FUN_140f937a0(&local_58,lVar4);
      lVar4 = lVar4 + 0x228;
      lVar6 = lVar6 + -0x228;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x138) * 0x338;
    lVar4 = *(longlong *)(param_1 + 0x130) + 0x228;
    do {
      FUN_140f937a0(&local_58,lVar4 + -0x220);
      FUN_140f937a0(&local_58,lVar4 + -0x110);
      FUN_140f937a0(&local_58,lVar4);
      lVar4 = lVar4 + 0x338;
      lVar6 = lVar6 + -0x338;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x148) * 0x448;
    lVar4 = *(longlong *)(param_1 + 0x140) + 0x338;
    do {
      FUN_140f937a0(&local_58,lVar4 + -0x330);
      FUN_140f937a0(&local_58,lVar4 + -0x220);
      FUN_140f937a0(&local_58,lVar4 + -0x110);
      FUN_140f937a0(&local_58,lVar4);
      lVar4 = lVar4 + 0x448;
      lVar6 = lVar6 + -0x448;
    } while (lVar6 != 0);
  }
  local_60 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_60[1] = (longlong)&DAT_100000001;
  *local_60 = (longlong)&PTR_FUN_14a492060;
  local_68 = local_60 + 2;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 2;
  if (local_40 == 0) {
    local_60[9] = local_48;
    *(undefined4 *)(local_60 + 7) = local_58;
    *(undefined4 *)((longlong)local_60 + 0x3c) = uStack_54;
    *(undefined4 *)(local_60 + 8) = uStack_50;
    *(undefined4 *)((longlong)local_60 + 0x44) = uStack_4c;
  }
  local_60[10] = local_40;
  local_40 = 0;
  *(undefined4 *)(local_60 + 0xb) = (undefined4)local_38;
  *(undefined4 *)((longlong)local_60 + 0x5c) = local_38._4_4_;
  local_38 = 0x100000000;
  FUN_140aec6f8(&local_68);
  plVar1 = local_60;
  if (local_60 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (plVar5 == (longlong *)0x0) goto LAB_1475c6b49;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1475c6b13:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1475c6b49;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (local_60 != plVar5) {
      *(longlong **)(param_1 + 0xe8) = local_60;
      if (plVar5 == (longlong *)0x0) goto LAB_1475c6b49;
      goto LAB_1475c6b13;
    }
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1475c6b49;
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1475c6b49:
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c6b9e FUN_1475c6b9e body=8 status=ok
// SIG undefined FUN_1475c6b9e(void)

longlong FUN_1475c6b9e(longlong param_1)

{
  return param_1 + 0x110;
}



// FUNCTION 1475c6ba6 FUN_1475c6ba6 body=8 status=ok
// SIG undefined FUN_1475c6ba6(void)

longlong FUN_1475c6ba6(longlong param_1)

{
  return param_1 + 0x120;
}



// FUNCTION 1475c6bae FUN_1475c6bae body=8 status=ok
// SIG undefined FUN_1475c6bae(void)

longlong FUN_1475c6bae(longlong param_1)

{
  return param_1 + 0x130;
}



// FUNCTION 1475c6bb6 FUN_1475c6bb6 body=328 status=ok
// SIG undefined FUN_1475c6bb6(void)

void FUN_1475c6bb6(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar2 = (longlong *)FUN_1475b743e(param_1 + -0xf8);
  if (plVar2 == (longlong *)0x0) {
    if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  local_c0 = param_4;
  local_a8 = param_2;
  local_b8 = FUN_14009d2a0();
  local_b0 = FUN_14038fb82();
  if ((byte)(uVar1 >> 0x18) < 4) {
                    /* WARNING: Could not recover jumptable at 0x0001475c6c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_14a4c80a4 + *(int *)(&DAT_14a4c80a4 + (ulonglong)(uVar1 >> 0x18) * 4)))();
    return;
  }
  local_d8 = local_c0;
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + -0xf8,local_a8,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1475c7046 FUN_1475c7046 body=208 status=ok
// SIG undefined FUN_1475c7046(void)

void FUN_1475c7046(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,8);
  FUN_14764fac2(puVar3,param_2);
  *puVar3 = &PTR_FUN_14a4c7460;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c7118 FUN_1475c7118 body=208 status=ok
// SIG undefined FUN_1475c7118(void)

void FUN_1475c7118(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,8);
  FUN_14764fb72(puVar3,param_2);
  *puVar3 = &PTR_FUN_14a4c7480;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c71ea FUN_1475c71ea body=257 status=ok
// SIG undefined FUN_1475c71ea(void)

void FUN_1475c71ea(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_14764fc20(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c72ec FUN_1475c72ec body=631 status=ok
// SIG undefined FUN_1475c72ec(void)

void FUN_1475c72ec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  uVar1 = FUN_1475545d8(param_4,param_3);
  iVar7 = *(int *)(param_1 + 0x118);
  iVar8 = *(int *)(param_1 + 0x128);
  iVar9 = *(int *)(param_1 + 0x138);
  iVar6 = *(int *)(param_1 + 0x148);
  if (0 < iVar7) {
    iVar10 = 0;
    do {
      uVar2 = FUN_14755452a(param_4,param_1,iVar10 >> 0x10);
      FUN_147554828(param_4,param_2,uVar2,uVar1);
      iVar10 = iVar10 + 0x10000;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (0 < iVar8) {
    iVar7 = 0;
    do {
      uVar2 = FUN_14755452a(param_4,param_1,iVar7 >> 0x10 | 0x1000000);
      uVar3 = FUN_14755452a(param_4,param_1,iVar7 >> 0x10 | 0x1010000);
      FUN_147554828(param_4,param_2,uVar2,uVar1);
      FUN_147554828(param_4,param_2,uVar3,uVar1);
      iVar7 = iVar7 + 0x10000;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      uVar11 = iVar7 >> 0x10;
      uVar2 = FUN_14755452a(param_4,param_1,uVar11 | 0x2000000);
      uVar3 = FUN_14755452a(param_4,param_1,uVar11 | 0x2010000);
      uVar4 = FUN_14755452a(param_4,param_1,uVar11 | 0x2020000);
      FUN_147554828(param_4,param_2,uVar2,uVar1);
      FUN_147554828(param_4,param_2,uVar3,uVar1);
      FUN_147554828(param_4,param_2,uVar4,uVar1);
      iVar7 = iVar7 + 0x10000;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (0 < iVar6) {
    iVar7 = 0;
    do {
      uVar11 = iVar7 >> 0x10;
      uVar2 = FUN_14755452a(param_4,param_1,uVar11 | 0x3000000);
      uVar3 = FUN_14755452a(param_4,param_1,uVar11 | 0x3010000);
      uVar4 = FUN_14755452a(param_4,param_1,uVar11 | 0x3020000);
      uVar5 = FUN_14755452a(param_4,param_1,uVar11 | 0x3030000);
      FUN_147554828(param_4,param_2,uVar2,uVar1);
      FUN_147554828(param_4,param_2,uVar3,uVar1);
      FUN_147554828(param_4,param_2,uVar4,uVar1);
      FUN_147554828(param_4,param_2,uVar5,uVar1);
      iVar7 = iVar7 + 0x10000;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 1475c756a FUN_1475c756a body=139 status=ok
// SIG undefined FUN_1475c756a(void)

void FUN_1475c756a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475c75f6(param_1,&local_28);
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



// FUNCTION 1475c75f6 FUN_1475c75f6 body=403 status=ok
// SIG undefined FUN_1475c75f6(void)

undefined8 FUN_1475c75f6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_2b8 [40];
  longlong local_290;
  undefined8 local_288;
  longlong local_280;
  int local_278;
  undefined8 local_270;
  undefined4 *local_268;
  undefined4 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined4 local_248 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  iVar1 = *(int *)(param_1 + 0x108);
  local_290 = param_1;
  local_288 = param_2;
  local_260 = local_268;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x100);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        if ((int)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1) != 0) {
          if (local_258 <= local_260 + 1) {
            FUN_140213274(&local_268,2);
          }
          *local_260 = 0x20002c;
          local_260 = local_260 + 1;
        }
        local_270 = *(undefined8 *)(lVar3 + 0x18);
        FUN_1400021e4(&local_270,&local_280);
        iVar4 = local_278 + -1;
        if (local_278 == 0) {
          iVar4 = 0;
        }
        FUN_1449668a2(&local_268,local_280,iVar4);
        if (local_280 != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  FUN_1475c7840(local_290 + 0x110,&local_268);
  uVar5 = local_288;
  *(undefined2 *)local_260 = 0;
  FUN_140056680(local_288,local_268);
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c778a FUN_1475c778a body=178 status=ok
// SIG undefined FUN_1475c778a(void)

void FUN_1475c778a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1432f4a1a(param_1 + 0x110,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c7840 FUN_1475c7840 body=433 status=ok
// SIG undefined FUN_1475c7840(void)

void FUN_1475c7840(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
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
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_1[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_1;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      puVar6 = (undefined8 *)((longlong)iStack_6c * 0x28 + *local_88);
      puVar2 = (undefined4 *)param_2[1];
      if ((int)((ulonglong)((longlong)puVar2 - *param_2) >> 1) != 0) {
        if ((undefined4 *)param_2[2] <= puVar2 + 1) {
          FUN_140213274(param_2,2);
          puVar2 = (undefined4 *)param_2[1];
        }
        *puVar2 = 0x20002c;
        param_2[1] = (longlong)(puVar2 + 1);
      }
      iVar5 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar5 = 0;
      }
      FUN_1449668a2(param_2,*puVar6,iVar5);
      puVar3 = (undefined2 *)param_2[1];
      if ((undefined2 *)param_2[2] <= puVar3 + 1) {
        FUN_140213274(param_2,1);
        puVar3 = (undefined2 *)param_2[1];
      }
      *puVar3 = 0x20;
      param_2[1] = (longlong)(puVar3 + 1);
      iVar5 = *(int *)(puVar6 + 3) + -1;
      if (*(int *)(puVar6 + 3) == 0) {
        iVar5 = 0;
      }
      FUN_1449668a2(param_2,puVar6[2],iVar5);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_1 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c79f2 FUN_1475c79f2 body=201 status=ok
// SIG undefined FUN_1475c79f2(void)

void FUN_1475c79f2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined2 local_70;
  undefined1 local_6e;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_1 + -0xf8;
  if ((local_68 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_60 = FUN_145b36e16();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  lVar1 = FUN_14009d2a0();
  local_70 = *(undefined2 *)(lVar1 + 0x126);
  local_6e = 0;
  local_78 = &PTR_FUN_14a4995a0;
  lVar1 = FUN_14009d2a0();
  FUN_1461b5e60(&local_78,local_58,*(undefined2 *)(lVar1 + 0xfa),&local_68);
  FUN_1461b5f4e(param_4,local_58);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c7adc FUN_1475c7adc body=88 status=ok
// SIG undefined FUN_1475c7adc(void)

undefined8 * FUN_1475c7adc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14764fcdc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1475c7b4e FUN_1475c7b4e body=7 status=ok
// SIG undefined FUN_1475c7b4e(void)

undefined1 FUN_1475c7b4e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x110);
}



// FUNCTION 1475c7b74 FUN_1475c7b74 body=7 status=ok
// SIG undefined FUN_1475c7b74(void)

undefined1 FUN_1475c7b74(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x112);
}



// FUNCTION 1475c7b9a FUN_1475c7b9a body=7 status=ok
// SIG undefined FUN_1475c7b9a(void)

undefined1 FUN_1475c7b9a(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x113);
}



// FUNCTION 1475c7bbc FUN_1475c7bbc body=7 status=ok
// SIG undefined FUN_1475c7bbc(void)

undefined1 FUN_1475c7bbc(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x111);
}



// FUNCTION 1475c7be4 FUN_1475c7be4 body=187 status=ok
// SIG undefined FUN_1475c7be4(void)

void FUN_1475c7be4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14760d9ba(param_1 + 0x100,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c7ca0 FUN_1475c7ca0 body=149 status=ok
// SIG undefined FUN_1475c7ca0(void)

void FUN_1475c7ca0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x110) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c7d3a FUN_1475c7d3a body=154 status=ok
// SIG undefined FUN_1475c7d3a(void)

void FUN_1475c7d3a(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x112) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c7dda FUN_1475c7dda body=154 status=ok
// SIG undefined FUN_1475c7dda(void)

void FUN_1475c7dda(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x113) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c7e76 FUN_1475c7e76 body=149 status=ok
// SIG undefined FUN_1475c7e76(void)

void FUN_1475c7e76(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x111) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c7f20 FUN_1475c7f20 body=194 status=ok
// SIG undefined FUN_1475c7f20(void)

void FUN_1475c7f20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined2 local_48;
  longlong local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = param_1 + -0xf8;
  if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_1);
  }
  lVar1 = FUN_14038fb82();
  local_48 = *(undefined2 *)(lVar1 + 0xf1a);
  if (DAT_14c950c29 == 1 && param_1 != 0) {
    FUN_1456cec3c(param_1);
  }
  local_38 = 1;
  local_40 = param_1;
  if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  local_30 = 0;
  local_50 = &PTR_FUN_14a4c74c0;
  FUN_1475c7fe4(param_4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c7fe4 FUN_1475c7fe4 body=173 status=ok
// SIG undefined FUN_1475c7fe4(void)

void FUN_1475c7fe4(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  longlong unaff_RSI;
  
  uVar4 = *(undefined2 *)(param_2 + 8);
  cVar2 = *(char *)(param_2 + 0x18);
  if ((cVar2 == '\x01') &&
     (unaff_RSI = *(longlong *)(param_2 + 0x10), (unaff_RSI != 0 & DAT_14c950c29) == 1)) {
    FUN_1456cec3c(unaff_RSI);
  }
  uVar3 = *(undefined1 *)(param_2 + 0x20);
  iVar5 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar5 + 1U) {
    FUN_140561fb4(param_1,iVar5);
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar6 = param_1;
  }
  puVar1 = (undefined8 *)(lVar6 + (longlong)iVar5 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4c74c0;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  puVar1[2] = unaff_RSI;
  *(char *)(puVar1 + 3) = cVar2;
  *(undefined1 *)(puVar1 + 4) = uVar3;
  return;
}



// FUNCTION 1475c8096 FUN_1475c8096 body=320 status=ok
// SIG undefined FUN_1475c8096(void)

undefined8 FUN_1475c8096(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar4 + 2;
  FUN_14764fd70(plVar1,param_1 + 0x100);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 == (longlong *)0x0) goto LAB_1475c818d;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1475c8157:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1475c818d;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (local_30 != plVar4) {
      *(longlong **)(param_1 + 0xe8) = local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_1475c818d;
      goto LAB_1475c8157;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1475c818d;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1475c818d:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c81d8 FUN_1475c81d8 body=23 status=ok
// SIG undefined FUN_1475c81d8(void)

undefined1 FUN_1475c81d8(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1475c81f0 FUN_1475c81f0 body=175 status=ok
// SIG undefined FUN_1475c81f0(void)

void FUN_1475c81f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined2 local_60;
  undefined2 local_58;
  longlong local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0x68) != 0) || (*(char *)(param_1 + 0x88) == '\x01')) {
    lVar1 = FUN_14009d2a0();
    lVar2 = FUN_14038fb82();
    local_60 = *(undefined2 *)(lVar2 + 0x3c);
    local_58 = *(undefined2 *)(lVar1 + 0x90);
    local_48 = 1;
    local_40 = 0;
    local_68 = &PTR_FUN_14a4c74e0;
    local_50 = param_1 + 8;
    local_38 = local_60;
    FUN_1475c82a0(&local_68,param_1 + -0xf8,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c82a0 FUN_1475c82a0 body=547 status=ok
// SIG undefined FUN_1475c82a0(void)

void FUN_1475c82a0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined **local_b0;
  undefined2 local_a8;
  undefined2 local_a0;
  longlong local_98;
  char local_90;
  uint local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 local_74;
  undefined1 local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  piVar1 = *(int **)(param_3 + 8);
  if (piVar1 == (int *)0x0) {
    iVar7 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    iVar7 = *piVar1;
    iVar9 = piVar1[1];
    iVar10 = piVar1[2];
    iVar8 = piVar1[3];
  }
  local_b8 = param_4;
  lVar4 = FUN_14009d2a0();
  FUN_14038fb82();
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar2 != 0) {
    lVar5 = FUN_140bc7f26();
    lVar6 = (longlong)*(int *)(lVar5 + 0x38);
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + lVar6 * 8) == lVar5 + 0x30
       )) {
      if (*(int *)(param_3 + 0x10) == 0) {
        local_a8 = *(undefined2 *)(param_1 + 8);
        local_a0 = *(undefined2 *)(param_1 + 0x10);
        local_90 = *(char *)(param_1 + 0x20);
        if (local_90 == '\x01') {
          lVar6 = *(longlong *)(param_1 + 0x18);
        }
        local_50 = *(undefined1 *)(param_1 + 0x28);
        if (local_90 != '\0') {
          local_98 = lVar6;
        }
        local_88 = CONCAT22(local_88._2_2_,*(undefined2 *)(lVar4 + 0x62));
        local_70 = 1;
        local_84 = *(int *)(lVar2 + 0x100);
        iStack_80 = *(int *)(lVar2 + 0x104);
        iStack_7c = *(int *)(lVar2 + 0x108);
        iStack_78 = *(int *)(lVar2 + 0x10c);
        local_74 = *(undefined4 *)(lVar2 + 0x110);
        local_6c = (uint)CONCAT12((iVar10 != 0 || iVar8 != 0) || (iVar9 != 0 || iVar7 != 0),
                                  *(undefined2 *)(lVar4 + 100));
        local_58 = 1;
        local_b0 = &PTR_FUN_14a4c7500;
        local_68 = iVar7;
        local_64 = iVar9;
        local_60 = iVar10;
        local_5c = iVar8;
        FUN_14764fe68(local_b8);
      }
      else {
        cVar3 = FUN_145e0c77a(param_3);
        if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
        }
      }
      goto LAB_1475c83f1;
    }
  }
  local_70 = *(undefined1 *)(param_1 + 0x28);
  local_a8 = *(undefined2 *)(param_1 + 8);
  local_a0 = *(undefined2 *)(param_1 + 0x10);
  local_90 = *(char *)(param_1 + 0x20);
  if (local_90 == '\x01') {
    local_98 = *(longlong *)(param_1 + 0x18);
  }
  local_88 = (uint)CONCAT12((iVar10 != 0 || iVar8 != 0) || (iVar9 != 0 || iVar7 != 0),
                            *(undefined2 *)(lVar4 + 100));
  local_74 = CONCAT31(local_74._1_3_,1);
  local_b0 = &PTR_FUN_14a4c7540;
  local_84 = iVar7;
  iStack_80 = iVar9;
  iStack_7c = iVar10;
  iStack_78 = iVar8;
  FUN_14764ff3a(local_b8);
LAB_1475c83f1:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c84e8 FUN_1475c84e8 body=23 status=ok
// SIG undefined FUN_1475c84e8(void)

undefined1 FUN_1475c84e8(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1475c8500 FUN_1475c8500 body=238 status=ok
// SIG undefined FUN_1475c8500(void)

void FUN_1475c8500(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined **local_c0;
  undefined2 local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined2 local_90;
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(param_1 + 0x68) != 0) || (*(char *)(param_1 + 0x71) == '\x01')) {
    lVar1 = FUN_14009d2a0();
    lVar2 = FUN_14038fb82();
    local_b8 = *(undefined2 *)(lVar2 + 0x18);
    local_b0 = *(undefined2 *)(lVar1 + 0x70);
    local_a0 = 1;
    local_98 = 0;
    local_c0 = &PTR_FUN_14a4c7280;
    local_a8 = param_1 + 8;
    local_90 = local_b8;
    local_c8 = FUN_145a68588();
    FUN_1410945d6(&local_c0,local_88,*(undefined2 *)(lVar1 + 0xf6));
    FUN_141094704(local_88,param_1 + -0xf8,param_3,param_4);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475c85f4 FUN_1475c85f4 body=763 status=ok
// SIG undefined FUN_1475c85f4(void)

void FUN_1475c85f4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_168 [40];
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong local_120;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  ulonglong local_fc;
  undefined4 local_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_c0 [32];
  undefined1 local_a0 [40];
  undefined5 uStack_78;
  undefined3 local_73;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 local_59;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(longlong *)(param_1 + 8) == 0) goto LAB_1475c88a6;
  uVar8 = FUN_141133cd0();
  lVar9 = FUN_144a78ede(param_1 + -0xf8,uVar8);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x548) + 8);
  lVar13 = (ulonglong)*(ushort *)(param_3 + 0x30) * 0x128;
  lVar1 = lVar13 + lVar2;
  local_c8 = *(undefined8 *)(lVar1 + 0x88);
  local_e8 = *(undefined4 *)(lVar1 + 0x68);
  uStack_e4._0_4_ = *(uint *)(lVar1 + 0x6c);
  uStack_e4._4_4_ = *(undefined4 *)(lVar1 + 0x70);
  uStack_dc = *(undefined4 *)(lVar1 + 0x74);
  local_d8._0_4_ = *(uint *)(lVar1 + 0x78);
  local_d8._4_4_ = *(undefined4 *)(lVar1 + 0x7c);
  uStack_d0 = *(undefined4 *)(lVar1 + 0x80);
  uStack_cc = *(undefined4 *)(lVar1 + 0x84);
  local_140 = param_3;
  FUN_144a3f8b4(local_c0);
  lVar1 = lVar13 + lVar2;
  FUN_144b1f2a6(local_a0,lVar1 + 0xb0);
  uVar12 = *(ulonglong *)(lVar1 + 0xdd);
  uStack_70 = (undefined4)(uVar12 >> 0x18);
  uStack_6c = (undefined1)(uVar12 >> 0x38);
  uStack_78 = (undefined5)*(undefined8 *)(lVar1 + 0xd8);
  local_73 = (undefined3)((ulonglong)*(undefined8 *)(lVar1 + 0xd8) >> 0x28);
  if ((uVar12 & 0x200000000000000) == 0) {
    if ((int)local_c8 == 0) {
      bVar4 = *(byte *)(lVar9 + 0x108) & 1;
joined_r0x0001475c86fa:
      if (bVar4 == 0) goto LAB_1475c8899;
    }
    else if ((int)local_c8 == 1) {
      bVar4 = *(byte *)(lVar9 + 0x108) & 2;
      goto joined_r0x0001475c86fa;
    }
    local_138 = *(undefined4 *)(param_1 + -0x60);
    uStack_134 = *(undefined4 *)(param_1 + -0x5c);
    uStack_130 = *(undefined4 *)(param_1 + -0x58);
    uStack_12c = *(undefined4 *)(param_1 + -0x54);
    if (SBORROW4(0,local_c8._4_4_)) {
      puVar10 = &uStack_e4;
      if ((int)local_c8 == 0) {
        puVar10 = &local_d8;
      }
      local_58 = *puVar10;
    }
    else {
      local_58 = (ulonglong)local_c8._4_4_;
    }
    cVar6 = FUN_1400a246c(&local_138,&local_58);
    if (cVar6 != '\0') {
      if (*(char *)(lVar9 + 0x10c) == '\x02') {
        uVar8 = FUN_1475c8954(param_2);
      }
      else if (*(char *)(lVar9 + 0x10c) == '\0') {
        uVar8 = FUN_1475c88f0();
      }
      else {
        uVar8 = FUN_141133c6c();
      }
      FUN_14087ad3e(local_c0,&local_138);
      if (SBORROW4(0,local_c8._4_4_)) {
        puVar11 = (uint *)&uStack_e4;
        if ((int)local_c8 == 0) {
          puVar11 = (uint *)&local_d8;
        }
        puVar5 = &uStack_e4;
        if ((int)local_c8 == 0) {
          puVar5 = &local_d8;
        }
        uVar12 = (ulonglong)*(uint *)((longlong)puVar5 + 4) << 0x20;
        uVar7 = *puVar11;
      }
      else {
        uVar12 = 0;
        uVar7 = local_c8._4_4_;
      }
      local_59 = 0xf;
      FUN_1405bad34(&local_138,&local_58,uVar7 | uVar12);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      if (local_50 == '\x01') {
        FUN_141133e44(&local_138,param_1 + 8);
        puVar3 = *(undefined4 **)(local_140 + 8);
        if (puVar3 == (undefined4 *)0x0) {
          local_110 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
        }
        else {
          local_110 = *puVar3;
          uStack_10c = puVar3[1];
          uStack_108 = puVar3[2];
          uStack_104 = puVar3[3];
        }
        local_100 = *(undefined4 *)(lVar2 + lVar13 + 0x110);
        local_fc = local_58;
        FUN_141133db6(uVar8,*(undefined4 *)(lVar2 + lVar13 + 0x122),&local_138);
        *(undefined8 *)(param_2 + 0x278) = *(undefined8 *)(param_2 + 0x270);
        *(undefined1 *)(param_2 + 0x289) = 1;
        if (local_120 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1475c8899:
  FUN_144adeafa(&local_e8);
LAB_1475c88a6:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c88f0 FUN_1475c88f0 body=98 status=ok
// SIG undefined FUN_1475c88f0(void)

void FUN_1475c88f0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b35e8c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c8954 FUN_1475c8954 body=98 status=ok
// SIG undefined FUN_1475c8954(void)

void FUN_1475c8954(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b35f76();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c89b8 FUN_1475c89b8 body=62 status=ok
// SIG undefined FUN_1475c89b8(void)

undefined4 FUN_1475c89b8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1475545d8(param_4,param_3);
  FUN_147554a22(param_4,param_2,param_1 + -0xf8,0,uVar1);
  return 1;
}



// FUNCTION 1475c89fa FUN_1475c89fa body=63 status=ok
// SIG undefined FUN_1475c89fa(void)

longlong FUN_1475c89fa(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140081d40(param_1,0);
  if (lVar1 != 0) {
    lVar2 = FUN_1446f4bba();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1475c8a3a FUN_1475c8a3a body=311 status=ok
// SIG undefined FUN_1475c8a3a(void)

void FUN_1475c8a3a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [18];
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_1475c89fa();
  local_38 = 0;
  FUN_14485c47a(&local_38);
  lVar1 = local_38;
  (**(code **)(*param_2 + 0x40))(param_2);
  param_2[1] = lVar1;
  (**(code **)*param_2)(param_2);
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  if (((lVar2 != 0) &&
      (0 < (int)((*(int *)(lVar2 + 0x58) + *(int *)(lVar2 + 0x5c)) - 1U & -*(int *)(lVar2 + 0x5c))))
     && (*(int *)(param_1 + 0x38) != 0)) {
    memset(local_d8,0,0x90);
    FUN_144869430(local_d8);
    local_48 = 0;
    local_d8[0] = &PTR_FUN_14a4c42b0;
    local_40 = param_1 + 0x30;
    FUN_140996f94(local_d8,1);
    FUN_14486d1ee(local_d8,&DAT_14a4b9c58);
    FUN_1447a7b14(local_d8,*(undefined8 *)(param_1 + 0x20));
    FUN_1447a7b10(local_d8,*(undefined4 *)(param_1 + 0x28));
    FUN_1475c8b72(local_d8,lVar2,uVar3);
    FUN_144a7fc42(local_d8);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c8b72 FUN_1475c8b72 body=437 status=ok
// SIG undefined FUN_1475c8b72(void)

void FUN_1475c8b72(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  longlong local_48 [2];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (7 < *(int *)(param_1[0x13] + 8)) {
    local_34 = 0;
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    if (local_34 == -0x5e4d3c2c) {
      local_38 = 0;
      puVar2 = (ulonglong *)param_1[1];
      piVar1 = (int *)*puVar2 + 1;
      if ((int *)puVar2[1] < piVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_38,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_38);
        }
      }
      else {
        local_38 = *(int *)*puVar2;
        *puVar2 = (ulonglong)piVar1;
      }
      lVar3 = param_1[0x12];
      param_1[0x12] = (longlong)local_38;
      local_48[0] = 0;
      local_48[1] = 0;
      FUN_14682562a(local_48,param_1,3);
      FUN_14072bd0a(param_1,local_48);
      param_1[0x12] = lVar3;
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1475c8c7c;
    }
  }
  FUN_1446ddc76(&local_50,"EventParameter",1);
  FUN_1414dd3d2(param_1,&DAT_14a4b9c58,0,local_50);
  param_1[0x12] = 0;
LAB_1475c8c7c:
  local_68 = 0;
  uStack_60 = 0;
  FUN_14496b17c(param_2,param_1,param_3,param_2);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475c8d28 FUN_1475c8d28 body=269 status=ok
// SIG undefined FUN_1475c8d28(void)

void FUN_1475c8d28(undefined4 *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e31250);
    if (iVar1 < 8) {
      local_28 = 0;
      (**(code **)(*param_2 + 0x150))(param_2,&local_28);
      FUN_1400bbfc4(&local_48,local_28);
      *param_1 = local_48;
      param_1[1] = uStack_44;
      param_1[2] = uStack_40;
      param_1[3] = uStack_3c;
      if (&local_48 == param_1) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 4) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 4) = local_38;
        local_38 = 0;
        param_1[6] = local_30;
        param_1[7] = local_2c;
      }
      goto LAB_1475c8de6;
    }
  }
  (**(code **)(*param_2 + 0x128))(param_2,param_1);
LAB_1475c8de6:
  FUN_140077068(param_2,param_1 + 0xc);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(longlong *)(param_1 + 8) = param_2[8];
    param_1[10] = (int)param_2[9];
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c8e36 FUN_1475c8e36 body=88 status=ok
// SIG undefined FUN_1475c8e36(void)

void FUN_1475c8e36(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x70;
  local_18 = param_1 + 0x60;
  local_30 = param_1 + 0x50;
  local_20 = param_1;
  FUN_147523910(&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c8e90 FUN_1475c8e90 body=110 status=ok
// SIG undefined FUN_1475c8e90(void)

void FUN_1475c8e90(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_147523b62(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c8f00 FUN_1475c8f00 body=110 status=ok
// SIG undefined FUN_1475c8f00(void)

void FUN_1475c8f00(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_1475c8f70(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c8f70 FUN_1475c8f70 body=90 status=ok
// SIG undefined FUN_1475c8f70(void)

void FUN_1475c8f70(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_1476506e6(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1475c8fca FUN_1475c8fca body=110 status=ok
// SIG undefined FUN_1475c8fca(void)

void FUN_1475c8fca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_1475c903a(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c903a FUN_1475c903a body=283 status=ok
// SIG undefined FUN_1475c903a(void)

void FUN_1475c903a(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  undefined8 local_90;
  undefined1 local_88 [16];
  longlong local_78;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar3 * 4));
      if (iVar1 == -1) {
        FUN_147a3fc60(&local_90);
        *(undefined4 *)(*param_3 + lVar3 * 4) = (undefined4)local_90;
      }
      else {
        local_90 = *(undefined8 *)(*(longlong *)param_1[3] + (longlong)iVar1 * 0x48);
        FUN_1475b0e08(local_88);
        uVar2 = FUN_1475c9724(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4),
                              &local_90);
        FUN_147524308(param_1,&local_94,uVar2);
        *(undefined4 *)(*param_3 + lVar3 * 4) = local_94;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475c9156 FUN_1475c9156 body=147 status=ok
// SIG undefined FUN_1475c9156(void)

void FUN_1475c9156(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1 + 0x70;
  local_30 = param_1 + 0x60;
  local_48 = param_1 + 0x50;
  lVar2 = param_2[1];
  local_38 = param_1;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(&local_48,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_147650914(&local_48,iVar3);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475c91ea FUN_1475c91ea body=86 status=ok
// SIG undefined FUN_1475c91ea(void)

void FUN_1475c91ea(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_18 = param_1;
  FUN_1475c9242(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c9242 FUN_1475c9242 body=353 status=ok
// SIG undefined FUN_1475c9242(void)

void FUN_1475c9242(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_60) {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar3 = local_78;
      uVar4 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_1475c92cd;
      }
      else if (iVar2 < param_2) {
LAB_1475c92cd:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar3 = local_88;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    lVar6 = (longlong)(int)uStack_80;
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        iVar5 = FUN_14752433e(param_1,*(undefined4 *)(lVar3 + lVar7 * 4));
        if (iVar5 != -1) {
          FUN_147650914(param_1,iVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475c93a4 FUN_1475c93a4 body=86 status=ok
// SIG undefined FUN_1475c93a4(void)

void FUN_1475c93a4(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_18 = param_1;
  FUN_147524082(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c9434 FUN_1475c9434 body=103 status=ok
// SIG undefined FUN_1475c9434(void)

void FUN_1475c9434(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  FUN_145c3202e(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_147650a40(param_1 + 0x60);
  }
  FUN_147a408e2(param_1 + 0x70);
  return;
}



// FUNCTION 1475c949c FUN_1475c949c body=86 status=ok
// SIG undefined FUN_1475c949c(void)

void FUN_1475c949c(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_18 = param_1;
  FUN_1475243aa(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c94f4 FUN_1475c94f4 body=97 status=ok
// SIG undefined FUN_1475c94f4(void)

undefined8 FUN_1475c94f4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x70;
  local_18 = param_1 + 0x60;
  local_30 = param_1 + 0x50;
  local_20 = param_1;
  FUN_147524308(&local_30,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c9556 FUN_1475c9556 body=86 status=ok
// SIG undefined FUN_1475c9556(void)

void FUN_1475c9556(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_18 = param_1;
  FUN_14752433e(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c95ae FUN_1475c95ae body=373 status=ok
// SIG undefined FUN_1475c95ae(void)

void FUN_1475c95ae(longlong param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x168) != 0) {
    local_70 = param_1 + 0x170;
    local_78 = param_1 + 0x1e0;
    local_68 = param_1 + 0x1d0;
    local_80 = param_1 + 0x1c0;
    FUN_145cba7c3(&local_88);
    if ((longlong)*(int *)(param_1 + 0x168) != 0) {
      pfVar3 = *(float **)(param_1 + 0x160);
      pfVar1 = pfVar3 + (longlong)*(int *)(param_1 + 0x168) * 3;
      do {
        uVar2 = *(undefined8 *)(pfVar3 + 1);
        FUN_147572fa9(&local_8c,param_1,local_88,(double)*pfVar3);
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_b0 = DAT_14c89603c;
        local_a8 = 1;
        local_a0 = 0;
        uStack_98 = 0;
        local_d8 = uVar2;
        FUN_1475c9724(&local_80,local_8c,&local_d8);
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        pfVar3 = pfVar3 + 3;
      } while (pfVar3 != pfVar1);
    }
    FUN_1475827d6(param_1);
  }
  FUN_140836bcc(param_1);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c9724 FUN_1475c9724 body=215 status=ok
// SIG undefined FUN_1475c9724(void)

ulonglong FUN_1475c9724(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_147525f8a();
  FUN_147650792(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 8) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 8) + lVar3) != 0)) {
        local_38 = (ulonglong *)0x0;
        uStack_30 = 1;
        FUN_14753e66a(&local_38,0);
        *local_38 = (ulonglong)uVar2 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_38);
        if (local_38 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x10) * 0x10 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c9800 FUN_1475c9800 body=71 status=ok
// SIG undefined FUN_1475c9800(void)

void FUN_1475c9800(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14a4ba098);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e31250);
  FUN_141001072(param_1,plVar1);
  return;
}



// FUNCTION 1475c984c FUN_1475c984c body=191 status=ok
// SIG undefined FUN_1475c984c(void)

undefined8 FUN_1475c984c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_1475545d8(param_4,param_3);
  lVar3 = (longlong)*(int *)(param_1 + 0x60);
  if (0 < lVar3) {
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    iVar5 = 0;
    do {
      cVar1 = FUN_1400a246c(param_2,puVar4);
      if (cVar1 != '\0') {
        local_58[0] = 1;
        local_54 = *puVar4;
        local_50 = 1;
        local_68 = uVar2;
        local_4c = local_54;
        FUN_147554a22(param_4,local_58,param_1 + -0xf8,iVar5);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c991c FUN_1475c991c body=206 status=ok
// SIG undefined FUN_1475c991c(void)

undefined8 FUN_1475c991c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475c99eb(&local_30,*(undefined8 *)(param_1 + 0x218),param_1 + 0x108);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0xe0) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0xe8) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_1475c99ca;
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
  plVar3 = local_28;
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
      }
    }
  }
LAB_1475c99ca:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1475c99eb FUN_1475c99eb body=354 status=ok
// SIG undefined FUN_1475c99eb(void)

longlong * FUN_1475c99eb(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_28 = 0x100000000;
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_1475331b0(param_2,0);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2c8))(plVar3,0,&local_48);
      goto LAB_1475c9a56;
    }
  }
  FUN_140f937a0(&local_48,param_3);
LAB_1475c9a56:
  local_50 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14a492060;
  local_58 = local_50 + 2;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 2;
  if (local_30 == 0) {
    local_50[9] = local_38;
    *(undefined4 *)(local_50 + 7) = local_48;
    *(undefined4 *)((longlong)local_50 + 0x3c) = uStack_44;
    *(undefined4 *)(local_50 + 8) = uStack_40;
    *(undefined4 *)((longlong)local_50 + 0x44) = uStack_3c;
  }
  local_50[10] = local_30;
  local_30 = 0;
  *(undefined4 *)(local_50 + 0xb) = (undefined4)local_28;
  *(undefined4 *)((longlong)local_50 + 0x5c) = local_28._4_4_;
  local_28 = 0x100000000;
  FUN_140aec6f8(&local_58);
  plVar3 = local_50;
  *param_1 = (longlong)local_58;
  param_1[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
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
  }
  FUN_1404dbc0c(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c9b4e FUN_1475c9b4e body=23 status=ok
// SIG undefined FUN_1475c9b4e(void)

undefined1 FUN_1475c9b4e(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1475c9b80 FUN_1475c9b80 body=72 status=ok
// SIG undefined FUN_1475c9b80(void)

void FUN_1475c9b80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + -0x20) = 0;
  plVar3 = *(longlong **)(param_1 + -0x18);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + -0x18) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001475c9bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1475c9bcc FUN_1475c9bcc body=23 status=ok
// SIG undefined FUN_1475c9bcc(void)

undefined1 FUN_1475c9bcc(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1475c9c1e FUN_1475c9c1e body=7 status=ok
// SIG undefined FUN_1475c9c1e(void)

undefined1 FUN_1475c9c1e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x100);
}



// FUNCTION 1475c9c26 FUN_1475c9c26 body=187 status=ok
// SIG undefined FUN_1475c9c26(void)

void FUN_1475c9c26(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1406fa324(param_1 + 0x108,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c9ce2 FUN_1475c9ce2 body=149 status=ok
// SIG undefined FUN_1475c9ce2(void)

void FUN_1475c9ce2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x100) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c9d7c FUN_1475c9d7c body=194 status=ok
// SIG undefined FUN_1475c9d7c(void)

void FUN_1475c9d7c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined2 local_48;
  longlong local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = param_1 + -0xf8;
  if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_1);
  }
  lVar1 = FUN_14038fb82();
  local_48 = *(undefined2 *)(lVar1 + 0xf18);
  if (DAT_14c950c29 == 1 && param_1 != 0) {
    FUN_1456cec3c(param_1);
  }
  local_38 = 1;
  local_40 = param_1;
  if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  local_30 = 0;
  local_50 = &PTR_FUN_14a4c7780;
  FUN_1475c9e40(param_4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475c9e40 FUN_1475c9e40 body=173 status=ok
// SIG undefined FUN_1475c9e40(void)

void FUN_1475c9e40(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  longlong unaff_RSI;
  
  uVar4 = *(undefined2 *)(param_2 + 8);
  cVar2 = *(char *)(param_2 + 0x18);
  if ((cVar2 == '\x01') &&
     (unaff_RSI = *(longlong *)(param_2 + 0x10), (unaff_RSI != 0 & DAT_14c950c29) == 1)) {
    FUN_1456cec3c(unaff_RSI);
  }
  uVar3 = *(undefined1 *)(param_2 + 0x20);
  iVar5 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar5 + 1U) {
    FUN_140561fb4(param_1,iVar5);
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar6 = param_1;
  }
  puVar1 = (undefined8 *)(lVar6 + (longlong)iVar5 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4c7780;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  puVar1[2] = unaff_RSI;
  *(char *)(puVar1 + 3) = cVar2;
  *(undefined1 *)(puVar1 + 4) = uVar3;
  return;
}



// FUNCTION 1475c9ef2 FUN_1475c9ef2 body=23 status=ok
// SIG undefined FUN_1475c9ef2(void)

undefined1 FUN_1475c9ef2(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1475c9f14 FUN_1475c9f14 body=310 status=ok
// SIG undefined FUN_1475c9f14(void)

void FUN_1475c9f14(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475ca04c(param_1,local_20,local_24,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ca04c FUN_1475ca04c body=775 status=ok
// SIG undefined FUN_1475ca04c(void)

void FUN_1475ca04c(longlong *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_198 [40];
  undefined4 local_170;
  int iStack_16c;
  undefined4 local_168;
  int iStack_164;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined2 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar3 = param_1[0x20];
  iVar2 = (int)param_1[0x21];
  lVar8 = (longlong)iVar2;
  if (lVar8 != 0) {
    plVar7 = (longlong *)(lVar3 + 8);
    lVar6 = lVar8 * 0x110;
    do {
      if (plVar7[-1] == param_2) {
        if (plVar7 != (longlong *)0x0) goto LAB_1475ca1d3;
        break;
      }
      plVar7 = plVar7 + 0x22;
      lVar6 = lVar6 + -0x110;
    } while (lVar6 != 0);
  }
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 2;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0x200000000;
  local_114 = 0;
  uStack_10c = 0;
  local_104 = 0;
  local_100 = 2;
  local_148 = &PTR_FUN_14a46e9c0;
  local_f8 = 0x404;
  local_a8 = 0;
  local_a0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_70 = 0;
  local_68 = 0;
  local_84 = 0;
  local_94 = 0;
  uStack_8c = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  *(uint *)(param_1 + 0x21) = iVar2 + 1U;
  local_150 = param_2;
  if (*(uint *)((longlong)param_1 + 0x10c) < iVar2 + 1U) {
    FUN_1476523f8(param_1 + 0x20,iVar2);
    lVar3 = param_1[0x20];
  }
  plVar7 = (longlong *)(lVar3 + lVar8 * 0x110);
  *plVar7 = param_2;
  FUN_14764a36a(plVar7 + 1,&local_148);
  FUN_140bb7e7c(&local_148);
  plVar7 = (longlong *)(param_1[0x20] + lVar8 * 0x110 + 8);
  (**(code **)(*param_1 + 0x368))(param_1);
LAB_1475ca1d3:
  (**(code **)(*plVar7 + 0x90))(plVar7,&local_150);
  FUN_147524c12(&local_150,&local_158,param_3,param_4);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 == '\0') goto LAB_1475ca2d9;
  local_158 = param_1[0x13];
  local_160 = param_1[0x14];
  local_168 = CONCAT31(local_168._1_3_,1);
  iStack_164 = param_3;
  local_170 = CONCAT31(local_170._1_3_,1);
  iStack_16c = param_3;
  cVar1 = (char)local_160;
  iVar2 = (int)((ulonglong)local_160 >> 0x20);
  plVar7 = &local_158;
  if ((char)local_158 == '\x02') {
    if (cVar1 == '\x02') {
      plVar4 = &local_160;
    }
    else {
      plVar4 = &local_160;
      if (iVar2 <= param_3) {
        plVar4 = (longlong *)&local_170;
      }
      if (iVar2 < param_3) {
        plVar4 = (longlong *)&local_170;
      }
    }
LAB_1475ca2b8:
    local_150 = *plVar7;
    local_148 = (undefined **)*plVar4;
  }
  else {
    iVar5 = (int)((ulonglong)local_158 >> 0x20);
    if (cVar1 == '\x02') {
      plVar4 = &local_160;
LAB_1475ca299:
      if (param_3 < iVar5) {
        plVar7 = (longlong *)&local_168;
      }
      else if (param_3 <= iVar5) {
        plVar7 = (longlong *)&local_168;
      }
      goto LAB_1475ca2b8;
    }
    if ((iVar5 <= iVar2) && ((iVar5 != iVar2 || ((char)local_158 != '\0' && cVar1 != '\0')))) {
      plVar4 = &local_160;
      if (iVar2 <= param_3) {
        plVar4 = (longlong *)&local_170;
      }
      if (iVar2 < param_3) {
        plVar4 = (longlong *)&local_170;
      }
      goto LAB_1475ca299;
    }
    local_150 = CONCAT44(param_3,local_168);
    local_148 = (undefined **)CONCAT44(param_3,local_170);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_150);
LAB_1475ca2d9:
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ca354 FUN_1475ca354 body=307 status=ok
// SIG undefined FUN_1475ca354(void)

void FUN_1475ca354(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34;
  uStack_44 = uStack_30;
  uStack_40 = uStack_2c;
  uStack_3c = uStack_28;
  FUN_1475ca488(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ca488 FUN_1475ca488 body=950 status=ok
// SIG undefined FUN_1475ca488(void)

void FUN_1475ca488(longlong *param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_508 [40];
  undefined4 local_4e0;
  int iStack_4dc;
  undefined4 local_4d8;
  int iStack_4d4;
  longlong local_4d0;
  undefined8 local_4c8;
  undefined4 uStack_4c0;
  undefined8 uStack_4bc;
  undefined8 local_4b4;
  longlong *local_4a8;
  longlong *local_4a0;
  longlong *local_498;
  longlong *local_490;
  undefined1 local_390 [272];
  undefined1 local_280 [272];
  undefined1 local_170 [272];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_508;
  if ((longlong)(int)param_1[0x29] != 0) {
    plVar5 = (longlong *)param_1[0x28];
    lVar3 = (longlong)(int)param_1[0x29] * 0x448;
    do {
      if (*plVar5 == param_2) {
        if (plVar5 != (longlong *)0x0) goto LAB_1475ca55f;
        break;
      }
      plVar5 = plVar5 + 0x89;
      lVar3 = lVar3 + -0x448;
    } while (lVar3 != 0);
  }
  FUN_1475b6be6(&local_4a8);
  iVar2 = (int)param_1[0x29];
  *(uint *)(param_1 + 0x29) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x14c) < iVar2 + 1U) {
    FUN_1476525b8(param_1 + 0x28,iVar2);
  }
  FUN_14761374a(param_1[0x28] + (longlong)iVar2 * 0x448,&local_4a8);
  FUN_1404dbc70(local_170);
  FUN_1404dbc70(local_280);
  FUN_1404dbc70(local_390);
  FUN_1404dbc70(&local_4a0);
  plVar5 = (longlong *)((longlong)iVar2 * 0x448 + param_1[0x28]);
  (**(code **)(*param_1 + 0x368))(param_1);
LAB_1475ca55f:
  local_498 = plVar5 + 1;
  local_4a0 = plVar5 + 0x11;
  local_490 = plVar5 + 0xe;
  local_4a8 = plVar5 + 0xc;
  local_4c8._0_4_ = *param_4;
  local_4c8._4_4_ = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  local_4b4 = 0x200000000;
  FUN_1475b9f0a(&local_4a8,&local_4d0,param_3,&local_4c8);
  local_498 = plVar5 + 0x23;
  local_4a0 = plVar5 + 0x33;
  local_490 = plVar5 + 0x30;
  local_4a8 = plVar5 + 0x2e;
  local_4c8._0_4_ = param_4[1];
  local_4c8._4_4_ = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  local_4b4 = 0x200000000;
  FUN_1475b9f0a(&local_4a8,&local_4d0,param_3,&local_4c8);
  local_498 = plVar5 + 0x45;
  local_4a0 = plVar5 + 0x55;
  local_490 = plVar5 + 0x52;
  local_4a8 = plVar5 + 0x50;
  local_4c8._0_4_ = param_4[2];
  local_4c8._4_4_ = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  local_4b4 = 0x200000000;
  FUN_1475b9f0a(&local_4a8,&local_4d0,param_3,&local_4c8);
  local_498 = plVar5 + 0x67;
  local_4a0 = plVar5 + 0x77;
  local_490 = plVar5 + 0x74;
  local_4a8 = plVar5 + 0x72;
  local_4c8._0_4_ = param_4[3];
  local_4c8._4_4_ = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  local_4b4 = 0x200000000;
  FUN_1475b9f0a(&local_4a8,&local_4d0,param_3,&local_4c8);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 == '\0') goto LAB_1475ca7bb;
  lVar3 = param_1[0x13];
  local_4c8._0_4_ = (undefined4)lVar3;
  local_4c8._4_4_ = (int)((ulonglong)lVar3 >> 0x20);
  local_4d0 = param_1[0x14];
  local_4d8 = CONCAT31(local_4d8._1_3_,1);
  iStack_4d4 = param_3;
  local_4e0 = CONCAT31(local_4e0._1_3_,1);
  iStack_4dc = param_3;
  cVar1 = (char)local_4d0;
  iVar2 = (int)((ulonglong)local_4d0 >> 0x20);
  puVar4 = &local_4c8;
  if ((char)lVar3 == '\x02') {
    if (cVar1 == '\x02') {
      local_4a0 = &local_4d0;
    }
    else {
      local_4a0 = &local_4d0;
      if (iVar2 <= param_3) {
        local_4a0 = (longlong *)&local_4e0;
      }
      if (iVar2 < param_3) {
        local_4a0 = (longlong *)&local_4e0;
      }
    }
LAB_1475ca79a:
    local_4a8 = (longlong *)*puVar4;
    local_4a0 = (longlong *)*local_4a0;
  }
  else {
    local_4a0 = &local_4d0;
    if (cVar1 == '\x02') {
LAB_1475ca777:
      if (param_3 < local_4c8._4_4_) {
        puVar4 = (undefined8 *)&local_4d8;
      }
      else if (param_3 <= local_4c8._4_4_) {
        puVar4 = (undefined8 *)&local_4d8;
      }
      goto LAB_1475ca79a;
    }
    if ((local_4c8._4_4_ <= iVar2) &&
       ((local_4c8._4_4_ != iVar2 || ((char)lVar3 != '\0' && cVar1 != '\0')))) {
      local_4a0 = &local_4d0;
      if (iVar2 <= param_3) {
        local_4a0 = (longlong *)&local_4e0;
      }
      if (iVar2 < param_3) {
        local_4a0 = (longlong *)&local_4e0;
      }
      goto LAB_1475ca777;
    }
    local_4a8 = (longlong *)CONCAT44(param_3,local_4d8);
    local_4a0 = (longlong *)CONCAT44(param_3,local_4e0);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_4a8);
LAB_1475ca7bb:
  if ((local_60 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ca840 FUN_1475ca840 body=307 status=ok
// SIG undefined FUN_1475ca840(void)

void FUN_1475ca840(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475ca974(param_1,local_20,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ca974 FUN_1475ca974 body=814 status=ok
// SIG undefined FUN_1475ca974(void)

void FUN_1475ca974(longlong *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_1d8 [40];
  undefined4 local_1b0;
  int iStack_1ac;
  undefined4 local_1a8;
  int iStack_1a4;
  longlong local_1a0;
  undefined4 local_198;
  int iStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined8 local_184;
  longlong local_178;
  undefined **local_170;
  longlong local_168;
  longlong lStack_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  undefined5 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar3 = param_1[0x22];
  iVar2 = (int)param_1[0x23];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar8 = lVar3 + 8;
    lVar4 = lVar6 * 0x118;
    do {
      if (*(longlong *)(lVar8 + -8) == param_2) {
        if (lVar8 != 0) goto LAB_1475caaf9;
        break;
      }
      lVar8 = lVar8 + 0x118;
      lVar4 = lVar4 + -0x118;
    } while (lVar4 != 0);
  }
  local_168 = 0;
  lStack_160 = 0;
  local_158 = 2;
  local_154 = 0;
  uStack_14c = 0;
  local_144 = 0x200000000;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  local_128 = 2;
  local_170 = &PTR_FUN_14a46ea60;
  local_120 = 0x404;
  local_d0 = 0;
  local_c8 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_fb = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_98 = 0;
  local_90 = 0;
  local_ac = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0x10000ea60;
  *(uint *)(param_1 + 0x23) = iVar2 + 1U;
  local_178 = param_2;
  if (*(uint *)((longlong)param_1 + 0x11c) < iVar2 + 1U) {
    FUN_147652364(param_1 + 0x22,iVar2);
    lVar3 = param_1[0x22];
  }
  plVar5 = (longlong *)(lVar3 + lVar6 * 0x118);
  *plVar5 = param_2;
  FUN_147613664(plVar5 + 1,&local_170);
  FUN_1404dbc70(&local_170);
  lVar8 = param_1[0x22] + lVar6 * 0x118 + 8;
  (**(code **)(*param_1 + 0x368))(param_1);
LAB_1475caaf9:
  local_170 = (undefined **)(lVar8 + 0x80);
  lStack_160 = lVar8 + 0x68;
  local_178 = lVar8 + 0x58;
  iStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  local_184 = 0x200000000;
  local_198 = param_4;
  local_168 = lVar8;
  FUN_1475b9f0a(&local_178,&local_1a0,param_3,&local_198);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 == '\0') goto LAB_1475cac1f;
  lVar3 = param_1[0x13];
  local_198 = (undefined4)lVar3;
  iStack_194 = (int)((ulonglong)lVar3 >> 0x20);
  local_1a0 = param_1[0x14];
  local_1a8 = CONCAT31(local_1a8._1_3_,1);
  iStack_1a4 = param_3;
  local_1b0 = CONCAT31(local_1b0._1_3_,1);
  iStack_1ac = param_3;
  cVar1 = (char)local_1a0;
  iVar2 = (int)((ulonglong)local_1a0 >> 0x20);
  plVar5 = (longlong *)&local_198;
  if ((char)lVar3 == '\x02') {
    if (cVar1 == '\x02') {
      plVar7 = &local_1a0;
    }
    else {
      plVar7 = &local_1a0;
      if (iVar2 <= param_3) {
        plVar7 = (longlong *)&local_1b0;
      }
      if (iVar2 < param_3) {
        plVar7 = (longlong *)&local_1b0;
      }
    }
LAB_1475cabfe:
    local_178 = *plVar5;
    local_170 = (undefined **)*plVar7;
  }
  else {
    plVar7 = &local_1a0;
    if (cVar1 == '\x02') {
LAB_1475cabdb:
      if (param_3 < iStack_194) {
        plVar5 = (longlong *)&local_1a8;
      }
      else if (param_3 <= iStack_194) {
        plVar5 = (longlong *)&local_1a8;
      }
      goto LAB_1475cabfe;
    }
    if ((iStack_194 <= iVar2) && ((iStack_194 != iVar2 || ((char)lVar3 != '\0' && cVar1 != '\0'))))
    {
      plVar7 = &local_1a0;
      if (iVar2 <= param_3) {
        plVar7 = (longlong *)&local_1b0;
      }
      if (iVar2 < param_3) {
        plVar7 = (longlong *)&local_1b0;
      }
      goto LAB_1475cabdb;
    }
    local_178 = CONCAT44(param_3,local_1a8);
    local_170 = (undefined **)CONCAT44(param_3,local_1b0);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_178);
LAB_1475cac1f:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475caca4 FUN_1475caca4 body=402 status=ok
// SIG undefined FUN_1475caca4(void)

void FUN_1475caca4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
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
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_88 = 0;
  uStack_80 = 0;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475cae38(param_1,local_20,local_24,puVar1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cae38 FUN_1475cae38 body=1556 status=ok
// SIG undefined FUN_1475cae38(void)

void FUN_1475cae38(longlong *param_1,longlong param_2,int param_3,undefined8 *param_4)

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
  float *pfVar10;
  longlong *plVar11;
  undefined1 auStack_ab8 [32];
  undefined4 local_a98;
  int iStack_a94;
  float local_a90;
  int iStack_a8c;
  longlong local_a88;
  double local_a80;
  double local_a78;
  double local_a70;
  float local_a68;
  int iStack_a64;
  undefined4 uStack_a60;
  undefined8 uStack_a5c;
  undefined8 local_a54;
  longlong *local_a48;
  longlong *plStack_a40;
  longlong *local_a38;
  longlong *plStack_a30;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_ab8;
  if ((longlong)(int)param_1[0x2b] != 0) {
    plVar11 = (longlong *)param_1[0x2a];
    lVar9 = (longlong)(int)param_1[0x2b] * 0x998;
    do {
      if (*plVar11 == param_2) {
        if (plVar11 != (longlong *)0x0) goto LAB_1475caf13;
        break;
      }
      plVar11 = plVar11 + 0x133;
      lVar9 = lVar9 + -0x998;
    } while (lVar9 != 0);
  }
  FUN_1475cca7a(&local_a48);
  iVar8 = (int)param_1[0x2b];
  *(uint *)(param_1 + 0x2b) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0x15c) < iVar8 + 1U) {
    FUN_1476526d4(param_1 + 0x2a,iVar8);
  }
  FUN_147652650(param_1[0x2a] + (longlong)iVar8 * 0x998,&local_a48);
  FUN_1475b1918(&local_a48);
  plVar11 = (longlong *)((longlong)iVar8 * 0x998 + param_1[0x2a]);
  (**(code **)(*param_1 + 0x368))(param_1);
LAB_1475caf13:
  dVar1 = (double)param_4[4];
  dVar2 = (double)param_4[5];
  dVar3 = (double)param_4[6];
  local_a48 = (longlong *)*param_4;
  plStack_a40 = (longlong *)param_4[1];
  local_a38 = (longlong *)param_4[2];
  plStack_a30 = (longlong *)param_4[3];
  FUN_1448052ee(&local_a48,&local_a80);
  dVar4 = (double)param_4[8];
  dVar5 = (double)param_4[9];
  dVar6 = (double)param_4[10];
  local_a38 = plVar11 + 1;
  plStack_a40 = plVar11 + 0x11;
  plStack_a30 = plVar11 + 0xe;
  local_a48 = plVar11 + 0xc;
  iStack_a64 = 0;
  uStack_a60 = 0;
  uStack_a5c = 0;
  local_a54 = 0x200000000;
  local_a68 = (float)dVar1;
  FUN_1475b9f0a(&local_a48,&local_a88,param_3,&local_a68);
  local_a38 = plVar11 + 0x23;
  plStack_a40 = plVar11 + 0x33;
  plStack_a30 = plVar11 + 0x30;
  local_a48 = plVar11 + 0x2e;
  iStack_a64 = 0;
  uStack_a60 = 0;
  uStack_a5c = 0;
  local_a54 = 0x200000000;
  local_a68 = (float)dVar2;
  FUN_1475b9f0a(&local_a48,&local_a88,param_3,&local_a68);
  local_a38 = plVar11 + 0x45;
  plStack_a40 = plVar11 + 0x55;
  plStack_a30 = plVar11 + 0x52;
  local_a48 = plVar11 + 0x50;
  iStack_a64 = 0;
  uStack_a60 = 0;
  uStack_a5c = 0;
  local_a54 = 0x200000000;
  local_a68 = (float)dVar3;
  FUN_1475b9f0a(&local_a48,&local_a88,param_3,&local_a68);
  local_a38 = plVar11 + 0x67;
  plStack_a40 = plVar11 + 0x77;
  plStack_a30 = plVar11 + 0x74;
  local_a48 = plVar11 + 0x72;
  local_a68 = (float)local_a70;
  iStack_a64 = 0;
  uStack_a60 = 0;
  uStack_a5c = 0;
  local_a54 = 0x200000000;
  FUN_1475b9f0a(&local_a48,&local_a88,param_3,&local_a68);
  local_a38 = plVar11 + 0x89;
  plStack_a40 = plVar11 + 0x99;
  plStack_a30 = plVar11 + 0x96;
  local_a48 = plVar11 + 0x94;
  local_a68 = (float)local_a80;
  iStack_a64 = 0;
  uStack_a60 = 0;
  uStack_a5c = 0;
  local_a54 = 0x200000000;
  FUN_1475b9f0a(&local_a48,&local_a88,param_3,&local_a68);
  local_a38 = plVar11 + 0xab;
  plStack_a40 = plVar11 + 0xbb;
  plStack_a30 = plVar11 + 0xb8;
  local_a48 = plVar11 + 0xb6;
  local_a68 = (float)local_a78;
  iStack_a64 = 0;
  uStack_a60 = 0;
  uStack_a5c = 0;
  local_a54 = 0x200000000;
  FUN_1475b9f0a(&local_a48,&local_a88,param_3,&local_a68);
  local_a38 = plVar11 + 0xcd;
  plStack_a40 = plVar11 + 0xdd;
  plStack_a30 = plVar11 + 0xda;
  local_a48 = plVar11 + 0xd8;
  iStack_a64 = 0;
  uStack_a60 = 0;
  uStack_a5c = 0;
  local_a54 = 0x200000000;
  local_a68 = (float)dVar4;
  FUN_1475b9f0a(&local_a48,&local_a88,param_3,&local_a68);
  local_a38 = plVar11 + 0xef;
  plStack_a40 = plVar11 + 0xff;
  plStack_a30 = plVar11 + 0xfc;
  local_a48 = plVar11 + 0xfa;
  iStack_a64 = 0;
  uStack_a60 = 0;
  uStack_a5c = 0;
  local_a54 = 0x200000000;
  local_a68 = (float)dVar5;
  FUN_1475b9f0a(&local_a48,&local_a88,param_3,&local_a68);
  local_a38 = plVar11 + 0x111;
  plStack_a40 = plVar11 + 0x121;
  plStack_a30 = plVar11 + 0x11e;
  local_a48 = plVar11 + 0x11c;
  iStack_a64 = 0;
  uStack_a60 = 0;
  uStack_a5c = 0;
  local_a54 = 0x200000000;
  local_a68 = (float)dVar6;
  FUN_1475b9f0a(&local_a48,&local_a88,param_3,&local_a68);
  cVar7 = FUN_145c40fca(param_1,1);
  if (cVar7 == '\0') goto LAB_1475cb397;
  lVar9 = param_1[0x13];
  local_a68 = (float)lVar9;
  iStack_a64 = (int)((ulonglong)lVar9 >> 0x20);
  local_a88 = param_1[0x14];
  local_a90 = (float)CONCAT31(local_a90._1_3_,1);
  iStack_a8c = param_3;
  local_a98 = CONCAT31(local_a98._1_3_,1);
  iStack_a94 = param_3;
  cVar7 = (char)local_a88;
  iVar8 = (int)((ulonglong)local_a88 >> 0x20);
  pfVar10 = &local_a68;
  if ((char)lVar9 == '\x02') {
    if (cVar7 == '\x02') {
      plStack_a40 = &local_a88;
    }
    else {
      plStack_a40 = &local_a88;
      if (iVar8 <= param_3) {
        plStack_a40 = (longlong *)&local_a98;
      }
      if (iVar8 < param_3) {
        plStack_a40 = (longlong *)&local_a98;
      }
    }
LAB_1475cb376:
    local_a48 = *(longlong **)pfVar10;
    plStack_a40 = (longlong *)*plStack_a40;
  }
  else {
    plStack_a40 = &local_a88;
    if (cVar7 == '\x02') {
LAB_1475cb353:
      if (param_3 < iStack_a64) {
        pfVar10 = &local_a90;
      }
      else if (param_3 <= iStack_a64) {
        pfVar10 = &local_a90;
      }
      goto LAB_1475cb376;
    }
    if ((iStack_a64 <= iVar8) && ((iStack_a64 != iVar8 || ((char)lVar9 != '\0' && cVar7 != '\0'))))
    {
      plStack_a40 = &local_a88;
      if (iVar8 <= param_3) {
        plStack_a40 = (longlong *)&local_a98;
      }
      if (iVar8 < param_3) {
        plStack_a40 = (longlong *)&local_a98;
      }
      goto LAB_1475cb353;
    }
    local_a48 = (longlong *)CONCAT44(param_3,local_a90);
    plStack_a40 = (longlong *)CONCAT44(param_3,local_a98);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_a48);
LAB_1475cb397:
  if ((local_b0 ^ (ulonglong)auStack_ab8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475cb44e FUN_1475cb44e body=307 status=ok
// SIG undefined FUN_1475cb44e(void)

void FUN_1475cb44e(undefined8 param_1,longlong param_2)

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
  undefined4 local_24;
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
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  uStack_44 = uStack_34;
  uStack_40 = uStack_30;
  uStack_3c = uStack_2c;
  FUN_1475cb582(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cb582 FUN_1475cb582 body=1142 status=ok
// SIG undefined FUN_1475cb582(void)

void FUN_1475cb582(longlong *param_1,longlong *param_2,int param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  int iStack_2c4;
  float local_2c0;
  int iStack_2bc;
  double *local_2b8;
  longlong local_2b0;
  float local_2a8;
  int iStack_2a4;
  undefined4 uStack_2a0;
  undefined8 uStack_29c;
  undefined8 local_294;
  longlong *local_288;
  undefined **local_280;
  longlong *local_278;
  longlong *plStack_270;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined4 local_23c;
  undefined8 local_238;
  undefined2 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined5 uStack_210;
  undefined3 uStack_20b;
  undefined5 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined4 local_1bc;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  undefined5 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  iVar2 = (int)param_1[0x25];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    plVar5 = (longlong *)param_1[0x24];
    lVar3 = lVar6 * 0x228;
    do {
      if ((longlong *)*plVar5 == param_2) {
        if (plVar5 != (longlong *)0x0) goto LAB_1475cb7e5;
        break;
      }
      plVar5 = plVar5 + 0x45;
      lVar3 = lVar3 + -0x228;
    } while (lVar3 != 0);
  }
  local_278 = (longlong *)0x0;
  plStack_270 = (longlong *)0x0;
  local_268 = 2;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0x200000000;
  local_24c = 0;
  uStack_244 = 0;
  local_23c = 0;
  local_238 = 2;
  local_280 = &PTR_FUN_14a46ea60;
  local_230 = 0x404;
  local_1e0 = 0;
  local_1d8 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  uStack_20b = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1d4 = 0xffffffff00000080;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1bc = 0;
  local_1cc = 0;
  uStack_1c4 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0x10000ea60;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 2;
  local_154 = 0;
  uStack_14c = 0;
  local_144 = 0x200000000;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  local_128 = 2;
  local_170 = &PTR_FUN_14a46ea60;
  local_120 = 0x404;
  local_d0 = 0;
  local_c8 = 0;
  uStack_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_fb = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_98 = 0;
  local_90 = 0;
  local_ac = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0x10000ea60;
  *(uint *)(param_1 + 0x25) = iVar2 + 1U;
  local_2b8 = param_4;
  local_288 = param_2;
  if (*(uint *)((longlong)param_1 + 300) < iVar2 + 1U) {
    FUN_14765248c(param_1 + 0x24,iVar2);
  }
  lVar3 = param_1[0x24];
  lVar6 = lVar6 * 0x228;
  plVar5 = (longlong *)(lVar3 + lVar6);
  *plVar5 = (longlong)param_2;
  FUN_147613664(plVar5 + 1,&local_280);
  FUN_147613664(lVar3 + lVar6 + 0x118,&local_170);
  FUN_1404dbc70(&local_170);
  FUN_1404dbc70(&local_280);
  plVar5 = (longlong *)(lVar6 + param_1[0x24]);
  (**(code **)(*param_1 + 0x368))(param_1);
  param_4 = local_2b8;
LAB_1475cb7e5:
  local_278 = plVar5 + 1;
  local_280 = (undefined **)(plVar5 + 0x11);
  plStack_270 = plVar5 + 0xe;
  local_288 = plVar5 + 0xc;
  local_2a8 = (float)*param_4;
  iStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  local_294 = 0x200000000;
  FUN_1475b9f0a(&local_288,&local_2b0,param_3,&local_2a8);
  local_278 = plVar5 + 0x23;
  local_280 = (undefined **)(plVar5 + 0x33);
  plStack_270 = plVar5 + 0x30;
  local_288 = plVar5 + 0x2e;
  local_2a8 = (float)param_4[1];
  iStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  local_294 = 0x200000000;
  FUN_1475b9f0a(&local_288,&local_2b0,param_3,&local_2a8);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 == '\0') goto LAB_1475cb975;
  lVar6 = param_1[0x13];
  local_2a8 = (float)lVar6;
  iStack_2a4 = (int)((ulonglong)lVar6 >> 0x20);
  local_2b0 = param_1[0x14];
  local_2c0 = (float)CONCAT31(local_2c0._1_3_,1);
  iStack_2bc = param_3;
  local_2c8 = CONCAT31(local_2c8._1_3_,1);
  iStack_2c4 = param_3;
  cVar1 = (char)local_2b0;
  iVar2 = (int)((ulonglong)local_2b0 >> 0x20);
  pfVar4 = &local_2a8;
  if ((char)lVar6 == '\x02') {
    if (cVar1 == '\x02') {
      plVar5 = &local_2b0;
    }
    else {
      plVar5 = &local_2b0;
      if (iVar2 <= param_3) {
        plVar5 = (longlong *)&local_2c8;
      }
      if (iVar2 < param_3) {
        plVar5 = (longlong *)&local_2c8;
      }
    }
LAB_1475cb954:
    local_288 = *(longlong **)pfVar4;
    local_280 = (undefined **)*plVar5;
  }
  else {
    plVar5 = &local_2b0;
    if (cVar1 == '\x02') {
LAB_1475cb931:
      if (param_3 < iStack_2a4) {
        pfVar4 = &local_2c0;
      }
      else if (param_3 <= iStack_2a4) {
        pfVar4 = &local_2c0;
      }
      goto LAB_1475cb954;
    }
    if ((iStack_2a4 <= iVar2) && ((iStack_2a4 != iVar2 || ((char)lVar6 != '\0' && cVar1 != '\0'))))
    {
      plVar5 = &local_2b0;
      if (iVar2 <= param_3) {
        plVar5 = (longlong *)&local_2c8;
      }
      if (iVar2 < param_3) {
        plVar5 = (longlong *)&local_2c8;
      }
      goto LAB_1475cb931;
    }
    local_288 = (longlong *)CONCAT44(param_3,local_2c0);
    local_280 = (undefined **)CONCAT44(param_3,local_2c8);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_288);
LAB_1475cb975:
  if ((local_60 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


