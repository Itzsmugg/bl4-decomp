// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1477c59a2 FUN_1477c59a2 body=1496 status=ok
// SIG undefined FUN_1477c59a2(void)

void FUN_1477c59a2(longlong param_1,int param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_458 [32];
  undefined1 local_438;
  longlong local_430;
  undefined8 local_428;
  longlong *local_420;
  longlong *local_418;
  undefined8 local_410;
  longlong *local_408;
  longlong *local_400;
  undefined8 local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  longlong *local_3d8;
  longlong *local_3d0;
  longlong local_3c8;
  ulonglong uStack_3c0;
  float local_3b0;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  longlong local_398;
  undefined4 local_390;
  undefined1 local_388 [688];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  longlong local_98;
  undefined8 local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_430 = (longlong)param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x1d8) + local_430) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x1f8) + local_430) = *(undefined1 *)(param_3 + 0x2a2);
  local_3a0 = 0xffffffff;
  local_3b0 = (float)*(int *)((longlong)*(longlong **)(param_1 + 0x30) + 0x74);
  local_3ac = *(undefined4 *)(param_3 + 0x78);
  local_3a8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x100))();
  local_39c = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x90);
  local_3c8 = 0;
  uStack_3c0 = 0;
  FUN_1477c56f8(param_1,&local_3b0,param_3 + 0x58);
  plVar4 = (longlong *)FUN_14001cc68(400);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a5713d0;
  plVar5 = plVar4 + 2;
  memset(plVar5,0,0x180);
  FUN_1477cafba(plVar5);
  local_3d8 = plVar5;
  local_3d0 = plVar4;
  FUN_1446ddc76(&local_3e0,"Volume",1);
  local_438 = 1;
  FUN_147d351ca(&local_3d8,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x90),local_3e0,0);
  FUN_147d35818(&local_3d8,param_3 + 0xc0);
  plVar4 = (longlong *)FUN_14001cc68(400);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a5713d0;
  plVar5 = plVar4 + 2;
  memset(plVar5,0,0x180);
  FUN_1477cafba(plVar5);
  local_3f0 = plVar5;
  local_3e8 = plVar4;
  FUN_1446ddc76(&local_3f8,"Pitch",1);
  local_438 = 0;
  FUN_147d351ca(&local_3f0,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x90),local_3f8,0);
  FUN_147d35818(&local_3f0,param_3 + 0x118);
  plVar4 = (longlong *)FUN_14001cc68(400);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a5713d0;
  plVar5 = plVar4 + 2;
  memset(plVar5,0,0x180);
  FUN_1477cafba(plVar5);
  local_408 = plVar5;
  local_400 = plVar4;
  FUN_1446ddc76(&local_410,"HPFCutoffFrequency",1);
  local_438 = 0;
  FUN_147d351ca(&local_408,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x90),local_410,0);
  FUN_147d35818(&local_408,param_3 + 0x170);
  plVar4 = (longlong *)FUN_14001cc68(400);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a5713d0;
  plVar5 = plVar4 + 2;
  memset(plVar5,0,0x180);
  FUN_1477cafba(plVar5);
  local_420 = plVar5;
  local_418 = plVar4;
  FUN_1446ddc76(&local_428,"LPFCutoffFrequency",1);
  local_438 = 0;
  FUN_147d351ca(&local_420,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x90),local_428,0);
  FUN_147d35818(&local_420,param_3 + 0x1c8);
  local_390 = (undefined4)local_430;
  local_398 = param_1;
  FUN_1477c5f7c(local_388,param_3);
  FUN_147d34f2a(local_d8,&local_3d8);
  FUN_147d34f2a(local_c8,&local_408);
  FUN_147d34f2a(local_b8,&local_420);
  FUN_147d34f2a(local_a8,&local_3f0);
  uVar3 = uStack_3c0;
  lVar2 = local_3c8;
  local_98 = 0;
  local_90 = CONCAT44(local_90._4_4_,(int)uStack_3c0);
  if ((int)uStack_3c0 == 0) {
    local_90 = uStack_3c0 & 0xffffffff;
  }
  else {
    FUN_1477d1976(&local_98,uStack_3c0 & 0xffffffff,0);
    FUN_1477d19d8(local_98,lVar2,uVar3 & 0xffffffff);
  }
  local_88[0] = (code *)0x0;
  plVar5 = (longlong *)FUN_14001cc68(0x318,8);
  *plVar5 = (longlong)&PTR_FUN_14a570f20;
  *(undefined4 *)(plVar5 + 2) = local_390;
  plVar5[1] = local_398;
  local_78 = plVar5;
  FUN_1477c5f7c(plVar5 + 3,local_388);
  FUN_147d34f2a(plVar5 + 0x59,local_d8);
  FUN_147d34f2a(plVar5 + 0x5b,local_c8);
  FUN_147d34f2a(plVar5 + 0x5d,local_b8);
  FUN_147d34f2a(plVar5 + 0x5f,local_a8);
  plVar5[0x61] = local_98;
  local_98 = 0;
  *(undefined4 *)(plVar5 + 0x62) = (undefined4)local_90;
  *(undefined4 *)((longlong)plVar5 + 0x314) = local_90._4_4_;
  local_90 = 0;
  if (plVar5 != (longlong *)&DAT_fffffffffffffff8) {
    local_88[0] = FUN_1433550e4;
  }
  FUN_14334e164(param_1,local_88,0,0);
  if (local_88[0] != (code *)0x0) {
    plVar5 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar5 = local_68;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_14334e334(&local_398);
  plVar5 = local_418;
  if (local_418 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_418 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_418)(local_418);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_400;
  if (local_400 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_400 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_400)(local_400);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_3e8;
  if (local_3e8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3e8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_3e8)(local_3e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_3d0;
  if (local_3d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3d0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_3d0)(local_3d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1477cb5a3(local_3c8,uStack_3c0 & 0xffffffff);
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c5f7c FUN_1477c5f7c body=570 status=ok
// SIG undefined FUN_1477c5f7c(void)

undefined8 * FUN_1477c5f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  longlong lVar15;
  bool bVar16;
  
  *param_1 = *param_2;
  lVar15 = param_2[1];
  param_1[1] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  param_1[3] = 0;
  iVar2 = *(int *)(param_2 + 4);
  uVar3 = param_2[3];
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1477cb428(param_1 + 3,iVar2);
    FUN_1477cb492(param_1[3],uVar3,iVar2);
  }
  bVar16 = false;
  lVar15 = 0;
  do {
    puVar1 = param_1 + lVar15 * 2 + 5;
    param_1[lVar15 * 2 + 5] = 0;
    iVar2 = *(int *)(param_2 + lVar15 * 2 + 6);
    pvVar4 = (void *)param_2[lVar15 * 2 + 5];
    *(int *)(param_1 + lVar15 * 2 + 6) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1477cb4d4(puVar1,iVar2);
      memcpy((void *)*puVar1,pvVar4,(longlong)iVar2 * 0xc);
    }
    lVar15 = 1;
    bVar14 = !bVar16;
    bVar16 = true;
  } while (bVar14);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar6 = *(undefined4 *)(param_2 + 10);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
  param_1[0xb] = 0;
  iVar2 = *(int *)(param_2 + 0xc);
  uVar3 = param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1477cca26(param_1 + 0xb,iVar2,0);
    FUN_1477cca88(param_1[0xb],uVar3,iVar2);
  }
  uVar5 = *(undefined4 *)(param_2 + 0xd);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar7 = *(undefined4 *)(param_2 + 0xe);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar10 = *(undefined4 *)(param_2 + 0x10);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar9;
  *(undefined4 *)(param_1 + 0x10) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar11;
  *(undefined4 *)(param_1 + 0xd) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 0xe) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar8;
  param_1[0x11] = 0;
  iVar2 = *(int *)(param_2 + 0x12);
  pvVar4 = (void *)param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x11,iVar2,0);
    memcpy((void *)param_1[0x11],pvVar4,(longlong)iVar2 * 2);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x13);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x9c);
  uVar7 = *(undefined4 *)(param_2 + 0x14);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0x16);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0x16) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar11;
  *(undefined4 *)(param_1 + 0x13) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar6;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar8;
  FUN_1477cb252(param_1 + 0x17,param_2 + 0x17);
  FUN_1477cb398(param_1 + 0x43,param_2 + 0x43);
  param_1[0x4e] = param_2[0x4e];
  lVar15 = param_2[0x4f];
  param_1[0x4f] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x50] = param_2[0x50];
  lVar15 = param_2[0x51];
  param_1[0x51] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  uVar3 = param_2[0x52];
  uVar12 = param_2[0x53];
  uVar13 = param_2[0x55];
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = uVar13;
  param_1[0x52] = uVar3;
  param_1[0x53] = uVar12;
  return param_1;
}



// FUNCTION 1477c61b6 FUN_1477c61b6 body=225 status=ok
// SIG undefined FUN_1477c61b6(void)

void FUN_1477c61b6(longlong param_1,int param_2)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  int local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + -1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)param_2) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x208) + (longlong)param_2 * 4) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 0x1c0);
  *(uint *)(param_1 + 0x1c0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c4) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 0x1b8,iVar1);
  }
  *(int *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar1 * 4) = param_2;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14a570f40;
  local_68[0] = FUN_143356070;
  local_40 = param_1;
  local_38 = param_2;
  FUN_14334e164(param_1,local_68,0,0);
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c6298 FUN_1477c6298 body=285 status=ok
// SIG undefined FUN_1477c6298(void)

void FUN_1477c6298(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int *piVar2;
  undefined ***pppuVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  piVar2 = *(int **)(param_1 + 0x188);
  iVar1 = *(int *)(param_1 + 400);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    piVar4 = piVar2;
    do {
      if ((*piVar4 == (int)param_2) && (piVar4[1] == (int)((ulonglong)param_2 >> 0x20)))
      goto LAB_1477c6376;
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar2 + lVar5 * 2);
  }
  *(uint *)(param_1 + 400) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar1 + 1U) {
    FUN_1477d21ac((undefined8 *)(param_1 + 0x188),iVar1);
    piVar2 = *(int **)(param_1 + 0x188);
  }
  *(undefined8 *)(piVar2 + lVar5 * 2) = param_2;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14a570f60;
  local_78[0] = FUN_143356b30;
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  local_3c = param_4;
  FUN_14334e164(param_1,local_78,"StartAudioBus()",0);
  if (local_78[0] != (code *)0x0) {
    pppuVar3 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar3 = &local_58;
    }
    (*(code *)(*pppuVar3)[2])();
  }
LAB_1477c6376:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c63b6 FUN_1477c63b6 body=242 status=ok
// SIG undefined FUN_1477c63b6(void)

void FUN_1477c63b6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined ***pppuVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_2;
  if ((longlong)*(int *)(param_1 + 400) != 0) {
    piVar2 = *(int **)(param_1 + 0x188);
    piVar1 = piVar2 + (longlong)*(int *)(param_1 + 400) * 2;
    do {
      if ((*piVar2 == (int)param_2) && (piVar2[1] == (int)((ulonglong)param_2 >> 0x20))) {
        local_68[0] = (code *)&local_70;
        FUN_1477d2388(param_1 + 0x188,local_68);
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a570f80;
        local_38 = local_70;
        local_68[0] = FUN_143356d52;
        local_40 = param_1;
        FUN_14334e164(param_1,local_68,"StopAudioBus()",0);
        if (local_68[0] != (code *)0x0) {
          pppuVar3 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar3 = &local_48;
          }
          (*(code *)(*pppuVar3)[2])();
        }
        break;
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c64aa FUN_1477c64aa body=274 status=ok
// SIG undefined FUN_1477c64aa(void)

/* WARNING: Removing unreachable block (ram,0x0001477c6585) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x0001477c6589 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1477c64aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_88;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_2;
  lVar3 = param_2[2];
  param_2[2] = 0;
  local_68 = param_2[6];
  uStack_60 = param_2[7];
  uStack_70 = (undefined4)param_2[5];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  if (lVar2 != 0) {
    *param_2 = 0;
  }
  local_58 = local_58 & 0xffffff00;
  uStack_50 = "ChokeMPSCCommandQueue() -- Console command";
  local_48 = 0;
  local_98 = lVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar4 = 0;
  puVar4[2] = lVar2;
  puVar4[4] = lVar3;
  local_88 = 0;
  *(undefined4 *)(puVar4 + 8) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar4 + 0x44) = local_68._4_4_;
  *(undefined4 *)(puVar4 + 9) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_60._4_4_;
  puVar4[6] = local_78;
  puVar4[7] = CONCAT44(uStack_6c,uStack_70);
  if (lVar2 != 0) {
    local_98 = 0;
  }
  puVar4[0xc] = local_48;
  *(uint *)(puVar4 + 10) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x54) = uStack_54;
  *(undefined4 *)(puVar4 + 0xb) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x5c) = uStack_50._4_4_;
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  *(undefined8 **)(param_1 + 0xf8) = puVar4;
  UNLOCK();
  *puVar1 = puVar4;
  if (local_98 != 0) {
    (**(code **)(local_78 + 0x10))(&local_78);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477c65be FUN_1477c65be body=152 status=ok
// SIG undefined FUN_1477c65be(void)

void FUN_1477c65be(longlong param_1,undefined4 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xc80);
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a570fa0;
  local_58[0] = &LAB_143356e9e;
  local_30 = param_1;
  local_28 = param_2;
  FUN_14334e164(local_20,local_58,"Play()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c6658 FUN_1477c6658 body=142 status=ok
// SIG undefined FUN_1477c6658(void)

void FUN_1477c6658(longlong param_1,undefined4 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_14a570fc0;
    local_58[0] = FUN_143356f2a;
    local_30 = param_1;
    local_28 = param_2;
    FUN_14334e164(param_1,local_58,"Stop()",0);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar1 = &local_38;
      }
      (*(code *)(*pppuVar1)[2])();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c66e8 FUN_1477c66e8 body=139 status=ok
// SIG undefined FUN_1477c66e8(void)

void FUN_1477c66e8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a570fe0;
  local_58[0] = FUN_143356fc0;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  FUN_14334e164(param_1,local_58,"StopFade()",0);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c6774 FUN_1477c6774 body=135 status=ok
// SIG undefined FUN_1477c6774(void)

void FUN_1477c6774(undefined8 param_1,undefined4 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a571000;
  local_58[0] = &LAB_1433570da;
  local_30 = param_1;
  local_28 = param_2;
  FUN_14334e164(param_1,local_58,"Pause()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c67fc FUN_1477c67fc body=140 status=ok
// SIG undefined FUN_1477c67fc(void)

void FUN_1477c67fc(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a571020;
  local_58[0] = &LAB_14335714c;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  FUN_14334e164(param_1,local_58,"SetPitch()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c688a FUN_1477c688a body=140 status=ok
// SIG undefined FUN_1477c688a(void)

void FUN_1477c688a(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a571040;
  local_58[0] = &LAB_143357200;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  FUN_14334e164(param_1,local_58,"SetVolume()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c6918 FUN_1477c6918 body=140 status=ok
// SIG undefined FUN_1477c6918(void)

void FUN_1477c6918(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a571060;
  local_58[0] = &LAB_1433572a2;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  FUN_14334e164(param_1,local_58,"SetDistanceAttenuation()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c69a6 FUN_1477c69a6 body=250 status=ok
// SIG undefined FUN_1477c69a6(void)

void FUN_1477c69a6(longlong param_1,undefined4 param_2,void *param_3)

{
  longlong *plVar1;
  undefined1 auStack_188 [36];
  undefined1 local_164 [4];
  undefined1 local_160 [248];
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  memcpy(local_160,param_3,0xf8);
  local_68[0] = (undefined1 *)0x0;
  plVar1 = (longlong *)FUN_14001cc68(0x120,0x10);
  *plVar1 = (longlong)&PTR_FUN_14a571080;
  plVar1[2] = param_1;
  *(undefined4 *)(plVar1 + 3) = param_2;
  local_58 = plVar1;
  memcpy((undefined1 *)((longlong)plVar1 + 0x1c),local_164,0xfc);
  if (plVar1 != (longlong *)&DAT_fffffffffffffff0) {
    local_68[0] = &LAB_14335733a;
  }
  FUN_14334e164(param_1,local_68,"SetSpatializationParams()",0);
  if (local_68[0] != (undefined1 *)0x0) {
    plVar1 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c6aa2 FUN_1477c6aa2 body=423 status=ok
// SIG undefined FUN_1477c6aa2(void)

void FUN_1477c6aa2(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined2 local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = (void *)0x0;
  local_98 = *(int *)(param_4 + 1);
  lVar3 = (longlong)local_98;
  pvVar1 = (void *)*param_4;
  local_b0 = param_1;
  uStack_a8 = param_2;
  uStack_a4 = param_3;
  if (lVar3 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1470345a0(&local_a0,local_98,0);
    memcpy(local_a0,pvVar1,lVar3 << 2);
  }
  local_90 = CONCAT11(param_6,param_5);
  local_88[0] = (code *)0x0;
  plVar2 = (longlong *)FUN_14001cc68(0x30,8);
  pvVar1 = local_a0;
  *plVar2 = (longlong)&PTR_FUN_14a5710a0;
  *(undefined4 *)(plVar2 + 1) = (undefined4)local_b0;
  *(undefined4 *)((longlong)plVar2 + 0xc) = local_b0._4_4_;
  *(undefined4 *)(plVar2 + 2) = uStack_a8;
  *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_a4;
  plVar2[3] = 0;
  lVar3 = (longlong)local_98;
  *(int *)(plVar2 + 4) = local_98;
  local_78 = plVar2;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x24) = 0;
  }
  else {
    FUN_1470345a0(plVar2 + 3,local_98,0);
    memcpy((void *)plVar2[3],pvVar1,lVar3 << 2);
  }
  *(undefined2 *)(plVar2 + 5) = local_90;
  if (plVar2 != (longlong *)&DAT_fffffffffffffff8) {
    local_88[0] = FUN_1433573ee;
  }
  FUN_14334e164(param_1,local_88,"SetChannelMap()",0);
  if (local_88[0] != (code *)0x0) {
    plVar2 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar2 = local_68;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c6c4a FUN_1477c6c4a body=140 status=ok
// SIG undefined FUN_1477c6c4a(void)

void FUN_1477c6c4a(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a5710c0;
  local_58[0] = &LAB_14335757e;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  FUN_14334e164(param_1,local_58,"SetLPFFrequency()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c6cd8 FUN_1477c6cd8 body=140 status=ok
// SIG undefined FUN_1477c6cd8(void)

void FUN_1477c6cd8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a5710e0;
  local_58[0] = &LAB_1433575fc;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  FUN_14334e164(param_1,local_58,"SetHPFFrequency()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c6d66 FUN_1477c6d66 body=140 status=ok
// SIG undefined FUN_1477c6d66(void)

void FUN_1477c6d66(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a571100;
  local_58[0] = &LAB_14335767a;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  FUN_14334e164(param_1,local_58,"SetModLPFFrequency()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c6df4 FUN_1477c6df4 body=140 status=ok
// SIG undefined FUN_1477c6df4(void)

void FUN_1477c6df4(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a571120;
  local_58[0] = &LAB_1433576ee;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  FUN_14334e164(param_1,local_58,"SetModHPFFrequency()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c6e82 FUN_1477c6e82 body=1157 status=ok
// SIG undefined FUN_1477c6e82(void)

void FUN_1477c6e82(longlong param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined4 local_13c;
  longlong local_138;
  undefined4 local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_13c = param_2;
  plVar2 = (longlong *)FUN_14001cc68(400);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14a5713d0;
  plVar3 = plVar2 + 2;
  memset(plVar3,0,0x180);
  FUN_1477cafba(plVar3);
  local_98 = plVar3;
  local_90 = plVar2;
  FUN_1446ddc76(&local_a0,"Volume",1);
  local_148 = 1;
  FUN_147d351ca(&local_98,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x90),local_a0,0);
  FUN_147d35818(&local_98,param_3 + 8);
  plVar2 = (longlong *)FUN_14001cc68(400);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14a5713d0;
  plVar3 = plVar2 + 2;
  memset(plVar3,0,0x180);
  FUN_1477cafba(plVar3);
  local_b0 = plVar3;
  local_a8 = plVar2;
  FUN_1446ddc76(&local_b8,"Pitch",1);
  local_148 = 0;
  FUN_147d351ca(&local_b0,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x90),local_b8,0);
  FUN_147d35818(&local_b0,param_3 + 0x60);
  plVar2 = (longlong *)FUN_14001cc68(400);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14a5713d0;
  plVar3 = plVar2 + 2;
  memset(plVar3,0,0x180);
  FUN_1477cafba(plVar3);
  local_c8 = plVar3;
  local_c0 = plVar2;
  FUN_1446ddc76(&local_d0,"HPFCutoffFrequency",1);
  local_148 = 0;
  FUN_147d351ca(&local_c8,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x90),local_d0,0);
  FUN_147d35818(&local_c8,param_3 + 0xb8);
  plVar2 = (longlong *)FUN_14001cc68(400);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14a5713d0;
  plVar3 = plVar2 + 2;
  memset(plVar3,0,0x180);
  FUN_1477cafba(plVar3);
  local_e0 = plVar3;
  local_d8 = plVar2;
  FUN_1446ddc76(&local_e8,"LPFCutoffFrequency",1);
  local_148 = 0;
  FUN_147d351ca(&local_e0,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x90),local_e8,0);
  FUN_147d35818(&local_e0,param_3 + 0x110);
  local_130 = local_13c;
  local_138 = param_1;
  FUN_147d34f2a(local_128,&local_98);
  FUN_147d34f2a(local_118,&local_c8);
  FUN_147d34f2a(local_108,&local_e0);
  FUN_147d34f2a(local_f8,&local_b0);
  local_88[0] = (code *)0x0;
  plVar3 = (longlong *)FUN_14001cc68(0x58,8);
  *plVar3 = (longlong)&PTR_FUN_14a571140;
  *(undefined4 *)(plVar3 + 2) = local_130;
  plVar3[1] = local_138;
  local_78 = plVar3;
  FUN_147d34f2a(plVar3 + 3,local_128);
  FUN_147d34f2a(plVar3 + 5,local_118);
  FUN_147d34f2a(plVar3 + 7,local_108);
  FUN_147d34f2a(plVar3 + 9,local_f8);
  if (plVar3 != (longlong *)&DAT_fffffffffffffff8) {
    local_88[0] = FUN_143357762;
  }
  FUN_14334e164(param_1,local_88,"SetModulationRouting()",0);
  if (local_88[0] != (code *)0x0) {
    plVar3 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar3 = local_68;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_14334e4d4(&local_138);
  plVar3 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_d8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_90 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c7308 FUN_1477c7308 body=216 status=ok
// SIG undefined FUN_1477c7308(void)

void FUN_1477c7308(longlong param_1,undefined4 param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_3;
  lVar2 = param_3[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x30,8);
  *local_68 = (longlong)&PTR_FUN_14a571160;
  local_68[1] = param_1;
  *(undefined4 *)(local_68 + 2) = param_2;
  local_68[3] = lVar1;
  local_68[4] = lVar2;
  *(undefined1 *)(local_68 + 5) = param_4;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_14335793a;
  }
  FUN_14334e164(param_1,local_78,"SetSourceBufferListener()",0);
  if (local_78[0] != (code *)0x0) {
    plVar3 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar3 = local_58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c73e2 FUN_1477c73e2 body=140 status=ok
// SIG undefined FUN_1477c73e2(void)

void FUN_1477c73e2(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a571180;
  local_58[0] = &LAB_143357a9c;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  FUN_14334e164(param_1,local_58,"SetModVolume()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c7470 FUN_1477c7470 body=140 status=ok
// SIG undefined FUN_1477c7470(void)

void FUN_1477c7470(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a5711a0;
  local_58[0] = &LAB_143357b08;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  FUN_14334e164(param_1,local_58,"SetModPitch()",0);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c74fe FUN_1477c74fe body=284 status=ok
// SIG undefined FUN_1477c74fe(void)

void FUN_1477c74fe(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_3;
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_78 = param_3[4];
  local_88 = (undefined4)param_3[2];
  uStack_84 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_80 = (undefined4)param_3[3];
  uStack_7c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_68[0] = (code *)0x0;
  local_58 = (longlong *)FUN_14001cc68(0x40,8);
  *local_58 = (longlong)&PTR_FUN_14a5711c0;
  local_58[1] = param_1;
  *(undefined4 *)(local_58 + 2) = param_2;
  local_58[3] = lVar2;
  local_58[4] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_58[7] = local_78;
  *(undefined4 *)(local_58 + 5) = local_88;
  *(undefined4 *)((longlong)local_58 + 0x2c) = uStack_84;
  *(undefined4 *)(local_58 + 6) = uStack_80;
  *(undefined4 *)((longlong)local_58 + 0x34) = uStack_7c;
  if (local_58 != (longlong *)&DAT_fffffffffffffff8) {
    local_68[0] = FUN_143357b74;
  }
  FUN_14334e164(param_1,local_68,"SetSubmixSendInfo()",0);
  if (local_68[0] != (code *)0x0) {
    plVar4 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar4 = local_48;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c761c FUN_1477c761c body=284 status=ok
// SIG undefined FUN_1477c761c(void)

void FUN_1477c761c(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_3;
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_78 = param_3[4];
  local_88 = (undefined4)param_3[2];
  uStack_84 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_80 = (undefined4)param_3[3];
  uStack_7c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_68[0] = (code *)0x0;
  local_58 = (longlong *)FUN_14001cc68(0x40,8);
  *local_58 = (longlong)&PTR_FUN_14a5711e0;
  local_58[1] = param_1;
  *(undefined4 *)(local_58 + 2) = param_2;
  local_58[3] = lVar2;
  local_58[4] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_58[7] = local_78;
  *(undefined4 *)(local_58 + 5) = local_88;
  *(undefined4 *)((longlong)local_58 + 0x2c) = uStack_84;
  *(undefined4 *)(local_58 + 6) = uStack_80;
  *(undefined4 *)((longlong)local_58 + 0x34) = uStack_7c;
  if (local_58 != (longlong *)&DAT_fffffffffffffff8) {
    local_68[0] = FUN_143357e92;
  }
  FUN_14334e164(param_1,local_68,"ClearSubmixSendInfo()",0);
  if (local_68[0] != (code *)0x0) {
    plVar4 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar4 = local_48;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c773a FUN_1477c773a body=157 status=ok
// SIG undefined FUN_1477c773a(void)

void FUN_1477c773a(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a571200;
  local_1c = param_5;
  local_58[0] = FUN_1433581e6;
  local_30 = param_1;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  FUN_14334e164(param_5,local_58,"SetBusSendInfo()",0);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c77d8 FUN_1477c77d8 body=26 status=ok
// SIG undefined FUN_1477c77d8(void)

undefined8 FUN_1477c77d8(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0xc0 + (longlong)param_2 * 0x540);
}



// FUNCTION 1477c77f2 FUN_1477c77f2 body=27 status=ok
// SIG undefined FUN_1477c77f2(void)

undefined4 FUN_1477c77f2(longlong param_1,int param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0x370 + (longlong)param_2 * 0x540);
}



// FUNCTION 1477c780e FUN_1477c780e body=893 status=ok
// SIG undefined FUN_1477c780e(void)

void FUN_1477c780e(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  BOOL BVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar12 = (longlong)param_2 * 0x540;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x118) + lVar12);
  lVar12 = *(longlong *)(param_1 + 0x118) + lVar12;
  plVar13 = (longlong *)(lVar12 + 0x18);
  uVar3 = *(uint *)(lVar12 + 0x524);
  uVar14 = (ulonglong)uVar3;
  iVar11 = *(int *)(lVar12 + 0xbc);
  if (iVar11 + 1 < *(int *)(lVar12 + 0x28)) {
    plVar9 = (longlong *)*plVar13;
    bVar6 = true;
  }
  else {
    bVar5 = *(int *)(lVar12 + 0x28) <= iVar11;
    plVar9 = (longlong *)*plVar13;
    bVar6 = true;
    local_68 = (longlong)param_2;
    local_60 = param_1;
    do {
      if (!bVar5) {
        bVar6 = false;
      }
      if (!bVar5 && 0 < (int)uVar3) {
        lVar12 = *plVar9;
        uVar10 = 0;
        do {
          *(undefined4 *)(plVar2[0x13] + uVar10 * 4) =
               *(undefined4 *)((longlong)(int)(iVar11 * uVar3) * 4 + lVar12 + uVar10 * 4);
          uVar10 = uVar10 + 1;
        } while (uVar14 != uVar10);
        plVar9 = (longlong *)*plVar13;
        bVar6 = false;
      }
      if (plVar9 != (longlong *)0x0) {
        if (((int)plVar9[2] != -1) || (*(char *)((longlong)plVar9 + 0x14) != '\0')) {
          if (*plVar2 != 0) {
            *(undefined4 *)(*(longlong *)(local_60 + 0x208) + local_68 * 4) =
                 *(undefined4 *)(*plVar2 + 0xc0);
            FUN_1477c42ae(*plVar2);
            goto LAB_1477c795f;
          }
LAB_1477c7a6d:
          *(byte *)((longlong)plVar2 + 0x521) =
               *(byte *)((longlong)plVar2 + 0x521) & 0x7f | ((int)plVar2[0xe] == 0) << 7;
          *(undefined4 *)(plVar2 + 0xe) = 0;
          goto LAB_1477c7a93;
        }
        iVar7 = *(int *)((longlong)plVar2 + 0xbc) - (int)plVar2[5];
        iVar11 = 0;
        if (0 < iVar7) {
          iVar11 = iVar7;
        }
        *(int *)((longlong)plVar2 + 0xbc) = iVar11;
        goto LAB_1477c7872;
      }
LAB_1477c795f:
      lVar12 = *plVar2;
      if (lVar12 == 0) goto LAB_1477c7a6d;
      BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 200));
      if ((BVar8 == 0) ||
         (iVar11 = *(int *)(lVar12 + 8), LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 200)),
         iVar11 < 1 || (int)uVar3 < 1)) goto LAB_1477c7a6d;
      FUN_1477c434a(*plVar2,&local_58);
      plVar9 = local_50;
      if (plVar13 != &local_58) {
        plVar2[3] = local_58;
        local_58 = 0;
        plVar4 = (longlong *)plVar2[4];
        if (local_50 != plVar4) {
          local_50 = (longlong *)0x0;
          plVar2[4] = (longlong)plVar9;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar4 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
      plVar9 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = (longlong *)plVar2[3];
      iVar7 = (int)plVar9[1] / (int)uVar3;
      *(int *)(plVar2 + 5) = iVar7;
      iVar11 = -1;
      if ((bVar6) && (iVar11 = *(int *)((longlong)plVar2 + 0xbc) - iVar7, iVar11 < 1)) {
        iVar11 = 0;
      }
      *(int *)((longlong)plVar2 + 0xbc) = iVar11;
      bVar5 = iVar7 <= iVar11;
    } while (iVar7 <= iVar11 + 1);
  }
  if (plVar9 != (longlong *)0x0) {
LAB_1477c7872:
    iVar7 = (iVar11 + 1) * uVar3;
    if ((int)plVar9[1] < (int)(iVar7 + uVar3)) {
      if (0 < (int)uVar3) {
        uVar10 = 0;
        do {
          *(undefined4 *)(plVar2[0x13] + uVar10 * 4) = 0;
          *(undefined4 *)(plVar2[0x15] + uVar10 * 4) = 0;
          uVar10 = uVar10 + 1;
        } while (uVar14 != uVar10);
      }
    }
    else {
      lVar12 = *plVar9;
      if (bVar6) {
        if (0 < (int)uVar3) {
          uVar10 = 0;
          do {
            *(undefined4 *)(plVar2[0x13] + uVar10 * 4) =
                 *(undefined4 *)(lVar12 + (longlong)(int)(iVar11 * uVar3) * 4 + uVar10 * 4);
            *(undefined4 *)(plVar2[0x15] + uVar10 * 4) =
                 *(undefined4 *)(lVar12 + (longlong)iVar7 * 4 + uVar10 * 4);
            uVar10 = uVar10 + 1;
          } while (uVar14 != uVar10);
        }
      }
      else if ((0 < (int)uVar3) && (iVar7 != (int)plVar9[1])) {
        uVar10 = 0;
        do {
          *(undefined4 *)(plVar2[0x15] + uVar10 * 4) =
               *(undefined4 *)(lVar12 + (longlong)iVar7 * 4 + uVar10 * 4);
          uVar10 = uVar10 + 1;
        } while (uVar14 != uVar10);
      }
    }
  }
LAB_1477c7a93:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477c7b8c FUN_1477c7b8c body=776 status=ok
// SIG undefined FUN_1477c7b8c(void)

void FUN_1477c7b8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong *unaff_R13;
  ulonglong uVar13;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  uint *local_b0;
  longlong *local_a8;
  undefined1 local_9c [4];
  undefined1 local_98 [24];
  byte local_80;
  uint local_78;
  int local_74;
  undefined4 local_70;
  undefined1 local_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar10 = (longlong *)(param_1 + 0x138);
  local_d0 = param_1 + 0x170;
  do {
    FUN_1477c7e96(param_1 + 0x2b0,local_98);
    bVar7 = local_68;
    uVar6 = local_70;
    if (local_68 == 1) {
      uVar13 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),local_6c);
      if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
        lVar9 = *(longlong *)(param_1 + 0x178);
        if (*(longlong *)(param_1 + 0x178) == 0) {
          lVar9 = local_d0;
        }
        iVar11 = *(int *)(lVar9 + (ulonglong)
                                  (*(int *)(param_1 + 0x180) - 1U &
                                  (local_78 * 0x40 + local_74 + (local_78 >> 2) + 0x9e3779b9 ^
                                  local_78)) * 4);
        if (iVar11 != -1) {
          lVar9 = *plVar10;
          do {
            lVar12 = (longlong)iVar11 * 0x20;
            lVar4 = lVar9 + lVar12;
            if ((*(uint *)(lVar9 + lVar12) == local_78) &&
               (*(int *)(lVar9 + 4 + lVar12) == local_74)) {
              if (lVar4 != 0) {
                local_c8 = *(longlong *)(lVar4 + 8);
                plStack_c0 = *(longlong **)(lVar4 + 0x10);
                if (plStack_c0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
                  UNLOCK();
                }
                if (local_c8 == 0) goto LAB_1477c7c9f;
                *(undefined1 *)(local_c8 + 0x180) = local_6c;
                goto LAB_1477c7d56;
              }
              break;
            }
            iVar11 = *(int *)(lVar4 + 0x18);
          } while (iVar11 != -1);
        }
      }
      local_c8 = 0;
      plStack_c0 = (longlong *)0x0;
LAB_1477c7c9f:
      local_d8 = plVar10;
      lVar9 = FUN_14001cc68(0x188,0x10);
      FUN_1477b966a(lVar9,param_1,uVar13 & 0xffffffff,uVar6);
      plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar1 = plStack_c0;
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_14a570f00;
      plVar10[2] = lVar9;
      local_c8 = lVar9;
      if (plVar10 == plStack_c0) {
        plVar8 = plStack_c0;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar10 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar11 = *piVar2;
            UNLOCK();
joined_r0x0001477c7e80:
            plVar8 = plStack_c0;
            if (iVar11 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              plVar8 = plStack_c0;
            }
          }
        }
      }
      else {
        plVar8 = plVar10;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_c0 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            puVar5 = (undefined8 *)*plStack_c0;
            plStack_c0 = plVar10;
            (*(code *)*puVar5)(plVar1);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar11 = *piVar2;
            UNLOCK();
            plVar10 = plVar1;
            goto joined_r0x0001477c7e80;
          }
        }
      }
      plStack_c0 = plVar8;
      plVar10 = local_d8;
      local_a8 = &local_c8;
      local_b0 = &local_78;
      FUN_1477d2232(local_d8,local_9c,&local_b0);
LAB_1477c7d56:
      if (local_80 == 1) {
        FUN_147038ba2(local_c8 + 0x110,local_98);
      }
      else if (local_80 == 0) {
        FUN_14703865e(local_c8 + 0x68,local_98);
      }
      unaff_R13 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar2 = (int *)((longlong)unaff_R13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*unaff_R13 + 0x10))(unaff_R13);
          }
        }
      }
    }
    if ((local_68 & 1) != 0) {
      (*(code *)(&PTR_LAB_14a56f490)[local_80])(local_98);
    }
    if (bVar7 == 0) {
      if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1477c7e96 FUN_1477c7e96 body=126 status=ok
// SIG undefined FUN_1477c7e96(void)

longlong FUN_1477c7e96(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x20);
    *(byte *)(param_2 + 0x18) = bVar1;
    (*(code *)(&PTR_LAB_14a56f480)[bVar1])(param_2,lVar2 + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(param_2 + 0x25) = *(undefined8 *)(lVar2 + 0x2d);
    *(undefined8 *)(param_2 + 0x20) = uVar3;
    *(undefined1 *)(param_2 + 0x30) = 1;
    (*(code *)(&PTR_LAB_14a56f490)[*(byte *)(lVar2 + 0x20)])(lVar2 + 8);
    FUN_1400020a8(*(undefined8 *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = lVar2;
  }
  return param_2;
}



// FUNCTION 1477c7f14 FUN_1477c7f14 body=275 status=ok
// SIG undefined FUN_1477c7f14(void)

void FUN_1477c7f14(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  LOCK();
  *(undefined1 *)(param_1 + 0x240) = 6;
  UNLOCK();
  FUN_1477c7b8c();
  plVar1 = (longlong *)(param_1 + 0x138);
  lVar2 = param_1 + 0x148;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x160) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x160);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (uStack_40 != lVar2)) {
    do {
      FUN_1477b98f0(*(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x20));
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar3));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c8028 FUN_1477c8028 body=277 status=ok
// SIG undefined FUN_1477c8028(void)

void FUN_1477c8028(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  LOCK();
  *(undefined1 *)(param_1 + 0x240) = 8;
  UNLOCK();
  plVar1 = (longlong *)(param_1 + 0x138);
  lVar2 = param_1 + 0x148;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x160) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(param_1 + 0x160);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (uStack_40 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20);
      *(uint *)(lVar3 + 0x50) = (uint)(*(int *)(lVar3 + 0x50) == 0);
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar4));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c813e FUN_1477c813e body=281 status=ok
// SIG undefined FUN_1477c813e(void)

ulonglong FUN_1477c813e(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  bVar3 = (byte)param_2;
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x240);
  *(byte *)(param_1 + 0x240) = (bVar3 ^ 1) * '\x02' | 5;
  uVar4 = (ulonglong)CONCAT31((int3)((uint)param_2 >> 8),bVar1);
  UNLOCK();
  if ((bVar3 == 0) ||
     (uVar4 = (ulonglong)*(uint *)(param_1 + 0x140),
     *(uint *)(param_1 + 0x140) != *(uint *)(param_1 + 0x16c))) {
    if ((*(int *)(param_1 + 0x228) < 1) || (DAT_14c7610f8 != 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x21c);
      FUN_14334e584(param_1,param_2,0,uVar2);
      FUN_14334ef88(param_1,param_2,0,uVar2);
      uVar4 = FUN_14334ff96(param_1,param_2,0,uVar2);
      return uVar4;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar5 = 0;
      do {
        *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + lVar5 * 8) + 0x58) = bVar3;
        FUN_1402a8900(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + lVar5 * 8),0,DAT_14c8442c0,3,
                      0,0xffffffffffffffff,0);
        lVar5 = lVar5 + 1;
        uVar4 = (ulonglong)*(int *)(param_1 + 0x1a0);
      } while (lVar5 < (longlong)uVar4);
      if (0 < *(int *)(param_1 + 0x1a0)) {
        lVar5 = 0;
        do {
          FUN_140187fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + lVar5 * 8),1,0);
          lVar5 = lVar5 + 1;
          uVar4 = (ulonglong)*(int *)(param_1 + 0x1a0);
        } while (lVar5 < (longlong)uVar4);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1477c8258 FUN_1477c8258 body=96 status=ok
// SIG undefined FUN_1477c8258(void)

void FUN_1477c8258(longlong param_1,int param_2,undefined8 param_3,float param_4,undefined4 param_5,
                  undefined8 param_6)

{
  byte bVar1;
  longlong lVar2;
  
  if (0.0 < param_4) {
    lVar2 = (longlong)param_2 * 0x540;
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x118) + 0x520 + lVar2);
    if ((((bVar1 & 0x30) == 0) && ((bVar1 & 8) != 0)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x118) + lVar2 + 0x521) & 0x40) == 0)) {
      FUN_1477d3ffe((longlong)param_2 * 0x330 + *(longlong *)(param_1 + 0x128),param_4,param_5,
                    param_6);
      return;
    }
  }
  return;
}



// FUNCTION 1477c82b8 FUN_1477c82b8 body=80 status=ok
// SIG undefined FUN_1477c82b8(void)

undefined8 FUN_1477c82b8(longlong param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2 * 0x540;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x118) + 0x520 + lVar3);
  if ((((bVar1 & 0x30) == 0) && ((bVar1 & 8) != 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x118) + lVar3 + 0x521) & 0x40) == 0)) {
    uVar2 = FUN_1477d40aa((longlong)param_2 * 0x330 + *(longlong *)(param_1 + 0x128),param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1477c8308 FUN_1477c8308 body=391 status=ok
// SIG undefined FUN_1477c8308(void)

void FUN_1477c8308(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_a0 = param_1;
  local_98 = param_2;
  local_88 = iVar1;
  if (iVar1 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1477cca26(&local_90,iVar1,0);
    FUN_1477cca88(local_90,uVar2,iVar1);
  }
  local_78[0] = (code *)0x0;
  local_80 = param_4;
  plVar4 = (longlong *)FUN_14001cc68(0x30,8);
  iVar1 = local_88;
  lVar3 = local_90;
  *plVar4 = (longlong)&PTR_FUN_14a571260;
  *(undefined4 *)(plVar4 + 2) = local_98;
  plVar4[1] = local_a0;
  plVar4[3] = 0;
  *(int *)(plVar4 + 4) = local_88;
  local_68 = plVar4;
  if (local_88 == 0) {
    *(undefined4 *)((longlong)plVar4 + 0x24) = 0;
  }
  else {
    FUN_1477cca26(plVar4 + 3,local_88,0);
    FUN_1477cca88(plVar4[3],lVar3,iVar1);
  }
  *(undefined1 *)(plVar4 + 5) = local_80;
  if (plVar4 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_14335879e;
  }
  FUN_14334e164(param_1,local_78,"UpdateSourceEffectChain()",1);
  if (local_78[0] != (code *)0x0) {
    plVar4 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c84b6 FUN_1477c84b6 body=23 status=ok
// SIG undefined FUN_1477c84b6(void)

void FUN_1477c84b6(longlong param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0x70 + (longlong)param_2 * 0x540) = param_3;
  return;
}



// FUNCTION 1477c84ce FUN_1477c84ce body=52 status=ok
// SIG undefined FUN_1477c84ce(void)

void FUN_1477c84ce(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 * 0x540 + *(longlong *)(param_1 + 0x118);
  bVar1 = *(byte *)(lVar2 + 0x520);
  *(byte *)(lVar2 + 0x520) = (bVar1 & 0xdb | bVar1 >> 2 & 4) ^ 4;
  FUN_1478b1b7e();
  return;
}



// FUNCTION 1477c8502 FUN_1477c8502 body=247 status=ok
// SIG undefined FUN_1477c8502(void)

undefined8 FUN_1477c8502(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
    lVar7 = param_1 + 0x170;
    if (*(longlong *)(param_1 + 0x178) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x178);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x180) - 1U &
                             (param_2 * 0x40 + (param_2 >> 2) + 0x9e3779b8 ^ param_2)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x138);
      while( true ) {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar3 = lVar7 + lVar8;
        if ((*(uint *)(lVar7 + lVar8) == param_2) && (*(int *)(lVar7 + 4 + lVar8) == -1)) break;
        iVar6 = *(int *)(lVar3 + 0x18);
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (lVar3 != 0) {
        lVar7 = *(longlong *)(lVar3 + 8);
        plVar4 = *(longlong **)(lVar3 + 0x10);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (lVar7 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(lVar7 + 0x30 + (ulonglong)(*(int *)(lVar7 + 0x50) == 0) * 0x10);
        }
        if (plVar4 == (longlong *)0x0) {
          return uVar5;
        }
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return uVar5;
        }
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return uVar5;
        }
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1477c85fa FUN_1477c85fa body=127 status=ok
// SIG undefined FUN_1477c85fa(void)

longlong * FUN_1477c85fa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 == 0) {
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    *param_2 = lVar2;
    param_2[2] = *(longlong *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    lVar6 = *(longlong *)(lVar1 + 0x30);
    lVar7 = *(longlong *)(lVar1 + 0x38);
    uVar3 = *(undefined4 *)(lVar1 + 0x44);
    uVar4 = *(undefined4 *)(lVar1 + 0x48);
    uVar5 = *(undefined4 *)(lVar1 + 0x4c);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar3;
    *(undefined4 *)(param_2 + 7) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar5;
    param_2[4] = lVar6;
    param_2[5] = lVar7;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    param_2[10] = *(longlong *)(lVar1 + 0x60);
    uVar3 = *(undefined4 *)(lVar1 + 0x54);
    uVar4 = *(undefined4 *)(lVar1 + 0x58);
    uVar5 = *(undefined4 *)(lVar1 + 0x5c);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar1 + 0x50);
    *(undefined4 *)((longlong)param_2 + 0x44) = uVar3;
    *(undefined4 *)(param_2 + 9) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0x4c) = uVar5;
    *(undefined1 *)(param_2 + 0xc) = 1;
    FUN_1400020a8(*(undefined8 *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = lVar1;
  }
  return param_2;
}



// FUNCTION 1477c867a FUN_1477c867a body=75 status=ok
// SIG undefined FUN_1477c867a(void)

longlong * FUN_1477c867a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != param_1) {
    if ((char)param_2[0xc] == '\x01') {
      FUN_1477d25d4(param_1);
    }
    else if ((char)param_1[0xc] == '\x01') {
      if (*param_1 != 0) {
        plVar1 = param_1 + 4;
        if ((longlong *)param_1[2] != (longlong *)0x0) {
          plVar1 = (longlong *)param_1[2];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  return param_1;
}



// FUNCTION 1477c86c6 FUN_1477c86c6 body=80 status=ok
// SIG undefined FUN_1477c86c6(void)

longlong * FUN_1477c86c6(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1477d08f9(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1477c8718 FUN_1477c8718 body=45 status=ok
// SIG undefined FUN_1477c8718(void)

longlong FUN_1477c8718(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14619df7a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477c8746 FUN_1477c8746 body=38 status=ok
// SIG undefined FUN_1477c8746(void)

undefined8 FUN_1477c8746(undefined8 param_1,int param_2)

{
  FUN_1477b92fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477c8772 FUN_1477c8772 body=38 status=ok
// SIG undefined FUN_1477c8772(void)

undefined8 FUN_1477c8772(undefined8 param_1,int param_2)

{
  FUN_1477babbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477c8798 FUN_1477c8798 body=48 status=ok
// SIG undefined FUN_1477c8798(void)

longlong FUN_1477c8798(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa70;
  FUN_1477babbe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477c87c8 FUN_1477c87c8 body=32 status=ok
// SIG undefined FUN_1477c87c8(void)

undefined8 FUN_1477c87c8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Audio::FMixerDevice");
  return param_2;
}



// FUNCTION 1477c87e8 FUN_1477c87e8 body=38 status=ok
// SIG undefined FUN_1477c87e8(void)

undefined8 FUN_1477c87e8(undefined8 param_1,int param_2)

{
  FUN_1477bfa44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477c8816 FUN_1477c8816 body=38 status=ok
// SIG undefined FUN_1477c8816(void)

undefined8 FUN_1477c8816(undefined8 param_1,int param_2)

{
  FUN_1477c0dce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477c885a FUN_1477c885a body=38 status=ok
// SIG undefined FUN_1477c885a(void)

undefined8 FUN_1477c885a(undefined8 param_1,int param_2)

{
  FUN_1477c3d4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477c88a2 FUN_1477c88a2 body=56 status=ok
// SIG undefined FUN_1477c88a2(void)

void FUN_1477c88a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001477c88cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477c8902 FUN_1477c8902 body=47 status=ok
// SIG undefined FUN_1477c8902(void)

void FUN_1477c8902(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1477c8948 FUN_1477c8948 body=73 status=ok
// SIG undefined FUN_1477c8948(void)

undefined1 FUN_1477c8948(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1477c89ba FUN_1477c89ba body=59 status=ok
// SIG undefined FUN_1477c89ba(void)

undefined8 FUN_1477c89ba(longlong *param_1)

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



// FUNCTION 1477c8a58 FUN_1477c8a58 body=51 status=ok
// SIG undefined FUN_1477c8a58(void)

void FUN_1477c8a58(longlong *param_1)

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



// FUNCTION 1477c8a8c FUN_1477c8a8c body=75 status=ok
// SIG undefined FUN_1477c8a8c(void)

void FUN_1477c8a8c(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(byte *)(param_2 + 0x40) = (*(byte *)(param_2 + 0x40) & 0xfc) + 1;
  return;
}



// FUNCTION 1477c8ad8 FUN_1477c8ad8 body=75 status=ok
// SIG undefined FUN_1477c8ad8(void)

void FUN_1477c8ad8(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(byte *)(param_2 + 0x40) = (*(byte *)(param_2 + 0x40) & 0xfc) + 1;
  return;
}



// FUNCTION 1477c8b42 FUN_1477c8b42 body=100 status=ok
// SIG undefined FUN_1477c8b42(void)

undefined8 FUN_1477c8b42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28);
    FUN_1477c8c84(param_2 + 0x30,param_3 + 0x30);
    *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_3 + 0x40);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 1477c8bce FUN_1477c8bce body=59 status=ok
// SIG undefined FUN_1477c8bce(void)

undefined8 FUN_1477c8bce(longlong *param_1)

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



// FUNCTION 1477c8c14 FUN_1477c8c14 body=34 status=ok
// SIG undefined FUN_1477c8c14(void)

void FUN_1477c8c14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1477b532c(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1477c8c84 FUN_1477c8c84 body=84 status=ok
// SIG undefined FUN_1477c8c84(void)

undefined8 * FUN_1477c8c84(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1477c8cd8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1477c8cd8 FUN_1477c8cd8 body=90 status=ok
// SIG undefined FUN_1477c8cd8(void)

void FUN_1477c8cd8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477c8d34 FUN_1477c8d34 body=52 status=ok
// SIG undefined FUN_1477c8d34(void)

void FUN_1477c8d34(longlong *param_1)

{
  FUN_1477c8d68();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477c8d68 FUN_1477c8d68 body=89 status=ok
// SIG undefined FUN_1477c8d68(void)

void FUN_1477c8d68(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1477c8dc2 FUN_1477c8dc2 body=190 status=ok
// SIG undefined FUN_1477c8dc2(void)

longlong FUN_1477c8dc2(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1477c8e63;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1477c8e82(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1477c8e63:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1477c8e82 FUN_1477c8e82 body=301 status=ok
// SIG undefined FUN_1477c8e82(void)

undefined4 *
FUN_1477c8e82(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1477c8fb0(param_1,local_58);
  *local_50 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_50 + 2) = 0;
  *(undefined8 *)(local_50 + 4) = 0;
  local_50[6] = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1477c9096(param_1,param_3,local_50,local_58);
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
      local_50[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_50[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1477c91da(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c8fb0 FUN_1477c8fb0 body=229 status=ok
// SIG undefined FUN_1477c8fb0(void)

int * FUN_1477c8fb0(longlong *param_1,int *param_2)

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



// FUNCTION 1477c9096 FUN_1477c9096 body=185 status=ok
// SIG undefined FUN_1477c9096(void)

void FUN_1477c9096(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1477c9150(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1477c9107;
        }
        iVar8 = piVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1477c9107:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1477c9150 FUN_1477c9150 body=138 status=ok
// SIG undefined FUN_1477c9150(void)

void FUN_1477c9150(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1477c91da FUN_1477c91da body=422 status=ok
// SIG undefined FUN_1477c91da(void)

void FUN_1477c91da(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1477c9382 FUN_1477c9382 body=52 status=ok
// SIG undefined FUN_1477c9382(void)

void FUN_1477c9382(longlong *param_1)

{
  FUN_1477c93b6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477c93b6 FUN_1477c93b6 body=313 status=ok
// SIG undefined FUN_1477c93b6(void)

void FUN_1477c93b6(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c94f0 FUN_1477c94f0 body=52 status=ok
// SIG undefined FUN_1477c94f0(void)

void FUN_1477c94f0(longlong *param_1)

{
  FUN_1477c9524();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477c9524 FUN_1477c9524 body=343 status=ok
// SIG undefined FUN_1477c9524(void)

void FUN_1477c9524(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1477c967c FUN_1477c967c body=103 status=ok
// SIG undefined FUN_1477c967c(void)

void FUN_1477c967c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b39ae0();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1477c96e4(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c96e4 FUN_1477c96e4 body=76 status=ok
// SIG undefined FUN_1477c96e4(void)

void FUN_1477c96e4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b39ae0();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1477c96f8;
    }
  }
  lVar2 = 0;
LAB_1477c96f8:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1477c9730 FUN_1477c9730 body=98 status=ok
// SIG undefined FUN_1477c9730(void)

void FUN_1477c9730(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1477c97c2 FUN_1477c97c2 body=95 status=ok
// SIG undefined FUN_1477c97c2(void)

undefined8 * FUN_1477c97c2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1477c9821(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477c9896(param_1,iVar1);
      FUN_1477c98f8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477c9821 FUN_1477c9821 body=38 status=ok
// SIG undefined FUN_1477c9821(void)

void FUN_1477c9821(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1477c9848(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 1477c9848 FUN_1477c9848 body=78 status=ok
// SIG undefined FUN_1477c9848(void)

void FUN_1477c9848(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1477c9896 FUN_1477c9896 body=98 status=ok
// SIG undefined FUN_1477c9896(void)

void FUN_1477c9896(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477c98f8 FUN_1477c98f8 body=112 status=ok
// SIG undefined FUN_1477c98f8(void)

void FUN_1477c98f8(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0x38;
    do {
      cVar3 = *(char *)(param_2 + -0x30 + lVar6);
      *(char *)(param_1 + -0x30 + lVar6) = cVar3;
      if (cVar3 == '\x01') {
        *(undefined8 *)(param_1 + -0x38 + lVar6) = *(undefined8 *)(param_2 + -0x38 + lVar6);
      }
      cVar3 = *(char *)(param_2 + -0x18 + lVar6);
      *(char *)(param_1 + -0x18 + lVar6) = cVar3;
      if (cVar3 == '\x01') {
        puVar1 = (undefined8 *)(param_2 + -0x28 + lVar6);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + -0x28 + lVar6);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
      }
      *(undefined8 *)(param_1 + -0x10 + lVar6) = *(undefined8 *)(param_2 + -0x10 + lVar6);
      lVar4 = *(longlong *)(param_2 + -8 + lVar6);
      *(longlong *)(param_1 + -8 + lVar6) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(param_1 + lVar6) = *(undefined8 *)(param_2 + lVar6);
      lVar6 = lVar6 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1477c9968 FUN_1477c9968 body=111 status=ok
// SIG undefined FUN_1477c9968(void)

void FUN_1477c9968(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1477c9821(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1477c9821(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001477c99cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477c99d7 FUN_1477c99d7 body=54 status=ok
// SIG undefined FUN_1477c99d7(void)

void FUN_1477c99d7(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477c9a0e FUN_1477c9a0e body=147 status=ok
// SIG undefined FUN_1477c9a0e(void)

void FUN_1477c9a0e(longlong param_1,int param_2)

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



// FUNCTION 1477c9aa2 FUN_1477c9aa2 body=98 status=ok
// SIG undefined FUN_1477c9aa2(void)

undefined4 * FUN_1477c9aa2(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  param_1[3] = param_2[3];
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  FUN_140501b78(param_1 + 8,param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(longlong *)(param_1 + 0x28) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  return param_1;
}



// FUNCTION 1477c9b04 FUN_1477c9b04 body=146 status=ok
// SIG undefined FUN_1477c9b04(void)

void FUN_1477c9b04(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477c9b98 FUN_1477c9b98 body=289 status=ok
// SIG undefined FUN_1477c9b98(void)

undefined4 * FUN_1477c9b98(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477c9cba(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_1477c9da0(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1477c9e92(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c9cba FUN_1477c9cba body=229 status=ok
// SIG undefined FUN_1477c9cba(void)

int * FUN_1477c9cba(longlong *param_1,int *param_2)

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



// FUNCTION 1477c9da0 FUN_1477c9da0 body=127 status=ok
// SIG undefined FUN_1477c9da0(void)

undefined8 FUN_1477c9da0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1477c9e20(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477c9e20 FUN_1477c9e20 body=114 status=ok
// SIG undefined FUN_1477c9e20(void)

void FUN_1477c9e20(longlong *param_1,int param_2)

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



// FUNCTION 1477c9e92 FUN_1477c9e92 body=422 status=ok
// SIG undefined FUN_1477c9e92(void)

void FUN_1477c9e92(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1477ca03a FUN_1477ca03a body=52 status=ok
// SIG undefined FUN_1477ca03a(void)

void FUN_1477ca03a(longlong *param_1)

{
  FUN_1477ca06e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477ca06e FUN_1477ca06e body=89 status=ok
// SIG undefined FUN_1477ca06e(void)

void FUN_1477ca06e(longlong param_1)

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



// FUNCTION 1477ca0c8 FUN_1477ca0c8 body=82 status=ok
// SIG undefined FUN_1477ca0c8(void)

undefined8 * FUN_1477ca0c8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a5700d0;
  if (param_1[1] != 0) {
    FUN_140187fa0(param_1[1],1,0);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ca11e FUN_1477ca11e body=77 status=ok
// SIG undefined FUN_1477ca11e(void)

void FUN_1477ca11e(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  FUN_1477ca44a(param_1,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140187fa0(*(longlong *)(param_1 + 8),1,0);
    return;
  }
  return;
}



// FUNCTION 1477ca16c FUN_1477ca16c body=62 status=ok
// SIG undefined FUN_1477ca16c(void)

void FUN_1477ca16c(undefined8 param_1)

{
  char cVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  cVar1 = FUN_1477ca44a(param_1,0);
  if (cVar1 == '\0') {
    FUN_143350362(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001477ca1a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  return;
}



// FUNCTION 1477ca1ac FUN_1477ca1ac body=56 status=ok
// SIG undefined FUN_1477ca1ac(void)

void FUN_1477ca1ac(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_140187fa0(*(undefined8 *)(param_1 + 8),1,0);
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0xc0);
  *param_2 = *(undefined8 *)(lVar1 + 0xb8);
  return;
}



// FUNCTION 1477ca1fc FUN_1477ca1fc body=110 status=ok
// SIG undefined FUN_1477ca1fc(void)

void FUN_1477ca1fc(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b) = 0;
  param_1[8] = *param_2;
  param_1[9] = param_2[1];
  lVar1 = param_2[2];
  param_1[10] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[4];
  param_1[0xb] = param_2[3];
  param_1[0xc] = uVar2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1477ca26a FUN_1477ca26a body=38 status=ok
// SIG undefined FUN_1477ca26a(void)

undefined8 FUN_1477ca26a(undefined8 param_1,int param_2)

{
  FUN_1477ca29e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ca29e FUN_1477ca29e body=74 status=ok
// SIG undefined FUN_1477ca29e(void)

void FUN_1477ca29e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a570110;
  plVar3 = (longlong *)param_1[0x13];
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
  FUN_140187f4a(param_1);
  return;
}



// FUNCTION 1477ca2e8 FUN_1477ca2e8 body=132 status=ok
// SIG undefined FUN_1477ca2e8(void)

void FUN_1477ca2e8(longlong param_1,int param_2)

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



// FUNCTION 1477ca36e FUN_1477ca36e body=219 status=ok
// SIG undefined FUN_1477ca36e(void)

bool FUN_1477ca36e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return false;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  if (DAT_14cabb3f0 != DAT_14cabb41c) {
    puVar4 = &DAT_14cabb420;
    if (DAT_14cabb428 != (undefined *)0x0) {
      puVar4 = DAT_14cabb428;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cabb430 - 1U & *(uint *)(param_1 + 0x10)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cabb3e8 + (longlong)iVar2 * 0x20;
      if (*(uint *)(DAT_14cabb3e8 + (longlong)iVar2 * 0x20) == *(uint *)(param_1 + 0x10)) {
        if (((lVar1 + 8U & 0xfffffffffffffff7) != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
          uVar3 = 0;
          bVar5 = false;
          goto LAB_1477ca423;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  bVar5 = false;
  goto LAB_1477ca399;
  while (uVar3 = uVar3 + 8, (longlong)*(int *)(lVar1 + 0x10) * 8 != uVar3) {
LAB_1477ca423:
    if (*(longlong *)(*(longlong *)(lVar1 + 8) + uVar3) == *(longlong *)(param_1 + 8)) {
      bVar5 = (int)(~uVar3 >> 3) != 0;
      break;
    }
  }
LAB_1477ca399:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  return bVar5;
}



// FUNCTION 1477ca44a FUN_1477ca44a body=284 status=ok
// SIG undefined FUN_1477ca44a(void)

ulonglong FUN_1477ca44a(longlong param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_28;
  ulonglong local_20;
  undefined7 uVar5;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  if (DAT_14cabb3f0 != DAT_14cabb41c) {
    puVar3 = &DAT_14cabb420;
    if (DAT_14cabb428 != (undefined *)0x0) {
      puVar3 = DAT_14cabb428;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14cabb430 - 1U & *(uint *)(param_1 + 0x10)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cabb3e8 + (longlong)iVar2 * 0x20;
      if (*(uint *)(DAT_14cabb3e8 + (longlong)iVar2 * 0x20) == *(uint *)(param_1 + 0x10)) {
        if (lVar1 != -8 && lVar1 != 0) {
          local_28 = (undefined8 *)(param_1 + 8);
          iVar2 = FUN_1477ca568();
          uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
          uVar4 = CONCAT71(uVar5,0 < iVar2);
          if ((param_2 & 0 < iVar2) == 1) {
            local_38 = 0;
            local_40 = 0xffffffffffffffff;
            local_48 = 0;
            FUN_1402a8900(*(undefined8 *)(param_1 + 8),0,DAT_14c8442c0,3);
            uVar4 = CONCAT71(uVar5,1);
          }
          goto LAB_1477ca482;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  uVar4 = 0;
LAB_1477ca482:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ca568 FUN_1477ca568 body=209 status=ok
// SIG undefined FUN_1477ca568(void)

int FUN_1477ca568(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 1477ca63a FUN_1477ca63a body=82 status=ok
// SIG undefined FUN_1477ca63a(void)

undefined8 * FUN_1477ca63a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a5700d0;
  if (param_1[1] != 0) {
    FUN_140187fa0(param_1[1],1,0);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ca690 FUN_1477ca690 body=56 status=ok
// SIG undefined FUN_1477ca690(void)

void FUN_1477ca690(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_140187fa0(*(undefined8 *)(param_1 + 8),1,0);
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0xc0);
  *param_2 = *(undefined8 *)(lVar1 + 0xb8);
  return;
}



// FUNCTION 1477ca6c8 FUN_1477ca6c8 body=82 status=ok
// SIG undefined FUN_1477ca6c8(void)

undefined8 * FUN_1477ca6c8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a5700d0;
  if (param_1[1] != 0) {
    FUN_140187fa0(param_1[1],1,0);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ca720 FUN_1477ca720 body=82 status=ok
// SIG undefined FUN_1477ca720(void)

undefined8 * FUN_1477ca720(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a5700d0;
  if (param_1[1] != 0) {
    FUN_140187fa0(param_1[1],1,0);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ca778 FUN_1477ca778 body=45 status=ok
// SIG undefined FUN_1477ca778(void)

void FUN_1477ca778(longlong param_1,undefined1 *param_2)

{
  FUN_140187fa0(*(undefined8 *)(param_1 + 8),1,0);
  *param_2 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x80);
  return;
}



// FUNCTION 1477ca7a6 FUN_1477ca7a6 body=295 status=ok
// SIG undefined FUN_1477ca7a6(void)

undefined4 * FUN_1477ca7a6(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477ca8ce(local_40);
  uVar6 = *(uint *)*param_2;
  *local_38 = uVar6;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_1477ca9dc(uVar6,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = DAT_14cabb3f0 - DAT_14cabb41c;
    iVar8 = 1;
    if (3 < uVar4) {
      uVar7 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar8 <= DAT_14cabb430)) {
      uVar6 = DAT_14cabb430 - 1U & uVar6;
      local_38[7] = uVar6;
      puVar5 = DAT_14cabb428;
      if (DAT_14cabb428 == (undefined *)0x0) {
        puVar5 = &DAT_14cabb420;
      }
      local_38[6] = *(uint *)(puVar5 + ((longlong)DAT_14cabb430 - 1U & (longlong)(int)uVar6) * 4);
      puVar5 = DAT_14cabb428;
      if (DAT_14cabb428 == (undefined *)0x0) {
        puVar5 = &DAT_14cabb420;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14cabb430 - 1U & (longlong)(int)uVar6) * 4) = local_44
      ;
    }
    else {
      DAT_14cabb430 = iVar8;
      FUN_1477cab06();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ca8ce FUN_1477ca8ce body=269 status=ok
// SIG undefined FUN_1477ca8ce(void)

int * FUN_1477ca8ce(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cabb418;
  iVar4 = DAT_14cabb3f0;
  if (DAT_14cabb41c == 0) {
    iVar2 = DAT_14cabb3f0 + 1;
    bVar7 = DAT_14cabb3f4 == DAT_14cabb3f0;
    DAT_14cabb3f0 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cabb3e8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cabb3f8,1);
    puVar3 = DAT_14cabb408;
    if (DAT_14cabb408 == (undefined *)0x0) {
      puVar3 = &DAT_14cabb3f8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cabb418;
    DAT_14cabb418 = *(int *)(DAT_14cabb3e8 + 4 + lVar6 * 0x20);
    DAT_14cabb41c = DAT_14cabb41c + -1;
    iVar4 = iVar2;
    if (DAT_14cabb41c != 0) {
      *(undefined4 *)(DAT_14cabb3e8 + (longlong)DAT_14cabb418 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cabb3f8;
  if (DAT_14cabb408 != (undefined *)0x0) {
    puVar3 = DAT_14cabb408;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cabb3e8;
  return param_1;
}



// FUNCTION 1477ca9dc FUN_1477ca9dc body=170 status=ok
// SIG undefined FUN_1477ca9dc(void)

undefined8 FUN_1477ca9dc(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  if ((DAT_14cabb3f0 - DAT_14cabb41c != 1) && (DAT_14cabb3f0 != DAT_14cabb41c)) {
    puVar6 = &DAT_14cabb420;
    if (DAT_14cabb428 != (undefined *)0x0) {
      puVar6 = DAT_14cabb428;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14cabb430 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(DAT_14cabb3e8 + (longlong)iVar7 * 0x20);
        if (*(int *)(DAT_14cabb3e8 + (longlong)iVar7 * 0x20) == *param_2) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_2;
          iVar3 = param_2[1];
          iVar4 = param_2[2];
          iVar5 = param_2[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_2 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1477caa86(*param_3);
          *param_3 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477caa86 FUN_1477caa86 body=128 status=ok
// SIG undefined FUN_1477caa86(void)

void FUN_1477caa86(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cabb3e8;
  if (DAT_14cabb41c != 0) {
    *(int *)(DAT_14cabb3e8 + (longlong)DAT_14cabb418 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cabb41c) {
    iVar4 = DAT_14cabb418;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cabb41c = DAT_14cabb41c + 1;
  puVar3 = &DAT_14cabb3f8;
  if (DAT_14cabb408 != (undefined *)0x0) {
    puVar3 = DAT_14cabb408;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cabb418 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1477cab06 FUN_1477cab06 body=467 status=ok
// SIG undefined FUN_1477cab06(void)

void FUN_1477cab06(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabb428 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cabb428,0,0,4);
  }
  uVar2 = DAT_14cabb430;
  uVar3 = local_50;
  if (DAT_14cabb430 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cabb420,0,DAT_14cabb430,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cabb428;
        if (DAT_14cabb428 == (undefined *)0x0) {
          puVar5 = &DAT_14cabb420;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cabb430 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cabb3f8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cabb410 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cabb3e8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)(int)DAT_14cabb430 - 1U & (longlong)*(int *)(lVar1 + lVar6);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cabb428;
        if (DAT_14cabb428 == (undefined *)0x0) {
          puVar5 = &DAT_14cabb420;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cabb430 - 1U & uVar9) * 4);
        puVar5 = DAT_14cabb428;
        if (DAT_14cabb428 == (undefined *)0x0) {
          puVar5 = &DAT_14cabb420;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cabb430 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477cacda FUN_1477cacda body=95 status=ok
// SIG undefined FUN_1477cacda(void)

void FUN_1477cacda(longlong param_1,uint param_2)

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



// FUNCTION 1477cad3a FUN_1477cad3a body=196 status=ok
// SIG undefined FUN_1477cad3a(void)

void FUN_1477cad3a(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  
  if (DAT_14cabb3f0 != DAT_14cabb41c) {
    puVar3 = &DAT_14cabb420;
    if (DAT_14cabb428 != (undefined *)0x0) {
      puVar3 = DAT_14cabb428;
    }
    for (iVar1 = *(int *)(puVar3 + ((longlong)param_1 & (longlong)DAT_14cabb430 - 1U) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14cabb3e8 + 0x18)) {
      if (*(int *)(DAT_14cabb3e8 + (longlong)iVar1 * 0x20) == param_1) {
        puVar3 = &DAT_14cabb420;
        if (DAT_14cabb428 != (undefined *)0x0) {
          puVar3 = DAT_14cabb428;
        }
        lVar5 = (longlong)*(int *)(DAT_14cabb3e8 + 0x1c + (longlong)iVar1 * 0x20);
        iVar4 = *(int *)(puVar3 + lVar5 * 4);
        if (iVar4 == iVar1) {
          puVar2 = (undefined4 *)(puVar3 + lVar5 * 4);
        }
        else {
          do {
            lVar5 = (longlong)iVar4;
            iVar4 = *(int *)(DAT_14cabb3e8 + 0x18 + lVar5 * 0x20);
          } while (iVar4 != iVar1);
          puVar2 = (undefined4 *)(DAT_14cabb3e8 + lVar5 * 0x20 + 0x18);
        }
        *puVar2 = *(undefined4 *)(DAT_14cabb3e8 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_1477cadfe();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477cadfe FUN_1477cadfe body=48 status=ok
// SIG undefined FUN_1477cadfe(void)

void FUN_1477cadfe(int param_1)

{
  if (*(longlong *)(DAT_14cabb3e8 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1477caa86(param_1);
  return;
}



// FUNCTION 1477cae2e FUN_1477cae2e body=52 status=ok
// SIG undefined FUN_1477cae2e(void)

void FUN_1477cae2e(longlong *param_1)

{
  FUN_1477cae62();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477cae62 FUN_1477cae62 body=343 status=ok
// SIG undefined FUN_1477cae62(void)

void FUN_1477cae62(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1477cafba FUN_1477cafba body=125 status=ok
// SIG undefined FUN_1477cafba(void)

undefined8 * FUN_1477cafba(undefined8 *param_1)

{
  *param_1 = &DAT_3f800000ffffffff;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_1470441e4(param_1 + 0xe);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2a),4000);
  return param_1;
}



// FUNCTION 1477cb038 FUN_1477cb038 body=9 status=ok
// SIG undefined FUN_1477cb038(void)

void FUN_1477cb038(longlong param_1)

{
  FUN_1477cb060(param_1 + 0x10);
  return;
}



// FUNCTION 1477cb042 FUN_1477cb042 body=29 status=ok
// SIG undefined FUN_1477cb042(void)

undefined8 FUN_1477cb042(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477cb060 FUN_1477cb060 body=92 status=ok
// SIG undefined FUN_1477cb060(void)

void FUN_1477cb060(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  FUN_14704513c(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1477cb0bc(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477cb0bc FUN_1477cb0bc body=54 status=ok
// SIG undefined FUN_1477cb0bc(void)

void FUN_1477cb0bc(longlong *param_1)

{
  FUN_1477cb0f2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477cb0f2 FUN_1477cb0f2 body=349 status=ok
// SIG undefined FUN_1477cb0f2(void)

void FUN_1477cb0f2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_1470451b4((longlong)iStack_54 * 0x110 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1403c5a5e(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1477cb252 FUN_1477cb252 body=326 status=ok
// SIG undefined FUN_1477cb252(void)

undefined4 * FUN_1477cb252(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0xffffffff00000080;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  FUN_1477ce3e2(param_1 + 2,param_2 + 2);
  param_1[0x16] = param_2[0x16];
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0xffffffff00000080;
  param_1[0x25] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  FUN_1477ce3e2(param_1 + 0x18,param_2 + 0x18);
  param_1[0x2c] = param_2[0x2c];
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0xffffffff00000080;
  param_1[0x3b] = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  param_1[0x40] = 0;
  FUN_1477ce3e2(param_1 + 0x2e,param_2 + 0x2e);
  param_1[0x42] = param_2[0x42];
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x4f) = 0xffffffff00000080;
  param_1[0x51] = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0;
  FUN_1477ce3e2(param_1 + 0x44,param_2 + 0x44);
  return param_1;
}



// FUNCTION 1477cb398 FUN_1477cb398 body=144 status=ok
// SIG undefined FUN_1477cb398(void)

undefined4 * FUN_1477cb398(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  lVar2 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_1477cb53e(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = param_2[0x12];
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = iVar1;
  if (iVar1 == 0) {
    param_1[0x13] = 0;
  }
  else {
    FUN_1477c9896(param_1 + 0x10,iVar1,0);
    FUN_1477c98f8(*(undefined8 *)(param_1 + 0x10),uVar3,iVar1);
  }
  param_1[0x14] = param_2[0x14];
  return param_1;
}



// FUNCTION 1477cb428 FUN_1477cb428 body=106 status=ok
// SIG undefined FUN_1477cb428(void)

undefined8 FUN_1477cb428(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x28,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x28)) {
    uVar5 = uVar2 / 0x28 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x28,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1477cb492 FUN_1477cb492 body=66 status=ok
// SIG undefined FUN_1477cb492(void)

void FUN_1477cb492(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = 0;
  do {
    *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
    lVar2 = *(longlong *)(param_2 + 8 + lVar4);
    *(longlong *)(param_1 + 8 + lVar4) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
      UNLOCK();
    }
    lVar2 = param_1 + lVar4;
    lVar1 = param_2 + lVar4;
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    lVar4 = lVar4 + 0x28;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1477cb4d4 FUN_1477cb4d4 body=106 status=ok
// SIG undefined FUN_1477cb4d4(void)

undefined8 FUN_1477cb4d4(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0xc)) {
    uVar5 = uVar2 / 0xc & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0xc,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1477cb53e FUN_1477cb53e body=101 status=ok
// SIG undefined FUN_1477cb53e(void)

undefined8 * FUN_1477cb53e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *(undefined8 *)((longlong)param_1 + 5) = *(undefined8 *)((longlong)param_2 + 5);
  *param_1 = uVar2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1477c9896(param_1 + 2,iVar1,0);
    FUN_1477c98f8(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1477cb5a3 FUN_1477cb5a3 body=73 status=ok
// SIG undefined FUN_1477cb5a3(void)

void FUN_1477cb5a3(longlong param_1,int param_2)

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



// FUNCTION 1477cb5ec FUN_1477cb5ec body=319 status=ok
// SIG undefined FUN_1477cb5ec(void)

undefined4 * FUN_1477cb5ec(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477cb72c(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (uint)uVar2;
  uVar11 = (uVar11 >> 2) + uVar11 * 0x40 + (int)((ulonglong)uVar2 >> 0x20) + 0x9e3779b9 ^ uVar11;
  cVar6 = FUN_1477cb812(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
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
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1477cb916(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cb72c FUN_1477cb72c body=229 status=ok
// SIG undefined FUN_1477cb72c(void)

int * FUN_1477cb72c(longlong *param_1,int *param_2)

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



// FUNCTION 1477cb812 FUN_1477cb812 body=145 status=ok
// SIG undefined FUN_1477cb812(void)

undefined8 FUN_1477cb812(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar2 = *param_1;
      do {
        lVar9 = (longlong)iVar8 * 0x20;
        piVar1 = (int *)(lVar2 + lVar9);
        if ((*(int *)(lVar2 + lVar9) == *param_3) && (*(int *)(lVar2 + 4 + lVar9) == param_3[1])) {
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_1477cb8a4(iVar3,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar1[6];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477cb8a4 FUN_1477cb8a4 body=114 status=ok
// SIG undefined FUN_1477cb8a4(void)

void FUN_1477cb8a4(longlong *param_1,int param_2)

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



// FUNCTION 1477cb916 FUN_1477cb916 body=461 status=ok
// SIG undefined FUN_1477cb916(void)

void FUN_1477cb916(longlong *param_1)

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
        uVar2 = *(uint *)(lVar3 + lVar7);
        uVar10 = (longlong)
                 (int)(uVar2 * 0x40 + *(int *)(lVar3 + 4 + lVar7) + (uVar2 >> 2) + 0x9e3779b9 ^
                      uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1477cbae4 FUN_1477cbae4 body=118 status=ok
// SIG undefined FUN_1477cbae4(void)

void FUN_1477cbae4(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_2;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)(uVar1 * 0x40 + param_2[1] + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1)
                    & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x20;
        if ((*(uint *)(lVar3 + lVar5) == uVar1) && (*(uint *)(lVar3 + 4 + lVar5) == param_2[1])) {
          FUN_1477cbb5a();
          return;
        }
        iVar2 = *(int *)(lVar5 + lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1477cbb5a FUN_1477cbb5a body=90 status=ok
// SIG undefined FUN_1477cbb5a(void)

void FUN_1477cbb5a(longlong *param_1,int param_2)

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
  FUN_1477cb8a4();
  return;
}



// FUNCTION 1477cbbb4 FUN_1477cbbb4 body=114 status=ok
// SIG undefined FUN_1477cbbb4(void)

void FUN_1477cbbb4(longlong *param_1,int param_2)

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



// FUNCTION 1477cbc26 FUN_1477cbc26 body=49 status=ok
// SIG undefined FUN_1477cbc26(void)

void FUN_1477cbc26(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (*(code *)(&PTR_LAB_14a56f490)[*(byte *)(param_1 + 0x18)])(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1477cbc58 FUN_1477cbc58 body=102 status=ok
// SIG undefined FUN_1477cbc58(void)

void FUN_1477cbc58(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1477cbcbe(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1477cbcbe FUN_1477cbcbe body=90 status=ok
// SIG undefined FUN_1477cbcbe(void)

void FUN_1477cbcbe(longlong *param_1,int param_2)

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
  FUN_1477cbd18();
  return;
}



// FUNCTION 1477cbd18 FUN_1477cbd18 body=73 status=ok
// SIG undefined FUN_1477cbd18(void)

void FUN_1477cbd18(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  FUN_1477cbc26(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_1477cbbb4(param_1,param_2);
  return;
}



// FUNCTION 1477cbd62 FUN_1477cbd62 body=48 status=ok
// SIG undefined FUN_1477cbd62(void)

void FUN_1477cbd62(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 1477cbd92 FUN_1477cbd92 body=89 status=ok
// SIG undefined FUN_1477cbd92(void)

void FUN_1477cbd92(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1477cbdeb FUN_1477cbdeb body=72 status=ok
// SIG undefined FUN_1477cbdeb(void)

void FUN_1477cbdeb(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2 * 8) = 0;
    lVar1 = *(longlong *)(param_2 + lVar2 * 8);
    if (lVar1 != 0) {
      FUN_1401924dc(lVar1);
      *(longlong *)(param_1 + lVar2 * 8) = lVar1;
    }
    lVar2 = lVar2 + 1;
  } while (param_3 != (int)lVar2);
  return;
}



// FUNCTION 1477cbe34 FUN_1477cbe34 body=48 status=ok
// SIG undefined FUN_1477cbe34(void)

void FUN_1477cbe34(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1477cbe64 FUN_1477cbe64 body=132 status=ok
// SIG undefined FUN_1477cbe64(void)

void FUN_1477cbe64(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar5 + uVar3) == *param_2) {
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
    FUN_1477cbee8(param_1,iVar1);
    lVar5 = *param_1;
  }
  *(undefined8 *)(lVar5 + lVar4 * 8) = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    FUN_1401924dc(lVar2);
    *(longlong *)(lVar5 + lVar4 * 8) = lVar2;
  }
  return;
}



// FUNCTION 1477cbee8 FUN_1477cbee8 body=132 status=ok
// SIG undefined FUN_1477cbee8(void)

void FUN_1477cbee8(longlong param_1,int param_2)

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



// FUNCTION 1477cbf6e FUN_1477cbf6e body=215 status=ok
// SIG undefined FUN_1477cbf6e(void)

void FUN_1477cbf6e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (lVar11 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      lVar3 = (longlong)iVar8;
      iVar4 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      iVar9 = iVar8;
      lVar6 = lVar3;
      do {
        lVar6 = lVar6 + 1;
        iVar10 = iVar4;
        if (lVar11 <= lVar6) break;
        iVar9 = iVar9 + 1;
        iVar10 = iVar9;
      } while (bVar7 == (plVar2[lVar6] == *(longlong *)*param_2));
      iVar4 = iVar10 - iVar8;
      if (bVar7 == false) {
        if (iVar5 != iVar8) {
          memmove(plVar2 + iVar5,plVar2 + lVar3,(longlong)iVar4 << 3);
        }
        iVar5 = iVar5 + iVar4;
      }
      else {
        FUN_145caaaad(plVar2 + lVar3,iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar8 = iVar10;
    } while (lVar6 < lVar11);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 1477cc046 FUN_1477cc046 body=173 status=ok
// SIG undefined FUN_1477cc046(void)

void FUN_1477cc046(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  local_40 = (int)param_3[1];
  lVar1 = (longlong)local_40;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_1477cc0f4(param_1,param_2,&local_48);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cc0f4 FUN_1477cc0f4 body=316 status=ok
// SIG undefined FUN_1477cc0f4(void)

void FUN_1477cc0f4(longlong *param_1,undefined1 param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  void *_Src;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [43];
  undefined1 local_5d;
  uint local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  local_5d = param_2;
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    pvVar6 = (void *)0x0;
    do {
      local_5c = (uint)pvVar6;
      lVar7 = uVar5 * 0x10 + -8;
      uVar9 = uVar5;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0))) {
        local_58 = (void *)0x0;
        local_50 = (int)param_3[1];
        lVar8 = (longlong)local_50;
        _Src = (void *)*param_3;
        if (lVar8 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar8 * 2);
          pvVar6 = _Src;
        }
        pvVar6 = (void *)CONCAT71((int7)((ulonglong)pvVar6 >> 8),local_5d);
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,pvVar6);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_5c & 1) != 0) goto LAB_1477cc1ed;
          goto LAB_1477cc1fc;
        }
      }
      uVar5 = uVar9 - 1;
      pvVar6 = (void *)CONCAT71((int7)((ulonglong)pvVar6 >> 8),1);
    } while (1 < uVar9);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1477cc1ed:
    FUN_14474d06a(param_1,0);
  }
LAB_1477cc1fc:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cc232 FUN_1477cc232 body=162 status=ok
// SIG undefined FUN_1477cc232(void)

void FUN_1477cc232(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = (int)param_2[1];
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_1477cc2d6(param_1,&local_40);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cc2d6 FUN_1477cc2d6 body=306 status=ok
// SIG undefined FUN_1477cc2d6(void)

void FUN_1477cc2d6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [44];
  uint local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar4 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar4 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    plVar6 = (longlong *)0x0;
    do {
      local_5c = (uint)plVar6;
      lVar8 = uVar4 * 0x10 + -8;
      uVar7 = uVar4;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar5 = *(longlong **)(*param_1 + -8 + lVar8), plVar5 != (longlong *)0x0))) {
        local_58 = (void *)0x0;
        local_50 = (int)param_2[1];
        lVar9 = (longlong)local_50;
        _Src = (void *)*param_2;
        if (lVar9 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar9 * 2);
        }
        cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,&local_58);
        plVar6 = plVar5;
        if (cVar3 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar2 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar2) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_5c & 1) != 0) goto LAB_1477cc3c5;
          goto LAB_1477cc3d4;
        }
      }
      uVar4 = uVar7 - 1;
      plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1477cc3c5:
    FUN_14474d06a(param_1,0);
  }
LAB_1477cc3d4:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cc40a FUN_1477cc40a body=175 status=ok
// SIG undefined FUN_1477cc40a(void)

void FUN_1477cc40a(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  local_40 = (int)param_2[1];
  lVar1 = (longlong)local_40;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_1477cc4ba(param_1,&local_48,param_3);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cc4ba FUN_1477cc4ba body=318 status=ok
// SIG undefined FUN_1477cc4ba(void)

void FUN_1477cc4ba(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  void **ppvVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [43];
  undefined1 local_5d;
  uint local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  local_5d = param_3;
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    ppvVar6 = (void **)0x0;
    do {
      local_5c = (uint)ppvVar6;
      lVar7 = uVar5 * 0x10 + -8;
      uVar9 = uVar5;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0))) {
        local_58 = (void *)0x0;
        local_50 = (int)param_2[1];
        lVar8 = (longlong)local_50;
        _Src = (void *)*param_2;
        if (lVar8 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar8 * 2);
        }
        ppvVar6 = &local_58;
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_58);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_5c & 1) != 0) goto LAB_1477cc5b5;
          goto LAB_1477cc5c4;
        }
      }
      uVar5 = uVar9 - 1;
      ppvVar6 = (void **)CONCAT71((int7)((ulonglong)ppvVar6 >> 8),1);
    } while (1 < uVar9);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1477cc5b5:
    FUN_14474d06a(param_1,0);
  }
LAB_1477cc5c4:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cc5f9 FUN_1477cc5f9 body=38 status=ok
// SIG undefined FUN_1477cc5f9(void)

void FUN_1477cc5f9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1477b532c(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 1477cc620 FUN_1477cc620 body=115 status=ok
// SIG undefined FUN_1477cc620(void)

void FUN_1477cc620(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477cc693 FUN_1477cc693 body=52 status=ok
// SIG undefined FUN_1477cc693(void)

void FUN_1477cc693(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1477cc6c8(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 1477cc6c8 FUN_1477cc6c8 body=251 status=ok
// SIG undefined FUN_1477cc6c8(void)

undefined8 * FUN_1477cc6c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = param_2[4];
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1477c8cd8(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 1477cc7c4 FUN_1477cc7c4 body=89 status=ok
// SIG undefined FUN_1477cc7c4(void)

void FUN_1477cc7c4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1477cc81e FUN_1477cc81e body=124 status=ok
// SIG undefined FUN_1477cc81e(void)

void FUN_1477cc81e(longlong param_1,int param_2)

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
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477cc89c FUN_1477cc89c body=24 status=ok
// SIG undefined FUN_1477cc89c(void)

void FUN_1477cc89c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477cc8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477cc8b4 FUN_1477cc8b4 body=29 status=ok
// SIG undefined FUN_1477cc8b4(void)

undefined8 FUN_1477cc8b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477cc8d1 FUN_1477cc8d1 body=73 status=ok
// SIG undefined FUN_1477cc8d1(void)

void FUN_1477cc8d1(longlong param_1,int param_2)

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



// FUNCTION 1477cc91a FUN_1477cc91a body=132 status=ok
// SIG undefined FUN_1477cc91a(void)

void FUN_1477cc91a(longlong param_1,int param_2)

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



// FUNCTION 1477cc9a0 FUN_1477cc9a0 body=132 status=ok
// SIG undefined FUN_1477cc9a0(void)

void FUN_1477cc9a0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477cca26 FUN_1477cca26 body=98 status=ok
// SIG undefined FUN_1477cca26(void)

void FUN_1477cca26(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1477cca88 FUN_1477cca88 body=109 status=ok
// SIG undefined FUN_1477cca88(void)

void FUN_1477cca88(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(uint *)(param_1 + 8 + lVar3) =
           *(uint *)(param_1 + 8 + lVar3) & 0xfffffffe | *(uint *)(param_2 + 8 + lVar3) & 1;
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1477ccaf6 FUN_1477ccaf6 body=132 status=ok
// SIG undefined FUN_1477ccaf6(void)

void FUN_1477ccaf6(longlong param_1,int param_2)

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



// FUNCTION 1477ccb7c FUN_1477ccb7c body=62 status=ok
// SIG undefined FUN_1477ccb7c(void)

void FUN_1477ccb7c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477ccbba(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1477ccbba FUN_1477ccbba body=93 status=ok
// SIG undefined FUN_1477ccbba(void)

ulonglong FUN_1477ccbba(uint param_1,uint param_2)

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



// FUNCTION 1477ccc18 FUN_1477ccc18 body=128 status=ok
// SIG undefined FUN_1477ccc18(void)

void FUN_1477ccc18(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14113f0c0();
  if (cVar1 != '\0') {
    local_38 = param_2;
    local_30 = param_3;
    plVar2 = (longlong *)FUN_14479d2ce(param_1);
    uVar3 = FUN_14477b072(plVar2,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar2 + 0x248))(plVar2,uVar3,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ccc9a FUN_1477ccc9a body=76 status=ok
// SIG undefined FUN_1477ccc9a(void)

void FUN_1477ccc9a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b399f6();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1477cccae;
    }
  }
  lVar2 = 0;
LAB_1477cccae:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1477ccce6 FUN_1477ccce6 body=38 status=ok
// SIG undefined FUN_1477ccce6(void)

void FUN_1477ccce6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147041ad4(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 1477ccd0c FUN_1477ccd0c body=112 status=ok
// SIG undefined FUN_1477ccd0c(void)

void FUN_1477ccd0c(longlong param_1,uint param_2)

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



// FUNCTION 1477ccd7c FUN_1477ccd7c body=147 status=ok
// SIG undefined FUN_1477ccd7c(void)

void FUN_1477ccd7c(longlong param_1,int param_2)

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



// FUNCTION 1477cce10 FUN_1477cce10 body=132 status=ok
// SIG undefined FUN_1477cce10(void)

void FUN_1477cce10(longlong param_1,int param_2)

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



// FUNCTION 1477cce96 FUN_1477cce96 body=96 status=ok
// SIG undefined FUN_1477cce96(void)

void FUN_1477cce96(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1477ccef6 FUN_1477ccef6 body=132 status=ok
// SIG undefined FUN_1477ccef6(void)

void FUN_1477ccef6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477ccf7c FUN_1477ccf7c body=303 status=ok
// SIG undefined FUN_1477ccf7c(void)

undefined4 * FUN_1477ccf7c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477cd0ac(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_1477cd192(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1477cd2c2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cd0ac FUN_1477cd0ac body=229 status=ok
// SIG undefined FUN_1477cd0ac(void)

int * FUN_1477cd0ac(longlong *param_1,int *param_2)

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



// FUNCTION 1477cd192 FUN_1477cd192 body=189 status=ok
// SIG undefined FUN_1477cd192(void)

undefined8 FUN_1477cd192(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_1477cd250(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477cd250 FUN_1477cd250 body=114 status=ok
// SIG undefined FUN_1477cd250(void)

void FUN_1477cd250(longlong *param_1,int param_2)

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



// FUNCTION 1477cd2c2 FUN_1477cd2c2 body=422 status=ok
// SIG undefined FUN_1477cd2c2(void)

void FUN_1477cd2c2(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1477cd46a FUN_1477cd46a body=103 status=ok
// SIG undefined FUN_1477cd46a(void)

undefined8 FUN_1477cd46a(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1477cd4d2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477cd4d2 FUN_1477cd4d2 body=90 status=ok
// SIG undefined FUN_1477cd4d2(void)

void FUN_1477cd4d2(longlong *param_1,int param_2)

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
  FUN_1477cd52c();
  return;
}



// FUNCTION 1477cd52c FUN_1477cd52c body=78 status=ok
// SIG undefined FUN_1477cd52c(void)

void FUN_1477cd52c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_1477cd250(param_1,param_2);
  return;
}



// FUNCTION 1477cd57a FUN_1477cd57a body=322 status=ok
// SIG undefined FUN_1477cd57a(void)

void FUN_1477cd57a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1477cd6be FUN_1477cd6be body=311 status=ok
// SIG undefined FUN_1477cd6be(void)

void FUN_1477cd6be(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cd7f6 FUN_1477cd7f6 body=287 status=ok
// SIG undefined FUN_1477cd7f6(void)

undefined4 * FUN_1477cd7f6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477cd916(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_1477cd9fc(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1477cdaee(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cd916 FUN_1477cd916 body=230 status=ok
// SIG undefined FUN_1477cd916(void)

int * FUN_1477cd916(longlong *param_1,int *param_2)

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



// FUNCTION 1477cd9fc FUN_1477cd9fc body=128 status=ok
// SIG undefined FUN_1477cd9fc(void)

undefined8 FUN_1477cd9fc(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1477cda7c(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477cda7c FUN_1477cda7c body=114 status=ok
// SIG undefined FUN_1477cda7c(void)

void FUN_1477cda7c(longlong *param_1,int param_2)

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



// FUNCTION 1477cdaee FUN_1477cdaee body=419 status=ok
// SIG undefined FUN_1477cdaee(void)

void FUN_1477cdaee(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 1477cdc92 FUN_1477cdc92 body=73 status=ok
// SIG undefined FUN_1477cdc92(void)

void FUN_1477cdc92(longlong param_1,int param_2)

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



// FUNCTION 1477cdcdc FUN_1477cdcdc body=48 status=ok
// SIG undefined FUN_1477cdcdc(void)

void FUN_1477cdcdc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1477cdd0c FUN_1477cdd0c body=132 status=ok
// SIG undefined FUN_1477cdd0c(void)

void FUN_1477cdd0c(longlong param_1,int param_2)

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



// FUNCTION 1477cdd92 FUN_1477cdd92 body=132 status=ok
// SIG undefined FUN_1477cdd92(void)

void FUN_1477cdd92(longlong param_1,int param_2)

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



// FUNCTION 1477cde18 FUN_1477cde18 body=9 status=ok
// SIG undefined FUN_1477cde18(void)

void FUN_1477cde18(longlong param_1)

{
  FUN_14335982a(param_1 + 0x10);
  return;
}



// FUNCTION 1477cde22 FUN_1477cde22 body=29 status=ok
// SIG undefined FUN_1477cde22(void)

undefined8 FUN_1477cde22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477cde40 FUN_1477cde40 body=98 status=ok
// SIG undefined FUN_1477cde40(void)

void FUN_1477cde40(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1477cdea2 FUN_1477cdea2 body=45 status=ok
// SIG undefined FUN_1477cdea2(void)

void FUN_1477cdea2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1477cded0 FUN_1477cded0 body=291 status=ok
// SIG undefined FUN_1477cded0(void)

undefined4 * FUN_1477cded0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477cdff4(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_1477ce17a(local_40 + 2,uVar1);
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1477ce0da(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1477ce23a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cdff4 FUN_1477cdff4 body=229 status=ok
// SIG undefined FUN_1477cdff4(void)

int * FUN_1477cdff4(longlong *param_1,int *param_2)

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



// FUNCTION 1477ce0da FUN_1477ce0da body=159 status=ok
// SIG undefined FUN_1477ce0da(void)

undefined8 FUN_1477ce0da(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1477ce1c8(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477ce17a FUN_1477ce17a body=77 status=ok
// SIG undefined FUN_1477ce17a(void)

undefined8 * FUN_1477ce17a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1477cca26(param_1,iVar1,0);
    FUN_1477cca88(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1477ce1c8 FUN_1477ce1c8 body=114 status=ok
// SIG undefined FUN_1477ce1c8(void)

void FUN_1477ce1c8(longlong *param_1,int param_2)

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



// FUNCTION 1477ce23a FUN_1477ce23a body=422 status=ok
// SIG undefined FUN_1477ce23a(void)

void FUN_1477ce23a(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1477ce3e2 FUN_1477ce3e2 body=122 status=ok
// SIG undefined FUN_1477ce3e2(void)

longlong FUN_1477ce3e2(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1477ce45c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1477ce45c FUN_1477ce45c body=232 status=ok
// SIG undefined FUN_1477ce45c(void)

longlong * FUN_1477ce45c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14117d336(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar2 + 8 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1477ce544 FUN_1477ce544 body=123 status=ok
// SIG undefined FUN_1477ce544(void)

undefined8 * FUN_1477ce544(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1477ce5c0();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1477ce5c0 FUN_1477ce5c0 body=146 status=ok
// SIG undefined FUN_1477ce5c0(void)

longlong * FUN_1477ce5c0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1477ce652 FUN_1477ce652 body=110 status=ok
// SIG undefined FUN_1477ce652(void)

longlong * FUN_1477ce652(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((char)param_1[8] == '\x01') && (*param_1 != 0)) {
    plVar4 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  lVar1 = param_2[4];
  lVar2 = param_2[5];
  lVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar3;
  param_1[4] = lVar1;
  param_1[5] = lVar2;
  if (*param_1 != 0) {
    *param_2 = 0;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return param_1;
}



// FUNCTION 1477ce6c0 FUN_1477ce6c0 body=62 status=ok
// SIG undefined FUN_1477ce6c0(void)

void FUN_1477ce6c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477ce786(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1477ce6fe FUN_1477ce6fe body=136 status=ok
// SIG undefined FUN_1477ce6fe(void)

void FUN_1477ce6fe(longlong *param_1,uint param_2)

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



// FUNCTION 1477ce786 FUN_1477ce786 body=93 status=ok
// SIG undefined FUN_1477ce786(void)

ulonglong FUN_1477ce786(uint param_1,uint param_2)

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



// FUNCTION 1477ce7e4 FUN_1477ce7e4 body=263 status=ok
// SIG undefined FUN_1477ce7e4(void)

void FUN_1477ce7e4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_1477cdc92(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 1477ce8ec FUN_1477ce8ec body=107 status=ok
// SIG undefined FUN_1477ce8ec(void)

void FUN_1477ce8ec(longlong *param_1,longlong *param_2)

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
    FUN_1477cdd0c(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1477ce958 FUN_1477ce958 body=62 status=ok
// SIG undefined FUN_1477ce958(void)

void FUN_1477ce958(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477ce996(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1477ce996 FUN_1477ce996 body=93 status=ok
// SIG undefined FUN_1477ce996(void)

ulonglong FUN_1477ce996(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1477ce9f4 FUN_1477ce9f4 body=34 status=ok
// SIG undefined FUN_1477ce9f4(void)

void FUN_1477ce9f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a570b90;
  return;
}



// FUNCTION 1477cea16 FUN_1477cea16 body=31 status=ok
// SIG undefined FUN_1477cea16(void)

undefined8 FUN_1477cea16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477cea52 FUN_1477cea52 body=93 status=ok
// SIG undefined FUN_1477cea52(void)

void FUN_1477cea52(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a570b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477ceab0 FUN_1477ceab0 body=126 status=ok
// SIG undefined FUN_1477ceab0(void)

void FUN_1477ceab0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a570b20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477ceb1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477ceb3a FUN_1477ceb3a body=21 status=ok
// SIG undefined FUN_1477ceb3a(void)

undefined8 FUN_1477ceb3a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477ceb50 FUN_1477ceb50 body=29 status=ok
// SIG undefined FUN_1477ceb50(void)

undefined8 FUN_1477ceb50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ceb6e FUN_1477ceb6e body=140 status=ok
// SIG undefined FUN_1477ceb6e(void)

void FUN_1477ceb6e(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_20,L"AudioMixerCore",1);
  FUN_14493e38c(uVar1,local_20);
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_28,L"SignalProcessing",1);
  FUN_14493e38c(uVar1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cebfc FUN_1477cebfc body=428 status=ok
// SIG undefined FUN_1477cebfc(void)

void FUN_1477cebfc(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1477cedaa FUN_1477cedaa body=510 status=ok
// SIG undefined FUN_1477cedaa(void)

void FUN_1477cedaa(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x10);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x10;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0xc) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 8) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477cefaa FUN_1477cefaa body=383 status=ok
// SIG undefined FUN_1477cefaa(void)

undefined4 *
FUN_1477cefaa(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477cf12a(param_1,local_48);
  uVar4 = *param_3;
  *local_40 = uVar4;
  if ((uVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar4);
    uVar4 = *local_40;
  }
  bVar1 = DAT_14c950c29;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  if (((bVar1 & 1) != 0) && (uVar4 != 0)) {
    FUN_1456cec3c(uVar4);
  }
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = param_4;
  cVar2 = FUN_1477cf210(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1477cedaa(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cf12a FUN_1477cf12a body=229 status=ok
// SIG undefined FUN_1477cf12a(void)

int * FUN_1477cf12a(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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



// FUNCTION 1477cf210 FUN_1477cf210 body=191 status=ok
// SIG undefined FUN_1477cf210(void)

void FUN_1477cf210(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar2 = FUN_1477cf2d0(param_1,param_2,&local_38);
    if (iVar2 != -1) {
      *(longlong *)(*param_1 + (longlong)iVar2 * 0x10) = *param_3;
      FUN_1477cf3a0(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_1477cf23e;
    }
  }
  uVar1 = 0;
LAB_1477cf23e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cf2d0 FUN_1477cf2d0 body=207 status=ok
// SIG undefined FUN_1477cf2d0(void)

int FUN_1477cf2d0(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1477cf3a0 FUN_1477cf3a0 body=138 status=ok
// SIG undefined FUN_1477cf3a0(void)

void FUN_1477cf3a0(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1477cf42a FUN_1477cf42a body=90 status=ok
// SIG undefined FUN_1477cf42a(void)

void FUN_1477cf42a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x90);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      FUN_144a78a1a(plVar1 + -0xd);
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477cf484 FUN_1477cf484 body=54 status=ok
// SIG undefined FUN_1477cf484(void)

void FUN_1477cf484(longlong *param_1)

{
  FUN_1477cf4ba(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477cf4ba FUN_1477cf4ba body=363 status=ok
// SIG undefined FUN_1477cf4ba(void)

void FUN_1477cf4ba(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
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
      plVar3 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar4 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1477cf628 FUN_1477cf628 body=322 status=ok
// SIG undefined FUN_1477cf628(void)

void FUN_1477cf628(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1477cf76c FUN_1477cf76c body=292 status=ok
// SIG undefined FUN_1477cf76c(void)

void FUN_1477cf76c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      plVar2 = *(longlong **)(*local_60 + 8 + (longlong)iStack_44 * 0x18);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cf892 FUN_1477cf892 body=48 status=ok
// SIG undefined FUN_1477cf892(void)

void FUN_1477cf892(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb0,8);
  }
  return;
}



// FUNCTION 1477cf8c2 FUN_1477cf8c2 body=147 status=ok
// SIG undefined FUN_1477cf8c2(void)

void FUN_1477cf8c2(longlong param_1,int param_2)

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



// FUNCTION 1477cf956 FUN_1477cf956 body=115 status=ok
// SIG undefined FUN_1477cf956(void)

void FUN_1477cf956(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477cf9c9 FUN_1477cf9c9 body=60 status=ok
// SIG undefined FUN_1477cf9c9(void)

void FUN_1477cf9c9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1477cfa06(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 1477cfa06 FUN_1477cfa06 body=624 status=ok
// SIG undefined FUN_1477cfa06(void)

undefined4 * FUN_1477cfa06(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[4] = param_2[4];
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  lVar2 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  pvVar3 = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  pvVar3 = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),pvVar3,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = param_2[0x12];
  pvVar3 = *(void **)(param_2 + 0x10);
  param_1[0x12] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x13] = 0;
  }
  else {
    FUN_1447cd5fa(param_1 + 0x10,iVar1,0);
    memcpy(*(void **)(param_1 + 0x10),pvVar3,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  pvVar3 = *(void **)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x17] = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x14,iVar1,0);
    memcpy(*(void **)(param_1 + 0x14),pvVar3,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = param_2[0x1a];
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x1a] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1b] = 0;
  }
  else {
    FUN_1402ae8a8(param_1 + 0x18,iVar1,0);
    FUN_140160884(*(undefined8 *)(param_1 + 0x18),uVar4,iVar1);
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  iVar1 = param_2[0x1e];
  uVar4 = *(undefined8 *)(param_2 + 0x1c);
  param_1[0x1e] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1f] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x1c,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x1c),uVar4,iVar1);
  }
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x24) = 0;
  iVar1 = param_2[0x26];
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  param_1[0x26] = iVar1;
  if (iVar1 == 0) {
    param_1[0x27] = 0;
  }
  else {
    FUN_1470466f6(param_1 + 0x24,iVar1,0);
    FUN_147046758(*(undefined8 *)(param_1 + 0x24),uVar4,iVar1);
  }
  return param_1;
}



// FUNCTION 1477cfc76 FUN_1477cfc76 body=389 status=ok
// SIG undefined FUN_1477cfc76(void)

undefined4 * FUN_1477cfc76(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477cfdfc(param_1,local_48);
  uVar8 = *param_3;
  *local_40 = uVar8;
  uVar2 = param_3[1];
  local_40[1] = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
  }
  else {
    LOCK();
    *(int *)(uVar2 + 0xc) = *(int *)(uVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)local_40[1];
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
    uVar8 = *local_40;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_1477cfee2(param_1,uVar6,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
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
      *(uint *)((longlong)local_40 + 0x14) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1477d01a6(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cfdfc FUN_1477cfdfc body=230 status=ok
// SIG undefined FUN_1477cfdfc(void)

int * FUN_1477cfdfc(longlong *param_1,int *param_2)

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


