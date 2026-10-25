// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489401f8 FUN_1489401f8 body=41 status=ok
// SIG undefined FUN_1489401f8(void)

undefined8 FUN_1489401f8(undefined8 param_1)

{
  FUN_143e0f36e(param_1);
  return param_1;
}



// FUNCTION 1489402fe FUN_1489402fe body=155 status=ok
// SIG undefined FUN_1489402fe(void)

undefined2 * FUN_1489402fe(longlong param_1,undefined2 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x44);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140427846();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_140427846();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if ((plVar3 != (longlong *)0x0 && plVar1 != plVar3) &&
         (lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), lVar4 != 0)) {
        FUN_1406f1bc8(lVar4,param_2);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return param_2;
}



// FUNCTION 14894039a FUN_14894039a body=368 status=ok
// SIG undefined FUN_14894039a(void)

void FUN_14894039a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14894050c(param_2);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_1489402fe(param_2,local_88);
    lVar4 = FUN_148940716(param_1 + 0x3f,local_88);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  lVar5 = FUN_148940672(param_1 + 0x3f,lVar4);
  if (lVar5 != 0 && lVar4 != 0) {
    iVar2 = FUN_148940ac8(param_1,lVar5);
    piVar1 = (int *)(param_1[0x2e] + (longlong)iVar2 * 0x18);
    if ((*piVar1 == 0) || (iVar3 = *piVar1 - *(int *)(lVar4 + 0x3c), *piVar1 = iVar3, iVar3 == 0)) {
      if ((float)piVar1[1] <= 0.0 && (float)piVar1[1] != 0.0) {
        uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        iVar3 = FUN_143d299fd(uVar6);
        piVar1[1] = iVar3;
        iVar3 = (int)param_1[0x2d];
        *(uint *)(param_1 + 0x2d) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x16c) < iVar3 + 1U) {
          FUN_140724a48(param_1 + 0x1c,iVar3);
        }
        plVar7 = param_1 + 0x1c;
        if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[0x2c];
        }
        *(int *)((longlong)plVar7 + (longlong)iVar3 * 4) = iVar2;
      }
      if ((0.0 < *(float *)(lVar4 + 0x38)) && (0.0 < (float)piVar1[2])) {
        piVar1[2] = (int)((float)piVar1[2] - *(float *)(lVar4 + 0x38));
      }
      FUN_148940d92(param_1,piVar1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894050c FUN_14894050c body=80 status=ok
// SIG undefined FUN_14894050c(void)

longlong FUN_14894050c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x44);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_1404279cc();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_1404279cc();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != lVar4) {
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14894055c FUN_14894055c body=277 status=ok
// SIG undefined FUN_14894055c(void)

void FUN_14894055c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined1 *local_70;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  code *local_48;
  longlong *local_40;
  undefined1 *local_38;
  code **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 0 && param_2 != 0) {
    *(longlong *)(param_1 + 0xf0) = param_2;
    *(longlong *)(param_1 + 0xf8) = param_3;
    lVar1 = FUN_14150261a();
    if (lVar1 != 0) {
      FUN_1405f0c40(lVar1,&local_70,*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x18));
      local_38 = local_70;
      FUN_1401533ba(&local_64,&local_38,1);
      local_40 = &local_78;
      local_88 = local_64;
      local_80 = local_5c;
      local_30 = &local_48;
      local_48 = FUN_143e13f24;
      local_38 = &LAB_143e13f16;
      local_78 = param_1;
      uVar2 = FUN_1406f893c();
      local_58 = local_88;
      local_50 = local_80;
      FUN_140e9367e(lVar1,&local_58,uVar2,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148940672 FUN_148940672 body=163 status=ok
// SIG undefined FUN_148940672(void)

ulonglong FUN_148940672(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 != (ulonglong *)0x0) {
            return puVar1[1];
          }
          return 0;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148940716 FUN_148940716 body=537 status=ok
// SIG undefined FUN_148940716(void)

undefined8 FUN_148940716(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  char *local_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined4 local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_2 == '\x01') {
    local_b8 = param_2;
    FUN_1447a97f4(local_70,param_2 + 0x10);
    iVar1 = FUN_144aff4ae(local_70);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        FUN_144a7c8fe(local_70,local_7c,iVar1,1);
        if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(local_70,local_88,iVar1,1), local_88[0] == DAT_14cb7bec8 &&
               (local_80 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(local_70,local_94,iVar1,1), local_94[0] == DAT_14cb7bee0 &&
              (local_8c == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(local_70,local_a0,iVar1,1), local_a0[0] == DAT_14cb7bef8 &&
             (local_98 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(local_70,local_ac,iVar1,1), local_ac[0] == DAT_14cb7bf10 &&
            (local_a4 == DAT_14cb7bf18)))) {
          FUN_1402b5374(local_70,iVar1,0);
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_144aff4ae(local_70);
      } while (iVar1 < iVar2);
    }
    param_2 = local_b8;
    if (local_58 != 0) {
      FUN_1400020a8();
      param_2 = local_b8;
    }
  }
  else {
    local_70[0] = *(undefined4 *)(param_2 + 0x10);
  }
  iVar1 = FUN_1489480b4((longlong *)(param_1 + 0x50),local_70[0],param_2);
  if ((iVar1 == -1) || (lVar3 = (longlong)iVar1 * 0x48 + *(longlong *)(param_1 + 0x50), lVar3 == 0))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148940930 FUN_148940930 body=392 status=ok
// SIG undefined FUN_148940930(void)

void FUN_148940930(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x38) + 8) < 1)) {
    uVar6 = FUN_1401cb356();
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x40);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar4 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_60[2] = lVar7;
    *local_60 = &PTR_FUN_14b422880;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar4[4] = &LAB_148940aba;
    local_68 = uVar2;
    FUN_1405f67fc(uVar6,&local_50,&local_60,L"ARefreshManager.Update");
    if ((undefined8 *)(param_1 + 0x30) != &local_50) {
      *(undefined8 *)(param_1 + 0x30) = local_50;
      local_50 = 0;
      plVar3 = *(longlong **)(param_1 + 0x38);
      *(longlong **)(param_1 + 0x38) = local_48;
      local_48 = (longlong *)0x0;
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
    if (local_48 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    FUN_1449db362(&local_60);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148940ac8 FUN_148940ac8 body=713 status=ok
// SIG undefined FUN_148940ac8(void)

int FUN_148940ac8(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  int local_c4 [2];
  int local_bc;
  int local_b8 [2];
  int local_b0;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  longlong local_88;
  int *local_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    local_e0 = param_1;
    local_d8 = param_2 + 0x18;
    local_d0 = (longlong *)(param_1 + 0x1a8);
    FUN_1447a97f4(&local_88,param_2 + 0x28);
    iVar1 = FUN_144aff4ae(&local_88);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        FUN_144a7c8fe(&local_88,local_94,iVar1,1);
        if ((((((local_94[0] == DAT_14cb7beb0) && (local_8c == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(&local_88,local_a0,iVar1,1), local_a0[0] == DAT_14cb7bec8 &&
               (local_98 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(&local_88,local_ac,iVar1,1), local_ac[0] == DAT_14cb7bee0 &&
              (local_a4 == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(&local_88,local_b8,iVar1,1), local_b8[0] == DAT_14cb7bef8 &&
             (local_b0 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(&local_88,local_c4,iVar1,1), local_c4[0] == DAT_14cb7bf10 &&
            (local_bc == DAT_14cb7bf18)))) {
          FUN_1402b5374(&local_88,iVar1,0);
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_144aff4ae(&local_88);
      } while (iVar1 < iVar2);
    }
    uVar4 = (int)local_88;
    param_1 = local_e0;
    plVar5 = local_d0;
    lVar6 = local_d8;
    if (local_70 != 0) {
      FUN_1400020a8();
      param_1 = local_e0;
      plVar5 = local_d0;
      lVar6 = local_d8;
    }
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    plVar5 = (longlong *)(param_1 + 0x1a8);
    lVar6 = param_2 + 0x18;
  }
  iVar1 = FUN_148949170(plVar5,uVar4,lVar6);
  if (iVar1 != -1) {
    if ((*plVar5 + (longlong)iVar1 * 0x48 != 0) &&
       (piVar3 = (int *)(*plVar5 + (longlong)iVar1 * 0x48 + 0x38), piVar3 != (int *)0x0)) {
      iVar1 = *piVar3;
      goto LAB_148940cee;
    }
  }
  iVar2 = *(int *)(param_2 + 0x74);
  iVar1 = *(int *)(param_2 + 0x70);
  FUN_1489491e0(param_1 + 0x170,&local_88);
  *local_80 = iVar2;
  local_80[1] = -0x40800000;
  local_80[2] = iVar1;
  *(longlong *)(local_80 + 4) = param_2;
  local_80 = local_a0;
  local_a0[0] = (int)local_88;
  local_88 = lVar6;
  FUN_1489492c6(plVar5,local_94,&local_88);
  iVar1 = local_a0[0];
LAB_148940cee:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 148940d92 FUN_148940d92 body=1127 status=ok
// SIG undefined FUN_148940d92(void)

void FUN_148940d92(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  int local_f4 [2];
  int local_ec;
  int local_e8 [2];
  int local_e0;
  int local_dc [2];
  int local_d4;
  int local_d0 [2];
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  longlong local_a0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
    lVar3 = param_1[8];
    lVar7 = param_1[0x2e];
    cVar4 = FUN_14493b798(*(longlong *)(lVar7 + 0x10 + (longlong)(int)lVar3 * 0x18) + 0x18,
                          *(longlong *)(param_2 + 0x10) + 0x18);
    if (((cVar4 != '\0') || (*(float *)(param_2 + 4) < 0.0)) ||
       (lVar7 = lVar7 + (longlong)(int)lVar3 * 0x18,
       *(float *)(lVar7 + 4) + *(float *)(lVar7 + 8) <
       *(float *)(param_2 + 4) + *(float *)(param_2 + 8))) goto LAB_148940e1f;
  }
  lVar7 = *(longlong *)(param_2 + 0x10);
  if (*(char *)(lVar7 + 0x18) == '\x01') {
    local_110 = lVar7 + 0x18;
    local_108 = param_1 + 0x35;
    local_100 = param_2;
    FUN_1447a97f4(&local_b8,lVar7 + 0x28);
    iVar5 = FUN_144aff4ae(&local_b8);
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        FUN_144a7c8fe(&local_b8,&local_c4,iVar5,1);
        if ((((((local_c4 == DAT_14cb7beb0) && (local_bc == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(&local_b8,local_d0,iVar5,1), local_d0[0] == DAT_14cb7bec8 &&
               (local_c8 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(&local_b8,local_dc,iVar5,1), local_dc[0] == DAT_14cb7bee0 &&
              (local_d4 == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(&local_b8,local_e8,iVar5,1), local_e8[0] == DAT_14cb7bef8 &&
             (local_e0 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(&local_b8,local_f4,iVar5,1), local_f4[0] == DAT_14cb7bf10 &&
            (local_ec == DAT_14cb7bf18)))) {
          FUN_1402b5374(&local_b8,iVar5,0);
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_144aff4ae(&local_b8);
      } while (iVar5 < iVar6);
    }
    uVar11 = local_b8._0_4_;
    plVar10 = local_108;
    lVar7 = local_110;
    param_2 = local_100;
    if (local_a0 != 0) {
      FUN_1400020a8();
      plVar10 = local_108;
      lVar7 = local_110;
      param_2 = local_100;
    }
  }
  else {
    uVar11 = *(undefined4 *)(lVar7 + 0x28);
    plVar10 = param_1 + 0x35;
    lVar7 = lVar7 + 0x18;
  }
  iVar5 = FUN_148949170(plVar10,uVar11,lVar7);
  if (iVar5 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar5 * 0x48 + *plVar10;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar7 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  plVar10 = param_1 + 9;
  if (param_1[9] != 0) {
    lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar7 + 0x1f0) == 0) {
      puVar9 = (undefined8 *)(lVar7 + 0x458);
    }
    else {
      puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
    }
    uVar8 = *puVar9;
    lVar7 = FUN_144a61814(uVar8,plVar10);
    if (lVar7 != 0) {
      FUN_1405a424c(uVar8,*plVar10);
    }
    *plVar10 = 0;
  }
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  fVar12 = (float)FUN_143d299fd(uVar8);
  fVar12 = (fVar1 + fVar2) - fVar12;
  if (fVar12 <= 0.0) {
    FUN_1489411fa(param_1);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8a068) && (FUN_144b3d300(&DAT_14cb8a068), DAT_14cb8a068 == -1)) {
      local_b8 = param_1;
      FUN_143e106e4(param_1);
      atexit(FUN_143e1081b);
      _Init_thread_footer(&DAT_14cb8a068);
    }
    lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar7 + 0x1f0) == 0) {
      puVar9 = (undefined8 *)(lVar7 + 0x458);
    }
    else {
      puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
    }
    uVar8 = *puVar9;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_14487d8d8(&local_b8,&DAT_14cb8a058);
    local_78 = 1;
    local_118 = &local_c4;
    local_c4 = (uint)local_c4._2_2_ << 0x10;
    local_c0 = 0xbf800000;
    FUN_1406f4044(uVar8,plVar10,&local_b8,fVar12);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  }
LAB_148940e1f:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489411fa FUN_1489411fa body=361 status=ok
// SIG undefined FUN_1489411fa(void)

void FUN_1489411fa(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = (int)param_1[0x1b];
  *(uint *)(param_1 + 0x1b) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xdc) < iVar1 + 1U) {
    FUN_140724a48(param_1 + 10,iVar1);
  }
  plVar6 = param_1 + 10;
  if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[0x1a];
  }
  *(int *)((longlong)plVar6 + (longlong)iVar1 * 4) = (int)param_1[8];
  local_30 = param_1 + 8;
  FUN_148949092(param_1 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  if (param_1[9] != 0) {
    plVar6 = param_1 + 9;
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    lVar3 = FUN_144a61814(uVar2,plVar6);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,*plVar6);
    }
    *plVar6 = 0;
  }
  if ((longlong)(int)param_1[0x2d] != 0) {
    lVar3 = param_1[0x2e];
    plVar6 = param_1 + 0x1c;
    if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x2c];
    }
    lVar5 = lVar3 + (longlong)(int)*plVar6 * 0x18;
    lVar7 = 0;
    do {
      lVar8 = (longlong)*(int *)((longlong)plVar6 + lVar7);
      if (*(float *)(lVar5 + 4) + *(float *)(lVar5 + 8) <
          *(float *)(lVar3 + 4 + lVar8 * 0x18) + *(float *)(lVar3 + 8 + lVar8 * 0x18)) {
        lVar5 = lVar3 + lVar8 * 0x18;
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)param_1[0x2d] * 4 != lVar7);
    FUN_148940d92(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_148940930(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148941364 FUN_148941364 body=313 status=ok
// SIG undefined FUN_148941364(void)

bool FUN_148941364(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar1 = param_1 + 10;
  uVar8 = (ulonglong)(int)param_1[0x1b];
  if (0 < (longlong)uVar8) {
    iVar7 = -(int)param_1[0x1b];
    do {
      plVar6 = (longlong *)param_1[0x1a];
      if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      iVar2 = *(int *)((longlong)plVar6 + uVar8 * 4 + -4);
      lVar9 = (longlong)iVar2 * 0x18 + param_1[0x2e];
      cVar4 = (**(code **)(*param_1 + 0x2b0))(param_1,lVar9);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x2a8))(param_1,lVar9);
        FUN_148948cb0(param_1 + 0x35,*(longlong *)(lVar9 + 0x10) + 0x18);
        FUN_148949020(param_1 + 0x2e,iVar2);
        uVar5 = *(uint *)(param_1 + 0x1b);
        if (uVar8 != uVar5) {
          iVar2 = uVar5 + iVar7;
          if (0 < (int)(uVar5 + iVar7)) {
            iVar2 = 1;
          }
          plVar6 = (longlong *)param_1[0x1a];
          if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
            plVar6 = plVar1;
          }
          memmove((void *)((longlong)plVar6 + uVar8 * 4 + -4),
                  (void *)((longlong)plVar6 + (longlong)(int)(uVar5 - iVar2) * 4),
                  (longlong)iVar2 << 2);
          uVar5 = *(uint *)(param_1 + 0x1b);
        }
        *(uint *)(param_1 + 0x1b) = uVar5 - 1;
      }
      iVar7 = iVar7 + 1;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x1b);
  }
  iVar7 = (int)uVar8;
  if (*(int *)((longlong)param_1 + 0xdc) != iVar7) {
    FUN_1417335d8(plVar1,uVar8 & 0xffffffff);
    iVar7 = (int)param_1[0x1b];
  }
  return iVar7 != 0;
}



// FUNCTION 14894149e FUN_14894149e body=466 status=ok
// SIG undefined FUN_14894149e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14894149e(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_140149a73(uVar1,0);
  if ((lVar2 != 0) && (plVar3 = (longlong *)FUN_1401499e8(lVar2), plVar3 != (longlong *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8a040) && (FUN_144b3d300(&DAT_14cb8a040), DAT_14cb8a040 == -1)) {
      FUN_140e1bbe8(&DAT_14cb8a030,1);
      _Init_thread_footer(&DAT_14cb8a040);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8a050) && (FUN_144b3d300(&DAT_14cb8a050), DAT_14cb8a050 == -1)) {
      DAT_14cb8a04c = DAT_14cb5609c._4_4_;
      DAT_14cb8a044 = _DAT_14cb56098;
      _Init_thread_footer(&DAT_14cb8a050);
    }
    lVar2 = (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 0x80);
    if (lVar2 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x78);
      lVar2 = lVar2 << 6;
      do {
        FUN_1400750e6(local_78,lVar4);
        local_88 = DAT_14cb8a044;
        local_80 = DAT_14cb8a04c;
        FUN_144928d62(local_68,5,&local_88);
        (**(code **)(*plVar3 + 0xb0))(plVar3,local_78,&DAT_14cb8a030,0);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + 0x40;
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148941672 FUN_148941672 body=15 status=ok
// SIG undefined FUN_148941672(void)

void FUN_148941672(undefined8 param_1)

{
  FUN_144837462(DAT_14cb8a088,param_1);
  return;
}



// FUNCTION 1489416aa FUN_1489416aa body=315 status=ok
// SIG undefined FUN_1489416aa(void)

undefined8 FUN_1489416aa(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = (uint)*(byte *)(param_1 + 7);
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((local_1c & 0xff) == 1) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_1 + 7)])(param_1);
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      *(undefined1 *)(param_1 + 7) = 1;
    }
    uVar3 = FUN_140c13ce0();
    FUN_14047320e(uVar3,param_2,param_1,0);
    goto LAB_1489417c6;
  }
  if ((local_1c & 0xff) != 0) goto LAB_1489417c6;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (param_1[1] == 0) goto LAB_1489417aa;
  }
  else {
    (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_1 + 7)])(param_1);
    *(undefined1 *)(param_1 + 7) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
LAB_1489417aa:
    uVar3 = FUN_140c52150();
    uVar3 = FUN_14477b664(uVar3);
    param_1[1] = uVar3;
  }
  FUN_14017647a(param_1,param_2);
LAB_1489417c6:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1489417e6 FUN_1489417e6 body=24 status=ok
// SIG undefined FUN_1489417e6(void)

undefined1 FUN_1489417e6(void)

{
  undefined1 *in_R9;
  
  FUN_1489416aa();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 148941802 FUN_148941802 body=29 status=ok
// SIG undefined FUN_148941802(void)

undefined8 FUN_148941802(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  longlong *plStack_50;
  longlong lStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  
  cVar1 = (char)param_1[7];
  if (cVar1 == (char)param_2[7]) {
    if (cVar1 == '\x01') {
      if ((((char)param_1[5] == (char)param_2[5]) &&
          (*(longlong *)((longlong)param_1 + 0x2c) == *(longlong *)((longlong)param_2 + 0x2c))) &&
         (iVar2 = (int)param_1[1], iVar2 == (int)param_2[1])) {
        if (iVar2 < 1) {
          uVar5 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
        }
        else {
          lVar6 = 0;
          lVar7 = 0;
          do {
            plStack_50 = (longlong *)0x148942a8d;
            uVar5 = FUN_148945f0d(*param_1 + lVar6,*param_2 + lVar6);
            if ((char)uVar5 == '\0') {
              return uVar5;
            }
            lVar7 = lVar7 + 1;
            lVar6 = lVar6 + 0x18;
          } while (lVar7 < (int)param_1[1]);
        }
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
    if (cVar1 == '\0') {
      uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
      if (param_1[1] == 0) {
        uVar5 = FUN_140c52150();
        lVar6 = FUN_14477b664(uVar5);
        param_1[1] = lVar6;
      }
      lVar6 = param_2[1];
      if (lVar6 == 0) {
        lVar6 = FUN_140c52150();
      }
      lVar7 = *param_2;
      uVar5 = FUN_14477b664(lVar6);
      lStack_38 = lVar7;
      uVar3 = FUN_144a7891a(uVar5);
      lStack_40 = *param_1;
      lVar6 = param_1[1];
      uVar4 = FUN_144a7891a(lVar6);
      uStack_58 = uVar5;
      plStack_50 = &lStack_38;
      uVar5 = FUN_144a789b8(uVar4,lVar6,&lStack_40,uVar3);
      if ((uStack_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  return 0;
}



// FUNCTION 14894181f FUN_14894181f body=185 status=ok
// SIG undefined FUN_14894181f(void)

void FUN_14894181f(undefined8 *param_1,undefined8 *param_2)

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
  if (param_1[1] == 0) {
    uVar3 = FUN_140c52150();
    uVar3 = FUN_14477b664(uVar3);
    param_1[1] = uVar3;
  }
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    lVar4 = FUN_140c52150();
  }
  uVar3 = *param_2;
  uVar5 = FUN_14477b664(lVar4);
  local_38 = uVar3;
  uVar1 = FUN_144a7891a(uVar5);
  local_40 = *param_1;
  uVar3 = param_1[1];
  uVar2 = FUN_144a7891a(uVar3);
  local_58 = uVar5;
  local_50 = &local_38;
  FUN_144a789b8(uVar2,uVar3,&local_40,uVar1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489418da FUN_1489418da body=816 status=ok
// SIG undefined FUN_1489418da(void)

ulonglong FUN_1489418da(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ushort uVar1;
  ushort uVar2;
  short *psVar3;
  wchar_t *pwVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  ushort *puVar13;
  wchar_t *_Str;
  bool bVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  longlong local_a8 [2];
  wchar_t *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined8 local_6c;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_2 == 0) {
    uVar9 = 0;
    goto LAB_148941aaa;
  }
  FUN_140056680(&local_60,&DAT_149dfb77a);
  puVar7 = (ushort *)FUN_1401e9420(*param_2,&local_60);
  if (puVar7 == (ushort *)0x0) {
LAB_148941a96:
    uVar9 = 0;
  }
  else {
    lVar8 = FUN_1464f879c();
    local_a8[0] = *(longlong *)(lVar8 + 0x18);
    FUN_1400021e4(local_a8,&local_98);
    if (local_58 == (int)uStack_90) {
      bVar14 = true;
      if (1 < local_58) {
        lVar8 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_60 + lVar8);
          uVar6 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)local_98 + lVar8);
          uVar12 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1489419ad;
            }
            iVar11 = uVar6 - uVar12;
            goto LAB_148941adc;
          }
          if (uVar1 == 0) break;
LAB_1489419ad:
          lVar8 = lVar8 + 2;
        }
        iVar11 = 0;
LAB_148941adc:
        bVar14 = iVar11 == 0;
      }
    }
    else {
      bVar14 = (int)uStack_90 + local_58 == 1;
    }
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar14) goto LAB_148941a96;
    *param_2 = (longlong)puVar7;
    if (*puVar7 == 0x28) {
      puVar7 = puVar7 + 1;
      *param_2 = (longlong)puVar7;
    }
    iVar11 = -1;
    puVar5 = puVar7;
    do {
      puVar13 = puVar5;
      iVar11 = iVar11 + 1;
      if (0x3f < *puVar13) break;
      puVar5 = puVar13 + 1;
    } while ((1L << ((byte)*puVar13 & 0x3f) & 0x3ff000100000000U) != 0);
    FUN_14006620a(&local_98,puVar7,iVar11);
    pwVar4 = local_98;
    if (*puVar13 == 0x2c) {
      *param_2 = (longlong)(puVar13 + 1);
      _Str = L"";
      if ((int)uStack_90 != 0) {
        _Str = local_98;
      }
      uVar9 = _wtoi64(_Str);
      lVar8 = FUN_140c13c87();
      if (*(uint *)(lVar8 + 0x48) < (uint)uVar9) goto LAB_148941a85;
      if ((char)uVar9 == '\x01') {
        local_6c = 0;
        local_98 = (wchar_t *)0x0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        uStack_7f = 0;
        uStack_78 = 0;
        uStack_77 = 0;
        uVar10 = FUN_140c13ce0();
        lVar8 = FUN_140c13ce0();
        local_50 = *(undefined8 *)(lVar8 + 0x18);
        FUN_1400021e4(&local_50,local_a8);
        local_c0 = param_5;
        local_b0 = 1;
        local_c8 = param_3;
        local_b8 = local_a8;
        lVar8 = FUN_14115911a(uVar10,*param_2,&local_98,param_4);
        *param_2 = lVar8;
        if (local_a8[0] != 0) {
          FUN_1400020a8();
          lVar8 = *param_2;
        }
        uVar9 = CONCAT71((int7)((ulonglong)param_4 >> 8),lVar8 != 0);
        (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_1 + 0x38)])(param_1);
        FUN_140d237a0(param_1,&local_98);
        *(undefined1 *)(param_1 + 0x38) = 1;
        FUN_140679fa8(&local_98);
      }
      else if ((uVar9 & 0xff) == 0) {
        local_98 = (wchar_t *)0x0;
        uStack_90 = 0;
        local_88 = 0;
        uVar6 = FUN_14136ed14(param_2,&local_98);
        uVar9 = (ulonglong)uVar6;
        FUN_148941c0c(param_1,&local_98);
      }
      else {
        uVar9 = 0;
      }
      psVar3 = (short *)*param_2;
      if ((psVar3 != (short *)0x0) && (*psVar3 == 0x29)) {
        *param_2 = (longlong)(psVar3 + 1);
      }
    }
    else {
LAB_148941a85:
      uVar9 = 0;
    }
    if (pwVar4 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar4);
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_148941aaa:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148941c0c FUN_148941c0c body=86 status=ok
// SIG undefined FUN_148941c0c(void)

void FUN_148941c0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_1 + 7)])();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 148941c62 FUN_148941c62 body=534 status=ok
// SIG undefined FUN_148941c62(void)

undefined8
FUN_148941c62(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,uint param_5,
             undefined8 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  uint local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar3 = FUN_140c52150();
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
    FUN_14686b592(param_1,&local_48);
    puVar6 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar6 = local_48;
    }
    FUN_1400021e4(param_1,&local_58);
    puVar5 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    FUN_140002266(&local_78,L"(\"%s\",\"%s\")",puVar5,puVar6);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_78;
    uStack_60 = CONCAT44(local_6c,local_70);
LAB_148941dac:
    puVar6 = local_68;
    if (local_70 != 0) goto LAB_148941db7;
  }
  else if (*(char *)(param_1 + 0x38) == '\x01') {
    if (*(char *)(param_3 + 0x38) != '\x01') {
      param_3 = 0;
    }
    if ((param_5 >> 0x13 & 1) != 0) {
      param_3 = 0;
    }
    uVar3 = FUN_140c13ce0();
    local_88 = param_6;
    local_90 = param_5;
    local_80 = 1;
    local_98 = (undefined2 *)param_4;
    FUN_1446df618(uVar3,&local_68,param_1,param_3);
    local_70 = (int)uStack_60;
    goto LAB_148941dac;
  }
  puVar6 = &DAT_149dfb77a;
LAB_148941db7:
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  lVar4 = FUN_1464f879c();
  local_78 = *(undefined2 **)(lVar4 + 0x18);
  FUN_1400021e4(&local_78,&local_58);
  puVar5 = local_58;
  if (local_50 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_98 = puVar6;
  FUN_140002266(&local_48,L"%s(%u,%s)",puVar5,uVar1);
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(param_2,local_48,iVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 148941e7a FUN_148941e7a body=281 status=ok
// SIG undefined FUN_148941e7a(void)

longlong * FUN_148941e7a(undefined8 *param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(char *)(param_1 + 7) == '\0') {
    local_40 = *param_1;
    FUN_1400021e4(&local_40,&local_38);
    puVar2 = local_38;
    if (local_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    pwVar1 = L"Def \'%s\'";
  }
  else {
    if (*(char *)(param_1 + 7) != '\x01') goto LAB_148941ea9;
    FUN_148941f94(0,&local_38);
    puVar2 = local_38;
    if (local_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    pwVar1 = L"%s";
  }
  FUN_140002266(&local_28,pwVar1,puVar2);
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
    local_28 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_148941ea9:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148941f94 FUN_148941f94 body=303 status=ok
// SIG undefined FUN_148941f94(void)

undefined8 * FUN_148941f94(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  cVar5 = FUN_143e1115e();
  if (cVar5 != '\0') {
    FUN_1400020e8(param_2,&DAT_14b422360,3);
  }
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_1;
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_78);
        FUN_140ba7826(local_68,&DAT_149e06140,local_78);
        FUN_144a882a8(&local_58,local_68,&DAT_149e06144);
        iVar3 = local_50 + -1;
        if (local_50 == 0) {
          iVar3 = 0;
        }
        FUN_1400020e8(param_2,local_58,iVar3);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)(int)lVar4 * 0x18 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489420c4 FUN_1489420c4 body=65 status=ok
// SIG undefined FUN_1489420c4(void)

undefined8 * FUN_1489420c4(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140c520a2(param_2);
    *param_1 = uVar1;
    uVar1 = FUN_1418a5c14(param_2);
  }
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 148942106 FUN_148942106 body=60 status=ok
// SIG undefined FUN_148942106(void)

longlong * FUN_148942106(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_14cb8a358 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_144837462();
  }
  lVar2 = lVar1 + 0x18;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar2;
  param_1[1] = lVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 148942142 FUN_148942142 body=158 status=ok
// SIG undefined FUN_148942142(void)

longlong * FUN_148942142(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140c52150();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*param_2 == 0)) goto LAB_148942175;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_1489421dc:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_1489421dc;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_2);
  }
  param_2[2] = lVar5;
LAB_148942175:
  lVar4 = lVar5 + 0x18;
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  *param_1 = lVar4;
  param_1[1] = lVar5;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1489421e0 FUN_1489421e0 body=448 status=ok
// SIG undefined FUN_1489421e0(void)

undefined8 FUN_1489421e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 == 0) {
    uVar5 = FUN_140c52150();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x28) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x30);
  if (lVar7 == 0) {
    puVar9 = &DAT_149dfb77a;
    if ((lVar6 == 0) || (puVar9 = &DAT_149dfb77a, *plVar1 == 0)) goto LAB_14894227f;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 != '\0')) {
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar5,plVar1);
      *(longlong *)(param_1 + 0x30) = lVar7;
      puVar9 = &DAT_149dfb77a;
      if (lVar7 == 0) goto LAB_14894227f;
      goto LAB_14894223e;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
LAB_14894223e:
    iVar2 = *(int *)(lVar7 + 0x20);
    puVar9 = &DAT_149dfb77a;
    if ((longlong)iVar2 == 0) goto LAB_14894227f;
    lVar6 = *(longlong *)(lVar7 + 0x18);
    lVar10 = 0;
    do {
      plVar3 = *(longlong **)(lVar6 + lVar10);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,lVar7), cVar4 != '\0')) {
        FUN_14020fad6(&local_58,L" !!Infinite Recursion Detected!!");
        puVar9 = local_58;
        if ((int)uStack_50 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        goto LAB_14894227f;
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar10);
  }
  puVar9 = &DAT_149dfb77a;
LAB_14894227f:
  local_70 = *plVar1;
  FUN_1400021e4(&local_70,&local_68);
  puVar8 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar8 = local_68;
  }
  FUN_140002266(param_2,L"Immediate Reward [%s]%s",puVar8,puVar9);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489423a2 FUN_1489423a2 body=227 status=ok
// SIG undefined FUN_1489423a2(void)

ulonglong FUN_1489423a2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0) {
    uVar4 = FUN_140c52150();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x28) = lVar5;
  }
  lVar8 = *(longlong *)(param_1 + 0x30);
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (lVar8 == 0) {
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
      uVar6 = CONCAT71(uVar7,param_2 == 0);
      goto LAB_14894241f;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_148942481:
      lVar8 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_148942481;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar8 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x20));
    }
    *(longlong *)(param_1 + 0x30) = lVar8;
  }
  uVar6 = CONCAT71(uVar7,1);
  if (lVar8 != param_2) {
    if ((lVar8 != 0) && (iVar1 = *(int *)(lVar8 + 0x20), (longlong)iVar1 != 0)) {
      lVar5 = *(longlong *)(lVar8 + 0x18);
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar8);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
          if (cVar3 != '\0') goto LAB_14894241f;
        }
        lVar8 = lVar8 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar8);
    }
    uVar6 = 0;
  }
LAB_14894241f:
  return uVar6 & 0xffffffff;
}



// FUNCTION 148942486 FUN_148942486 body=131 status=ok
// SIG undefined FUN_148942486(void)

undefined8 FUN_148942486(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 0x20);
  FUN_1400021e4(&local_30,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Package [%s]",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14894250a FUN_14894250a body=108 status=ok
// SIG undefined FUN_14894250a(void)

longlong * FUN_14894250a(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1405d0c38(param_1,param_2 + 2);
  return param_1;
}



// FUNCTION 148942576 FUN_148942576 body=42 status=ok
// SIG undefined FUN_148942576(void)

void FUN_148942576(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_1489425a0();
  memset(_Dst,0,0x90);
  FUN_1486ea93e(_Dst);
  return;
}



// FUNCTION 1489425a0 FUN_1489425a0 body=113 status=ok
// SIG undefined FUN_1489425a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489425a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb8a2a8;
  if (DAT_14cb8a2a8 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1200,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x12;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb8a2a8;
    _DAT_14cb8a2b0 = _DAT_14cb8a2b0 + 0x20;
  }
  DAT_14cb8a2a8 = (undefined8 *)*puVar2;
  _DAT_14cb8a2b4 = _DAT_14cb8a2b4 + 1;
  return;
}



// FUNCTION 148942612 FUN_148942612 body=44 status=ok
// SIG undefined FUN_148942612(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148942612(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8a2b4 = _DAT_14cb8a2b4 + -1;
  *param_1 = DAT_14cb8a2a8;
  DAT_14cb8a2a8 = param_1;
  return;
}



// FUNCTION 14894263e FUN_14894263e body=44 status=ok
// SIG undefined FUN_14894263e(void)

void FUN_14894263e(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0x90);
  FUN_1486ea93e(param_1);
  return;
}



// FUNCTION 14894266a FUN_14894266a body=144 status=ok
// SIG undefined FUN_14894266a(void)

void FUN_14894266a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148949ab0(param_2,0);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_143e143fc;
  local_20 = &local_30;
  local_28 = FUN_148949dbe;
  local_48 = param_2;
  FUN_148949b10(param_1,&local_28,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148942724 FUN_148942724 body=53 status=ok
// SIG undefined FUN_148942724(void)

undefined8 FUN_148942724(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143e109d2();
  if (cVar1 != '\0') {
    uVar2 = FUN_143e10dbe(param_1,param_2,0);
    return uVar2;
  }
  FUN_1486e7d02(param_1,param_2);
  return 0;
}



// FUNCTION 14894275a FUN_14894275a body=186 status=ok
// SIG undefined FUN_14894275a(void)

ulonglong FUN_14894275a(longlong param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_143e109d2();
  if (cVar1 == '\0') {
    FUN_1486e7cb8(param_1);
    uVar5 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    iVar4 = *(int *)(param_1 + 0x90);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    uVar3 = 0;
    if (-1 < iVar4) {
      do {
        bVar2 = FUN_143e10dbe(param_1,iVar4,&local_48);
        uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 & bVar2);
        bVar6 = iVar4 != 0;
        iVar4 = iVar4 + -1;
      } while (bVar6);
      uVar3 = 0;
      if ((int)uStack_40 != 0) {
        FUN_1486e7a1e(param_1,&local_48);
        uVar3 = (int)uStack_40;
      }
    }
    FUN_141165946(local_48,uVar3);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148942816 FUN_148942816 body=123 status=ok
// SIG undefined FUN_148942816(void)

ulonglong FUN_148942816(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  cVar1 = FUN_141370352();
  if (cVar1 == '\0') {
    uVar3 = (ulonglong)local_21;
  }
  else {
    if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    uVar3 = FUN_14137049e(param_1,param_2,uVar2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148942892 FUN_148942892 body=165 status=ok
// SIG undefined FUN_148942892(void)

void FUN_148942892(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [80];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1449f3324();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  FUN_1459c8e8c(local_70,param_2);
  FUN_1486e780a(param_1,local_70);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894295a FUN_14894295a body=86 status=ok
// SIG undefined FUN_14894295a(void)

void FUN_14894295a(longlong param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_143e109d2();
  if (cVar1 == '\0') {
    FUN_1486e7bbc(param_1,param_2);
    return;
  }
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x90))) {
    FUN_1461a7aa6(param_1 + 0x88,param_2);
    FUN_148949e88(param_1 + 0x88);
    return;
  }
  return;
}



// FUNCTION 1489429b6 FUN_1489429b6 body=55 status=ok
// SIG undefined FUN_1489429b6(void)

void FUN_1489429b6(longlong param_1,longlong param_2)

{
  FUN_1459ff2a0(param_1 + 0x60);
  FUN_140de863f(*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38));
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489429ee FUN_1489429ee body=63 status=ok
// SIG undefined FUN_1489429ee(void)

void FUN_1489429ee(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x50;
    do {
      FUN_1459ff2a0(param_1 + 0x60,lVar2);
      lVar2 = lVar2 + 0x50;
      lVar1 = lVar1 + -0x50;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148942a4a FUN_148942a4a body=105 status=ok
// SIG undefined FUN_148942a4a(void)

undefined8 FUN_148942a4a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((char)param_1[5] == (char)param_2[5]) &&
      (*(longlong *)((longlong)param_1 + 0x2c) == *(longlong *)((longlong)param_2 + 0x2c))) &&
     (iVar1 = (int)param_1[1], iVar1 == (int)param_2[1])) {
    if (iVar1 < 1) {
      uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
    else {
      lVar3 = 0;
      lVar4 = 0;
      do {
        uVar2 = FUN_148945f0d(*param_1 + lVar3,*param_2 + lVar3);
        if ((char)uVar2 == '\0') {
          return uVar2;
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x18;
      } while (lVar4 < (int)param_1[1]);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148942ab4 FUN_148942ab4 body=233 status=ok
// SIG undefined FUN_148942ab4(void)

void FUN_148942ab4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x180))(param_2);
  }
  FUN_1488b08fd(&local_50,uVar2);
  lVar1 = local_50;
  if ((longlong)local_48 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + lVar4);
      local_60 = 0;
      local_68 = *param_1;
      local_58 = 0;
      uVar3 = FUN_14477b664(param_1[1]);
      local_60 = FUN_14477b664(uVar3);
      local_58 = param_1[2];
      FUN_14144529e(&local_68,uVar2);
      lVar4 = lVar4 + 8;
    } while ((longlong)local_48 * 8 != lVar4);
  }
  if (local_50 != 0) {
    FUN_1400020a8(local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148942b9e FUN_148942b9e body=233 status=ok
// SIG undefined FUN_148942b9e(void)

void FUN_148942b9e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x180))(param_2);
  }
  FUN_1488b08fd(&local_50,uVar2);
  lVar1 = local_50;
  if ((longlong)local_48 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + lVar4);
      local_60 = 0;
      local_68 = *param_1;
      local_58 = 0;
      uVar3 = FUN_14477b664(param_1[1]);
      local_60 = FUN_14477b664(uVar3);
      local_58 = param_1[2];
      FUN_143e1128e(&local_68,uVar2);
      lVar4 = lVar4 + 8;
    } while ((longlong)local_48 * 8 != lVar4);
  }
  if (local_50 != 0) {
    FUN_1400020a8(local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148942c88 FUN_148942c88 body=144 status=ok
// SIG undefined FUN_148942c88(void)

undefined8 FUN_148942c88(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(&local_20,&DAT_149e01fe8);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_20);
  }
  puVar2 = local_20;
  if (local_18 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Reward: %s",puVar2);
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148942d1a FUN_148942d1a body=258 status=ok
// SIG undefined FUN_148942d1a(void)

longlong * FUN_148942d1a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b422960;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b422978;
  plVar4[9] = 0;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_14894a044(&local_40,plVar1);
  FUN_143e11502(plVar1,param_3,param_1);
  plVar3 = local_38;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148942e54 FUN_148942e54 body=104 status=ok
// SIG undefined FUN_148942e54(void)

undefined8 FUN_148942e54(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148941e7a(param_1 + 8,local_28);
  FUN_140ba7826(param_2,L"Reward: ",local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148942ec4 FUN_148942ec4 body=83 status=ok
// SIG undefined FUN_148942ec4(void)

undefined8 * FUN_148942ec4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  FUN_140e78e14(param_1 + 3);
  FUN_140e78e14(param_1 + 7);
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  return param_1;
}



// FUNCTION 148942f18 FUN_148942f18 body=145 status=ok
// SIG undefined FUN_148942f18(void)

int * FUN_148942f18(int *param_1,int *param_2,double param_3)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  float fVar6;
  
  dVar3 = ((double)*param_1 * param_3) / (double)param_1[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar3;
  auVar5 = roundpd(auVar5,auVar5,1);
  dVar4 = auVar5._0_8_;
  dVar3 = dVar3 - dVar4;
  if (2147483647.0 <= dVar4) {
    dVar4 = 2147483647.0;
  }
  if (dVar4 <= -2147483648.0) {
    dVar4 = -2147483648.0;
  }
  iVar1 = (int)dVar3;
  fVar2 = (float)dVar3 - (float)iVar1;
  fVar6 = fVar2;
  if (0.99999994 <= fVar2) {
    fVar6 = 0.99999994;
  }
  *param_2 = (int)dVar4 + iVar1;
  fVar6 = (float)(~-(uint)(0.0 < fVar2) & (uint)fVar2 | (uint)fVar6 & -(uint)(0.0 < fVar2)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar6) {
    fVar6 = 0.99999994;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  param_2[1] = (int)fVar6;
  return param_2;
}



// FUNCTION 148942fd2 FUN_148942fd2 body=113 status=ok
// SIG undefined FUN_148942fd2(void)

void FUN_148942fd2(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [36];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 1.0;
  FUN_1400f01f6(param_1 + 0x138,param_2,&local_34);
  fVar1 = local_34;
  fVar2 = (float)FUN_140cf0978(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2 * fVar1);
}



// FUNCTION 148943044 FUN_148943044 body=265 status=ok
// SIG undefined FUN_148943044(void)

void FUN_148943044(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405e06c2(*param_2,&local_50,param_3,param_3 + 0x90);
  if ((longlong)local_48 != 0) {
    lVar7 = 0;
    do {
      local_58 = *(undefined8 *)(local_50 + lVar7);
      uVar5 = FUN_14479d2ce(&local_58);
      lVar6 = FUN_140e1d22c(uVar5);
      if (lVar6 != 0) {
        lVar6 = lVar6 + 0x1288;
        cVar4 = FUN_1470d7922(lVar6,*(undefined8 *)(param_1 + 0x110));
        if (cVar4 == '\0') {
          FUN_1470d7856(lVar6,*(undefined8 *)(param_1 + 0x110));
          FUN_1406c6e60(lVar6);
          FUN_140a87c14(lVar6,0,0);
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)local_48 * 8 != lVar7);
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894314e FUN_14894314e body=141 status=ok
// SIG undefined FUN_14894314e(void)

void FUN_14894314e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148943044(param_1 + -0x100,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489431ec FUN_1489431ec body=141 status=ok
// SIG undefined FUN_1489431ec(void)

void FUN_1489431ec(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148943044(param_1 + -0x100,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894328a FUN_14894328a body=246 status=ok
// SIG undefined FUN_14894328a(void)

void FUN_14894328a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405e06c2(*param_2,&local_50,param_3,param_3 + 0x90);
  if ((longlong)local_48 != 0) {
    lVar7 = 0;
    do {
      local_58 = *(undefined8 *)(local_50 + lVar7);
      uVar5 = FUN_14479d2ce(&local_58);
      lVar6 = FUN_140e1d22c(uVar5);
      if (lVar6 != 0) {
        lVar6 = lVar6 + 0x1288;
        cVar4 = FUN_1470d7922(lVar6,*(undefined8 *)(param_1 + 0x10));
        if (cVar4 != '\0') {
          FUN_1470d78b8(lVar6,*(undefined8 *)(param_1 + 0x10));
          FUN_1406c6e60(lVar6);
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)local_48 * 8 != lVar7);
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148943382 FUN_148943382 body=141 status=ok
// SIG undefined FUN_148943382(void)

void FUN_148943382(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148943420(param_1 + -0x100,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148943420 FUN_148943420 body=757 status=ok
// SIG undefined FUN_148943420(void)

void FUN_148943420(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  float fVar18;
  undefined4 uVar19;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 unaff_XMM6 [16];
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  ulonglong local_50;
  undefined1 auVar17 [16];
  
  uVar19 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)FUN_14479d2ce(*param_2 + 0x18);
  if (plVar5 == (longlong *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*plVar5 + 0x180))(plVar5);
  }
  lVar6 = FUN_148943a5a(param_1,uVar8,0);
  if (lVar6 == 0) goto LAB_148943558;
  if ((char)param_1[0x23] == '\x01') {
    lVar7 = (**(code **)(*(longlong *)(lVar6 + 0x10e0) + 0x58))(lVar6 + 0x10e0,&DAT_14cb8d440);
  }
  else {
    lVar7 = *(longlong *)(lVar6 + 0x32b8);
  }
  if (lVar7 == 0) goto LAB_148943558;
  if (param_1 == (longlong *)0x0) {
LAB_148943501:
    lVar10 = 0;
  }
  else {
    uVar8 = FUN_140a87d46();
    lVar9 = (**(code **)(*param_1 + 0x288))(param_1,uVar8);
    if (lVar9 == 0) goto LAB_148943501;
    uVar8 = FUN_140a87d46();
    lVar10 = FUN_144718840(lVar9,uVar8);
    if (lVar9 == lVar10) goto LAB_148943501;
  }
  FUN_140a88124(local_60,lVar10);
  FUN_140a87b96(lVar7 + 0x1288,local_60,1);
  FUN_140a87c14(lVar7 + 0x1288,0,0);
  plVar5 = (longlong *)(lVar6 + 0x10e0);
  uVar8 = (**(code **)(*(longlong *)(lVar6 + 0x10e0) + 0x50))(plVar5);
  cVar3 = FUN_143e50aa0(uVar8,param_1[0x28]);
  if ((((cVar3 == '\0') && (*(int *)(param_3 + 0x30) == 0)) &&
      (iVar4 = FUN_14487fd02(lVar6), iVar4 == 3)) && (param_1[0x28] != 0)) {
    if ((char)param_1[0x13] == '\x02') {
      uVar8 = FUN_14073751e();
      lVar6 = FUN_144a78ede(param_1,uVar8);
      if (lVar6 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        if ((char)param_1[0x13] != '\x02') {
          iVar4 = (int)((ulonglong)param_1[0x13] >> 0x20);
        }
      }
    }
    else {
      iVar4 = (int)((ulonglong)param_1[0x13] >> 0x20);
    }
    dVar12 = (double)(int)*(undefined8 *)(param_3 + 0x28) /
             (double)(int)((ulonglong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar12;
    auVar14 = roundpd(auVar14,auVar14,1);
    dVar13 = auVar14._0_8_;
    dVar12 = dVar12 - dVar13;
    if (2147483647.0 <= dVar13) {
      dVar13 = 2147483647.0;
    }
    if (dVar13 <= -2147483648.0) {
      dVar13 = -2147483648.0;
    }
    iVar11 = (int)dVar12;
    fVar18 = (float)dVar12 - (float)iVar11;
    fVar15 = fVar18;
    if (0.99999994 <= fVar18) {
      fVar15 = 0.99999994;
    }
    auVar16._0_4_ = ~-(uint)(0.0 < fVar18) & (uint)fVar18;
    auVar16._4_4_ = uVar19;
    auVar16._8_4_ = in_XMM3_Dc;
    auVar16._12_4_ = in_XMM3_Dd;
    auVar16 = auVar16 | ZEXT416((uint)fVar15 & -(uint)(0.0 < fVar18));
    auVar17._4_12_ = auVar16._4_12_;
    fVar15 = auVar16._0_4_ + 0.5 + -0.5;
    if (0.99999994 <= fVar15) {
      fVar15 = 0.99999994;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    auVar17._0_4_ = fVar15;
    iVar11 = iVar4 + iVar11 + (int)dVar13 + ((int)ROUND(fVar15 + fVar15 + -0.5) >> 1);
    iVar4 = *(int *)(param_3 + 0x34);
    fVar18 = 0.0;
    if (SBORROW4(0,iVar4)) {
      lVar6 = param_3 + 4;
      if (*(int *)(param_3 + 0x30) == 0) {
        lVar6 = param_3 + 0x10;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      fVar18 = *(float *)(lVar6 + 0x14);
    }
    if (iVar4 <= iVar11) {
      if (iVar4 == iVar11) {
        auVar14 = roundss(unaff_XMM6,auVar17,9);
        fVar15 = (fVar15 - auVar14._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar15) {
          fVar15 = 0.99999994;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        if (fVar15 < fVar18) goto LAB_148943558;
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,param_1[0x28]);
    }
  }
LAB_148943558:
  plVar5 = (longlong *)param_2[1];
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
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148943716 FUN_148943716 body=141 status=ok
// SIG undefined FUN_148943716(void)

void FUN_148943716(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148943420(param_1 + -0x100,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489437b4 FUN_1489437b4 body=141 status=ok
// SIG undefined FUN_1489437b4(void)

void FUN_1489437b4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148943852(param_1 + -0x100,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148943852 FUN_148943852 body=299 status=ok
// SIG undefined FUN_148943852(void)

void FUN_148943852(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_14479d2ce(*param_2 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x180))(plVar3);
  }
  lVar4 = FUN_148943a5a(param_1,uVar5,1);
  if (lVar4 == 0) goto LAB_148943939;
  if ((char)param_1[0x23] == '\x01') {
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x10e0) + 0x58))(lVar4 + 0x10e0,&DAT_14cb8d440);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x32b8);
  }
  if (lVar4 == 0) goto LAB_148943939;
  if (param_1 == (longlong *)0x0) {
LAB_14894391c:
    lVar7 = 0;
  }
  else {
    uVar5 = FUN_140a87d46();
    lVar6 = (**(code **)(*param_1 + 0x288))(param_1,uVar5);
    if (lVar6 == 0) goto LAB_14894391c;
    uVar5 = FUN_140a87d46();
    lVar7 = FUN_144718840(lVar6,uVar5);
    if (lVar6 == lVar7) goto LAB_14894391c;
  }
  FUN_140a88124(local_30,lVar7);
  FUN_1470d7992(lVar4 + 0x1288,local_30,1);
LAB_148943939:
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894398e FUN_14894398e body=94 status=ok
// SIG undefined FUN_14894398e(void)

void FUN_14894398e(longlong *param_1,undefined8 *param_2)

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
    FUN_140e42b06(param_1,iVar2);
  }
  FUN_14866487e((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1489439fc FUN_1489439fc body=94 status=ok
// SIG undefined FUN_1489439fc(void)

void FUN_1489439fc(longlong *param_1,undefined8 *param_2)

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
    FUN_14571252c(param_1,iVar2);
  }
  FUN_14894b00b((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148943a5a FUN_148943a5a body=444 status=ok
// SIG undefined FUN_148943a5a(void)

longlong FUN_148943a5a(longlong *param_1,longlong param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (FUN_144a7d35a(param_2,&local_50), -1 < (int)local_48)) {
    do {
      if ((int)local_50[1] <= (int)local_48) break;
      lVar5 = FUN_14479d2ce((ulonglong)local_48 * 8 + *local_50);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x3d0) != 0)) {
        lVar6 = FUN_144a78b9e();
        lVar9 = *(longlong *)(lVar5 + 0x3d0);
        if (((lVar9 != 0) &&
            (((lVar6 != 0 && (lVar8 = *(longlong *)(lVar9 + 0x10), lVar8 != 0)) &&
             (*(int *)(lVar6 + 0x38) <= *(int *)(lVar8 + 0x38))))) &&
           (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          if ((char)param_1[0x23] == '\x01') {
            lVar6 = (**(code **)(*(longlong *)(lVar9 + 0x10e0) + 0x58))
                              (lVar9 + 0x10e0,&DAT_14cb8d440);
          }
          else {
            lVar6 = *(longlong *)(lVar9 + 0x32b8);
          }
          if ((lVar6 != 0) &&
             (((iVar4 = FUN_14487fd02(lVar5), iVar4 == 0 ||
               (iVar4 == 3 && *(char *)(lVar5 + 0x178) == '\x02')) ||
              (*(char *)(lVar5 + 0x178) == '\x03' && *(char *)(lVar5 + 0x68) != '\x02')))) {
            if (param_1 == (longlong *)0x0) {
LAB_148943bc4:
              lVar8 = 0;
            }
            else {
              uVar7 = FUN_140a87d46();
              lVar5 = (**(code **)(*param_1 + 0x288))(param_1,uVar7);
              if (lVar5 == 0) goto LAB_148943bc4;
              uVar7 = FUN_140a87d46();
              lVar8 = FUN_144718840(lVar5,uVar7);
              if (lVar5 == lVar8) goto LAB_148943bc4;
            }
            FUN_140a88124(local_60,lVar8);
            cVar3 = FUN_1470d7954(lVar6 + 0x1288,local_60);
            if (cVar3 == param_3) goto LAB_148943bed;
          }
        }
      }
      uVar1 = local_48 + 1;
      bVar2 = -2 < (int)local_48;
      local_48 = uVar1;
    } while (bVar2);
  }
  lVar9 = 0;
LAB_148943bed:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 148943c18 FUN_148943c18 body=75 status=ok
// SIG undefined FUN_148943c18(void)

bool FUN_148943c18(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148943c4c;
    }
  }
  lVar2 = 0;
LAB_148943c4c:
  lVar1 = FUN_145b7be46();
  return lVar2 == lVar1;
}



// FUNCTION 148943c69 FUN_148943c69 body=182 status=ok
// SIG undefined FUN_148943c69(void)

undefined8 FUN_148943c69(undefined8 param_1)

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
  local_b8 = FUN_145b7be46();
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



// FUNCTION 148943d20 FUN_148943d20 body=68 status=ok
// SIG undefined FUN_148943d20(void)

void FUN_148943d20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145b7be46();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) {
    FUN_1476c1732(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 148943dbe FUN_148943dbe body=159 status=ok
// SIG undefined FUN_148943dbe(void)

void FUN_148943dbe(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b7bf30();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
        FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148943e5e FUN_148943e5e body=106 status=ok
// SIG undefined FUN_148943e5e(void)

void FUN_148943e5e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148943eca FUN_148943eca body=95 status=ok
// SIG undefined FUN_148943eca(void)

void FUN_148943eca(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 148943f3e FUN_148943f3e body=75 status=ok
// SIG undefined FUN_148943f3e(void)

bool FUN_148943f3e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148943f72;
    }
  }
  lVar2 = 0;
LAB_148943f72:
  lVar1 = FUN_145b7bf30();
  return lVar2 == lVar1;
}



// FUNCTION 148943f8f FUN_148943f8f body=182 status=ok
// SIG undefined FUN_148943f8f(void)

undefined8 FUN_148943f8f(undefined8 param_1)

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
  local_b8 = FUN_145b7bf30();
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



// FUNCTION 1489440a0 FUN_1489440a0 body=159 status=ok
// SIG undefined FUN_1489440a0(void)

void FUN_1489440a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b7c01a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
        FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148944140 FUN_148944140 body=106 status=ok
// SIG undefined FUN_148944140(void)

void FUN_148944140(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489441ac FUN_1489441ac body=95 status=ok
// SIG undefined FUN_1489441ac(void)

void FUN_1489441ac(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 148944220 FUN_148944220 body=75 status=ok
// SIG undefined FUN_148944220(void)

bool FUN_148944220(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148944254;
    }
  }
  lVar2 = 0;
LAB_148944254:
  lVar1 = FUN_145b7c01a();
  return lVar2 == lVar1;
}



// FUNCTION 148944271 FUN_148944271 body=182 status=ok
// SIG undefined FUN_148944271(void)

undefined8 FUN_148944271(undefined8 param_1)

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
  local_b8 = FUN_145b7c01a();
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



// FUNCTION 14894432e FUN_14894432e body=86 status=ok
// SIG undefined FUN_14894432e(void)

void FUN_14894432e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    FUN_14129d0d4();
    lVar1 = FUN_14129d0d4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_148944366;
    }
  }
  param_2 = 0;
LAB_148944366:
  *(longlong *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 148944384 FUN_148944384 body=48 status=ok
// SIG undefined FUN_148944384(void)

undefined8 FUN_148944384(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar1 = (longlong *)FUN_1400d690e(*(longlong *)(param_1 + 0x30) + 0x38);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489443a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1489443b4 FUN_1489443b4 body=86 status=ok
// SIG undefined FUN_1489443b4(void)

void FUN_1489443b4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_1447210f0(param_2);
      if (lVar1 != 0) {
        FUN_1412f3774(lVar1,param_2,0,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14894440a FUN_14894440a body=57 status=ok
// SIG undefined FUN_14894440a(void)

undefined8 FUN_14894440a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14129d0d4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 148944444 FUN_148944444 body=420 status=ok
// SIG undefined FUN_148944444(void)

longlong * FUN_148944444(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    FUN_1446f470e(&local_48,L"EmptyBinding",1);
  }
  else {
    local_48 = *(undefined8 *)(param_2 + 0x18);
  }
  uVar2 = FUN_1446f8646();
  local_88 = 0;
  FUN_140af9fb2(local_40,param_3,uVar2,local_48);
  FUN_1400021e4(local_40,local_78);
  FUN_144a882a8(&local_68,local_78,L"_CustomBinding");
  puVar5 = local_68;
  if (local_60 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_58,puVar5,1);
  uVar2 = FUN_1446f8646();
  local_88 = 0;
  FUN_140af9fb2(&local_50,param_3,uVar2,local_58);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lVar3 = FUN_14129d0d4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      uVar1 = *(uint *)(param_2 + 8);
      if ((uVar1 & 8) == 0) {
        FUN_144757f48(param_2,8);
      }
      plVar4 = (longlong *)FUN_148946555(param_3,*(undefined8 *)(param_1 + 0x10),local_50);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x308))(plVar4,param_2);
        if ((uVar1 & 8) == 0) {
          FUN_14472eae2(param_2,8);
        }
        goto LAB_14894454c;
      }
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14894454c:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 1489445ea FUN_1489445ea body=93 status=ok
// SIG undefined FUN_1489445ea(void)

undefined8 FUN_1489445ea(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14479d2ce(*param_2 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x180))(plVar3);
  }
  plVar3 = (longlong *)param_2[1];
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
  return uVar4;
}



// FUNCTION 148944648 FUN_148944648 body=1164 status=ok
// SIG undefined FUN_148944648(void)

undefined8 FUN_148944648(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  char *pcVar16;
  bool bVar17;
  char **ppcVar18;
  undefined7 uVar20;
  char *pcVar21;
  char *pcVar22;
  longlong lVar23;
  char *pcVar24;
  longlong lVar25;
  undefined1 auStack_e8 [44];
  uint local_bc;
  char *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  uint7 uVar19;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_1 = param_1 + -0xf8;
  local_b0 = FUN_14755452a(param_4,param_1,0);
  local_a8 = param_4;
  uVar9 = FUN_1475545d8(param_4,param_3);
  uVar11 = FUN_1402984e6();
  lVar12 = FUN_144a78ede(param_1,uVar11);
  uVar11 = FUN_14073751e();
  lVar13 = FUN_144a78ede(param_1,uVar11);
  if (lVar13 != 0 && lVar12 != 0) {
    local_88 = 0;
    uStack_80 = 0;
    cVar8 = FUN_14756df58(lVar13,lVar12);
    if (cVar8 != '\0') {
      local_78 = (char *)0x0;
      lVar12 = FUN_140b2f1e2(lVar13,&local_88);
      if (lVar12 != 0) {
        plVar14 = (longlong *)FUN_1456c5f90(lVar12);
        if ((longlong)(int)plVar14[1] != 0) {
          lVar12 = *plVar14;
          lVar13 = (longlong)(int)plVar14[1] * 0x20 + lVar12;
          uVar15 = 0;
          lVar23 = 0;
          local_ac = uVar9;
          local_a0 = lVar13;
          do {
            local_98 = 0;
            uStack_90 = 0;
            if ((int)uVar15 == 0) {
LAB_14894498e:
              uVar15 = uStack_90;
              if (((*(char *)(lVar12 + 8) == '\x02') || (*(char *)(lVar12 + 0x10) == '\x02')) ||
                 ((*(int *)(lVar12 + 0xc) <= *(int *)(lVar12 + 0x14) &&
                  ((*(int *)(lVar12 + 0xc) != *(int *)(lVar12 + 0x14) ||
                   (*(char *)(lVar12 + 0x10) != '\0' && *(char *)(lVar12 + 8) != '\0')))))) {
                lVar25 = (longlong)(int)uStack_90;
                uVar10 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
                if (uStack_90._4_4_ < uVar10) {
                  FUN_14758f702(&local_98,uVar15 & 0xffffffff);
                }
                uVar4 = *(undefined4 *)(lVar12 + 0xc);
                uVar5 = *(undefined4 *)(lVar12 + 0x10);
                uVar6 = *(undefined4 *)(lVar12 + 0x14);
                puVar2 = (undefined4 *)(local_98 + lVar25 * 0x10);
                *puVar2 = *(undefined4 *)(lVar12 + 8);
                puVar2[1] = uVar4;
                puVar2[2] = uVar5;
                puVar2[3] = uVar6;
              }
            }
            else {
              pcVar1 = (char *)(lVar12 + 8);
              local_b8 = (char *)(lVar12 + 0x10);
              pcVar22 = (char *)(lVar23 + 8);
              lVar13 = (longlong)(int)uVar15 << 4;
              local_bc = 0;
              do {
                pcVar24 = pcVar22 + -8;
                local_78 = (char *)0x0;
                uStack_70 = 0;
                cVar8 = FUN_14055ad78(pcVar24,pcVar1);
                if ((cVar8 == '\0') &&
                   (pcVar16 = pcVar24, cVar8 = FUN_147584eac(pcVar24,pcVar1), cVar8 == '\0')) {
                  if (*pcVar24 == '\x02') {
LAB_148944930:
                    uStack_70 = CONCAT44(uStack_70._4_4_,1);
                    ppcVar18 = &local_78;
                    FUN_14759176c(ppcVar18,0);
                    uVar9 = *(undefined4 *)(pcVar22 + -4);
                    uVar4 = *(undefined4 *)pcVar22;
                    uVar5 = *(undefined4 *)(pcVar22 + 4);
                    *(undefined4 *)local_78 = *(undefined4 *)pcVar24;
                    *(undefined4 *)(local_78 + 4) = uVar9;
                    *(undefined4 *)(local_78 + 8) = uVar4;
                    *(undefined4 *)(local_78 + 0xc) = uVar5;
                  }
                  else {
                    cVar8 = *pcVar22;
                    uVar19 = (uint7)((ulonglong)pcVar16 >> 8);
                    ppcVar18 = (char **)CONCAT71(uVar19,cVar8);
                    if ((cVar8 == '\x02') ||
                       ((*(int *)(pcVar22 + -4) <= *(int *)(pcVar22 + 4) &&
                        ((*(int *)(pcVar22 + -4) != *(int *)(pcVar22 + 4) ||
                         (ppcVar18 = (char **)((ulonglong)uVar19 << 8),
                         cVar8 != '\0' && *pcVar24 != '\0')))))) goto LAB_148944930;
                  }
                  uVar15 = uStack_70;
                  if (*pcVar1 != '\x02') {
                    cVar8 = *local_b8;
                    uVar20 = (undefined7)((ulonglong)local_b8 >> 8);
                    ppcVar18 = (char **)CONCAT71(uVar20,cVar8);
                    if ((cVar8 != '\x02') &&
                       ((*(int *)(lVar12 + 0x14) < *(int *)(lVar12 + 0xc) ||
                        ((*(int *)(lVar12 + 0xc) == *(int *)(lVar12 + 0x14) &&
                         (bVar17 = cVar8 == '\0' || *pcVar1 == '\0',
                         ppcVar18 = (char **)CONCAT71(uVar20,bVar17), bVar17))))))
                    goto LAB_14894481f;
                  }
                  lVar25 = (longlong)(int)uStack_70;
                  uVar10 = (int)uStack_70 + 1;
                  uStack_70 = CONCAT44(uStack_70._4_4_,uVar10);
                  if (uStack_70._4_4_ < uVar10) {
                    ppcVar18 = &local_78;
                    FUN_14759176c(ppcVar18,uVar15 & 0xffffffff);
                  }
                  uVar9 = *(undefined4 *)(lVar12 + 0xc);
                  uVar4 = *(undefined4 *)(lVar12 + 0x10);
                  uVar5 = *(undefined4 *)(lVar12 + 0x14);
                  pcVar16 = local_78 + lVar25 * 0x10;
                  *(undefined4 *)pcVar16 = *(undefined4 *)pcVar1;
                  *(undefined4 *)(pcVar16 + 4) = uVar9;
                  *(undefined4 *)(pcVar16 + 8) = uVar4;
                  *(undefined4 *)(pcVar16 + 0xc) = uVar5;
                }
                else {
                  pcVar16 = pcVar22;
                  if ((*pcVar22 != '\x02') && (pcVar16 = local_b8, *local_b8 != '\x02')) {
                    pcVar16 = pcVar22;
                    if ((*(int *)(pcVar22 + 4) <= *(int *)(lVar12 + 0x14)) &&
                       ((pcVar16 = local_b8, *(int *)(lVar12 + 0x14) <= *(int *)(pcVar22 + 4) &&
                        (*pcVar22 == '\x01')))) {
                      pcVar16 = pcVar22;
                    }
                  }
                  pcVar21 = pcVar24;
                  if ((pcVar22[-8] != '\x02') && (pcVar21 = pcVar1, *pcVar1 != '\x02')) {
                    pcVar21 = pcVar24;
                    if ((*(int *)(lVar12 + 0xc) <= *(int *)(pcVar22 + -4)) &&
                       ((pcVar21 = pcVar1, *(int *)(pcVar22 + -4) <= *(int *)(lVar12 + 0xc) &&
                        (pcVar22[-8] == '\x01')))) {
                      pcVar21 = pcVar24;
                    }
                  }
                  uVar11 = *(undefined8 *)pcVar21;
                  uVar3 = *(undefined8 *)pcVar16;
                  uStack_70 = CONCAT44(uStack_70._4_4_,1);
                  ppcVar18 = &local_78;
                  FUN_14759176c(ppcVar18,0);
                  *(undefined8 *)local_78 = uVar11;
                  *(undefined8 *)(local_78 + 8) = uVar3;
                }
LAB_14894481f:
                pcVar16 = local_78;
                uVar15 = uStack_90;
                iVar7 = (int)uStack_90;
                if ((int)uStack_70 == 2) {
LAB_1489448e1:
                  uVar10 = (int)uStack_90 + 1;
                  uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
                  if (uStack_90._4_4_ < uVar10) {
                    FUN_14758f702(&local_98,uVar15 & 0xffffffff);
                  }
                  uVar9 = *(undefined4 *)(pcVar24 + 4);
                  uVar4 = *(undefined4 *)(pcVar24 + 8);
                  uVar5 = *(undefined4 *)(pcVar24 + 0xc);
                  puVar2 = (undefined4 *)(local_98 + (longlong)iVar7 * 0x10);
                  *puVar2 = *(undefined4 *)pcVar24;
                  puVar2[1] = uVar9;
                  puVar2[2] = uVar4;
                  puVar2[3] = uVar5;
                }
                else if ((int)uStack_70 == 1) {
                  local_bc = (uint)CONCAT71((int7)((ulonglong)ppcVar18 >> 8),1);
                  pcVar24 = local_78;
                  goto LAB_1489448e1;
                }
                if (pcVar16 != (char *)0x0) {
                  FUN_1400020a8(pcVar16);
                }
                pcVar22 = pcVar22 + 0x10;
                lVar13 = lVar13 + -0x10;
              } while (lVar13 != 0);
              lVar13 = local_a0;
              uVar9 = local_ac;
              if ((local_bc & 1) == 0) goto LAB_14894498e;
            }
            if (lVar23 != 0) {
              FUN_1400020a8(lVar23);
            }
            lVar23 = local_98;
            uVar11 = local_a8;
            uVar4 = local_b0;
            uVar15 = uStack_90 & 0xffffffff;
            lVar12 = lVar12 + 0x20;
          } while (lVar12 != lVar13);
          if ((int)uStack_90 != 0) {
            lVar13 = (longlong)(int)uStack_90 << 4;
            lVar12 = local_98;
            do {
              FUN_147554828(uVar11,lVar12,uVar4,uVar9);
              lVar12 = lVar12 + 0x10;
              lVar13 = lVar13 + -0x10;
            } while (lVar13 != 0);
          }
          if (lVar23 != 0) {
            FUN_1400020a8(lVar23);
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 148944b30 FUN_148944b30 body=159 status=ok
// SIG undefined FUN_148944b30(void)

void FUN_148944b30(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b7c4ac();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
        FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148944bd0 FUN_148944bd0 body=106 status=ok
// SIG undefined FUN_148944bd0(void)

void FUN_148944bd0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148944c3c FUN_148944c3c body=95 status=ok
// SIG undefined FUN_148944c3c(void)

void FUN_148944c3c(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 148944ca8 FUN_148944ca8 body=75 status=ok
// SIG undefined FUN_148944ca8(void)

bool FUN_148944ca8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148944cdc;
    }
  }
  lVar2 = 0;
LAB_148944cdc:
  lVar1 = FUN_145b7c4ac();
  return lVar2 == lVar1;
}



// FUNCTION 148944cf9 FUN_148944cf9 body=182 status=ok
// SIG undefined FUN_148944cf9(void)

undefined8 FUN_148944cf9(undefined8 param_1)

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
  local_b8 = FUN_145b7c4ac();
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



// FUNCTION 148944db0 FUN_148944db0 body=118 status=ok
// SIG undefined FUN_148944db0(void)

void FUN_148944db0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140861d3c(local_50,param_1,param_1 + 0x50,param_1 + 0x70);
  local_38 = param_1 + 0x60;
  FUN_147523910(local_50,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148944e28 FUN_148944e28 body=125 status=ok
// SIG undefined FUN_148944e28(void)

void FUN_148944e28(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_147523b62(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148944ea6 FUN_148944ea6 body=125 status=ok
// SIG undefined FUN_148944ea6(void)

void FUN_148944ea6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_148944f24(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148944f24 FUN_148944f24 body=90 status=ok
// SIG undefined FUN_148944f24(void)

void FUN_148944f24(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_14894b178(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 148944f7e FUN_148944f7e body=125 status=ok
// SIG undefined FUN_148944f7e(void)

void FUN_148944f7e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_148944ffc(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148944ffc FUN_148944ffc body=289 status=ok
// SIG undefined FUN_148944ffc(void)

void FUN_148944ffc(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar6 * 4));
      if (iVar1 == -1) {
        FUN_147a3fc60(&local_78);
        lVar3 = *param_3;
        uVar2 = (undefined4)local_78;
      }
      else {
        lVar3 = *(longlong *)param_1[3];
        lVar5 = (longlong)iVar1;
        uStack_70 = 0;
        local_68 = 0;
        local_78 = *(undefined8 *)(lVar3 + lVar5 * 0x18);
        uVar4 = FUN_14477b664(*(undefined8 *)(lVar3 + 8 + lVar5 * 0x18));
        uStack_70 = FUN_14477b664(uVar4);
        local_68 = *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x18);
        uVar2 = FUN_14894b356(param_1,*(undefined4 *)(*(longlong *)*param_1 + lVar5 * 4),&local_78);
        FUN_147524308(param_1,&local_7c,uVar2);
        lVar3 = *param_3;
        uVar2 = local_7c;
      }
      *(undefined4 *)(lVar3 + lVar6 * 4) = uVar2;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_2[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14894511e FUN_14894511e body=150 status=ok
// SIG undefined FUN_14894511e(void)

void FUN_14894511e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  lVar2 = param_2[1];
  local_30 = param_1 + 0x60;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(local_48,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_14894b42e(local_48,iVar3);
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



// FUNCTION 1489451b6 FUN_1489451b6 body=106 status=ok
// SIG undefined FUN_1489451b6(void)

void FUN_1489451b6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_148945222(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148945222 FUN_148945222 body=353 status=ok
// SIG undefined FUN_148945222(void)

void FUN_148945222(undefined8 param_1,int param_2,char param_3)

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
        if (param_2 < iVar2) goto LAB_1489452ad;
      }
      else if (iVar2 < param_2) {
LAB_1489452ad:
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
          FUN_14894b42e(param_1,iVar5);
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



// FUNCTION 148945384 FUN_148945384 body=108 status=ok
// SIG undefined FUN_148945384(void)

void FUN_148945384(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_147524082(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894542a FUN_14894542a body=89 status=ok
// SIG undefined FUN_14894542a(void)

void FUN_14894542a(longlong param_1)

{
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_14894b58e(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_147a408e2(param_1 + 0x70);
  return;
}



// FUNCTION 148945484 FUN_148945484 body=96 status=ok
// SIG undefined FUN_148945484(void)

void FUN_148945484(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x70);
  local_28 = param_1 + 0x60;
  FUN_1475243aa(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489454e6 FUN_1489454e6 body=320 status=ok
// SIG undefined FUN_1489454e6(void)

undefined8 FUN_1489454e6(longlong param_1)

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
  FUN_14894b5be(plVar1,param_1 + 0x110);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 == (longlong *)0x0) goto LAB_1489455dd;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1489455a7:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1489455dd;
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
      if (plVar4 == (longlong *)0x0) goto LAB_1489455dd;
      goto LAB_1489455a7;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1489455dd;
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
LAB_1489455dd:
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



// FUNCTION 148945628 FUN_148945628 body=202 status=ok
// SIG undefined FUN_148945628(void)

void FUN_148945628(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (((((-1 < *(int *)(param_3 + 0x94)) && (*(int *)(param_3 + 0x94) < *(int *)(param_1 + 0x78)))
       && (*(int *)(param_3 + 0x80) == 1)) &&
      ((*(int *)(param_3 + 0x30) == 0 && ((*(byte *)(param_3 + 0x8c) & 2) == 0)))) &&
     (lVar3 = *(longlong *)(param_1 + -0xe0), lVar3 != 0)) {
    lVar5 = FUN_145b7c854();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      FUN_1489456f2(param_1 + -0x100,*param_2,
                    (longlong)*(int *)(param_3 + 0x94) * 0x18 + *(longlong *)(param_1 + 0x70));
    }
  }
  plVar4 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001489456bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489456f2 FUN_1489456f2 body=1594 status=ok
// SIG undefined FUN_1489456f2(void)

void FUN_1489456f2(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStack_e8 [32];
  float local_c8 [2];
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  char local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined5 uStack_78;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    uVar5 = FUN_145d17956();
    lVar6 = FUN_14477b664(uVar5);
    param_3[1] = lVar6;
  }
  lVar11 = param_3[2];
  if (lVar11 == 0) {
    if ((lVar6 == 0) || (*param_3 == 0)) goto LAB_148945769;
    plVar10 = *(longlong **)(lVar6 + 0xb8);
    if (plVar10 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar11 = FUN_144aff482(uVar5,param_3);
        param_3[2] = lVar11;
        if (lVar11 == 0) goto LAB_148945769;
        lVar6 = param_3[1];
        goto LAB_14894574f;
      }
    }
    param_3[2] = 0;
    goto LAB_148945769;
  }
LAB_14894574f:
  if (lVar6 == 0) {
    uVar5 = FUN_145d17956();
    lVar6 = FUN_14477b664(uVar5);
    param_3[1] = lVar6;
    lVar11 = param_3[2];
    if (((lVar11 == 0) && (lVar11 = 0, lVar6 != 0)) && (*param_3 != 0)) {
      plVar10 = *(longlong **)(lVar6 + 0xb8);
      if (plVar10 == (longlong *)0x0) {
LAB_148945d0d:
        lVar11 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar10 + 0x108))();
        if (cVar4 == '\0') goto LAB_148945d0d;
        uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar11 = FUN_144aff482(uVar5,param_3);
      }
      param_3[2] = lVar11;
    }
  }
  cVar4 = FUN_144a7c5f6(lVar11 + 0x18);
  if (cVar4 != '\0') goto LAB_148945769;
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    uVar5 = FUN_145d17956();
    lVar6 = FUN_14477b664(uVar5);
    param_3[1] = lVar6;
  }
  lVar11 = param_3[2];
  if (((lVar11 == 0) && (lVar11 = 0, lVar6 != 0)) && (*param_3 != 0)) {
    plVar10 = *(longlong **)(lVar6 + 0xb8);
    if (plVar10 == (longlong *)0x0) {
LAB_148945d06:
      lVar11 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10);
      if (cVar4 == '\0') goto LAB_148945d06;
      uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
      lVar11 = FUN_144aff482(uVar5,param_3);
    }
    param_3[2] = lVar11;
  }
  if (*(char *)(lVar11 + 0x2c) == '\0') goto LAB_148945769;
  lVar6 = FUN_140d5712e();
  plVar10 = *(longlong **)(lVar6 + 0x30);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_14142d800();
  if (*(int *)(puVar7 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*puVar7;
  }
  lVar6 = 0;
  while( true ) {
    uVar12 = *(ushort *)((longlong)puVar8 + lVar6);
    uVar13 = (ulonglong)uVar12;
    uVar14 = *(ushort *)((longlong)&DAT_149e19e7a + lVar6);
    if (uVar12 != uVar14) break;
    if (uVar12 == 0) goto LAB_1489459b5;
LAB_148945963:
    lVar6 = lVar6 + 2;
  }
  if ((uVar14 | uVar12) < 0x80) {
    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    uVar15 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_148945963;
  }
  if (uVar12 != uVar14) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    goto LAB_148945a10;
  }
LAB_1489459b5:
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    uVar5 = FUN_145d17956();
    lVar6 = FUN_14477b664(uVar5);
    param_3[1] = lVar6;
  }
  lVar11 = param_3[2];
  if (((lVar11 == 0) && (lVar11 = 0, lVar6 != 0)) && (*param_3 != 0)) {
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_148945d14:
      lVar11 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 == '\0') goto LAB_148945d14;
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar11 = FUN_144aff482(uVar5,param_3);
    }
    param_3[2] = lVar11;
  }
  cVar4 = *(char *)(lVar11 + 0x2d);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (cVar4 == '\0') goto LAB_148945769;
LAB_148945a10:
  uVar5 = FUN_14479d2ce(param_2 + 0x18);
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    uVar9 = FUN_145d17956();
    lVar6 = FUN_14477b664(uVar9);
    param_3[1] = lVar6;
  }
  lVar11 = param_3[2];
  if (lVar11 == 0) {
    if (*param_3 == 0) {
      lVar11 = 0;
      goto LAB_148945a49;
    }
    if (lVar6 != 0) {
      plVar10 = *(longlong **)(lVar6 + 0xb8);
      if (plVar10 == (longlong *)0x0) {
LAB_148945d1f:
        lVar11 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10);
        if (cVar4 == '\0') goto LAB_148945d1f;
        uVar9 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar11 = FUN_144aff482(uVar9,param_3);
      }
      param_3[2] = lVar11;
      lVar6 = param_3[1];
      goto LAB_148945a49;
    }
    fVar16 = (float)(int)DAT_0000002c;
LAB_148945a56:
    uVar9 = FUN_145d17956();
    lVar6 = FUN_14477b664(uVar9);
    param_3[1] = lVar6;
    lVar11 = param_3[2];
  }
  else {
LAB_148945a49:
    fVar16 = (float)(int)*(char *)(lVar11 + 0x2c);
    if (lVar6 == 0) goto LAB_148945a56;
  }
  if (lVar11 == 0) {
    param_3[2] = 0;
    if (*param_3 == 0) {
      lVar11 = 0;
      goto LAB_148945a77;
    }
    if (lVar6 != 0) {
      plVar10 = *(longlong **)(lVar6 + 0xb8);
      if (plVar10 == (longlong *)0x0) {
LAB_148945d26:
        lVar11 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10);
        if (cVar4 == '\0') goto LAB_148945d26;
        uVar9 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar11 = FUN_144aff482(uVar9,param_3);
      }
      param_3[2] = lVar11;
      lVar6 = param_3[1];
      goto LAB_148945a77;
    }
    plVar10 = (longlong *)&DAT_00000018;
LAB_148945a80:
    uVar9 = FUN_145d17956();
    lVar6 = FUN_14477b664(uVar9);
    param_3[1] = lVar6;
    lVar11 = param_3[2];
  }
  else {
LAB_148945a77:
    plVar10 = (longlong *)(lVar11 + 0x18);
    if (lVar6 == 0) goto LAB_148945a80;
  }
  if (lVar11 == 0) {
    param_3[2] = 0;
    lVar11 = 0;
    if ((lVar6 != 0) && (*param_3 != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_148945d1b:
        lVar11 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 == '\0') goto LAB_148945d1b;
        uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar11 = FUN_144aff482(uVar9,param_3);
      }
      param_3[2] = lVar11;
    }
  }
  uVar2 = *(undefined4 *)(lVar11 + 0x28);
  local_c0 = (longlong *)*plVar10;
  local_c8[0] = fVar16;
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 8))();
  }
  local_b8 = (undefined4)plVar10[1];
  local_9c = '\0';
  local_98 = 0;
  local_90 = 0xffffffffffffffff;
  local_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_72 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_73 = 1;
  local_b0 = uVar2;
  FUN_14485c47a(&uStack_68,uVar5);
  uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  plVar10 = (longlong *)FUN_1418af146(uVar5);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10,local_c8);
  }
  local_98 = 0;
  local_90 = 0xffffffffffffffff;
  if (local_9c == '\x01') {
    local_9c = '\0';
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
LAB_148945769:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148945d2e FUN_148945d2e body=38 status=ok
// SIG undefined FUN_148945d2e(void)

undefined8 FUN_148945d2e(undefined8 param_1,int param_2)

{
  FUN_140db3ae2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148945d54 FUN_148945d54 body=68 status=ok
// SIG undefined FUN_148945d54(void)

undefined8 * FUN_148945d54(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b421bb0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_1488ef1e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148945d98 FUN_148945d98 body=83 status=ok
// SIG undefined FUN_148945d98(void)

undefined8 * FUN_148945d98(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b422490;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148945dec FUN_148945dec body=289 status=ok
// SIG undefined FUN_148945dec(void)

void FUN_148945dec(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
  lVar8 = *(longlong *)(param_1 + 0x30);
  if (cVar3 == '\0') {
    if (*(char *)(lVar8 + 0x309) != '\x01') {
      return;
    }
    **(undefined1 **)(param_1 + 0x40) = 1;
    lVar8 = *(longlong *)(param_1 + 0x30);
    *(undefined1 *)(lVar8 + 0x309) = 0;
    uVar5 = FUN_14479d2ce(lVar8 + 0x318);
    **(undefined8 **)(param_1 + 8) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x24);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar9 = *(undefined8 *)(param_1 + 0x1c);
  }
  else {
    if ((longlong)*(int *)(lVar8 + 0x328) != 0) {
      lVar6 = *(longlong *)(lVar8 + 800);
      lVar8 = (longlong)*(int *)(lVar8 + 0x328) << 3;
      do {
        lVar4 = FUN_14479d2ce(lVar6);
        if (lVar4 != 0) {
          plVar2 = *(longlong **)(param_1 + 0x10);
          iVar1 = (int)plVar2[1];
          *(uint *)(plVar2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
            FUN_1418927d0(plVar2,iVar1);
          }
          *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = lVar4;
        }
        lVar6 = lVar6 + 8;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    **(undefined1 **)(param_1 + 0x40) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x24);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar9 = *(undefined8 *)(param_1 + 0x1c);
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  iVar1 = *(int *)(param_2 + 0x58);
  *(uint *)(param_2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar1 + 1U) {
    FUN_14579eadc(param_2,iVar1);
  }
  lVar8 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar8 = param_2;
  }
  lVar6 = (longlong)iVar1;
  *(undefined8 *)(lVar8 + lVar6 * 0x14) = uVar9;
  *(undefined4 *)(lVar8 + 8 + lVar6 * 0x14) = uVar7;
  *(undefined8 *)(lVar8 + 0xc + lVar6 * 0x14) = uVar5;
  return;
}



// FUNCTION 148945f0d FUN_148945f0d body=292 status=ok
// SIG undefined FUN_148945f0d(void)

uint FUN_148945f0d(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = FUN_1400014c6();
  lVar9 = FUN_1400014c6(param_2);
  if (lVar8 == 0) {
    uVar7 = (uint)(lVar9 == 0);
  }
  else if (lVar8 == lVar9) {
    uVar3 = *param_2;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    uVar5 = *param_1;
    plVar6 = (longlong *)param_1[1];
    if (plVar6 == (longlong *)0x0) {
      uVar7 = FUN_14470ec92(lVar8,uVar5,uVar3,0);
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      uVar7 = FUN_14470ec92(lVar8,uVar5,uVar3,0);
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 148946032 FUN_148946032 body=89 status=ok
// SIG undefined FUN_148946032(void)

undefined8 * FUN_148946032(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4224b0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x5c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14894608c FUN_14894608c body=78 status=ok
// SIG undefined FUN_14894608c(void)

undefined8 FUN_14894608c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1489460dc();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489460dc FUN_1489460dc body=309 status=ok
// SIG undefined FUN_1489460dc(void)

undefined2 * FUN_1489460dc(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_146132996(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x78);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_80,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_146115c12(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_60,&local_78,local_80);
  *param_2 = local_88;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148946212 FUN_148946212 body=79 status=ok
// SIG undefined FUN_148946212(void)

undefined8 * FUN_148946212(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4224d0;
  if (*(char *)((longlong)param_1 + 0x5c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148946262 FUN_148946262 body=78 status=ok
// SIG undefined FUN_148946262(void)

undefined8 FUN_148946262(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14894635e();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489462b2 FUN_1489462b2 body=82 status=ok
// SIG undefined FUN_1489462b2(void)

void FUN_1489462b2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_148946494(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148946306 FUN_148946306 body=86 status=ok
// SIG undefined FUN_148946306(void)

void FUN_148946306(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1489464e4(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894635e FUN_14894635e body=309 status=ok
// SIG undefined FUN_14894635e(void)

undefined2 * FUN_14894635e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_148946494(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x60);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_80,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1489464e4(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_60,&local_78,local_80);
  *param_2 = local_88;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148946494 FUN_148946494 body=79 status=ok
// SIG undefined FUN_148946494(void)

void FUN_148946494(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[8]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
    return;
  }
  return;
}



// FUNCTION 1489464e4 FUN_1489464e4 body=84 status=ok
// SIG undefined FUN_1489464e4(void)

void FUN_1489464e4(undefined8 *param_1,longlong param_2)

{
  FUN_146115c76(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140c372b2(param_2 + 0x10,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140c3721a(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 148946555 FUN_148946555 body=204 status=ok
// SIG undefined FUN_148946555(void)

undefined8 FUN_148946555(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
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
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a8 = param_3;
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



// FUNCTION 148946622 FUN_148946622 body=69 status=ok
// SIG undefined FUN_148946622(void)

undefined8 * FUN_148946622(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4224f0;
  if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148946668 FUN_148946668 body=78 status=ok
// SIG undefined FUN_148946668(void)

undefined8 FUN_148946668(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1489466b8();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489466b8 FUN_1489466b8 body=268 status=ok
// SIG undefined FUN_1489466b8(void)

undefined2 * FUN_1489466b8(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_78;
  undefined1 local_70 [8];
  undefined8 local_68 [2];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68[0] = param_4;
  FUN_145b21868(local_68,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x50);
  local_58 = 0;
  local_50 = 0x200000000;
  FUN_1432d436e(local_70,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_68);
  FUN_140560464(param_3,&local_88,param_4);
  FUN_145ca38fe(param_1);
  local_98 = local_88;
  local_90 = local_80;
  local_8c = 1;
  FUN_14163869e(local_68,&local_98,local_70);
  *param_2 = local_78;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489467cc FUN_1489467cc body=29 status=ok
// SIG undefined FUN_1489467cc(void)

bool FUN_1489467cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489467ea FUN_1489467ea body=26 status=ok
// SIG undefined FUN_1489467ea(void)

bool FUN_1489467ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148946804 FUN_148946804 body=101 status=ok
// SIG undefined FUN_148946804(void)

void FUN_148946804(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b422510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14894686a FUN_14894686a body=134 status=ok
// SIG undefined FUN_14894686a(void)

void FUN_14894686a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b422510;
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
                    /* WARNING: Could not recover jumptable at 0x0001489468e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489468f0 FUN_1489468f0 body=146 status=ok
// SIG undefined FUN_1489468f0(void)

bool FUN_1489468f0(longlong param_1)

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



// FUNCTION 148946984 FUN_148946984 body=199 status=ok
// SIG undefined FUN_148946984(void)

/* WARNING: Removing unreachable block (ram,0x0001489469c5) */
/* WARNING: Removing unreachable block (ram,0x000148946998) */
/* WARNING: Removing unreachable block (ram,0x0001489469b7) */
/* WARNING: Removing unreachable block (ram,0x0001489469d3) */
/* WARNING: Removing unreachable block (ram,0x0001489469b9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148946984(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = DAT_14cb89db0;
  LOCK();
  UNLOCK();
  DAT_14cb89db0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb89db8 = _DAT_14cb89db8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        if ((longlong)DAT_14cb89da0 != 0) {
          lVar3 = 0;
          do {
            if ((*(int *)(DAT_14cb89d98 + 8 + lVar3) != 0) &&
               (*(longlong *)(DAT_14cb89d98 + lVar3) != 0)) {
              FUN_14879b0e2(&DAT_14cb89d98);
              break;
            }
            lVar3 = lVar3 + 0x10;
          } while ((longlong)DAT_14cb89da0 * 0x10 != lVar3);
        }
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb89db8 = _DAT_14cb89db8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148946a4c FUN_148946a4c body=107 status=ok
// SIG undefined FUN_148946a4c(void)

/* WARNING: Removing unreachable block (ram,0x000148946a7e) */
/* WARNING: Removing unreachable block (ram,0x000148946a5a) */
/* WARNING: Removing unreachable block (ram,0x000148946a70) */
/* WARNING: Removing unreachable block (ram,0x000148946a89) */
/* WARNING: Removing unreachable block (ram,0x000148946a72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148946a4c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb8a418;
  LOCK();
  UNLOCK();
  DAT_14cb8a418 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb8a420 = _DAT_14cb8a420 + -1;
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
    _DAT_14cb8a420 = _DAT_14cb8a420 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148946abe FUN_148946abe body=29 status=ok
// SIG undefined FUN_148946abe(void)

bool FUN_148946abe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148946adc FUN_148946adc body=26 status=ok
// SIG undefined FUN_148946adc(void)

bool FUN_148946adc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148946af6 FUN_148946af6 body=101 status=ok
// SIG undefined FUN_148946af6(void)

void FUN_148946af6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4225a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148946b5c FUN_148946b5c body=134 status=ok
// SIG undefined FUN_148946b5c(void)

void FUN_148946b5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4225a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148946bd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148946be2 FUN_148946be2 body=146 status=ok
// SIG undefined FUN_148946be2(void)

bool FUN_148946be2(longlong param_1)

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



// FUNCTION 148946c90 FUN_148946c90 body=29 status=ok
// SIG undefined FUN_148946c90(void)

bool FUN_148946c90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148946cae FUN_148946cae body=101 status=ok
// SIG undefined FUN_148946cae(void)

void FUN_148946cae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b422610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148946d14 FUN_148946d14 body=134 status=ok
// SIG undefined FUN_148946d14(void)

void FUN_148946d14(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8da20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b422610;
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
                    /* WARNING: Could not recover jumptable at 0x000148946d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148946d9a FUN_148946d9a body=44 status=ok
// SIG undefined FUN_148946d9a(void)

void FUN_148946d9a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148946dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148946dc6 FUN_148946dc6 body=129 status=ok
// SIG undefined FUN_148946dc6(void)

void FUN_148946dc6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140649e34(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1417b1684(local_30,param_2,param_3);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148946e62 FUN_148946e62 body=101 status=ok
// SIG undefined FUN_148946e62(void)

void FUN_148946e62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4226d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148946ec8 FUN_148946ec8 body=101 status=ok
// SIG undefined FUN_148946ec8(void)

void FUN_148946ec8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4226d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148946f2e FUN_148946f2e body=134 status=ok
// SIG undefined FUN_148946f2e(void)

void FUN_148946f2e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4226d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148946fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148946fb4 FUN_148946fb4 body=44 status=ok
// SIG undefined FUN_148946fb4(void)

void FUN_148946fb4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148946fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148946fe0 FUN_148946fe0 body=83 status=ok
// SIG undefined FUN_148946fe0(void)

longlong * FUN_148946fe0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140fb984a();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148947034 FUN_148947034 body=50 status=ok
// SIG undefined FUN_148947034(void)

void FUN_148947034(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421bb0;
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_1400020a8();
  }
  FUN_1488ef1e8(param_1 + 0x10);
  return;
}



// FUNCTION 148947066 FUN_148947066 body=29 status=ok
// SIG undefined FUN_148947066(void)

undefined8 FUN_148947066(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148947084 FUN_148947084 body=29 status=ok
// SIG undefined FUN_148947084(void)

undefined8 FUN_148947084(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489470bc FUN_1489470bc body=29 status=ok
// SIG undefined FUN_1489470bc(void)

bool FUN_1489470bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489470da FUN_1489470da body=26 status=ok
// SIG undefined FUN_1489470da(void)

bool FUN_1489470da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489470f4 FUN_1489470f4 body=24 status=ok
// SIG undefined FUN_1489470f4(void)

bool FUN_1489470f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14894710c FUN_14894710c body=101 status=ok
// SIG undefined FUN_14894710c(void)

void FUN_14894710c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b422810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148947172 FUN_148947172 body=101 status=ok
// SIG undefined FUN_148947172(void)

void FUN_148947172(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b422810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489471d8 FUN_1489471d8 body=134 status=ok
// SIG undefined FUN_1489471d8(void)

void FUN_1489471d8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b422810;
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
                    /* WARNING: Could not recover jumptable at 0x00014894724f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14894725e FUN_14894725e body=39 status=ok
// SIG undefined FUN_14894725e(void)

void FUN_14894725e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148947281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148947286 FUN_148947286 body=146 status=ok
// SIG undefined FUN_148947286(void)

bool FUN_148947286(longlong param_1)

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



// FUNCTION 14894731a FUN_14894731a body=107 status=ok
// SIG undefined FUN_14894731a(void)

/* WARNING: Removing unreachable block (ram,0x00014894734c) */
/* WARNING: Removing unreachable block (ram,0x000148947328) */
/* WARNING: Removing unreachable block (ram,0x00014894733e) */
/* WARNING: Removing unreachable block (ram,0x000148947357) */
/* WARNING: Removing unreachable block (ram,0x000148947340) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14894731a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb8a020;
  LOCK();
  UNLOCK();
  DAT_14cb8a020 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb8a028 = _DAT_14cb8a028 + -1;
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
    _DAT_14cb8a028 = _DAT_14cb8a028 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148947386 FUN_148947386 body=752 status=ok
// SIG undefined FUN_148947386(void)

undefined4 * FUN_148947386(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 *local_d0;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  char *local_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  uint local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_148947678(param_1,local_c0);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1400750e6(local_b8,*param_3);
  *(undefined8 *)(local_b8 + 0x38) = *puVar1;
  local_b8[0x40] = -1;
  local_b8[0x41] = -1;
  local_b8[0x42] = -1;
  local_b8[0x43] = -1;
  local_c4 = local_c0[0];
  if (*local_b8 == '\x01') {
    local_d8 = param_1;
    local_d0 = param_2;
    FUN_1447a97f4(local_70,local_b8 + 0x10);
    iVar4 = FUN_144aff4ae(local_70);
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        FUN_144a7c8fe(local_70,local_7c,iVar4,1);
        if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(local_70,local_88,iVar4,1), local_88[0] == DAT_14cb7bec8 &&
               (local_80 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(local_70,local_94,iVar4,1), local_94[0] == DAT_14cb7bee0 &&
              (local_8c == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(local_70,local_a0,iVar4,1), local_a0[0] == DAT_14cb7bef8 &&
             (local_98 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(local_70,local_ac,iVar4,1), local_ac[0] == DAT_14cb7bf10 &&
            (local_a4 == DAT_14cb7bf18)))) {
          FUN_1402b5374(local_70,iVar4,0);
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_144aff4ae(local_70);
      } while (iVar4 < iVar5);
    }
    param_2 = local_d0;
    param_1 = local_d8;
    if (local_58 != 0) {
      FUN_1400020a8();
      param_2 = local_d0;
      param_1 = local_d8;
    }
  }
  else {
    local_70[0] = *(uint *)(local_b8 + 0x10);
  }
  cVar3 = FUN_14894775e(param_1,local_70[0],local_b8,&local_c4);
  uVar2 = local_c4;
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      local_70[0] = *(int *)(param_1 + 0x48) - 1U & local_70[0];
      *(uint *)(local_b8 + 0x44) = local_70[0];
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_b8 + 0x40) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70[0]) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70[0]) * 4) =
           local_c4;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1489478c8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148947678 FUN_148947678 body=230 status=ok
// SIG undefined FUN_148947678(void)

int * FUN_148947678(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 14894775e FUN_14894775e body=135 status=ok
// SIG undefined FUN_14894775e(void)

undefined8 FUN_14894775e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_1489477e6(), iVar17 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x48);
    if (*(longlong *)(puVar1 + 10) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    uVar14 = param_3[0xd];
    uVar15 = param_3[0xe];
    uVar16 = param_3[0xf];
    puVar1[0xc] = param_3[0xc];
    puVar1[0xd] = uVar14;
    puVar1[0xe] = uVar15;
    puVar1[0xf] = uVar16;
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_148947856(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 1489477e6 FUN_1489477e6 body=111 status=ok
// SIG undefined FUN_1489477e6(void)

int FUN_1489477e6(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_14493b798(lVar4 + (longlong)iVar1 * 0x48,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x40 + (longlong)iVar1 * 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148947856 FUN_148947856 body=114 status=ok
// SIG undefined FUN_148947856(void)

void FUN_148947856(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 1489478c8 FUN_1489478c8 body=906 status=ok
// SIG undefined FUN_1489478c8(void)

void FUN_1489478c8(longlong *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar3 = local_c0;
  if (uVar2 != 0) {
    plVar6 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar6,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar6;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_e0 = plVar6;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_d0 = local_70;
    local_c8 = local_68;
    local_c0 = local_60;
    uVar3 = local_c0;
    local_b8 = local_58;
    local_b4 = uStack_54;
    local_c0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_d8 = param_1;
    if (local_c0._4_4_ < (int)local_68[3]) {
      iVar10 = local_c0._4_4_;
      local_c0 = uVar3;
      do {
        pcVar1 = (char *)(*local_d8 + (longlong)iVar10 * 0x48);
        if (*pcVar1 == '\x01') {
          FUN_1447a97f4(&local_70,pcVar1 + 0x10);
          iVar4 = FUN_144aff4ae(&local_70);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              FUN_144a7c8fe(&local_70,local_7c,iVar4,1);
              if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                    ((FUN_144a7c8fe(&local_70,local_88,iVar4,1), local_88[0] == DAT_14cb7bec8 &&
                     (local_80 == DAT_14cb7bed0)))) ||
                   ((FUN_144a7c8fe(&local_70,local_94,iVar4,1), local_94[0] == DAT_14cb7bee0 &&
                    (local_8c == DAT_14cb7bee8)))) ||
                  ((FUN_144a7c8fe(&local_70,local_a0,iVar4,1), local_a0[0] == DAT_14cb7bef8 &&
                   (local_98 == DAT_14cb7bf00)))) ||
                 ((FUN_144a7c8fe(&local_70,local_ac,iVar4,1), local_ac[0] == DAT_14cb7bf10 &&
                  (local_a4 == DAT_14cb7bf18)))) {
                FUN_1402b5374(&local_70,iVar4,0);
              }
              iVar4 = iVar4 + 1;
              iVar5 = FUN_144aff4ae(&local_70);
            } while (iVar4 < iVar5);
          }
          iVar4 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar4 = *(int *)(pcVar1 + 0x10);
        }
        uVar8 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar8;
        *(int *)(pcVar1 + 0x44) = iVar4;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = local_e0;
        }
        *(undefined4 *)(pcVar1 + 0x40) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = local_e0;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
        ;
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
        FUN_1449c0562(&local_d0);
        iVar10 = local_c0._4_4_;
        uVar3 = local_c0;
      } while (local_c0._4_4_ < (int)local_c8[3]);
    }
  }
  local_c0 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148947c54 FUN_148947c54 body=752 status=ok
// SIG undefined FUN_148947c54(void)

undefined4 * FUN_148947c54(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 *local_d0;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  char *local_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  uint local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_148947f46(param_1,local_c0);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1400750e6(local_b8,*param_3);
  *(undefined8 *)(local_b8 + 0x38) = *puVar1;
  local_b8[0x40] = -1;
  local_b8[0x41] = -1;
  local_b8[0x42] = -1;
  local_b8[0x43] = -1;
  local_c4 = local_c0[0];
  if (*local_b8 == '\x01') {
    local_d8 = param_1;
    local_d0 = param_2;
    FUN_1447a97f4(local_70,local_b8 + 0x10);
    iVar4 = FUN_144aff4ae(local_70);
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        FUN_144a7c8fe(local_70,local_7c,iVar4,1);
        if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(local_70,local_88,iVar4,1), local_88[0] == DAT_14cb7bec8 &&
               (local_80 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(local_70,local_94,iVar4,1), local_94[0] == DAT_14cb7bee0 &&
              (local_8c == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(local_70,local_a0,iVar4,1), local_a0[0] == DAT_14cb7bef8 &&
             (local_98 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(local_70,local_ac,iVar4,1), local_ac[0] == DAT_14cb7bf10 &&
            (local_a4 == DAT_14cb7bf18)))) {
          FUN_1402b5374(local_70,iVar4,0);
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_144aff4ae(local_70);
      } while (iVar4 < iVar5);
    }
    param_2 = local_d0;
    param_1 = local_d8;
    if (local_58 != 0) {
      FUN_1400020a8();
      param_2 = local_d0;
      param_1 = local_d8;
    }
  }
  else {
    local_70[0] = *(uint *)(local_b8 + 0x10);
  }
  cVar3 = FUN_14894802c(param_1,local_70[0],local_b8,&local_c4);
  uVar2 = local_c4;
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      local_70[0] = *(int *)(param_1 + 0x48) - 1U & local_70[0];
      *(uint *)(local_b8 + 0x44) = local_70[0];
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_b8 + 0x40) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70[0]) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70[0]) * 4) =
           local_c4;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148948196(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148947f46 FUN_148947f46 body=230 status=ok
// SIG undefined FUN_148947f46(void)

int * FUN_148947f46(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 14894802c FUN_14894802c body=135 status=ok
// SIG undefined FUN_14894802c(void)

undefined8 FUN_14894802c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_1489480b4(), iVar17 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x48);
    if (*(longlong *)(puVar1 + 10) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    uVar14 = param_3[0xd];
    uVar15 = param_3[0xe];
    uVar16 = param_3[0xf];
    puVar1[0xc] = param_3[0xc];
    puVar1[0xd] = uVar14;
    puVar1[0xe] = uVar15;
    puVar1[0xf] = uVar16;
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_148948124(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 1489480b4 FUN_1489480b4 body=111 status=ok
// SIG undefined FUN_1489480b4(void)

int FUN_1489480b4(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_14493b798(lVar4 + (longlong)iVar1 * 0x48,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x40 + (longlong)iVar1 * 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148948124 FUN_148948124 body=114 status=ok
// SIG undefined FUN_148948124(void)

void FUN_148948124(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 148948196 FUN_148948196 body=906 status=ok
// SIG undefined FUN_148948196(void)

void FUN_148948196(longlong *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar3 = local_c0;
  if (uVar2 != 0) {
    plVar6 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar6,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar6;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_e0 = plVar6;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_d0 = local_70;
    local_c8 = local_68;
    local_c0 = local_60;
    uVar3 = local_c0;
    local_b8 = local_58;
    local_b4 = uStack_54;
    local_c0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_d8 = param_1;
    if (local_c0._4_4_ < (int)local_68[3]) {
      iVar10 = local_c0._4_4_;
      local_c0 = uVar3;
      do {
        pcVar1 = (char *)(*local_d8 + (longlong)iVar10 * 0x48);
        if (*pcVar1 == '\x01') {
          FUN_1447a97f4(&local_70,pcVar1 + 0x10);
          iVar4 = FUN_144aff4ae(&local_70);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              FUN_144a7c8fe(&local_70,local_7c,iVar4,1);
              if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                    ((FUN_144a7c8fe(&local_70,local_88,iVar4,1), local_88[0] == DAT_14cb7bec8 &&
                     (local_80 == DAT_14cb7bed0)))) ||
                   ((FUN_144a7c8fe(&local_70,local_94,iVar4,1), local_94[0] == DAT_14cb7bee0 &&
                    (local_8c == DAT_14cb7bee8)))) ||
                  ((FUN_144a7c8fe(&local_70,local_a0,iVar4,1), local_a0[0] == DAT_14cb7bef8 &&
                   (local_98 == DAT_14cb7bf00)))) ||
                 ((FUN_144a7c8fe(&local_70,local_ac,iVar4,1), local_ac[0] == DAT_14cb7bf10 &&
                  (local_a4 == DAT_14cb7bf18)))) {
                FUN_1402b5374(&local_70,iVar4,0);
              }
              iVar4 = iVar4 + 1;
              iVar5 = FUN_144aff4ae(&local_70);
            } while (iVar4 < iVar5);
          }
          iVar4 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar4 = *(int *)(pcVar1 + 0x10);
        }
        uVar8 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar8;
        *(int *)(pcVar1 + 0x44) = iVar4;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = local_e0;
        }
        *(undefined4 *)(pcVar1 + 0x40) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = local_e0;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
        ;
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
        FUN_1449c0562(&local_d0);
        iVar10 = local_c0._4_4_;
        uVar3 = local_c0;
      } while (local_c0._4_4_ < (int)local_c8[3]);
    }
  }
  local_c0 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148948522 FUN_148948522 body=326 status=ok
// SIG undefined FUN_148948522(void)

undefined4 * FUN_148948522(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14894866a(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_148948750(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148948842(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894866a FUN_14894866a body=230 status=ok
// SIG undefined FUN_14894866a(void)

int * FUN_14894866a(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 148948750 FUN_148948750 body=128 status=ok
// SIG undefined FUN_148948750(void)

undefined8 FUN_148948750(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1489487d0((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489487d0 FUN_1489487d0 body=114 status=ok
// SIG undefined FUN_1489487d0(void)

void FUN_1489487d0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 148948842 FUN_148948842 body=474 status=ok
// SIG undefined FUN_148948842(void)

void FUN_148948842(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148948a1e FUN_148948a1e body=29 status=ok
// SIG undefined FUN_148948a1e(void)

undefined8 FUN_148948a1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148948a56 FUN_148948a56 body=29 status=ok
// SIG undefined FUN_148948a56(void)

bool FUN_148948a56(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148948a74 FUN_148948a74 body=26 status=ok
// SIG undefined FUN_148948a74(void)

bool FUN_148948a74(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148948a8e FUN_148948a8e body=24 status=ok
// SIG undefined FUN_148948a8e(void)

bool FUN_148948a8e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148948aa6 FUN_148948aa6 body=93 status=ok
// SIG undefined FUN_148948aa6(void)

void FUN_148948aa6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b422880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148948b04 FUN_148948b04 body=93 status=ok
// SIG undefined FUN_148948b04(void)

void FUN_148948b04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b422880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148948b62 FUN_148948b62 body=126 status=ok
// SIG undefined FUN_148948b62(void)

void FUN_148948b62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b422880;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148948bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148948be0 FUN_148948be0 body=48 status=ok
// SIG undefined FUN_148948be0(void)

void FUN_148948be0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148948c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 148948c10 FUN_148948c10 body=158 status=ok
// SIG undefined FUN_148948c10(void)

bool FUN_148948c10(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148948cb0 FUN_148948cb0 body=638 status=ok
// SIG undefined FUN_148948cb0(void)

void FUN_148948cb0(longlong *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [44];
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  int local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*param_2 == '\x01') {
      FUN_1447a97f4(local_70,param_2 + 0x10);
      iVar2 = FUN_144aff4ae(local_70);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          FUN_144a7c8fe(local_70,local_7c,iVar2,1);
          if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                ((FUN_144a7c8fe(local_70,local_88,iVar2,1), local_88[0] == DAT_14cb7bec8 &&
                 (local_80 == DAT_14cb7bed0)))) ||
               ((FUN_144a7c8fe(local_70,local_94,iVar2,1), local_94[0] == DAT_14cb7bee0 &&
                (local_8c == DAT_14cb7bee8)))) ||
              ((FUN_144a7c8fe(local_70,local_a0,iVar2,1), local_a0[0] == DAT_14cb7bef8 &&
               (local_98 == DAT_14cb7bf00)))) ||
             ((FUN_144a7c8fe(local_70,local_ac,iVar2,1), local_ac[0] == DAT_14cb7bf10 &&
              (local_a4 == DAT_14cb7bf18)))) {
            FUN_1402b5374(local_70,iVar2,0);
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_144aff4ae(local_70);
        } while (iVar2 < iVar3);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_70[0] = *(int *)(param_2 + 0x10);
    }
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)local_70[0] & (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar6 + uVar8 * 4);
    if (lVar4 != -1) {
      lVar4 = lVar4 * 0x48 + *param_1;
      cVar1 = FUN_14493b798(lVar4,param_2);
      if (cVar1 == '\0') {
        do {
          lVar5 = lVar4;
          lVar4 = (longlong)*(int *)(lVar5 + 0x40);
          if (lVar4 == -1) goto LAB_148948cdd;
          lVar4 = lVar4 * 0x48 + *param_1;
          cVar1 = FUN_14493b798(lVar4,param_2);
        } while (cVar1 == '\0');
        puVar7 = (undefined4 *)(lVar5 + 0x40);
      }
      else {
        puVar7 = (undefined4 *)((longlong)plVar6 + uVar8 * 4);
      }
      FUN_148948f30(param_1,*puVar7);
    }
  }
LAB_148948cdd:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148948f30 FUN_148948f30 body=125 status=ok
// SIG undefined FUN_148948f30(void)

void FUN_148948f30(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x48;
  lVar6 = (longlong)*(int *)(lVar1 + 0x44);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x40 + lVar6 * 0x48);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x48 + 0x40);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x40);
  if (*(longlong *)(*param_1 + 0x28 + (longlong)param_2 * 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_148948fae(param_1,param_2);
  return;
}



// FUNCTION 148948fae FUN_148948fae body=114 status=ok
// SIG undefined FUN_148948fae(void)

void FUN_148948fae(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 148949020 FUN_148949020 body=114 status=ok
// SIG undefined FUN_148949020(void)

void FUN_148949020(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 148949092 FUN_148949092 body=222 status=ok
// SIG undefined FUN_148949092(void)

void FUN_148949092(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  bool bVar10;
  
  uVar1 = param_1[0x22];
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    piVar9 = *(int **)(param_1 + 0x20);
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      piVar9 = param_1;
    }
    uVar4 = 0;
    bVar10 = *piVar9 == *(int *)*param_2;
    uVar5 = 0;
    do {
      uVar2 = uVar5 + 1;
      if ((int)(uVar5 + 1) < (int)uVar1) {
        uVar2 = uVar1;
      }
      uVar7 = uVar5;
      uVar8 = (ulonglong)uVar5;
      do {
        uVar8 = uVar8 + 1;
        uVar6 = uVar2;
        if (lVar3 <= (longlong)uVar8) break;
        uVar7 = uVar7 + 1;
        uVar6 = uVar7;
      } while (bVar10 == (piVar9[uVar8] == *(int *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar5) {
          memmove(piVar9 + (int)uVar4,piVar9 + uVar5,(longlong)(int)(uVar6 - uVar5) << 2);
        }
        uVar4 = uVar4 + (uVar6 - uVar5);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar5 = uVar6;
    } while ((longlong)uVar8 < lVar3);
    param_1[0x22] = uVar4;
  }
  return;
}



// FUNCTION 148949170 FUN_148949170 body=111 status=ok
// SIG undefined FUN_148949170(void)

int FUN_148949170(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_14493b798(lVar4 + (longlong)iVar1 * 0x48,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x40 + (longlong)iVar1 * 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1489491e0 FUN_1489491e0 body=230 status=ok
// SIG undefined FUN_1489491e0(void)

int * FUN_1489491e0(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 1489492c6 FUN_1489492c6 body=750 status=ok
// SIG undefined FUN_1489492c6(void)

undefined4 * FUN_1489492c6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 *local_d0;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  char *local_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  uint local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1489495b6(param_1,local_c0);
  puVar1 = (undefined4 *)param_3[1];
  FUN_1400750e6(local_b8,*param_3);
  *(undefined4 *)(local_b8 + 0x38) = *puVar1;
  local_b8[0x40] = -1;
  local_b8[0x41] = -1;
  local_b8[0x42] = -1;
  local_b8[0x43] = -1;
  local_c4 = local_c0[0];
  if (*local_b8 == '\x01') {
    local_d8 = param_1;
    local_d0 = param_2;
    FUN_1447a97f4(local_70,local_b8 + 0x10);
    iVar4 = FUN_144aff4ae(local_70);
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        FUN_144a7c8fe(local_70,local_7c,iVar4,1);
        if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(local_70,local_88,iVar4,1), local_88[0] == DAT_14cb7bec8 &&
               (local_80 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(local_70,local_94,iVar4,1), local_94[0] == DAT_14cb7bee0 &&
              (local_8c == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(local_70,local_a0,iVar4,1), local_a0[0] == DAT_14cb7bef8 &&
             (local_98 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(local_70,local_ac,iVar4,1), local_ac[0] == DAT_14cb7bf10 &&
            (local_a4 == DAT_14cb7bf18)))) {
          FUN_1402b5374(local_70,iVar4,0);
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_144aff4ae(local_70);
      } while (iVar4 < iVar5);
    }
    param_2 = local_d0;
    param_1 = local_d8;
    if (local_58 != 0) {
      FUN_1400020a8();
      param_2 = local_d0;
      param_1 = local_d8;
    }
  }
  else {
    local_70[0] = *(uint *)(local_b8 + 0x10);
  }
  cVar3 = FUN_14894969c(param_1,local_70[0],local_b8,&local_c4);
  uVar2 = local_c4;
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      local_70[0] = *(int *)(param_1 + 0x48) - 1U & local_70[0];
      *(uint *)(local_b8 + 0x44) = local_70[0];
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_b8 + 0x40) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70[0]) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70[0]) * 4) =
           local_c4;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148949724(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489495b6 FUN_1489495b6 body=230 status=ok
// SIG undefined FUN_1489495b6(void)

int * FUN_1489495b6(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 14894969c FUN_14894969c body=135 status=ok
// SIG undefined FUN_14894969c(void)

undefined8 FUN_14894969c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_148949170(), iVar17 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x48);
    if (*(longlong *)(puVar1 + 10) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    uVar14 = param_3[0xd];
    uVar15 = param_3[0xe];
    uVar16 = param_3[0xf];
    puVar1[0xc] = param_3[0xc];
    puVar1[0xd] = uVar14;
    puVar1[0xe] = uVar15;
    puVar1[0xf] = uVar16;
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_148948fae(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 148949724 FUN_148949724 body=906 status=ok
// SIG undefined FUN_148949724(void)

void FUN_148949724(longlong *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar3 = local_c0;
  if (uVar2 != 0) {
    plVar6 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar6,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar6;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_e0 = plVar6;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_d0 = local_70;
    local_c8 = local_68;
    local_c0 = local_60;
    uVar3 = local_c0;
    local_b8 = local_58;
    local_b4 = uStack_54;
    local_c0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_d8 = param_1;
    if (local_c0._4_4_ < (int)local_68[3]) {
      iVar10 = local_c0._4_4_;
      local_c0 = uVar3;
      do {
        pcVar1 = (char *)(*local_d8 + (longlong)iVar10 * 0x48);
        if (*pcVar1 == '\x01') {
          FUN_1447a97f4(&local_70,pcVar1 + 0x10);
          iVar4 = FUN_144aff4ae(&local_70);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              FUN_144a7c8fe(&local_70,local_7c,iVar4,1);
              if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                    ((FUN_144a7c8fe(&local_70,local_88,iVar4,1), local_88[0] == DAT_14cb7bec8 &&
                     (local_80 == DAT_14cb7bed0)))) ||
                   ((FUN_144a7c8fe(&local_70,local_94,iVar4,1), local_94[0] == DAT_14cb7bee0 &&
                    (local_8c == DAT_14cb7bee8)))) ||
                  ((FUN_144a7c8fe(&local_70,local_a0,iVar4,1), local_a0[0] == DAT_14cb7bef8 &&
                   (local_98 == DAT_14cb7bf00)))) ||
                 ((FUN_144a7c8fe(&local_70,local_ac,iVar4,1), local_ac[0] == DAT_14cb7bf10 &&
                  (local_a4 == DAT_14cb7bf18)))) {
                FUN_1402b5374(&local_70,iVar4,0);
              }
              iVar4 = iVar4 + 1;
              iVar5 = FUN_144aff4ae(&local_70);
            } while (iVar4 < iVar5);
          }
          iVar4 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar4 = *(int *)(pcVar1 + 0x10);
        }
        uVar8 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar8;
        *(int *)(pcVar1 + 0x44) = iVar4;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = local_e0;
        }
        *(undefined4 *)(pcVar1 + 0x40) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = local_e0;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
        ;
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
        FUN_1449c0562(&local_d0);
        iVar10 = local_c0._4_4_;
        uVar3 = local_c0;
      } while (local_c0._4_4_ < (int)local_c8[3]);
    }
  }
  local_c0 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148949ab0 FUN_148949ab0 body=96 status=ok
// SIG undefined FUN_148949ab0(void)

void FUN_148949ab0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 148949b10 FUN_148949b10 body=684 status=ok
// SIG undefined FUN_148949b10(void)

void FUN_148949b10(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
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
  cVar3 = (**(code **)(*param_1 + 0x300))();
  if (cVar3 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    iStack_74 = iStack_54;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((iStack_54 != iVar6) || (uStack_60 != plVar2)) {
      do {
        lVar4 = *(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
        if (lVar4 != 0) {
          plVar7 = (longlong *)(*local_90 + (longlong)iStack_74 * 0x20 + 0x10);
          if (param_3 != '\0') {
            FUN_144837e54(lVar4,0);
            lVar4 = *plVar7;
          }
          cVar3 = FUN_140dddae6(lVar4 + 0x48);
          if ((cVar3 != '\0') &&
             (plVar7 = *(longlong **)(*plVar7 + 0x30), plVar7 != (longlong *)0x0)) {
            lVar4 = (**(code **)(*plVar7 + 8))(plVar7);
            lVar5 = FUN_140c52150();
            if ((lVar5 != 0) &&
               ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                 == lVar5 + 0x30)))) {
              (*(code *)*param_2)(param_2[1],plVar7);
            }
          }
        }
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar6));
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = (int)param_1[0x3e];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    iStack_74 = iStack_54;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((iStack_54 != iVar6) || (uStack_60 != plVar2)) {
      do {
        plVar7 = *(longlong **)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
        if (plVar7 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar7 + 8))(plVar7);
          lVar5 = FUN_140c52150();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar7);
          }
        }
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar6));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148949dbe FUN_148949dbe body=67 status=ok
// SIG undefined FUN_148949dbe(void)

void FUN_148949dbe(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148949e02 FUN_148949e02 body=132 status=ok
// SIG undefined FUN_148949e02(void)

void FUN_148949e02(longlong param_1,int param_2)

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



// FUNCTION 148949e88 FUN_148949e88 body=63 status=ok
// SIG undefined FUN_148949e88(void)

void FUN_148949e88(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148949ec8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 148949ec8 FUN_148949ec8 body=117 status=ok
// SIG undefined FUN_148949ec8(void)

ulonglong FUN_148949ec8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x50) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 148949f3e FUN_148949f3e body=96 status=ok
// SIG undefined FUN_148949f3e(void)

void FUN_148949f3e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 148949f9e FUN_148949f9e body=62 status=ok
// SIG undefined FUN_148949f9e(void)

void FUN_148949f9e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421658;
  FUN_1449db362(param_1 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148949fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148949fdc FUN_148949fdc body=29 status=ok
// SIG undefined FUN_148949fdc(void)

undefined8 FUN_148949fdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148949ffa FUN_148949ffa body=73 status=ok
// SIG undefined FUN_148949ffa(void)

undefined8 * FUN_148949ffa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b421658;
  FUN_1449db362(param_1 + 3);
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



// FUNCTION 14894a044 FUN_14894a044 body=167 status=ok
// SIG undefined FUN_14894a044(void)

void FUN_14894a044(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14894a0bf;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14894a0bf;
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
LAB_14894a0bf:
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
                    /* WARNING: Could not recover jumptable at 0x00014894a0df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14894a0ec FUN_14894a0ec body=386 status=ok
// SIG undefined FUN_14894a0ec(void)

longlong * FUN_14894a0ec(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14894a1fd:
    *puVar5 = &PTR_LAB_14b422d40;
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
    *puVar5 = &PTR_FUN_14b422990;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14894a1fd;
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
    *puVar5 = &PTR_LAB_14b422d40;
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
    *puVar5 = &PTR_FUN_14b422990;
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



// FUNCTION 14894a26e FUN_14894a26e body=64 status=ok
// SIG undefined FUN_14894a26e(void)

undefined8 * FUN_14894a26e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b422990;
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



// FUNCTION 14894a2b2 FUN_14894a2b2 body=81 status=ok
// SIG undefined FUN_14894a2b2(void)

undefined8 FUN_14894a2b2(longlong param_1)

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



// FUNCTION 14894a30a FUN_14894a30a body=89 status=ok
// SIG undefined FUN_14894a30a(void)

bool FUN_14894a30a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14894a355;
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
LAB_14894a355:
  return lVar6 == param_2;
}



// FUNCTION 14894a380 FUN_14894a380 body=118 status=ok
// SIG undefined FUN_14894a380(void)

void FUN_14894a380(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b422d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b422990;
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



// FUNCTION 14894a3f6 FUN_14894a3f6 body=118 status=ok
// SIG undefined FUN_14894a3f6(void)

void FUN_14894a3f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b422d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b422990;
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



// FUNCTION 14894a46c FUN_14894a46c body=156 status=ok
// SIG undefined FUN_14894a46c(void)

void FUN_14894a46c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b422d40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b422990;
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
                    /* WARNING: Could not recover jumptable at 0x00014894a4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14894a508 FUN_14894a508 body=104 status=ok
// SIG undefined FUN_14894a508(void)

void FUN_14894a508(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014894a555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014894a566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14894a570 FUN_14894a570 body=101 status=ok
// SIG undefined FUN_14894a570(void)

ulonglong FUN_14894a570(longlong param_1)

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
LAB_14894a5ca:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14894a5ca;
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



// FUNCTION 14894a5d8 FUN_14894a5d8 body=23 status=ok
// SIG undefined FUN_14894a5d8(void)

void FUN_14894a5d8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014894a5eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14894a5f0 FUN_14894a5f0 body=54 status=ok
// SIG undefined FUN_14894a5f0(void)

longlong FUN_14894a5f0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 14894a626 FUN_14894a626 body=162 status=ok
// SIG undefined FUN_14894a626(void)

void FUN_14894a626(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14894a665;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14894a665;
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
LAB_14894a665:
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
                    /* WARNING: Could not recover jumptable at 0x00014894a6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14894a6c8 FUN_14894a6c8 body=68 status=ok
// SIG undefined FUN_14894a6c8(void)

undefined8 * FUN_14894a6c8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b422a40;
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



// FUNCTION 14894a710 FUN_14894a710 body=81 status=ok
// SIG undefined FUN_14894a710(void)

undefined8 FUN_14894a710(longlong param_1)

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



// FUNCTION 14894a768 FUN_14894a768 body=89 status=ok
// SIG undefined FUN_14894a768(void)

bool FUN_14894a768(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14894a7b3;
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
LAB_14894a7b3:
  return lVar6 == param_2;
}



// FUNCTION 14894a7ea FUN_14894a7ea body=118 status=ok
// SIG undefined FUN_14894a7ea(void)

void FUN_14894a7ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b422ab0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b422a40;
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



// FUNCTION 14894a860 FUN_14894a860 body=118 status=ok
// SIG undefined FUN_14894a860(void)

void FUN_14894a860(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b422ab0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b422a40;
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



// FUNCTION 14894a8d6 FUN_14894a8d6 body=156 status=ok
// SIG undefined FUN_14894a8d6(void)

void FUN_14894a8d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b422ab0;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar4;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar5;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b422a40;
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
                    /* WARNING: Could not recover jumptable at 0x00014894a962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14894a972 FUN_14894a972 body=107 status=ok
// SIG undefined FUN_14894a972(void)

void FUN_14894a972(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x00014894a9bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014894a9d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0,*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 14894a9e4 FUN_14894a9e4 body=81 status=ok
// SIG undefined FUN_14894a9e4(void)

undefined8 FUN_14894a9e4(longlong param_1)

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



// FUNCTION 14894aa3c FUN_14894aa3c body=89 status=ok
// SIG undefined FUN_14894aa3c(void)

bool FUN_14894aa3c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14894aa87;
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
LAB_14894aa87:
  return lVar6 == param_2;
}



// FUNCTION 14894aa96 FUN_14894aa96 body=118 status=ok
// SIG undefined FUN_14894aa96(void)

void FUN_14894aa96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b422b20;
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



// FUNCTION 14894ab0c FUN_14894ab0c body=118 status=ok
// SIG undefined FUN_14894ab0c(void)

void FUN_14894ab0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b422b20;
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



// FUNCTION 14894ab82 FUN_14894ab82 body=156 status=ok
// SIG undefined FUN_14894ab82(void)

void FUN_14894ab82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b422b20;
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
                    /* WARNING: Could not recover jumptable at 0x00014894ac0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14894ac1e FUN_14894ac1e body=94 status=ok
// SIG undefined FUN_14894ac1e(void)

void FUN_14894ac1e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014894ac66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014894ac71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14894ac7c FUN_14894ac7c body=29 status=ok
// SIG undefined FUN_14894ac7c(void)

undefined8 FUN_14894ac7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14894acec FUN_14894acec body=53 status=ok
// SIG undefined FUN_14894acec(void)

void FUN_14894acec(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_14894ad21(param_2,param_3);
      param_3 = param_3 + 8;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14894ad21 FUN_14894ad21 body=240 status=ok
// SIG undefined FUN_14894ad21(void)

void FUN_14894ad21(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  uVar1 = FUN_1459290c2();
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,uVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894ae12 FUN_14894ae12 body=31 status=ok
// SIG undefined FUN_14894ae12(void)

undefined8 FUN_14894ae12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14894ae32 FUN_14894ae32 body=291 status=ok
// SIG undefined FUN_14894ae32(void)

void FUN_14894ae32(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14894ae71;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14894ae71:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14894aeb4;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14894aeb4:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014894af3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14894af56 FUN_14894af56 body=79 status=ok
// SIG undefined FUN_14894af56(void)

undefined8 * FUN_14894af56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4224d0;
  if (*(char *)((longlong)param_1 + 0x5c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14894afa6 FUN_14894afa6 body=101 status=ok
// SIG undefined FUN_14894afa6(void)

undefined8 * FUN_14894afa6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4224b0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x5c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14894b00b FUN_14894b00b body=77 status=ok
// SIG undefined FUN_14894b00b(void)

void FUN_14894b00b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3 * 8);
    *(longlong *)(param_1 + lVar3 * 8) = lVar1;
    if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
      FUN_1456cec3c();
      bVar2 = DAT_14c950c29;
    }
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 14894b058 FUN_14894b058 body=1 status=ok
// SIG undefined FUN_14894b058(void)

void FUN_14894b058(void)

{
  return;
}



// FUNCTION 14894b05a FUN_14894b05a body=29 status=ok
// SIG undefined FUN_14894b05a(void)

undefined8 FUN_14894b05a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14894b078 FUN_14894b078 body=77 status=ok
// SIG undefined FUN_14894b078(void)

undefined8 * FUN_14894b078(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4224f0;
  if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14894b0c6 FUN_14894b0c6 body=1 status=ok
// SIG undefined FUN_14894b0c6(void)

void FUN_14894b0c6(void)

{
  return;
}



// FUNCTION 14894b0c8 FUN_14894b0c8 body=29 status=ok
// SIG undefined FUN_14894b0c8(void)

undefined8 FUN_14894b0c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14894b0e6 FUN_14894b0e6 body=114 status=ok
// SIG undefined FUN_14894b0e6(void)

void FUN_14894b0e6(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 14894b158 FUN_14894b158 body=1 status=ok
// SIG undefined FUN_14894b158(void)

void FUN_14894b158(void)

{
  return;
}



// FUNCTION 14894b15a FUN_14894b15a body=29 status=ok
// SIG undefined FUN_14894b15a(void)

undefined8 FUN_14894b15a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14894b178 FUN_14894b178 body=209 status=ok
// SIG undefined FUN_14894b178(void)

void FUN_14894b178(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147526062();
  if (uVar3 != param_2) {
    lVar1 = **(longlong **)(param_1 + 0x18);
    lVar5 = (longlong)(int)param_2;
    local_48 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
    uVar6 = FUN_14477b664(*(undefined8 *)(lVar1 + 8 + lVar5 * 0x18));
    local_40 = FUN_14477b664(uVar6);
    local_38 = *(undefined8 *)(lVar1 + 0x10 + lVar5 * 0x18);
    plVar2 = *(longlong **)(param_1 + 0x18);
    iVar4 = (int)plVar2[1];
    if (~param_2 + iVar4 != 0) {
      memmove((void *)(*plVar2 + lVar5 * 0x18),(void *)(*plVar2 + lVar5 * 0x18 + 0x18),
              (longlong)(int)(~param_2 + iVar4) * 0x18);
      iVar4 = (int)plVar2[1];
    }
    *(int *)(plVar2 + 1) = iVar4 + -1;
    FUN_14894b24a(*(undefined8 *)(param_1 + 0x18),&local_48,uVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14894b24a FUN_14894b24a body=120 status=ok
// SIG undefined FUN_14894b24a(void)

int FUN_14894b24a(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14894b2c2(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x18;
  memmove((void *)(*param_1 + lVar2 + 0x18),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x18);
  FUN_1486f31a6(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 14894b2c2 FUN_14894b2c2 body=147 status=ok
// SIG undefined FUN_14894b2c2(void)

void FUN_14894b2c2(longlong param_1,int param_2)

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



// FUNCTION 14894b356 FUN_14894b356 body=215 status=ok
// SIG undefined FUN_14894b356(void)

ulonglong FUN_14894b356(longlong param_1,longlong param_2,undefined8 param_3)

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
  FUN_14894b24a(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
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



// FUNCTION 14894b42e FUN_14894b42e body=350 status=ok
// SIG undefined FUN_14894b42e(void)

void FUN_14894b42e(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 0x18),
            (void *)(*plVar3 + (longlong)(int)param_2 * 0x18 + 0x18),(longlong)iVar6 * 0x18);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


