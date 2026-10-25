// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14775141e FUN_14775141e body=1609 status=ok
// SIG undefined FUN_14775141e(void)

undefined8 * FUN_14775141e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_728 [32];
  undefined1 *local_708;
  undefined1 local_6f9;
  undefined1 local_6f8 [8];
  longlong *local_6f0;
  undefined8 *local_6e0;
  undefined4 local_6d8;
  undefined8 *local_6d0;
  undefined4 local_6c8;
  undefined8 *local_6c0;
  undefined4 local_6b8;
  undefined8 *local_6b0;
  undefined4 local_6a8;
  int local_6a0;
  undefined1 local_69c;
  undefined8 local_698;
  undefined8 uStack_690;
  uint local_688;
  undefined1 local_684;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined2 local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined2 local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined1 local_640 [96];
  undefined1 local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined1 local_5b8 [424];
  longlong local_410;
  undefined1 local_1e0 [96];
  undefined1 local_180;
  undefined1 local_178 [56];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined2 local_100;
  undefined1 local_f8 [16];
  undefined2 local_e8;
  undefined1 local_e0 [40];
  uint local_b8;
  undefined1 local_b4;
  undefined1 local_b0 [16];
  int local_a0;
  undefined1 local_9c;
  undefined1 local_98 [56];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_728;
  FUN_146b06658(local_5b8);
  local_410 = param_1 + 0x180;
  FUN_144a87366(local_640,param_1 + 0x6b8);
  local_5e0 = 1;
  local_5d8 = 0;
  uStack_5d0 = 0;
  FUN_1412cc59c(local_1e0,local_640);
  local_180 = local_5e0;
  FUN_144a450dc(local_178,&local_5d8);
  FUN_141515cba(local_640);
  local_658 = CONCAT11(1,*(undefined1 *)(param_1 + 0x721));
  local_650 = 0;
  uStack_648 = 0;
  local_100 = local_658;
  FUN_144a450dc(local_f8,&local_650);
  FUN_1449db362(&local_650);
  local_670 = CONCAT11(1,*(undefined1 *)(param_1 + 0x722));
  local_668 = 0;
  uStack_660 = 0;
  local_e8 = local_670;
  FUN_144a450dc(local_e0,&local_668);
  FUN_1449db362(&local_668);
  local_688 = (uint)*(byte *)(param_1 + 0x718);
  local_684 = 1;
  local_680 = 0;
  uStack_678 = 0;
  local_b4 = 1;
  local_b8 = local_688;
  FUN_144a450dc(local_b0,&local_680);
  FUN_1449db362(&local_680);
  bVar7 = *(char *)(param_1 + 0x720) - 1;
  local_6a0 = bVar7 + 1;
  if (4 < bVar7) {
    local_6a0 = 0;
  }
  local_69c = 1;
  local_698 = 0;
  uStack_690 = 0;
  local_9c = 1;
  local_a0 = local_6a0;
  FUN_144a450dc(local_98,&local_698);
  FUN_1449db362(&local_698);
  local_6b0 = (undefined8 *)0x0;
  local_6a8 = 0;
  FUN_1446efa72(&local_6b0,0,3,0x10);
  puVar5 = local_6b0;
  local_6a8 = 3;
  *local_6b0 = &PTR_LAB_149e01f80;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_6b0[2] = lVar8;
  *local_6b0 = &PTR_FUN_14a542590;
  local_6b0[3] = 0;
  FUN_14485c47a(local_6b0 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_147751a68;
  FUN_144a450dc(local_140,&local_6b0);
  local_6c0 = (undefined8 *)0x0;
  local_6b8 = 0;
  FUN_1446efa72(&local_6c0,0,3,0x10);
  puVar5 = local_6c0;
  local_6b8 = 3;
  *local_6c0 = &PTR_LAB_149f208f0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_6c0[2] = lVar8;
  *local_6c0 = &PTR_FUN_14a542600;
  local_6c0[3] = 0;
  FUN_14485c47a(local_6c0 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_147751afa;
  FUN_144a450dc(local_130,&local_6c0);
  local_6d0 = (undefined8 *)0x0;
  local_6c8 = 0;
  FUN_1446efa72(&local_6d0,0,3,0x10);
  puVar5 = local_6d0;
  local_6c8 = 3;
  *local_6d0 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_6d0[2] = lVar8;
  *local_6d0 = &PTR_FUN_14a542670;
  local_6d0[3] = 0;
  FUN_14485c47a(local_6d0 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = &LAB_147751b94;
  FUN_144a450dc(local_120,&local_6d0);
  local_6e0 = (undefined8 *)0x0;
  local_6d8 = 0;
  FUN_1446efa72(&local_6e0,0,3,0x10);
  puVar5 = local_6e0;
  local_6d8 = 3;
  *local_6e0 = &PTR_LAB_149e01f80;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_6e0[2] = lVar8;
  *local_6e0 = &PTR_FUN_14a542590;
  local_6e0[3] = 0;
  FUN_14485c47a(local_6e0 + 3,param_1);
  puVar5[4] = FUN_147751ba2;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_144a450dc(local_110,&local_6e0);
  local_708 = &local_6f9;
  FUN_146b07e40(local_6f8,"SSpinBox<float>",".\\Runtime/UMG/Private/Components/SpinBox.cpp",0x41);
  FUN_146b069fe(local_6f8,&local_5c8,local_5b8);
  plVar4 = local_5c0;
  if (local_5c0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x790) = local_5c8;
    plVar9 = *(longlong **)(param_1 + 0x798);
    if (plVar9 == (longlong *)0x0) goto LAB_14775187f;
    *(undefined8 *)(param_1 + 0x798) = 0;
LAB_1477519d6:
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14775187f;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_5c0 + 1) = (int)local_5c0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x790) = local_5c8;
    plVar9 = *(longlong **)(param_1 + 0x798);
    if (local_5c0 != plVar9) {
      *(longlong **)(param_1 + 0x798) = local_5c0;
      if (plVar9 == (longlong *)0x0) goto LAB_14775187f;
      goto LAB_1477519d6;
    }
    LOCK();
    plVar9 = local_5c0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14775187f;
    (**(code **)*local_5c0)(local_5c0);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_14775187f:
  if (local_5c0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_5c0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_5c0)(local_5c0);
      LOCK();
      piVar1 = (int *)((longlong)local_5c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5c0 + 0x10))(local_5c0);
      }
    }
  }
  if (local_6f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_6f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_6f0)(local_6f0);
      LOCK();
      piVar1 = (int *)((longlong)local_6f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6f0 + 0x10))(local_6f0);
      }
    }
  }
  FUN_1449db362(&local_6e0);
  FUN_1449db362(&local_6d0);
  FUN_1449db362(&local_6c0);
  FUN_1449db362(&local_6b0);
  FUN_146b06a72(local_5b8);
  uVar3 = *(undefined8 *)(param_1 + 0x790);
  plVar4 = *(longlong **)(param_1 + 0x798);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_60 ^ (ulonglong)auStack_728) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147751a68 FUN_147751a68 body=144 status=ok
// SIG undefined FUN_147751a68(void)

void FUN_147751a68(longlong param_1,float param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(float *)(param_1 + 0x168) != param_2) || (NAN(*(float *)(param_1 + 0x168)) || NAN(param_2))
     ) {
    *(float *)(param_1 + 0x168) = param_2;
    local_28 = DAT_14cab87b0;
    local_30 = DAT_14cab87a8;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  local_24 = param_2;
  FUN_1447cd2ec(param_1 + 0x738);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147751afa FUN_147751afa body=153 status=ok
// SIG undefined FUN_147751afa(void)

void FUN_147751afa(longlong param_1,float param_2,undefined1 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  float local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(float *)(param_1 + 0x168) != param_2) || (NAN(*(float *)(param_1 + 0x168)) || NAN(param_2))
     ) {
    *(float *)(param_1 + 0x168) = param_2;
    local_40 = DAT_14cab87b0;
    local_48 = DAT_14cab87a8;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  local_38 = param_2;
  local_34 = param_3;
  FUN_1447cd2ec(param_1 + 0x748);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147751ba2 FUN_147751ba2 body=67 status=ok
// SIG undefined FUN_147751ba2(void)

void FUN_147751ba2(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec(param_1 + 0x768);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147751be6 FUN_147751be6 body=1094 status=ok
// SIG undefined FUN_147751be6(void)

void FUN_147751be6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined1 local_e8 [96];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_60 = *(undefined4 *)(param_1 + 0x6ac);
    FUN_146a8a31c(*(longlong *)(param_1 + 0x790) + 0x338,&local_60);
    lVar1 = *(longlong *)(param_1 + 0x790);
    local_60 = *(undefined4 *)(param_1 + 0x6b0);
    local_5c = 1;
    local_58 = 0;
    uStack_50 = 0;
    *(undefined1 *)(lVar1 + 0x39c) = 1;
    *(undefined4 *)(lVar1 + 0x398) = local_60;
    FUN_140a52b3c(lVar1 + 0x3a0,&local_58);
    FUN_1449db362(&local_58);
    lVar1 = *(longlong *)(param_1 + 0x790);
    local_60 = *(undefined4 *)(param_1 + 0x71c);
    local_5c = 1;
    local_58 = 0;
    uStack_50 = 0;
    *(undefined1 *)(lVar1 + 0x52c) = 1;
    *(undefined4 *)(lVar1 + 0x528) = local_60;
    FUN_140a52b3c(lVar1 + 0x530,&local_58);
    FUN_1449db362(&local_58);
    local_78 = *(undefined4 *)(param_1 + 0x734);
    local_88 = *(undefined4 *)(param_1 + 0x724);
    uStack_84 = *(undefined4 *)(param_1 + 0x728);
    uStack_80 = *(undefined4 *)(param_1 + 0x72c);
    uStack_7c = *(undefined4 *)(param_1 + 0x730);
    local_74 = 1;
    local_70 = 0;
    uStack_68 = 0;
    FUN_140a5c8a2(*(longlong *)(param_1 + 0x790) + 0x250,*(longlong *)(param_1 + 0x790),&local_88);
    FUN_1449db362(&local_70);
    local_60 = *(undefined4 *)(param_1 + 0x6a0);
    local_5c = 1;
    local_58._0_1_ = 1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_146b0cd02(*(undefined8 *)(param_1 + 0x790),&local_60);
    FUN_1449db362(&uStack_50);
    local_60 = *(undefined4 *)(param_1 + 0x6a4);
    local_5c = 1;
    local_58 = CONCAT71(local_58._1_7_,1);
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_146b0cc2a(*(undefined8 *)(param_1 + 0x790),&local_60);
    FUN_1449db362(&uStack_50);
    local_60._0_1_ = *(undefined1 *)(param_1 + 0x6a8);
    FUN_147774e76(*(longlong *)(param_1 + 0x790) + 0x488,&local_60);
    local_60 = CONCAT31(local_60._1_3_,*(undefined1 *)(param_1 + 0x6a9));
    FUN_147774e76(*(longlong *)(param_1 + 0x790) + 0x4a0,&local_60);
    if ((*(byte *)(param_1 + 0x778) & 1) == 0) {
      FUN_1477500e6(param_1);
    }
    else {
      FUN_147750b8a(param_1,*(undefined4 *)(param_1 + 0x77c));
    }
    if ((*(byte *)(param_1 + 0x778) & 2) == 0) {
      FUN_14774ffe2(param_1);
    }
    else {
      FUN_14775084e(param_1,*(undefined4 *)(param_1 + 0x780));
    }
    if ((*(byte *)(param_1 + 0x778) & 4) == 0) {
      FUN_147750064(param_1);
    }
    else {
      FUN_147750a74(param_1,*(undefined4 *)(param_1 + 0x784));
    }
    if ((*(byte *)(param_1 + 0x778) & 8) == 0) {
      FUN_14774ff60(param_1);
    }
    else {
      FUN_147750738(param_1,*(undefined4 *)(param_1 + 0x788));
    }
    *(longlong *)(*(longlong *)(param_1 + 0x790) + 0x2f8) = param_1 + 0x180;
    FUN_140163244(*(undefined8 *)(param_1 + 0x790),1);
    FUN_14775202e(*(undefined8 *)(param_1 + 0x790),*(undefined1 *)(param_1 + 0x718));
    uVar3 = *(undefined8 *)(param_1 + 0x790);
    FUN_144a87366(local_e8,param_1 + 0x6b8);
    FUN_1477520be(uVar3,local_e8);
    local_60._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x721));
    local_58 = 0;
    uStack_50 = 0;
    FUN_146a65922(*(undefined8 *)(*(longlong *)(param_1 + 0x790) + 0x2d0),&local_60);
    FUN_1449db362(&local_58);
    local_60._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x721));
    local_58 = 0;
    uStack_50 = 0;
    FUN_146a6593c(*(undefined8 *)(*(longlong *)(param_1 + 0x790) + 0x2d0),&local_60);
    FUN_1449db362(&local_58);
    cVar2 = FUN_14113f0c0(param_1 + 0x16c);
    if (cVar2 == '\0') {
      local_60 = *(undefined4 *)(param_1 + 0x168);
      local_5c = 1;
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      local_f0 = *(undefined8 *)(param_1 + 0x174);
      uVar3 = FUN_14479d2ce(param_1 + 0x16c);
      local_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_5c = 1;
      FUN_1446efa72(&local_58,0,3,0x10);
      uStack_50 = CONCAT44(uStack_50._4_4_,3);
      FUN_147772e02(local_58,uVar3,&local_f0);
    }
    FUN_1477521a4(*(undefined8 *)(param_1 + 0x790),&local_60);
    FUN_1449db362(&local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775202e FUN_14775202e body=142 status=ok
// SIG undefined FUN_14775202e(void)

void FUN_14775202e(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = 1;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = param_2;
  FUN_146a65956(*(undefined8 *)(param_1 + 0x2d0),&local_58);
  FUN_1449db362(&local_50);
  local_6c = 1;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = param_2;
  FUN_1410da560(*(undefined8 *)(param_1 + 0x2c0));
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477520be FUN_1477520be body=229 status=ok
// SIG undefined FUN_1477520be(void)

void FUN_1477520be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_158 [40];
  undefined1 local_130 [96];
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [96];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar3 = *(undefined8 *)(param_1 + 0x2d0);
  FUN_144a87366(local_b8);
  local_58 = 1;
  local_50 = 0;
  uStack_48 = 0;
  FUN_146a64aee(uVar3,local_b8);
  FUN_141515cba(local_b8);
  uVar3 = *(undefined8 *)(param_1 + 0x2c0);
  FUN_144a87366(local_130,param_2);
  local_d0 = 1;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1410da64c(uVar3,local_130);
  plVar4 = *(longlong **)(param_2 + 0x38);
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
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477521a4 FUN_1477521a4 body=149 status=ok
// SIG undefined FUN_1477521a4(void)

void FUN_1477521a4(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x26c) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x268) = *param_2;
  plVar2 = (longlong *)(param_1 + 0x270);
  FUN_140a52b3c(plVar2,param_2 + 2);
  if ((*(int *)(param_1 + 0x278) != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x278) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*plVar2;
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *(undefined4 *)(param_1 + 0x268) = uVar3;
    }
  }
  FUN_14290dbae(param_1,*(float *)(param_1 + 0x268),(double)*(float *)(param_1 + 0x268),3,0);
  return;
}



// FUNCTION 14775223a FUN_14775223a body=95 status=ok
// SIG undefined FUN_14775223a(void)

void FUN_14775223a(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if ((undefined4 *)(param_1 + 0x3c8) != param_2) {
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined4 *)(param_1 + 0x3c8) = *param_2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x3cc) != '\x01') goto LAB_14775224e;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x3cc) = uVar1;
  }
LAB_14775224e:
  *(undefined1 *)(param_1 + 0x3d0) = *(undefined1 *)(param_2 + 2);
  FUN_146af763c(param_1 + 0x3d8,param_2 + 4);
  FUN_146b0757c(param_1);
  return;
}



// FUNCTION 14775229a FUN_14775229a body=95 status=ok
// SIG undefined FUN_14775229a(void)

void FUN_14775229a(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if ((undefined4 *)(param_1 + 1000) != param_2) {
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined4 *)(param_1 + 1000) = *param_2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x3ec) != '\x01') goto LAB_1477522ae;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x3ec) = uVar1;
  }
LAB_1477522ae:
  *(undefined1 *)(param_1 + 0x3f0) = *(undefined1 *)(param_2 + 2);
  FUN_146af763c(param_1 + 0x3f8,param_2 + 4);
  FUN_146b0757c(param_1);
  return;
}



// FUNCTION 1477522fa FUN_1477522fa body=164 status=ok
// SIG undefined FUN_1477522fa(void)

void FUN_1477522fa(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1477523a0(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477523a0 FUN_1477523a0 body=66 status=ok
// SIG undefined FUN_1477523a0(void)

longlong FUN_1477523a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147743a5a(param_1,param_2,0);
  if (lVar1 != 0) {
    lVar2 = FUN_1459e65f8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1477523e8 FUN_1477523e8 body=278 status=ok
// SIG undefined FUN_1477523e8(void)

void FUN_1477523e8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((longlong)local_24 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((local_30 != 0) && (local_24 < *(int *)(param_1 + 0x170))) {
      FUN_147752934(*(undefined8 *)(*(longlong *)(param_1 + 0x168) + (longlong)local_24 * 8));
      uVar1 = 1;
    }
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147752532 FUN_147752532 body=155 status=ok
// SIG undefined FUN_147752532(void)

void FUN_147752532(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  plVar3 = *(longlong **)(param_1 + 400);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477525c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477525d4 FUN_1477525d4 body=102 status=ok
// SIG undefined FUN_1477525d4(void)

void FUN_1477525d4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 400);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_14775263c(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775263c FUN_14775263c body=534 status=ok
// SIG undefined FUN_14775263c(void)

void FUN_14775263c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined4 local_1d0 [2];
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_161;
  code *local_160;
  undefined1 *local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_110 [8];
  undefined8 local_108 [3];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0;
  undefined1 local_d8 [16];
  uint local_c8;
  undefined1 local_c4;
  uint local_c0;
  undefined1 local_bc;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_14776422c(*param_2,local_110);
  *(undefined8 *)(param_1 + 0x58) = local_108[0];
  local_198 = *(undefined4 *)(param_1 + 0x38);
  uStack_194 = *(undefined4 *)(param_1 + 0x3c);
  uStack_190 = *(undefined4 *)(param_1 + 0x40);
  uStack_18c = *(undefined4 *)(param_1 + 0x44);
  local_188 = 1;
  local_180 = 0;
  uStack_178 = 0;
  local_e0 = 1;
  local_f0 = local_198;
  uStack_ec = uStack_194;
  uStack_e8 = uStack_190;
  uStack_e4 = uStack_18c;
  FUN_144a450dc(local_d8,&local_180);
  FUN_1449db362(&local_180);
  local_c8 = (uint)*(byte *)(param_1 + 0x50);
  local_c4 = 1;
  local_c0 = (uint)*(byte *)(param_1 + 0x51);
  local_bc = 1;
  FUN_14772ea74(local_1d0,param_1 + 0x48);
  local_150 = local_1d0[0];
  local_148 = local_1c8;
  local_144 = local_1c4;
  local_140 = local_1c0;
  local_1c0 = 0;
  local_138 = local_1b8;
  local_1b8 = 0;
  local_130 = local_1b0;
  local_12c = local_1ac;
  local_128 = local_1a8;
  local_1a8 = 0;
  local_120 = local_1a0;
  local_1a0 = 0;
  local_118 = 1;
  FUN_14775300c(local_108);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_1e0 = DAT_14c98dec8;
    local_1d8 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_158 = &local_161;
    local_160 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_1e0);
  }
  FUN_147753048(local_108,&local_1e0);
  plVar3 = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1449db362(&local_1a8);
  FUN_1449db362(&local_1c0);
  FUN_1477530d0(local_110);
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
  if ((local_38 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147752854 FUN_147752854 body=222 status=ok
// SIG undefined FUN_147752854(void)

void FUN_147752854(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x188) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x188);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_1469779b4(uVar4,&local_38);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
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
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147752934 FUN_147752934 body=356 status=ok
// SIG undefined FUN_147752934(void)

void FUN_147752934(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_68 [32];
  code *local_48;
  longlong *plStack_40;
  undefined1 local_29 [9];
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0x30) != param_2) {
    (**(code **)(*param_2 + 0x2c0))(param_2);
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[6] = 0;
      (**(code **)(*plVar3 + 0x2c0))();
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    bVar5 = DAT_14c950c29;
    *(longlong **)(param_1 + 0x30) = param_2;
    if ((param_1 != 0) && ((bVar5 & 1) != 0)) {
      FUN_1456cec3c(param_1);
    }
    param_2[6] = param_1;
    lVar4 = *(longlong *)(param_1 + 0x58);
    if (lVar4 != 0) {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        local_48 = DAT_14c98dec8;
        plStack_40 = DAT_14c98ded0;
        if (DAT_14c98ded0 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
          UNLOCK();
        }
      }
      else {
        plStack_20 = (longlong *)local_29;
        local_29._1_8_ = FUN_143336ee2;
        FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_48);
      }
      FUN_14149270a(lVar4);
      local_29._1_8_ = *(undefined8 *)(lVar4 + 0x10);
      plStack_20 = *(longlong **)(lVar4 + 0x18);
      *(code **)(lVar4 + 0x10) = local_48;
      *(longlong **)(lVar4 + 0x18) = plStack_40;
      local_48 = (code *)local_29._1_8_;
      plStack_40 = plStack_20;
      FUN_140a5503c(lVar4);
      plVar3 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_40)(plStack_40);
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
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147752a9a FUN_147752a9a body=662 status=ok
// SIG undefined FUN_147752a9a(void)

undefined8 * FUN_147752a9a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  longlong local_240;
  undefined1 local_231;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined8 local_218;
  longlong *local_210;
  undefined1 local_208 [424];
  uint local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_147752d32(local_208);
  local_60 = (uint)*(byte *)(param_1 + 0x180);
  FUN_147774ec6(local_230,&local_231);
  FUN_147752dac(local_230,&local_218,local_208);
  plVar6 = local_210;
  if (local_210 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = local_218;
    plVar9 = *(longlong **)(param_1 + 400);
    if (plVar9 == (longlong *)0x0) goto LAB_147752b39;
    *(undefined8 *)(param_1 + 400) = 0;
LAB_147752cf8:
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_147752b39;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_210 + 1) = (int)local_210[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x188) = local_218;
    plVar9 = *(longlong **)(param_1 + 400);
    if (local_210 != plVar9) {
      *(longlong **)(param_1 + 400) = local_210;
      if (plVar9 == (longlong *)0x0) goto LAB_147752b39;
      goto LAB_147752cf8;
    }
    LOCK();
    plVar9 = local_210 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147752b39;
    (**(code **)*local_210)(local_210);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar6;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_147752b39:
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_210 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)local_210 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_210 + 0x10))(local_210);
      }
    }
  }
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_228 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar1 = (int *)((longlong)local_228 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_228 + 0x10))(local_228);
      }
    }
  }
  FUN_147752e20(local_208);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if (lVar4 != 0) {
        lVar7 = FUN_1459e65f8();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_248 = *(undefined8 *)(param_1 + 0x188);
          local_240 = *(longlong *)(param_1 + 400);
          if (local_240 != 0) {
            LOCK();
            *(int *)(local_240 + 8) = *(int *)(local_240 + 8) + 1;
            UNLOCK();
          }
          FUN_14775263c(lVar4,&local_248);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x188);
  plVar6 = *(longlong **)(param_1 + 400);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147752d32 FUN_147752d32 body=120 status=ok
// SIG undefined FUN_147752d32(void)

longlong FUN_147752d32(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147752dac FUN_147752dac body=115 status=ok
// SIG undefined FUN_147752dac(void)

longlong * FUN_147752dac(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14697792a(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147752e20 FUN_147752e20 body=56 status=ok
// SIG undefined FUN_147752e20(void)

void FUN_147752e20(longlong param_1)

{
  FUN_147764142(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b8));
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 147752e58 FUN_147752e58 body=49 status=ok
// SIG undefined FUN_147752e58(void)

void FUN_147752e58(longlong param_1)

{
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_146977ab8(*(longlong *)(param_1 + 0x188),*(undefined1 *)(param_1 + 0x180));
    return;
  }
  return;
}



// FUNCTION 147752e92 FUN_147752e92 body=62 status=ok
// SIG undefined FUN_147752e92(void)

void FUN_147752e92(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_147752ed2();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147752ed2 FUN_147752ed2 body=117 status=ok
// SIG undefined FUN_147752ed2(void)

void FUN_147752ed2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a55872(lVar1 + 0x28,lVar1 + 0x20,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147752f58 FUN_147752f58 body=99 status=ok
// SIG undefined FUN_147752f58(void)

void FUN_147752f58(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [56];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x58);
  local_20 = param_2;
  if (lVar1 != 0) {
    FUN_14772ea74(local_58,&local_20);
    FUN_14775311c(lVar1,local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775300c FUN_14775300c body=59 status=ok
// SIG undefined FUN_14775300c(void)

longlong FUN_14775300c(longlong param_1,longlong param_2)

{
  FUN_146a46c74(param_1 + 0x50);
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1449db362(param_2 + 0x28);
    FUN_1449db362(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return param_1;
}



// FUNCTION 147753048 FUN_147753048 body=136 status=ok
// SIG undefined FUN_147753048(void)

longlong FUN_147753048(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x0001477530a1;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x0001477530a1:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 1477530d0 FUN_1477530d0 body=76 status=ok
// SIG undefined FUN_1477530d0(void)

void FUN_1477530d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a53fa58;
  if (param_1[1] != 0) {
    if (*(int *)(param_1 + 0x1a) == -1) {
      FUN_140a50fb6();
    }
    else {
      FUN_146983a00(param_1[0x19],param_1 + 1);
    }
  }
  FUN_14776416c(param_1 + 1);
  return;
}



// FUNCTION 14775311c FUN_14775311c body=178 status=ok
// SIG undefined FUN_14775311c(void)

void FUN_14775311c(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *param_2;
  *(int *)(param_1 + 0x40) = iVar2;
  lVar1 = param_1 + 0x20;
  if (iVar2 == 2) {
    if ((char)param_2[9] == '\x01') {
      FUN_140a513ea(param_1 + 0x48,lVar1,param_2 + 8);
    }
    else {
      FUN_14697cee2(param_1 + 0x48,lVar1,param_2 + 2);
    }
  }
  else {
    local_24 = 0x3f800000;
    FUN_140a51568(param_1 + 0x48,lVar1);
  }
  FUN_140a513ea(param_1 + 0x44,lVar1,param_2 + 2);
  FUN_1449db362(param_2 + 10);
  FUN_1449db362(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477531d0 FUN_1477531d0 body=147 status=ok
// SIG undefined FUN_1477531d0(void)

void FUN_1477531d0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x38);
  uStack_24 = *(undefined4 *)(param_1 + 0x3c);
  uStack_20 = *(undefined4 *)(param_1 + 0x40);
  uStack_1c = *(undefined4 *)(param_1 + 0x44);
  FUN_147752ed2();
  FUN_147752f58(param_1,*(undefined8 *)(param_1 + 0x48));
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x38) != (uint)*(byte *)(param_1 + 0x50)) {
      *(uint *)(lVar1 + 0x38) = (uint)*(byte *)(param_1 + 0x50);
      FUN_14156c56c(lVar1,1);
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (lVar1 == 0) goto LAB_147753236;
    }
    if (*(uint *)(lVar1 + 0x3c) != (uint)*(byte *)(param_1 + 0x51)) {
      *(uint *)(lVar1 + 0x3c) = (uint)*(byte *)(param_1 + 0x51);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
LAB_147753236:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753274 FUN_147753274 body=38 status=ok
// SIG undefined FUN_147753274(void)

void FUN_147753274(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775329a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775329a FUN_14775329a body=208 status=ok
// SIG undefined FUN_14775329a(void)

longlong FUN_14775329a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x1d8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_144a772c4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) {
      lVar2 = FUN_14090ceee(lVar2,param_1,0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x1d8) = lVar2;
      FUN_144a87366(local_88,param_1 + 0x1d0);
      FUN_141115af4(param_1,local_88);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775336c FUN_14775336c body=38 status=ok
// SIG undefined FUN_14775336c(void)

void FUN_14775336c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147753392();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147753392 FUN_147753392 body=208 status=ok
// SIG undefined FUN_147753392(void)

longlong FUN_147753392(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x1e8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_144a772c4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) {
      lVar2 = FUN_14090ceee(lVar2,param_1,0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x1e8) = lVar2;
      FUN_144a87366(local_88,param_1 + 0x1d0);
      FUN_141115af4(param_1,local_88);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753464 FUN_147753464 body=107 status=ok
// SIG undefined FUN_147753464(void)

void FUN_147753464(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477534d0(param_1,local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477534d0 FUN_1477534d0 body=129 status=ok
// SIG undefined FUN_1477534d0(void)

longlong * FUN_1477534d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x318);
  if (lVar1 == 0) {
    plVar2 = *(longlong **)(param_1 + 0x188);
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puVar3 = (undefined4 *)(param_1 + 400);
  }
  else {
    if ((*(byte *)(lVar1 + 0x5dc) & 1) != 0) {
      FUN_145ab0088(lVar1 + 0x1e0,lVar1,0);
    }
    plVar2 = *(longlong **)(lVar1 + 0x1e0);
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puVar3 = (undefined4 *)(lVar1 + 0x1e8);
  }
  *(undefined4 *)(param_2 + 1) = *puVar3;
  return param_2;
}



// FUNCTION 147753556 FUN_147753556 body=205 status=ok
// SIG undefined FUN_147753556(void)

void FUN_147753556(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x16d) = *(byte *)(param_1 + 0x16d) & 0xfe | local_34 != 0;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = local_34 != 0;
    FUN_1410da984();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753624 FUN_147753624 body=228 status=ok
// SIG undefined FUN_147753624(void)

void FUN_147753624(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = 0x3f800000;
  uStack_58 = 0;
  uStack_54 = 0x3f800000;
  uStack_50 = 0x3f800000;
  local_4c = local_4c & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(uint *)(param_1 + 0x1b8) = local_4c;
  *(undefined4 *)(param_1 + 0x1a8) = local_5c;
  *(undefined4 *)(param_1 + 0x1ac) = uStack_58;
  *(undefined4 *)(param_1 + 0x1b0) = uStack_54;
  *(undefined4 *)(param_1 + 0x1b4) = uStack_50;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_38 = local_4c;
    local_48 = CONCAT44(uStack_58,local_5c);
    uStack_40 = CONCAT44(uStack_50,uStack_54);
    local_34 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1410da5ca();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775370a FUN_14775370a body=345 status=ok
// SIG undefined FUN_14775370a(void)

void FUN_14775370a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [96];
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0x41c00000;
  local_38 = 0;
  local_34 = 2;
  local_32 = 0;
  local_30 = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a87366(local_e8,&local_88);
  FUN_141115af4(param_1,local_e8);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753864 FUN_147753864 body=156 status=ok
// SIG undefined FUN_147753864(void)

void FUN_147753864(undefined8 param_1,longlong param_2)

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
  FUN_147753902(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753902 FUN_147753902 body=130 status=ok
// SIG undefined FUN_147753902(void)

void FUN_147753902(longlong param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x1d8) = param_2;
  FUN_144a87366(local_78,param_1 + 0x1d0);
  FUN_141115af4(param_1,local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753986 FUN_147753986 body=156 status=ok
// SIG undefined FUN_147753986(void)

void FUN_147753986(undefined8 param_1,longlong param_2)

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
  FUN_147753a24(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753a24 FUN_147753a24 body=130 status=ok
// SIG undefined FUN_147753a24(void)

void FUN_147753a24(longlong param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x1e8) = param_2;
  FUN_144a87366(local_78,param_1 + 0x1d0);
  FUN_141115af4(param_1,local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753aa8 FUN_147753aa8 body=196 status=ok
// SIG undefined FUN_147753aa8(void)

void FUN_147753aa8(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x1cc) = local_34;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_1410daab2();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753b6e FUN_147753b6e body=91 status=ok
// SIG undefined FUN_147753b6e(void)

void FUN_147753b6e(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x1cc) = param_2;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_1410daab2();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753bca FUN_147753bca body=156 status=ok
// SIG undefined FUN_147753bca(void)

void FUN_147753bca(undefined8 param_1,longlong param_2)

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
  FUN_147753c68(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753c68 FUN_147753c68 body=209 status=ok
// SIG undefined FUN_147753c68(void)

void FUN_147753c68(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_1 + 0x1a8);
  if (*(char *)(param_1 + 0x1b8) == '\x01') {
    puVar2 = (undefined8 *)FUN_1400c06fe(puVar1);
    local_68 = *puVar2;
    local_60 = *(undefined4 *)(puVar2 + 1);
  }
  else {
    local_60 = *(undefined4 *)(param_1 + 0x1b0);
    local_68 = *puVar1;
  }
  *(undefined4 *)(param_1 + 0x1b0) = local_60;
  *puVar1 = local_68;
  *(undefined4 *)(param_1 + 0x1b4) = param_2;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_50 = local_60;
    local_58 = local_68;
    local_48 = 0;
    local_44 = 1;
    local_40 = 0;
    uStack_38 = 0;
    local_4c = param_2;
    FUN_1410da5ca();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753d3a FUN_147753d3a body=190 status=ok
// SIG undefined FUN_147753d3a(void)

void FUN_147753d3a(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x2f0) = local_58;
  *(undefined4 *)(param_1 + 0x2f4) = uStack_54;
  *(undefined4 *)(param_1 + 0x2f8) = uStack_50;
  *(undefined4 *)(param_1 + 0x2fc) = uStack_4c;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1410da87a();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753dfa FUN_147753dfa body=95 status=ok
// SIG undefined FUN_147753dfa(void)

void FUN_147753dfa(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x2f4) = uVar1;
  *(undefined4 *)(param_1 + 0x2f8) = uVar2;
  *(undefined4 *)(param_1 + 0x2fc) = uVar3;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1410da87a();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753e5a FUN_147753e5a body=190 status=ok
// SIG undefined FUN_147753e5a(void)

void FUN_147753e5a(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x2e0) = local_58;
  *(undefined4 *)(param_1 + 0x2e4) = uStack_54;
  *(undefined4 *)(param_1 + 0x2e8) = uStack_50;
  *(undefined4 *)(param_1 + 0x2ec) = uStack_4c;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1410da7f6();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753f1a FUN_147753f1a body=95 status=ok
// SIG undefined FUN_147753f1a(void)

void FUN_147753f1a(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x2e4) = uVar1;
  *(undefined4 *)(param_1 + 0x2e8) = uVar2;
  *(undefined4 *)(param_1 + 0x2ec) = uVar3;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1410da7f6();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147753f7a FUN_147753f7a body=505 status=ok
// SIG undefined FUN_147753f7a(void)

void FUN_147753f7a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_1a8 [32];
  undefined **local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong local_150;
  undefined8 local_148 [10];
  uint local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined8 auStack_98 [4];
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  uStack_c8 = &DAT_3f8000003f800000;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 3;
  uStack_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  auStack_98[0] = 0;
  auStack_98[1] = 0;
  auStack_98[2] = 0;
  auStack_98[3] = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = local_48 & 0xffffff00;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_188 = &PTR_FUN_149ed05f0;
  local_180 = (undefined4)local_d0;
  uStack_17c = local_d0._4_4_;
  uStack_178 = (undefined4)uStack_c8;
  uStack_174 = uStack_c8._4_4_;
  local_170 = local_c0;
  uStack_16c = uStack_bc;
  uStack_168 = (undefined4)uStack_b8;
  uStack_164 = uStack_b8._4_4_;
  local_160 = (undefined4)local_b0;
  uStack_15c = local_b0._4_4_;
  uStack_158 = (undefined4)uStack_a8;
  uStack_154 = uStack_a8._4_4_;
  local_150 = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = auStack_98;
  puVar6 = local_148;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_f4 = local_44;
  local_f8 = local_48;
  local_f0 = local_40;
  local_e8 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
    UNLOCK();
  }
  local_e0 = local_30;
  FUN_147754174(param_1);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754174 FUN_147754174 body=160 status=ok
// SIG undefined FUN_147754174(void)

void FUN_147754174(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f13d9e(param_1 + 0x230);
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = param_1 + 0x230;
    FUN_1410da774();
  }
  *param_2 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_2[0x14];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754216 FUN_147754216 body=208 status=ok
// SIG undefined FUN_147754216(void)

void FUN_147754216(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  (**(code **)(*param_1 + 0x348))(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477542e8 FUN_1477542e8 body=161 status=ok
// SIG undefined FUN_1477542e8(void)

void FUN_1477542e8(longlong *param_1,longlong param_2)

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
  *(undefined1 *)((longlong)param_1 + 0x312) = local_19;
  (**(code **)(*param_1 + 0x2d8))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775438a FUN_14775438a body=184 status=ok
// SIG undefined FUN_14775438a(void)

void FUN_14775438a(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x311) = local_31;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_30 = local_31;
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_1410da8fe();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754444 FUN_147754444 body=90 status=ok
// SIG undefined FUN_147754444(void)

void FUN_147754444(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x311) = param_2;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_1410da8fe(*(longlong *)(param_1 + 0x318),&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477544a0 FUN_1477544a0 body=91 status=ok
// SIG undefined FUN_1477544a0(void)

void FUN_1477544a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1477534d0(param_1,local_28);
  FUN_140008f88(param_2,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477544fc FUN_1477544fc body=98 status=ok
// SIG undefined FUN_1477544fc(void)

void FUN_1477544fc(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  (**(code **)(*param_1 + 0x348))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754560 FUN_147754560 body=78 status=ok
// SIG undefined FUN_147754560(void)

void FUN_147754560(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1477545b0(param_1,&local_2c);
  param_2[4] = local_1c;
  *param_2 = local_2c;
  param_2[1] = uStack_28;
  param_2[2] = uStack_24;
  param_2[3] = uStack_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477545b0 FUN_1477545b0 body=196 status=ok
// SIG undefined FUN_1477545b0(void)

undefined4 * FUN_1477545b0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_14113f0c0(param_1 + 0x1bc);
  if (cVar4 != '\0') {
    local_3c = 0x3f800000;
    uStack_38 = 0;
    uStack_34 = 0x3f800000;
    uStack_30 = 0x3f800000;
    local_2c = local_2c & 0xffffff00;
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x1bc);
    uVar6 = FUN_14477b072(plVar5,*(undefined8 *)(param_1 + 0x1c4));
    (**(code **)(*plVar5 + 0x248))(plVar5,uVar6,&local_3c);
    param_2[4] = local_2c;
    *param_2 = local_3c;
    param_2[1] = uStack_38;
    param_2[2] = uStack_34;
    param_2[3] = uStack_30;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  param_2[4] = *(undefined4 *)(param_1 + 0x1b8);
  uVar1 = *(undefined4 *)(param_1 + 0x1ac);
  uVar2 = *(undefined4 *)(param_1 + 0x1b0);
  uVar3 = *(undefined4 *)(param_1 + 0x1b4);
  *param_2 = *(undefined4 *)(param_1 + 0x1a8);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147754676 FUN_147754676 body=128 status=ok
// SIG undefined FUN_147754676(void)

void FUN_147754676(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = *(undefined4 *)(param_2 + 2);
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  *(undefined4 *)(param_1 + 0x1b0) = uVar3;
  *(undefined4 *)(param_1 + 0x1b4) = uVar4;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_58;
    uStack_30 = uStack_50;
    local_28 = local_48;
    FUN_1410da5ca();
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754706 FUN_147754706 body=95 status=ok
// SIG undefined FUN_147754706(void)

void FUN_147754706(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_1410daab2();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754766 FUN_147754766 body=134 status=ok
// SIG undefined FUN_147754766(void)

void FUN_147754766(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [56];
  longlong *local_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a87366(local_78,param_1 + 0x1d0);
  FUN_1412cc59c(param_2,local_78);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477547ee FUN_1477547ee body=89 status=ok
// SIG undefined FUN_1477547ee(void)

void FUN_1477547ee(undefined8 param_1)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a87366(local_78);
  FUN_141115af4(param_1,local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754848 FUN_147754848 body=316 status=ok
// SIG undefined FUN_147754848(void)

void FUN_147754848(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = &PTR_FUN_149ed05f0;
  local_e0 = *(undefined4 *)(param_1 + 0x238);
  uStack_dc = *(undefined4 *)(param_1 + 0x23c);
  uStack_d8 = *(undefined4 *)(param_1 + 0x240);
  uStack_d4 = *(undefined4 *)(param_1 + 0x244);
  local_d0 = *(undefined4 *)(param_1 + 0x248);
  uStack_cc = *(undefined4 *)(param_1 + 0x24c);
  uStack_c8 = *(undefined4 *)(param_1 + 0x250);
  uStack_c4 = *(undefined4 *)(param_1 + 0x254);
  local_c0 = *(undefined4 *)(param_1 + 600);
  uStack_bc = *(undefined4 *)(param_1 + 0x25c);
  uStack_b8 = *(undefined4 *)(param_1 + 0x260);
  uStack_b4 = *(undefined4 *)(param_1 + 0x264);
  local_b0 = *(longlong *)(param_1 + 0x268);
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = (undefined8 *)(param_1 + 0x270);
  puVar6 = local_a8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_54 = *(undefined1 *)(param_1 + 0x2c4);
  local_58 = *(undefined4 *)(param_1 + 0x2c0);
  local_50 = *(undefined8 *)(param_1 + 0x2c8);
  local_48 = *(longlong **)(param_1 + 0x2d0);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_40 = *(undefined8 *)(param_1 + 0x2d8);
  FUN_140f13d9e(param_2,&local_e8);
  plVar3 = local_48;
  local_e8 = &PTR_FUN_149ed05f0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754986 FUN_147754986 body=241 status=ok
// SIG undefined FUN_147754986(void)

void FUN_147754986(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = *(undefined4 *)(param_2 + 8);
  uStack_cc = *(undefined4 *)(param_2 + 0xc);
  uStack_c8 = *(undefined4 *)(param_2 + 0x10);
  uStack_c4 = *(undefined4 *)(param_2 + 0x14);
  local_c0 = *(undefined4 *)(param_2 + 0x18);
  uStack_bc = *(undefined4 *)(param_2 + 0x1c);
  uStack_b8 = *(undefined4 *)(param_2 + 0x20);
  uStack_b4 = *(undefined4 *)(param_2 + 0x24);
  local_b0 = *(undefined4 *)(param_2 + 0x28);
  uStack_ac = *(undefined4 *)(param_2 + 0x2c);
  uStack_a8 = *(undefined4 *)(param_2 + 0x30);
  uStack_a4 = *(undefined4 *)(param_2 + 0x34);
  local_a0 = *(longlong *)(param_2 + 0x38);
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar2 = (undefined8 *)(param_2 + 0x40);
  puVar3 = local_98;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_44 = *(undefined1 *)(param_2 + 0x94);
  local_48 = *(undefined4 *)(param_2 + 0x90);
  local_40 = *(undefined8 *)(param_2 + 0x98);
  local_38 = *(longlong *)(param_2 + 0xa0);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_30 = *(undefined8 *)(param_2 + 0xa8);
  FUN_147754174(param_1);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754a84 FUN_147754a84 body=105 status=ok
// SIG undefined FUN_147754a84(void)

void FUN_147754a84(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x2e0) = *param_2;
  *(undefined4 *)(param_1 + 0x2e4) = uVar1;
  *(undefined4 *)(param_1 + 0x2e8) = uVar2;
  *(undefined4 *)(param_1 + 0x2ec) = uVar3;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x2e0);
    uStack_30 = *(undefined8 *)(param_1 + 0x2e8);
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1410da7f6(*(longlong *)(param_1 + 0x318));
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754aee FUN_147754aee body=72 status=ok
// SIG undefined FUN_147754aee(void)

void FUN_147754aee(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147754b38(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = uStack_24;
  param_2[2] = uStack_20;
  param_2[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754b38 FUN_147754b38 body=171 status=ok
// SIG undefined FUN_147754b38(void)

undefined4 * FUN_147754b38(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_14113f0c0(param_1 + 0x300);
  if (cVar4 != '\0') {
    local_38 = 0;
    uStack_30 = 0;
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x300);
    uVar6 = FUN_14477b072(plVar5,*(undefined8 *)(param_1 + 0x308));
    (**(code **)(*plVar5 + 0x248))(plVar5,uVar6,&local_38);
    *param_2 = (undefined4)local_38;
    param_2[1] = local_38._4_4_;
    param_2[2] = (undefined4)uStack_30;
    param_2[3] = uStack_30._4_4_;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2f4);
  uVar2 = *(undefined4 *)(param_1 + 0x2f8);
  uVar3 = *(undefined4 *)(param_1 + 0x2fc);
  *param_2 = *(undefined4 *)(param_1 + 0x2f0);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147754be4 FUN_147754be4 body=105 status=ok
// SIG undefined FUN_147754be4(void)

void FUN_147754be4(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x2f4) = uVar1;
  *(undefined4 *)(param_1 + 0x2f8) = uVar2;
  *(undefined4 *)(param_1 + 0x2fc) = uVar3;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_1410da87a();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754c58 FUN_147754c58 body=89 status=ok
// SIG undefined FUN_147754c58(void)

void FUN_147754c58(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x311) = uVar1;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_1410da8fe();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754cfa FUN_147754cfa body=84 status=ok
// SIG undefined FUN_147754cfa(void)

void FUN_147754cfa(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_1410da560(*(longlong *)(param_1 + 0x318),&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754d50 FUN_147754d50 body=84 status=ok
// SIG undefined FUN_147754d50(void)

void FUN_147754d50(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_1410da3b8(*(longlong *)(param_1 + 0x318),&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754da6 FUN_147754da6 body=84 status=ok
// SIG undefined FUN_147754da6(void)

void FUN_147754da6(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_1410da984(*(longlong *)(param_1 + 0x318),&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754dfc FUN_147754dfc body=83 status=ok
// SIG undefined FUN_147754dfc(void)

void FUN_147754dfc(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_1410daa1a();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754e50 FUN_147754e50 body=84 status=ok
// SIG undefined FUN_147754e50(void)

void FUN_147754e50(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_1410da4f6(*(longlong *)(param_1 + 0x318),&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754ea6 FUN_147754ea6 body=85 status=ok
// SIG undefined FUN_147754ea6(void)

void FUN_147754ea6(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1410da422();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147754f1e FUN_147754f1e body=1086 status=ok
// SIG undefined FUN_147754f1e(void)

void FUN_147754f1e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined5 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined1 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[99] != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cab88d8) {
      FUN_144b3d300(&DAT_14cab88d8);
      if (DAT_14cab88d8 == -1) {
        FUN_1446f470e(&DAT_14cab88d0,L"TextDelegate",1);
        _Init_thread_footer(&DAT_14cab88d8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cab88e8) {
      FUN_144b3d300(&DAT_14cab88e8);
      if (DAT_14cab88e8 == -1) {
        FUN_1446f470e(&DAT_14cab88e0,L"ColorAndOpacityDelegate",1);
        _Init_thread_footer(&DAT_14cab88e8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cab88f8) {
      FUN_144b3d300(&DAT_14cab88f8);
      if (DAT_14cab88f8 == -1) {
        FUN_1446f470e(&DAT_14cab88f0,L"ShadowColorAndOpacityDelegate",1);
        _Init_thread_footer(&DAT_14cab88f8);
      }
    }
    lVar1 = *param_2;
    if (lVar1 == DAT_14cab88d0) {
      (**(code **)(*param_1 + 0x360))(param_1,&local_58);
      lVar1 = param_1[99];
      local_80 = local_58;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_78 = uStack_50;
      local_70 = (undefined1)uStack_48;
      local_68 = 0;
      local_60 = 0;
      FUN_1413a4324(&local_68,&local_40);
      FUN_140a5cace(lVar1,&local_80);
      FUN_1449db362(&local_40);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    else {
      if (lVar1 == DAT_14cab88e0) {
        cVar2 = FUN_14113f0c0((longlong)param_1 + 0x1bc);
        if (cVar2 == '\0') {
          uStack_48 = *(uint *)(param_1 + 0x37);
          local_58 = (longlong *)param_1[0x35];
          uStack_50 = (undefined4)param_1[0x36];
          uStack_4c = (undefined4)((ulonglong)param_1[0x36] >> 0x20);
          uStack_44 = 1;
          local_40 = 0;
          uStack_38 = 0;
        }
        else {
          local_88 = *(longlong *)((longlong)param_1 + 0x1c4);
          uVar3 = FUN_14479d2ce((longlong)param_1 + 0x1bc);
          local_58 = (longlong *)0x3f800000;
          uStack_50 = 0x3f800000;
          uStack_4c = 0x3f800000;
          uStack_48 = uStack_48 & 0xffffff00;
          local_40 = 0;
          uStack_38 = 0;
          uStack_44 = 1;
          FUN_1446efa72(&local_40,0,3,0x10);
          uStack_38 = CONCAT44(uStack_38._4_4_,3);
          FUN_1477688f4(local_40,uVar3,&local_88);
        }
        lVar1 = param_1[99];
        uStack_a8 = CONCAT14(uStack_44,uStack_48);
        local_b8 = (undefined4)local_58;
        uStack_b4 = local_58._4_4_;
        uStack_b0 = uStack_50;
        uStack_ac = uStack_4c;
        local_a0 = 0;
        local_98 = 0;
        FUN_140a5aaa0(&local_a0,&local_40);
        FUN_1410da5ca(lVar1,&local_b8);
      }
      else {
        if (lVar1 != DAT_14cab88f0) goto LAB_147755107;
        cVar2 = FUN_14113f0c0(param_1 + 0x60);
        if (cVar2 == '\0') {
          local_58 = (longlong *)param_1[0x5e];
          uStack_50 = (undefined4)param_1[0x5f];
          uStack_4c = (undefined4)((ulonglong)param_1[0x5f] >> 0x20);
          uStack_48 = CONCAT31(uStack_48._1_3_,1);
          local_40 = 0;
          uStack_38 = 0;
        }
        else {
          local_88 = param_1[0x61];
          uVar3 = FUN_14479d2ce(param_1 + 0x60);
          local_58 = (longlong *)0x0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_40 = 0;
          uStack_38 = 0;
          uStack_48 = CONCAT31(uStack_48._1_3_,1);
          FUN_1446efa72(&local_40,0,3,0x10);
          uStack_38 = CONCAT44(uStack_38._4_4_,3);
          FUN_147703202(local_40,uVar3,&local_88);
        }
        lVar1 = param_1[99];
        local_d8 = (undefined1)uStack_48;
        local_e8 = (undefined4)local_58;
        uStack_e4 = local_58._4_4_;
        uStack_e0 = uStack_50;
        uStack_dc = uStack_4c;
        local_d0 = 0;
        local_c8 = 0;
        FUN_140a5c51c(&local_d0,&local_40);
        FUN_1410da87a(lVar1,&local_e8);
      }
      FUN_1449db362(&local_40);
    }
  }
LAB_147755107:
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147755368 FUN_147755368 body=156 status=ok
// SIG undefined FUN_147755368(void)

void FUN_147755368(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x300))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147755406 FUN_147755406 body=73 status=ok
// SIG undefined FUN_147755406(void)

void FUN_147755406(undefined8 param_1,undefined2 *param_2)

{
  undefined1 auStack_38 [44];
  undefined2 local_c;
  undefined1 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  local_a = *(undefined1 *)(param_2 + 1);
  FUN_147755450(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147755450 FUN_147755450 body=171 status=ok
// SIG undefined FUN_147755450(void)

void FUN_147755450(longlong *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 auStack_38 [44];
  undefined2 local_c;
  byte local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  bVar1 = *(byte *)(param_1 + 0x2d);
  if (((((bVar1 & 1) != (*param_2 & 1)) || (((*param_2 ^ bVar1) & 2) != 0)) ||
      (((bVar1 & 1) != 0 && (*(byte *)((longlong)param_1 + 0x169) != param_2[1])))) ||
     (((bVar1 & 2) != 0 && (*(byte *)((longlong)param_1 + 0x16a) != param_2[2])))) {
    *(byte *)((longlong)param_1 + 0x16a) = param_2[2];
    *(undefined2 *)(param_1 + 0x2d) = *(undefined2 *)param_2;
    local_a = param_2[2];
    local_c = *(undefined2 *)param_2;
    (**(code **)(*param_1 + 0x308))(param_1,&local_c);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147755574 FUN_147755574 body=28 status=ok
// SIG undefined FUN_147755574(void)

void FUN_147755574(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x16e) == param_2) {
    return;
  }
  *(char *)((longlong)param_1 + 0x16e) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014775558d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x338))();
  return;
}



// FUNCTION 1477555ba FUN_1477555ba body=37 status=ok
// SIG undefined FUN_1477555ba(void)

void FUN_1477555ba(longlong *param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x2e) == param_2) && (!NAN(*(float *)(param_1 + 0x2e)) && !NAN(param_2))
     ) {
    return;
  }
  *(float *)(param_1 + 0x2e) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001477555db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x328))();
  return;
}



// FUNCTION 14775563e FUN_14775563e body=93 status=ok
// SIG undefined FUN_14775563e(void)

void FUN_14775563e(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (((((*(float *)((longlong)param_1 + 0x174) == *param_2) &&
        (!NAN(*(float *)((longlong)param_1 + 0x174)) && !NAN(*param_2))) &&
       (*(float *)((longlong)param_1 + 0x17c) == param_2[2])) &&
      ((!NAN(*(float *)((longlong)param_1 + 0x17c)) && !NAN(param_2[2]) &&
       (*(float *)(param_1 + 0x2f) == param_2[1])))) &&
     ((!NAN(*(float *)(param_1 + 0x2f)) && !NAN(param_2[1]) &&
      ((*(float *)(param_1 + 0x30) == param_2[3] &&
       (!NAN(*(float *)(param_1 + 0x30)) && !NAN(param_2[3]))))))) {
    return;
  }
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *(float *)((longlong)param_1 + 0x174) = fVar1;
  *(float *)(param_1 + 0x2f) = fVar2;
  *(float *)((longlong)param_1 + 0x17c) = fVar3;
  *(float *)(param_1 + 0x30) = fVar4;
                    /* WARNING: Could not recover jumptable at 0x000147755667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x340))
            (fVar1,(float *)((longlong)param_1 + 0x174),*(code **)(*param_1 + 0x340));
  return;
}



// FUNCTION 1477556fc FUN_1477556fc body=202 status=ok
// SIG undefined FUN_1477556fc(void)

void FUN_1477556fc(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x16c) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_146a5d772(*(longlong *)(param_1 + 0x220),
                  (uint)*(byte *)(param_1 + 0x16d) + (uint)(local_1c != 0) * 2 +
                  (uint)*(byte *)(param_1 + 0x16e) * 4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477557cc FUN_1477557cc body=204 status=ok
// SIG undefined FUN_1477557cc(void)

void FUN_1477557cc(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x16e) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_146a5d772(*(longlong *)(param_1 + 0x220),
                  (uint)*(byte *)(param_1 + 0x16d) + (uint)(local_1c != 0) * 4 +
                  (uint)*(byte *)(param_1 + 0x16c) * 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775589e FUN_14775589e body=202 status=ok
// SIG undefined FUN_14775589e(void)

void FUN_14775589e(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x16d) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_146a5d772(*(longlong *)(param_1 + 0x220),
                  (uint)(local_1c != 0) + (uint)*(byte *)(param_1 + 0x16c) * 2 +
                  (uint)*(byte *)(param_1 + 0x16e) * 4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147755a32 FUN_147755a32 body=316 status=ok
// SIG undefined FUN_147755a32(void)

void FUN_147755a32(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = &PTR_FUN_149ed05f0;
  local_e0 = *(undefined4 *)(param_1 + 0x178);
  uStack_dc = *(undefined4 *)(param_1 + 0x17c);
  uStack_d8 = *(undefined4 *)(param_1 + 0x180);
  uStack_d4 = *(undefined4 *)(param_1 + 0x184);
  local_d0 = *(undefined4 *)(param_1 + 0x188);
  uStack_cc = *(undefined4 *)(param_1 + 0x18c);
  uStack_c8 = *(undefined4 *)(param_1 + 400);
  uStack_c4 = *(undefined4 *)(param_1 + 0x194);
  local_c0 = *(undefined4 *)(param_1 + 0x198);
  uStack_bc = *(undefined4 *)(param_1 + 0x19c);
  uStack_b8 = *(undefined4 *)(param_1 + 0x1a0);
  uStack_b4 = *(undefined4 *)(param_1 + 0x1a4);
  local_b0 = *(longlong *)(param_1 + 0x1a8);
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = (undefined8 *)(param_1 + 0x1b0);
  puVar6 = local_a8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_54 = *(undefined1 *)(param_1 + 0x204);
  local_58 = *(undefined4 *)(param_1 + 0x200);
  local_50 = *(undefined8 *)(param_1 + 0x208);
  local_48 = *(longlong **)(param_1 + 0x210);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_40 = *(undefined8 *)(param_1 + 0x218);
  FUN_140f13d9e(param_2,&local_e8);
  plVar3 = local_48;
  local_e8 = &PTR_FUN_149ed05f0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147755b70 FUN_147755b70 body=49 status=ok
// SIG undefined FUN_147755b70(void)

void FUN_147755b70(longlong param_1)

{
  FUN_140f13d9e(param_1 + 0x170);
  if (*(longlong *)(param_1 + 0x220) != 0) {
    thunk_FUN_140163244();
    return;
  }
  return;
}



// FUNCTION 147755bbc FUN_147755bbc body=80 status=ok
// SIG undefined FUN_147755bbc(void)

void FUN_147755bbc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x220) = 0;
  plVar3 = *(longlong **)(param_1 + 0x228);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x228) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147755c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147755c0c FUN_147755c0c body=549 status=ok
// SIG undefined FUN_147755c0c(void)

undefined8 * FUN_147755c0c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 local_211;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [424];
  longlong local_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_147755e32(local_1e8);
  local_40 = param_1 + 0x170;
  iVar4 = 0x19;
  if (*(int *)(param_1 + 0x168) < 0x19) {
    iVar4 = *(int *)(param_1 + 0x168);
  }
  local_38 = 1;
  if (1 < iVar4) {
    local_38 = iVar4;
  }
  local_34 = (uint)*(byte *)(param_1 + 0x16d) + (uint)*(byte *)(param_1 + 0x16c) * 2 +
             (uint)*(byte *)(param_1 + 0x16e) * 4;
  local_228 = &local_211;
  FUN_147775148(local_210,"SThrobber",".\\Runtime/UMG/Private/Components/Throbber.cpp",0x30);
  FUN_147755ed2(local_210,&local_1f8,local_1e8);
  plVar3 = local_1f0;
  if (local_1f0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x220) = local_1f8;
    plVar5 = *(longlong **)(param_1 + 0x228);
    if (plVar5 == (longlong *)0x0) goto LAB_147755d6a;
    *(undefined8 *)(param_1 + 0x228) = 0;
LAB_147755d32:
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147755d6a;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x220) = local_1f8;
    plVar5 = *(longlong **)(param_1 + 0x228);
    if (local_1f0 != plVar5) {
      *(longlong **)(param_1 + 0x228) = local_1f0;
      if (plVar5 == (longlong *)0x0) goto LAB_147755d6a;
      goto LAB_147755d32;
    }
    LOCK();
    plVar5 = local_1f0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_147755d6a;
    (**(code **)*local_1f0)(local_1f0);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_147755d6a:
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1f0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)local_1f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_208 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)local_208 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_208 + 0x10))(local_208);
      }
    }
  }
  FUN_140a4ff8c(local_1e8);
  uVar2 = *(undefined8 *)(param_1 + 0x220);
  plVar3 = *(longlong **)(param_1 + 0x228);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = uVar2;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = uVar2;
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  if ((local_30 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147755e32 FUN_147755e32 body=158 status=ok
// SIG undefined FUN_147755e32(void)

longlong FUN_147755e32(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a5071c();
  plVar1 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_28,"Throbber.Chunk",1);
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,local_28,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined8 *)(param_1 + 0x1b0) = 0x700000003;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147755ed2 FUN_147755ed2 body=115 status=ok
// SIG undefined FUN_147755ed2(void)

longlong * FUN_147755ed2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a5cc3c(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147755f46 FUN_147755f46 body=143 status=ok
// SIG undefined FUN_147755f46(void)

void FUN_147755f46(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x220) == 0) {
    return;
  }
  FUN_146a5d722(*(longlong *)(param_1 + 0x220),param_1 + 0x170);
  thunk_FUN_140163244(*(undefined8 *)(param_1 + 0x220));
  iVar2 = 0x19;
  if (*(int *)(param_1 + 0x168) < 0x19) {
    iVar2 = *(int *)(param_1 + 0x168);
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  FUN_146a5d742(*(undefined8 *)(param_1 + 0x220),iVar1);
  FUN_146a5d772(*(undefined8 *)(param_1 + 0x220),
                (uint)*(byte *)(param_1 + 0x16d) + (uint)*(byte *)(param_1 + 0x16c) * 2 +
                (uint)*(byte *)(param_1 + 0x16e) * 4);
  return;
}



// FUNCTION 147756036 FUN_147756036 body=14 status=ok
// SIG undefined FUN_147756036(void)

bool FUN_147756036(longlong param_1)

{
  return (byte)(*(char *)(param_1 + 0xb48) - 3U) < 3;
}



// FUNCTION 147756044 FUN_147756044 body=156 status=ok
// SIG undefined FUN_147756044(void)

void FUN_147756044(undefined8 param_1,longlong param_2)

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
  FUN_1477560e2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477560e2 FUN_1477560e2 body=150 status=ok
// SIG undefined FUN_1477560e2(void)

void FUN_1477560e2(longlong param_1,float param_2)

{
  undefined1 auStack_48 [40];
  float local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(float *)(param_1 + 0xb40) = param_2;
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    if (((byte)(*(char *)(param_1 + 0xb48) - 3U) < 3) && (*(char *)(param_1 + 0xb60) == '\0')) {
      local_20 = *(float *)(param_1 + 0xabc);
    }
    else {
      local_20 = *(float *)(param_1 + 0xabc) * 0.5;
    }
    local_20 = local_20 + param_2;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_146af6e70();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775617a FUN_14775617a body=156 status=ok
// SIG undefined FUN_14775617a(void)

void FUN_14775617a(undefined8 param_1,longlong param_2)

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
  FUN_147756218(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147756218 FUN_147756218 body=150 status=ok
// SIG undefined FUN_147756218(void)

void FUN_147756218(longlong param_1,float param_2)

{
  undefined1 auStack_48 [40];
  float local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(float *)(param_1 + 0xb44) = param_2;
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    if (((byte)(*(char *)(param_1 + 0xb48) - 3U) < 3) && (*(char *)(param_1 + 0xb60) == '\0')) {
      local_20 = *(float *)(param_1 + 0xab8);
    }
    else {
      local_20 = *(float *)(param_1 + 0xab8) * 0.5;
    }
    local_20 = local_20 + param_2;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_146af6efe();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477562c2 FUN_1477562c2 body=144 status=ok
// SIG undefined FUN_1477562c2(void)

undefined8 * FUN_1477562c2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147756356(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147756356 FUN_147756356 body=1261 status=ok
// SIG undefined FUN_147756356(void)

undefined8 * FUN_147756356(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [4];
  uint local_dc;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  uint local_d4;
  char local_a0;
  float local_98;
  undefined1 local_94;
  undefined1 local_90 [16];
  float local_80;
  undefined1 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68;
  longlong local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14777548c(local_e0);
  local_e0[0] = *(undefined1 *)(param_1 + 0xa94);
  local_dc = (uint)*(byte *)(param_1 + 0xa91);
  local_d8 = *(undefined1 *)(param_1 + 0xa93);
  local_d7 = *(undefined1 *)(param_1 + 0xa92);
  local_d6 = *(undefined1 *)(param_1 + 0xa95);
  local_a0 = *(char *)(param_1 + 0xb48);
  local_68 = *(undefined1 *)(param_1 + 0xb49);
  local_d4 = (uint)*(byte *)(param_1 + 0xa90);
  local_60 = param_1 + 0x440;
  bVar7 = *(char *)(param_1 + 0xb4a) - 1;
  if (bVar7 < 4) {
    puVar8 = (&PTR_DAT_14a545290)[bVar7];
  }
  else {
    puVar8 = &DAT_14c96b238;
  }
  local_58 = *puVar8;
  if (((byte)(local_a0 - 3U) < 3) && (*(char *)(param_1 + 0xb60) == '\0')) {
    local_80 = *(float *)(param_1 + 0xb44) + *(float *)(param_1 + 0xab8);
    local_f8._0_5_ = CONCAT14(1,local_80);
    local_f0 = (longlong *)0x0;
    uStack_e8 = 0;
    local_7c = 1;
    FUN_144a450dc(local_78,&local_f0);
    FUN_1449db362(&local_f0);
    if (((byte)(*(char *)(param_1 + 0xb48) - 3U) < 3) && (*(char *)(param_1 + 0xb60) == '\0')) {
      local_98 = *(float *)(param_1 + 0xb40) + *(float *)(param_1 + 0xabc);
    }
    else {
      local_98 = *(float *)(param_1 + 0xabc) * 0.5 + *(float *)(param_1 + 0xb40);
    }
    local_f8._0_5_ = CONCAT14(1,local_98);
  }
  else {
    local_80 = *(float *)(param_1 + 0xb44);
    local_f8._0_5_ = CONCAT14(1,local_80);
    local_f0 = (longlong *)0x0;
    uStack_e8 = 0;
    local_7c = 1;
    FUN_144a450dc(local_78,&local_f0);
    FUN_1449db362(&local_f0);
    local_98 = *(float *)(param_1 + 0xb40);
    local_f8._0_5_ = CONCAT14(1,local_98);
  }
  local_94 = 1;
  uStack_e8 = 0;
  local_f0 = (longlong *)0x0;
  FUN_144a450dc(local_90,&local_f0);
  FUN_1449db362(&local_f0);
  FUN_147775536(&local_f8,param_1,param_1 + 0xa98,local_e0);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  *(undefined8 **)(param_1 + 0xb50) = local_f8;
  plVar12 = *(longlong **)(param_1 + 0xb58);
  uVar6 = local_f8;
  plVar10 = local_f0;
  plVar11 = plVar12;
  if (local_f0 != plVar12) {
    *(longlong **)(param_1 + 0xb58) = local_f0;
    plVar11 = local_f0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      uVar6 = *(undefined8 *)(param_1 + 0xb50);
      plVar11 = *(longlong **)(param_1 + 0xb58);
    }
    plVar10 = (longlong *)0x0;
  }
  if (plVar11 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xaa8) = uVar6;
    plVar12 = *(longlong **)(param_1 + 0xab0);
    if (plVar12 == (longlong *)0x0) goto LAB_1477565f6;
    *(undefined8 *)(param_1 + 0xab0) = 0;
LAB_1477567dd:
    LOCK();
    plVar11 = plVar12 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_1477565f6;
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xaa8) = uVar6;
    plVar12 = *(longlong **)(param_1 + 0xab0);
    if (plVar11 != plVar12) {
      *(longlong **)(param_1 + 0xab0) = plVar11;
      if (plVar12 == (longlong *)0x0) goto LAB_1477565f6;
      goto LAB_1477567dd;
    }
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 != 0) goto LAB_1477565f6;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar12 = plVar11;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
LAB_1477565f6:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  plVar12 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_f0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xb50);
  local_f8 = (undefined8 *)0x0;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_1446efa72(&local_f8,0,3,0x10);
  puVar4 = local_f8;
  local_f0 = (longlong *)CONCAT44(local_f0._4_4_,3);
  *local_f8 = &PTR_LAB_14a541520;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_f8[2] = lVar9;
  *local_f8 = &PTR_FUN_14a5432f0;
  local_f8[3] = 0;
  FUN_14485c47a(local_f8 + 3,param_1);
  puVar4[4] = FUN_14773bf14;
  *(undefined4 *)(puVar4 + 5) = 0;
  FUN_147717206(lVar3 + 0x690,&local_f8);
  FUN_1449db362(&local_f8);
  uVar6 = *(undefined8 *)(param_1 + 0xb50);
  plVar12 = *(longlong **)(param_1 + 0xb58);
  if (plVar12 == (longlong *)0x0) {
    *param_2 = uVar6;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    *param_2 = uVar6;
    param_2[1] = plVar12;
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar12 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  FUN_1449db362(local_78);
  FUN_1449db362(local_90);
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147756878 FUN_147756878 body=63 status=ok
// SIG undefined FUN_147756878(void)

float FUN_147756878(longlong param_1)

{
  if (((byte)(*(char *)(param_1 + 0xb48) - 3U) < 3) && (*(char *)(param_1 + 0xb60) == '\0')) {
    return *(float *)(param_1 + 0xb40) + *(float *)(param_1 + 0xabc);
  }
  return *(float *)(param_1 + 0xabc) * 0.5 + *(float *)(param_1 + 0xb40);
}



// FUNCTION 1477568b8 FUN_1477568b8 body=63 status=ok
// SIG undefined FUN_1477568b8(void)

float FUN_1477568b8(longlong param_1)

{
  if (((byte)(*(char *)(param_1 + 0xb48) - 3U) < 3) && (*(char *)(param_1 + 0xb60) == '\0')) {
    return *(float *)(param_1 + 0xb44) + *(float *)(param_1 + 0xab8);
  }
  return *(float *)(param_1 + 0xab8) * 0.5 + *(float *)(param_1 + 0xb44);
}



// FUNCTION 1477568f7 FUN_1477568f7 body=217 status=ok
// SIG undefined FUN_1477568f7(void)

void FUN_1477568f7(longlong param_1,undefined8 param_2,void **param_3)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_40 = param_2;
  FUN_144affaec(&local_38,param_3);
  plVar2 = (longlong *)FUN_14479d2ce(param_1);
  uVar3 = FUN_14477b072(plVar2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar2 + 0x248))(plVar2,uVar3,&local_40);
  _Src = local_38;
  if (&local_38 != param_3) {
    iVar1 = (int)uStack_30;
    lVar4 = (longlong)(int)uStack_30;
    *(int *)(param_3 + 1) = (int)uStack_30;
    if ((int)uStack_30 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      FUN_14010590e(param_3,uStack_30 & 0xffffffff);
      if (iVar1 != 0) {
        memcpy(*param_3,_Src,lVar4 << 3);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477569d8 FUN_1477569d8 body=69 status=ok
// SIG undefined FUN_1477569d8(void)

void FUN_1477569d8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0xb40);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FUN_147782122(plVar1 + 0x11a);
                    /* WARNING: Could not recover jumptable at 0x000147756a16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2d8))(plVar1);
  return;
}



// FUNCTION 147756a1e FUN_147756a1e body=160 status=ok
// SIG undefined FUN_147756a1e(void)

void FUN_147756a1e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(longlong *)(param_1 + 0xb40) != 0) &&
     (iVar1 = *(int *)(param_1 + 0xaa0), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xa98);
    lVar3 = 0;
    do {
      local_38 = *(undefined8 *)(lVar2 + lVar3);
      (**(code **)(**(longlong **)(param_1 + 0xb40) + 0x2e0))
                (*(longlong **)(param_1 + 0xb40),&local_38,1);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147756ac6 FUN_147756ac6 body=273 status=ok
// SIG undefined FUN_147756ac6(void)

void FUN_147756ac6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_20 = local_28;
  plVar1 = *(longlong **)(param_1 + 0xb40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2e0))(plVar1,&local_20,local_2c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147756bdc FUN_147756bdc body=144 status=ok
// SIG undefined FUN_147756bdc(void)

undefined8 * FUN_147756bdc(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147756c70(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147756c70 FUN_147756c70 body=784 status=ok
// SIG undefined FUN_147756c70(void)

undefined8 * FUN_147756c70(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477792e2(&local_48);
  local_44 = *(undefined1 *)(param_1 + 0xa93);
  local_48 = (uint)*(byte *)(param_1 + 0xa91);
  local_43 = *(undefined1 *)(param_1 + 0xa92);
  local_42 = *(undefined1 *)(param_1 + 0xa95);
  local_40 = param_1 + 0x380;
  local_38 = param_1 + 0x440;
  FUN_14777939a(&local_58,param_1,param_1 + 0xa98,&local_48);
  plVar8 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *(undefined8 **)(param_1 + 0xb40) = local_58;
  plVar10 = *(longlong **)(param_1 + 0xb48);
  plVar9 = plVar10;
  if (plVar8 != plVar10) {
    *(longlong **)(param_1 + 0xb48) = plVar8;
    plVar9 = plVar8;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      local_58 = *(undefined8 **)(param_1 + 0xb40);
      plVar9 = *(longlong **)(param_1 + 0xb48);
    }
    plVar8 = (longlong *)0x0;
  }
  if (plVar9 == (longlong *)0x0) {
    *(undefined8 **)(param_1 + 0xaa8) = local_58;
    plVar10 = *(longlong **)(param_1 + 0xab0);
    if (plVar10 == (longlong *)0x0) goto LAB_147756d74;
    *(undefined8 *)(param_1 + 0xab0) = 0;
LAB_147756f2f:
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147756d74;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(undefined8 **)(param_1 + 0xaa8) = local_58;
    plVar10 = *(longlong **)(param_1 + 0xab0);
    if (plVar9 != plVar10) {
      *(longlong **)(param_1 + 0xab0) = plVar9;
      if (plVar10 == (longlong *)0x0) goto LAB_147756d74;
      goto LAB_147756f2f;
    }
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_147756d74;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar10 = plVar9;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_147756d74:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  plVar8 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  lVar3 = *(longlong *)(param_1 + 0xb40);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar5 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a541520;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_58[2] = lVar7;
  *local_58 = &PTR_FUN_14a544200;
  local_58[3] = 0;
  FUN_14485c47a(local_58 + 3,param_1);
  puVar5[4] = FUN_14773bf14;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_147717206(lVar3 + 0x690,&local_58);
  FUN_1449db362(&local_58);
  uVar4 = *(undefined8 *)(param_1 + 0xb40);
  plVar8 = *(longlong **)(param_1 + 0xb48);
  if (plVar8 == (longlong *)0x0) {
    *param_2 = uVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar8;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147756f82 FUN_147756f82 body=73 status=ok
// SIG undefined FUN_147756f82(void)

void FUN_147756f82(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1 + 0x8d0,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147756fcc FUN_147756fcc body=138 status=ok
// SIG undefined FUN_147756fcc(void)

void FUN_147756fcc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x8e8) != 0) && (*(longlong **)(param_1 + 0x8e0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x8e8) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x8e0);
      }
                    /* WARNING: Could not recover jumptable at 0x00014775701f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3);
      return;
    }
  }
  cVar1 = FUN_14113f0c0(param_1 + 0x8c0);
  if (cVar1 == '\0') {
    return;
  }
  FUN_1477568f7(param_1 + 0x8c0,param_2,param_3);
  return;
}



// FUNCTION 147757056 FUN_147757056 body=244 status=ok
// SIG undefined FUN_147757056(void)

void FUN_147757056(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x8b0);
  local_20 = param_2;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(lVar3 + 0x4e8) + 0xd8))(lVar3 + 0x4e8,&local_30,&local_20);
    if ((local_30 != (longlong *)0x0) && (iVar4 = (**(code **)(*local_30 + 0x40))(), 0 < iVar4)) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x2e8))
                        (*(longlong **)(param_1 + 0x8b0),&local_20);
      (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x2e0))
                (*(longlong **)(param_1 + 0x8b0),&local_20,uVar5 ^ 1);
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
  }
  local_30 = local_20;
  FUN_1447cd2ec(param_1 + 0x850,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14775714c FUN_14775714c body=314 status=ok
// SIG undefined FUN_14775714c(void)

void FUN_14775714c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147757288(param_1,local_28,local_2c,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147757288 FUN_147757288 body=153 status=ok
// SIG undefined FUN_147757288(void)

longlong FUN_147757288(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUN_147743a5a(param_1,param_2,0);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_145920fc2();
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        lVar3 + 0x30)) {
      lVar3 = 0;
    }
    else {
      *(int *)(lVar2 + 0x3c) = param_3;
      lVar4 = *(longlong *)(lVar2 + 0x48);
      lVar3 = lVar2;
      if (lVar4 == 0) {
        *(int *)(lVar2 + 0x40) = param_4;
      }
      else {
        if (*(int *)(lVar4 + 0x2c) == param_3) {
          *(int *)(lVar2 + 0x40) = param_4;
        }
        else {
          *(int *)(lVar4 + 0x2c) = param_3;
          FUN_14156c56c(lVar4,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
          lVar4 = *(longlong *)(lVar2 + 0x48);
          *(int *)(lVar2 + 0x40) = param_4;
          if (lVar4 == 0) {
            return lVar2;
          }
        }
        if (*(int *)(lVar4 + 0x28) != param_4) {
          *(int *)(lVar4 + 0x28) = param_4;
          FUN_14156c56c(lVar4,1);
        }
      }
    }
  }
  return lVar3;
}



// FUNCTION 147757322 FUN_147757322 body=196 status=ok
// SIG undefined FUN_147757322(void)

void FUN_147757322(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x194) = local_34;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_146a9f8a6();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477573e8 FUN_1477573e8 body=196 status=ok
// SIG undefined FUN_1477573e8(void)

void FUN_1477573e8(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 400) = local_34;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_146a9f6c8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477574ae FUN_1477574ae body=198 status=ok
// SIG undefined FUN_1477574ae(void)

void FUN_1477574ae(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x180) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x184) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x188) = (undefined4)uStack_50;
  *(undefined4 *)(param_1 + 0x18c) = uStack_50._4_4_;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146a9f69c();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147757582 FUN_147757582 body=105 status=ok
// SIG undefined FUN_147757582(void)

void FUN_147757582(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x184) = uVar1;
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  *(undefined4 *)(param_1 + 0x18c) = uVar3;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_146a9f69c();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477575fa FUN_1477575fa body=95 status=ok
// SIG undefined FUN_1477575fa(void)

void FUN_1477575fa(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 400) = uVar1;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_146a9f6c8();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147757668 FUN_147757668 body=95 status=ok
// SIG undefined FUN_147757668(void)

void FUN_147757668(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x194) = uVar1;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_146a9f8a6();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477576cc FUN_1477576cc body=155 status=ok
// SIG undefined FUN_1477576cc(void)

void FUN_1477576cc(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x198) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1a0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147757763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14775776e FUN_14775776e body=102 status=ok
// SIG undefined FUN_14775776e(void)

void FUN_14775776e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x198);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x1a0);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_1477577d6(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477577d6 FUN_1477577d6 body=305 status=ok
// SIG undefined FUN_1477577d6(void)

void FUN_1477577d6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  longlong *local_c8;
  undefined1 local_b9;
  code *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8 [3];
  uint local_90;
  undefined1 local_8c;
  uint local_88;
  undefined1 local_84;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_146a9f8d2(*param_2,local_a8,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x3c));
  *(undefined8 *)(param_1 + 0x48) = local_a8[0];
  local_90 = (uint)*(byte *)(param_1 + 0x38);
  local_8c = 1;
  local_88 = (uint)*(byte *)(param_1 + 0x39);
  local_84 = 1;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_d0 = DAT_14c98dec8;
    local_c8 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_b0 = &local_b9;
    local_b8 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_d0);
  }
  FUN_146b0630a(local_a8,&local_d0);
  plVar3 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_146b0f654(local_a8);
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
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147757908 FUN_147757908 body=222 status=ok
// SIG undefined FUN_147757908(void)

void FUN_147757908(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x198) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x198);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_146a9f972(uVar4,&local_38);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
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
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477579e8 FUN_1477579e8 body=674 status=ok
// SIG undefined FUN_1477579e8(void)

undefined8 * FUN_1477579e8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  undefined8 local_298;
  longlong local_290;
  undefined1 local_281;
  undefined1 local_280 [8];
  longlong *local_278;
  undefined8 local_268;
  longlong *local_260;
  undefined1 local_258 [528];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_146b06254(local_258);
  local_2a8 = &local_281;
  FUN_146b07bfe(local_280,"SUniformGridPanel",
                ".\\Runtime/UMG/Private/Components/UniformGridPanel.cpp",0x3a);
  FUN_146b06392(local_280,&local_268,local_258);
  plVar6 = local_260;
  if (local_260 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x198) = local_268;
    plVar9 = *(longlong **)(param_1 + 0x1a0);
    if (plVar9 == (longlong *)0x0) goto LAB_147757a93;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
LAB_147757c52:
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_147757a93;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_260 + 1) = (int)local_260[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x198) = local_268;
    plVar9 = *(longlong **)(param_1 + 0x1a0);
    if (local_260 != plVar9) {
      *(longlong **)(param_1 + 0x1a0) = local_260;
      if (plVar9 == (longlong *)0x0) goto LAB_147757a93;
      goto LAB_147757c52;
    }
    LOCK();
    plVar9 = local_260 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147757a93;
    (**(code **)*local_260)(local_260);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar6;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_147757a93:
  if (local_260 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_260 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_260)(local_260);
      LOCK();
      piVar1 = (int *)((longlong)local_260 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_260 + 0x10))(local_260);
      }
    }
  }
  if (local_278 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_278 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_278)(local_278);
      LOCK();
      piVar1 = (int *)((longlong)local_278 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_278 + 0x10))(local_278);
      }
    }
  }
  FUN_146b06406(local_258);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if (lVar4 != 0) {
        lVar7 = FUN_145920fc2();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_298 = *(undefined8 *)(param_1 + 0x198);
          local_290 = *(longlong *)(param_1 + 0x1a0);
          if (local_290 != 0) {
            LOCK();
            *(int *)(local_290 + 8) = *(int *)(local_290 + 8) + 1;
            UNLOCK();
          }
          FUN_1477577d6(lVar4,&local_298);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x198);
  plVar6 = *(longlong **)(param_1 + 0x1a0);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147757c8c FUN_147757c8c body=196 status=ok
// SIG undefined FUN_147757c8c(void)

void FUN_147757c8c(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_58 = *(undefined4 *)(param_1 + 0x180);
    uStack_54 = *(undefined4 *)(param_1 + 0x184);
    uStack_50 = *(undefined4 *)(param_1 + 0x188);
    uStack_4c = *(undefined4 *)(param_1 + 0x18c);
    local_48 = 1;
    local_40 = 0;
    uStack_38 = 0;
    FUN_146a9f69c();
    local_70 = *(undefined4 *)(param_1 + 400);
    local_6c = 1;
    local_68 = 0;
    uStack_60 = 0;
    FUN_146a9f6c8(*(undefined8 *)(param_1 + 0x198));
    local_88 = *(undefined4 *)(param_1 + 0x194);
    local_84 = 1;
    local_80 = 0;
    uStack_78 = 0;
    FUN_146a9f8a6(*(undefined8 *)(param_1 + 0x198));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147757d52 FUN_147757d52 body=173 status=ok
// SIG undefined FUN_147757d52(void)

void FUN_147757d52(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(int *)(param_1 + 0x40) = local_1c;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x28) != local_1c)) {
    *(int *)(lVar1 + 0x28) = local_1c;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147757e00 FUN_147757e00 body=171 status=ok
// SIG undefined FUN_147757e00(void)

void FUN_147757e00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x38) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x20) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x20) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147757eac FUN_147757eac body=173 status=ok
// SIG undefined FUN_147757eac(void)

void FUN_147757eac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(int *)(param_1 + 0x3c) = local_1c;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x2c) != local_1c)) {
    *(int *)(lVar1 + 0x2c) = local_1c;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147757f5a FUN_147757f5a body=171 status=ok
// SIG undefined FUN_147757f5a(void)

void FUN_147757f5a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x39) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x24) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x24) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758086 FUN_147758086 body=129 status=ok
// SIG undefined FUN_147758086(void)

void FUN_147758086(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x2c) != *(int *)(param_1 + 0x3c)) {
      *(int *)(lVar1 + 0x2c) = *(int *)(param_1 + 0x3c);
      FUN_14156c56c(lVar1,1);
      lVar1 = *(longlong *)(param_1 + 0x48);
      if (lVar1 == 0) {
        return;
      }
    }
    if (*(int *)(lVar1 + 0x28) != *(int *)(param_1 + 0x40)) {
      *(int *)(lVar1 + 0x28) = *(int *)(param_1 + 0x40);
      FUN_14156c56c(lVar1,1);
      lVar1 = *(longlong *)(param_1 + 0x48);
      if (lVar1 == 0) {
        return;
      }
    }
    if (*(uint *)(lVar1 + 0x20) != (uint)*(byte *)(param_1 + 0x38)) {
      *(uint *)(lVar1 + 0x20) = (uint)*(byte *)(param_1 + 0x38);
      FUN_14156c56c(lVar1,1);
      lVar1 = *(longlong *)(param_1 + 0x48);
      if (lVar1 == 0) {
        return;
      }
    }
    if (*(uint *)(lVar1 + 0x24) != (uint)*(byte *)(param_1 + 0x39)) {
      *(uint *)(lVar1 + 0x24) = (uint)*(byte *)(param_1 + 0x39);
      FUN_14156c56c(lVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147758108 FUN_147758108 body=164 status=ok
// SIG undefined FUN_147758108(void)

void FUN_147758108(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1477581ae(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477581ae FUN_1477581ae body=66 status=ok
// SIG undefined FUN_1477581ae(void)

longlong FUN_1477581ae(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147743a5a(param_1,param_2,0);
  if (lVar1 != 0) {
    lVar2 = FUN_1459210ac();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1477581fa FUN_1477581fa body=102 status=ok
// SIG undefined FUN_1477581fa(void)

void FUN_1477581fa(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x188);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_147758262(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758262 FUN_147758262 body=540 status=ok
// SIG undefined FUN_147758262(void)

void FUN_147758262(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined4 local_1d0 [2];
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_161;
  code *local_160;
  undefined1 *local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_110 [8];
  undefined8 local_108 [3];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0;
  undefined1 local_d8 [16];
  uint local_c8;
  undefined1 local_c4;
  uint local_c0;
  undefined1 local_bc;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_140767c14(*param_2,local_110,0xffffffff);
  *(undefined8 *)(param_1 + 0x58) = local_108[0];
  local_198 = *(undefined4 *)(param_1 + 0x40);
  uStack_194 = *(undefined4 *)(param_1 + 0x44);
  uStack_190 = *(undefined4 *)(param_1 + 0x48);
  uStack_18c = *(undefined4 *)(param_1 + 0x4c);
  local_188 = 1;
  local_180 = 0;
  uStack_178 = 0;
  local_e0 = 1;
  local_f0 = local_198;
  uStack_ec = uStack_194;
  uStack_e8 = uStack_190;
  uStack_e4 = uStack_18c;
  FUN_144a450dc(local_d8,&local_180);
  FUN_1449db362(&local_180);
  local_c8 = (uint)*(byte *)(param_1 + 0x50);
  local_c4 = 1;
  local_c0 = (uint)*(byte *)(param_1 + 0x51);
  local_bc = 1;
  FUN_14772ea74(local_1d0,param_1 + 0x38);
  local_150 = local_1d0[0];
  local_148 = local_1c8;
  local_144 = local_1c4;
  local_140 = local_1c0;
  local_1c0 = 0;
  local_138 = local_1b8;
  local_1b8 = 0;
  local_130 = local_1b0;
  local_12c = local_1ac;
  local_128 = local_1a8;
  local_1a8 = 0;
  local_120 = local_1a0;
  local_1a0 = 0;
  local_118 = 1;
  FUN_14772ebf0(local_108);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_1e0 = DAT_14c98dec8;
    local_1d8 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_158 = &local_161;
    local_160 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_1e0);
  }
  FUN_145aaf878(local_108,&local_1e0);
  plVar3 = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1449db362(&local_1a8);
  FUN_1449db362(&local_1c0);
  FUN_140767802(local_110);
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
  if ((local_38 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758480 FUN_147758480 body=222 status=ok
// SIG undefined FUN_147758480(void)

void FUN_147758480(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x180);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_1469779b4(uVar4,&local_38);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
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
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758560 FUN_147758560 body=637 status=ok
// SIG undefined FUN_147758560(void)

undefined8 * FUN_147758560(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined1 local_229;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined8 local_210;
  longlong *local_208;
  undefined1 local_200 [440];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_1407679b0(local_200);
  local_248 = &local_229;
  FUN_14076837c(local_228,"SVerticalBox",".\\Runtime/UMG/Private/Components/VerticalBox.cpp",0x3d);
  FUN_14076784c(local_228,&local_210,local_200);
  plVar6 = local_208;
  if (local_208 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = local_210;
    plVar8 = *(longlong **)(param_1 + 0x188);
    if (plVar8 == (longlong *)0x0) goto LAB_147758674;
    *(undefined8 *)(param_1 + 0x188) = 0;
LAB_14775863c:
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_147758674;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar8;
  }
  else {
    LOCK();
    *(int *)(local_208 + 1) = (int)local_208[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x180) = local_210;
    plVar8 = *(longlong **)(param_1 + 0x188);
    if (local_208 != plVar8) {
      *(longlong **)(param_1 + 0x188) = local_208;
      if (plVar8 == (longlong *)0x0) goto LAB_147758674;
      goto LAB_14775863c;
    }
    LOCK();
    plVar8 = local_208 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_147758674;
    (**(code **)*local_208)(local_208);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_147758674:
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_208 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)local_208 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_208 + 0x10))(local_208);
      }
    }
  }
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_220 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  FUN_14149255e(local_200);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if (lVar4 != 0) {
        lVar7 = FUN_1459210ac();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_240 = *(undefined8 *)(param_1 + 0x180);
          local_238 = *(longlong *)(param_1 + 0x188);
          if (local_238 != 0) {
            LOCK();
            *(int *)(local_238 + 8) = *(int *)(local_238 + 8) + 1;
            UNLOCK();
          }
          FUN_147758262(lVar4,&local_240);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  plVar6 = *(longlong **)(param_1 + 0x188);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477587de FUN_1477587de body=171 status=ok
// SIG undefined FUN_1477587de(void)

void FUN_1477587de(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x50) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x38) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x38) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477588a6 FUN_1477588a6 body=163 status=ok
// SIG undefined FUN_1477588a6(void)

void FUN_1477588a6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
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
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_14775894a(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775894a FUN_14775894a body=117 status=ok
// SIG undefined FUN_14775894a(void)

void FUN_14775894a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a55872(lVar1 + 0x28,lVar1 + 0x20,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477589c0 FUN_1477589c0 body=160 status=ok
// SIG undefined FUN_1477589c0(void)

void FUN_1477589c0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0x3f800000;
  uStack_1c = CONCAT31(uStack_1c._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147758a62(param_1,CONCAT44(uStack_1c,local_20));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758a62 FUN_147758a62 body=99 status=ok
// SIG undefined FUN_147758a62(void)

void FUN_147758a62(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [56];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x58);
  local_20 = param_2;
  if (lVar1 != 0) {
    FUN_14772ea74(local_58,&local_20);
    FUN_147758bfc(lVar1,local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758ac6 FUN_147758ac6 body=171 status=ok
// SIG undefined FUN_147758ac6(void)

void FUN_147758ac6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x51) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x3c) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x3c) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758b7a FUN_147758b7a body=62 status=ok
// SIG undefined FUN_147758b7a(void)

void FUN_147758b7a(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14775894a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758bfc FUN_147758bfc body=178 status=ok
// SIG undefined FUN_147758bfc(void)

void FUN_147758bfc(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *param_2;
  *(int *)(param_1 + 0x40) = iVar2;
  lVar1 = param_1 + 0x20;
  if (iVar2 == 2) {
    if ((char)param_2[9] == '\x01') {
      FUN_140a513ea(param_1 + 0x48,lVar1,param_2 + 8);
    }
    else {
      FUN_14697cee2(param_1 + 0x48,lVar1,param_2 + 2);
    }
  }
  else {
    local_24 = 0x3f800000;
    FUN_140a51568(param_1 + 0x48,lVar1);
  }
  FUN_140a513ea(param_1 + 0x44,lVar1,param_2 + 2);
  FUN_1449db362(param_2 + 10);
  FUN_1449db362(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758cb0 FUN_147758cb0 body=147 status=ok
// SIG undefined FUN_147758cb0(void)

void FUN_147758cb0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x40);
  uStack_24 = *(undefined4 *)(param_1 + 0x44);
  uStack_20 = *(undefined4 *)(param_1 + 0x48);
  uStack_1c = *(undefined4 *)(param_1 + 0x4c);
  FUN_14775894a();
  FUN_147758a62(param_1,*(undefined8 *)(param_1 + 0x38));
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x38) != (uint)*(byte *)(param_1 + 0x50)) {
      *(uint *)(lVar1 + 0x38) = (uint)*(byte *)(param_1 + 0x50);
      FUN_14156c56c(lVar1,1);
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (lVar1 == 0) goto LAB_147758d16;
    }
    if (*(uint *)(lVar1 + 0x3c) != (uint)*(byte *)(param_1 + 0x51)) {
      *(uint *)(lVar1 + 0x3c) = (uint)*(byte *)(param_1 + 0x51);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
LAB_147758d16:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758d54 FUN_147758d54 body=142 status=ok
// SIG undefined FUN_147758d54(void)

void FUN_147758d54(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 400) == 0) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x2c8);
    local_18 = *(undefined8 *)(lVar1 + 0xa78);
    local_28 = *(undefined8 *)(lVar1 + 0xa68);
    uStack_20 = *(undefined8 *)(lVar1 + 0xa70);
  }
  *(undefined8 *)(param_3 + 4) = local_18;
  *param_3 = (undefined4)local_28;
  param_3[1] = local_28._4_4_;
  param_3[2] = (undefined4)uStack_20;
  param_3[3] = uStack_20._4_4_;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758e10 FUN_147758e10 body=142 status=ok
// SIG undefined FUN_147758e10(void)

void FUN_147758e10(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 400) == 0) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x2c8);
    local_18 = *(undefined8 *)(lVar1 + 0xa90);
    local_28 = *(undefined8 *)(lVar1 + 0xa80);
    uStack_20 = *(undefined8 *)(lVar1 + 0xa88);
  }
  *(undefined8 *)(param_3 + 4) = local_18;
  *param_3 = (undefined4)local_28;
  param_3[1] = local_28._4_4_;
  param_3[2] = (undefined4)uStack_20;
  param_3[3] = uStack_20._4_4_;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758ea4 FUN_147758ea4 body=158 status=ok
// SIG undefined FUN_147758ea4(void)

void FUN_147758ea4(undefined8 param_1,longlong param_2)

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
  FUN_147758f44(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147758f44 FUN_147758f44 body=376 status=ok
// SIG undefined FUN_147758f44(void)

void FUN_147758f44(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_97;
  undefined4 uStack_93;
  undefined4 uStack_8f;
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (undefined8 *)(param_1 + 0x1a0);
  FUN_145c28cde(puVar1);
  if (*(longlong *)(param_1 + 400) != 0) {
    if (param_2 == '\0') {
      FUN_145c28cde(puVar1);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x2c8);
      local_a8 = *puVar1;
      uStack_97 = *(undefined4 *)(param_1 + 0x1b1);
      uStack_93 = *(undefined4 *)(param_1 + 0x1b5);
      uStack_8f = *(undefined4 *)(param_1 + 0x1b9);
      uStack_98 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x1ad) >> 0x18);
      uStack_a0 = (undefined4)*(undefined8 *)(param_1 + 0x1a8);
      uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20);
      local_78 = 0;
      uStack_70 = 0;
      FUN_144a69486(local_88,param_1 + 0x1c0);
      *(ulonglong *)(lVar2 + 0xb35) = CONCAT44(uStack_97,CONCAT13(uStack_98,uStack_9c._1_3_));
      *(ulonglong *)(lVar2 + 0xb3d) = CONCAT44(uStack_8f,uStack_93);
      *(undefined4 *)(lVar2 + 0xb28) = (undefined4)local_a8;
      *(undefined4 *)(lVar2 + 0xb2c) = local_a8._4_4_;
      *(undefined4 *)(lVar2 + 0xb30) = uStack_a0;
      *(undefined4 *)(lVar2 + 0xb34) = uStack_9c;
      lVar3 = local_78;
      if ((undefined8 *)(lVar2 + 0xb28) != &local_a8) {
        FUN_144a69486(lVar2 + 0xb48,local_88);
        lVar3 = local_78;
      }
    }
    else {
      FUN_14775a836();
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x2c8);
      local_68 = *puVar1;
      uStack_57 = *(undefined4 *)(param_1 + 0x1b1);
      uStack_53 = *(undefined4 *)(param_1 + 0x1b5);
      uStack_4f = *(undefined4 *)(param_1 + 0x1b9);
      uStack_58 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x1ad) >> 0x18);
      uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x1a8);
      uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20);
      local_38 = 0;
      uStack_30 = 0;
      FUN_144a69486(local_48,param_1 + 0x1c0);
      *(ulonglong *)(lVar2 + 0xb35) = CONCAT44(uStack_57,CONCAT13(uStack_58,uStack_5c._1_3_));
      *(ulonglong *)(lVar2 + 0xb3d) = CONCAT44(uStack_4f,uStack_53);
      *(undefined4 *)(lVar2 + 0xb28) = (undefined4)local_68;
      *(undefined4 *)(lVar2 + 0xb2c) = local_68._4_4_;
      *(undefined4 *)(lVar2 + 0xb30) = uStack_60;
      *(undefined4 *)(lVar2 + 0xb34) = uStack_5c;
      lVar3 = local_38;
      if ((undefined8 *)(lVar2 + 0xb28) != &local_68) {
        FUN_144a69486(lVar2 + 0xb48,local_48);
        lVar3 = local_38;
      }
    }
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477590be FUN_1477590be body=165 status=ok
// SIG undefined FUN_1477590be(void)

void FUN_1477590be(longlong param_1,longlong param_2)

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
  FUN_147cb1636(*(longlong *)(param_1 + 400) + 0x2e8,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775916a FUN_14775916a body=331 status=ok
// SIG undefined FUN_14775916a(void)

void FUN_14775916a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  int local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  _Src = local_48;
  iVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar2 * 2);
  }
  FUN_1477592b6(param_1,&local_60,iVar1 != 0);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477592b6 FUN_1477592b6 body=311 status=ok
// SIG undefined FUN_1477592b6(void)

void FUN_1477592b6(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined5 uStack_58;
  undefined8 uStack_53;
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_2[1] == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar2 = FUN_140f36250(puVar4,0);
  if (iVar2 != -1) {
    if ((int)param_2[1] == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    uVar3 = FUN_140f36250(puVar4,0);
    FUN_140de397a(param_1 + 0x1a0,uVar3,param_3);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x2c8);
    uStack_53 = *(undefined8 *)(param_1 + 0x1b5);
    uStack_58 = (undefined5)((ulonglong)*(undefined8 *)(param_1 + 0x1ad) >> 0x18);
    local_68 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x1a8);
    uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20);
    local_38 = 0;
    uStack_30 = 0;
    FUN_144a69486(local_48,param_1 + 0x1c0);
    *(ulonglong *)(lVar1 + 0xb35) = CONCAT53(uStack_58,uStack_5c._1_3_);
    *(undefined8 *)(lVar1 + 0xb3d) = uStack_53;
    *(undefined4 *)(lVar1 + 0xb28) = (undefined4)local_68;
    *(undefined4 *)(lVar1 + 0xb2c) = local_68._4_4_;
    *(undefined4 *)(lVar1 + 0xb30) = uStack_60;
    *(undefined4 *)(lVar1 + 0xb34) = uStack_5c;
    if ((undefined8 *)(lVar1 + 0xb28) != &local_68) {
      FUN_144a69486(lVar1 + 0xb48,local_48);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477593ee FUN_1477593ee body=165 status=ok
// SIG undefined FUN_1477593ee(void)

void FUN_1477593ee(longlong param_1,longlong param_2)

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
  FUN_147cb1648(*(longlong *)(param_1 + 400) + 0x2e8,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147759494 FUN_147759494 body=208 status=ok
// SIG undefined FUN_147759494(void)

void FUN_147759494(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  if (*(longlong *)(param_1 + 400) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x2c8);
    *(undefined8 *)(lVar1 + 0xa78) = local_20;
    *(ulonglong *)(lVar1 + 0xa68) = CONCAT44(uStack_2c,local_30);
    *(ulonglong *)(lVar1 + 0xa70) = CONCAT44(uStack_24,uStack_28);
    *(undefined4 *)(lVar1 + 0xa98) = local_30;
    *(undefined4 *)(lVar1 + 0xa9c) = uStack_2c;
    *(undefined4 *)(lVar1 + 0xaa0) = uStack_28;
    *(undefined4 *)(lVar1 + 0xaa4) = uStack_24;
    *(undefined8 *)(lVar1 + 0xaa8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147759566 FUN_147759566 body=177 status=ok
// SIG undefined FUN_147759566(void)

void FUN_147759566(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  if (*(longlong *)(param_1 + 400) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x2c8);
    *(undefined8 *)(lVar1 + 0xa90) = local_20;
    *(undefined4 *)(lVar1 + 0xa80) = local_30;
    *(undefined4 *)(lVar1 + 0xa84) = uStack_2c;
    *(undefined4 *)(lVar1 + 0xa88) = uStack_28;
    *(undefined4 *)(lVar1 + 0xa8c) = uStack_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147759618 FUN_147759618 body=193 status=ok
// SIG undefined FUN_147759618(void)

void FUN_147759618(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1477596da(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477596da FUN_1477596da body=254 status=ok
// SIG undefined FUN_1477596da(void)

undefined8 FUN_1477596da(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a8 [48];
  undefined1 local_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 400) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x318);
    FUN_1411371f6(local_a8);
    local_78 = 1;
    lVar2 = 0;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar2 = 0;
      }
      else {
        lVar2 = *param_2;
      }
    }
    local_f8 = local_a8;
    uVar3 = FUN_141137228(uVar3,lVar2,&local_e8,&local_c8);
    if (local_68 != 0) {
      if (local_58 == (longlong *)0x0) {
        local_58 = local_48;
      }
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147759812 FUN_147759812 body=404 status=ok
// SIG undefined FUN_147759812(void)

longlong * FUN_147759812(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = (longlong)&PTR_FUN_14a535db0;
  param_1[2] = (longlong)&PTR_LAB_14a535fa8;
  param_1[3] = param_2;
  FUN_1400e6e60(param_1 + 4);
  param_1[0x14c] = 0;
  param_1[0x14f] = DAT_14c8464f0;
  lVar2 = DAT_14c8464e8;
  param_1[0x14d] = DAT_14c8464e0;
  param_1[0x14e] = lVar2;
  param_1[0x152] = DAT_14c846508;
  lVar2 = DAT_14c846500;
  param_1[0x150] = DAT_14c8464f8;
  param_1[0x151] = lVar2;
  param_1[0x155] = DAT_14c8464f0;
  lVar2 = DAT_14c8464e8;
  param_1[0x153] = DAT_14c8464e0;
  param_1[0x154] = lVar2;
  lVar2 = DAT_14c8464e8;
  param_1[0x156] = DAT_14c8464e0;
  param_1[0x157] = lVar2;
  param_1[0x158] = DAT_14c8464f0;
  lVar2 = DAT_14c8464e8;
  param_1[0x159] = DAT_14c8464e0;
  param_1[0x15a] = lVar2;
  param_1[0x15b] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x15c) = 0x461c4000;
  param_1[0x15d] = 0;
  param_1[0x15e] = (longlong)&PTR_FUN_14a544a68;
  param_1[0x163] = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0x8000000000;
  param_1[0x161] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  FUN_1401b5a8c(param_1 + 0x165,0);
  lVar2 = (**(code **)(*param_1 + 0x1f0))(param_1);
  puVar3 = &DAT_14c760db4;
  if (lVar2 != 0) {
    puVar3 = (undefined4 *)(lVar2 + 8);
  }
  FUN_1457e272a(param_1 + 0x15e,*puVar3);
  uVar1 = DAT_14c758d3c;
  *(undefined4 *)(param_1 + 0x14a) = DAT_14c758d3c;
  *(undefined4 *)((longlong)param_1 + 0xa54) = uVar1;
  *(undefined4 *)(param_1 + 0x14b) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xa5c) = 0x3f800000;
  return param_1;
}



// FUNCTION 1477599a6 FUN_1477599a6 body=80 status=ok
// SIG undefined FUN_1477599a6(void)

void FUN_1477599a6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a535db0;
  param_1[2] = &PTR_LAB_14a535fa8;
  if (param_1[0x16b] != 0) {
    FUN_1400020a8();
  }
  FUN_140fb9fee(param_1 + 0x15e);
  FUN_1412b8054(param_1 + 4);
  FUN_14583465c(param_1);
  return;
}



// FUNCTION 1477599f6 FUN_1477599f6 body=207 status=ok
// SIG undefined FUN_1477599f6(void)

void FUN_1477599f6(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined1 local_88 [28];
  char local_6c;
  undefined8 local_60;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
  cVar2 = FUN_1405f0e38(uVar1);
  if (cVar2 == '\0') {
    FUN_1405f0e9c(local_90,uVar1,5);
    if (local_6c == '\0') {
      do {
        FUN_1405f107a(local_60,0);
        FUN_14059e512(local_90);
      } while (local_6c == '\0');
    }
    if (local_38 == '\x01') {
      FUN_14024445c(local_88);
    }
    FUN_1405f0e42(uVar1,1);
  }
  FUN_14355de42(uVar1,2,param_2);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147759ac6 FUN_147759ac6 body=514 status=ok
// SIG undefined FUN_147759ac6(void)

void FUN_147759ac6(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_2b8 [40];
  undefined1 local_290 [72];
  longlong local_248;
  undefined **local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  byte local_20c;
  undefined **local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  byte local_1b9;
  undefined8 local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar1 = param_1[0x15d];
  if (param_2 == 0) {
    param_2 = lVar1;
  }
  param_1[0x15d] = param_2;
  lVar2 = (**(code **)(*param_1 + 0x30))();
  FUN_144b2c38c(&local_208);
  uVar3 = (**(code **)(*param_1 + 0x1f0))(param_1);
  FUN_14031f39e(local_290,*(undefined8 *)(param_3 + 0x58),uVar3,param_1 + 0x165);
  local_228 = local_208;
  uStack_220 = uStack_200;
  local_218 = local_1f8;
  local_20c = local_20c | 0x12;
  FUN_14031f528(&local_208,local_290);
  local_208 = &PTR_FUN_14a2b3168;
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  uVar6 = FUN_147d78772(param_1);
  local_1b9 = local_1b9 | 2;
  lVar4 = (**(code **)(*param_1 + 0x1e8))(param_1,&local_208);
  uVar3 = FUN_14001cc68(0x18,0x10);
  FUN_14355045e(uVar3,&local_208,uVar6);
  *(undefined4 *)(lVar4 + 0x2420) = *(undefined4 *)(lVar4 + 0x4d8);
  *(undefined4 *)(lVar4 + 0x2424) = *(undefined4 *)(lVar4 + 0x4dc);
  *(undefined4 *)(lVar4 + 0x2428) = *(undefined4 *)(lVar4 + 0x4e0);
  *(undefined4 *)(lVar4 + 0x242c) = *(undefined4 *)(lVar4 + 0x4e4);
  local_88 = uVar3;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    FUN_14376f1d8(param_3,&DAT_149e1e308);
  }
  FUN_14376f1d8(param_3,param_1 + 0x14a);
  DAT_14c75b13c = DAT_14c75b13c + -1;
  plVar5 = (longlong *)FUN_144a7b9cd();
  (**(code **)(*plVar5 + 0x40))(plVar5,param_3,&local_208);
  lVar4 = *(longlong *)(lVar2 + 0x40);
  if ((lVar4 != 0) && ((*(int *)(lVar4 + 0x628) != 0 || (*(int *)(lVar4 + 0x638) != 0)))) {
    FUN_14347d00c();
  }
  lVar2 = *(longlong *)(lVar2 + 0x50);
  if ((lVar2 != 0) && ((*(int *)(lVar2 + 0x628) != 0 || (*(int *)(lVar2 + 0x638) != 0)))) {
    FUN_14347d00c();
  }
  param_1[0x15d] = lVar1;
  FUN_14005d108(&local_208);
  if ((local_50 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147759cca FUN_147759cca body=31 status=ok
// SIG undefined FUN_147759cca(void)

undefined8 FUN_147759cca(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x218);
  }
  return uVar2;
}



// FUNCTION 147759d08 FUN_147759d08 body=1264 status=ok
// SIG undefined FUN_147759d08(void)

undefined8 FUN_147759d08(longlong param_1,longlong param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_808 [32];
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8 [16];
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 local_728 [32];
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_4c0;
  undefined8 local_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  longlong local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  double local_2a0;
  double local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  double local_280;
  double local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  double local_248;
  undefined8 local_240;
  double local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 local_200;
  double local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148 [17];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_808;
  FUN_144b137c8(&local_748);
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x28))(*(longlong **)(param_1 + 0xae8),&local_7d0)
  ;
  local_628 = 0;
  local_620 = local_7d0;
  local_4c0 = 0;
  local_4b8 = local_7d0;
  local_748 = *(undefined8 *)(param_1 + 0xa68);
  uStack_740 = *(undefined8 *)(param_1 + 0xa70);
  local_738 = *(undefined8 *)(param_1 + 0xa78);
  dVar2 = cos((*(double *)(param_1 + 0xa88) * 3.1415927410125732) / 180.0);
  dVar3 = sin((*(double *)(param_1 + 0xa88) * 3.1415927410125732) / 180.0);
  dVar4 = sin((*(double *)(param_1 + 0xa88) * 3.1415927410125732) / 180.0);
  local_1c8 = cos((*(double *)(param_1 + 0xa88) * 3.1415927410125732) / 180.0);
  local_1b8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  local_178 = 0x3ff0000000000000;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  local_150 = 0x3ff0000000000000;
  dStack_1c0 = -dVar4;
  local_1a8 = dVar3;
  local_1a0 = dVar2;
  dVar2 = cos((*(double *)(param_1 + 0xa80) * 3.1415927410125732) / 180.0);
  dVar3 = sin((*(double *)(param_1 + 0xa80) * 3.1415927410125732) / 180.0);
  dVar4 = sin((*(double *)(param_1 + 0xa80) * 3.1415927410125732) / 180.0);
  local_248 = cos((*(double *)(param_1 + 0xa80) * 3.1415927410125732) / 180.0);
  local_240 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0x3ff0000000000000;
  local_218 = 0;
  uStack_210 = 0;
  local_200 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0x3ff0000000000000;
  local_238 = -dVar4;
  local_208 = dVar3;
  local_1f8 = dVar2;
  FUN_1447fea8d(local_148,&local_1c8);
  dVar2 = cos((*(double *)(param_1 + 0xa90) * 3.1415927410125732) / 180.0);
  dVar3 = sin((*(double *)(param_1 + 0xa90) * 3.1415927410125732) / 180.0);
  dVar4 = sin((*(double *)(param_1 + 0xa90) * 3.1415927410125732) / 180.0);
  local_2a0 = cos((*(double *)(param_1 + 0xa90) * 3.1415927410125732) / 180.0);
  local_2c8 = 0x3ff0000000000000;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0x3ff0000000000000;
  local_298 = dVar4;
  local_280 = -dVar3;
  local_278 = dVar2;
  FUN_1447fea8d(local_7c8,local_148);
  puVar8 = local_7c8;
  puVar9 = local_728;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_1c8 = 0.0;
  dStack_1c0 = 0.0;
  local_1b8 = 0x3ff0000000000000;
  uStack_1b0 = 0;
  local_1a8 = 1.0;
  local_1a0 = 0.0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0x3ff0000000000000;
  local_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  local_150 = 0x3ff0000000000000;
  FUN_1447fea8d(local_148,local_728,&local_1c8);
  puVar8 = local_148;
  puVar9 = local_728;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  lVar5 = FUN_1449db7f2();
  lVar7 = *(longlong *)(lVar5 + 0x110);
  if (lVar7 == 0) {
    FUN_140aa6c08(lVar5);
    lVar7 = *(longlong *)(lVar5 + 0x110);
  }
  FUN_1400e6c9a(param_1 + 0x20,*(undefined1 *)(lVar7 + 0xb8),*(undefined8 *)(param_1 + 0xae8),
                &local_748);
  local_4a8 = *(undefined8 *)(param_1 + 0xaf8);
  local_490 = param_1 + 0x10;
  local_488 = *(undefined4 *)(param_1 + 0xa50);
  uStack_484 = *(undefined4 *)(param_1 + 0xa54);
  uStack_480 = *(undefined4 *)(param_1 + 0xa58);
  uStack_47c = *(undefined4 *)(param_1 + 0xa5c);
  local_4b0 = param_2;
  uVar6 = FUN_14001cc68(0x30f0,0x10);
  FUN_144891fa0(uVar6,&local_748);
  iVar1 = *(int *)(param_2 + 0x10);
  *(uint *)(param_2 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
    FUN_144928a2e((longlong *)(param_2 + 8),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 8) + (longlong)iVar1 * 8) = uVar6;
  local_7d8 = *(undefined8 *)(param_1 + 0xa78);
  local_7e8 = *(undefined4 *)(param_1 + 0xa68);
  uStack_7e4 = *(undefined4 *)(param_1 + 0xa6c);
  uStack_7e0 = *(undefined4 *)(param_1 + 0xa70);
  uStack_7dc = *(undefined4 *)(param_1 + 0xa74);
  FUN_14102b2ba(uVar6);
  FUN_14102bfb4(uVar6,&local_748);
  FUN_144891d70(&local_748);
  if ((local_c0 ^ (ulonglong)auStack_808) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775a1fa FUN_14775a1fa body=155 status=ok
// SIG undefined FUN_14775a1fa(void)

void FUN_14775a1fa(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 400) = 0;
  plVar3 = *(longlong **)(param_1 + 0x198);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x198) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014775a291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14775a296 FUN_14775a296 body=742 status=ok
// SIG undefined FUN_14775a296(void)

undefined8 * FUN_14775a296(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  longlong *local_220;
  undefined1 local_211;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_1f8;
  longlong *local_1f0;
  code *local_1e8;
  undefined8 *local_1e0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  thunk_FUN_140a5071c(&local_1e8);
  FUN_1477822aa(&local_210,&local_211);
  FUN_14775a584(&local_210,&local_1f8,&local_1e8);
  plVar4 = local_1f0;
  if (local_1f0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = local_1f8;
    plVar6 = *(longlong **)(param_1 + 0x198);
    if (plVar6 == (longlong *)0x0) goto LAB_14775a392;
    *(undefined8 *)(param_1 + 0x198) = 0;
LAB_14775a358:
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14775a392;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar6;
  }
  else {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 400) = local_1f8;
    plVar6 = *(longlong **)(param_1 + 0x198);
    if (local_1f0 != plVar6) {
      *(longlong **)(param_1 + 0x198) = local_1f0;
      if (plVar6 == (longlong *)0x0) goto LAB_14775a392;
      goto LAB_14775a358;
    }
    LOCK();
    plVar6 = local_1f0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14775a392;
    (**(code **)*local_1f0)(local_1f0);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14775a392:
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)local_1f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  plVar4 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_208 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_140a4ff8c(&local_1e8);
  if (0 < *(int *)(param_1 + 0x170)) {
    uVar3 = *(undefined8 *)(param_1 + 400);
    lVar5 = **(longlong **)(param_1 + 0x168);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    if (*(longlong *)(lVar5 + 0x30) == 0) {
      local_210 = DAT_14c98dec8;
      local_208 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
      }
    }
    else {
      if (*(int *)(param_1 + 0x170) < 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = **(longlong **)(param_1 + 0x168);
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
        }
      }
      local_1e8 = FUN_143336ee2;
      local_1e0 = &local_1f8;
      FUN_1407616b4(*(undefined8 *)(lVar5 + 0x30),&local_210);
    }
    plVar4 = local_208;
    local_228 = local_210;
    local_220 = local_208;
    if (local_208 == (longlong *)0x0) {
      FUN_146ad748c(uVar3,&local_228);
    }
    else {
      LOCK();
      *(int *)(local_208 + 1) = (int)local_208[1] + 1;
      UNLOCK();
      FUN_146ad748c(uVar3,&local_228);
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
  }
  uVar3 = *(undefined8 *)(param_1 + 400);
  plVar4 = *(longlong **)(param_1 + 0x198);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
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
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775a57e thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 14775a584 FUN_14775a584 body=109 status=ok
// SIG undefined FUN_14775a584(void)

longlong * FUN_14775a584(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_147782682(*param_1);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14775a5f2 FUN_14775a5f2 body=235 status=ok
// SIG undefined FUN_14775a5f2(void)

void FUN_14775a5f2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined5 uStack_58;
  undefined8 uStack_53;
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 400) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x2c8);
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(lVar1 + 0xa50) = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(lVar1 + 0xa58) = uVar2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x2c8);
    uStack_53 = *(undefined8 *)(param_1 + 0x1b5);
    uStack_58 = (undefined5)((ulonglong)*(undefined8 *)(param_1 + 0x1ad) >> 0x18);
    local_68 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x1a8);
    uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20);
    local_38 = 0;
    uStack_30 = 0;
    FUN_144a69486(local_48,param_1 + 0x1c0);
    *(ulonglong *)(lVar1 + 0xb35) = CONCAT53(uStack_58,uStack_5c._1_3_);
    *(undefined8 *)(lVar1 + 0xb3d) = uStack_53;
    *(undefined4 *)(lVar1 + 0xb28) = (undefined4)local_68;
    *(undefined4 *)(lVar1 + 0xb2c) = local_68._4_4_;
    *(undefined4 *)(lVar1 + 0xb30) = uStack_60;
    *(undefined4 *)(lVar1 + 0xb34) = uStack_5c;
    if ((undefined8 *)(lVar1 + 0xb28) != &local_68) {
      FUN_144a69486(lVar1 + 0xb48,local_48);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775a6de FUN_14775a6de body=240 status=ok
// SIG undefined FUN_14775a6de(void)

void FUN_14775a6de(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 400);
  if (lVar3 != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      local_50 = DAT_14c98dec8;
      local_48 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
      }
    }
    else {
      local_20 = &local_29;
      local_28 = FUN_143336ee2;
      FUN_1407616b4(*(longlong *)(param_2 + 0x30),&local_50);
    }
    plVar4 = local_48;
    local_40 = local_50;
    local_38 = local_48;
    if (local_48 == (longlong *)0x0) {
      FUN_146ad748c(lVar3,&local_40);
    }
    else {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      FUN_146ad748c(lVar3,&local_40);
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
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775a7d0 FUN_14775a7d0 body=101 status=ok
// SIG undefined FUN_14775a7d0(void)

void FUN_14775a7d0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 != 0) {
    local_18 = DAT_14c98dec8;
    local_10 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
    FUN_146ad748c(lVar1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775a836 FUN_14775a836 body=59 status=ok
// SIG undefined FUN_14775a836(void)

void FUN_14775a836(uint *param_1)

{
  *param_1 = *param_1 | 0xa01020;
  *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 0x80;
  param_1[5] = param_1[5] & 0xfffff9ff | 0x200;
  param_1[2] = param_1[2] & 0xffffdf9f | 0x2020;
  param_1[1] = param_1[1] & 0x7efff7ff | 0x1000800;
  return;
}



// FUNCTION 14775a87a FUN_14775a87a body=144 status=ok
// SIG undefined FUN_14775a87a(void)

undefined8 FUN_14775a87a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  FUN_144a787a6(local_38);
  plVar2 = (longlong *)FUN_14479d2ce(param_1);
  uVar3 = FUN_14477b072(plVar2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar2 + 0x248))(plVar2,uVar3,local_38);
  lVar1 = local_38[2];
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775a90c FUN_14775a90c body=114 status=ok
// SIG undefined FUN_14775a90c(void)

undefined8 FUN_14775a90c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775a980 FUN_14775a980 body=555 status=ok
// SIG undefined FUN_14775a980(void)

undefined8 FUN_14775a980(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_1d8 [40];
  undefined1 local_1b0 [56];
  undefined **local_178;
  ushort local_170;
  undefined1 uStack_16e;
  undefined1 uStack_16d;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined *puStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined2 uStack_114;
  undefined1 uStack_112;
  uint uStack_111;
  undefined4 uStack_10d;
  undefined4 uStack_109;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_14570e3a0(local_1b0);
  local_170 = local_170 & 0xfe00;
  uStack_16e = 0;
  uStack_16c = 0;
  uStack_168 = 0xffffffff;
  local_160 = 0;
  local_178 = &PTR_FUN_149eda650;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  puStack_140 = &DAT_14c96b1e8;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = (longlong *)0x0;
  uStack_120 = 0;
  local_118 = 0x3f800000;
  uStack_114 = 0;
  local_100[0] = 0;
  local_e0 = 0;
  uStack_111 = (uint)(byte)uStack_111;
  uStack_10d = 0;
  uStack_109 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  local_4c = 0;
  FUN_144b00ffc(local_1b0,param_3);
  plVar3 = local_128;
  local_160 = *(undefined8 *)(param_4 + 0x18);
  uVar7 = *(undefined8 *)(param_4 + 8);
  local_170 = (ushort)uVar7;
  uStack_16e = (undefined1)((ulonglong)uVar7 >> 0x10);
  uStack_16d = (undefined1)((ulonglong)uVar7 >> 0x18);
  uStack_16c = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_168 = (undefined4)*(undefined8 *)(param_4 + 0x10);
  uStack_164 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x10) >> 0x20);
  local_158 = *(undefined8 *)(param_4 + 0x20);
  uStack_150 = *(undefined8 *)(param_4 + 0x28);
  local_148 = *(undefined8 *)(param_4 + 0x30);
  puStack_140 = *(undefined **)(param_4 + 0x38);
  local_138 = *(undefined8 *)(param_4 + 0x40);
  uStack_130 = *(undefined8 *)(param_4 + 0x48);
  plVar6 = *(longlong **)(param_4 + 0x50);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_128 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_128;
      local_128 = plVar6;
      (*(code *)*puVar4)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar6 = local_128;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar6 = local_128;
      }
    }
  }
  local_128 = plVar6;
  uStack_120 = *(undefined8 *)(param_4 + 0x58);
  local_118 = *(undefined4 *)(param_4 + 0x60);
  uVar5 = *(undefined4 *)(param_4 + 100);
  uStack_10d = *(undefined4 *)(param_4 + 0x6b);
  uStack_109 = *(undefined4 *)(param_4 + 0x6f);
  uStack_114 = (undefined2)uVar5;
  uStack_112 = (undefined1)((uint)uVar5 >> 0x10);
  uStack_111._1_3_ = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uStack_111._0_1_ = (byte)((uint)uVar5 >> 0x18);
  plVar6 = (longlong *)FUN_14479d2ce(param_2);
  uVar7 = FUN_14477b072(plVar6,*(undefined8 *)(param_2 + 8));
  (**(code **)(*plVar6 + 0x248))(plVar6,uVar7,local_1b0);
  FUN_1403d4c6e(param_1,local_100);
  FUN_14493db24(local_100);
  plVar6 = local_128;
  local_178 = &PTR_FUN_149eda650;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_128 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775abc2 FUN_14775abc2 body=142 status=ok
// SIG undefined FUN_14775abc2(void)

void FUN_14775abc2(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 != 0) {
    *(byte *)(local_28 + 0x30) = *(byte *)(local_28 + 0x30) | 0x80;
    lVar2 = FUN_14287b896(local_28);
    FUN_1405d299c(local_28,*(undefined4 *)(lVar2 + 8));
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
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



// FUNCTION 14775ac66 FUN_14775ac66 body=158 status=ok
// SIG undefined FUN_14775ac66(void)

void FUN_14775ac66(undefined8 param_1,longlong param_2)

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
  FUN_14775ad06(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775ad06 FUN_14775ad06 body=171 status=ok
// SIG undefined FUN_14775ad06(void)

void FUN_14775ad06(longlong param_1,char param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd9) & 0xef | param_2 << 4;
  FUN_140760c2c(param_1,&local_30);
  if (local_30 != 0) {
    if (((*(byte *)(local_30 + 0x30) & 0x10) == 0) == (bool)param_2) {
      *(byte *)(local_30 + 0x30) = *(byte *)(local_30 + 0x30) & 0xef | param_2 << 4;
      FUN_140163244(local_30,6);
    }
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775adc4 FUN_14775adc4 body=107 status=ok
// SIG undefined FUN_14775adc4(void)

void FUN_14775adc4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14775ae30(param_1,local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775ae30 FUN_14775ae30 body=161 status=ok
// SIG undefined FUN_14775ae30(void)

longlong * FUN_14775ae30(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2f8))(param_1,&local_28);
  if (local_28 == 0) {
    plVar3 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar3;
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar3[1];
  }
  else {
    FUN_14697fa24(local_28,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775aed2 FUN_14775aed2 body=107 status=ok
// SIG undefined FUN_14775aed2(void)

void FUN_14775aed2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14775af3e(param_1,local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775af3e FUN_14775af3e body=164 status=ok
// SIG undefined FUN_14775af3e(void)

longlong * FUN_14775af3e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2f8))(param_1,&local_28);
  if (local_28 == 0) {
    plVar3 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar3;
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar3[1];
  }
  else {
    FUN_14697f6be(local_28,param_2,0);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775afe4 FUN_14775afe4 body=45 status=ok
// SIG undefined FUN_14775afe4(void)

void FUN_14775afe4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b4e6();
  FUN_144b00ffc(param_3,uVar1);
  return;
}



// FUNCTION 14775b012 FUN_14775b012 body=37 status=ok
// SIG undefined FUN_14775b012(void)

void FUN_14775b012(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b038();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775b038 FUN_14775b038 body=131 status=ok
// SIG undefined FUN_14775b038(void)

ulonglong FUN_14775b038(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 unaff_RBX;
  undefined1 *puVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140760c2c(param_1,&local_30);
  puVar4 = (undefined1 *)(param_1 + 0xdb);
  if (local_30 != 0) {
    puVar4 = (undefined1 *)(local_30 + 0x35);
  }
  uVar3 = *puVar4;
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
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b0bc FUN_14775b0bc body=88 status=ok
// SIG undefined FUN_14775b0bc(void)

void FUN_14775b0bc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14775b116(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b116 FUN_14775b116 body=177 status=ok
// SIG undefined FUN_14775b116(void)

double * FUN_14775b116(undefined8 param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 == 0) {
    dVar4 = 0.0;
    dVar5 = 0.0;
  }
  else {
    pfVar3 = (float *)&DAT_14c84635c;
    if ((*(byte *)(local_28 + 0x31) & 0x20) != 0) {
      pfVar3 = (float *)(local_28 + 0x168);
    }
    dVar5 = (double)pfVar3[1];
    dVar4 = (double)*pfVar3;
  }
  *param_2 = dVar4;
  param_2[1] = dVar5;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b1ca FUN_14775b1ca body=58 status=ok
// SIG undefined FUN_14775b1ca(void)

void FUN_14775b1ca(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1f0);
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 14775b208 FUN_14775b208 body=37 status=ok
// SIG undefined FUN_14775b208(void)

void FUN_14775b208(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b22e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775b22e FUN_14775b22e body=134 status=ok
// SIG undefined FUN_14775b22e(void)

ulonglong FUN_14775b22e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140760c2c(param_1,&local_30);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (local_30 == 0) {
    uVar3 = CONCAT71(uVar4,*(undefined1 *)(param_1 + 0xd9)) & 0xffffffffffffff04;
    uVar3 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 2);
  }
  else {
    uVar3 = CONCAT71(uVar4,*(undefined1 *)(local_30 + 0x3a));
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
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b2b6 FUN_14775b2b6 body=42 status=ok
// SIG undefined FUN_14775b2b6(void)

void FUN_14775b2b6(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2d0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775b2e0 FUN_14775b2e0 body=42 status=ok
// SIG undefined FUN_14775b2e0(void)

void FUN_14775b2e0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775b30a FUN_14775b30a body=45 status=ok
// SIG undefined FUN_14775b30a(void)

void FUN_14775b30a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b338();
  FUN_144b00ffc(param_3,uVar1);
  return;
}



// FUNCTION 14775b338 FUN_14775b338 body=128 status=ok
// SIG undefined FUN_14775b338(void)

undefined8 FUN_14775b338(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 == 0) {
    local_28 = DAT_14c98dec8;
  }
  uVar3 = FUN_144b013ec(local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b3e0 FUN_14775b3e0 body=39 status=ok
// SIG undefined FUN_14775b3e0(void)

void FUN_14775b3e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b408();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775b408 FUN_14775b408 body=145 status=ok
// SIG undefined FUN_14775b408(void)

undefined4 FUN_14775b408(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140760c2c(param_1,&local_40);
  puVar4 = (undefined4 *)(param_1 + 0xe0);
  if (local_40 != 0) {
    puVar4 = (undefined4 *)(local_40 + 0x1ac);
  }
  uVar3 = *puVar4;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b4b8 FUN_14775b4b8 body=45 status=ok
// SIG undefined FUN_14775b4b8(void)

void FUN_14775b4b8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b4e6();
  FUN_144b00ffc(param_3,uVar1);
  return;
}



// FUNCTION 14775b4e6 FUN_14775b4e6 body=128 status=ok
// SIG undefined FUN_14775b4e6(void)

undefined8 FUN_14775b4e6(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 == 0) {
    local_28 = DAT_14c98dec8;
  }
  uVar3 = FUN_14287b896(local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b568 FUN_14775b568 body=37 status=ok
// SIG undefined FUN_14775b568(void)

void FUN_14775b568(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145beedf4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775b592 FUN_14775b592 body=37 status=ok
// SIG undefined FUN_14775b592(void)

void FUN_14775b592(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b5b8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775b5b8 FUN_14775b5b8 body=133 status=ok
// SIG undefined FUN_14775b5b8(void)

ulonglong FUN_14775b5b8(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140760c2c(param_1,&local_30);
  if (local_30 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_14287b7b4(local_30,&local_1a);
    uVar3 = CONCAT71((int7)((ulonglong)&local_1a >> 8),local_19);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b642 FUN_14775b642 body=37 status=ok
// SIG undefined FUN_14775b642(void)

void FUN_14775b642(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b668();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775b668 FUN_14775b668 body=123 status=ok
// SIG undefined FUN_14775b668(void)

undefined4 FUN_14775b668(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14697e01e();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b6e8 FUN_14775b6e8 body=37 status=ok
// SIG undefined FUN_14775b6e8(void)

void FUN_14775b6e8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b70e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775b70e FUN_14775b70e body=127 status=ok
// SIG undefined FUN_14775b70e(void)

undefined4 FUN_14775b70e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x198))();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b792 FUN_14775b792 body=37 status=ok
// SIG undefined FUN_14775b792(void)

void FUN_14775b792(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b7b8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775b7b8 FUN_14775b7b8 body=123 status=ok
// SIG undefined FUN_14775b7b8(void)

undefined4 FUN_14775b7b8(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_140591fd6();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b83a FUN_14775b83a body=236 status=ok
// SIG undefined FUN_14775b83a(void)

void FUN_14775b83a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775b928(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775b928 FUN_14775b928 body=155 status=ok
// SIG undefined FUN_14775b928(void)

undefined4 FUN_14775b928(undefined8 param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  int local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140760c2c(param_1,&local_38);
  if (local_38 == 0) {
    uVar3 = 0;
  }
  else {
    local_24 = -1 < param_3;
    if ((bool)local_24) {
      local_28 = param_3;
    }
    uVar3 = FUN_14697e1bc(local_38,param_2);
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14775b9ca FUN_14775b9ca body=163 status=ok
// SIG undefined FUN_14775b9ca(void)

void FUN_14775b9ca(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14775ba6e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775ba6e FUN_14775ba6e body=245 status=ok
// SIG undefined FUN_14775ba6e(void)

ulonglong FUN_14775ba6e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  longlong *local_30;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_2 != (longlong *)0x0) && (param_2[0x86] != 0)) &&
     ((*(byte *)(param_2 + 0x84) & 2) != 0)) {
    cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if (cVar3 != '\0') {
      FUN_140760c2c(param_1,&local_38);
      if (local_38 == 0) {
LAB_14775bb39:
        uVar6 = 0;
      }
      else {
        FUN_145bf8224(local_48,param_2);
        lVar5 = FUN_140059518(local_48);
        if (lVar5 == 0) goto LAB_14775bb39;
        uVar4 = FUN_1400c16ce(DAT_14c98e618,*(undefined4 *)(lVar5 + 0xe0));
        FUN_14697de5c(local_38,&local_22,uVar4);
        uVar6 = CONCAT71((int7)((ulonglong)&local_22 >> 8),local_21);
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
      goto LAB_14775bb18;
    }
  }
  uVar6 = 0;
LAB_14775bb18:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775bb6a FUN_14775bb6a body=163 status=ok
// SIG undefined FUN_14775bb6a(void)

void FUN_14775bb6a(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14775bc0e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775bc0e FUN_14775bc0e body=220 status=ok
// SIG undefined FUN_14775bc0e(void)

undefined4 FUN_14775bc0e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != (longlong *)0x0) && ((*(byte *)(param_2 + 0x84) & 2) != 0)) {
    cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if (cVar3 != '\0') {
      FUN_140760c2c(param_1,&local_30);
      if (local_30 == 0) {
LAB_14775bcc0:
        uVar4 = 0;
      }
      else {
        FUN_145bf8224(local_40,param_2);
        lVar5 = FUN_140059518(local_40);
        if (lVar5 == 0) goto LAB_14775bcc0;
        uVar4 = FUN_1400c16ce(DAT_14c98e618,*(undefined4 *)(lVar5 + 0xe0));
        uVar4 = FUN_14697df48(local_30,uVar4);
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
      goto LAB_14775bc9f;
    }
  }
  uVar4 = 0;
LAB_14775bc9f:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775bd06 FUN_14775bd06 body=41 status=ok
// SIG undefined FUN_14775bd06(void)

void FUN_14775bd06(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775bd34 FUN_14775bd34 body=37 status=ok
// SIG undefined FUN_14775bd34(void)

void FUN_14775bd34(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775bd5a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775bd5a FUN_14775bd5a body=63 status=ok
// SIG undefined FUN_14775bd5a(void)

undefined8 FUN_14775bd5a(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(byte *)((longlong)param_1 + 0xd9) & 0x20) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x180))();
    lVar2 = FUN_1476cdb84(uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_1476ccf08(lVar2,param_1);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 14775bd9e FUN_14775bd9e body=37 status=ok
// SIG undefined FUN_14775bd9e(void)

void FUN_14775bd9e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775bdc4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775bdc4 FUN_14775bdc4 body=140 status=ok
// SIG undefined FUN_14775bdc4(void)

ulonglong FUN_14775bdc4(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if ((local_28 == 0) || ((*(byte *)(local_28 + 0x39) & 0x19) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),0.0 < *(float *)(local_28 + 0x1ac));
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775be56 FUN_14775be56 body=37 status=ok
// SIG undefined FUN_14775be56(void)

void FUN_14775be56(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140760b04();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775be7c FUN_14775be7c body=240 status=ok
// SIG undefined FUN_14775be7c(void)

void FUN_14775be7c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_14775bf6e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775bf6e FUN_14775bf6e body=312 status=ok
// SIG undefined FUN_14775bf6e(void)

void FUN_14775bf6e(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_58;
  int local_50;
  longlong *local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x30))(param_1 + 0x28);
    local_48 = (longlong *)&local_58;
    local_58 = (undefined1 *)0x0;
    local_30 = &local_48;
    local_38 = &LAB_147764a16;
    local_40 = param_2;
    (**(code **)*puVar3)(puVar3,*(undefined8 *)(param_1 + 0x10));
    if (local_58 != (undefined1 *)0x0) {
      lVar4 = FUN_14775efe1(param_1);
      if (lVar4 != 0) {
        local_30 = (undefined8 **)CONCAT44(local_30._4_4_,local_50);
        local_38 = local_58;
        local_68 = param_3;
        FUN_1470241e0(lVar4 + 0x28,&local_48,param_1);
        if ((undefined1 **)local_48 != (undefined1 **)0x0) {
          lVar4 = param_1 + 0x148;
          iVar5 = (local_50 - *(int *)(param_1 + 0x160)) + 1;
          if (0 < iVar5) {
            uVar2 = FUN_144a54ea4(lVar4,iVar5);
            FUN_1447c6044(lVar4,uVar2,iVar5,0);
          }
          if (*(longlong *)(param_1 + 0x158) != 0) {
            lVar4 = *(longlong *)(param_1 + 0x158);
          }
          iVar5 = local_50 + 0x1f;
          if (-1 < local_50) {
            iVar5 = local_50;
          }
          puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)local_50 & 0x1f);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c0a8 FUN_14775c0a8 body=156 status=ok
// SIG undefined FUN_14775c0a8(void)

void FUN_14775c0a8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14775c146(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c146 FUN_14775c146 body=167 status=ok
// SIG undefined FUN_14775c146(void)

void FUN_14775c146(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  longlong *local_40;
  longlong local_38;
  undefined1 *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x30))(param_1 + 0x28);
    local_40 = &local_50;
    local_50 = 0;
    local_28 = &local_40;
    local_30 = &LAB_147764a16;
    local_38 = param_2;
    (**(code **)*puVar1)(puVar1,*(undefined8 *)(param_1 + 0x10));
    if (local_50 != 0) {
      local_58 = local_48;
      local_60 = local_50;
      FUN_140e2f5f4(param_1 + 0x28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c1ee FUN_14775c1ee body=240 status=ok
// SIG undefined FUN_14775c1ee(void)

void FUN_14775c1ee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_14775c2e0(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c2e0 FUN_14775c2e0 body=314 status=ok
// SIG undefined FUN_14775c2e0(void)

void FUN_14775c2e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_58;
  uint local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x30))(param_1 + 0x28);
    local_48 = &local_58;
    local_58 = (undefined1 *)0x0;
    local_30 = &local_48;
    local_38 = &LAB_147764a16;
    local_40 = param_2;
    (**(code **)*puVar2)(puVar2,*(undefined8 *)(param_1 + 0x10));
    if (((local_58 != (undefined1 *)0x0) && (-1 < (int)local_50)) &&
       ((int)local_50 < *(int *)(param_1 + 0x160))) {
      lVar3 = *(longlong *)(param_1 + 0x158);
      if (*(longlong *)(param_1 + 0x158) == 0) {
        lVar3 = param_1 + 0x148;
      }
      if ((*(uint *)(lVar3 + (ulonglong)(local_50 >> 5) * 4) >> (local_50 & 0x1f) & 1) != 0) {
        lVar3 = FUN_14775f149(param_1);
        local_30 = (undefined8 *)CONCAT44(local_30._4_4_,local_50);
        local_38 = local_58;
        local_68 = param_3;
        FUN_147024712(lVar3 + 0x28,&local_48,param_1);
        uVar1 = 1 << ((byte)local_50 & 0x1f);
        lVar3 = param_1 + 0x148;
        if (*(longlong *)(param_1 + 0x158) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x158);
        }
        uVar5 = local_50 + 0x1f;
        if (-1 < (int)local_50) {
          uVar5 = local_50;
        }
        lVar4 = (longlong)((int)uVar5 >> 5);
        if (local_48._1_1_ == '\x01') {
          uVar1 = uVar1 | *(uint *)(lVar3 + lVar4 * 4);
        }
        else {
          uVar1 = ~uVar1 & *(uint *)(lVar3 + lVar4 * 4);
        }
        *(uint *)(lVar3 + lVar4 * 4) = uVar1;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c44c FUN_14775c44c body=152 status=ok
// SIG undefined FUN_14775c44c(void)

void FUN_14775c44c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined1 local_30 [4];
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd9) & 0xf7;
  FUN_140760c2c(param_1,&local_40);
  if (local_40 != 0) {
    local_2c = 0;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a5f03c(local_40,local_30);
    FUN_1449db362(&local_20);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c4e6 FUN_14775c4e6 body=227 status=ok
// SIG undefined FUN_14775c4e6(void)

void FUN_14775c4e6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_14775c5ca(param_1,local_19,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c5ca FUN_14775c5ca body=309 status=ok
// SIG undefined FUN_14775c5ca(void)

void FUN_14775c5ca(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_b8 = 0;
  FUN_14775e4ec(param_1,2,param_2,param_3);
  local_b0 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_b8 = 0;
  FUN_14775e4ec(param_1,3,param_2,param_3);
  local_b0 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_b8 = 0;
  FUN_14775e4ec(param_1,0,param_2,param_3);
  local_b0 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_b8 = 0;
  FUN_14775e4ec(param_1,1,param_2,param_3);
  local_b0 = &local_98;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  FUN_14775e4ec(param_1,4,param_2,param_3);
  local_b0 = &local_a8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  FUN_14775e4ec(param_1,5,param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    FUN_143334eb8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c700 FUN_14775c700 body=151 status=ok
// SIG undefined FUN_14775c700(void)

void FUN_14775c700(undefined8 param_1,longlong param_2)

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
  FUN_141266e28(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c798 FUN_14775c798 body=152 status=ok
// SIG undefined FUN_14775c798(void)

void FUN_14775c798(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14775c832(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c832 FUN_14775c832 body=173 status=ok
// SIG undefined FUN_14775c832(void)

void FUN_14775c832(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  uint local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd9) | 8;
  *(undefined1 *)(param_1 + 0xda) = param_2;
  FUN_140760c2c(param_1,&local_48);
  if (local_48 != 0) {
    local_38 = (uint)*(byte *)(param_1 + 0xda);
    local_34 = 1;
    local_30 = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_140a5f03c(local_48,&local_38);
    FUN_1449db362(&local_28);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c8e0 FUN_14775c8e0 body=49 status=ok
// SIG undefined FUN_14775c8e0(void)

void FUN_14775c8e0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  FUN_14775dc88(param_1,uVar1);
  return;
}



// FUNCTION 14775c916 FUN_14775c916 body=162 status=ok
// SIG undefined FUN_14775c916(void)

void FUN_14775c916(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2a8))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775c9d0 FUN_14775c9d0 body=224 status=ok
// SIG undefined FUN_14775c9d0(void)

void FUN_14775c9d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 != 0) {
    cVar3 = FUN_140d673ae(DAT_14c98e618,&local_28,2);
    if (cVar3 == '\0') {
      lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      if (lVar4 != 0) {
        lVar4 = FUN_145866520(lVar4);
        if (lVar4 != 0) {
          local_38 = local_28;
          local_30 = local_20;
          if (local_20 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_20 + 1) = (int)local_20[1] + 1;
            UNLOCK();
          }
          FUN_140592b68(lVar4 + 0x1f8,&local_38,2,0);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775cab2 FUN_14775cab2 body=332 status=ok
// SIG undefined FUN_14775cab2(void)

void FUN_14775cab2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_2a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = &local_28;
  local_28 = 0;
  uStack_20 = 0;
  local_48 = 0;
  FUN_14775e4ec(param_1,local_29,local_2a,local_38);
  FUN_143334eb8(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775cc00 FUN_14775cc00 body=223 status=ok
// SIG undefined FUN_14775cc00(void)

void FUN_14775cc00(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [46];
  undefined1 local_1a;
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
  local_1a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14775cce0(param_1,local_19,local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775cce0 FUN_14775cce0 body=120 status=ok
// SIG undefined FUN_14775cce0(void)

void FUN_14775cce0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 < 6) && ((0x32U >> (param_3 & 0x1f) & 1) != 0)) {
    if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_30 = &local_28;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  FUN_14775e4ec(param_1,param_2,param_3,0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 14775cd66 FUN_14775cd66 body=262 status=ok
// SIG undefined FUN_14775cd66(void)

void FUN_14775cd66(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = &local_28;
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  local_58 = 0;
  FUN_14775e4ec(param_1,local_29,4,0);
  FUN_143334eb8(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775ce6e FUN_14775ce6e body=262 status=ok
// SIG undefined FUN_14775ce6e(void)

void FUN_14775ce6e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = &local_28;
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  local_58 = 0;
  FUN_14775e4ec(param_1,local_29,5,0);
  FUN_143334eb8(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775cf76 FUN_14775cf76 body=262 status=ok
// SIG undefined FUN_14775cf76(void)

void FUN_14775cf76(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = &local_28;
  local_28 = 0;
  uStack_20 = 0;
  local_48 = local_38;
  FUN_14775e4ec(param_1,local_29,1,0);
  FUN_143334eb8(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775d07e FUN_14775d07e body=156 status=ok
// SIG undefined FUN_14775d07e(void)

void FUN_14775d07e(undefined8 param_1,longlong param_2)

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
  FUN_14775d11c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775d11c FUN_14775d11c body=168 status=ok
// SIG undefined FUN_14775d11c(void)

void FUN_14775d11c(longlong param_1,float param_2)

{
  int *piVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(float *)(param_1 + 0xe0) = param_2;
  FUN_140760c2c(param_1,&local_40);
  if (local_40 != 0) {
    if ((*(float *)(local_40 + 0x1ac) != param_2) ||
       (NAN(*(float *)(local_40 + 0x1ac)) || NAN(param_2))) {
      *(float *)(local_40 + 0x1ac) = param_2;
      FUN_140163244(local_40,2);
    }
  }
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775d1da FUN_14775d1da body=154 status=ok
// SIG undefined FUN_14775d1da(void)

void FUN_14775d1da(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0xa0) = local_28;
  *(undefined4 *)(param_1 + 0xa4) = uStack_24;
  *(undefined4 *)(param_1 + 0xa8) = uStack_20;
  *(undefined4 *)(param_1 + 0xac) = uStack_1c;
  FUN_141272672(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775d276 FUN_14775d276 body=154 status=ok
// SIG undefined FUN_14775d276(void)

void FUN_14775d276(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0xb0) = local_28;
  *(undefined4 *)(param_1 + 0xb4) = uStack_24;
  *(undefined4 *)(param_1 + 0xb8) = uStack_20;
  *(undefined4 *)(param_1 + 0xbc) = uStack_1c;
  FUN_141272672(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775d312 FUN_14775d312 body=230 status=ok
// SIG undefined FUN_14775d312(void)

void FUN_14775d312(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (undefined4)DAT_14c8463f0;
  uStack_54 = DAT_14c8463f0._4_4_;
  uStack_50 = (undefined4)DAT_14c8463f8;
  uStack_4c = DAT_14c8463f8._4_4_;
  local_48 = (undefined4)DAT_14c846320;
  uStack_44 = DAT_14c846320._4_4_;
  uStack_40 = (undefined4)DAT_14c846328;
  uStack_3c = DAT_14c846328._4_4_;
  local_38 = (undefined4)DAT_14c8463f0;
  uStack_34 = DAT_14c8463f0._4_4_;
  uStack_30 = (undefined4)DAT_14c8463f8;
  uStack_2c = DAT_14c8463f8._4_4_;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(ulonglong *)(param_1 + 0xc0) = CONCAT44(uStack_24,local_28);
  *(undefined4 *)(param_1 + 0xb0) = local_38;
  *(undefined4 *)(param_1 + 0xb4) = uStack_34;
  *(undefined4 *)(param_1 + 0xb8) = uStack_30;
  *(undefined4 *)(param_1 + 0xbc) = uStack_2c;
  *(undefined4 *)(param_1 + 0xa0) = local_48;
  *(undefined4 *)(param_1 + 0xa4) = uStack_44;
  *(undefined4 *)(param_1 + 0xa8) = uStack_40;
  *(undefined4 *)(param_1 + 0xac) = uStack_3c;
  *(undefined4 *)(param_1 + 0x90) = local_58;
  *(undefined4 *)(param_1 + 0x94) = uStack_54;
  *(undefined4 *)(param_1 + 0x98) = uStack_50;
  *(undefined4 *)(param_1 + 0x9c) = uStack_4c;
  FUN_141272672(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775d3fa FUN_14775d3fa body=164 status=ok
// SIG undefined FUN_14775d3fa(void)

void FUN_14775d3fa(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0xc0) = local_1c;
  FUN_141272672(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775d4a0 FUN_14775d4a0 body=155 status=ok
// SIG undefined FUN_14775d4a0(void)

void FUN_14775d4a0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_14775d53c(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775d53c FUN_14775d53c body=170 status=ok
// SIG undefined FUN_14775d53c(void)

void FUN_14775d53c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(undefined4 *)param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 200) = uVar3;
  *(undefined4 *)(param_1 + 0xcc) = uVar4;
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  *(undefined4 *)(param_1 + 0xd4) = uVar6;
  FUN_140760c2c(uVar3,&local_28);
  if (local_28 != 0) {
    local_58 = *param_2;
    uStack_50 = param_2[1];
    local_48 = 1;
    local_40 = 0;
    uStack_38 = 0;
    FUN_140a51d16(local_28 + 0x170,local_28,&local_58);
    FUN_1449db362(&local_40);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


