// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1475e9208 FUN_1475e9208 body=622 status=ok
// SIG undefined FUN_1475e9208(void)

void FUN_1475e9208(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[4]) goto LAB_1475e925b;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1475e925b:
  iVar1 = *(int *)(lVar3 + 0x14);
  local_130 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_138 = *puVar9;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_110,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_4) goto LAB_1475e92cc;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1475e92cc:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  lVar6 = local_d0;
  lVar7 = local_e8;
  lVar3 = local_100;
  uVar5 = local_138;
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar8;
  local_b0 = local_110;
  local_a8 = local_108;
  local_110 = 0;
  local_a0 = local_100;
  local_100 = 0;
  local_98 = local_f8;
  local_90 = local_f0;
  local_f8 = 0;
  local_88 = local_e8;
  local_e8 = 0;
  local_80 = local_e0;
  local_78 = local_d8;
  local_e0 = 0;
  local_70 = local_d0;
  local_d0 = 0;
  local_58 = local_138;
  local_c8 = puVar8;
  local_c0 = iVar2;
  local_b8 = uVar4;
  local_68 = puVar9;
  local_60 = iVar1;
  FUN_1432f59b8();
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  if (lVar3 != 0) {
    local_128 = lVar3;
  }
  if (lVar7 != 0) {
    lStack_120 = lVar7;
  }
  if (lVar6 != 0) {
    local_118 = lVar6;
  }
  local_148 = uVar5;
  FUN_1475e90aa(local_130,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                uVar4,&local_128);
  FUN_1475daf1e(&local_c8);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e9478 FUN_1475e9478 body=118 status=ok
// SIG undefined FUN_1475e9478(void)

longlong FUN_1475e9478(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475e9188();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe0) = local_30;
    *(undefined4 *)(param_1 + 0xe4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xe8) = uStack_28;
    *(undefined4 *)(param_1 + 0xec) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e94f0 FUN_1475e94f0 body=179 status=ok
// SIG undefined FUN_1475e94f0(void)

undefined8 * FUN_1475e94f0(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_1475e954a;
    }
  }
  uVar6 = 0;
LAB_1475e954a:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1475e95a4 FUN_1475e95a4 body=184 status=ok
// SIG undefined FUN_1475e95a4(void)

void FUN_1475e95a4(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e965e FUN_1475e965e body=241 status=ok
// SIG undefined FUN_1475e965e(void)

undefined8 * FUN_1475e965e(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c1f40;
  param_1[0x1b] = &PTR_FUN_14a4c1f88;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e9750 FUN_1475e9750 body=9 status=ok
// SIG undefined FUN_1475e9750(void)

void FUN_1475e9750(longlong param_1)

{
  FUN_1475ea2d0(param_1 + 0x10);
  return;
}



// FUNCTION 1475e975a FUN_1475e975a body=29 status=ok
// SIG undefined FUN_1475e975a(void)

undefined8 FUN_1475e975a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e9778 FUN_1475e9778 body=38 status=ok
// SIG undefined FUN_1475e9778(void)

undefined8 FUN_1475e9778(undefined8 param_1,int param_2)

{
  FUN_1475ea2d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e97c4 FUN_1475e97c4 body=82 status=ok
// SIG undefined FUN_1475e97c4(void)

void FUN_1475e97c4(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_1475ea37e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e9818 FUN_1475e9818 body=1044 status=ok
// SIG undefined FUN_1475e9818(void)

ulonglong FUN_1475e9818(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  byte local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_1475e988d;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      local_88 = *puVar6;
      uStack_80 = puVar6[1];
      local_78 = puVar6[2];
      local_60 = *(byte *)(puVar6 + 5);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar6 + 3);
      local_58 = *(byte *)(puVar6 + 6);
      FUN_1410d7556(param_1 + 0x18,&local_88);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38 + 0x28)])();
      FUN_1475ea4e8(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
        FUN_1475db2b6(param_1 + 0xa0);
      }
      if ((local_58 & 1) != 0) {
        FUN_1475ea408(&local_88,&local_78);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
LAB_1475e9a6f:
      unaff_RBP = 0;
      goto LAB_1475e988d;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38) & 1) == 0)
    goto LAB_1475e988d;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar12 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar10 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar10 >> 1) + uVar11;
        if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x28) < param_2) {
          uVar11 = uVar1 + (uVar10 & 1);
        }
        bVar4 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar4);
    }
    if ((((int)uVar11 < (int)uVar3) && (*(int *)(lVar12 + (ulonglong)uVar11 * 0x28) <= param_2)) &&
       (lVar12 + (ulonglong)uVar11 * 0x28 != -8)) {
      FUN_1475ea408((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
        FUN_1475db2b6(param_1 + 0xa0);
      }
      goto LAB_1475e988d;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      if ((bVar2 & 1) == 0) goto LAB_1475e988d;
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      *(byte *)(puVar6 + 6) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1475e988d;
      lVar12 = (longlong)param_2 * 0x38;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + lVar12);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar12);
      if ((bVar2 & 2) == 0) {
        local_88 = *puVar6;
        uStack_80 = puVar6[1];
        local_78 = puVar6[2];
        local_60 = *(byte *)(puVar6 + 5);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar6 + 3);
        local_58 = *(byte *)(puVar6 + 6);
        FUN_1410d7556(param_1 + 0x18,&local_88);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar12 + 0x28)])();
        FUN_1475ea4e8(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar7 = 0;
        if (0 < (int)uVar3) {
          uVar9 = (ulonglong)uVar3;
          uVar10 = uVar3;
          do {
            uVar9 = uVar9 >> 1;
            uVar11 = (uint)uVar9 + (int)uVar7;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
              uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
            }
            bVar4 = 1 < uVar10;
            uVar10 = (uint)uVar9;
          } while (bVar4);
        }
        if (((int)uVar7 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
          FUN_1475db2b6(param_1 + 0xa0);
        }
        if ((local_58 & 1) != 0) {
          FUN_1475ea408(&local_88,&local_78);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
        goto LAB_1475e9a6f;
      }
      if ((bVar2 & 1) == 0) goto LAB_1475e988d;
    }
  }
  FUN_1475ea408(puVar6,puVar6 + 2);
LAB_1475e988d:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1475e9c2e FUN_1475e9c2e body=399 status=ok
// SIG undefined FUN_1475e9c2e(void)

undefined8 FUN_1475e9c2e(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_1475e9cdd;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x38;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x28)])();
    FUN_1475ea4e8(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
      FUN_1475db2b6(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
      FUN_1475db2b6(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_1475e9cdd:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e9dc8 FUN_1475e9dc8 body=266 status=ok
// SIG undefined FUN_1475e9dc8(void)

void FUN_1475e9dc8(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_1475ea55c(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e9ed4 FUN_1475e9ed4 body=603 status=ok
// SIG undefined FUN_1475e9ed4(void)

void FUN_1475e9ed4(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  byte *pbVar2;
  ushort uVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  char *local_88;
  undefined1 local_7c [8];
  int local_74;
  longlong local_70;
  double local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_88 = param_2;
  if (uVar3 != 0) {
    lVar1 = param_1 + -0xd8;
    local_98 = *param_6;
    local_90 = param_6[1];
    local_a0 = param_6[2];
    param_5 = param_5 + 8;
    uVar8 = 0;
    do {
      local_70 = *(longlong *)(param_4 + uVar8 * 4);
      if ((local_70 != 0) && (cVar4 = FUN_1475ea836(lVar1,&local_70,param_5), cVar4 != '\0')) {
        FUN_1475ea55c(lVar1,local_7c,&local_70,param_5);
        piVar6 = *(int **)(param_1 + -0x28);
        if (*piVar6 != 0) {
          FUN_140adeba6(piVar6,local_7c);
          piVar6 = *(int **)(param_1 + -0x28);
        }
        lVar5 = FUN_1400e4054(piVar6,local_7c);
        if (lVar5 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT71((int7)((ulonglong)local_7c >> 8),'\x02' - (*(short *)(lVar5 + 0xe) == 0))
          ;
        }
        cVar4 = FUN_1475ea8bc(lVar1,local_74,uVar9 & 0xffffffff);
        if (cVar4 == '\0') {
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0.0;
          uStack_60 = 0;
          if (local_90 == 0) {
            if (local_98 == 0) {
              if (local_a0 != 0) {
                uStack_60 = *(ulonglong *)(local_a0 + uVar8 * 8);
                local_58 = *(longlong *)(local_a0 + 8 + uVar8 * 8);
                uVar7 = uStack_60;
                if (local_58 != 0) {
                  LOCK();
                  *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
                  UNLOCK();
                  uVar7 = *(ulonglong *)(local_a0 + uVar8 * 8);
                }
                uStack_50 = 2;
                fVar10 = (float)FUN_1458fbfa0(uVar7,*(undefined8 *)(param_4 + uVar8 * 4));
                local_68 = (double)fVar10;
              }
            }
            else {
              lVar5 = (longlong)*(int *)(param_1 + 0x24) * (ulonglong)*(ushort *)(local_98 + uVar8);
              uStack_60 = *(longlong *)(param_1 + 0x18) + lVar5;
              local_68 = (double)(**(code **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar5))
                                           (*(undefined8 *)(param_4 + uVar8 * 4));
            }
          }
          else {
            uStack_60 = (ulonglong)*(ushort *)(local_90 + uVar8);
            uStack_50 = 1;
            local_68 = (double)*(float *)(*(longlong *)(param_4 + uVar8 * 4) +
                                         (ulonglong)*(ushort *)(local_90 + uVar8));
          }
          FUN_1475ea954(lVar1,local_74,uVar9 & 0xffffffff,&local_68);
          (*(code *)(&PTR_LAB_14a4c7e10)[uStack_50 & 0xff])(&uStack_60);
        }
        if (*local_88 == '\x01') {
          pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x30 + (longlong)local_74 * 0x38);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      uVar8 = uVar8 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar3 * 2 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ea130 FUN_1475ea130 body=38 status=ok
// SIG undefined FUN_1475ea130(void)

undefined8 FUN_1475ea130(undefined8 param_1,int param_2)

{
  FUN_1475ea2d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ea156 FUN_1475ea156 body=52 status=ok
// SIG undefined FUN_1475ea156(void)

void FUN_1475ea156(longlong *param_1)

{
  FUN_1475ea18a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475ea18a FUN_1475ea18a body=324 status=ok
// SIG undefined FUN_1475ea18a(void)

void FUN_1475ea18a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x38 + 0x28)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ea2d0 FUN_1475ea2d0 body=173 status=ok
// SIG undefined FUN_1475ea2d0(void)

void FUN_1475ea2d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c1fa0;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_145cd0dbf(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1475ea156(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001475ea371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1475ea37e FUN_1475ea37e body=136 status=ok
// SIG undefined FUN_1475ea37e(void)

void FUN_1475ea37e(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ea408 FUN_1475ea408 body=175 status=ok
// SIG undefined FUN_1475ea408(void)

void FUN_1475ea408(undefined4 *param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_34 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_38);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 3) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    if (*(char *)(param_2 + 3) == '\x01') {
      *(float *)(lVar1 + (ulonglong)*(ushort *)(param_2 + 1)) = (float)*param_2;
    }
    else if (param_2[1] != 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ea4e8 FUN_1475ea4e8 body=116 status=ok
// SIG undefined FUN_1475ea4e8(void)

void FUN_1475ea4e8(longlong *param_1,int param_2)

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



// FUNCTION 1475ea55c FUN_1475ea55c body=189 status=ok
// SIG undefined FUN_1475ea55c(void)

longlong FUN_1475ea55c(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_1475ea61a(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ea61a FUN_1475ea61a body=313 status=ok
// SIG undefined FUN_1475ea61a(void)

int * FUN_1475ea61a(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  int local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_58._0_4_ = *param_3;
    local_58._4_4_ = param_3[1];
    uStack_50._0_4_ = param_3[2];
    uStack_50._4_4_ = param_3[3];
    FUN_1475ea754(param_1 + 0x68,local_68);
    *local_60 = (undefined4)local_58;
    local_60[1] = local_58._4_4_;
    local_60[2] = (undefined4)uStack_50;
    local_60[3] = uStack_50._4_4_;
    *(undefined1 *)(local_60 + 10) = 0;
    *(undefined8 *)(local_60 + 6) = 0;
    *(undefined1 *)(local_60 + 0xc) = 0;
    *param_2 = local_68[0];
    local_58 = param_3;
    uStack_50 = param_2;
    FUN_140bf3cbe(plVar1,local_68,&local_58,0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ea754 FUN_1475ea754 body=226 status=ok
// SIG undefined FUN_1475ea754(void)

int * FUN_1475ea754(longlong *param_1,int *param_2)

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



// FUNCTION 1475ea836 FUN_1475ea836 body=132 status=ok
// SIG undefined FUN_1475ea836(void)

byte FUN_1475ea836(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_1475eaab6(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1475ea8bc FUN_1475ea8bc body=151 status=ok
// SIG undefined FUN_1475ea8bc(void)

ulonglong FUN_1475ea8bc(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x30);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x28) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x28) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x28;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x30));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1475ea954 FUN_1475ea954 body=353 status=ok
// SIG undefined FUN_1475ea954(void)

void FUN_1475ea954(longlong param_1,int param_2,char param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar6 = *(byte *)(lVar7 + 0x30);
    if ((bVar6 & 1) == 0) {
      *(undefined8 *)(lVar7 + 0x10) = *param_4;
      if ((undefined8 *)(lVar7 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 3));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 3)])
                  (&local_58,param_4 + 1);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar7 + 0x28);
        uVar2 = *(undefined4 *)(lVar7 + 0x18);
        uVar3 = *(undefined4 *)(lVar7 + 0x1c);
        uVar4 = *(undefined4 *)(lVar7 + 0x20);
        uVar5 = *(undefined4 *)(lVar7 + 0x24);
        *(undefined4 *)(lVar7 + 0x18) = local_58;
        *(undefined4 *)(lVar7 + 0x1c) = uStack_54;
        *(undefined4 *)(lVar7 + 0x20) = uStack_50;
        *(undefined4 *)(lVar7 + 0x24) = uStack_4c;
        *(ulonglong *)(lVar7 + 0x28) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar6 = *(byte *)(lVar7 + 0x30);
      }
      *(byte *)(lVar7 + 0x30) = bVar6 | 1;
    }
    else {
      FUN_1475db3cc(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined8 *)(lVar7 + 0x10) = *param_4;
    if ((undefined8 *)(lVar7 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 3));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 3)])
                (&local_58,param_4 + 1);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar7 + 0x28);
      uVar2 = *(undefined4 *)(lVar7 + 0x18);
      uVar3 = *(undefined4 *)(lVar7 + 0x1c);
      uVar4 = *(undefined4 *)(lVar7 + 0x20);
      uVar5 = *(undefined4 *)(lVar7 + 0x24);
      *(undefined4 *)(lVar7 + 0x18) = local_58;
      *(undefined4 *)(lVar7 + 0x1c) = uStack_54;
      *(undefined4 *)(lVar7 + 0x20) = uStack_50;
      *(undefined4 *)(lVar7 + 0x24) = uStack_4c;
      *(ulonglong *)(lVar7 + 0x28) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475eaab6 FUN_1475eaab6 body=189 status=ok
// SIG undefined FUN_1475eaab6(void)

longlong FUN_1475eaab6(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1475eab74(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475eab74 FUN_1475eab74 body=167 status=ok
// SIG undefined FUN_1475eab74(void)

undefined4 * FUN_1475eab74(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 1475eac1c FUN_1475eac1c body=167 status=ok
// SIG undefined FUN_1475eac1c(void)

void FUN_1475eac1c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1475eac97;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1475eac97;
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
LAB_1475eac97:
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
                    /* WARNING: Could not recover jumptable at 0x0001475eacb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1475eacc4 FUN_1475eacc4 body=772 status=ok
// SIG undefined FUN_1475eacc4(void)

void FUN_1475eacc4(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte local_191;
  undefined8 *local_190;
  undefined8 *local_178;
  int local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [32];
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_138;
  if (param_4 == 0) goto LAB_1475ead1d;
  uVar5 = FUN_145990612();
  plVar6 = (longlong *)FUN_144718840(param_4,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_1475ead1d;
  lVar2 = *(longlong *)(param_4 + 0x28);
  *(undefined4 *)(lVar2 + 0x29c) = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uVar5 = *(undefined8 *)(param_3 + 8);
  local_160 = *param_3;
  uStack_15c = param_3[1];
  iStack_158 = param_3[2];
  uStack_154 = param_3[3];
  local_150 = param_3[4];
  uStack_14c = param_3[5];
  uStack_148 = param_3[6];
  uStack_144 = param_3[7];
  local_110 = (undefined1 *)0x0;
  local_108 = 0x400000000;
  local_140 = uVar5;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    local_140._6_2_ = (undefined2)((ulonglong)uVar5 >> 0x30);
    local_140._0_6_ = CONCAT24(*(undefined2 *)*param_2,(int)uVar5);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_178,&local_160,&local_100);
    uVar10 = local_108;
    if (local_178 != (undefined8 *)0x0) {
      lVar9 = (longlong)(int)local_108;
      uVar7 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,uVar7);
      if (local_108._4_4_ < uVar7) {
        FUN_14476a5c8(local_130,uVar10 & 0xffffffff);
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
        if (local_178 == (undefined8 *)0x0) goto LAB_1475eae2b;
      }
      else {
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
      }
      LOCK();
      *(int *)(local_178 + 1) = *(int *)(local_178 + 1) + 1;
      UNLOCK();
      if (local_178 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_178 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_178)(local_178,1);
        }
      }
    }
LAB_1475eae2b:
    if ((int)local_108 != 0) {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_130,1);
    }
  }
  if (*(short *)((longlong)param_3 + 0x22) == -1) {
    local_190 = (undefined8 *)0x0;
    local_168 = 0;
  }
  else {
    FUN_1475db864(lVar2 + 0x28,&local_178,*(short *)((longlong)param_3 + 0x22),
                  *(undefined2 *)(param_1 + 0x16));
    local_190 = local_178;
    local_191 = local_170 == 1;
  }
  if (0 < iStack_158) {
    lVar9 = 0;
    iVar4 = iStack_158;
    do {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        uVar10 = (ulonglong)*(ushort *)(*param_2 + 2);
        lVar11 = uVar10 + local_168;
        if (local_168 == 0) {
          lVar11 = 0;
        }
        lVar3 = *param_6;
        uVar5 = FUN_147546472(&local_100,*(undefined2 *)(CONCAT44(uStack_15c,local_160) + lVar9 * 2)
                              ,*(undefined8 *)(param_5 + uVar10),lVar11);
        *(undefined8 *)(uVar10 + lVar3 + lVar9 * 8) = uVar5;
        iVar4 = iStack_158;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar4);
  }
  *(undefined4 *)(lVar2 + 0x29c) = 1;
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_190 + 3) = *(int *)(local_190 + 3) + -1;
    UNLOCK();
    if ((local_191 & 1) != 0) {
      ReleaseSRWLockShared((PSRWLOCK)(local_190 + 1));
    }
  }
  FUN_14588b8d6(local_130);
  FUN_1475d7c02(&local_100);
LAB_1475ead1d:
  if ((local_50 ^ (ulonglong)local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475eafca FUN_1475eafca body=31 status=ok
// SIG undefined FUN_1475eafca(void)

undefined8 FUN_1475eafca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475eafea FUN_1475eafea body=808 status=ok
// SIG undefined FUN_1475eafea(void)

void FUN_1475eafea(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_1d8 [32];
  ushort *local_1b8;
  code **local_1b0;
  longlong local_1a8;
  undefined8 *local_1a0;
  ushort local_18c [2];
  ushort *local_188;
  undefined8 *local_180;
  undefined2 local_174;
  ushort local_172;
  undefined8 local_170;
  undefined2 local_168;
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined1 local_15f;
  undefined4 local_15c;
  undefined1 local_158;
  undefined2 local_150;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined2 local_142;
  undefined1 local_13f;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 local_118;
  byte bStack_117;
  uint local_114;
  undefined1 local_108 [80];
  longlong local_b8;
  code *local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar2 = FUN_14009d2a0();
  local_150 = *(undefined2 *)(lVar2 + 0x4a);
  local_14a = *(undefined2 *)(lVar2 + 0x108);
  local_14e = *(undefined4 *)(lVar2 + 0x104);
  puVar5 = (undefined2 *)*param_3;
  local_142 = puVar5[6];
  local_144 = puVar5[4];
  local_148 = *puVar5;
  local_146 = puVar5[2];
  local_13f = 0;
  local_13c = 0x6ff;
  local_138 = 0;
  local_172 = *(ushort *)(param_2 + 0x14);
  local_188 = &local_172;
  local_180 = &local_170;
  FUN_1475ebd9c(&local_150,local_128);
  local_114 = *(uint *)(param_6 + 0x290);
  bVar3 = bStack_117 & 0xfe | (local_114 & 0xfffffeff) == 1;
  _local_118 = CONCAT11(bVar3,local_118);
  local_1b8 = local_18c;
  local_18c[0] = CONCAT11(bVar3,local_118) & 0xfdff;
  local_1b0 = (code **)&local_170;
  local_170 = FUN_1475ec14c;
  local_168 = CONCAT11(local_168._1_1_,3);
  local_1a8 = param_2;
  FUN_1475ebf24(local_128,&local_58,param_6 + 0x28,param_5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_130 = 0x10000000000;
    puVar5 = (undefined2 *)*param_3;
    iVar1 = *(int *)(param_3 + 1);
    if ((longlong)iVar1 != 0) {
      lVar4 = 0;
      do {
        FUN_140dba9e6(&local_150,*(undefined2 *)((longlong)puVar5 + lVar4));
        lVar4 = lVar4 + 4;
      } while ((longlong)iVar1 * 4 != lVar4);
      puVar5 = (undefined2 *)*param_3;
    }
    local_162 = puVar5[6];
    local_164 = puVar5[4];
    local_168 = *puVar5;
    local_166 = puVar5[2];
    local_170 = (code *)CONCAT26(*(undefined2 *)(lVar2 + 0x108),
                                 CONCAT42(*(undefined4 *)(lVar2 + 0x104),
                                          *(undefined2 *)(lVar2 + 0x4a)));
    local_15f = 0;
    local_15c = 0x6ff;
    local_158 = 0;
    FUN_1475ec91c(local_128);
    FUN_140dad9c2(local_108,&local_150,2);
    local_174 = *(undefined2 *)(param_2 + 0x14);
    local_50 = &local_172;
    local_58 = (code *)&local_174;
    FUN_1447c44f6(local_108,&local_58);
    FUN_140dad9c2(local_108,&local_150,0x84);
    local_114 = *(uint *)(param_6 + 0x290);
    bVar3 = bStack_117 & 0xfe | (local_114 & 0xfffffeff) == 1;
    _local_118 = CONCAT11(bVar3,local_118);
    local_172 = CONCAT11(bVar3,local_118) & 0xfdff;
    local_58 = FUN_1475ecbe6;
    local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
    local_1b8 = &local_172;
    local_1b0 = &local_58;
    local_1a8 = param_2;
    local_1a0 = param_3;
    FUN_1475ec9c0(local_128,local_18c,param_6 + 0x28,param_5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475eb314 FUN_1475eb314 body=805 status=ok
// SIG undefined FUN_1475eb314(void)

void FUN_1475eb314(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined2 *local_188;
  uint *local_180;
  undefined8 *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  undefined2 local_15e;
  undefined2 local_15c;
  uint local_15a;
  undefined2 local_156;
  undefined2 local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined1 local_14b;
  undefined4 local_148;
  undefined1 local_144;
  undefined2 local_140;
  undefined4 local_13e;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined1 local_12f;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118 [17];
  byte local_107;
  uint local_104;
  undefined1 local_f8 [80];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar4 = FUN_14009d2a0();
  local_140 = *(undefined2 *)(lVar4 + 0x4a);
  local_13a = *(undefined2 *)(lVar4 + 0x108);
  local_13e = *(undefined4 *)(lVar4 + 0x104);
  puVar6 = (undefined2 *)*param_3;
  local_132 = puVar6[6];
  local_134 = puVar6[4];
  local_138 = *puVar6;
  local_136 = puVar6[2];
  local_12f = 0;
  local_12c = 0x6ff;
  local_128 = 0;
  local_15c = *(undefined2 *)(param_2 + 0x14);
  local_188 = &local_15c;
  local_180 = &local_15a;
  local_198 = param_3;
  FUN_1475ebd9c(&local_140,local_118);
  local_104 = *(uint *)(param_7 + 0x290);
  local_107 = local_107 & 0xfe | (local_104 & 0xfffffeff) == 1;
  local_1b8 = param_6;
  local_1b0 = param_2;
  FUN_1432f816a(local_118,&local_178,param_7 + 0x28,param_5);
  if (local_178 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_178 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_178)(local_178,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_120 = 0x10000000000;
    puVar6 = (undefined2 *)*local_198;
    iVar2 = *(int *)(local_198 + 1);
    if ((longlong)iVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_140,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar2 * 4 != lVar5);
      puVar6 = (undefined2 *)*local_198;
    }
    puVar3 = local_198;
    local_15c = *(undefined2 *)(lVar4 + 0x4a);
    local_156 = *(undefined2 *)(lVar4 + 0x108);
    local_15a = *(uint *)(lVar4 + 0x104);
    local_14e = puVar6[6];
    local_150 = puVar6[4];
    local_154 = *puVar6;
    local_152 = puVar6[2];
    local_14b = 0;
    local_148 = 0x6ff;
    local_144 = 0;
    FUN_1475ec91c(local_118);
    FUN_140dad9c2(local_f8,&local_140,2);
    local_15e = *(undefined2 *)(param_2 + 0x14);
    local_168 = &local_15c;
    local_170 = &local_15e;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_140,0x84);
    local_104 = *(uint *)(param_7 + 0x290);
    local_107 = local_107 & 0xfe | (local_104 & 0xfffffeff) == 1;
    local_1a8 = puVar3;
    local_1b8 = param_6;
    local_1b0 = param_2;
    FUN_1432f8622(local_118,&local_190,param_7 + 0x28,param_5);
    if (local_190 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_190 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_190)(local_190,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475eb63a FUN_1475eb63a body=520 status=ok
// SIG undefined FUN_1475eb63a(void)

longlong * FUN_1475eb63a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1475ee61a(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_1475eb67e;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c20a0;
  plVar5 = plVar4 + 2;
  FUN_1475ee788(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_1475f0190(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_1475eb809:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001475eb7f8:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x0001475eb7f8;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_1475eb809;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_1475ee6ce(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_1475eb67e:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475eb846 FUN_1475eb846 body=130 status=ok
// SIG undefined FUN_1475eb846(void)

void FUN_1475eb846(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1475f0238(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475eb8ca FUN_1475eb8ca body=616 status=ok
// SIG undefined FUN_1475eb8ca(void)

void FUN_1475eb8ca(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_1475e1ab0(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ebb34 FUN_1475ebb34 body=615 status=ok
// SIG undefined FUN_1475ebb34(void)

void FUN_1475ebb34(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = (int)param_4[1];
  local_b8 = param_3;
  if (0 < iVar3) {
    lVar8 = *param_6;
    local_c0 = param_5 + 0x28;
    lVar6 = 0;
    do {
      if (*(short *)(*param_4 + lVar6 * 2) != -1) {
        FUN_1432d4ca4(local_c0,&local_60);
        lVar2 = local_60;
        lVar4 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)(*param_3 + 0xc));
        local_b0 = (undefined8 *)(local_50 + lVar4 * 8);
        if (local_50 == 0) {
          local_b0 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_78,*(undefined2 *)(*param_3 + 8));
        puVar7 = (undefined8 *)(local_68 + lVar4 * 8);
        if (local_68 == 0) {
          puVar7 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_90,*(undefined2 *)(*param_3 + 4));
        puVar5 = (undefined8 *)(local_80 + lVar4 * 8);
        if (local_80 == 0) {
          puVar5 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_a8,*(undefined2 *)*param_3);
        lVar2 = *param_3;
        if ((local_98 != 0) &&
           (puVar1 = (undefined8 *)(local_98 + lVar4 * 8), puVar1 != (undefined8 *)0x0)) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 2)) = *puVar1;
        }
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 6)) = *puVar5;
        }
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 10)) = *puVar7;
        }
        if (local_b0 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 0xe)) = *local_b0;
        }
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
          UNLOCK();
          if (local_a0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
          }
        }
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
          UNLOCK();
          if (local_88 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
          }
        }
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
          UNLOCK();
          if (local_70 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
          }
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar3 = (int)param_4[1];
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x20;
    } while (lVar6 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ebd9c FUN_1475ebd9c body=148 status=ok
// SIG undefined FUN_1475ebd9c(void)

undefined8 * FUN_1475ebd9c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[8] = 0x10000000000;
  param_2[0xd] = 0x10000000000;
  param_2[0x14] = 0x10000000000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x19] = 0x10000000000;
  FUN_1475ebe32(param_2,param_2 + 4);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ebe32 FUN_1475ebe32 body=240 status=ok
// SIG undefined FUN_1475ebe32(void)

void FUN_1475ebe32(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[5];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[6];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[7];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ebf24 FUN_1475ebf24 body=550 status=ok
// SIG undefined FUN_1475ebf24(void)

int * FUN_1475ebf24(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[4] == -1)) || (param_1[5] == -1)) ||
     (((param_1[6] == -1 || (param_1[7] == -1)) ||
      (cVar4 = FUN_1475ec19e(param_1,param_3), cVar4 == '\0')))) {
    *param_2 = -1;
    goto LAB_1475ebf7a;
  }
  plVar5 = (longlong *)FUN_1475ec319(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
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
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_1475ec2aa(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_1475ec40c;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1475ec0d7;
    }
  }
  else {
LAB_1475ec0d7:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1475ebf7a:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475ec14c FUN_1475ec14c body=80 status=ok
// SIG undefined FUN_1475ec14c(void)

void FUN_1475ec14c(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1475ec60c(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ec19e FUN_1475ec19e body=268 status=ok
// SIG undefined FUN_1475ec19e(void)

undefined8 FUN_1475ec19e(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[6];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[7];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar6 & bVar4 & bVar5 & bVar7);
}



// FUNCTION 1475ec2aa FUN_1475ec2aa body=111 status=ok
// SIG undefined FUN_1475ec2aa(void)

void FUN_1475ec2aa(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  FUN_140dba9e6(param_2,param_1[5]);
  FUN_140dba9e6(param_2,param_1[6]);
  FUN_140dba9e6(param_2,param_1[7]);
  return;
}



// FUNCTION 1475ec319 FUN_1475ec319 body=180 status=ok
// SIG undefined FUN_1475ec319(void)

undefined8 * FUN_1475ec319(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14a4c2040;
  puVar8[2] = &PTR_FUN_14a4c2058;
  param_2 = (longlong *)*param_2;
  puVar8[3] = param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar8[4] = local_38;
    puVar8[5] = uStack_30;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  *(undefined4 *)((longlong)puVar8 + 0x3c) = param_1[3];
  *(undefined4 *)(puVar8 + 8) = uVar5;
  *(undefined4 *)((longlong)puVar8 + 0x44) = uVar6;
  *(undefined4 *)(puVar8 + 9) = uVar7;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
  *(undefined4 *)(puVar8 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ec3d0 FUN_1475ec3d0 body=29 status=ok
// SIG undefined FUN_1475ec3d0(void)

undefined8 FUN_1475ec3d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ec3ee FUN_1475ec3ee body=29 status=ok
// SIG undefined FUN_1475ec3ee(void)

undefined8 FUN_1475ec3ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ec424 FUN_1475ec424 body=488 status=ok
// SIG undefined FUN_1475ec424(void)

void FUN_1475ec424(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,8);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_1475ec46c;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1475ec46c:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar9 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  uVar4 = (uint)*(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[4]) goto LAB_1475ec508;
      puVar7 = puVar7 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1475ec508:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x10 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar4 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[5]) goto LAB_1475ec55d;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1475ec55d:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x14 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  uVar6 = (ushort)uVar4;
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[6]) goto LAB_1475ec5aa;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1475ec5aa:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x18 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar6 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar4 = (uint)uVar6;
  }
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[7]) goto LAB_1475ec5ef;
      puVar1 = puVar1 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1475ec5ef:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + 0x1c + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1475ec60c FUN_1475ec60c body=256 status=ok
// SIG undefined FUN_1475ec60c(void)

void FUN_1475ec60c(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar5 = 0;
  local_60 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_60 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_58 = lVar5;
  }
  local_50 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_50 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_88 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_88 = lVar5;
  }
  local_80 = lVar3 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    local_80 = lVar5;
  }
  local_78 = lVar3 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    local_78 = lVar5;
  }
  local_70 = lVar3 + (ulonglong)puVar2[7];
  if ((ulonglong)puVar2[7] == 0xffffffff) {
    local_70 = lVar5;
  }
  FUN_1475ec70e(param_1,lVar1,lVar4);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ec70e FUN_1475ec70e body=524 status=ok
// SIG undefined FUN_1475ec70e(void)

void FUN_1475ec70e(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = *(ushort *)(param_2 + 0xe);
  uVar7 = (ulonglong)uVar4;
  lVar5 = *param_4;
  if (lVar5 == 0) {
    lVar5 = param_4[1];
    if (lVar5 == 0) {
      lVar5 = param_4[2];
      if (uVar4 != 0 && lVar5 != 0) {
        lVar8 = 0;
        do {
          local_68 = CONCAT44((float)*(double *)(param_6 + lVar8),
                              (float)*(double *)(param_5 + lVar8));
          local_60 = CONCAT44((float)*(double *)(param_8 + lVar8),
                              (float)*(double *)(param_7 + lVar8));
          FUN_1475de964(*(undefined8 *)(lVar5 + lVar8 * 2),*(undefined8 *)(param_3 + lVar8),
                        &local_68);
          lVar8 = lVar8 + 8;
        } while ((ulonglong)uVar4 << 3 != lVar8);
      }
    }
    else if (uVar7 != 0) {
      uVar9 = 0;
      do {
        uVar6 = (ulonglong)*(ushort *)(lVar5 + uVar9 * 2);
        if (uVar6 != 0) {
          dVar1 = *(double *)(param_8 + uVar9 * 8);
          dVar2 = *(double *)(param_7 + uVar9 * 8);
          dVar3 = *(double *)(param_6 + uVar9 * 8);
          lVar8 = *(longlong *)(param_3 + uVar9 * 8);
          *(float *)(lVar8 + uVar6) = (float)*(double *)(param_5 + uVar9 * 8);
          *(float *)(lVar8 + 4 + uVar6) = (float)dVar3;
          *(float *)(lVar8 + 8 + uVar6) = (float)dVar2;
          *(float *)(lVar8 + 0xc + uVar6) = (float)dVar1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
    }
  }
  else if (uVar7 != 0) {
    uVar9 = 0;
    local_70 = param_1;
    do {
      local_50 = *(undefined8 *)(param_8 + uVar9 * 8);
      local_58 = *(undefined8 *)(param_7 + uVar9 * 8);
      local_60 = *(undefined8 *)(param_6 + uVar9 * 8);
      local_68 = *(undefined8 *)(param_5 + uVar9 * 8);
      (**(code **)(*(longlong *)(local_70 + 8) + 0x20 +
                  (longlong)*(int *)(local_70 + 0x14) * (ulonglong)*(ushort *)(lVar5 + uVar9 * 2)))
                (*(undefined8 *)(param_3 + uVar9 * 8),&local_68);
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ec91c FUN_1475ec91c body=162 status=ok
// SIG undefined FUN_1475ec91c(void)

undefined8 * FUN_1475ec91c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  ulonglong *local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[8] = 0x10000000000;
  param_1[0xd] = 0x10000000000;
  param_1[0x14] = 0x10000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x19] = 0x10000000000;
  local_1a = *(undefined2 *)param_1;
  local_28 = &local_18;
  local_30 = &local_1a;
  FUN_1447c44f6(param_1 + 4);
  FUN_140dad887((undefined2 *)((longlong)param_1 + 2),param_1 + 4);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ec9c0 FUN_1475ec9c0 body=549 status=ok
// SIG undefined FUN_1475ec9c0(void)

int * FUN_1475ec9c0(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*param_1 == -1) || (cVar4 = FUN_1475ecc38(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1475ec9f4;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_1475eccfe(plVar5,param_1,param_7,param_8);
  if (plVar5 != (longlong *)0x0) {
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
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_1475ecc6e(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_1475ecdee;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1475ecb72;
    }
  }
  else {
LAB_1475ecb72:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1475ec9f4:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475ecbe6 FUN_1475ecbe6 body=80 status=ok
// SIG undefined FUN_1475ecbe6(void)

void FUN_1475ecbe6(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1475ed02c(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ecc38 FUN_1475ecc38 body=53 status=ok
// SIG undefined FUN_1475ecc38(void)

undefined4 FUN_1475ecc38(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  lVar4 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar4 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4);
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (uVar1 & 0x1f) & 1) != 0);
  }
  return uVar3;
}



// FUNCTION 1475ecc6e FUN_1475ecc6e body=144 status=ok
// SIG undefined FUN_1475ecc6e(void)

void FUN_1475ecc6e(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if (param_1[4] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[5] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[6] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[7] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 1475eccfe FUN_1475eccfe body=177 status=ok
// SIG undefined FUN_1475eccfe(void)

undefined8 *
FUN_1475eccfe(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a4c2060;
  param_1[2] = &PTR_FUN_14a4c2078;
  param_3 = (longlong *)*param_3;
  uVar8 = *param_4;
  uVar9 = param_4[1];
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48._0_4_ = (undefined4)uVar8;
  local_48._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar9;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_40._4_4_;
  local_48 = uVar8;
  uStack_40 = uVar9;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3,&local_38);
    param_1[4] = local_38;
    param_1[5] = uStack_30;
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_2[3];
  *(undefined4 *)(param_1 + 10) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0xb) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ecdb2 FUN_1475ecdb2 body=29 status=ok
// SIG undefined FUN_1475ecdb2(void)

undefined8 FUN_1475ecdb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ecdd0 FUN_1475ecdd0 body=29 status=ok
// SIG undefined FUN_1475ecdd0(void)

undefined8 FUN_1475ecdd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ece06 FUN_1475ece06 body=550 status=ok
// SIG undefined FUN_1475ece06(void)

void FUN_1475ece06(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,8);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_1475ece4e;
      puVar1 = puVar1 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1475ece4e:
  lVar3 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar3 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar3 = *param_3;
  }
  lVar4 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar4 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar3 + lVar7 * 4 + 4 + lVar4 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  uVar2 = (uint)*(ushort *)(param_2 + 0xc);
  if (uVar2 != 0) {
    lVar3 = *param_3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar4 = 0;
    do {
      if (*(short *)((longlong)puVar1 + lVar4 + 0x1e) == param_1[4]) {
        if ((longlong)puVar1 + lVar4 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar4)) {
            *(int *)(lVar3 + 0x10 + lVar7 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + lVar4) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar4 = lVar4 + 0x20;
    } while ((ulonglong)*(ushort *)(param_2 + 0xc) << 5 != lVar4);
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[5]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x14 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[6]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x18 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (uVar2 == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[7]) {
        if (puVar1 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar3 + 0x1c + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != puVar5);
  }
  return;
}



// FUNCTION 1475ed02c FUN_1475ed02c body=256 status=ok
// SIG undefined FUN_1475ed02c(void)

void FUN_1475ed02c(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar5 = 0;
  local_60 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_60 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_58 = lVar5;
  }
  local_50 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_50 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_88 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_88 = lVar5;
  }
  local_80 = lVar3 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    local_80 = lVar5;
  }
  local_78 = lVar3 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    local_78 = lVar5;
  }
  local_70 = lVar3 + (ulonglong)puVar2[7];
  if ((ulonglong)puVar2[7] == 0xffffffff) {
    local_70 = lVar5;
  }
  FUN_1475ed12e(param_1,lVar1,lVar4);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ed12e FUN_1475ed12e body=142 status=ok
// SIG undefined FUN_1475ed12e(void)

void FUN_1475ed12e(void)

{
  longlong *in_R9;
  
  if (*in_R9 == 0) {
    if (in_R9[1] == 0) {
      if (in_R9[2] != 0) {
        FUN_1475ed524();
      }
    }
    else {
      FUN_1475ed35c();
    }
    return;
  }
  FUN_1475ed1bc();
  return;
}



// FUNCTION 1475ed1bc FUN_1475ed1bc body=415 status=ok
// SIG undefined FUN_1475ed1bc(void)

void FUN_1475ed1bc(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8 [5];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b0 = param_4;
  if (local_b8 != 0) {
    uVar9 = 0;
    puVar4 = param_7;
    puVar7 = param_8;
    puVar8 = param_6;
    do {
      uVar6 = (ulonglong)*(ushort *)(local_b0 + uVar9 * 2);
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      (**(code **)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)*(int *)(param_1 + 0x14) * uVar6))
                (local_80,*(undefined8 *)(param_3 + uVar9 * 8));
      puVar2 = puVar7;
      if (param_8 == (undefined8 *)0x0) {
        puVar2 = param_8;
      }
      puVar3 = puVar4;
      if (param_7 == (undefined8 *)0x0) {
        puVar3 = param_7;
      }
      puVar5 = puVar8;
      if (param_6 == (undefined8 *)0x0) {
        puVar5 = param_6;
      }
      lVar1 = *(longlong *)(param_1 + 0x18);
      if (param_5 != 0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 2)) =
             *(undefined8 *)(param_5 + uVar9 * 8);
      }
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 6)) = *puVar5;
      }
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 10)) = *puVar3;
      }
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 0xe)) = *puVar2;
      }
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 + (longlong)*(int *)(param_1 + 0x14) * uVar6))
                (*(undefined8 *)(param_3 + uVar9 * 8),local_a8);
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 1;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (local_b8 != uVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ed35c FUN_1475ed35c body=455 status=ok
// SIG undefined FUN_1475ed35c(void)

void FUN_1475ed35c(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  double local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar5 = 0;
    puVar4 = param_8;
    puVar6 = param_7;
    puVar7 = param_6;
    do {
      puVar9 = puVar4;
      if (param_8 == (undefined8 *)0x0) {
        puVar9 = param_8;
      }
      puVar10 = puVar6;
      if (param_7 == (undefined8 *)0x0) {
        puVar10 = param_7;
      }
      puVar11 = puVar7;
      if (param_6 == (undefined8 *)0x0) {
        puVar11 = param_6;
      }
      uVar8 = (ulonglong)*(ushort *)(param_4 + uVar5 * 2);
      lVar2 = *(longlong *)(param_3 + uVar5 * 8);
      local_68[0] = (double)*(float *)(lVar2 + uVar8);
      local_68[1] = (double)*(float *)(lVar2 + 4 + uVar8);
      local_68[2] = (double)*(float *)(lVar2 + 8 + uVar8);
      local_68[3] = (double)*(float *)(lVar2 + 0xc + uVar8);
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (param_5 != 0) {
        *(undefined8 *)((longlong)local_68 + (ulonglong)*(ushort *)(lVar3 + 2)) =
             *(undefined8 *)(param_5 + uVar5 * 8);
      }
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_68 + (ulonglong)*(ushort *)(lVar3 + 6)) = *puVar11;
      }
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_68 + (ulonglong)*(ushort *)(lVar3 + 10)) = *puVar10;
      }
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_68 + (ulonglong)*(ushort *)(lVar3 + 0xe)) = *puVar9;
      }
      *(float *)(lVar2 + uVar8) = (float)local_68[0];
      *(float *)(lVar2 + 4 + uVar8) = (float)local_68[1];
      *(float *)(lVar2 + 8 + uVar8) = (float)local_68[2];
      *(float *)(lVar2 + 0xc + uVar8) = (float)local_68[3];
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar1 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
  local_80 = param_1;
  local_78 = param_3;
  local_70 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ed524 FUN_1475ed524 body=448 status=ok
// SIG undefined FUN_1475ed524(void)

void FUN_1475ed524(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  double local_78 [4];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_88 = param_1;
  local_80 = param_4;
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(local_80 + lVar6 * 2);
      FUN_1475dffba(uVar2,&local_58,*(undefined8 *)(param_3 + lVar6));
      puVar4 = (undefined8 *)(lVar6 + param_8);
      if (param_8 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      puVar5 = (undefined8 *)(lVar6 + param_7);
      if (param_7 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      puVar7 = (undefined8 *)(param_6 + lVar6);
      if (param_6 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      local_78[0] = (double)local_58;
      local_78[1] = (double)local_54;
      local_78[2] = (double)local_50;
      local_78[3] = (double)local_4c;
      lVar3 = *(longlong *)(local_88 + 0x18);
      if (param_5 != 0) {
        *(undefined8 *)((longlong)local_78 + (ulonglong)*(ushort *)(lVar3 + 2)) =
             *(undefined8 *)(param_5 + lVar6);
      }
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_78 + (ulonglong)*(ushort *)(lVar3 + 6)) = *puVar7;
      }
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_78 + (ulonglong)*(ushort *)(lVar3 + 10)) = *puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_78 + (ulonglong)*(ushort *)(lVar3 + 0xe)) = *puVar4;
      }
      local_4c = (float)local_78[3];
      local_50 = (float)local_78[2];
      local_54 = (float)local_78[1];
      local_58 = (float)local_78[0];
      FUN_1475de964(uVar2,*(undefined8 *)(param_3 + lVar6),&local_58);
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ed6e6 FUN_1475ed6e6 body=135 status=ok
// SIG undefined FUN_1475ed6e6(void)

undefined4 * FUN_1475ed6e6(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  param_1[3] = param_3[3];
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475ed76e FUN_1475ed76e body=343 status=ok
// SIG undefined FUN_1475ed76e(void)

void FUN_1475ed76e(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[5];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[6];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[7];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ed8c6 FUN_1475ed8c6 body=1116 status=ok
// SIG undefined FUN_1475ed8c6(void)

void FUN_1475ed8c6(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 *local_110;
  int local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar12 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar12 + 0x1e) == param_4[7]) goto LAB_1475ed916;
      puVar12 = puVar12 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_1475ed916:
  local_1b4 = *(int *)(lVar2 + 0x14);
  if (local_1b4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
  }
  LOCK();
  *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[6]) goto LAB_1475ed950;
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1475ed950:
  local_190 = *puVar12;
  local_1b8 = *(int *)(lVar2 + 0x14);
  if (local_1b8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == param_4[5]) goto LAB_1475ed991;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1475ed991:
  uVar3 = *puVar10;
  local_1bc = *(int *)(lVar2 + 0x14);
  if (local_1bc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[4]) goto LAB_1475ed9d3;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1475ed9d3:
  local_1a0 = *puVar8;
  local_1c0 = *(int *)(lVar2 + 0x14);
  local_198 = uVar3;
  if (local_1c0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_1b0 = *puVar9;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_158,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == *param_4) goto LAB_1475eda5f;
      puVar11 = puVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_1475eda5f:
  iVar1 = *(int *)(lVar2 + 0x14);
  local_188 = param_2;
  local_180 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  lVar6 = local_118;
  lVar7 = local_130;
  lVar2 = local_148;
  uVar5 = local_190;
  uVar4 = local_198;
  uVar3 = local_1a0;
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  local_1a8 = *puVar11;
  local_f8 = local_158;
  local_f0 = local_150;
  local_158 = 0;
  local_e8 = local_148;
  local_148 = 0;
  local_e0 = local_140;
  local_d8 = local_138;
  local_140 = 0;
  local_d0 = local_130;
  local_130 = 0;
  local_c8 = local_128;
  local_c0 = local_120;
  local_128 = 0;
  local_b8 = local_118;
  local_a8 = local_1c0;
  local_a0 = local_1b0;
  local_90 = local_1bc;
  local_88 = local_1a0;
  local_78 = local_1b8;
  local_70 = local_198;
  local_60 = local_1b4;
  local_118 = 0;
  local_58 = local_190;
  local_110 = puVar11;
  local_108 = iVar1;
  local_100 = local_1a8;
  local_b0 = puVar9;
  local_98 = puVar8;
  local_80 = puVar10;
  local_68 = puVar12;
  FUN_1432f59b8();
  local_178 = 0;
  lStack_170 = 0;
  local_168 = 0;
  if (lVar2 != 0) {
    local_178 = lVar2;
  }
  if (lVar7 != 0) {
    lStack_170 = lVar7;
  }
  if (lVar6 != 0) {
    local_168 = lVar6;
  }
  local_1d0 = uVar5;
  local_1d8 = uVar4;
  local_1e0 = uVar3;
  local_1e8 = local_1b0;
  FUN_1475ec70e(local_180,
                *(undefined8 *)(*(longlong *)(*local_188 + 0x60) + (longlong)(int)local_188[1] * 8),
                local_1a8,&local_178);
  FUN_1475edd24(&local_110);
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475edd24 FUN_1475edd24 body=214 status=ok
// SIG undefined FUN_1475edd24(void)

void FUN_1475edd24(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475eddec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475eddfa FUN_1475eddfa body=118 status=ok
// SIG undefined FUN_1475eddfa(void)

longlong FUN_1475eddfa(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475ed6e6();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf0) = uStack_28;
    *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ede72 FUN_1475ede72 body=135 status=ok
// SIG undefined FUN_1475ede72(void)

undefined4 * FUN_1475ede72(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  param_1[3] = param_3[3];
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475edefa FUN_1475edefa body=358 status=ok
// SIG undefined FUN_1475edefa(void)

void FUN_1475edefa(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      local_42 = param_1[lVar1];
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if (param_1[4] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[4];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[5] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[5];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[6] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[6];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[7] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[7];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ee062 FUN_1475ee062 body=1100 status=ok
// SIG undefined FUN_1475ee062(void)

void FUN_1475ee062(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  longlong local_158;
  int local_150;
  undefined8 local_148;
  longlong local_140;
  int local_138;
  undefined8 local_130;
  longlong local_128;
  int local_120;
  undefined8 local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  undefined8 local_40;
  undefined4 local_38;
  short local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_110,param_4[7]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_128,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_140,param_4[5]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_158,param_4[4]);
  local_34 = param_4[3];
  local_38 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_1a0,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_38,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_4) goto LAB_1475ee162;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_1475ee162:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_e8 = *puVar4;
  local_e0 = local_1a0;
  local_d8 = local_198;
  local_1a0 = 0;
  local_d0 = local_190;
  uStack_c8 = uStack_188;
  local_190 = 0;
  uStack_188 = 0;
  local_c0 = local_180;
  local_b8 = local_178;
  local_178 = 0;
  local_b0 = local_170;
  local_a8 = local_168;
  local_170 = 0;
  local_a0 = local_160;
  local_160 = 0;
  local_98 = local_158;
  local_90 = local_150;
  local_158 = 0;
  local_88 = local_148;
  local_148 = 0;
  local_80 = local_140;
  local_78 = local_138;
  local_140 = 0;
  local_70 = local_130;
  local_130 = 0;
  local_68 = local_128;
  local_60 = local_120;
  local_128 = 0;
  local_58 = local_118;
  local_118 = 0;
  local_50 = local_110;
  local_48 = local_108;
  local_110 = 0;
  local_40 = local_100;
  local_100 = 0;
  local_f8 = puVar4;
  local_f0 = iVar1;
  FUN_1432f59b8();
  if (local_158 != 0) {
    LOCK();
    *(int *)(local_158 + 0x18) = *(int *)(local_158 + 0x18) + -1;
    UNLOCK();
    if (local_150 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_158 + 8));
    }
  }
  if (local_140 != 0) {
    LOCK();
    *(int *)(local_140 + 0x18) = *(int *)(local_140 + 0x18) + -1;
    UNLOCK();
    if (local_138 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_140 + 8));
    }
  }
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 0x18) = *(int *)(local_128 + 0x18) + -1;
    UNLOCK();
    if (local_120 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_128 + 8));
    }
  }
  if (local_110 != 0) {
    LOCK();
    *(int *)(local_110 + 0x18) = *(int *)(local_110 + 0x18) + -1;
    UNLOCK();
    if (local_108 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_110 + 8));
    }
  }
  local_1b8 = 0;
  lStack_1b0 = 0;
  local_1a8 = 0;
  if (local_d0 != 0) {
    local_1b8 = local_d0;
  }
  if (local_b8 != 0) {
    lStack_1b0 = local_b8;
  }
  if (local_a0 != 0) {
    local_1a8 = local_a0;
  }
  local_1c0 = local_40;
  local_1c8 = local_58;
  local_1d0 = local_70;
  local_1d8 = local_88;
  FUN_1475ed12e(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_e8,
                &local_1b8);
  FUN_1475ee4b0(&local_f8);
  if ((local_30 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ee4b0 FUN_1475ee4b0 body=214 status=ok
// SIG undefined FUN_1475ee4b0(void)

void FUN_1475ee4b0(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475ee578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475ee586 FUN_1475ee586 body=146 status=ok
// SIG undefined FUN_1475ee586(void)

longlong FUN_1475ee586(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1475ede72();
  param_4 = (longlong *)*param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(longlong **)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0xf8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0xfc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x100) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x104) = uStack_40._4_4_;
  local_48 = uVar1;
  uStack_40 = uVar2;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf0) = uStack_28;
    *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ee61a FUN_1475ee61a body=179 status=ok
// SIG undefined FUN_1475ee61a(void)

undefined8 * FUN_1475ee61a(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_1475ee674;
    }
  }
  uVar6 = 0;
LAB_1475ee674:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1475ee6ce FUN_1475ee6ce body=184 status=ok
// SIG undefined FUN_1475ee6ce(void)

void FUN_1475ee6ce(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ee788 FUN_1475ee788 body=241 status=ok
// SIG undefined FUN_1475ee788(void)

undefined8 * FUN_1475ee788(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c20c0;
  param_1[0x1b] = &PTR_FUN_14a4c2108;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ee87a FUN_1475ee87a body=9 status=ok
// SIG undefined FUN_1475ee87a(void)

void FUN_1475ee87a(longlong param_1)

{
  FUN_1475ef528(param_1 + 0x10);
  return;
}



// FUNCTION 1475ee884 FUN_1475ee884 body=29 status=ok
// SIG undefined FUN_1475ee884(void)

undefined8 FUN_1475ee884(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ee8a2 FUN_1475ee8a2 body=38 status=ok
// SIG undefined FUN_1475ee8a2(void)

undefined8 FUN_1475ee8a2(undefined8 param_1,int param_2)

{
  FUN_1475ef528();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ee8ee FUN_1475ee8ee body=86 status=ok
// SIG undefined FUN_1475ee8ee(void)

void FUN_1475ee8ee(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_1475ef5d6();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ee946 FUN_1475ee946 body=1097 status=ok
// SIG undefined FUN_1475ee946(void)

ulonglong FUN_1475ee946(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  undefined7 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  byte local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar4 + 8))
                      (plVar4,(longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68));
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar6 == '\0') goto LAB_1475ee9c3;
  }
  uVar9 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
      local_98 = *puVar7;
      uStack_90 = puVar7[1];
      local_88 = *(undefined4 *)(puVar7 + 2);
      uStack_84 = *(undefined4 *)((longlong)puVar7 + 0x14);
      uStack_80 = *(undefined4 *)(puVar7 + 3);
      uStack_7c = *(undefined4 *)((longlong)puVar7 + 0x1c);
      local_78 = *(undefined4 *)(puVar7 + 4);
      uStack_74 = *(undefined4 *)((longlong)puVar7 + 0x24);
      uStack_70 = *(undefined4 *)(puVar7 + 5);
      uStack_6c = *(undefined4 *)((longlong)puVar7 + 0x2c);
      local_58 = *(byte *)(puVar7 + 8);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_58])(local_68,puVar7 + 6);
      local_50 = *(byte *)(puVar7 + 9);
      FUN_1410d7556(param_1 + 0x18,&local_98);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50 + 0x40)])();
      FUN_1475ef762(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar3) {
        uVar10 = (ulonglong)uVar3;
        uVar11 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar12 = (uint)uVar10 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x40) < param_2) {
            uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
          }
          bVar5 = 1 < uVar11;
          uVar11 = (uint)uVar10;
        } while (bVar5);
      }
      if (((int)uVar8 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
        FUN_1475ef7dc(param_1 + 0xa0);
      }
      if ((local_50 & 1) != 0) {
        FUN_1475ef664(&local_98,&local_88);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_58])(local_68);
LAB_1475eebbf:
      unaff_RBP = 0;
      goto LAB_1475ee9c3;
    }
    unaff_RBP = CONCAT71(uVar9,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50) & 1) == 0)
    goto LAB_1475ee9c3;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    uVar11 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar11 >> 1) + uVar12;
        if (*(int *)(lVar13 + (ulonglong)uVar1 * 0x40) < param_2) {
          uVar12 = uVar1 + (uVar11 & 1);
        }
        bVar5 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar5);
    }
    if ((((int)uVar12 < (int)uVar3) && (*(int *)(lVar13 + (ulonglong)uVar12 * 0x40) <= param_2)) &&
       (lVar13 + (ulonglong)uVar12 * 0x40 != -8)) {
      FUN_1475ef664((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar3) {
        uVar10 = (ulonglong)uVar3;
        uVar11 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar12 = (uint)uVar10 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x40) < param_2) {
            uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
          }
          bVar5 = 1 < uVar11;
          uVar11 = (uint)uVar10;
        } while (bVar5);
      }
      unaff_RBP = CONCAT71(uVar9,1);
      if (((int)uVar8 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
        FUN_1475ef7dc(param_1 + 0xa0);
      }
      goto LAB_1475ee9c3;
    }
    unaff_RBP = CONCAT71(uVar9,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      if ((bVar2 & 1) == 0) goto LAB_1475ee9c3;
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
      *(byte *)(puVar7 + 9) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1475ee9c3;
      lVar13 = (longlong)param_2 * 0x50;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + lVar13);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13);
      if ((bVar2 & 2) == 0) {
        local_98 = *puVar7;
        uStack_90 = puVar7[1];
        local_88 = *(undefined4 *)(puVar7 + 2);
        uStack_84 = *(undefined4 *)((longlong)puVar7 + 0x14);
        uStack_80 = *(undefined4 *)(puVar7 + 3);
        uStack_7c = *(undefined4 *)((longlong)puVar7 + 0x1c);
        local_78 = *(undefined4 *)(puVar7 + 4);
        uStack_74 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uStack_70 = *(undefined4 *)(puVar7 + 5);
        uStack_6c = *(undefined4 *)((longlong)puVar7 + 0x2c);
        local_58 = *(byte *)(puVar7 + 8);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_58])(local_68,puVar7 + 6);
        local_50 = *(byte *)(puVar7 + 9);
        FUN_1410d7556(param_1 + 0x18,&local_98);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar13 + 0x40)])();
        FUN_1475ef762(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar8 = 0;
        if (0 < (int)uVar3) {
          uVar10 = (ulonglong)uVar3;
          uVar11 = uVar3;
          do {
            uVar10 = uVar10 >> 1;
            uVar12 = (uint)uVar10 + (int)uVar8;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x40) < param_2) {
              uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
            }
            bVar5 = 1 < uVar11;
            uVar11 = (uint)uVar10;
          } while (bVar5);
        }
        if (((int)uVar8 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
          FUN_1475ef7dc(param_1 + 0xa0);
        }
        if ((local_50 & 1) != 0) {
          FUN_1475ef664(&local_98,&local_88);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_58])(local_68);
        goto LAB_1475eebbf;
      }
      if ((bVar2 & 1) == 0) goto LAB_1475ee9c3;
    }
  }
  FUN_1475ef664(puVar7,puVar7 + 2);
LAB_1475ee9c3:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1475eed90 FUN_1475eed90 body=417 status=ok
// SIG undefined FUN_1475eed90(void)

undefined8 FUN_1475eed90(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar7 = 3;
    if (cVar6 == '\0') goto LAB_1475eee4a;
  }
  if (param_3 == '\x01') {
    lVar5 = (longlong)param_2 * 0x50;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar5);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar5 + 0x40)])();
    FUN_1475ef762(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar8 = 0;
    if (0 < (int)uVar3) {
      uVar9 = (ulonglong)uVar3;
      uVar10 = uVar3;
      do {
        uVar9 = uVar9 >> 1;
        uVar11 = (uint)uVar9 + (int)uVar8;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x40) < param_2) {
          uVar8 = (ulonglong)(uVar11 + (uVar10 & 1));
        }
        bVar4 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar4);
    }
    if (((int)uVar8 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
      FUN_1475ef7dc(param_1 + 0xa0);
    }
    uVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar8 = 0;
    if (0 < (int)uVar3) {
      uVar9 = (ulonglong)uVar3;
      uVar10 = uVar3;
      do {
        uVar9 = uVar9 >> 1;
        uVar11 = (uint)uVar9 + (int)uVar8;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x40) < param_2) {
          uVar8 = (ulonglong)(uVar11 + (uVar10 & 1));
        }
        bVar4 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar4);
    }
    if (((int)uVar8 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
      FUN_1475ef7dc(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar7 = 1;
  }
LAB_1475eee4a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475eef3c FUN_1475eef3c body=266 status=ok
// SIG undefined FUN_1475eef3c(void)

void FUN_1475eef3c(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_1475ef8de(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ef048 FUN_1475ef048 body=773 status=ok
// SIG undefined FUN_1475ef048(void)

void FUN_1475ef048(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  char *local_c8;
  undefined1 local_bc [8];
  int local_b4;
  longlong local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  longlong lStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar7 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_c8 = param_2;
  if (uVar7 != 0) {
    lVar1 = param_1 + -0xd8;
    local_d8 = *param_6;
    local_d0 = param_6[1];
    local_e0 = param_6[2];
    param_5 = param_5 + 8;
    uVar12 = 0;
    do {
      local_b0 = *(longlong *)(param_4 + uVar12 * 4);
      if ((local_b0 != 0) && (cVar8 = FUN_1475efbf6(lVar1,&local_b0,param_5), cVar8 != '\0')) {
        FUN_1475ef8de(lVar1,local_bc,&local_b0,param_5);
        piVar11 = *(int **)(param_1 + -0x28);
        if (*piVar11 != 0) {
          FUN_140adeba6(piVar11,local_bc);
          piVar11 = *(int **)(param_1 + -0x28);
        }
        lVar9 = FUN_1400e4054(piVar11,local_bc);
        if (lVar9 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = CONCAT71((int7)((ulonglong)local_bc >> 8),'\x02' - (*(short *)(lVar9 + 0xe) == 0)
                           );
        }
        cVar8 = FUN_1475efc7c(lVar1,local_b4,uVar13 & 0xffffffff);
        if (cVar8 == '\0') {
          local_68 = 0;
          lStack_60 = 0;
          local_78 = 0.0;
          dStack_70 = 0.0;
          local_88 = 0.0;
          uStack_80 = 0.0;
          local_58 = 0;
          if (local_d0 == 0) {
            if (local_d8 == 0) {
              if (local_e0 != 0) {
                local_68 = *(ulonglong *)(local_e0 + uVar12 * 8);
                lStack_60 = *(longlong *)(local_e0 + 8 + uVar12 * 8);
                uVar10 = local_68;
                if (lStack_60 != 0) {
                  LOCK();
                  *(int *)(lStack_60 + 8) = *(int *)(lStack_60 + 8) + 1;
                  UNLOCK();
                  uVar10 = *(ulonglong *)(local_e0 + uVar12 * 8);
                }
                local_58 = 2;
                FUN_1475dffba(uVar10,&local_a8,*(undefined8 *)(param_4 + uVar12 * 4));
                fVar5 = fStack_a0;
                fVar6 = fStack_9c;
                fVar3 = local_a8;
                fVar4 = fStack_a4;
                goto LAB_1475ef29d;
              }
            }
            else {
              lVar9 = (longlong)*(int *)(param_1 + 0x24) * (ulonglong)*(ushort *)(local_d8 + uVar12)
              ;
              local_68 = *(longlong *)(param_1 + 0x18) + lVar9;
              (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar9))
                        (&local_a8,*(undefined8 *)(param_4 + uVar12 * 4));
              local_78 = local_98;
              dStack_70 = dStack_90;
              local_88 = (double)CONCAT44(fStack_a4,local_a8);
              uStack_80 = (double)CONCAT44(fStack_9c,fStack_a0);
            }
          }
          else {
            uVar10 = (ulonglong)*(ushort *)(local_d0 + uVar12);
            local_68 = (ulonglong)*(ushort *)(local_d0 + uVar12);
            local_58 = 1;
            lVar9 = *(longlong *)(param_4 + uVar12 * 4);
            fVar3 = *(float *)(lVar9 + uVar10);
            fVar4 = *(float *)(lVar9 + 4 + uVar10);
            fVar5 = *(float *)(lVar9 + 8 + uVar10);
            fVar6 = *(float *)(lVar9 + 0xc + uVar10);
LAB_1475ef29d:
            uStack_80 = (double)fVar4;
            local_88 = (double)fVar3;
            dStack_70 = (double)fVar6;
            local_78 = (double)fVar5;
          }
          FUN_1475efd1a(lVar1,local_b4,uVar13 & 0xffffffff,&local_88);
          (*(code *)(&PTR_LAB_14a4c7e10)[local_58 & 0xff])(&local_68);
        }
        if (*local_c8 == '\x01') {
          pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x48 + (longlong)local_b4 * 0x50);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      uVar12 = uVar12 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar7 * 2 != uVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ef34e FUN_1475ef34e body=38 status=ok
// SIG undefined FUN_1475ef34e(void)

undefined8 FUN_1475ef34e(undefined8 param_1,int param_2)

{
  FUN_1475ef528();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ef374 FUN_1475ef374 body=52 status=ok
// SIG undefined FUN_1475ef374(void)

void FUN_1475ef374(longlong *param_1)

{
  FUN_1475ef3de();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475ef3a8 FUN_1475ef3a8 body=53 status=ok
// SIG undefined FUN_1475ef3a8(void)

void FUN_1475ef3a8(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1475ef3de FUN_1475ef3de body=328 status=ok
// SIG undefined FUN_1475ef3de(void)

void FUN_1475ef3de(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x50 + 0x40)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ef528 FUN_1475ef528 body=173 status=ok
// SIG undefined FUN_1475ef528(void)

void FUN_1475ef528(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c2120;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_1475ef3a8(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1475ef374(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001475ef5c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1475ef5d6 FUN_1475ef5d6 body=140 status=ok
// SIG undefined FUN_1475ef5d6(void)

void FUN_1475ef5d6(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ef664 FUN_1475ef664 body=233 status=ok
// SIG undefined FUN_1475ef664(void)

void FUN_1475ef664(float *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  local_2c = param_1[1];
  lVar4 = FUN_14479d2ce(&local_30);
  if (lVar4 != 0) {
    if (*(char *)(param_2 + 6) == '\x01') {
      dVar1 = param_2[3];
      dVar2 = param_2[2];
      dVar3 = param_2[1];
      uVar5 = (ulonglong)*(ushort *)(param_2 + 4);
      *(float *)(lVar4 + uVar5) = (float)*param_2;
      *(float *)(lVar4 + 4 + uVar5) = (float)dVar3;
      *(float *)(lVar4 + 8 + uVar5) = (float)dVar2;
      *(float *)(lVar4 + 0xc + uVar5) = (float)dVar1;
    }
    else if (*(char *)(param_2 + 6) == '\x02') {
      local_24 = (float)param_2[3];
      local_28 = (float)param_2[2];
      local_2c = (float)param_2[1];
      local_30 = (float)*param_2;
      FUN_1475de964(param_2[4],lVar4);
    }
    else if (param_2[4] != 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ef762 FUN_1475ef762 body=122 status=ok
// SIG undefined FUN_1475ef762(void)

void FUN_1475ef762(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1475ef7dc FUN_1475ef7dc body=102 status=ok
// SIG undefined FUN_1475ef7dc(void)

void FUN_1475ef7dc(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x40 + 0x38)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x40);
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar2) << 6);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1475ef842(param_1);
  return;
}



// FUNCTION 1475ef842 FUN_1475ef842 body=62 status=ok
// SIG undefined FUN_1475ef842(void)

void FUN_1475ef842(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1475ef880(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 1475ef880 FUN_1475ef880 body=93 status=ok
// SIG undefined FUN_1475ef880(void)

ulonglong FUN_1475ef880(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1475ef8de FUN_1475ef8de body=189 status=ok
// SIG undefined FUN_1475ef8de(void)

longlong FUN_1475ef8de(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_1475ef99c(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ef99c FUN_1475ef99c body=363 status=ok
// SIG undefined FUN_1475ef99c(void)

int * FUN_1475ef99c(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_98._0_4_ = *param_3;
    local_98._4_4_ = param_3[1];
    uStack_90._0_4_ = param_3[2];
    uStack_90._4_4_ = param_3[3];
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_1475efb08(param_1 + 0x68,local_a8);
    *local_a0 = (undefined4)local_98;
    local_a0[1] = local_98._4_4_;
    local_a0[2] = (undefined4)uStack_90;
    local_a0[3] = uStack_90._4_4_;
    *(undefined1 *)(local_a0 + 0x10) = 0;
    *(undefined1 *)(local_a0 + 0x12) = 0;
    *(undefined8 *)(local_a0 + 4) = 0;
    *(undefined8 *)(local_a0 + 6) = 0;
    *(undefined8 *)(local_a0 + 8) = 0;
    *(undefined8 *)(local_a0 + 10) = 0;
    *(undefined8 *)(local_a0 + 0xc) = 0;
    *param_2 = local_a8[0];
    local_98 = param_3;
    uStack_90 = param_2;
    FUN_140bf3cbe(plVar1,local_a8,&local_98,0);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475efb08 FUN_1475efb08 body=238 status=ok
// SIG undefined FUN_1475efb08(void)

int * FUN_1475efb08(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 1475efbf6 FUN_1475efbf6 body=132 status=ok
// SIG undefined FUN_1475efbf6(void)

byte FUN_1475efbf6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_1475efe92(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1475efc7c FUN_1475efc7c body=157 status=ok
// SIG undefined FUN_1475efc7c(void)

ulonglong FUN_1475efc7c(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x48);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x40) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x40) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x40;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x48));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1475efd1a FUN_1475efd1a body=375 status=ok
// SIG undefined FUN_1475efd1a(void)

void FUN_1475efd1a(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  longlong lVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar10 = (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar9 = *(byte *)(lVar10 + 0x48);
    if ((bVar9 & 1) == 0) {
      uVar2 = *param_4;
      uVar3 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      uVar6 = param_4[5];
      uVar7 = param_4[6];
      uVar8 = param_4[7];
      *(undefined4 *)(lVar10 + 0x20) = param_4[4];
      *(undefined4 *)(lVar10 + 0x24) = uVar6;
      *(undefined4 *)(lVar10 + 0x28) = uVar7;
      *(undefined4 *)(lVar10 + 0x2c) = uVar8;
      *(undefined4 *)(lVar10 + 0x10) = uVar2;
      *(undefined4 *)(lVar10 + 0x14) = uVar3;
      *(undefined4 *)(lVar10 + 0x18) = uVar4;
      *(undefined4 *)(lVar10 + 0x1c) = uVar5;
      if ((undefined4 *)(lVar10 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xc));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xc)])
                  (&local_58,param_4 + 8);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar10 + 0x40);
        uVar2 = *(undefined4 *)(lVar10 + 0x30);
        uVar3 = *(undefined4 *)(lVar10 + 0x34);
        uVar4 = *(undefined4 *)(lVar10 + 0x38);
        uVar5 = *(undefined4 *)(lVar10 + 0x3c);
        *(undefined4 *)(lVar10 + 0x30) = local_58;
        *(undefined4 *)(lVar10 + 0x34) = uStack_54;
        *(undefined4 *)(lVar10 + 0x38) = uStack_50;
        *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
        *(ulonglong *)(lVar10 + 0x40) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar9 = *(byte *)(lVar10 + 0x48);
      }
      *(byte *)(lVar10 + 0x48) = bVar9 | 1;
    }
    else {
      FUN_1475efff8(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    uVar6 = param_4[5];
    uVar7 = param_4[6];
    uVar8 = param_4[7];
    *(undefined4 *)(lVar10 + 0x20) = param_4[4];
    *(undefined4 *)(lVar10 + 0x24) = uVar6;
    *(undefined4 *)(lVar10 + 0x28) = uVar7;
    *(undefined4 *)(lVar10 + 0x2c) = uVar8;
    *(undefined4 *)(lVar10 + 0x10) = uVar2;
    *(undefined4 *)(lVar10 + 0x14) = uVar3;
    *(undefined4 *)(lVar10 + 0x18) = uVar4;
    *(undefined4 *)(lVar10 + 0x1c) = uVar5;
    if ((undefined4 *)(lVar10 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xc));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xc)])
                (&local_58,param_4 + 8);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar10 + 0x40);
      uVar2 = *(undefined4 *)(lVar10 + 0x30);
      uVar3 = *(undefined4 *)(lVar10 + 0x34);
      uVar4 = *(undefined4 *)(lVar10 + 0x38);
      uVar5 = *(undefined4 *)(lVar10 + 0x3c);
      *(undefined4 *)(lVar10 + 0x30) = local_58;
      *(undefined4 *)(lVar10 + 0x34) = uStack_54;
      *(undefined4 *)(lVar10 + 0x38) = uStack_50;
      *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
      *(ulonglong *)(lVar10 + 0x40) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar10 + 0x48) = *(byte *)(lVar10 + 0x48) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475efe92 FUN_1475efe92 body=189 status=ok
// SIG undefined FUN_1475efe92(void)

longlong FUN_1475efe92(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1475eff50(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475eff50 FUN_1475eff50 body=167 status=ok
// SIG undefined FUN_1475eff50(void)

undefined4 * FUN_1475eff50(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 1475efff8 FUN_1475efff8 body=273 status=ok
// SIG undefined FUN_1475efff8(void)

void FUN_1475efff8(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar14 = *param_1;
  if ((int)uVar3 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar8 = uVar3;
    do {
      uVar1 = (uVar8 >> 1) + uVar10;
      if (*(int *)(lVar14 + (ulonglong)uVar1 * 0x40) < *param_2) {
        uVar10 = uVar1 + (uVar8 & 1);
      }
      bVar4 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar4);
    if (((int)uVar10 < (int)uVar3) && (*(int *)(lVar14 + (ulonglong)uVar10 * 0x40) <= *param_2)) {
      piVar13 = (int *)(lVar14 + (ulonglong)uVar10 * 0x40);
      FUN_1475ef3a8(piVar13,1);
      goto LAB_1475f00ac;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1475f010a(param_1,uVar3);
    lVar14 = *param_1;
  }
  lVar11 = (ulonglong)uVar10 * 0x40;
  memmove((void *)(lVar14 + lVar11 + 0x40),(void *)(lVar14 + lVar11),
          (ulonglong)(uVar3 - uVar10) << 6);
  piVar13 = (int *)(lVar11 + *param_1);
LAB_1475f00ac:
  *piVar13 = *param_2;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined8 *)(piVar13 + 2) = *param_3;
  *(undefined8 *)(piVar13 + 4) = uVar5;
  *(undefined8 *)(piVar13 + 6) = uVar6;
  *(undefined8 *)(piVar13 + 8) = uVar7;
  uVar2 = *(undefined1 *)(param_3 + 6);
  puVar9 = param_3 + 4;
  *(undefined1 *)(piVar13 + 0xe) = uVar2;
  piVar12 = piVar13 + 10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    *(undefined8 *)piVar12 = *puVar9;
    return;
  case 1:
    *(undefined2 *)piVar12 = *(undefined2 *)puVar9;
    return;
  case 2:
    *(undefined8 *)piVar12 = *puVar9;
    *(undefined8 *)(piVar13 + 0xc) = param_3[5];
    *puVar9 = 0;
    param_3[5] = 0;
    return;
  }
}



// FUNCTION 1475f010a FUN_1475f010a body=132 status=ok
// SIG undefined FUN_1475f010a(void)

void FUN_1475f010a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475f0190 FUN_1475f0190 body=167 status=ok
// SIG undefined FUN_1475f0190(void)

void FUN_1475f0190(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1475f020b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1475f020b;
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
LAB_1475f020b:
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
                    /* WARNING: Could not recover jumptable at 0x0001475f022b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1475f0238 FUN_1475f0238 body=900 status=ok
// SIG undefined FUN_1475f0238(void)

void FUN_1475f0238(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  byte local_319;
  undefined8 *local_2f8;
  int local_2f0;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [32];
  undefined1 *local_290;
  undefined8 local_288;
  undefined8 local_280 [70];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_2b8;
  if (param_4 != 0) {
    uVar3 = FUN_145990612();
    plVar4 = (longlong *)FUN_144718840(param_4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar10 = *(longlong *)(param_4 + 0x28);
      *(undefined4 *)(lVar10 + 0x29c) = 0;
      lVar5 = 0x10;
      do {
        *(undefined8 *)((longlong)&local_290 + lVar5) = 0;
        *(undefined4 *)((longlong)local_280 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x40) = 0;
        lVar5 = lVar5 + 0x80;
      } while (lVar5 != 0x210);
      local_2c0 = *(undefined8 *)(param_3 + 8);
      local_2e0 = *param_3;
      uStack_2dc = param_3[1];
      iStack_2d8 = param_3[2];
      uStack_2d4 = param_3[3];
      local_2d0 = *(undefined8 *)(param_3 + 4);
      uStack_2c8 = *(undefined8 *)(param_3 + 6);
      local_290 = (undefined1 *)0x0;
      local_288 = 0x400000000;
      puVar13 = local_280;
      lVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar5 & 0x1f) & 1) != 0) {
          local_2c0._0_6_ = CONCAT24(*(undefined2 *)(*param_2 + lVar5 * 4),(undefined4)local_2c0);
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_2f8,&local_2e0,puVar13);
          uVar8 = local_288;
          if (local_2f8 != (undefined8 *)0x0) {
            lVar12 = (longlong)(int)local_288;
            uVar6 = (int)local_288 + 1;
            local_288 = CONCAT44(local_288._4_4_,uVar6);
            if (local_288._4_4_ < uVar6) {
              FUN_14476a5c8(local_2b0,uVar8 & 0xffffffff);
              puVar7 = local_290;
              if (local_290 == (undefined1 *)0x0) {
                puVar7 = local_2b0;
              }
              *(undefined8 **)(puVar7 + lVar12 * 8) = local_2f8;
              if (local_2f8 == (undefined8 *)0x0) goto LAB_1475f041a;
            }
            else {
              puVar7 = local_290;
              if (local_290 == (undefined1 *)0x0) {
                puVar7 = local_2b0;
              }
              *(undefined8 **)(puVar7 + lVar12 * 8) = local_2f8;
            }
            LOCK();
            *(int *)(local_2f8 + 1) = *(int *)(local_2f8 + 1) + 1;
            UNLOCK();
            if (local_2f8 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_2f8 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_2f8)(local_2f8,1);
              }
            }
          }
        }
LAB_1475f041a:
        lVar5 = lVar5 + 1;
        puVar13 = puVar13 + 0x10;
      } while (lVar5 != 4);
      if ((int)local_288 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_2b0,1);
      }
      if (*(short *)((longlong)param_3 + 0x22) == -1) {
        local_2f8 = (undefined8 *)0x0;
        local_2e8 = 0;
      }
      else {
        FUN_1475e1ab0(lVar10 + 0x28,&local_2f8,*(short *)((longlong)param_3 + 0x22),
                      *(undefined2 *)(param_1 + 0x16));
        local_319 = local_2f0 == 1;
      }
      if (0 < iStack_2d8) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined2 *)(CONCAT44(uStack_2dc,local_2e0) + lVar5 * 2);
          lVar12 = *param_6;
          puVar13 = local_280;
          lVar9 = 0;
          do {
            if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar9 & 0x1f) & 1) != 0) {
              uVar8 = (ulonglong)*(ushort *)(*param_2 + 2 + lVar9 * 4);
              lVar11 = uVar8 + local_2e8;
              if (local_2e8 == 0) {
                lVar11 = 0;
              }
              uVar3 = FUN_147546472(puVar13,uVar2,*(undefined8 *)(param_5 + uVar8),lVar11);
              *(undefined8 *)(lVar5 * 0x20 + lVar12 + uVar8) = uVar3;
            }
            lVar9 = lVar9 + 1;
            puVar13 = puVar13 + 0x10;
          } while (lVar9 != 4);
          lVar5 = lVar5 + 1;
        } while (lVar5 < iStack_2d8);
      }
      *(undefined4 *)(lVar10 + 0x29c) = 1;
      if (local_2f8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_2f8 + 3) = *(int *)(local_2f8 + 3) + -1;
        UNLOCK();
        if ((local_319 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_2f8 + 1));
        }
      }
      FUN_14588b8d6(local_2b0);
      lVar10 = 0x180;
      do {
        FUN_1475d7c02((longlong)local_280 + lVar10);
        lVar10 = lVar10 + -0x80;
      } while (lVar10 != -0x80);
    }
  }
  if ((local_50 ^ (ulonglong)local_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f05be FUN_1475f05be body=31 status=ok
// SIG undefined FUN_1475f05be(void)

undefined8 FUN_1475f05be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f05de FUN_1475f05de body=903 status=ok
// SIG undefined FUN_1475f05de(void)

void FUN_1475f05de(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1b8 [32];
  ushort *local_198;
  code **local_190;
  longlong local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined1 local_16c [4];
  undefined2 *local_168;
  undefined2 *local_160;
  ushort local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined1 local_13b;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined2 local_128;
  undefined4 local_126;
  undefined2 local_122;
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_114;
  uint local_110;
  undefined1 local_10c;
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_88;
  undefined8 local_60;
  code *local_58;
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar3 = FUN_14009d2a0();
  local_150 = *(undefined2 *)(lVar3 + 0x4a);
  local_14a = *(undefined2 *)(lVar3 + 0x108);
  local_14e = *(undefined4 *)(lVar3 + 0x104);
  local_148 = **(undefined2 **)(param_2 + 0x18);
  puVar6 = (undefined2 *)*param_3;
  local_140 = puVar6[6];
  local_142 = puVar6[4];
  local_146 = *puVar6;
  local_144 = puVar6[2];
  local_13b = 0;
  local_138 = 0x6ff;
  local_134 = 0;
  local_152 = *(undefined2 *)(param_2 + 0x14);
  local_168 = &local_152;
  local_160 = &local_150;
  local_178 = param_3;
  FUN_1475f151c(&local_150,&local_128);
  local_110 = *(uint *)(param_6 + 0x290);
  bVar4 = local_114._1_1_ & 0xfe | (local_110 & 0xfffffeff) == 1;
  local_114 = CONCAT11(bVar4,(undefined1)local_114);
  local_154 = CONCAT11(bVar4,(undefined1)local_114) & 0xfdff;
  local_190 = &local_58;
  local_58 = FUN_1475f18ee;
  local_50 = (undefined2 *)CONCAT71(local_50._1_7_,3);
  local_198 = &local_154;
  local_188 = param_2;
  FUN_1475f16c2(&local_128,local_16c,param_6 + 0x28,param_5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_130 = 0x10000000000;
    puVar6 = (undefined2 *)*local_178;
    iVar1 = *(int *)(local_178 + 1);
    if ((longlong)iVar1 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_150,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar1 * 4 != lVar5);
      puVar6 = (undefined2 *)*local_178;
    }
    puVar2 = local_178;
    local_128 = *(undefined2 *)(lVar3 + 0x4a);
    local_122 = *(undefined2 *)(lVar3 + 0x108);
    local_126 = *(undefined4 *)(lVar3 + 0x104);
    local_120 = **(undefined2 **)(param_2 + 0x18);
    local_118 = puVar6[6];
    local_11a = puVar6[4];
    local_11e = *puVar6;
    local_11c = puVar6[2];
    local_114 = local_114 & 0xff;
    local_110 = 0x6ff;
    local_10c = 0;
    local_e8 = 0x10000000000;
    local_c0 = 0x10000000000;
    local_88 = 0x10000000000;
    local_b8 = 0;
    uStack_b0 = 0;
    local_60 = 0x10000000000;
    FUN_1475f2b54(&local_128,local_108);
    FUN_140dad9c2(local_108,&local_150,2);
    local_152 = *(undefined2 *)(param_2 + 0x14);
    local_58 = (code *)&local_152;
    local_50 = &local_150;
    FUN_1447c44f6(local_108,&local_58);
    FUN_140dad9c2(local_108,&local_150,0x84);
    local_110 = *(uint *)(param_6 + 0x290);
    bVar4 = local_114._1_1_ & 0xfe | (local_110 & 0xfffffeff) == 1;
    local_114 = CONCAT11(bVar4,(undefined1)local_114);
    local_154 = CONCAT11(bVar4,(undefined1)local_114) & 0xfdff;
    local_58 = FUN_1475f2e16;
    local_50 = (undefined2 *)CONCAT71(local_50._1_7_,3);
    local_180 = puVar2;
    local_198 = &local_154;
    local_190 = &local_58;
    local_188 = param_2;
    FUN_1475f2be8(&local_128,local_16c,param_6 + 0x28,param_5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f0966 FUN_1475f0966 body=892 status=ok
// SIG undefined FUN_1475f0966(void)

void FUN_1475f0966(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined8 *local_188;
  longlong local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  longlong local_168;
  undefined8 *local_160;
  undefined2 local_152;
  undefined8 local_150;
  undefined8 *local_148;
  undefined2 local_140;
  undefined4 local_13e;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined1 local_12b;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  byte local_103;
  uint local_100;
  undefined1 local_fc;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180 = param_4;
  lVar4 = FUN_14009d2a0();
  local_140 = *(undefined2 *)(lVar4 + 0x4a);
  local_13a = *(undefined2 *)(lVar4 + 0x108);
  local_13e = *(undefined4 *)(lVar4 + 0x104);
  local_138 = **(undefined2 **)(param_2 + 0x18);
  puVar5 = (undefined2 *)*param_3;
  local_130 = puVar5[6];
  local_132 = puVar5[4];
  local_136 = *puVar5;
  local_134 = puVar5[2];
  local_12b = 0;
  local_128 = 0x6ff;
  local_124 = 0;
  local_170 = &local_150;
  local_150 = (undefined2 *)CONCAT62(local_150._2_6_,*(undefined2 *)(param_2 + 0x14));
  local_168 = (longlong)&local_150 + 2;
  local_188 = param_3;
  FUN_1475f151c(&local_140,&local_118);
  local_100 = *(uint *)(param_7 + 0x290);
  local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
  local_1a8 = param_6;
  local_1a0 = param_2;
  FUN_1432f902e(&local_118,&local_160,param_7 + 0x28,param_5);
  if (local_160 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_160 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_160)(local_160,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(local_180 + 4)) {
    local_120 = 0x10000000000;
    puVar5 = (undefined2 *)*local_188;
    iVar2 = *(int *)(local_188 + 1);
    if ((longlong)iVar2 != 0) {
      lVar6 = 0;
      do {
        FUN_140dba9e6(&local_140,*(undefined2 *)((longlong)puVar5 + lVar6));
        lVar6 = lVar6 + 4;
      } while ((longlong)iVar2 * 4 != lVar6);
      puVar5 = (undefined2 *)*local_188;
    }
    puVar3 = local_188;
    local_118 = *(undefined2 *)(lVar4 + 0x4a);
    local_112 = *(undefined2 *)(lVar4 + 0x108);
    local_116 = *(undefined4 *)(lVar4 + 0x104);
    local_110 = **(undefined2 **)(param_2 + 0x18);
    local_108 = puVar5[6];
    local_10a = puVar5[4];
    local_10e = *puVar5;
    local_10c = puVar5[2];
    local_103 = 0;
    local_100 = 0x6ff;
    local_fc = 0;
    local_d8 = 0x10000000000;
    local_b0 = 0x10000000000;
    local_78 = 0x10000000000;
    local_a8 = 0;
    uStack_a0 = 0;
    local_50 = 0x10000000000;
    FUN_1475f2b54(&local_118,local_f8);
    FUN_140dad9c2(local_f8,&local_140,2);
    local_152 = *(undefined2 *)(param_2 + 0x14);
    local_148 = &local_150;
    local_150 = &local_152;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_140,0x84);
    local_100 = *(uint *)(param_7 + 0x290);
    local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
    local_198 = puVar3;
    local_1a8 = param_6;
    local_1a0 = param_2;
    FUN_1432f94f0(&local_118,&local_178,param_7 + 0x28,param_5);
    if (local_178 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_178 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_178)(local_178,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f0ce4 FUN_1475f0ce4 body=212 status=ok
// SIG undefined FUN_1475f0ce4(void)

void FUN_1475f0ce4(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_stack_00000028;
  undefined1 auStack_138 [40];
  undefined2 *local_110;
  undefined1 *local_108;
  undefined2 local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined1 local_f7;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_ea;
  undefined1 local_e8 [24];
  undefined1 local_d0 [80];
  longlong local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_100 = *(undefined2 *)(lVar1 + 0x4a);
  local_fe = *(undefined2 *)(lVar1 + 0x62);
  local_fc = *(undefined2 *)(lVar2 + 0x58);
  local_f7 = 0;
  local_f4 = 0x6ff;
  local_f0 = 0;
  local_ea = *(undefined2 *)(lVar1 + 0x11a);
  local_110 = &local_ea;
  local_108 = local_e8;
  FUN_1475f4db6(&local_100,local_e8);
  FUN_1475f4ef2(local_e8,in_stack_00000028 + 0x28,local_d0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f0dba FUN_1475f0dba body=520 status=ok
// SIG undefined FUN_1475f0dba(void)

longlong * FUN_1475f0dba(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1475f5338(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_1475f0dfe;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c2220;
  plVar5 = plVar4 + 2;
  FUN_1475f54a6(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_1475f6ee0(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_1475f0f89:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001475f0f78:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x0001475f0f78;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_1475f0f89;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_1475f53ec(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_1475f0dfe:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f0fc6 FUN_1475f0fc6 body=130 status=ok
// SIG undefined FUN_1475f0fc6(void)

void FUN_1475f0fc6(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1475f6f88(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f104a FUN_1475f104a body=616 status=ok
// SIG undefined FUN_1475f104a(void)

void FUN_1475f104a(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_1475f730e(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f12b4 FUN_1475f12b4 body=615 status=ok
// SIG undefined FUN_1475f12b4(void)

void FUN_1475f12b4(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = (int)param_4[1];
  local_b8 = param_3;
  if (0 < iVar3) {
    lVar8 = *param_6;
    local_c0 = param_5 + 0x28;
    lVar6 = 0;
    do {
      if (*(short *)(*param_4 + lVar6 * 2) != -1) {
        FUN_1432d4ca4(local_c0,&local_60);
        lVar2 = local_60;
        lVar4 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)(*param_3 + 0xc));
        local_b0 = (undefined8 *)(local_50 + lVar4 * 8);
        if (local_50 == 0) {
          local_b0 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_78,*(undefined2 *)(*param_3 + 8));
        puVar7 = (undefined8 *)(local_68 + lVar4 * 8);
        if (local_68 == 0) {
          puVar7 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_90,*(undefined2 *)(*param_3 + 4));
        puVar5 = (undefined8 *)(local_80 + lVar4 * 8);
        if (local_80 == 0) {
          puVar5 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_a8,*(undefined2 *)*param_3);
        lVar2 = *param_3;
        if ((local_98 != 0) &&
           (puVar1 = (undefined8 *)(local_98 + lVar4 * 8), puVar1 != (undefined8 *)0x0)) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 2)) = *puVar1;
        }
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 6)) = *puVar5;
        }
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 10)) = *puVar7;
        }
        if (local_b0 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 0xe)) = *local_b0;
        }
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
          UNLOCK();
          if (local_a0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
          }
        }
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
          UNLOCK();
          if (local_88 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
          }
        }
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
          UNLOCK();
          if (local_70 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
          }
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar3 = (int)param_4[1];
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x20;
    } while (lVar6 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f151c FUN_1475f151c body=148 status=ok
// SIG undefined FUN_1475f151c(void)

undefined8 * FUN_1475f151c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[8] = 0x10000000000;
  param_2[0xd] = 0x10000000000;
  param_2[0x14] = 0x10000000000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x19] = 0x10000000000;
  FUN_1475f15b2(param_2,param_2 + 4);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f15b2 FUN_1475f15b2 body=271 status=ok
// SIG undefined FUN_1475f15b2(void)

void FUN_1475f15b2(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[5];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[6];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[7];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[8];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f16c2 FUN_1475f16c2 body=555 status=ok
// SIG undefined FUN_1475f16c2(void)

int * FUN_1475f16c2(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[4] == -1)) || (param_1[5] == -1)) ||
     (((param_1[6] == -1 || (param_1[7] == -1)) ||
      ((param_1[8] == -1 || (cVar4 = FUN_1475f1940(param_1,param_3), cVar4 == '\0')))))) {
    *param_2 = -1;
    goto LAB_1475f1720;
  }
  plVar5 = (longlong *)FUN_1475f1b01(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
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
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_1475f1a86(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1475f1bf4;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1475f187a;
    }
  }
  else {
LAB_1475f187a:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1475f1720:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475f18ee FUN_1475f18ee body=80 status=ok
// SIG undefined FUN_1475f18ee(void)

void FUN_1475f18ee(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1475f1e42(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f1940 FUN_1475f1940 body=326 status=ok
// SIG undefined FUN_1475f1940(void)

undefined8 FUN_1475f1940(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[6];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[7];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[8];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar8 = false;
  }
  else {
    bVar8 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar6 & bVar4 & bVar5 & bVar7 & bVar8);
}



// FUNCTION 1475f1a86 FUN_1475f1a86 body=123 status=ok
// SIG undefined FUN_1475f1a86(void)

void FUN_1475f1a86(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  FUN_140dba9e6(param_2,param_1[5]);
  FUN_140dba9e6(param_2,param_1[6]);
  FUN_140dba9e6(param_2,param_1[7]);
  FUN_140dba9e6(param_2,param_1[8]);
  return;
}



// FUNCTION 1475f1b01 FUN_1475f1b01 body=180 status=ok
// SIG undefined FUN_1475f1b01(void)

undefined8 * FUN_1475f1b01(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14a4c21c0;
  puVar8[2] = &PTR_FUN_14a4c21d8;
  param_2 = (longlong *)*param_2;
  puVar8[3] = param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar8[4] = local_38;
    puVar8[5] = uStack_30;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *(undefined4 *)(puVar8 + 8) = param_1[4];
  *(undefined4 *)((longlong)puVar8 + 0x44) = uVar5;
  *(undefined4 *)(puVar8 + 9) = uVar6;
  *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar7;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
  *(undefined4 *)(puVar8 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f1bb8 FUN_1475f1bb8 body=29 status=ok
// SIG undefined FUN_1475f1bb8(void)

undefined8 FUN_1475f1bb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f1bd6 FUN_1475f1bd6 body=29 status=ok
// SIG undefined FUN_1475f1bd6(void)

undefined8 FUN_1475f1bd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f1c0c FUN_1475f1c0c body=565 status=ok
// SIG undefined FUN_1475f1c0c(void)

void FUN_1475f1c0c(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,9);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_1475f1c54;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1475f1c54:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar9 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  uVar4 = (uint)*(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[4]) goto LAB_1475f1cf0;
      puVar7 = puVar7 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1475f1cf0:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x10 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar4 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[5]) goto LAB_1475f1d45;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1475f1d45:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x14 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  uVar6 = (ushort)uVar4;
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[6]) goto LAB_1475f1d92;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1475f1d92:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x18 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar6 = *(ushort *)(param_2 + 0xc);
    uVar4 = (uint)uVar6;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[7]) goto LAB_1475f1ddf;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1475f1ddf:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x1c + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar6 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar4 = (uint)uVar6;
  }
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[8]) goto LAB_1475f1e24;
      puVar1 = puVar1 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1475f1e24:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + 0x20 + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1475f1e42 FUN_1475f1e42 body=303 status=ok
// SIG undefined FUN_1475f1e42(void)

void FUN_1475f1e42(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_70 = (ulonglong)puVar1[6];
  lVar3 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar3;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar3;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar3;
  }
  lVar4 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar3;
  }
  local_98 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_98 = lVar3;
  }
  local_90 = lVar2 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_90 = lVar3;
  }
  local_88 = lVar2 + local_70;
  if (local_70 == 0xffffffff) {
    local_88 = lVar3;
  }
  local_80 = lVar2 + (ulonglong)puVar1[7];
  if ((ulonglong)puVar1[7] == 0xffffffff) {
    local_80 = lVar3;
  }
  local_78 = lVar2 + (ulonglong)puVar1[8];
  if ((ulonglong)puVar1[8] == 0xffffffff) {
    local_78 = lVar3;
  }
  FUN_1475f1f72(param_1,local_68,lVar4,&local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f1f72 FUN_1475f1f72 body=672 status=ok
// SIG undefined FUN_1475f1f72(void)

void FUN_1475f1f72(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar4 = (ulonglong)uVar1;
  lVar3 = *param_4;
  if (lVar3 == 0) {
    lVar3 = param_4[1];
    if (lVar3 == 0) {
      puVar5 = (undefined8 *)param_4[2];
      if (uVar1 != 0 && puVar5 != (undefined8 *)0x0) {
        uVar6 = 0;
        local_78 = uVar4;
        do {
          local_50 = (double)(float)*(double *)(param_9 + uVar6 * 8);
          local_58 = (double)(float)*(double *)(param_8 + uVar6 * 8);
          local_60 = (double)(float)*(double *)(param_7 + uVar6 * 8);
          local_68 = (double)(float)*(double *)(param_6 + uVar6 * 8);
          FUN_1475f229c(*(undefined8 *)(param_3 + uVar6 * 8),*(undefined1 *)(param_5 + uVar6),
                        *puVar5,&local_68);
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 2;
        } while (local_78 != uVar6);
      }
    }
    else if (uVar4 != 0) {
      uVar6 = 0;
      local_78 = uVar4;
      do {
        sVar2 = *(short *)(lVar3 + uVar6 * 2);
        if (sVar2 != 0) {
          local_50 = (double)(float)*(double *)(param_9 + uVar6 * 8);
          local_58 = (double)(float)*(double *)(param_8 + uVar6 * 8);
          local_60 = (double)(float)*(double *)(param_7 + uVar6 * 8);
          local_68 = (double)(float)*(double *)(param_6 + uVar6 * 8);
          FUN_1475f2214(*(undefined8 *)(param_3 + uVar6 * 8),*(undefined1 *)(param_5 + uVar6),sVar2,
                        &local_68);
          uVar4 = local_78;
        }
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
    }
  }
  else if (uVar4 != 0) {
    uVar6 = 0;
    local_70 = param_3;
    do {
      local_50 = (double)(float)*(double *)(param_9 + uVar6 * 8);
      local_58 = (double)(float)*(double *)(param_8 + uVar6 * 8);
      local_60 = (double)(float)*(double *)(param_7 + uVar6 * 8);
      local_68 = (double)(float)*(double *)(param_6 + uVar6 * 8);
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(lVar3 + uVar6 * 2)))
                (*(undefined8 *)(local_70 + uVar6 * 8),
                 CONCAT11((char)(uVar1 >> 8),*(undefined1 *)(param_5 + uVar6)),&local_68);
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f2214 FUN_1475f2214 body=135 status=ok
// SIG undefined FUN_1475f2214(void)

void FUN_1475f2214(longlong param_1,char param_2,ushort param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  
  if (param_2 == '\x04') {
    dVar1 = param_4[3];
    dVar2 = param_4[2];
    dVar3 = param_4[1];
    uVar4 = (ulonglong)param_3;
    *(float *)(param_1 + uVar4) = (float)*param_4;
    *(float *)(param_1 + 4 + uVar4) = (float)dVar3;
    *(float *)(param_1 + 8 + uVar4) = (float)dVar2;
    *(float *)(param_1 + 0xc + uVar4) = (float)dVar1;
  }
  else {
    if (param_2 == '\x03') {
      dVar1 = param_4[2];
      dVar2 = param_4[1];
      uVar4 = (ulonglong)param_3;
      *(float *)(param_1 + uVar4) = (float)*param_4;
      *(float *)(param_1 + 4 + uVar4) = (float)dVar2;
      *(float *)(param_1 + 8 + uVar4) = (float)dVar1;
      return;
    }
    if (param_2 == '\x02') {
      dVar1 = param_4[1];
      *(float *)(param_1 + (ulonglong)param_3) = (float)*param_4;
      *(float *)(param_1 + 4 + (ulonglong)param_3) = (float)dVar1;
      return;
    }
  }
  return;
}



// FUNCTION 1475f229c FUN_1475f229c body=238 status=ok
// SIG undefined FUN_1475f229c(void)

void FUN_1475f229c(undefined8 param_1,char param_2,undefined8 param_3,double *param_4)

{
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\x04') {
    local_2c = (float)param_4[3];
    local_30 = (float)param_4[2];
    local_34 = (float)param_4[1];
    local_38 = (float)*param_4;
    FUN_1475f28c8(param_3,param_1);
  }
  else if (param_2 == '\x03') {
    local_30 = (float)param_4[2];
    local_34 = (float)param_4[1];
    local_38 = (float)*param_4;
    FUN_1475f2632(param_3,param_1);
  }
  else if (param_2 == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0((float)param_4[1],(float)*param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f249c FUN_1475f249c body=401 status=ok
// SIG undefined FUN_1475f249c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1475f249c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f253b;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f2552;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 8) goto LAB_1475f25ec;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f25a3;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f25bb;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 3);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f25e8;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1475f25ec:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1475f2616;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f2632 FUN_1475f2632 body=253 status=ok
// SIG undefined FUN_1475f2632(void)

void FUN_1475f2632(undefined8 param_1,longlong *param_2,undefined8 *param_3)

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
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x80))(plVar2);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x98))(plVar2,param_2,param_3);
      goto LAB_1475f2693;
    }
  }
  lVar3 = FUN_14479d2ce(local_30);
  if (lVar3 == 0) {
    lVar3 = FUN_1406f977c(local_60);
    if ((lVar3 != 0) &&
       (puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + local_38), puVar4 != (undefined8 *)0x0)) {
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar4 = *param_3;
    }
  }
  else {
    FUN_1475f2730(param_2,lVar3,param_3);
  }
LAB_1475f2693:
  lVar3 = FUN_14479d2ce(local_28);
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar3,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f2730 FUN_1475f2730 body=402 status=ok
// SIG undefined FUN_1475f2730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1475f2730(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f27cf;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f27e6;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0xc) goto LAB_1475f2881;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f2837;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f2850;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 * 0xc);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f287d;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1475f2881:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1475f28ab;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f28c8 FUN_1475f28c8 body=244 status=ok
// SIG undefined FUN_1475f28c8(void)

void FUN_1475f28c8(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar5 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar5 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar5 + 0x80))(plVar5);
    if (cVar4 != '\0') {
      (**(code **)(*plVar5 + 0x98))(plVar5,param_2,param_3);
      goto LAB_1475f2929;
    }
  }
  lVar6 = FUN_14479d2ce(local_30);
  if (lVar6 == 0) {
    lVar6 = FUN_1406f977c(local_60);
    if ((lVar6 != 0) &&
       (puVar7 = (undefined4 *)(*(int *)(lVar6 + 0x44) + local_38), puVar7 != (undefined4 *)0x0)) {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar7 = *param_3;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
    }
  }
  else {
    FUN_1475f29be(param_2,lVar6,param_3);
  }
LAB_1475f2929:
  lVar6 = FUN_14479d2ce(local_28);
  if (lVar6 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar6,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f29be FUN_1475f29be body=401 status=ok
// SIG undefined FUN_1475f29be(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1475f29be(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f2a5d;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f2a74;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x10) goto LAB_1475f2b0e;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f2ac5;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f2add;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 4);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475f2b0a;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1475f2b0e:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1475f2b38;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f2b54 FUN_1475f2b54 body=147 status=ok
// SIG undefined FUN_1475f2b54(void)

void FUN_1475f2b54(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f2be8 FUN_1475f2be8 body=556 status=ok
// SIG undefined FUN_1475f2be8(void)

int * FUN_1475f2be8(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[4] == -1)) ||
     (cVar4 = FUN_1475f2e68(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1475f2c26;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_1475f2f74(plVar5,param_1,param_7,param_8);
  if (plVar5 != (longlong *)0x0) {
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
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_1475f2ed8(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1475f3064;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1475f2da1;
    }
  }
  else {
LAB_1475f2da1:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1475f2c26:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475f2e16 FUN_1475f2e16 body=80 status=ok
// SIG undefined FUN_1475f2e16(void)

void FUN_1475f2e16(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1475f3300(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f2e68 FUN_1475f2e68 body=112 status=ok
// SIG undefined FUN_1475f2e68(void)

undefined8 FUN_1475f2e68(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1475f2ed8 FUN_1475f2ed8 body=156 status=ok
// SIG undefined FUN_1475f2ed8(void)

void FUN_1475f2ed8(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  if (param_1[5] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[6] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[7] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[8] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 1475f2f74 FUN_1475f2f74 body=177 status=ok
// SIG undefined FUN_1475f2f74(void)

undefined8 *
FUN_1475f2f74(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a4c21e0;
  param_1[2] = &PTR_FUN_14a4c21f8;
  param_3 = (longlong *)*param_3;
  uVar8 = *param_4;
  uVar9 = param_4[1];
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48._0_4_ = (undefined4)uVar8;
  local_48._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar9;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_40._4_4_;
  local_48 = uVar8;
  uStack_40 = uVar9;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3,&local_38);
    param_1[4] = local_38;
    param_1[5] = uStack_30;
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 10) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f3028 FUN_1475f3028 body=29 status=ok
// SIG undefined FUN_1475f3028(void)

undefined8 FUN_1475f3028(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f3046 FUN_1475f3046 body=29 status=ok
// SIG undefined FUN_1475f3046(void)

undefined8 FUN_1475f3046(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f307c FUN_1475f307c body=644 status=ok
// SIG undefined FUN_1475f307c(void)

void FUN_1475f307c(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ushort uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,9);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_1475f30c4;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1475f30c4:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar8 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar8 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  uVar7 = *(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar7 != 0) {
    lVar2 = (ulonglong)uVar7 << 5;
    puVar6 = puVar1;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == param_1[4]) goto LAB_1475f3160;
      puVar6 = puVar6 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar6 = (ulonglong *)0x0;
LAB_1475f3160:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar6) {
    *(int *)(lVar2 + 0x10 + lVar8 * 4) = (int)*puVar6 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar7 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar7 != 0) {
    lVar3 = 0;
    do {
      if (*(short *)((longlong)puVar1 + lVar3 + 0x1e) == param_1[5]) {
        if ((longlong)puVar1 + lVar3 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar3)) {
            *(int *)(lVar2 + 0x14 + lVar8 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + lVar3) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar2 = *param_3;
            uVar7 = *(ushort *)(param_2 + 0xc);
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar3 = lVar3 + 0x20;
    } while ((ulonglong)uVar7 * 0x20 != lVar3);
    if (uVar7 != 0) {
      uVar4 = (uint)uVar7;
      lVar3 = 0;
      do {
        if (*(short *)((longlong)puVar1 + lVar3 + 0x1e) == param_1[6]) {
          if ((longlong)puVar1 + lVar3 != 0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar3)) {
              *(int *)(lVar2 + 0x18 + lVar8 * 4) =
                   (int)*(ulonglong *)((longlong)puVar1 + lVar3) -
                   (int)*(ulonglong *)(param_2 + 0x20);
              uVar4 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar2 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        lVar3 = lVar3 + 0x20;
      } while ((ulonglong)uVar7 << 5 != lVar3);
      puVar6 = puVar1;
      do {
        if (*(short *)((longlong)puVar6 + 0x1e) == param_1[7]) {
          if (puVar6 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar6) {
              *(int *)(lVar2 + 0x1c + lVar8 * 4) =
                   (int)*puVar6 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar4 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar2 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar6 = puVar6 + 4;
      } while (puVar6 != (ulonglong *)((ulonglong)(uVar4 << 5) + (longlong)puVar1));
      puVar6 = (ulonglong *)((ulonglong)(uVar4 << 5) + (longlong)puVar1);
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[8]) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
            return;
          }
          *(int *)(lVar2 + 0x20 + lVar8 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
          return;
        }
        puVar1 = puVar1 + 4;
      } while (puVar1 != puVar6);
    }
  }
  return;
}



// FUNCTION 1475f3300 FUN_1475f3300 body=303 status=ok
// SIG undefined FUN_1475f3300(void)

void FUN_1475f3300(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_70 = (ulonglong)puVar1[6];
  lVar3 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar3;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar3;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar3;
  }
  lVar4 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar3;
  }
  local_98 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_98 = lVar3;
  }
  local_90 = lVar2 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_90 = lVar3;
  }
  local_88 = lVar2 + local_70;
  if (local_70 == 0xffffffff) {
    local_88 = lVar3;
  }
  local_80 = lVar2 + (ulonglong)puVar1[7];
  if ((ulonglong)puVar1[7] == 0xffffffff) {
    local_80 = lVar3;
  }
  local_78 = lVar2 + (ulonglong)puVar1[8];
  if ((ulonglong)puVar1[8] == 0xffffffff) {
    local_78 = lVar3;
  }
  FUN_1475f3430(param_1,local_68,lVar4,&local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f3430 FUN_1475f3430 body=163 status=ok
// SIG undefined FUN_1475f3430(void)

void FUN_1475f3430(void)

{
  longlong *in_R9;
  
  if (*in_R9 == 0) {
    if (in_R9[1] == 0) {
      if (in_R9[2] != 0) {
        FUN_1475f3834();
      }
    }
    else {
      FUN_1475f368e();
    }
    return;
  }
  FUN_1475f34d4();
  return;
}



// FUNCTION 1475f34d4 FUN_1475f34d4 body=441 status=ok
// SIG undefined FUN_1475f34d4(void)

void FUN_1475f34d4(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8 [5];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b0 = param_4;
  if (local_b8 != 0) {
    uVar5 = 0;
    puVar4 = param_8;
    puVar8 = param_9;
    puVar9 = param_7;
    do {
      uVar7 = (ulonglong)*(ushort *)(local_b0 + uVar5 * 2);
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      (**(code **)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)*(int *)(param_1 + 0x14) * uVar7))
                (local_80,*(undefined8 *)(param_3 + uVar5 * 8),*(undefined1 *)(param_5 + uVar5));
      puVar2 = puVar8;
      if (param_9 == (undefined8 *)0x0) {
        puVar2 = param_9;
      }
      puVar3 = puVar4;
      if (param_8 == (undefined8 *)0x0) {
        puVar3 = param_8;
      }
      puVar6 = puVar9;
      if (param_7 == (undefined8 *)0x0) {
        puVar6 = param_7;
      }
      lVar1 = *(longlong *)(param_1 + 0x18);
      if (param_6 != 0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 2)) =
             *(undefined8 *)(param_6 + uVar5 * 8);
      }
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 6)) = *puVar6;
      }
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 10)) = *puVar3;
      }
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 0xe)) = *puVar2;
      }
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 + (longlong)*(int *)(param_1 + 0x14) * uVar7))
                (*(undefined8 *)(param_3 + uVar5 * 8),
                 CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(param_5 + uVar5)),local_a8);
      uVar5 = uVar5 + 1;
      puVar9 = puVar9 + 1;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (local_b8 != uVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f368e FUN_1475f368e body=420 status=ok
// SIG undefined FUN_1475f368e(void)

void FUN_1475f368e(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  undefined2 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong unaff_R15;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_a0 = param_1;
  local_98 = param_3;
  local_90 = param_4;
  if (local_a8 != 0) {
    uVar10 = 0;
    puVar6 = param_7;
    puVar7 = param_9;
    puVar8 = param_8;
    do {
      uVar1 = *(undefined2 *)(local_90 + uVar10 * 2);
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),*(undefined1 *)(param_5 + uVar10));
      uVar2 = *(undefined8 *)(local_98 + uVar10 * 8);
      FUN_1475f39a4(uVar2,unaff_R15 & 0xffffffff,uVar1);
      puVar4 = puVar7;
      if (param_9 == (undefined8 *)0x0) {
        puVar4 = param_9;
      }
      puVar5 = puVar8;
      if (param_8 == (undefined8 *)0x0) {
        puVar5 = param_8;
      }
      puVar9 = puVar6;
      if (param_7 == (undefined8 *)0x0) {
        puVar9 = param_7;
      }
      lVar3 = *(longlong *)(local_a0 + 0x18);
      if (param_6 != 0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 2)) =
             *(undefined8 *)(param_6 + uVar10 * 8);
      }
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 6)) = *puVar9;
      }
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 10)) = *puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 0xe)) = *puVar4;
      }
      FUN_1475f2214(uVar2,unaff_R15 & 0xffffffff,uVar1,local_88);
      uVar10 = uVar10 + 1;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (local_a8 != uVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f3834 FUN_1475f3834 body=366 status=ok
// SIG undefined FUN_1475f3834(void)

void FUN_1475f3834(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 *param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_98 = param_1;
  local_90 = param_4;
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(local_90 + lVar6 * 2);
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      FUN_1475f3a40(*(undefined8 *)(param_3 + lVar6),*param_5,uVar2);
      puVar4 = (undefined8 *)(param_9 + lVar6);
      if (param_9 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      puVar5 = (undefined8 *)(lVar6 + param_8);
      if (param_8 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      puVar7 = (undefined8 *)(param_7 + lVar6);
      if (param_7 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      lVar3 = *(longlong *)(local_98 + 0x18);
      if (param_6 != 0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 2)) =
             *(undefined8 *)(param_6 + lVar6);
      }
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 6)) = *puVar7;
      }
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 10)) = *puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 0xe)) = *puVar4;
      }
      FUN_1475f229c(*(undefined8 *)(param_3 + lVar6),
                    CONCAT71((int7)((ulonglong)lVar3 >> 8),*param_5),uVar2,local_88);
      lVar6 = lVar6 + 8;
      param_5 = param_5 + 1;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f39a4 FUN_1475f39a4 body=155 status=ok
// SIG undefined FUN_1475f39a4(void)

void FUN_1475f39a4(longlong param_1,char param_2,ushort param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  
  if (param_2 == '\x04') {
    uVar4 = (ulonglong)param_3;
    fVar1 = *(float *)(param_1 + 0xc + uVar4);
    fVar2 = *(float *)(param_1 + 8 + uVar4);
    fVar3 = *(float *)(param_1 + 4 + uVar4);
    *param_4 = (double)*(float *)(param_1 + uVar4);
    param_4[1] = (double)fVar3;
    param_4[2] = (double)fVar2;
    param_4[3] = (double)fVar1;
  }
  else {
    if (param_2 == '\x03') {
      uVar4 = (ulonglong)param_3;
      fVar1 = *(float *)(param_1 + 8 + uVar4);
      fVar2 = *(float *)(param_1 + 4 + uVar4);
      *param_4 = (double)*(float *)(param_1 + uVar4);
      param_4[1] = (double)fVar2;
      param_4[2] = (double)fVar1;
      param_4[3] = 0.0;
      return;
    }
    if (param_2 == '\x02') {
      fVar1 = *(float *)(param_1 + 4 + (ulonglong)param_3);
      *param_4 = (double)*(float *)(param_1 + (ulonglong)param_3);
      param_4[1] = (double)fVar1;
      param_4[2] = 0.0;
      param_4[3] = 0.0;
      return;
    }
  }
  return;
}



// FUNCTION 1475f3a40 FUN_1475f3a40 body=246 status=ok
// SIG undefined FUN_1475f3a40(void)

void FUN_1475f3a40(undefined8 param_1,char param_2,undefined8 param_3,double *param_4)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\x04') {
    FUN_1475f3c3a(param_3,&local_28,param_1);
    *param_4 = (double)local_28;
    param_4[1] = (double)local_24;
    param_4[2] = (double)local_20;
    param_4[3] = (double)local_1c;
  }
  else if (param_2 == '\x03') {
    FUN_1475f3bb2(param_3,&local_28,param_1);
    *param_4 = (double)local_28;
    param_4[1] = (double)local_24;
    param_4[2] = (double)local_20;
    param_4[3] = 0.0;
  }
  else if (param_2 == '\x02') {
    FUN_1475f3b38(param_3,&local_28,param_1);
    *param_4 = (double)local_28;
    param_4[1] = (double)local_24;
    param_4[2] = 0.0;
    param_4[3] = 0.0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f3b38 FUN_1475f3b38 body=121 status=ok
// SIG undefined FUN_1475f3b38(void)

undefined8 * FUN_1475f3b38(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  FUN_1406f9c46(param_1,local_58);
  lVar1 = FUN_1406f977c(local_58);
  if ((lVar1 != 0) &&
     (puVar2 = (undefined8 *)(*(int *)(lVar1 + 0x44) + local_30), puVar2 != (undefined8 *)0x0)) {
    *param_2 = *puVar2;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f3bb2 FUN_1475f3bb2 body=134 status=ok
// SIG undefined FUN_1475f3bb2(void)

undefined8 * FUN_1475f3bb2(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  FUN_1406f9c46(param_1,local_58);
  lVar1 = FUN_1406f977c(local_58);
  if ((lVar1 != 0) &&
     (puVar2 = (undefined8 *)(*(int *)(lVar1 + 0x44) + local_30), puVar2 != (undefined8 *)0x0)) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
    *param_2 = *puVar2;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f3c3a FUN_1475f3c3a body=124 status=ok
// SIG undefined FUN_1475f3c3a(void)

undefined4 * FUN_1475f3c3a(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  FUN_1406f9c46(0,local_58);
  lVar4 = FUN_1406f977c(local_58);
  if ((lVar4 != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(lVar4 + 0x44) + local_30), puVar5 != (undefined4 *)0x0)) {
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *param_2 = *puVar5;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f3cb8 FUN_1475f3cb8 body=135 status=ok
// SIG undefined FUN_1475f3cb8(void)

undefined4 * FUN_1475f3cb8(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475f3d40 FUN_1475f3d40 body=378 status=ok
// SIG undefined FUN_1475f3d40(void)

void FUN_1475f3d40(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[5];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[6];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[7];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[8];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f3ebc FUN_1475f3ebc body=1282 status=ok
// SIG undefined FUN_1475f3ebc(void)

void FUN_1475f3ebc(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 *local_128;
  int local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar12 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar12 + 0x1e) == param_4[8]) goto LAB_1475f3f11;
      puVar12 = puVar12 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_1475f3f11:
  local_1d4 = *(int *)(lVar2 + 0x14);
  local_190 = param_1;
  if (local_1d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
  }
  LOCK();
  *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[7]) goto LAB_1475f3f4b;
      puVar10 = puVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1475f3f4b:
  uVar3 = *puVar12;
  local_1d8 = *(int *)(lVar2 + 0x14);
  if (local_1d8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_4[6]) goto LAB_1475f3f87;
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1475f3f87:
  uVar4 = *puVar10;
  local_1dc = *(int *)(lVar2 + 0x14);
  if (local_1dc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_4[5]) goto LAB_1475f3fcc;
      puVar11 = puVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_1475f3fcc:
  local_1b0 = *puVar7;
  local_1e0 = *(int *)(lVar2 + 0x14);
  local_1a8 = uVar4;
  if (local_1e0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == param_4[4]) goto LAB_1475f4019;
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1475f4019:
  local_1c8 = *puVar11;
  local_1e4 = *(int *)(lVar2 + 0x14);
  local_1a0 = uVar3;
  if (local_1e4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_1d0 = *puVar8;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_170,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == *param_4) goto LAB_1475f409f;
      puVar9 = puVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1475f409f:
  iVar1 = *(int *)(lVar2 + 0x14);
  local_198 = param_2;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  lVar6 = local_130;
  lVar2 = local_148;
  uVar5 = local_1a0;
  uVar4 = local_1a8;
  uVar3 = local_1b0;
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_1b8 = *puVar9;
  local_110 = local_170;
  local_108 = local_168;
  local_170 = 0;
  local_1c0 = local_160;
  local_100 = local_160;
  local_160 = 0;
  local_f8 = local_158;
  local_f0 = local_150;
  local_158 = 0;
  local_e8 = local_148;
  local_148 = 0;
  local_e0 = local_140;
  local_d8 = local_138;
  local_140 = 0;
  local_d0 = local_130;
  local_c0 = local_1e4;
  local_b8 = local_1d0;
  local_a8 = local_1e0;
  local_a0 = local_1c8;
  local_90 = local_1dc;
  local_88 = local_1b0;
  local_78 = local_1d8;
  local_70 = local_1a8;
  local_60 = local_1d4;
  local_130 = 0;
  local_58 = local_1a0;
  local_128 = puVar9;
  local_120 = iVar1;
  local_118 = local_1b8;
  local_c8 = puVar8;
  local_b0 = puVar11;
  local_98 = puVar7;
  local_80 = puVar10;
  local_68 = puVar12;
  FUN_1432f59b8();
  local_188 = 0;
  lStack_180 = 0;
  local_178 = 0;
  if (local_1c0 != 0) {
    local_188 = local_1c0;
  }
  if (lVar2 != 0) {
    lStack_180 = lVar2;
  }
  if (lVar6 != 0) {
    local_178 = lVar6;
  }
  local_1f8 = uVar5;
  local_200 = uVar4;
  local_208 = uVar3;
  local_210 = local_1c8;
  local_218 = local_1d0;
  FUN_1475f1f72(local_190,
                *(undefined8 *)(*(longlong *)(*local_198 + 0x60) + (longlong)(int)local_198[1] * 8),
                local_1b8,&local_188);
  FUN_1475f43c0(&local_128);
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f43c0 FUN_1475f43c0 body=256 status=ok
// SIG undefined FUN_1475f43c0(void)

void FUN_1475f43c0(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475f44b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475f44c0 FUN_1475f44c0 body=118 status=ok
// SIG undefined FUN_1475f44c0(void)

longlong FUN_1475f44c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475f3cb8();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf0) = uStack_28;
    *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f4538 FUN_1475f4538 body=135 status=ok
// SIG undefined FUN_1475f4538(void)

undefined4 * FUN_1475f4538(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475f45c0 FUN_1475f45c0 body=390 status=ok
// SIG undefined FUN_1475f45c0(void)

void FUN_1475f45c0(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3);
  if (param_1[5] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[5];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[6] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[6];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[7] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[7];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[8] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[8];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f4748 FUN_1475f4748 body=1241 status=ok
// SIG undefined FUN_1475f4748(void)

void FUN_1475f4748(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_188;
  longlong local_180;
  int local_178;
  undefined8 local_170;
  longlong local_168;
  int local_160;
  undefined8 local_158;
  longlong local_150;
  int local_148;
  undefined8 local_140;
  longlong local_138;
  int local_130;
  undefined8 local_128;
  undefined8 *local_120;
  int local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  longlong local_90;
  int local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  short local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_138,param_4[8]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_150,param_4[7]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_168,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_180,param_4[5]);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_4[4]) goto LAB_1475f481a;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1475f481a:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar7;
  local_44 = param_4[3];
  local_48 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_1c8,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_48,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar6 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *param_4) goto LAB_1475f4885;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_1475f4885:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 1));
  }
  LOCK();
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  UNLOCK();
  local_110 = *puVar6;
  local_108 = local_1c8;
  local_100 = local_1c0;
  local_1c8 = 0;
  local_f8 = local_1b8;
  uStack_f0 = uStack_1b0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_e8 = local_1a8;
  local_e0 = local_1a0;
  local_1a0 = 0;
  local_d8 = local_198;
  local_d0 = local_190;
  local_198 = 0;
  local_c8 = local_188;
  local_188 = 0;
  local_a8 = local_180;
  local_a0 = local_178;
  local_180 = 0;
  local_98 = local_170;
  local_170 = 0;
  local_90 = local_168;
  local_88 = local_160;
  local_168 = 0;
  local_80 = local_158;
  local_158 = 0;
  local_78 = local_150;
  local_70 = local_148;
  local_150 = 0;
  local_68 = local_140;
  local_140 = 0;
  local_60 = local_138;
  local_58 = local_130;
  local_138 = 0;
  local_50 = local_128;
  local_128 = 0;
  local_120 = puVar6;
  local_118 = iVar2;
  local_c0 = puVar7;
  local_b8 = iVar1;
  local_b0 = uVar4;
  FUN_1432f59b8();
  if (local_180 != 0) {
    LOCK();
    *(int *)(local_180 + 0x18) = *(int *)(local_180 + 0x18) + -1;
    UNLOCK();
    if (local_178 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_180 + 8));
    }
  }
  if (local_168 != 0) {
    LOCK();
    *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
    UNLOCK();
    if (local_160 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
    }
  }
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 0x18) = *(int *)(local_150 + 0x18) + -1;
    UNLOCK();
    if (local_148 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_150 + 8));
    }
  }
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 0x18) = *(int *)(local_138 + 0x18) + -1;
    UNLOCK();
    if (local_130 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_138 + 8));
    }
  }
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0;
  if (local_f8 != 0) {
    local_1e8 = local_f8;
  }
  if (local_e0 != 0) {
    lStack_1e0 = local_e0;
  }
  if (local_c8 != 0) {
    local_1d8 = local_c8;
  }
  local_1f8 = local_50;
  local_200 = local_68;
  local_208 = local_80;
  local_210 = local_98;
  local_218 = local_b0;
  FUN_1475f3430(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_110,
                &local_1e8);
  FUN_1475f4c22(&local_120);
  if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f4c22 FUN_1475f4c22 body=256 status=ok
// SIG undefined FUN_1475f4c22(void)

void FUN_1475f4c22(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475f4d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475f4d22 FUN_1475f4d22 body=146 status=ok
// SIG undefined FUN_1475f4d22(void)

longlong FUN_1475f4d22(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1475f4538();
  param_4 = (longlong *)*param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(longlong **)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0xf8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0xfc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x100) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x104) = uStack_40._4_4_;
  local_48 = uVar1;
  uStack_40 = uVar2;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf0) = uStack_28;
    *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f4db6 FUN_1475f4db6 body=146 status=ok
// SIG undefined FUN_1475f4db6(void)

undefined8 * FUN_1475f4db6(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1475f4e4a(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f4e4a FUN_1475f4e4a body=166 status=ok
// SIG undefined FUN_1475f4e4a(void)

void FUN_1475f4e4a(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f4ef2 FUN_1475f4ef2 body=698 status=ok
// SIG undefined FUN_1475f4ef2(void)

void FUN_1475f4ef2(short *param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_f8 [39];
  char local_d1;
  int local_d0;
  int local_cc;
  longlong local_c8;
  short *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  int local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    local_b8 = *(undefined8 *)(param_2 + 0x248);
    local_d1 = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    local_d0 = *(int *)(param_2 + 0x10);
    psVar6 = param_1;
    if (local_50 != local_d0) {
      do {
        local_c0 = psVar6;
        psVar6 = local_c0;
        lVar5 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
        if (local_d1 == '\0') {
          *(undefined4 *)(lVar5 + 0x14) = 0;
          local_c8 = lVar5;
        }
        else {
          local_c8 = 0;
        }
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar9 = *(longlong **)(lVar5 + 0x28);
          lVar7 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar9 + 0x1e) == local_c0[2]) goto LAB_1475f4fff;
            plVar9 = plVar9 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        plVar9 = (longlong *)0x0;
LAB_1475f4fff:
        iVar2 = *(int *)(lVar5 + 0x14);
        if (iVar2 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
        }
        LOCK();
        *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
        UNLOCK();
        lVar7 = *plVar9;
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar12 = *(longlong **)(lVar5 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar12 + 0x1e) == psVar6[1]) goto LAB_1475f502a;
            plVar12 = plVar12 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        plVar12 = (longlong *)0x0;
LAB_1475f502a:
        iVar3 = *(int *)(lVar5 + 0x14);
        if (iVar3 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
        }
        LOCK();
        *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
        UNLOCK();
        lVar13 = *plVar12;
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar10 = *(longlong **)(lVar5 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar10 + 0x1e) == *psVar6) goto LAB_1475f5060;
            plVar10 = plVar10 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar10 = (longlong *)0x0;
LAB_1475f5060:
        iVar4 = *(int *)(lVar5 + 0x14);
        local_cc = iVar2;
        if (iVar4 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
        }
        LOCK();
        *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
        UNLOCK();
        lVar8 = *plVar10;
        local_78 = local_b8;
        local_70 = local_cc;
        uVar1 = *(ushort *)(lVar5 + 0xe);
        local_b0 = plVar10;
        local_a8 = iVar4;
        local_a0 = lVar8;
        local_98 = plVar12;
        local_90 = iVar3;
        local_88 = lVar13;
        local_80 = plVar9;
        local_68 = lVar7;
        if ((ulonglong)uVar1 != 0) {
          uVar11 = 0;
          do {
            FUN_1475f51ae(*(undefined8 *)(lVar8 + uVar11 * 8),lVar13,lVar7 + uVar11);
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 0x14;
          } while (uVar1 != uVar11);
        }
        FUN_1475f52aa(&local_b0);
        if (local_c8 != 0) {
          *(undefined4 *)(local_c8 + 0x14) = 1;
        }
        local_50 = FUN_1403b8464(&local_60,local_50 + 1);
        psVar6 = local_c0;
      } while (local_50 != local_d0);
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f51ae FUN_1475f51ae body=251 status=ok
// SIG undefined FUN_1475f51ae(void)

void FUN_1475f51ae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_2 + 8,local_30);
  lVar1 = FUN_140dbb734(param_1,local_30);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar5) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar5 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar5 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar5) {
      lVar3 = lVar1;
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  uVar4 = 4;
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x70) != 0)) {
    lVar1 = FUN_1468921e2();
    if (*(longlong *)(lVar3 + 0x70) == lVar1) {
      uVar4 = 2;
    }
    else {
      lVar1 = FUN_146892264();
      if (*(longlong *)(lVar3 + 0x70) == lVar1) {
        uVar4 = 3;
      }
      else {
        FUN_1468922e6();
      }
    }
  }
  *param_3 = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f52aa FUN_1475f52aa body=141 status=ok
// SIG undefined FUN_1475f52aa(void)

void FUN_1475f52aa(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475f5329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475f5338 FUN_1475f5338 body=179 status=ok
// SIG undefined FUN_1475f5338(void)

undefined8 * FUN_1475f5338(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_1475f5392;
    }
  }
  uVar6 = 0;
LAB_1475f5392:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1475f53ec FUN_1475f53ec body=184 status=ok
// SIG undefined FUN_1475f53ec(void)

void FUN_1475f53ec(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f54a6 FUN_1475f54a6 body=241 status=ok
// SIG undefined FUN_1475f54a6(void)

undefined8 * FUN_1475f54a6(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c2240;
  param_1[0x1b] = &PTR_FUN_14a4c2288;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f5598 FUN_1475f5598 body=9 status=ok
// SIG undefined FUN_1475f5598(void)

void FUN_1475f5598(longlong param_1)

{
  FUN_1475f6274(param_1 + 0x10);
  return;
}



// FUNCTION 1475f55a2 FUN_1475f55a2 body=29 status=ok
// SIG undefined FUN_1475f55a2(void)

undefined8 FUN_1475f55a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f55c0 FUN_1475f55c0 body=38 status=ok
// SIG undefined FUN_1475f55c0(void)

undefined8 FUN_1475f55c0(undefined8 param_1,int param_2)

{
  FUN_1475f6274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f560c FUN_1475f560c body=82 status=ok
// SIG undefined FUN_1475f560c(void)

void FUN_1475f560c(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_1475f6322();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f5660 FUN_1475f5660 body=1088 status=ok
// SIG undefined FUN_1475f5660(void)

ulonglong FUN_1475f5660(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  byte local_68;
  undefined1 local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_1475f56db;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
      local_a8 = *puVar6;
      uStack_a0 = puVar6[1];
      local_98 = *(undefined4 *)(puVar6 + 2);
      uStack_94 = *(undefined4 *)((longlong)puVar6 + 0x14);
      uStack_90 = *(undefined4 *)(puVar6 + 3);
      uStack_8c = *(undefined4 *)((longlong)puVar6 + 0x1c);
      local_88 = *(undefined4 *)(puVar6 + 4);
      uStack_84 = *(undefined4 *)((longlong)puVar6 + 0x24);
      uStack_80 = *(undefined4 *)(puVar6 + 5);
      uStack_7c = *(undefined4 *)((longlong)puVar6 + 0x2c);
      local_68 = *(byte *)(puVar6 + 8);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_68])(local_78,puVar6 + 6);
      local_60 = *(undefined1 *)(puVar6 + 9);
      local_58 = *(byte *)(puVar6 + 10);
      FUN_1410d7556(param_1 + 0x18,&local_a8);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58 + 0x40)])();
      FUN_1475f64ae(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x48) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
        FUN_1475f6522(param_1 + 0xa0);
      }
      if ((local_58 & 1) != 0) {
        FUN_1475f63ac(&local_a8,&local_98);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_68])(local_78);
LAB_1475f58d1:
      unaff_RBP = 0;
      goto LAB_1475f56db;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + (longlong)param_2 * 0x58) & 1) == 0)
    goto LAB_1475f56db;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar12 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar10 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar10 >> 1) + uVar11;
        if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x48) < param_2) {
          uVar11 = uVar1 + (uVar10 & 1);
        }
        bVar4 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar4);
    }
    if ((((int)uVar11 < (int)uVar3) && (*(int *)(lVar12 + (ulonglong)uVar11 * 0x48) <= param_2)) &&
       (lVar12 + (ulonglong)uVar11 * 0x48 != -8)) {
      FUN_1475f63ac((longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x48) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
        FUN_1475f6522(param_1 + 0xa0);
      }
      goto LAB_1475f56db;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + (longlong)param_2 * 0x58);
      if ((bVar2 & 1) == 0) goto LAB_1475f56db;
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
      *(byte *)(puVar6 + 10) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1475f56db;
      lVar12 = (longlong)param_2 * 0x58;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + lVar12);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar12);
      if ((bVar2 & 2) == 0) {
        local_a8 = *puVar6;
        uStack_a0 = puVar6[1];
        local_98 = *(undefined4 *)(puVar6 + 2);
        uStack_94 = *(undefined4 *)((longlong)puVar6 + 0x14);
        uStack_90 = *(undefined4 *)(puVar6 + 3);
        uStack_8c = *(undefined4 *)((longlong)puVar6 + 0x1c);
        local_88 = *(undefined4 *)(puVar6 + 4);
        uStack_84 = *(undefined4 *)((longlong)puVar6 + 0x24);
        uStack_80 = *(undefined4 *)(puVar6 + 5);
        uStack_7c = *(undefined4 *)((longlong)puVar6 + 0x2c);
        local_68 = *(byte *)(puVar6 + 8);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_68])(local_78,puVar6 + 6);
        local_60 = *(undefined1 *)(puVar6 + 9);
        local_58 = *(byte *)(puVar6 + 10);
        FUN_1410d7556(param_1 + 0x18,&local_a8);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar12 + 0x40)])();
        FUN_1475f64ae(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar7 = 0;
        if (0 < (int)uVar3) {
          uVar9 = (ulonglong)uVar3;
          uVar10 = uVar3;
          do {
            uVar9 = uVar9 >> 1;
            uVar11 = (uint)uVar9 + (int)uVar7;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x48) < param_2) {
              uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
            }
            bVar4 = 1 < uVar10;
            uVar10 = (uint)uVar9;
          } while (bVar4);
        }
        if (((int)uVar7 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
          FUN_1475f6522(param_1 + 0xa0);
        }
        if ((local_58 & 1) != 0) {
          FUN_1475f63ac(&local_a8,&local_98);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_68])(local_78);
        goto LAB_1475f58d1;
      }
      if ((bVar2 & 1) == 0) goto LAB_1475f56db;
    }
  }
  FUN_1475f63ac(puVar6,puVar6 + 2);
LAB_1475f56db:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1475f5aa2 FUN_1475f5aa2 body=399 status=ok
// SIG undefined FUN_1475f5aa2(void)

undefined8 FUN_1475f5aa2(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_1475f5b51;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x58;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x40)])();
    FUN_1475f64ae(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x48) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
      FUN_1475f6522(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x48) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
      FUN_1475f6522(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + (longlong)param_2 * 0x58);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_1475f5b51:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f5c3c FUN_1475f5c3c body=266 status=ok
// SIG undefined FUN_1475f5c3c(void)

void FUN_1475f5c3c(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_1475f6638(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f5d48 FUN_1475f5d48 body=852 status=ok
// SIG undefined FUN_1475f5d48(void)

void FUN_1475f5d48(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  int local_d4;
  longlong local_d0;
  char *local_c8;
  undefined1 local_bc [8];
  int local_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong local_60;
  byte local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar12 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar12 + 0x1e) == **(short **)(param_1 + 8)) goto LAB_1475f5daf;
      puVar12 = puVar12 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_1475f5daf:
  local_d4 = *(int *)(lVar3 + 0x14);
  local_f0 = param_1;
  local_c8 = param_2;
  if (local_d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
  }
  LOCK();
  *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
  UNLOCK();
  uVar2 = *(ushort *)(lVar3 + 0xe);
  if (uVar2 != 0) {
    local_e8 = local_f0 + -0xd8;
    puVar11 = (undefined1 *)*puVar12;
    lVar3 = *param_6;
    local_d0 = param_6[1];
    local_e0 = param_6[2];
    param_5 = param_5 + 8;
    uVar10 = 0;
    do {
      local_b0 = *(longlong *)(param_4 + uVar10 * 4);
      if ((local_b0 != 0) && (cVar4 = FUN_1475f6948(local_e8,&local_b0,param_5), cVar4 != '\0')) {
        FUN_1475f6638(local_e8,local_bc,&local_b0,param_5);
        piVar9 = *(int **)(local_f0 + -0x28);
        if (*piVar9 != 0) {
          FUN_140adeba6(piVar9,local_bc);
          piVar9 = *(int **)(local_f0 + -0x28);
        }
        lVar6 = FUN_1400e4054(piVar9,local_bc);
        if (lVar6 == 0) {
          local_d8 = 0;
        }
        else {
          local_d8 = (undefined4)
                     CONCAT71((int7)((ulonglong)lVar6 >> 8),'\x02' - (*(short *)(lVar6 + 0xe) == 0))
          ;
        }
        uVar7 = FUN_1475f69ce(local_e8,local_b4,local_d8);
        if ((char)uVar7 == '\0') {
          local_58 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_50 = *puVar11;
          uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),local_50);
          uVar5 = (undefined4)uVar8;
          if (local_d0 == 0) {
            if (lVar3 == 0) {
              if (local_e0 != 0) {
                local_68 = *(ulonglong *)(local_e0 + uVar10 * 8);
                local_60 = *(longlong *)(local_e0 + 8 + uVar10 * 8);
                uVar8 = local_68;
                if (local_60 != 0) {
                  LOCK();
                  *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
                  UNLOCK();
                  uVar8 = *(ulonglong *)(local_e0 + uVar10 * 8);
                  uVar5 = (undefined4)CONCAT71((int7)((ulonglong)local_e0 >> 8),*puVar11);
                }
                local_58 = 2;
                FUN_1475f3a40(*(undefined8 *)(param_4 + uVar10 * 4),uVar5,uVar8);
              }
            }
            else {
              lVar6 = (longlong)*(int *)(local_f0 + 0x24) * (ulonglong)*(ushort *)(lVar3 + uVar10);
              local_68 = *(longlong *)(local_f0 + 0x18) + lVar6;
              (**(code **)(*(longlong *)(local_f0 + 0x18) + 0x18 + lVar6))
                        (&local_a8,*(undefined8 *)(param_4 + uVar10 * 4),uVar8 & 0xffffffff);
              local_78 = local_98;
              uStack_70 = uStack_90;
              local_88 = CONCAT44(uStack_a4,local_a8);
              uStack_80 = CONCAT44(uStack_9c,uStack_a0);
            }
          }
          else {
            local_68 = (ulonglong)*(ushort *)(local_d0 + uVar10);
            local_58 = 1;
            FUN_1475f39a4(*(undefined8 *)(param_4 + uVar10 * 4),uVar8 & 0xffffffff);
          }
          FUN_1475f6a66(local_e8,local_b4,local_d8,&local_88);
          (*(code *)(&PTR_LAB_14a4c7e10)[local_58])(&local_68);
        }
        if (*local_c8 == '\x01') {
          pbVar1 = (byte *)(*(longlong *)(local_f0 + -0x70) + 0x50 + (longlong)local_b4 * 0x58);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      uVar10 = uVar10 + 2;
      puVar11 = puVar11 + 1;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar2 * 2 != uVar10);
  }
  if (puVar12 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + -1;
    UNLOCK();
    if (local_d4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(puVar12 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f609e FUN_1475f609e body=38 status=ok
// SIG undefined FUN_1475f609e(void)

undefined8 FUN_1475f609e(undefined8 param_1,int param_2)

{
  FUN_1475f6274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f60c4 FUN_1475f60c4 body=52 status=ok
// SIG undefined FUN_1475f60c4(void)

void FUN_1475f60c4(longlong *param_1)

{
  FUN_1475f612e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475f60f8 FUN_1475f60f8 body=53 status=ok
// SIG undefined FUN_1475f60f8(void)

void FUN_1475f60f8(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1475f612e FUN_1475f612e body=324 status=ok
// SIG undefined FUN_1475f612e(void)

void FUN_1475f612e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x58 + 0x40)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f6274 FUN_1475f6274 body=173 status=ok
// SIG undefined FUN_1475f6274(void)

void FUN_1475f6274(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c22a0;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_1475f60f8(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1475f60c4(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001475f6315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1475f6322 FUN_1475f6322 body=136 status=ok
// SIG undefined FUN_1475f6322(void)

void FUN_1475f6322(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f63ac FUN_1475f63ac body=181 status=ok
// SIG undefined FUN_1475f63ac(void)

void FUN_1475f63ac(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_34 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_38);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 0x30) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    if (*(char *)(param_2 + 0x30) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    if (*(longlong *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f64ae FUN_1475f64ae body=116 status=ok
// SIG undefined FUN_1475f64ae(void)

void FUN_1475f64ae(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 1475f6522 FUN_1475f6522 body=103 status=ok
// SIG undefined FUN_1475f6522(void)

void FUN_1475f6522(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x48 + 0x38)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x48);
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar2) * 0x48);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1475f658a(param_1);
  return;
}



// FUNCTION 1475f658a FUN_1475f658a body=62 status=ok
// SIG undefined FUN_1475f658a(void)

void FUN_1475f658a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1475f65c8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 1475f65c8 FUN_1475f65c8 body=112 status=ok
// SIG undefined FUN_1475f65c8(void)

ulonglong FUN_1475f65c8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1475f6602;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_1475f6602:
  return param_2 & 0xffffffff;
}



// FUNCTION 1475f6638 FUN_1475f6638 body=189 status=ok
// SIG undefined FUN_1475f6638(void)

longlong FUN_1475f6638(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_1475f66f6(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f66f6 FUN_1475f66f6 body=367 status=ok
// SIG undefined FUN_1475f66f6(void)

int * FUN_1475f66f6(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_98._0_4_ = *param_3;
    local_98._4_4_ = param_3[1];
    uStack_90._0_4_ = param_3[2];
    uStack_90._4_4_ = param_3[3];
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_1475f6866(param_1 + 0x68,local_a8);
    *local_a0 = (undefined4)local_98;
    local_a0[1] = local_98._4_4_;
    local_a0[2] = (undefined4)uStack_90;
    local_a0[3] = uStack_90._4_4_;
    *(undefined1 *)(local_a0 + 0x10) = 0;
    *(undefined1 *)(local_a0 + 0x12) = 0;
    *(undefined1 *)(local_a0 + 0x14) = 0;
    *(undefined8 *)(local_a0 + 4) = 0;
    *(undefined8 *)(local_a0 + 6) = 0;
    *(undefined8 *)(local_a0 + 8) = 0;
    *(undefined8 *)(local_a0 + 10) = 0;
    *(undefined8 *)(local_a0 + 0xc) = 0;
    *param_2 = local_a8[0];
    local_98 = param_3;
    uStack_90 = param_2;
    FUN_140bf3cbe(plVar1,local_a8,&local_98,0);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f6866 FUN_1475f6866 body=226 status=ok
// SIG undefined FUN_1475f6866(void)

int * FUN_1475f6866(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 1475f6948 FUN_1475f6948 body=132 status=ok
// SIG undefined FUN_1475f6948(void)

byte FUN_1475f6948(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_1475f6be0(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1475f69ce FUN_1475f69ce body=151 status=ok
// SIG undefined FUN_1475f69ce(void)

ulonglong FUN_1475f69ce(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x50);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x48) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x48) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x48;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x50));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1475f6a66 FUN_1475f6a66 body=376 status=ok
// SIG undefined FUN_1475f6a66(void)

void FUN_1475f6a66(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  longlong lVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar10 = (longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar9 = *(byte *)(lVar10 + 0x50);
    if ((bVar9 & 1) == 0) {
      uVar2 = *param_4;
      uVar3 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      uVar6 = param_4[5];
      uVar7 = param_4[6];
      uVar8 = param_4[7];
      *(undefined4 *)(lVar10 + 0x20) = param_4[4];
      *(undefined4 *)(lVar10 + 0x24) = uVar6;
      *(undefined4 *)(lVar10 + 0x28) = uVar7;
      *(undefined4 *)(lVar10 + 0x2c) = uVar8;
      *(undefined4 *)(lVar10 + 0x10) = uVar2;
      *(undefined4 *)(lVar10 + 0x14) = uVar3;
      *(undefined4 *)(lVar10 + 0x18) = uVar4;
      *(undefined4 *)(lVar10 + 0x1c) = uVar5;
      if ((undefined4 *)(lVar10 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xc));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xc)])
                  (&local_58,param_4 + 8);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar10 + 0x40);
        uVar2 = *(undefined4 *)(lVar10 + 0x30);
        uVar3 = *(undefined4 *)(lVar10 + 0x34);
        uVar4 = *(undefined4 *)(lVar10 + 0x38);
        uVar5 = *(undefined4 *)(lVar10 + 0x3c);
        *(undefined4 *)(lVar10 + 0x30) = local_58;
        *(undefined4 *)(lVar10 + 0x34) = uStack_54;
        *(undefined4 *)(lVar10 + 0x38) = uStack_50;
        *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
        *(ulonglong *)(lVar10 + 0x40) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar9 = *(byte *)(lVar10 + 0x50);
      }
      *(undefined1 *)(lVar10 + 0x48) = *(undefined1 *)(param_4 + 0xe);
      *(byte *)(lVar10 + 0x50) = bVar9 | 1;
    }
    else {
      FUN_1475f6d46(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    uVar6 = param_4[5];
    uVar7 = param_4[6];
    uVar8 = param_4[7];
    *(undefined4 *)(lVar10 + 0x20) = param_4[4];
    *(undefined4 *)(lVar10 + 0x24) = uVar6;
    *(undefined4 *)(lVar10 + 0x28) = uVar7;
    *(undefined4 *)(lVar10 + 0x2c) = uVar8;
    *(undefined4 *)(lVar10 + 0x10) = uVar2;
    *(undefined4 *)(lVar10 + 0x14) = uVar3;
    *(undefined4 *)(lVar10 + 0x18) = uVar4;
    *(undefined4 *)(lVar10 + 0x1c) = uVar5;
    if ((undefined4 *)(lVar10 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xc));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xc)])
                (&local_58,param_4 + 8);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar10 + 0x40);
      uVar2 = *(undefined4 *)(lVar10 + 0x30);
      uVar3 = *(undefined4 *)(lVar10 + 0x34);
      uVar4 = *(undefined4 *)(lVar10 + 0x38);
      uVar5 = *(undefined4 *)(lVar10 + 0x3c);
      *(undefined4 *)(lVar10 + 0x30) = local_58;
      *(undefined4 *)(lVar10 + 0x34) = uStack_54;
      *(undefined4 *)(lVar10 + 0x38) = uStack_50;
      *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
      *(ulonglong *)(lVar10 + 0x40) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(undefined1 *)(lVar10 + 0x48) = *(undefined1 *)(param_4 + 0xe);
    *(byte *)(lVar10 + 0x50) = *(byte *)(lVar10 + 0x50) | 3;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f6be0 FUN_1475f6be0 body=189 status=ok
// SIG undefined FUN_1475f6be0(void)

longlong FUN_1475f6be0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1475f6c9e(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f6c9e FUN_1475f6c9e body=167 status=ok
// SIG undefined FUN_1475f6c9e(void)

undefined4 * FUN_1475f6c9e(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 1475f6d46 FUN_1475f6d46 body=262 status=ok
// SIG undefined FUN_1475f6d46(void)

void FUN_1475f6d46(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar14 = *param_1;
  if ((int)uVar3 < 1) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    uVar13 = uVar3;
    do {
      uVar1 = (uVar13 >> 1) + uVar15;
      if (*(int *)(lVar14 + (ulonglong)uVar1 * 0x48) < *param_2) {
        uVar15 = uVar1 + (uVar13 & 1);
      }
      bVar4 = 1 < uVar13;
      uVar13 = uVar13 >> 1;
    } while (bVar4);
    if (((int)uVar15 < (int)uVar3) && (*(int *)(lVar14 + (ulonglong)uVar15 * 0x48) <= *param_2)) {
      piVar16 = (int *)(lVar14 + (ulonglong)uVar15 * 0x48);
      FUN_1475f60f8(piVar16,1);
      goto LAB_1475f6df6;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1475f6e4c(param_1,uVar3);
    lVar14 = *param_1;
  }
  lVar5 = (ulonglong)uVar15 * 0x48;
  memmove((void *)(lVar14 + lVar5 + 0x48),(void *)(lVar14 + lVar5),
          (ulonglong)(uVar3 - uVar15) * 0x48);
  piVar16 = (int *)(lVar5 + *param_1);
LAB_1475f6df6:
  *piVar16 = *param_2;
  iVar6 = param_3[1];
  iVar7 = param_3[2];
  iVar8 = param_3[3];
  iVar9 = param_3[4];
  iVar10 = param_3[5];
  iVar11 = param_3[6];
  iVar12 = param_3[7];
  piVar16[2] = *param_3;
  piVar16[3] = iVar6;
  piVar16[4] = iVar7;
  piVar16[5] = iVar8;
  piVar16[6] = iVar9;
  piVar16[7] = iVar10;
  piVar16[8] = iVar11;
  piVar16[9] = iVar12;
  bVar2 = *(byte *)(param_3 + 0xc);
  *(byte *)(piVar16 + 0xe) = bVar2;
  (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[bVar2])(piVar16 + 10,param_3 + 8);
  *(char *)(piVar16 + 0x10) = (char)param_3[0xe];
  return;
}



// FUNCTION 1475f6e4c FUN_1475f6e4c body=147 status=ok
// SIG undefined FUN_1475f6e4c(void)

void FUN_1475f6e4c(longlong param_1,int param_2)

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



// FUNCTION 1475f6ee0 FUN_1475f6ee0 body=167 status=ok
// SIG undefined FUN_1475f6ee0(void)

void FUN_1475f6ee0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1475f6f5b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1475f6f5b;
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
LAB_1475f6f5b:
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
                    /* WARNING: Could not recover jumptable at 0x0001475f6f7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1475f6f88 FUN_1475f6f88 body=900 status=ok
// SIG undefined FUN_1475f6f88(void)

void FUN_1475f6f88(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  byte local_319;
  undefined8 *local_2f8;
  int local_2f0;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [32];
  undefined1 *local_290;
  undefined8 local_288;
  undefined8 local_280 [70];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_2b8;
  if (param_4 != 0) {
    uVar3 = FUN_145990612();
    plVar4 = (longlong *)FUN_144718840(param_4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar10 = *(longlong *)(param_4 + 0x28);
      *(undefined4 *)(lVar10 + 0x29c) = 0;
      lVar5 = 0x10;
      do {
        *(undefined8 *)((longlong)&local_290 + lVar5) = 0;
        *(undefined4 *)((longlong)local_280 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x40) = 0;
        lVar5 = lVar5 + 0x80;
      } while (lVar5 != 0x210);
      local_2c0 = *(undefined8 *)(param_3 + 8);
      local_2e0 = *param_3;
      uStack_2dc = param_3[1];
      iStack_2d8 = param_3[2];
      uStack_2d4 = param_3[3];
      local_2d0 = *(undefined8 *)(param_3 + 4);
      uStack_2c8 = *(undefined8 *)(param_3 + 6);
      local_290 = (undefined1 *)0x0;
      local_288 = 0x400000000;
      puVar13 = local_280;
      lVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar5 & 0x1f) & 1) != 0) {
          local_2c0._0_6_ = CONCAT24(*(undefined2 *)(*param_2 + lVar5 * 4),(undefined4)local_2c0);
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_2f8,&local_2e0,puVar13);
          uVar8 = local_288;
          if (local_2f8 != (undefined8 *)0x0) {
            lVar12 = (longlong)(int)local_288;
            uVar6 = (int)local_288 + 1;
            local_288 = CONCAT44(local_288._4_4_,uVar6);
            if (local_288._4_4_ < uVar6) {
              FUN_14476a5c8(local_2b0,uVar8 & 0xffffffff);
              puVar7 = local_290;
              if (local_290 == (undefined1 *)0x0) {
                puVar7 = local_2b0;
              }
              *(undefined8 **)(puVar7 + lVar12 * 8) = local_2f8;
              if (local_2f8 == (undefined8 *)0x0) goto LAB_1475f716a;
            }
            else {
              puVar7 = local_290;
              if (local_290 == (undefined1 *)0x0) {
                puVar7 = local_2b0;
              }
              *(undefined8 **)(puVar7 + lVar12 * 8) = local_2f8;
            }
            LOCK();
            *(int *)(local_2f8 + 1) = *(int *)(local_2f8 + 1) + 1;
            UNLOCK();
            if (local_2f8 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_2f8 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_2f8)(local_2f8,1);
              }
            }
          }
        }
LAB_1475f716a:
        lVar5 = lVar5 + 1;
        puVar13 = puVar13 + 0x10;
      } while (lVar5 != 4);
      if ((int)local_288 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_2b0,1);
      }
      if (*(short *)((longlong)param_3 + 0x22) == -1) {
        local_2f8 = (undefined8 *)0x0;
        local_2e8 = 0;
      }
      else {
        FUN_1475f730e(lVar10 + 0x28,&local_2f8,*(short *)((longlong)param_3 + 0x22),
                      *(undefined2 *)(param_1 + 0x16));
        local_319 = local_2f0 == 1;
      }
      if (0 < iStack_2d8) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined2 *)(CONCAT44(uStack_2dc,local_2e0) + lVar5 * 2);
          lVar12 = *param_6;
          puVar13 = local_280;
          lVar9 = 0;
          do {
            if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar9 & 0x1f) & 1) != 0) {
              uVar8 = (ulonglong)*(ushort *)(*param_2 + 2 + lVar9 * 4);
              lVar11 = uVar8 + local_2e8;
              if (local_2e8 == 0) {
                lVar11 = 0;
              }
              uVar3 = FUN_147546472(puVar13,uVar2,*(undefined8 *)(param_5 + uVar8),lVar11);
              *(undefined8 *)(lVar5 * 0x20 + lVar12 + uVar8) = uVar3;
            }
            lVar9 = lVar9 + 1;
            puVar13 = puVar13 + 0x10;
          } while (lVar9 != 4);
          lVar5 = lVar5 + 1;
        } while (lVar5 < iStack_2d8);
      }
      *(undefined4 *)(lVar10 + 0x29c) = 1;
      if (local_2f8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_2f8 + 3) = *(int *)(local_2f8 + 3) + -1;
        UNLOCK();
        if ((local_319 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_2f8 + 1));
        }
      }
      FUN_14588b8d6(local_2b0);
      lVar10 = 0x180;
      do {
        FUN_1475d7c02((longlong)local_280 + lVar10);
        lVar10 = lVar10 + -0x80;
      } while (lVar10 != -0x80);
    }
  }
  if ((local_50 ^ (ulonglong)local_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f730e FUN_1475f730e body=185 status=ok
// SIG undefined FUN_1475f730e(void)

undefined8 * FUN_1475f730e(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_1475f73c8(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1475f73c8 FUN_1475f73c8 body=116 status=ok
// SIG undefined FUN_1475f73c8(void)

longlong * FUN_1475f73c8(longlong *param_1,longlong *param_2,int param_3,uint param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (ulonglong)param_4 * 0x20 + *param_2;
  }
  return param_1;
}



// FUNCTION 1475f743c FUN_1475f743c body=57 status=ok
// SIG undefined FUN_1475f743c(void)

undefined8 * FUN_1475f743c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c2310;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f74ba FUN_1475f74ba body=57 status=ok
// SIG undefined FUN_1475f74ba(void)

undefined8 * FUN_1475f74ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c2310;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f74f4 FUN_1475f74f4 body=232 status=ok
// SIG undefined FUN_1475f74f4(void)

undefined8 * FUN_1475f74f4(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_1475f75de();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c2330;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f75de FUN_1475f75de body=104 status=ok
// SIG undefined FUN_1475f75de(void)

undefined8 FUN_1475f75de(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1475f7646 FUN_1475f7646 body=38 status=ok
// SIG undefined FUN_1475f7646(void)

undefined8 FUN_1475f7646(undefined8 param_1,int param_2)

{
  FUN_1475f76e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f766c FUN_1475f766c body=118 status=ok
// SIG undefined FUN_1475f766c(void)

void FUN_1475f766c(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_1475f7846(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 1475f76e2 FUN_1475f76e2 body=71 status=ok
// SIG undefined FUN_1475f76e2(void)

void FUN_1475f76e2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c2330;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1475f775e(param_1 + 8);
  FUN_1475f772a(param_1 + 1);
  return;
}



// FUNCTION 1475f772a FUN_1475f772a body=52 status=ok
// SIG undefined FUN_1475f772a(void)

void FUN_1475f772a(longlong *param_1)

{
  FUN_1475f77ec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475f775e FUN_1475f775e body=52 status=ok
// SIG undefined FUN_1475f775e(void)

void FUN_1475f775e(longlong *param_1)

{
  FUN_1475f7792();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475f7792 FUN_1475f7792 body=89 status=ok
// SIG undefined FUN_1475f7792(void)

void FUN_1475f7792(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 1475f77ec FUN_1475f77ec body=89 status=ok
// SIG undefined FUN_1475f77ec(void)

void FUN_1475f77ec(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1475f7846 FUN_1475f7846 body=104 status=ok
// SIG undefined FUN_1475f7846(void)

void FUN_1475f7846(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x20 + 4) = uVar4;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1475f78ae FUN_1475f78ae body=1209 status=ok
// SIG undefined FUN_1475f78ae(void)

void FUN_1475f78ae(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  int local_d4;
  int local_d0;
  int local_cc;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_94;
  ushort local_8e;
  char local_8c;
  char local_8a;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar17 = *(longlong **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475f790b;
      plVar17 = plVar17 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_1475f790b:
  local_c0 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_cc = *(int *)(param_2 + 0x14);
  if (local_cc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_1475f7967;
      plVar16 = plVar16 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_1475f7967:
  lVar12 = *plVar17;
  local_d0 = *(int *)(param_2 + 0x14);
  if (local_d0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar23 = *(longlong **)(param_2 + 0x28);
    lVar13 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar23 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18)
         ) goto LAB_1475f79b5;
      plVar23 = plVar23 + 4;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  plVar23 = (longlong *)0x0;
LAB_1475f79b5:
  lVar13 = *plVar16;
  local_d4 = *(int *)(param_2 + 0x14);
  if (local_d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar23 + 1));
  }
  LOCK();
  *(int *)(plVar23 + 3) = (int)plVar23[3] + 1;
  UNLOCK();
  local_e0 = *plVar23;
  local_b0 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if (local_c0 != 0) {
    local_c8 = param_1 + 8;
    uVar24 = 0;
    do {
      local_94 = *(int *)(lVar13 + uVar24 * 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar14 = *(longlong *)(param_1 + 8);
      uVar18 = 0;
      if (0 < (int)uVar2) {
        uVar18 = 0;
        uVar20 = (ulonglong)uVar2;
        uVar21 = uVar2;
        do {
          uVar20 = uVar20 >> 1;
          uVar22 = (uint)uVar20 + (int)uVar18;
          if (*(int *)(lVar14 + (ulonglong)uVar22 * 0x28) < local_94) {
            uVar18 = (ulonglong)(uVar22 + (uVar21 & 1));
          }
          bVar3 = 1 < uVar21;
          uVar21 = (uint)uVar20;
        } while (bVar3);
      }
      if (((int)uVar18 < (int)uVar2) && (*(int *)(lVar14 + uVar18 * 0x28) <= local_94)) {
        lVar14 = lVar14 + uVar18 * 0x28;
        if ((undefined4 *)(lVar14 + 8) == (undefined4 *)0x0) goto LAB_1475f7a97;
        uVar4 = *(undefined4 *)(lVar14 + 8);
        uVar5 = *(undefined4 *)(lVar14 + 0xc);
        uVar6 = *(undefined4 *)(lVar14 + 0x10);
        uVar7 = *(undefined4 *)(lVar14 + 0x14);
        uVar11 = *(undefined8 *)(lVar14 + 0x20);
        puVar19 = (undefined8 *)(lVar12 + 0x10 + uVar24 * 0x20);
        *puVar19 = *(undefined8 *)(lVar14 + 0x18);
        puVar19[1] = uVar11;
        puVar1 = (undefined4 *)(lVar12 + uVar24 * 0x20);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
      }
      else {
LAB_1475f7a97:
        lVar14 = FUN_1475b443c(local_b0);
        if (((lVar14 != 0) && (lVar15 = FUN_14479d2ce(lVar14), lVar15 != 0)) &&
           (*(longlong *)(lVar14 + 8) != 0)) {
          local_a8 = *(undefined4 *)(param_1 + 0x30);
          uStack_a4 = *(undefined4 *)(param_1 + 0x34);
          uStack_a0 = *(undefined4 *)(param_1 + 0x38);
          uStack_9c = *(undefined4 *)(param_1 + 0x3c);
          local_f0 = lVar15;
          FUN_140d4d2ba(&local_8e,lVar15,lVar14 + 8,&local_a8);
          lVar15 = *(longlong *)(param_1 + 0x48);
          if (lVar15 == 0) {
LAB_1475f7af1:
            if (local_8a == '\0') {
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_68 = 1;
              FUN_1475f87f0(local_f0,*(undefined1 *)(local_e0 + uVar24),lVar14 + 0x10,&local_88);
            }
            else if (local_8c == '\x01') {
              local_68 = 1;
              (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_8e))
                        (&local_88,local_f0,*(undefined1 *)(local_e0 + uVar24));
            }
            else {
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 1;
              FUN_1475f39a4(local_f0,*(undefined1 *)(local_e0 + uVar24),local_8e,&local_88);
            }
            puVar19 = &local_88;
            puVar1 = (undefined4 *)(lVar12 + 0x10 + uVar24 * 0x20);
            *puVar1 = (undefined4)local_78;
            puVar1[1] = local_78._4_4_;
            puVar1[2] = (undefined4)uStack_70;
            puVar1[3] = uStack_70._4_4_;
            puVar1 = (undefined4 *)(lVar12 + uVar24 * 0x20);
            *puVar1 = (undefined4)local_88;
            puVar1[1] = local_88._4_4_;
            puVar1[2] = (undefined4)uStack_80;
            puVar1[3] = uStack_80._4_4_;
          }
          else {
            local_e8 = lVar15;
            if (local_8a == '\0') {
              FUN_1475f8824(lVar15,&local_88,local_f0,lVar14 + 0x10);
            }
            else if (local_8c == '\x01') {
              FUN_1475f905a();
            }
            else {
              FUN_1475f923c(lVar15,&local_88,local_f0,local_8e);
            }
            if (local_88._2_1_ == '\x01') {
              puVar19 = (undefined8 *)((local_88 & 0xffff) * 0x20 + *(longlong *)(local_e8 + 8));
            }
            else {
              puVar19 = (undefined8 *)0x0;
            }
            if (puVar19 == (undefined8 *)0x0) goto LAB_1475f7af1;
            uVar4 = *(undefined4 *)puVar19;
            uVar5 = *(undefined4 *)((longlong)puVar19 + 4);
            uVar6 = *(undefined4 *)(puVar19 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar19 + 0xc);
            uVar8 = *(undefined4 *)((longlong)puVar19 + 0x14);
            uVar9 = *(undefined4 *)(puVar19 + 3);
            uVar10 = *(undefined4 *)((longlong)puVar19 + 0x1c);
            puVar1 = (undefined4 *)(lVar12 + 0x10 + uVar24 * 0x20);
            *puVar1 = *(undefined4 *)(puVar19 + 2);
            puVar1[1] = uVar8;
            puVar1[2] = uVar9;
            puVar1[3] = uVar10;
            puVar1 = (undefined4 *)(lVar12 + uVar24 * 0x20);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
          }
          FUN_1475f941e(local_c8,&local_94,puVar19);
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != local_c0);
  }
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar23 + 3) = (int)plVar23[3] + -1;
    UNLOCK();
    if (local_d4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar23 + 1));
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (local_d0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
    }
  }
  if (plVar17 != (longlong *)0x0) {
    uVar24 = plVar17[2];
    if ((ulonglong)plVar17[2] < local_b8) {
      uVar24 = local_b8;
    }
    plVar17[2] = uVar24;
    LOCK();
    *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
    UNLOCK();
    if (local_cc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f7d68 FUN_1475f7d68 body=1746 status=ok
// SIG undefined FUN_1475f7d68(void)

void FUN_1475f7d68(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined8 local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined2 local_da;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  ushort local_94;
  char local_92;
  ushort local_90;
  char cStack_8e;
  undefined5 uStack_8d;
  int local_88;
  longlong local_80;
  ushort local_78;
  char cStack_76;
  undefined5 uStack_75;
  int local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_1475f7dc6;
      plVar14 = plVar14 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_1475f7dc6:
  local_128 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_e8 = *(ulonglong *)(param_1 + 0x40);
  local_fc = *(int *)(param_2 + 0x14);
  if (local_fc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar15 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475f7e23;
      plVar15 = plVar15 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_1475f7e23:
  local_110 = *plVar14;
  local_f0 = *(ulonglong *)(param_1 + 0x40);
  local_100 = *(int *)(param_2 + 0x14);
  if (local_100 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
  }
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar17 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1475f7e7f;
      plVar17 = plVar17 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_1475f7e7f:
  puVar13 = (undefined4 *)*plVar15;
  local_104 = *(int *)(param_2 + 0x14);
  if (local_104 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar18 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar18 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18)
         ) goto LAB_1475f7ed1;
      plVar18 = plVar18 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar18 = (longlong *)0x0;
LAB_1475f7ed1:
  local_130 = *plVar17;
  local_108 = *(int *)(param_2 + 0x14);
  if (local_108 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar18 + 1));
  }
  LOCK();
  *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
  UNLOCK();
  local_118 = *plVar18;
  FUN_140b325e4(param_2,&local_b0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_a0 == 0) {
    FUN_1410bd96e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar11 = local_68;
    if (local_68 == 0) {
      FUN_1410bd9c4(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_120 = local_80;
      if ((short)local_128 != 0 && local_80 != 0) {
        lVar11 = 0;
        uVar16 = 0;
        do {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(*(longlong *)(local_120 + lVar11) + 0x58) != 0) {
            puVar12 = *(undefined2 **)(*(longlong *)(local_120 + lVar11) + 0x50);
          }
          local_f8 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_d8,puVar12,1);
          FUN_1475f8824(local_f8,&local_94,*(undefined8 *)(local_130 + uVar16 * 8),&local_d8);
          if (local_92 == '\x01') {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
            puVar2 = (undefined4 *)(lVar5 + (ulonglong)local_94 * 0x20);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            puVar3 = (undefined8 *)(lVar5 + 0x10 + (ulonglong)local_94 * 0x20);
            uVar10 = puVar3[1];
            puVar4 = (undefined8 *)((longlong)puVar13 + lVar11 * 2 + 0x10);
            *puVar4 = *puVar3;
            puVar4[1] = uVar10;
            puVar2 = (undefined4 *)((longlong)puVar13 + lVar11 * 2);
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
          }
          else {
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            FUN_1475f3a40(*(undefined8 *)(local_130 + uVar16 * 8),
                          *(undefined1 *)(local_118 + uVar16),*(undefined8 *)(local_120 + lVar11),
                          &local_d8);
            puVar2 = (undefined4 *)((longlong)puVar13 + lVar11 * 2 + 0x10);
            *puVar2 = (undefined4)local_c8;
            puVar2[1] = local_c8._4_4_;
            puVar2[2] = (undefined4)uStack_c0;
            puVar2[3] = uStack_c0._4_4_;
            puVar2 = (undefined4 *)((longlong)puVar13 + lVar11 * 2);
            *puVar2 = (undefined4)local_d8;
            puVar2[1] = local_d8._4_4_;
            puVar2[2] = (undefined4)uStack_d0;
            puVar2[3] = uStack_d0._4_4_;
            local_138 = *(undefined8 *)(local_120 + lVar11);
            FUN_1475f9b18(*(undefined8 *)(param_1 + 0x48),&local_da,
                          *(undefined8 *)(local_130 + uVar16 * 8),&local_d8);
            *(undefined2 *)(local_110 + uVar16 * 2) = local_da;
          }
          uVar16 = uVar16 + 1;
          lVar11 = lVar11 + 0x10;
        } while (local_128 != uVar16);
      }
      lVar11 = CONCAT53(uStack_8d,CONCAT12(cStack_8e,local_90));
      if (lVar11 != 0) {
        LOCK();
        piVar1 = (int *)(lVar11 + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (local_88 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_8d,CONCAT12(cStack_8e,local_90)) + 8));
        }
      }
    }
    else if (local_128 != 0) {
      uVar16 = 0;
      do {
        FUN_1475f923c(*(undefined8 *)(param_1 + 0x48),&local_90,
                      *(undefined8 *)(local_130 + uVar16 * 8),*(undefined2 *)(local_68 + uVar16 * 2)
                     );
        if (cStack_8e == '\x01') {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
          puVar2 = (undefined4 *)(lVar5 + (ulonglong)local_90 * 0x20);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar3 = (undefined8 *)(lVar5 + 0x10 + (ulonglong)local_90 * 0x20);
          uVar10 = puVar3[1];
          *(undefined8 *)(puVar13 + 4) = *puVar3;
          *(undefined8 *)(puVar13 + 6) = uVar10;
          *puVar13 = uVar6;
          puVar13[1] = uVar7;
          puVar13[2] = uVar8;
          puVar13[3] = uVar9;
        }
        else {
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          FUN_1475f39a4(*(undefined8 *)(local_130 + uVar16 * 8),*(undefined1 *)(local_118 + uVar16),
                        *(undefined2 *)(lVar11 + uVar16 * 2),&local_d8);
          puVar13[4] = (undefined4)local_c8;
          puVar13[5] = local_c8._4_4_;
          puVar13[6] = (undefined4)uStack_c0;
          puVar13[7] = uStack_c0._4_4_;
          *puVar13 = (undefined4)local_d8;
          puVar13[1] = local_d8._4_4_;
          puVar13[2] = (undefined4)uStack_d0;
          puVar13[3] = uStack_d0._4_4_;
          local_138 = CONCAT62(local_138._2_6_,*(undefined2 *)(lVar11 + uVar16 * 2));
          FUN_1475f9a36(*(undefined8 *)(param_1 + 0x48),&local_94,
                        *(undefined8 *)(local_130 + uVar16 * 8),&local_d8);
          *(ushort *)(local_110 + uVar16 * 2) = local_94;
        }
        uVar16 = uVar16 + 1;
        puVar13 = puVar13 + 8;
      } while (local_128 != uVar16);
    }
    lVar11 = CONCAT53(uStack_75,CONCAT12(cStack_76,local_78));
    if (lVar11 != 0) {
      LOCK();
      piVar1 = (int *)(lVar11 + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (local_70 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_75,CONCAT12(cStack_76,local_78)) + 8));
      }
    }
  }
  else if (local_128 != 0) {
    uVar16 = 0;
    do {
      FUN_1475f905a(*(undefined8 *)(param_1 + 0x48),&local_78,
                    *(undefined8 *)(local_130 + uVar16 * 8),*(undefined2 *)(local_a0 + uVar16 * 2));
      if (cStack_76 == '\x01') {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
        puVar2 = (undefined4 *)(lVar11 + (ulonglong)local_78 * 0x20);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar3 = (undefined8 *)(lVar11 + 0x10 + (ulonglong)local_78 * 0x20);
        uVar10 = puVar3[1];
        *(undefined8 *)(puVar13 + 4) = *puVar3;
        *(undefined8 *)(puVar13 + 6) = uVar10;
        *puVar13 = uVar6;
        puVar13[1] = uVar7;
        puVar13[2] = uVar8;
        puVar13[3] = uVar9;
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                    (longlong)*(int *)(param_1 + 0x3c) *
                    (ulonglong)*(ushort *)(local_a0 + uVar16 * 2)))
                  (&local_d8,*(undefined8 *)(local_130 + uVar16 * 8),
                   *(undefined1 *)(local_118 + uVar16));
        puVar13[4] = (undefined4)local_c8;
        puVar13[5] = local_c8._4_4_;
        puVar13[6] = (undefined4)uStack_c0;
        puVar13[7] = uStack_c0._4_4_;
        *puVar13 = (undefined4)local_d8;
        puVar13[1] = local_d8._4_4_;
        puVar13[2] = (undefined4)uStack_d0;
        puVar13[3] = uStack_d0._4_4_;
        local_138 = CONCAT62(local_138._2_6_,*(undefined2 *)(local_a0 + uVar16 * 2));
        FUN_1475f9954(*(undefined8 *)(param_1 + 0x48),&local_90,
                      *(undefined8 *)(local_130 + uVar16 * 8),&local_d8);
        *(ushort *)(local_110 + uVar16 * 2) = local_90;
      }
      uVar16 = uVar16 + 1;
      puVar13 = puVar13 + 8;
    } while (local_128 != uVar16);
  }
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 0x18) = *(int *)(local_b0 + 0x18) + -1;
    UNLOCK();
    if (local_a8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_b0 + 8));
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 3) = (int)plVar18[3] + -1;
    UNLOCK();
    if (local_108 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar18 + 1));
    }
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
    UNLOCK();
    if (local_104 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar17 + 1));
    }
  }
  if (plVar15 != (longlong *)0x0) {
    uVar16 = plVar15[2];
    if ((ulonglong)plVar15[2] < local_f0) {
      uVar16 = local_f0;
    }
    plVar15[2] = uVar16;
    LOCK();
    *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
    UNLOCK();
    if (local_100 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
    }
  }
  if (plVar14 != (longlong *)0x0) {
    uVar16 = plVar14[2];
    if ((ulonglong)plVar14[2] < local_e8) {
      uVar16 = local_e8;
    }
    plVar14[2] = uVar16;
    LOCK();
    *(int *)(plVar14 + 3) = (int)plVar14[3] + -1;
    UNLOCK();
    if (local_fc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar14 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f843c FUN_1475f843c body=946 status=ok
// SIG undefined FUN_1475f843c(void)

void FUN_1475f843c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  longlong local_c8;
  int local_bc;
  int local_b8;
  int local_b4;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  int local_90;
  undefined8 *local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475f8492;
      plVar7 = plVar7 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1475f8492:
  local_d0 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b0 = *(ulonglong *)(param_1 + 0x40);
  local_b4 = *(int *)(param_2 + 0x14);
  if (local_b4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1475f84ef;
      plVar8 = plVar8 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1475f84ef:
  puVar10 = (undefined4 *)*plVar7;
  local_b8 = *(int *)(param_2 + 0x14);
  if (local_b8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18))
      goto LAB_1475f853e;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_1475f853e:
  local_c8 = *plVar8;
  local_bc = *(int *)(param_2 + 0x14);
  if (local_bc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *plVar5;
  FUN_140b325e4(param_2,&local_80,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  lVar2 = local_c8;
  uVar4 = local_d0;
  local_a8 = plVar8;
  local_a0 = plVar7;
  if (local_70 == 0) {
    FUN_1410bd96e(param_2,&local_68,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar2 = local_c8;
    uVar4 = local_d0;
    if (local_58 == 0) {
      FUN_1410bd9c4(param_2,&local_98,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      uVar4 = local_d0;
      if ((short)local_d0 != 0 && local_88 != (undefined8 *)0x0) {
        uVar6 = 0;
        puVar9 = local_88;
        do {
          FUN_1475f3a40(*(undefined8 *)(local_c8 + uVar6 * 8),*(undefined1 *)(lVar3 + uVar6),*puVar9
                        ,puVar10);
          uVar6 = uVar6 + 1;
          puVar9 = puVar9 + 2;
          puVar10 = puVar10 + 8;
        } while (uVar4 != uVar6);
      }
      if (local_98 != 0) {
        LOCK();
        *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + -1;
        UNLOCK();
        if (local_90 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_98 + 8));
        }
      }
    }
    else if (local_d0 != 0) {
      uVar6 = 0;
      do {
        FUN_1475f39a4(*(undefined8 *)(lVar2 + uVar6 * 8),*(undefined1 *)(lVar3 + uVar6),
                      *(undefined2 *)(local_58 + uVar6 * 2),puVar10);
        uVar6 = uVar6 + 1;
        puVar10 = puVar10 + 8;
      } while (uVar4 != uVar6);
    }
    if (CONCAT44(uStack_64,local_68) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_64,local_68) + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iStack_60 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT44(uStack_64,local_68) + 8));
      }
    }
  }
  else if (local_d0 != 0) {
    uVar6 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                  (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)*(ushort *)(local_70 + uVar6 * 2))
      )(&local_68,*(undefined8 *)(lVar2 + uVar6 * 8),*(undefined1 *)(lVar3 + uVar6));
      *(longlong *)(puVar10 + 4) = local_58;
      *(undefined8 *)(puVar10 + 6) = uStack_50;
      *puVar10 = local_68;
      puVar10[1] = uStack_64;
      puVar10[2] = iStack_60;
      puVar10[3] = uStack_5c;
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 8;
    } while (uVar4 != uVar6);
  }
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 0x18) = *(int *)(local_80 + 0x18) + -1;
    UNLOCK();
    if (local_78 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_80 + 8));
    }
  }
  plVar8 = local_a0;
  plVar7 = local_a8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (local_bc == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar4 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_b0) {
      uVar4 = local_b0;
    }
    plVar8[2] = uVar4;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_b4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f87f0 FUN_1475f87f0 body=52 status=ok
// SIG undefined FUN_1475f87f0(void)

void FUN_1475f87f0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == '\x04') {
    FUN_1475f9710(param_1,param_3,param_4);
    return;
  }
  if (param_2 != '\x03') {
    if (param_2 != '\x02') {
      return;
    }
    FUN_1475f958c(param_1,param_3,param_4);
    return;
  }
  FUN_1475f9648(param_1,param_3,param_4);
  return;
}



// FUNCTION 1475f8824 FUN_1475f8824 body=483 status=ok
// SIG undefined FUN_1475f8824(void)

undefined8 FUN_1475f8824(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475f8952;
        }
        else {
LAB_1475f8952:
          FUN_1475f8cc2(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475f8d8e(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475f8bf6(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_1475f8a08(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f8a08 FUN_1475f8a08 body=493 status=ok
// SIG undefined FUN_1475f8a08(void)

undefined2 * FUN_1475f8a08(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475f8b3a;
        }
        else {
LAB_1475f8b3a:
          FUN_1475f8cc2(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_1475f8d8e(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_1475f8bf6(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_1475f8fa2((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f8bf6 FUN_1475f8bf6 body=203 status=ok
// SIG undefined FUN_1475f8bf6(void)

void FUN_1475f8bf6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6 * 0x20;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x20) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x20) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_1446f4a44(param_1,iVar5);
  return;
}



// FUNCTION 1475f8cc2 FUN_1475f8cc2 body=90 status=ok
// SIG undefined FUN_1475f8cc2(void)

void FUN_1475f8cc2(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1475f8d1c();
  return;
}



// FUNCTION 1475f8d1c FUN_1475f8d1c body=114 status=ok
// SIG undefined FUN_1475f8d1c(void)

void FUN_1475f8d1c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 1475f8d8e FUN_1475f8d8e body=68 status=ok
// SIG undefined FUN_1475f8d8e(void)

void FUN_1475f8d8e(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1475f8dd2(param_1);
  return;
}



// FUNCTION 1475f8dd2 FUN_1475f8dd2 body=462 status=ok
// SIG undefined FUN_1475f8dd2(void)

void FUN_1475f8dd2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f8fa2 FUN_1475f8fa2 body=107 status=ok
// SIG undefined FUN_1475f8fa2(void)

int FUN_1475f8fa2(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1475f900d(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1475f900d FUN_1475f900d body=76 status=ok
// SIG undefined FUN_1475f900d(void)

undefined8 FUN_1475f900d(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1475f905a FUN_1475f905a body=481 status=ok
// SIG undefined FUN_1475f905a(void)

undefined8 FUN_1475f905a(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475f9188;
        }
        else {
LAB_1475f9188:
          FUN_1475f8cc2(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475f8d8e(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475f8bf6(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_1475f8a08(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f923c FUN_1475f923c body=481 status=ok
// SIG undefined FUN_1475f923c(void)

undefined8 FUN_1475f923c(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475f936a;
        }
        else {
LAB_1475f936a:
          FUN_1475f8cc2(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475f8d8e(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475f8bf6(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_1475f8a08(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f941e FUN_1475f941e body=218 status=ok
// SIG undefined FUN_1475f941e(void)

void FUN_1475f941e(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar10 = *param_1;
  if ((int)uVar2 < 1) {
    uVar11 = 0;
  }
  else {
    iVar8 = *param_2;
    uVar11 = 0;
    uVar9 = uVar2;
    do {
      uVar1 = (uVar9 >> 1) + uVar11;
      if (*(int *)(lVar10 + (ulonglong)uVar1 * 0x28) < iVar8) {
        uVar11 = uVar1 + (uVar9 & 1);
      }
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    if (((int)uVar11 < (int)uVar2) && (*(int *)(lVar10 + (ulonglong)uVar11 * 0x28) <= iVar8)) {
      piVar12 = (int *)(lVar10 + (ulonglong)uVar11 * 0x28);
      goto LAB_1475f94c3;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1475f94f8(param_1,uVar2);
    lVar10 = *param_1;
  }
  lVar4 = (ulonglong)uVar11 * 0x28;
  memmove((void *)(lVar10 + lVar4 + 0x28),(void *)(lVar10 + lVar4),
          (ulonglong)(uVar2 - uVar11) * 0x28);
  piVar12 = (int *)(lVar4 + *param_1);
  iVar8 = *param_2;
LAB_1475f94c3:
  *piVar12 = iVar8;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined8 *)(piVar12 + 2) = *param_3;
  *(undefined8 *)(piVar12 + 4) = uVar5;
  *(undefined8 *)(piVar12 + 6) = uVar6;
  *(undefined8 *)(piVar12 + 8) = uVar7;
  return;
}



// FUNCTION 1475f94f8 FUN_1475f94f8 body=147 status=ok
// SIG undefined FUN_1475f94f8(void)

void FUN_1475f94f8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475f958c FUN_1475f958c body=186 status=ok
// SIG undefined FUN_1475f958c(void)

void FUN_1475f958c(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40 [2];
  float local_2c;
  float local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_50);
  puVar1 = local_50;
  if (local_48 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_40,puVar1);
  FUN_1475f97da(&local_2c,param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_24 == '\x01') {
    *param_3 = (double)local_2c;
    param_3[1] = (double)local_28;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f9648 FUN_1475f9648 body=198 status=ok
// SIG undefined FUN_1475f9648(void)

void FUN_1475f9648(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40 [2];
  float local_30;
  float local_2c;
  float local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_50);
  puVar1 = local_50;
  if (local_48 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_40,puVar1);
  FUN_1475f9856(&local_30,param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_24 == '\x01') {
    *param_3 = (double)local_30;
    param_3[1] = (double)local_2c;
    param_3[2] = (double)local_28;
    param_3[3] = 0.0;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f9710 FUN_1475f9710 body=201 status=ok
// SIG undefined FUN_1475f9710(void)

void FUN_1475f9710(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  char local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_2,&local_68);
  puVar1 = local_68;
  if (local_60 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_58,puVar1);
  FUN_1475f98d8(&local_48,param_1,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 == '\x01') {
    *param_3 = (double)local_48;
    param_3[1] = (double)local_44;
    param_3[2] = (double)local_40;
    param_3[3] = (double)local_3c;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475f97da FUN_1475f97da body=123 status=ok
// SIG undefined FUN_1475f97da(void)

undefined8 * FUN_1475f97da(undefined8 *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar2 = FUN_1406f977c(local_48);
  if ((lVar2 == 0) ||
     (puVar3 = (undefined8 *)(*(int *)(lVar2 + 0x44) + local_20), puVar3 == (undefined8 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_1 = *puVar3;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f9856 FUN_1475f9856 body=129 status=ok
// SIG undefined FUN_1475f9856(void)

undefined8 * FUN_1475f9856(undefined8 *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar2 = FUN_1406f977c(local_48);
  if ((lVar2 == 0) ||
     (puVar3 = (undefined8 *)(*(int *)(lVar2 + 0x44) + local_20), puVar3 == (undefined8 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar3 + 1);
    *param_1 = *puVar3;
    uVar1 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f98d8 FUN_1475f98d8 body=123 status=ok
// SIG undefined FUN_1475f98d8(void)

undefined4 * FUN_1475f98d8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar5 = FUN_1406f977c(local_48);
  if ((lVar5 == 0) ||
     (puVar6 = (undefined4 *)(*(int *)(lVar5 + 0x44) + local_20), puVar6 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *param_1 = *puVar6;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar4;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f9954 FUN_1475f9954 body=224 status=ok
// SIG undefined FUN_1475f9954(void)

undefined2 *
FUN_1475f9954(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 1;
  FUN_1475f9c16(param_1 + 8,&local_60);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  local_58[4] = param_4[4];
  local_58[5] = uVar5;
  local_58[6] = uVar6;
  local_58[7] = uVar7;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1475f9cfc(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f9a36 FUN_1475f9a36 body=224 status=ok
// SIG undefined FUN_1475f9a36(void)

undefined2 *
FUN_1475f9a36(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 0;
  FUN_1475f9c16(param_1 + 8,&local_60);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  local_58[4] = param_4[4];
  local_58[5] = uVar5;
  local_58[6] = uVar6;
  local_58[7] = uVar7;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1475f9cfc(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f9b18 FUN_1475f9b18 body=252 status=ok
// SIG undefined FUN_1475f9b18(void)

undefined2 *
FUN_1475f9b18(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined4 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_1475f9c16(param_1 + 8,&local_58);
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  local_50[4] = param_4[4];
  local_50[5] = uVar6;
  local_50[6] = uVar7;
  local_50[7] = uVar8;
  *local_50 = uVar2;
  local_50[1] = uVar3;
  local_50[2] = uVar4;
  local_50[3] = uVar5;
  local_50 = (undefined4 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_1475f9cfc(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f9c16 FUN_1475f9c16 body=229 status=ok
// SIG undefined FUN_1475f9c16(void)

int * FUN_1475f9c16(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1475f9cfc FUN_1475f9cfc body=339 status=ok
// SIG undefined FUN_1475f9cfc(void)

undefined4 * FUN_1475f9cfc(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1475f9e50(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_1475f9f36(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1475f8dd2(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475f9e50 FUN_1475f9e50 body=229 status=ok
// SIG undefined FUN_1475f9e50(void)

int * FUN_1475f9e50(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1475f9f36 FUN_1475f9f36 body=93 status=ok
// SIG undefined FUN_1475f9f36(void)

undefined8 FUN_1475f9f36(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1475f8fa2(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1475f8d1c(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1475f9f94 FUN_1475f9f94 body=48 status=ok
// SIG undefined FUN_1475f9f94(void)

void FUN_1475f9f94(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1475f9fc4 FUN_1475f9fc4 body=31 status=ok
// SIG undefined FUN_1475f9fc4(void)

undefined8 FUN_1475f9fc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475f9fe4 FUN_1475f9fe4 body=903 status=ok
// SIG undefined FUN_1475f9fe4(void)

void FUN_1475f9fe4(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1b8 [32];
  ushort *local_198;
  code **local_190;
  longlong local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined1 local_16c [4];
  undefined2 *local_168;
  undefined2 *local_160;
  ushort local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined1 local_13b;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined2 local_128;
  undefined4 local_126;
  undefined2 local_122;
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_114;
  uint local_110;
  undefined1 local_10c;
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_88;
  undefined8 local_60;
  code *local_58;
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar3 = FUN_14009d2a0();
  local_150 = *(undefined2 *)(lVar3 + 0x4a);
  local_14a = *(undefined2 *)(lVar3 + 0x108);
  local_14e = *(undefined4 *)(lVar3 + 0x104);
  local_148 = **(undefined2 **)(param_2 + 0x18);
  puVar6 = (undefined2 *)*param_3;
  local_140 = puVar6[6];
  local_142 = puVar6[4];
  local_146 = *puVar6;
  local_144 = puVar6[2];
  local_13b = 0;
  local_138 = 0x6ff;
  local_134 = 0;
  local_152 = *(undefined2 *)(param_2 + 0x14);
  local_168 = &local_152;
  local_160 = &local_150;
  local_178 = param_3;
  FUN_1475f151c(&local_150,&local_128);
  local_110 = *(uint *)(param_6 + 0x290);
  bVar4 = local_114._1_1_ & 0xfe | (local_110 & 0xfffffeff) == 1;
  local_114 = CONCAT11(bVar4,(undefined1)local_114);
  local_154 = CONCAT11(bVar4,(undefined1)local_114) & 0xfdff;
  local_190 = &local_58;
  local_58 = FUN_1475fb14e;
  local_50 = (undefined2 *)CONCAT71(local_50._1_7_,3);
  local_198 = &local_154;
  local_188 = param_2;
  FUN_1475faf22(&local_128,local_16c,param_6 + 0x28,param_5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_130 = 0x10000000000;
    puVar6 = (undefined2 *)*local_178;
    iVar1 = *(int *)(local_178 + 1);
    if ((longlong)iVar1 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_150,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar1 * 4 != lVar5);
      puVar6 = (undefined2 *)*local_178;
    }
    puVar2 = local_178;
    local_128 = *(undefined2 *)(lVar3 + 0x4a);
    local_122 = *(undefined2 *)(lVar3 + 0x108);
    local_126 = *(undefined4 *)(lVar3 + 0x104);
    local_120 = **(undefined2 **)(param_2 + 0x18);
    local_118 = puVar6[6];
    local_11a = puVar6[4];
    local_11e = *puVar6;
    local_11c = puVar6[2];
    local_114 = local_114 & 0xff;
    local_110 = 0x6ff;
    local_10c = 0;
    local_e8 = 0x10000000000;
    local_c0 = 0x10000000000;
    local_88 = 0x10000000000;
    local_b8 = 0;
    uStack_b0 = 0;
    local_60 = 0x10000000000;
    FUN_1475f2b54(&local_128,local_108);
    FUN_140dad9c2(local_108,&local_150,2);
    local_152 = *(undefined2 *)(param_2 + 0x14);
    local_58 = (code *)&local_152;
    local_50 = &local_150;
    FUN_1447c44f6(local_108,&local_58);
    FUN_140dad9c2(local_108,&local_150,0x84);
    local_110 = *(uint *)(param_6 + 0x290);
    bVar4 = local_114._1_1_ & 0xfe | (local_110 & 0xfffffeff) == 1;
    local_114 = CONCAT11(bVar4,(undefined1)local_114);
    local_154 = CONCAT11(bVar4,(undefined1)local_114) & 0xfdff;
    local_58 = FUN_1475fc12c;
    local_50 = (undefined2 *)CONCAT71(local_50._1_7_,3);
    local_180 = puVar2;
    local_198 = &local_154;
    local_190 = &local_58;
    local_188 = param_2;
    FUN_1475fbefe(&local_128,local_16c,param_6 + 0x28,param_5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fa36c FUN_1475fa36c body=892 status=ok
// SIG undefined FUN_1475fa36c(void)

void FUN_1475fa36c(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined8 *local_188;
  longlong local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  longlong local_168;
  undefined8 *local_160;
  undefined2 local_152;
  undefined8 local_150;
  undefined8 *local_148;
  undefined2 local_140;
  undefined4 local_13e;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined1 local_12b;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  byte local_103;
  uint local_100;
  undefined1 local_fc;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180 = param_4;
  lVar4 = FUN_14009d2a0();
  local_140 = *(undefined2 *)(lVar4 + 0x4a);
  local_13a = *(undefined2 *)(lVar4 + 0x108);
  local_13e = *(undefined4 *)(lVar4 + 0x104);
  local_138 = **(undefined2 **)(param_2 + 0x18);
  puVar5 = (undefined2 *)*param_3;
  local_130 = puVar5[6];
  local_132 = puVar5[4];
  local_136 = *puVar5;
  local_134 = puVar5[2];
  local_12b = 0;
  local_128 = 0x6ff;
  local_124 = 0;
  local_170 = &local_150;
  local_150 = (undefined2 *)CONCAT62(local_150._2_6_,*(undefined2 *)(param_2 + 0x14));
  local_168 = (longlong)&local_150 + 2;
  local_188 = param_3;
  FUN_1475f151c(&local_140,&local_118);
  local_100 = *(uint *)(param_7 + 0x290);
  local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
  local_1a8 = param_6;
  local_1a0 = param_2;
  FUN_1432f9f5c(&local_118,&local_160,param_7 + 0x28,param_5);
  if (local_160 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_160 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_160)(local_160,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(local_180 + 4)) {
    local_120 = 0x10000000000;
    puVar5 = (undefined2 *)*local_188;
    iVar2 = *(int *)(local_188 + 1);
    if ((longlong)iVar2 != 0) {
      lVar6 = 0;
      do {
        FUN_140dba9e6(&local_140,*(undefined2 *)((longlong)puVar5 + lVar6));
        lVar6 = lVar6 + 4;
      } while ((longlong)iVar2 * 4 != lVar6);
      puVar5 = (undefined2 *)*local_188;
    }
    puVar3 = local_188;
    local_118 = *(undefined2 *)(lVar4 + 0x4a);
    local_112 = *(undefined2 *)(lVar4 + 0x108);
    local_116 = *(undefined4 *)(lVar4 + 0x104);
    local_110 = **(undefined2 **)(param_2 + 0x18);
    local_108 = puVar5[6];
    local_10a = puVar5[4];
    local_10e = *puVar5;
    local_10c = puVar5[2];
    local_103 = 0;
    local_100 = 0x6ff;
    local_fc = 0;
    local_d8 = 0x10000000000;
    local_b0 = 0x10000000000;
    local_78 = 0x10000000000;
    local_a8 = 0;
    uStack_a0 = 0;
    local_50 = 0x10000000000;
    FUN_1475f2b54(&local_118,local_f8);
    FUN_140dad9c2(local_f8,&local_140,2);
    local_152 = *(undefined2 *)(param_2 + 0x14);
    local_148 = &local_150;
    local_150 = &local_152;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_140,0x84);
    local_100 = *(uint *)(param_7 + 0x290);
    local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
    local_198 = puVar3;
    local_1a8 = param_6;
    local_1a0 = param_2;
    FUN_1432fa41e(&local_118,&local_178,param_7 + 0x28,param_5);
    if (local_178 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_178 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_178)(local_178,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


