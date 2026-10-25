// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148daadda FUN_148daadda body=128 status=ok
// SIG undefined FUN_148daadda(void)

void FUN_148daadda(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x58);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
      local_1c = 0;
      local_30 = DAT_14cbced90;
      local_28 = 0xffffffff;
      FUN_141094e00(uVar2,&local_30,param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148daae5c FUN_148daae5c body=503 status=ok
// SIG undefined FUN_148daae5c(void)

void FUN_148daae5c(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)((longlong)param_1 + 0xd9) == '\x01') {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 != 0) {
      uVar5 = FUN_144a88394(lVar4);
      local_98 = param_1[0x1a];
      lVar6 = FUN_144a61814(uVar5);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 1) != '\x02')) {
        plVar1 = param_1 + 0x1a;
        uVar5 = FUN_144a88394(lVar4);
        lVar6 = FUN_144a61814(uVar5,plVar1);
        if (lVar6 != 0) {
          FUN_1405a424c(uVar5,*plVar1);
        }
        param_1[0x1a] = 0;
        uVar5 = FUN_144a88394(lVar4);
        uVar2 = *(undefined4 *)((longlong)param_1 + 0xdc);
        local_a8 = (undefined8 *)0x0;
        local_a0 = 0;
        FUN_1446efa72(&local_a8,0,3,0x10);
        puVar3 = local_a8;
        local_a0 = 3;
        *local_a8 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_a8[2] = lVar6;
        *local_a8 = &PTR_FUN_14b991350;
        local_a8[3] = 0;
        FUN_14485c47a(local_a8 + 3,param_1);
        *(undefined4 *)(puVar3 + 5) = 0;
        puVar3[4] = &LAB_148daadbc;
        local_98 = 0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,&local_a8);
        local_58 = 1;
        local_b0 = 0xbf800000;
        local_b8 = 0;
        FUN_1406f3fee(uVar5,plVar1,&local_98,uVar2);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(&local_a8);
      }
    }
  }
  FUN_148daadda(param_1,0);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dab054 FUN_148dab054 body=151 status=ok
// SIG undefined FUN_148dab054(void)

undefined8 FUN_148dab054(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x58);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
      if (0 < *(int *)(lVar2 + 8)) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
        local_20 = DAT_14c9a6400;
        local_18 = 0xffffffff;
        local_30 = DAT_14cbced90;
        local_28 = 0xffffffff;
        uVar3 = FUN_1400b1204(uVar3);
        goto LAB_148dab0cf;
      }
    }
  }
  uVar3 = 0;
LAB_148dab0cf:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dab0ec FUN_148dab0ec body=901 status=ok
// SIG undefined FUN_148dab0ec(void)

void FUN_148dab0ec(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar5 != 0) {
    uVar6 = FUN_144a800f8();
    plVar7 = (longlong *)FUN_144718840(lVar5,uVar6);
    lVar8 = FUN_1458c8476();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (lVar11 = lVar5,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
       != lVar8 + 0x30)) {
      lVar11 = 0;
    }
    uVar3 = FUN_148dab054(param_1);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x98))(plVar7,uVar3,DAT_14cbced90);
    }
    if (lVar11 != 0) {
      FUN_148cd5d2c(lVar11,uVar3 ^ 1);
    }
    uVar6 = local_a0;
    if ((char)param_1[0x19] == '\x01') {
      plVar7 = (longlong *)(lVar5 + 0x240);
      uVar9 = lVar5 + 0x250;
      local_d8 = (undefined8 *)&DAT_100000000;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      iVar10 = 0;
      local_d0 = uVar9;
      if (*(int *)(lVar5 + 0x268) != 0) {
        FUN_1449c0562(&local_d8);
        iVar10 = *(int *)(lVar5 + 0x268);
      }
      local_a0 = local_c8;
      uVar6 = local_a0;
      local_98 = local_c0;
      local_94 = local_bc;
      local_b0 = local_d8;
      local_a8 = local_d0;
      local_a0._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      local_b8 = plVar7;
      if ((local_a0._4_4_ != iVar10) || (local_d0 != uVar9)) {
        iVar4 = local_a0._4_4_;
        local_a0 = uVar6;
        do {
          lVar5 = *(longlong *)(*local_b8 + (longlong)iVar4 * 0x10);
          if (lVar5 != 0) {
            lVar8 = FUN_14107b55a();
            if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
              FUN_141807026(lVar5,uVar3 ^ 1);
            }
          }
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
          FUN_1449c0562(&local_b0);
          iVar4 = local_a0._4_4_;
          uVar6 = local_a0;
        } while (local_b8 != plVar7 || (local_a8 != uVar9 || local_a0._4_4_ != iVar10));
      }
    }
    local_a0 = uVar6;
    if ((char)uVar3 == '\0') {
      if (*(char *)((longlong)param_1 + 0xd9) == '\x01') {
        lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        if (lVar5 != 0) {
          uVar6 = FUN_144a88394(lVar5);
          uVar1 = *(undefined4 *)((longlong)param_1 + 0xdc);
          local_d8 = (undefined8 *)0x0;
          local_d0 = local_d0 & 0xffffffff00000000;
          FUN_1446efa72(&local_d8,0,3,0x10);
          puVar2 = local_d8;
          local_d0 = CONCAT44(local_d0._4_4_,3);
          *local_d8 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar5 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar5 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar5;
          local_d8[2] = lVar8;
          *local_d8 = &PTR_FUN_14b991350;
          local_d8[3] = 0;
          FUN_14485c47a(local_d8 + 3,param_1);
          *(undefined4 *)(puVar2 + 5) = 0;
          puVar2[4] = &LAB_148daadbc;
          local_b8 = (longlong *)0x0;
          local_b0 = (undefined8 *)((ulonglong)local_b0 & 0xffffffff00000000);
          FUN_14487d8d8(&local_b8,&local_d8);
          local_78 = 1;
          local_e0 = 0xbf800000;
          local_e8 = 0;
          FUN_1406f3fee(uVar6,param_1 + 0x1a,&local_b8,uVar1);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
          FUN_1449db362(&local_d8);
        }
      }
      if ((char)param_1[0x19] == '\x01') {
        FUN_148dab58c(param_1);
      }
      FUN_148dab662(param_1);
      lVar5 = 0xb0;
    }
    else {
      FUN_148dab472(param_1);
      lVar5 = 0xa0;
    }
    FUN_148beb4f0((longlong)param_1 + lVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dab472 FUN_148dab472 body=280 status=ok
// SIG undefined FUN_148dab472(void)

void FUN_148dab472(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar2 != 0) {
    local_48 = (undefined1 *)0x0;
    local_40 = 0x1800000000;
    FUN_1407fcdae(lVar2,local_108,0);
    puVar4 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar4 = local_108;
    }
    lVar2 = (longlong)(int)local_40;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(puVar4 + lVar3);
        FUN_14127091c(plVar1,1);
        if ((char)param_1[0x19] == '\x01') {
          (**(code **)(*plVar1 + 0x720))(plVar1,1);
          FUN_1412b4aa2(local_128,1);
          (**(code **)(*plVar1 + 0x948))(plVar1,local_128);
        }
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dab58c FUN_148dab58c body=213 status=ok
// SIG undefined FUN_148dab58c(void)

void FUN_148dab58c(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar2 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_140d09f2a(lVar2,1);
    local_40 = FUN_144a78b9e();
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_40);
    }
    FUN_140d0a558(lVar2,&local_38,&local_40);
    if (((int)uStack_30 != 0) &&
       ((((int)param_1[0x1d] == 0 && ((int)param_1[0x1f] == 0)) ||
        (cVar1 = FUN_148dab8e6(param_1,&local_38), cVar1 == '\0')))) {
      FUN_148dab772(param_1);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dab662 FUN_148dab662 body=270 status=ok
// SIG undefined FUN_148dab662(void)

void FUN_148dab662(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar2 != 0) {
    local_48 = (undefined1 *)0x0;
    local_40 = 0x1800000000;
    FUN_1407fcdae(lVar2,local_108,0);
    puVar4 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar4 = local_108;
    }
    lVar2 = (longlong)(int)local_40;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        if ((char)param_1[0x19] == '\x01') {
          plVar1 = *(longlong **)(puVar4 + lVar3);
          (**(code **)(*plVar1 + 0x720))(plVar1,3);
          FUN_1412b4aa2(local_128,2);
          (**(code **)(*plVar1 + 0x948))(plVar1,local_128);
        }
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dab772 FUN_148dab772 body=371 status=ok
// SIG undefined FUN_148dab772(void)

void FUN_148dab772(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_e8 [6];
  double local_b8;
  undefined8 uStack_b0;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  param_1 = param_1 + 0x18;
  cVar1 = FUN_144729dda(param_1);
  if (plVar2 != (longlong *)0x0 && cVar1 == '\x01') {
    local_f8 = 0;
    (**(code **)(*plVar2 + 800))(plVar2,0,local_68,&local_80);
    if (local_80 <= local_78) {
      local_80 = local_78;
    }
    if (local_80 <= local_70) {
      local_80 = local_70;
    }
    lVar3 = FUN_14479d2ce(param_1);
    *(float *)(lVar3 + 0x2a8) = (float)(int)local_80;
    lVar3 = FUN_14479d2ce(param_1);
    *(float *)(lVar3 + 0x2b0) = (float)(int)local_80;
    puVar5 = &DAT_14c846480;
    if (plVar2[0x39] != 0) {
      puVar5 = (undefined8 *)(plVar2[0x39] + 0x240);
    }
    puVar6 = local_e8;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_b8 = local_b8 - (local_70 * 0.5 + 10.0);
    uStack_b0 = 0;
    uVar4 = FUN_14479d2ce(param_1);
    local_f8 = 0;
    FUN_140613f88(uVar4,local_e8,0,0);
    plVar2 = (longlong *)FUN_14479d2ce(param_1);
    (**(code **)(*plVar2 + 0x5d8))(plVar2);
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dab8e6 FUN_148dab8e6 body=273 status=ok
// SIG undefined FUN_148dab8e6(void)

ulonglong FUN_148dab8e6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  undefined7 uVar8;
  ulonglong uVar7;
  double dVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_2[1];
  uVar8 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if ((longlong)(int)lVar4 == 0) {
    uVar7 = CONCAT71(uVar8,1);
  }
  else {
    lVar1 = *param_2;
    uVar7 = CONCAT71(uVar8,1);
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar6);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
        FUN_148dab9f8(param_1,&local_60,lVar2);
        lVar3 = *(longlong *)(lVar2 + 0x1c8);
        pdVar5 = (double *)&DAT_14c8464e0;
        dVar9 = DAT_14c8464f0;
        if (lVar3 != 0) {
          pdVar5 = (double *)(lVar3 + 0x260);
          dVar9 = *(double *)(lVar3 + 0x270);
        }
        if ((local_60 == *pdVar5) && (!NAN(local_60) && !NAN(*pdVar5))) {
          if ((local_58 == pdVar5[1]) && (!NAN(local_58) && !NAN(pdVar5[1]))) {
            if ((local_50 == dVar9) && (!NAN(local_50) && !NAN(dVar9))) {
              uVar7 = 0;
              goto LAB_148dab940;
            }
          }
        }
        local_68 = 0;
        FUN_1413dd462(lVar2,&local_60,0,0);
      }
LAB_148dab940:
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148dab9f8 FUN_148dab9f8 body=537 status=ok
// SIG undefined FUN_148dab9f8(void)

double * FUN_148dab9f8(longlong param_1,double *param_2,longlong param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  lVar7 = *(longlong *)(param_3 + 0x1c8);
  if (lVar7 == 0) {
    pdVar5 = (double *)&DAT_14c8464e0;
    uVar11 = SUB84(DAT_14c8464f0,0);
    uVar12 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar11 = (undefined4)*(undefined8 *)(lVar7 + 0x270);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x270) >> 0x20);
    pdVar5 = (double *)(lVar7 + 0x260);
  }
  dVar3 = *pdVar5;
  dVar4 = pdVar5[1];
  *param_2 = dVar3;
  param_2[1] = dVar4;
  param_2[2] = (double)CONCAT44(uVar12,uVar11);
  if ((longlong)*(int *)(param_1 + 0xe8) == 0) {
    fVar13 = 3.4e+38;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0xe0);
    lVar8 = (longlong)*(int *)(param_1 + 0xe8) * 0x28;
    fVar13 = 3.4e+38;
    do {
      lVar6 = FUN_1404101e2(lVar7);
      if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
        lVar6 = FUN_1404101e2(lVar7);
        lVar6 = *(longlong *)(lVar6 + 0x1c8);
        pdVar5 = (double *)&DAT_14c8464e0;
        dVar9 = DAT_14c8464f0;
        if (lVar6 != 0) {
          pdVar5 = (double *)(lVar6 + 0x260);
          dVar9 = *(double *)(lVar6 + 0x270);
        }
        dVar9 = dVar9 - (double)CONCAT44(uVar12,uVar11);
        fVar14 = (float)SQRT(dVar9 * dVar9 +
                             (*pdVar5 - dVar3) * (*pdVar5 - dVar3) +
                             (pdVar5[1] - dVar4) * (pdVar5[1] - dVar4));
        if (fVar14 <= fVar13) {
          lVar6 = FUN_1404101e2(lVar7);
          lVar6 = *(longlong *)(lVar6 + 0x1c8);
          pdVar5 = (double *)&DAT_14c8464e0;
          dVar9 = DAT_14c8464f0;
          if (lVar6 != 0) {
            pdVar5 = (double *)(lVar6 + 0x260);
            dVar9 = *(double *)(lVar6 + 0x270);
          }
          dVar2 = pdVar5[1];
          *param_2 = *pdVar5;
          param_2[1] = dVar2;
          param_2[2] = dVar9;
          fVar13 = fVar14;
        }
      }
      lVar7 = lVar7 + 0x28;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar1 != 0) {
    lVar7 = *(longlong *)(param_1 + 0xf0);
    lVar8 = 0;
    do {
      dVar9 = *(double *)(lVar7 + lVar8) - dVar3;
      dVar10 = *(double *)(lVar7 + 8 + lVar8) - dVar4;
      dVar2 = *(double *)(lVar7 + 0x10 + lVar8) - (double)CONCAT44(uVar12,uVar11);
      fVar14 = (float)SQRT(dVar2 * dVar2 + dVar10 * dVar10 + dVar9 * dVar9);
      if (fVar14 <= fVar13) {
        pdVar5 = (double *)(lVar7 + lVar8);
        param_2[2] = pdVar5[2];
        dVar9 = pdVar5[1];
        *param_2 = *pdVar5;
        param_2[1] = dVar9;
        fVar13 = fVar14;
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar8);
  }
  return param_2;
}



// FUNCTION 148dabc12 FUN_148dabc12 body=128 status=ok
// SIG undefined FUN_148dabc12(void)

void FUN_148dabc12(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        uVar4 = FUN_145a8a1a0();
        lVar5 = FUN_140d4a0a6(uVar1,uVar4);
        if (lVar5 != 0) {
          FUN_148daadda(lVar5,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148dabc92 FUN_148dabc92 body=126 status=ok
// SIG undefined FUN_148dabc92(void)

void FUN_148dabc92(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        uVar4 = FUN_145a8a1a0();
        lVar5 = FUN_140d4a0a6(uVar1,uVar4);
        if (lVar5 != 0) {
          FUN_148daae5c(lVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148dabd10 FUN_148dabd10 body=128 status=ok
// SIG undefined FUN_148dabd10(void)

undefined8 FUN_148dabd10(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        uVar4 = FUN_145a8a1a0();
        lVar5 = FUN_140d4a0a6(uVar1,uVar4);
        if (lVar5 != 0) {
          uVar1 = FUN_148dab054(lVar5);
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148dabd94 FUN_148dabd94 body=290 status=ok
// SIG undefined FUN_148dabd94(void)

void FUN_148dabd94(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  undefined8 local_a0 [12];
  int local_40;
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  piVar1 = (int *)(param_1 + 0x40);
  piVar6 = *(int **)(param_1 + 0x400);
  iVar3 = -1;
  if (0 < (longlong)*(int *)(param_1 + 0x408)) {
    piVar4 = piVar6;
    if (piVar6 == (int *)0x0) {
      piVar4 = piVar1;
    }
    lVar7 = 0;
    do {
      if (*piVar4 == param_2) {
        iVar3 = (int)lVar7;
        break;
      }
      lVar7 = lVar7 + 1;
      piVar4 = piVar4 + 0x1e;
    } while (*(int *)(param_1 + 0x408) != lVar7);
  }
  if (piVar6 == (int *)0x0) {
    piVar6 = piVar1;
  }
  lVar7 = (longlong)iVar3;
  piVar4 = piVar6 + lVar7 * 0x1e;
  puVar5 = local_a0;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *(undefined8 *)piVar4;
    piVar4 = piVar4 + 2;
    puVar5 = puVar5 + 1;
  }
  local_40 = piVar6[lVar7 * 0x1e + 0x18];
  local_38 = *(undefined8 *)(piVar6 + lVar7 * 0x1e + 0x1a);
  local_30 = *(undefined8 **)(piVar6 + lVar7 * 0x1e + 0x1c);
  if (local_30 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = *(int *)(local_30 + 1) + 1;
    UNLOCK();
    puVar5 = local_30;
  }
  FUN_145806dca(piVar1);
  FUN_145806d0c(piVar1);
  FUN_145806e58(param_1,local_a0);
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dabece FUN_148dabece body=42 status=ok
// SIG undefined FUN_148dabece(void)

void FUN_148dabece(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a10aaa();
  FUN_140667ab4(param_1,param_2,param_3);
  return;
}



// FUNCTION 148dabef8 FUN_148dabef8 body=49 status=ok
// SIG undefined FUN_148dabef8(void)

void FUN_148dabef8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_147f5e4ae(&DAT_14cbcee68);
  memset(_Dst,0,0x90);
  FUN_148bec6d8(_Dst);
  return;
}



// FUNCTION 148dabf2a FUN_148dabf2a body=44 status=ok
// SIG undefined FUN_148dabf2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148dabf2a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbcee74 = _DAT_14cbcee74 + -1;
  *param_1 = DAT_14cbcee68;
  DAT_14cbcee68 = param_1;
  return;
}



// FUNCTION 148dabf56 FUN_148dabf56 body=44 status=ok
// SIG undefined FUN_148dabf56(void)

void FUN_148dabf56(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0x90);
  FUN_148bec6d8(param_1);
  return;
}



// FUNCTION 148dabf82 FUN_148dabf82 body=1156 status=ok
// SIG undefined FUN_148dabf82(void)

undefined8 * FUN_148dabf82(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x42) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0x800000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14b6d3270;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 1;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 1;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 1;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 1;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 1;
  param_1[0x40] = 0xc2c800003f800000;
  param_1[0x41] = 0x43af000042c80000;
  *(undefined4 *)(param_1 + 0x42) = 0xc3af0000;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0xc53b8000;
  *(undefined4 *)(param_1 + 0x43) = 0xc4bb8000;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0xc53b8000;
  FUN_140e78e14(param_1 + 0x44);
  FUN_140e78e14(param_1 + 0x48);
  FUN_140e78e14(param_1 + 0x4c);
  FUN_140e78e14(param_1 + 0x50);
  FUN_140e78e14(param_1 + 0x54);
  FUN_140e78e14(param_1 + 0x58);
  FUN_140e78e14(param_1 + 0x5c);
  FUN_140e78e14(param_1 + 0x60);
  FUN_140e78e14(param_1 + 100);
  FUN_140e78e14(param_1 + 0x68);
  FUN_140e78e14(param_1 + 0x6c);
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 1;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 1;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 1;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 1;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 1;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 1;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 1;
  FUN_141315e2a(param_1 + 0x88);
  param_1[0x88] = &PTR_FUN_14b0a4df0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0x47efffffe0000000;
  param_1[0x9f] = 0x47efffffe0000000;
  param_1[0xa0] = 0x47efffffe0000000;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  FUN_141315e2a(param_1 + 0xa8);
  param_1[0xa8] = &PTR_FUN_14b0a4df0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  param_1[0xbe] = 0x47efffffe0000000;
  param_1[0xbf] = 0x47efffffe0000000;
  param_1[0xc0] = 0x47efffffe0000000;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  FUN_141315e2a(param_1 + 200);
  param_1[200] = &PTR_FUN_14b0a4df0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6e4) = 0;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  param_1[0xde] = 0x47efffffe0000000;
  param_1[0xdf] = 0x47efffffe0000000;
  param_1[0xe0] = 0x47efffffe0000000;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  FUN_141315e2a(param_1 + 0xe8);
  param_1[0xe8] = &PTR_FUN_14b0a4df0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7e4) = 0;
  *(undefined1 *)(param_1 + 0xfd) = 0;
  param_1[0xfe] = 0x47efffffe0000000;
  param_1[0xff] = 0x47efffffe0000000;
  param_1[0x100] = 0x47efffffe0000000;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  FUN_141315e2a(param_1 + 0x108);
  param_1[0x108] = &PTR_FUN_14b0a4df0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8e4) = 0;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  param_1[0x11e] = 0x47efffffe0000000;
  param_1[0x11f] = 0x47efffffe0000000;
  param_1[0x120] = 0x47efffffe0000000;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  FUN_1409584b0(param_1 + 0x128);
  FUN_141315e2a(param_1 + 0x142);
  param_1[0x142] = &PTR_FUN_14b0a4df0;
  *(undefined4 *)(param_1 + 0x156) = 0;
  *(undefined1 *)((longlong)param_1 + 0xab4) = 0;
  *(undefined1 *)(param_1 + 0x157) = 0;
  param_1[0x158] = 0x47efffffe0000000;
  param_1[0x159] = 0x47efffffe0000000;
  param_1[0x15a] = 0x47efffffe0000000;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  *(undefined4 *)(param_1 + 0x15e) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  *(undefined1 *)(param_1 + 0x155) = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  *(undefined2 *)(param_1 + 0x163) = 0;
  return param_1;
}



// FUNCTION 148dac406 FUN_148dac406 body=236 status=ok
// SIG undefined FUN_148dac406(void)

void FUN_148dac406(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1433dc002(param_1 + 0x958,param_1 + 0x740);
  FUN_1433dc002(param_1 + 0x968,param_1 + 0x840);
  *(undefined1 *)(param_1 + 0x9d8) = 1;
  *(undefined8 *)(param_1 + 0x9dc) = *(undefined8 *)(param_1 + 0x210);
  FUN_140aeed2c(param_1 + 0x20,6,1);
  FUN_141262ece(*(undefined8 *)(param_1 + 0x20),param_1 + 0x130);
  FUN_1433dc002(*(longlong *)(param_1 + 0x20) + 0x10,param_1 + 0x440);
  FUN_1433dc002(*(longlong *)(param_1 + 0x20) + 0x20,param_1 + 0x540);
  FUN_1433dc002(*(longlong *)(param_1 + 0x20) + 0x30,param_1 + 0x640);
  FUN_1433dc002(*(longlong *)(param_1 + 0x20) + 0x40,param_1 + 0x940);
  FUN_1433dc002(*(longlong *)(param_1 + 0x20) + 0x50,param_1 + 0xa10);
  FUN_141262eee(param_1,param_2,param_3);
  return;
}



// FUNCTION 148dac4f2 FUN_148dac4f2 body=226 status=ok
// SIG undefined FUN_148dac4f2(void)

void FUN_148dac4f2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x130), lVar1 != 0)) {
    lVar2 = FUN_14016d2a8();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_148dac537;
  }
  lVar3 = 0;
LAB_148dac537:
  *(longlong *)(param_1 + 0xb10) = lVar3;
  FUN_143cbb31c(param_1 + 0x440,param_1 + 0x140);
  FUN_143cbb31c(param_1 + 0x540,param_1 + 0x158);
  FUN_143cbb31c(param_1 + 0x640,param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_1 + 0x200);
  FUN_143cbb31c(param_1 + 0x740,param_1 + 0x188);
  FUN_143cbb31c(param_1 + 0x840,param_1 + 0x1a0);
  FUN_143cbb31c(param_1 + 0xa10,param_1 + 0x1b8);
  FUN_14066f62c(param_1,param_2);
  return;
}



// FUNCTION 148dac5d4 FUN_148dac5d4 body=1448 status=ok
// SIG undefined FUN_148dac5d4(void)

void FUN_148dac5d4(longlong param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined7 uVar9;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0xb10);
  puVar5 = param_2;
  uVar3 = FUN_144b23c22();
  uVar9 = (undefined7)((ulonglong)puVar5 >> 8);
  switch(uVar3) {
  case 0:
    bVar1 = *(byte *)(lVar2 + 0xde0);
    if ((bVar1 & 1) != 0) {
LAB_148daca5d:
      lVar8 = param_1 + 0x220;
LAB_148dac701:
      FUN_140f7ece8(local_58,lVar8);
      uVar6 = 1;
      goto LAB_148dac71d;
    }
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) != 0) {
LAB_148dac63a:
        lVar8 = param_1 + 0x260;
LAB_148dac641:
        FUN_140f7ece8(local_58,lVar8);
        uVar6 = 4;
        goto LAB_148dac71d;
      }
    }
    else {
      if ((double)*(float *)(param_1 + 0x208) <= *(double *)(lVar2 + 0xdf8)) goto LAB_148daca5d;
      if ((bVar1 & 8) != 0) goto LAB_148dac63a;
      if (*(double *)(lVar2 + 0xdf8) < (double)*(float *)(param_1 + 0x204)) {
        lVar8 = param_1 + 0x240;
        goto LAB_148dac641;
      }
    }
    break;
  case 1:
    if (*(double *)(lVar2 + 0xdf8) <= (double)*(float *)(param_1 + 0x20c) &&
        (double)*(float *)(param_1 + 0x20c) != *(double *)(lVar2 + 0xdf8)) {
LAB_148dac906:
      FUN_140f7ece8(local_58,param_1 + 0x2c0);
      uVar6 = 3;
    }
    else {
      puVar5 = local_58;
      FUN_140f7ece8(puVar5,param_1 + 0x280);
      local_38 = 1;
      cVar4 = FUN_148dacb7e(param_1 + 0x440,puVar5);
      if (cVar4 == '\0') goto LAB_148dac6a4;
      FUN_140f7ece8(local_58,param_1 + 0x280);
      uVar6 = 2;
    }
    goto LAB_148dac71d;
  case 2:
    if (*(double *)(lVar2 + 0xdf8) <= (double)*(float *)(param_1 + 0x20c) &&
        (double)*(float *)(param_1 + 0x20c) != *(double *)(lVar2 + 0xdf8)) goto LAB_148dac906;
LAB_148dac6a4:
    uVar7 = CONCAT71((int7)((ulonglong)puVar5 >> 8),*(undefined1 *)(lVar2 + 0xde0));
    goto LAB_148dac6ab;
  case 3:
    bVar1 = *(byte *)(lVar2 + 0xde0);
    uVar7 = CONCAT71(uVar9,bVar1);
    if (((bVar1 & 2) != 0) ||
       ((((bVar1 & 4) != 0 && ((double)*(float *)(param_1 + 0x208) <= *(double *)(lVar2 + 0xdf8)))
        && ((double)*(float *)(param_1 + 0x20c) <= *(double *)(lVar2 + 0xdf8))))) {
LAB_148dac6fa:
      lVar8 = param_1 + 0x2a0;
      goto LAB_148dac701;
    }
    if ((bVar1 & 0xc) != 0) {
      FUN_140f7ece8(local_58,param_1 + 0x2e0);
      local_38 = 1;
      cVar4 = FUN_148dacb7e(param_1 + 0x640,local_58);
      if (cVar4 != '\0') {
        FUN_140f7ece8(local_58,param_1 + 0x2e0);
        uVar6 = 4;
        goto LAB_148dac71d;
      }
      break;
    }
    goto LAB_148daca6e;
  case 4:
    bVar1 = *(byte *)(lVar2 + 0xde0);
    uVar7 = CONCAT71(uVar9,bVar1);
    if (((bVar1 & 2) != 0) ||
       (((bVar1 & 4) != 0 && ((double)*(float *)(param_1 + 0x208) <= *(double *)(lVar2 + 0xdf8)))))
    goto LAB_148dac6fa;
LAB_148dac6ab:
    if ((uVar7 & 0xc) == 0) {
LAB_148daca6e:
      FUN_148dacbfe(param_1,CONCAT71((int7)((uVar7 & 0xffffffffffffff20) >> 8),
                                     (byte)(uVar7 & 0xffffffffffffff20) >> 5));
    }
    break;
  case 5:
    bVar1 = *(byte *)(lVar2 + 0xde0);
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 4) == 0) {
          FUN_140f7ece8(local_58,param_1 + 800);
          local_38 = 1;
          cVar4 = FUN_148dacb7e(param_1 + 0xa10,local_58);
          if (cVar4 == '\0') break;
          FUN_140f7ece8(local_58,param_1 + 800);
          uVar6 = 0;
          goto LAB_148dac71d;
        }
        if (*(double *)(lVar2 + 0xdf8) < (double)*(float *)(param_1 + 0x208)) {
          lVar8 = param_1 + 0x360;
          goto LAB_148dac641;
        }
      }
      goto LAB_148dac6fa;
    }
    FUN_140f7ece8(local_58,param_1 + 0x340);
    uVar6 = 0;
LAB_148dac71d:
    local_38 = 1;
    FUN_1403201ee(param_1,uVar6,local_58);
  }
  cVar4 = FUN_144b23c22(param_1);
  if (cVar4 == '\0') goto LAB_148dac880;
  if ((*(byte *)(lVar2 + 0xde0) & 0x20) == 0) {
    if (*(char *)(param_1 + 0xb18) != '\0') {
      FUN_143cbb31c(param_1 + 0x440,param_1 + 0x140);
      FUN_143cbb31c(param_1 + 0x540,param_1 + 0x158);
      FUN_143cbb31c(param_1 + 0x640,param_1 + 0x170);
      FUN_143cbb31c(param_1 + 0x740,param_1 + 0x188);
      FUN_143cbb31c(param_1 + 0x840,param_1 + 0x1a0);
      uVar3 = 0;
LAB_148dac861:
      *(undefined1 *)(param_1 + 0xb18) = uVar3;
    }
  }
  else if (*(char *)(param_1 + 0xb18) == '\0') {
    if ((*(longlong *)(param_1 + 0x388) == 0) && (*(longlong *)(param_1 + 0x380) == 0)) {
      lVar8 = param_1 + 0x140;
    }
    else {
      lVar8 = param_1 + 0x380;
    }
    FUN_143cbb31c(param_1 + 0x440,lVar8);
    if ((*(longlong *)(param_1 + 0x3a0) == 0) && (*(longlong *)(param_1 + 0x398) == 0)) {
      lVar8 = param_1 + 0x158;
    }
    else {
      lVar8 = param_1 + 0x398;
    }
    FUN_143cbb31c(param_1 + 0x540,lVar8);
    if ((*(longlong *)(param_1 + 0x3b8) == 0) && (*(longlong *)(param_1 + 0x3b0) == 0)) {
      lVar8 = param_1 + 0x170;
    }
    else {
      lVar8 = param_1 + 0x3b0;
    }
    FUN_143cbb31c(param_1 + 0x640,lVar8);
    if ((*(longlong *)(param_1 + 0x3d0) == 0) && (*(longlong *)(param_1 + 0x3c8) == 0)) {
      lVar8 = param_1 + 0x188;
    }
    else {
      lVar8 = param_1 + 0x3c8;
    }
    FUN_143cbb31c(param_1 + 0x740,lVar8);
    if ((*(longlong *)(param_1 + 1000) == 0) && (*(longlong *)(param_1 + 0x3e0) == 0)) {
      lVar8 = param_1 + 0x1a0;
    }
    else {
      lVar8 = param_1 + 0x3e0;
    }
    FUN_143cbb31c(param_1 + 0x840,lVar8);
    uVar3 = 1;
    goto LAB_148dac861;
  }
  *(float *)(param_1 + 0x97c) = (float)*(double *)(lVar2 + 0xdf8);
  if (cVar4 != '\x05') {
    if ((double)*(float *)(param_1 + 0x21c) <= *(double *)(lVar2 + 0xdf8)) {
      if ((double)*(float *)(param_1 + 0x218) <= *(double *)(lVar2 + 0xdf8)) {
        *(undefined1 *)(param_1 + 0xb19) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xb19) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xb19) = 2;
    }
  }
LAB_148dac880:
  FUN_14491269a(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dacb7e FUN_148dacb7e body=128 status=ok
// SIG undefined FUN_148dacb7e(void)

bool FUN_148dacb7e(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  float extraout_XMM0_Da;
  float fVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if ((plVar1 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (plVar1 == (longlong *)0x0) {
      return false;
    }
  }
  else {
    FUN_1456cec3c(plVar1);
  }
  fVar2 = (float)(**(code **)(*plVar1 + 0x2b0))(plVar1);
  (**(code **)(*param_1 + 0xf8))(param_1);
  if (*(char *)(param_2 + 8) == '\0') {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *param_2;
  }
  return fVar2 - extraout_XMM0_Da <= fVar3;
}



// FUNCTION 148dacbfe FUN_148dacbfe body=446 status=ok
// SIG undefined FUN_148dacbfe(void)

void FUN_148dacbfe(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined1 local_50 [32];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 1;
  cVar1 = *(char *)(param_1 + 0xb19);
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') goto LAB_148dacd3c;
      if ((param_2 == '\0') ||
         ((plVar4 = (longlong *)(param_1 + 0x428), *(longlong *)(param_1 + 0x430) == 0 &&
          (*plVar4 == 0)))) {
        plVar4 = (longlong *)(param_1 + 0x1e8);
      }
      lVar3 = *plVar4;
      lVar2 = plVar4[1];
      local_68 = lVar3;
      if (DAT_14c950c29 == '\x01') {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = plVar4[1];
        }
      }
      local_58 = (undefined4)plVar4[2];
      lStack_60 = lVar2;
      if (lVar3 != 0 || lVar2 != 0) goto LAB_148dacd3c;
    }
    if ((param_2 == '\0') ||
       ((plVar4 = (longlong *)(param_1 + 0x410), *(longlong *)(param_1 + 0x418) == 0 &&
        (*plVar4 == 0)))) {
      plVar4 = (longlong *)(param_1 + 0x1d0);
    }
    lVar3 = *plVar4;
    lVar2 = plVar4[1];
    local_68 = lVar3;
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = plVar4[1];
      }
    }
    local_58 = (undefined4)plVar4[2];
    lStack_60 = lVar2;
    if (lVar3 != 0 || lVar2 != 0) goto LAB_148dacd3c;
  }
  if ((param_2 == '\0') ||
     ((plVar4 = (longlong *)(param_1 + 0x3f8), *(longlong *)(param_1 + 0x400) == 0 && (*plVar4 == 0)
      ))) {
    plVar4 = (longlong *)(param_1 + 0x1b8);
  }
  local_68 = *plVar4;
  lVar3 = plVar4[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = plVar4[1];
    }
  }
  local_58 = (undefined4)plVar4[2];
  lStack_60 = lVar3;
LAB_148dacd3c:
  FUN_143cbb31c(param_1 + 0xa10,&local_68);
  FUN_140f7ece8(local_50,param_1 + 0x300);
  local_30 = 1;
  FUN_1403201ee(param_1,5,local_50);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dacdbe FUN_148dacdbe body=194 status=ok
// SIG undefined FUN_148dacdbe(void)

void FUN_148dacdbe(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148dace82(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  FUN_147acfca8(param_1,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dace82 FUN_148dace82 body=208 status=ok
// SIG undefined FUN_148dace82(void)

undefined8 FUN_148dace82(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1465c9b78();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dacf58 FUN_148dacf58 body=46 status=ok
// SIG undefined FUN_148dacf58(void)

void FUN_148dacf58(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10f0))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148dacf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10e8))(param_1);
    return;
  }
  return;
}



// FUNCTION 148dacf92 FUN_148dacf92 body=8 status=ok
// SIG undefined FUN_148dacf92(void)

void FUN_148dacf92(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x3de) = 0;
  return;
}



// FUNCTION 148dacf9a FUN_148dacf9a body=41 status=ok
// SIG undefined FUN_148dacf9a(void)

void FUN_148dacf9a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_148aa7628(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dacfc4 FUN_148dacfc4 body=41 status=ok
// SIG undefined FUN_148dacfc4(void)

void FUN_148dacfc4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_148aa77dc(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dacfee FUN_148dacfee body=41 status=ok
// SIG undefined FUN_148dacfee(void)

void FUN_148dacfee(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_143f4580e(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad018 FUN_148dad018 body=41 status=ok
// SIG undefined FUN_148dad018(void)

void FUN_148dad018(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_143f45932(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad042 FUN_148dad042 body=41 status=ok
// SIG undefined FUN_148dad042(void)

void FUN_148dad042(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_148aa78f6(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad06c FUN_148dad06c body=41 status=ok
// SIG undefined FUN_148dad06c(void)

void FUN_148dad06c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_148aa8856(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad096 FUN_148dad096 body=41 status=ok
// SIG undefined FUN_148dad096(void)

void FUN_148dad096(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_148aa8950(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad0c0 FUN_148dad0c0 body=41 status=ok
// SIG undefined FUN_148dad0c0(void)

void FUN_148dad0c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_148aa8a66(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad0ea FUN_148dad0ea body=40 status=ok
// SIG undefined FUN_148dad0ea(void)

void FUN_148dad0ea(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 == 0) {
    return;
  }
  FUN_148da85ea(lVar1,param_2);
  return;
}



// FUNCTION 148dad112 FUN_148dad112 body=52 status=ok
// SIG undefined FUN_148dad112(void)

ulonglong FUN_148dad112(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  bVar1 = 0;
  if (lVar2 != 0) {
    param_1 = lVar2;
    bVar1 = FUN_148da8656(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 148dad146 FUN_148dad146 body=40 status=ok
// SIG undefined FUN_148dad146(void)

void FUN_148dad146(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 == 0) {
    return;
  }
  FUN_148da86b6(lVar1,param_2);
  return;
}



// FUNCTION 148dad16e FUN_148dad16e body=41 status=ok
// SIG undefined FUN_148dad16e(void)

void FUN_148dad16e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_148aa8da2(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad198 FUN_148dad198 body=41 status=ok
// SIG undefined FUN_148dad198(void)

void FUN_148dad198(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_148aa90f2(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad1c2 FUN_148dad1c2 body=41 status=ok
// SIG undefined FUN_148dad1c2(void)

void FUN_148dad1c2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_148aa9208(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad20c FUN_148dad20c body=73 status=ok
// SIG undefined FUN_148dad20c(void)

void FUN_148dad20c(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    FUN_148eea6c8(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c],param_2);
    return;
  }
  return;
}



// FUNCTION 148dad256 FUN_148dad256 body=73 status=ok
// SIG undefined FUN_148dad256(void)

void FUN_148dad256(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    FUN_148eea6fe(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c],param_2);
    return;
  }
  return;
}



// FUNCTION 148dad2a0 FUN_148dad2a0 body=73 status=ok
// SIG undefined FUN_148dad2a0(void)

void FUN_148dad2a0(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    FUN_148eea734(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c],param_2);
    return;
  }
  return;
}



// FUNCTION 148dad2ea FUN_148dad2ea body=72 status=ok
// SIG undefined FUN_148dad2ea(void)

ulonglong FUN_148dad2ea(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    uVar3 = FUN_148eea790(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c]);
    return uVar3;
  }
  return (ulonglong)DAT_14cbcf420;
}



// FUNCTION 148dad332 FUN_148dad332 body=85 status=ok
// SIG undefined FUN_148dad332(void)

void FUN_148dad332(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    FUN_148eea7b8(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c],param_2);
    return;
  }
  return;
}



// FUNCTION 148dad388 FUN_148dad388 body=73 status=ok
// SIG undefined FUN_148dad388(void)

void FUN_148dad388(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    FUN_148eea7fc(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c],param_2);
    return;
  }
  return;
}



// FUNCTION 148dad3d2 FUN_148dad3d2 body=74 status=ok
// SIG undefined FUN_148dad3d2(void)

void FUN_148dad3d2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    FUN_148eea850(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c],param_2);
    return;
  }
  return;
}



// FUNCTION 148dad41c FUN_148dad41c body=83 status=ok
// SIG undefined FUN_148dad41c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148dad41c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  uVar1 = _DAT_14cbcf444;
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0xb8) == 0)) {
    *param_2 = _DAT_14cbcf43c;
    param_2[1] = uVar1;
  }
  else {
    FUN_148eea88a(*(longlong *)(lVar2 + 0xb8),param_2,(int)param_1[0x1c]);
  }
  return param_2;
}



// FUNCTION 148dad470 FUN_148dad470 body=74 status=ok
// SIG undefined FUN_148dad470(void)

void FUN_148dad470(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    FUN_148eea8b8(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c],param_2);
    return;
  }
  return;
}



// FUNCTION 148dad4ba FUN_148dad4ba body=73 status=ok
// SIG undefined FUN_148dad4ba(void)

void FUN_148dad4ba(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    FUN_148eea8f2(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c],param_2);
    return;
  }
  return;
}



// FUNCTION 148dad504 FUN_148dad504 body=74 status=ok
// SIG undefined FUN_148dad504(void)

void FUN_148dad504(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    FUN_148eea928(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c],param_2);
    return;
  }
  return;
}



// FUNCTION 148dad54e FUN_148dad54e body=73 status=ok
// SIG undefined FUN_148dad54e(void)

void FUN_148dad54e(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    FUN_148eea962(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c],param_2);
    return;
  }
  return;
}



// FUNCTION 148dad598 FUN_148dad598 body=41 status=ok
// SIG undefined FUN_148dad598(void)

void FUN_148dad598(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140dbae30();
  if (lVar1 != 0) {
    FUN_148e28fd4(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad5c2 FUN_148dad5c2 body=41 status=ok
// SIG undefined FUN_148dad5c2(void)

void FUN_148dad5c2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140dbae30();
  if (lVar1 != 0) {
    FUN_148e29074(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad5ec FUN_148dad5ec body=41 status=ok
// SIG undefined FUN_148dad5ec(void)

void FUN_148dad5ec(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140dbae30();
  if (lVar1 != 0) {
    FUN_148e29118(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dad616 FUN_148dad616 body=7 status=ok
// SIG undefined FUN_148dad616(void)

void FUN_148dad616(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3df) = param_2;
  return;
}



// FUNCTION 148dad61e FUN_148dad61e body=102 status=ok
// SIG undefined FUN_148dad61e(void)

void FUN_148dad61e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0b5e(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dad684 FUN_148dad684 body=102 status=ok
// SIG undefined FUN_148dad684(void)

void FUN_148dad684(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0ba2(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dad6ea FUN_148dad6ea body=1 status=ok
// SIG undefined FUN_148dad6ea(void)

void FUN_148dad6ea(void)

{
  return;
}



// FUNCTION 148dad6ec FUN_148dad6ec body=83 status=ok
// SIG undefined FUN_148dad6ec(void)

undefined8 FUN_148dad6ec(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_148ef0be6(lVar1,*(undefined4 *)(param_1 + 0xe0));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148dad740 FUN_148dad740 body=89 status=ok
// SIG undefined FUN_148dad740(void)

void FUN_148dad740(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0c00(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dad79a FUN_148dad79a body=89 status=ok
// SIG undefined FUN_148dad79a(void)

void FUN_148dad79a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0c44(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dad7f4 FUN_148dad7f4 body=98 status=ok
// SIG undefined FUN_148dad7f4(void)

void FUN_148dad7f4(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0c88(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
      FUN_148db6032(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148dad856 FUN_148dad856 body=89 status=ok
// SIG undefined FUN_148dad856(void)

void FUN_148dad856(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0cb8(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dad8b0 FUN_148dad8b0 body=89 status=ok
// SIG undefined FUN_148dad8b0(void)

void FUN_148dad8b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0ce8(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dad90a FUN_148dad90a body=84 status=ok
// SIG undefined FUN_148dad90a(void)

void FUN_148dad90a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar1 = FUN_1411c648e(uVar2);
  if (lVar1 != 0) {
    FUN_148eeb2d8(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
    return;
  }
  return;
}



// FUNCTION 148dad95e FUN_148dad95e body=72 status=ok
// SIG undefined FUN_148dad95e(void)

void FUN_148dad95e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar1 = FUN_1411c648e(uVar2);
  if (lVar1 != 0) {
    FUN_148eeb31c(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
    return;
  }
  return;
}



// FUNCTION 148dad9a6 FUN_148dad9a6 body=72 status=ok
// SIG undefined FUN_148dad9a6(void)

void FUN_148dad9a6(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar1 = FUN_1411c648e(uVar2);
  if (lVar1 != 0) {
    FUN_148eeb350(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
    return;
  }
  return;
}



// FUNCTION 148dad9ee FUN_148dad9ee body=84 status=ok
// SIG undefined FUN_148dad9ee(void)

void FUN_148dad9ee(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar1 = FUN_1411c648e(uVar2);
  if (lVar1 != 0) {
    FUN_148eeb826(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
    return;
  }
  return;
}



// FUNCTION 148dada42 FUN_148dada42 body=84 status=ok
// SIG undefined FUN_148dada42(void)

void FUN_148dada42(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar1 = FUN_1411c648e(uVar2);
  if (lVar1 != 0) {
    FUN_148eeb8da(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
    return;
  }
  return;
}



// FUNCTION 148dada96 FUN_148dada96 body=72 status=ok
// SIG undefined FUN_148dada96(void)

void FUN_148dada96(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar1 = FUN_1411c648e(uVar2);
  if (lVar1 != 0) {
    FUN_148eeb91e(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
    return;
  }
  return;
}



// FUNCTION 148dadade FUN_148dadade body=18 status=ok
// SIG undefined FUN_148dadade(void)

void FUN_148dadade(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1000) = param_2;
  FUN_1447f69b6(param_1 + 0x400);
  return;
}



// FUNCTION 148dadaf0 FUN_148dadaf0 body=18 status=ok
// SIG undefined FUN_148dadaf0(void)

void FUN_148dadaf0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3ec) = param_2;
  FUN_1447f69b6(param_1 + 0x418);
  return;
}



// FUNCTION 148dadb02 FUN_148dadb02 body=27 status=ok
// SIG undefined FUN_148dadb02(void)

void FUN_148dadb02(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x3f0) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x3f0) = param_2;
  FUN_1447f69b6(param_1 + 0x418);
  return;
}



// FUNCTION 148dadb1e FUN_148dadb1e body=7 status=ok
// SIG undefined FUN_148dadb1e(void)

void FUN_148dadb1e(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x361) = param_2;
  return;
}



// FUNCTION 148dadb26 FUN_148dadb26 body=7 status=ok
// SIG undefined FUN_148dadb26(void)

void FUN_148dadb26(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x362) = param_2;
  return;
}



// FUNCTION 148dadb2e FUN_148dadb2e body=7 status=ok
// SIG undefined FUN_148dadb2e(void)

void FUN_148dadb2e(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x363) = param_2;
  return;
}



// FUNCTION 148dadb36 FUN_148dadb36 body=7 status=ok
// SIG undefined FUN_148dadb36(void)

void FUN_148dadb36(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x364) = param_2;
  return;
}



// FUNCTION 148dadb3e FUN_148dadb3e body=7 status=ok
// SIG undefined FUN_148dadb3e(void)

void FUN_148dadb3e(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x365) = param_2;
  return;
}



// FUNCTION 148dadb46 FUN_148dadb46 body=7 status=ok
// SIG undefined FUN_148dadb46(void)

void FUN_148dadb46(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x366) = param_2;
  return;
}



// FUNCTION 148dadb4e FUN_148dadb4e body=7 status=ok
// SIG undefined FUN_148dadb4e(void)

void FUN_148dadb4e(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x367) = param_2;
  return;
}



// FUNCTION 148dadb56 FUN_148dadb56 body=7 status=ok
// SIG undefined FUN_148dadb56(void)

void FUN_148dadb56(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x368) = param_2;
  return;
}



// FUNCTION 148dadb5e FUN_148dadb5e body=9 status=ok
// SIG undefined FUN_148dadb5e(void)

void FUN_148dadb5e(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x36c) = param_2;
  return;
}



// FUNCTION 148dadb68 FUN_148dadb68 body=7 status=ok
// SIG undefined FUN_148dadb68(void)

void FUN_148dadb68(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x370) = param_2;
  return;
}



// FUNCTION 148dadb70 FUN_148dadb70 body=11 status=ok
// SIG undefined FUN_148dadb70(void)

void FUN_148dadb70(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x371) = param_2;
  FUN_1457f96b6();
  return;
}



// FUNCTION 148dadb7c FUN_148dadb7c body=9 status=ok
// SIG undefined FUN_148dadb7c(void)

void FUN_148dadb7c(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x374) = param_2;
  return;
}



// FUNCTION 148dadb86 FUN_148dadb86 body=9 status=ok
// SIG undefined FUN_148dadb86(void)

void FUN_148dadb86(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x378) = param_2;
  return;
}



// FUNCTION 148dadb90 FUN_148dadb90 body=9 status=ok
// SIG undefined FUN_148dadb90(void)

void FUN_148dadb90(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x37c) = param_2;
  return;
}



// FUNCTION 148dadb9a FUN_148dadb9a body=9 status=ok
// SIG undefined FUN_148dadb9a(void)

void FUN_148dadb9a(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x380) = param_2;
  return;
}



// FUNCTION 148dadba4 FUN_148dadba4 body=9 status=ok
// SIG undefined FUN_148dadba4(void)

void FUN_148dadba4(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3a0) = param_2;
  return;
}



// FUNCTION 148dadbae FUN_148dadbae body=9 status=ok
// SIG undefined FUN_148dadbae(void)

void FUN_148dadbae(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3a4) = param_2;
  return;
}



// FUNCTION 148dadbb8 FUN_148dadbb8 body=9 status=ok
// SIG undefined FUN_148dadbb8(void)

void FUN_148dadbb8(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3a8) = param_2;
  return;
}



// FUNCTION 148dadbc2 FUN_148dadbc2 body=9 status=ok
// SIG undefined FUN_148dadbc2(void)

void FUN_148dadbc2(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3ac) = param_2;
  return;
}



// FUNCTION 148dadbcc FUN_148dadbcc body=7 status=ok
// SIG undefined FUN_148dadbcc(void)

void FUN_148dadbcc(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b0) = param_2;
  return;
}



// FUNCTION 148dadbd4 FUN_148dadbd4 body=9 status=ok
// SIG undefined FUN_148dadbd4(void)

void FUN_148dadbd4(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38c) = param_2;
  return;
}



// FUNCTION 148dadbde FUN_148dadbde body=9 status=ok
// SIG undefined FUN_148dadbde(void)

void FUN_148dadbde(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x390) = param_2;
  return;
}



// FUNCTION 148dadbe8 FUN_148dadbe8 body=9 status=ok
// SIG undefined FUN_148dadbe8(void)

void FUN_148dadbe8(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x394) = param_2;
  return;
}



// FUNCTION 148dadbf2 FUN_148dadbf2 body=9 status=ok
// SIG undefined FUN_148dadbf2(void)

void FUN_148dadbf2(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x398) = param_2;
  return;
}



// FUNCTION 148dadbfc FUN_148dadbfc body=9 status=ok
// SIG undefined FUN_148dadbfc(void)

void FUN_148dadbfc(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 900) = param_2;
  return;
}



// FUNCTION 148dadc06 FUN_148dadc06 body=9 status=ok
// SIG undefined FUN_148dadc06(void)

void FUN_148dadc06(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x388) = param_2;
  return;
}



// FUNCTION 148dadc10 FUN_148dadc10 body=7 status=ok
// SIG undefined FUN_148dadc10(void)

void FUN_148dadc10(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x39c) = param_2;
  return;
}



// FUNCTION 148dadc18 FUN_148dadc18 body=7 status=ok
// SIG undefined FUN_148dadc18(void)

void FUN_148dadc18(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b1) = param_2;
  return;
}



// FUNCTION 148dadc20 FUN_148dadc20 body=7 status=ok
// SIG undefined FUN_148dadc20(void)

void FUN_148dadc20(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b2) = param_2;
  return;
}



// FUNCTION 148dadc28 FUN_148dadc28 body=7 status=ok
// SIG undefined FUN_148dadc28(void)

void FUN_148dadc28(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b3) = param_2;
  return;
}



// FUNCTION 148dadc30 FUN_148dadc30 body=7 status=ok
// SIG undefined FUN_148dadc30(void)

void FUN_148dadc30(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b4) = param_2;
  return;
}



// FUNCTION 148dadc38 FUN_148dadc38 body=7 status=ok
// SIG undefined FUN_148dadc38(void)

void FUN_148dadc38(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b5) = param_2;
  return;
}



// FUNCTION 148dadc40 FUN_148dadc40 body=7 status=ok
// SIG undefined FUN_148dadc40(void)

void FUN_148dadc40(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b6) = param_2;
  return;
}



// FUNCTION 148dadc48 FUN_148dadc48 body=7 status=ok
// SIG undefined FUN_148dadc48(void)

void FUN_148dadc48(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b7) = param_2;
  return;
}



// FUNCTION 148dadc50 FUN_148dadc50 body=7 status=ok
// SIG undefined FUN_148dadc50(void)

void FUN_148dadc50(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b8) = param_2;
  return;
}



// FUNCTION 148dadc58 FUN_148dadc58 body=9 status=ok
// SIG undefined FUN_148dadc58(void)

void FUN_148dadc58(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3bc) = param_2;
  return;
}



// FUNCTION 148dadc62 FUN_148dadc62 body=9 status=ok
// SIG undefined FUN_148dadc62(void)

void FUN_148dadc62(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c0) = param_2;
  return;
}



// FUNCTION 148dadc6c FUN_148dadc6c body=9 status=ok
// SIG undefined FUN_148dadc6c(void)

void FUN_148dadc6c(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c4) = param_2;
  return;
}



// FUNCTION 148dadc76 FUN_148dadc76 body=9 status=ok
// SIG undefined FUN_148dadc76(void)

void FUN_148dadc76(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c8) = param_2;
  return;
}



// FUNCTION 148dadc80 FUN_148dadc80 body=9 status=ok
// SIG undefined FUN_148dadc80(void)

void FUN_148dadc80(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3cc) = param_2;
  return;
}



// FUNCTION 148dadc8a FUN_148dadc8a body=9 status=ok
// SIG undefined FUN_148dadc8a(void)

void FUN_148dadc8a(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3d0) = param_2;
  return;
}



// FUNCTION 148dadc94 FUN_148dadc94 body=9 status=ok
// SIG undefined FUN_148dadc94(void)

void FUN_148dadc94(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3d4) = param_2;
  return;
}



// FUNCTION 148dadc9e FUN_148dadc9e body=9 status=ok
// SIG undefined FUN_148dadc9e(void)

void FUN_148dadc9e(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3d8) = param_2;
  return;
}



// FUNCTION 148dadca8 FUN_148dadca8 body=9 status=ok
// SIG undefined FUN_148dadca8(void)

void FUN_148dadca8(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3f8) = param_2;
  return;
}



// FUNCTION 148dadcb2 FUN_148dadcb2 body=7 status=ok
// SIG undefined FUN_148dadcb2(void)

void FUN_148dadcb2(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3dc) = param_2;
  return;
}



// FUNCTION 148dadcba FUN_148dadcba body=7 status=ok
// SIG undefined FUN_148dadcba(void)

void FUN_148dadcba(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3dd) = param_2;
  return;
}



// FUNCTION 148dadcc2 FUN_148dadcc2 body=7 status=ok
// SIG undefined FUN_148dadcc2(void)

void FUN_148dadcc2(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x430) = param_2;
  return;
}



// FUNCTION 148dadcec FUN_148dadcec body=7 status=ok
// SIG undefined FUN_148dadcec(void)

void FUN_148dadcec(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x431) = param_2;
  return;
}



// FUNCTION 148dadcf4 FUN_148dadcf4 body=74 status=ok
// SIG undefined FUN_148dadcf4(void)

void FUN_148dadcf4(longlong param_1)

{
  FUN_1456d172d(*(undefined8 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x450));
  *(undefined4 *)(param_1 + 0x450) = 0;
  if (*(int *)(param_1 + 0x454) != 0) {
    FUN_140179e18(param_1 + 0x448,0);
    return;
  }
  return;
}



// FUNCTION 148dadd3e FUN_148dadd3e body=72 status=ok
// SIG undefined FUN_148dadd3e(void)

void FUN_148dadd3e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80) != 0)) {
    lVar1 = FUN_1459b10c6();
    if (lVar1 != 0) {
      FUN_143f464a4(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dadd86 FUN_148dadd86 body=39 status=ok
// SIG undefined FUN_148dadd86(void)

void FUN_148dadd86(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f73f0();
  if (lVar1 != 0) {
    FUN_148a958de(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148daddae FUN_148daddae body=85 status=ok
// SIG undefined FUN_148daddae(void)

void FUN_148daddae(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80) != 0)) {
    lVar1 = FUN_140b64196();
    if (lVar1 != 0) {
      FUN_148aabed6(lVar1,*(undefined4 *)(param_1 + 0xe0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dade04 FUN_148dade04 body=58 status=ok
// SIG undefined FUN_148dade04(void)

undefined8 FUN_148dade04(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (param_1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80), param_1 != 0)) {
    lVar2 = FUN_140b64196();
    if (lVar2 != 0) {
      uVar3 = FUN_148aac0ec(lVar2);
      bVar5 = (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar1 = 1;
      goto LAB_148dade37;
    }
  }
  bVar5 = (byte)param_1;
  bVar1 = 0;
  uVar4 = 0;
LAB_148dade37:
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 148dade3e FUN_148dade3e body=102 status=ok
// SIG undefined FUN_148dade3e(void)

void FUN_148dade3e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80) != 0)) {
    lVar1 = FUN_140b64196();
    if (lVar1 != 0) {
      FUN_143f45d52(lVar1,*(undefined4 *)(param_1 + 0xe0),(byte)param_2 ^ 1);
    }
  }
  lVar1 = FUN_1458f73f0(param_1);
  if (lVar1 != 0) {
    FUN_148a958d0(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dadea4 FUN_148dadea4 body=39 status=ok
// SIG undefined FUN_148dadea4(void)

void FUN_148dadea4(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f73f0();
  if (lVar1 != 0) {
    FUN_148a9576a(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dadecc FUN_148dadecc body=39 status=ok
// SIG undefined FUN_148dadecc(void)

void FUN_148dadecc(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f73f0();
  if (lVar1 != 0) {
    FUN_148a9594c(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dadef4 FUN_148dadef4 body=42 status=ok
// SIG undefined FUN_148dadef4(void)

void FUN_148dadef4(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f73f0();
  if (lVar1 != 0) {
    FUN_148d9378c(lVar1,param_2 ^ 1);
    return;
  }
  return;
}



// FUNCTION 148dadf1e FUN_148dadf1e body=39 status=ok
// SIG undefined FUN_148dadf1e(void)

void FUN_148dadf1e(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f73f0();
  if (lVar1 != 0) {
    FUN_148a95982(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dadf46 FUN_148dadf46 body=55 status=ok
// SIG undefined FUN_148dadf46(void)

void FUN_148dadf46(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_148a95ff4(param_2);
  lVar1 = FUN_1458f73f0(param_1);
  if (lVar1 != 0) {
    FUN_148a95996(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dadf7e FUN_148dadf7e body=55 status=ok
// SIG undefined FUN_148dadf7e(void)

void FUN_148dadf7e(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_148a96010(param_2);
  lVar1 = FUN_1458f73f0(param_1);
  if (lVar1 != 0) {
    FUN_148a959aa(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dadfb6 FUN_148dadfb6 body=39 status=ok
// SIG undefined FUN_148dadfb6(void)

void FUN_148dadfb6(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f73f0();
  if (lVar1 != 0) {
    FUN_148a959be(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dadfde FUN_148dadfde body=39 status=ok
// SIG undefined FUN_148dadfde(void)

void FUN_148dadfde(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f73f0();
  if (lVar1 != 0) {
    FUN_148a959d2(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dae006 FUN_148dae006 body=46 status=ok
// SIG undefined FUN_148dae006(void)

undefined8 * FUN_148dae006(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f73f0();
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_148a9570c(lVar1,param_2);
  }
  return param_2;
}



// FUNCTION 148dae034 FUN_148dae034 body=41 status=ok
// SIG undefined FUN_148dae034(void)

void FUN_148dae034(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f73f0();
  if (lVar1 != 0) {
    FUN_148a959e6(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dae05e FUN_148dae05e body=25 status=ok
// SIG undefined FUN_148dae05e(void)

void FUN_148dae05e(longlong param_1,float param_2)

{
  if (3.4028235e+38 <= param_2) {
    param_2 = 3.4028235e+38;
  }
  if (param_2 <= 1.0) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0x3e0) = param_2;
  return;
}



// FUNCTION 148dae078 FUN_148dae078 body=7 status=ok
// SIG undefined FUN_148dae078(void)

void FUN_148dae078(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3e4) = param_2;
  return;
}



// FUNCTION 148dae080 FUN_148dae080 body=7 status=ok
// SIG undefined FUN_148dae080(void)

void FUN_148dae080(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x45a) = param_2;
  return;
}



// FUNCTION 148dae088 FUN_148dae088 body=7 status=ok
// SIG undefined FUN_148dae088(void)

void FUN_148dae088(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x45b) = param_2;
  return;
}



// FUNCTION 148dae090 FUN_148dae090 body=12 status=ok
// SIG undefined FUN_148dae090(void)

void FUN_148dae090(longlong param_1)

{
  FUN_144a787a6(param_1 + 0x460);
  return;
}



// FUNCTION 148dae09c FUN_148dae09c body=12 status=ok
// SIG undefined FUN_148dae09c(void)

void FUN_148dae09c(longlong param_1)

{
  FUN_144a787a6(param_1 + 0x470);
  return;
}



// FUNCTION 148dae0a8 FUN_148dae0a8 body=23 status=ok
// SIG undefined FUN_148dae0a8(void)

void FUN_148dae0a8(longlong param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  
  *(char *)(param_1 + 0x4c4) = param_2;
  if (DAT_14cb259f8 == 0) {
    return;
  }
  if (DAT_14cb25ab0 == '\x01') {
    plVar2 = (longlong *)FUN_144a7e30a();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    if (*(int *)(lVar3 + 0x1e0) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)(lVar3 + 0x1d8);
    }
    uVar5 = 0;
    uVar1 = 0;
    if (pwVar4 != (wchar_t *)0x0) {
      uVar1 = AK::SoundEngine::GetIDFromString(pwVar4);
    }
    if (param_2 != '\0') {
      uVar5 = 0x4101;
    }
    AK::SoundEngine::SetBusConfig(uVar1,uVar5);
    return;
  }
  return;
}



// FUNCTION 148dae0c0 FUN_148dae0c0 body=150 status=ok
// SIG undefined FUN_148dae0c0(void)

undefined8 * FUN_148dae0c0(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_144a7e30a();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      FUN_140056680(param_1,&DAT_149dfb77a);
      return param_1;
    }
  }
  *param_1 = 0;
  iVar1 = *(int *)(lVar3 + 0x168);
  _Src = *(void **)(lVar3 + 0x160);
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148dae156 FUN_148dae156 body=104 status=ok
// SIG undefined FUN_148dae156(void)

undefined8 * FUN_148dae156(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_2 = 0;
  plVar1 = (longlong *)FUN_144a7e30a();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return param_2;
    }
  }
  lVar2 = FUN_140d57e10(lVar2,param_1 + 0x4c8);
  if (lVar2 != 0) {
    *param_2 = *(undefined8 *)(lVar2 + 0x14);
  }
  return param_2;
}



// FUNCTION 148dae1be FUN_148dae1be body=173 status=ok
// SIG undefined FUN_148dae1be(void)

longlong * FUN_148dae1be(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14b9917b0;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14b991740;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 148dae26c FUN_148dae26c body=832 status=ok
// SIG undefined FUN_148dae26c(void)

void FUN_148dae26c(longlong param_1)

{
  wchar_t *pwVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  wchar_t **local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_94 [4];
  wchar_t *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong *local_70 [2];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = FUN_145da44aa();
  if (lVar4 != 0) {
    local_90 = L"InstallHeaderText";
    local_88 = 0x11;
    FUN_1446e940c(&local_50,&local_90);
    local_90 = L"AudioLanguage";
    local_88 = 0xd;
    FUN_1446e940c(local_70,&local_90);
    FUN_140208bae(local_60,local_70,&local_50,L"Audio Language");
    local_90 = L"InstallBodyText";
    local_88 = 0xf;
    FUN_1446e940c(&local_50,&local_90);
    local_90 = L"AudioLanguage";
    local_88 = 0xd;
    FUN_1446e940c(&local_a8,&local_90);
    FUN_140208bae(local_70,&local_a8,&local_50,
                  L"The selected audio language has been marked for installation and will be enabled when complete."
                 );
    plVar5 = (longlong *)FUN_140e82300();
    local_90 = (wchar_t *)*plVar5;
    if (local_90 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_90 + 8))();
    }
    local_88 = (undefined4)plVar5[1];
    local_80 = 0;
    local_78 = 1;
    local_50 = L"InstallContinueText";
    local_48 = 0x13;
    FUN_1446e940c(&local_a8,&local_50);
    local_50 = L"AudioLanguage";
    local_48 = 0xd;
    FUN_1446e940c(local_94,&local_50);
    FUN_140208bae(&local_50,local_94,&local_a8,L"Continue");
    FUN_140008f88(&local_90,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_78 = 0;
    if (*(int *)(param_1 + 0x4dc) == -1) {
      local_50 = (wchar_t *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      pwVar1 = local_50;
      local_48 = 3;
      *(undefined ***)local_50 = &PTR_LAB_14b972ed0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      *(longlong *)(local_50 + 8) = lVar6;
      *(undefined ***)local_50 = &PTR_FUN_14b991820;
      local_50[0xc] = L'\0';
      local_50[0xd] = L'\0';
      local_50[0xe] = L'\0';
      local_50[0xf] = L'\0';
      FUN_14485c47a(local_50 + 0xc,param_1);
      *(longlong *)(pwVar1 + 0x10) = param_1;
      local_a8 = 0;
      local_a0 = 1;
      FUN_1459de124(&local_a8,1,0);
      FUN_14143c535(local_a8,&local_90,1);
      local_c0 = 0;
      local_b0 = 1;
      local_b8 = 0;
      local_c8 = &local_50;
      uVar3 = FUN_1461db750(lVar4,local_60,local_70,&local_a8);
      *(undefined4 *)(param_1 + 0x4dc) = uVar3;
      FUN_140e0067b(local_a8,local_a0);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1449db362(&local_50);
    }
    if (local_90 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_90 + 0x10))();
    }
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dae5ae FUN_148dae5ae body=90 status=ok
// SIG undefined FUN_148dae5ae(void)

undefined4 FUN_148dae5ae(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_144a7e30a();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  lVar2 = FUN_140d57e10(lVar2,param_1 + 0x4c8);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(lVar2 + 0x10);
}



// FUNCTION 148dae608 FUN_148dae608 body=59 status=ok
// SIG undefined FUN_148dae608(void)

void FUN_148dae608(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x4dc) != -1) {
    lVar1 = FUN_145da44aa();
    if (lVar1 != 0) {
      FUN_146142a30(lVar1,*(undefined4 *)(param_1 + 0x4dc));
    }
    *(undefined4 *)(param_1 + 0x4dc) = 0xffffffff;
  }
  return;
}



// FUNCTION 148dae644 FUN_148dae644 body=173 status=ok
// SIG undefined FUN_148dae644(void)

longlong * FUN_148dae644(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14a7ecea0;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14b991890;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 148dae6f2 FUN_148dae6f2 body=7 status=ok
// SIG undefined FUN_148dae6f2(void)

void FUN_148dae6f2(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4f0) = param_2;
  return;
}



// FUNCTION 148dae6fa FUN_148dae6fa body=43 status=ok
// SIG undefined FUN_148dae6fa(void)

void FUN_148dae6fa(undefined8 param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f73f0();
  if (lVar1 != 0) {
    FUN_148a95ad2(lVar1,param_2 ^ 1);
    return;
  }
  return;
}



// FUNCTION 148dae726 FUN_148dae726 body=38 status=ok
// SIG undefined FUN_148dae726(void)

undefined8 FUN_148dae726(undefined8 param_1,int param_2)

{
  FUN_145cb9082();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dae74c FUN_148dae74c body=38 status=ok
// SIG undefined FUN_148dae74c(void)

undefined8 FUN_148dae74c(undefined8 param_1,int param_2)

{
  FUN_145db27b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dae772 FUN_148dae772 body=66 status=ok
// SIG undefined FUN_148dae772(void)

undefined8 * FUN_148dae772(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b98e110;
  FUN_140457ffc(&DAT_14cb717f8,param_1);
  FUN_145aab9be(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dae7b4 FUN_148dae7b4 body=38 status=ok
// SIG undefined FUN_148dae7b4(void)

undefined8 FUN_148dae7b4(undefined8 param_1,int param_2)

{
  FUN_145aab8ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dae7da FUN_148dae7da body=38 status=ok
// SIG undefined FUN_148dae7da(void)

undefined8 FUN_148dae7da(undefined8 param_1,int param_2)

{
  FUN_141651ffc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dae800 FUN_148dae800 body=69 status=ok
// SIG undefined FUN_148dae800(void)

undefined8 * FUN_148dae800(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b991a50;
  FUN_146630300(param_1 + 8);
  FUN_1449db362(param_1 + 1);
  FUN_140af926c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dae846 FUN_148dae846 body=48 status=ok
// SIG undefined FUN_148dae846(void)

void FUN_148dae846(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 148dae876 FUN_148dae876 body=189 status=ok
// SIG undefined FUN_148dae876(void)

undefined8 * FUN_148dae876(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148dae934 FUN_148dae934 body=94 status=ok
// SIG undefined FUN_148dae934(void)

undefined8 * FUN_148dae934(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x26) == '\x01') {
    FUN_148da6a00(param_1);
  }
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_148da0cf6(param_1 + 2,param_2 + 2);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x26) = 1;
  return param_1;
}



// FUNCTION 148dae992 FUN_148dae992 body=31 status=ok
// SIG undefined FUN_148dae992(void)

undefined8 FUN_148dae992(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dae9ce FUN_148dae9ce body=101 status=ok
// SIG undefined FUN_148dae9ce(void)

void FUN_148dae9ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daea34 FUN_148daea34 body=101 status=ok
// SIG undefined FUN_148daea34(void)

void FUN_148daea34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daea9a FUN_148daea9a body=134 status=ok
// SIG undefined FUN_148daea9a(void)

void FUN_148daea9a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b991aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f590;
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
                    /* WARNING: Could not recover jumptable at 0x000148daeb11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148daeb34 FUN_148daeb34 body=31 status=ok
// SIG undefined FUN_148daeb34(void)

undefined8 FUN_148daeb34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148daeb70 FUN_148daeb70 body=101 status=ok
// SIG undefined FUN_148daeb70(void)

void FUN_148daeb70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daebd6 FUN_148daebd6 body=101 status=ok
// SIG undefined FUN_148daebd6(void)

void FUN_148daebd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daec3c FUN_148daec3c body=134 status=ok
// SIG undefined FUN_148daec3c(void)

void FUN_148daec3c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f600;
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
                    /* WARNING: Could not recover jumptable at 0x000148daecb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148daecd2 FUN_148daecd2 body=31 status=ok
// SIG undefined FUN_148daecd2(void)

undefined8 FUN_148daecd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148daed0e FUN_148daed0e body=101 status=ok
// SIG undefined FUN_148daed0e(void)

void FUN_148daed0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daed74 FUN_148daed74 body=101 status=ok
// SIG undefined FUN_148daed74(void)

void FUN_148daed74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daedda FUN_148daedda body=134 status=ok
// SIG undefined FUN_148daedda(void)

void FUN_148daedda(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f670;
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
                    /* WARNING: Could not recover jumptable at 0x000148daee51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148daee72 FUN_148daee72 body=31 status=ok
// SIG undefined FUN_148daee72(void)

undefined8 FUN_148daee72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148daeeaa FUN_148daeeaa body=101 status=ok
// SIG undefined FUN_148daeeaa(void)

void FUN_148daeeaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daef10 FUN_148daef10 body=101 status=ok
// SIG undefined FUN_148daef10(void)

void FUN_148daef10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daef76 FUN_148daef76 body=134 status=ok
// SIG undefined FUN_148daef76(void)

void FUN_148daef76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b991970;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f6e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148daefed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148daf00e FUN_148daf00e body=25 status=ok
// SIG undefined FUN_148daf00e(void)

undefined8 FUN_148daf00e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148daf02a FUN_148daf02a body=31 status=ok
// SIG undefined FUN_148daf02a(void)

undefined8 FUN_148daf02a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148daf066 FUN_148daf066 body=101 status=ok
// SIG undefined FUN_148daf066(void)

void FUN_148daf066(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daf0cc FUN_148daf0cc body=101 status=ok
// SIG undefined FUN_148daf0cc(void)

void FUN_148daf0cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daf132 FUN_148daf132 body=134 status=ok
// SIG undefined FUN_148daf132(void)

void FUN_148daf132(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f750;
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
                    /* WARNING: Could not recover jumptable at 0x000148daf1a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148daf1ca FUN_148daf1ca body=31 status=ok
// SIG undefined FUN_148daf1ca(void)

undefined8 FUN_148daf1ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148daf206 FUN_148daf206 body=101 status=ok
// SIG undefined FUN_148daf206(void)

void FUN_148daf206(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968eb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f7c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daf26c FUN_148daf26c body=101 status=ok
// SIG undefined FUN_148daf26c(void)

void FUN_148daf26c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968eb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f7c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daf2d2 FUN_148daf2d2 body=134 status=ok
// SIG undefined FUN_148daf2d2(void)

void FUN_148daf2d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b968eb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f7c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148daf349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148daf36a FUN_148daf36a body=31 status=ok
// SIG undefined FUN_148daf36a(void)

undefined8 FUN_148daf36a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148daf3a6 FUN_148daf3a6 body=101 status=ok
// SIG undefined FUN_148daf3a6(void)

void FUN_148daf3a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daf40c FUN_148daf40c body=101 status=ok
// SIG undefined FUN_148daf40c(void)

void FUN_148daf40c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daf472 FUN_148daf472 body=134 status=ok
// SIG undefined FUN_148daf472(void)

void FUN_148daf472(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972d50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f830;
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
                    /* WARNING: Could not recover jumptable at 0x000148daf4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148daf50a FUN_148daf50a body=31 status=ok
// SIG undefined FUN_148daf50a(void)

undefined8 FUN_148daf50a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148daf53a FUN_148daf53a body=101 status=ok
// SIG undefined FUN_148daf53a(void)

void FUN_148daf53a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f8a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daf5a0 FUN_148daf5a0 body=101 status=ok
// SIG undefined FUN_148daf5a0(void)

void FUN_148daf5a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f8a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148daf606 FUN_148daf606 body=134 status=ok
// SIG undefined FUN_148daf606(void)

void FUN_148daf606(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f8a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148daf67d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148daf69e FUN_148daf69e body=114 status=ok
// SIG undefined FUN_148daf69e(void)

void FUN_148daf69e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 148daf710 FUN_148daf710 body=29 status=ok
// SIG undefined FUN_148daf710(void)

undefined8 FUN_148daf710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148daf74a FUN_148daf74a body=93 status=ok
// SIG undefined FUN_148daf74a(void)

void FUN_148daf74a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968eb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f9c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148daf7a8 FUN_148daf7a8 body=93 status=ok
// SIG undefined FUN_148daf7a8(void)

void FUN_148daf7a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968eb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f9c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148daf806 FUN_148daf806 body=126 status=ok
// SIG undefined FUN_148daf806(void)

void FUN_148daf806(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b968eb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f9c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148daf875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148daf892 FUN_148daf892 body=21 status=ok
// SIG undefined FUN_148daf892(void)

undefined8 FUN_148daf892(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148daf8a8 FUN_148daf8a8 body=68 status=ok
// SIG undefined FUN_148daf8a8(void)

undefined8 * FUN_148daf8a8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fa50;
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



// FUNCTION 148daf8f0 FUN_148daf8f0 body=81 status=ok
// SIG undefined FUN_148daf8f0(void)

undefined8 FUN_148daf8f0(longlong param_1)

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



// FUNCTION 148daf948 FUN_148daf948 body=91 status=ok
// SIG undefined FUN_148daf948(void)

bool FUN_148daf948(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148daf978;
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
LAB_148daf978:
  return lVar6 == param_2;
}



// FUNCTION 148daf9a4 FUN_148daf9a4 body=118 status=ok
// SIG undefined FUN_148daf9a4(void)

void FUN_148daf9a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fa50;
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



// FUNCTION 148dafa1a FUN_148dafa1a body=118 status=ok
// SIG undefined FUN_148dafa1a(void)

void FUN_148dafa1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fa50;
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



// FUNCTION 148dafa90 FUN_148dafa90 body=156 status=ok
// SIG undefined FUN_148dafa90(void)

void FUN_148dafa90(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b991970;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98fa50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dafb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dafb2c FUN_148dafb2c body=98 status=ok
// SIG undefined FUN_148dafb2c(void)

void FUN_148dafb2c(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148dafb75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dafb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148dafb8e FUN_148dafb8e body=68 status=ok
// SIG undefined FUN_148dafb8e(void)

undefined8 * FUN_148dafb8e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fac0;
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



// FUNCTION 148dafbd6 FUN_148dafbd6 body=81 status=ok
// SIG undefined FUN_148dafbd6(void)

undefined8 FUN_148dafbd6(longlong param_1)

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



// FUNCTION 148dafc2e FUN_148dafc2e body=91 status=ok
// SIG undefined FUN_148dafc2e(void)

bool FUN_148dafc2e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dafc5e;
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
LAB_148dafc5e:
  return lVar6 == param_2;
}



// FUNCTION 148dafc8a FUN_148dafc8a body=118 status=ok
// SIG undefined FUN_148dafc8a(void)

void FUN_148dafc8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fac0;
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



// FUNCTION 148dafd00 FUN_148dafd00 body=118 status=ok
// SIG undefined FUN_148dafd00(void)

void FUN_148dafd00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fac0;
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



// FUNCTION 148dafd76 FUN_148dafd76 body=156 status=ok
// SIG undefined FUN_148dafd76(void)

void FUN_148dafd76(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98fac0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dafe02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dafe12 FUN_148dafe12 body=98 status=ok
// SIG undefined FUN_148dafe12(void)

void FUN_148dafe12(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148dafe5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dafe6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148dafe74 FUN_148dafe74 body=68 status=ok
// SIG undefined FUN_148dafe74(void)

undefined8 * FUN_148dafe74(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fb30;
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



// FUNCTION 148dafebc FUN_148dafebc body=81 status=ok
// SIG undefined FUN_148dafebc(void)

undefined8 FUN_148dafebc(longlong param_1)

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



// FUNCTION 148daff14 FUN_148daff14 body=89 status=ok
// SIG undefined FUN_148daff14(void)

bool FUN_148daff14(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148daff5f;
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
LAB_148daff5f:
  return lVar6 == param_2;
}



// FUNCTION 148daff6e FUN_148daff6e body=118 status=ok
// SIG undefined FUN_148daff6e(void)

void FUN_148daff6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fb30;
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



// FUNCTION 148daffe4 FUN_148daffe4 body=156 status=ok
// SIG undefined FUN_148daffe4(void)

void FUN_148daffe4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98fb30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148db0070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148db0080 FUN_148db0080 body=105 status=ok
// SIG undefined FUN_148db0080(void)

void FUN_148db0080(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148db00d7:
    (**(code **)(param_1 + 0x28))(0);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148db00d7;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148db00d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148db00ea FUN_148db00ea body=183 status=ok
// SIG undefined FUN_148db00ea(void)

undefined8 * FUN_148db00ea(undefined8 *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  *param_1 = &PTR_FUN_14b98fd80;
  param_1[4] = 0;
  iVar1 = DAT_14cbcec98;
  _Src = DAT_14cbcec90;
  lVar2 = (longlong)DAT_14cbcec98;
  *(int *)(param_1 + 5) = DAT_14cbcec98;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,lVar2 * 2);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14114e6dc(param_1 + 6,param_2);
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_1449db362(param_2);
  return param_1;
}



// FUNCTION 148db01a2 FUN_148db01a2 body=9 status=ok
// SIG undefined FUN_148db01a2(void)

void FUN_148db01a2(longlong param_1)

{
  FUN_148db02a2(param_1 + 0x10);
  return;
}



// FUNCTION 148db01ac FUN_148db01ac body=29 status=ok
// SIG undefined FUN_148db01ac(void)

undefined8 FUN_148db01ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148db01ca FUN_148db01ca body=38 status=ok
// SIG undefined FUN_148db01ca(void)

undefined8 FUN_148db01ca(undefined8 param_1,int param_2)

{
  FUN_148db02a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148db01f0 FUN_148db01f0 body=92 status=ok
// SIG undefined FUN_148db01f0(void)

void FUN_148db01f0(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_1;
  FUN_148db02ee(local_28,param_1);
  FUN_148a5ef59(param_1 + 0x20,local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db026e FUN_148db026e body=51 status=ok
// SIG undefined FUN_148db026e(void)

undefined8 FUN_148db026e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x20);
  }
  FUN_140002266(param_2,L"FStartGracePeriodTask(%s)",puVar1);
  return param_2;
}



// FUNCTION 148db02a2 FUN_148db02a2 body=75 status=ok
// SIG undefined FUN_148db02a2(void)

void FUN_148db02a2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fd80;
  FUN_1449db362(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148db02e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148db02ee FUN_148db02ee body=380 status=ok
// SIG undefined FUN_148db02ee(void)

longlong * FUN_148db02ee(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_148db03fa:
    *puVar3 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b98fdb0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148db03fa;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b98fdb0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
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
  return param_1;
}



// FUNCTION 148db046a FUN_148db046a body=64 status=ok
// SIG undefined FUN_148db046a(void)

undefined8 * FUN_148db046a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fdb0;
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



// FUNCTION 148db04ae FUN_148db04ae body=81 status=ok
// SIG undefined FUN_148db04ae(void)

undefined8 FUN_148db04ae(longlong param_1)

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



// FUNCTION 148db0504 FUN_148db0504 body=89 status=ok
// SIG undefined FUN_148db0504(void)

bool FUN_148db0504(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148db054f;
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
LAB_148db054f:
  return lVar6 == param_2;
}



// FUNCTION 148db057a FUN_148db057a body=118 status=ok
// SIG undefined FUN_148db057a(void)

void FUN_148db057a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fdb0;
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



// FUNCTION 148db05f0 FUN_148db05f0 body=118 status=ok
// SIG undefined FUN_148db05f0(void)

void FUN_148db05f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fdb0;
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



// FUNCTION 148db0666 FUN_148db0666 body=156 status=ok
// SIG undefined FUN_148db0666(void)

void FUN_148db0666(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98fdb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148db06f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148db0702 FUN_148db0702 body=167 status=ok
// SIG undefined FUN_148db0702(void)

void FUN_148db0702(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148db077d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148db077d;
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
LAB_148db077d:
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
                    /* WARNING: Could not recover jumptable at 0x000148db079d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148db07aa FUN_148db07aa body=176 status=ok
// SIG undefined FUN_148db07aa(void)

undefined8 * FUN_148db07aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b98fe50;
  local_30 = *param_2;
  *param_2 = 0;
  local_28 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[2] = &PTR_FUN_14b98fe70;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14114e6dc(param_1 + 6,&local_30);
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db085c FUN_148db085c body=62 status=ok
// SIG undefined FUN_148db085c(void)

void FUN_148db085c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b98fe70;
  FUN_1449db362(param_1 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148db088f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148db089a FUN_148db089a body=29 status=ok
// SIG undefined FUN_148db089a(void)

undefined8 FUN_148db089a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148db08b8 FUN_148db08b8 body=73 status=ok
// SIG undefined FUN_148db08b8(void)

undefined8 * FUN_148db08b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fe70;
  FUN_1449db362(param_1 + 4);
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 148db0902 FUN_148db0902 body=80 status=ok
// SIG undefined FUN_148db0902(void)

void FUN_148db0902(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1;
  FUN_148db0994(local_20,param_1);
  FUN_148a5f043(local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db0974 FUN_148db0974 body=32 status=ok
// SIG undefined FUN_148db0974(void)

undefined8 FUN_148db0974(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FStopGracePeriodTask");
  return param_2;
}



// FUNCTION 148db0994 FUN_148db0994 body=380 status=ok
// SIG undefined FUN_148db0994(void)

longlong * FUN_148db0994(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_148db0aa0:
    *puVar3 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b98fea0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148db0aa0;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b98fea0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
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
  return param_1;
}



// FUNCTION 148db0b10 FUN_148db0b10 body=64 status=ok
// SIG undefined FUN_148db0b10(void)

undefined8 * FUN_148db0b10(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fea0;
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



// FUNCTION 148db0b54 FUN_148db0b54 body=81 status=ok
// SIG undefined FUN_148db0b54(void)

undefined8 FUN_148db0b54(longlong param_1)

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



// FUNCTION 148db0baa FUN_148db0baa body=89 status=ok
// SIG undefined FUN_148db0baa(void)

bool FUN_148db0baa(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148db0bf5;
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
LAB_148db0bf5:
  return lVar6 == param_2;
}



// FUNCTION 148db0c20 FUN_148db0c20 body=118 status=ok
// SIG undefined FUN_148db0c20(void)

void FUN_148db0c20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fea0;
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


